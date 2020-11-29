#include <stdio.h>
#include <stdlib.h>

#define DB_FILE "stud.db"

enum menu
{
	EXIT, ADD, DISPLAY, PRINT, FIND, DELETE, EDIT
};

typedef struct student
{
	int roll;
	int marks;
	char name[24];
}student_t;

void accept_student(student_t *st)
{
	printf("enter roll, name, marks : ");
	scanf("%d%s%d", &st->roll, st->name, &st->marks);
}
void display_student(const student_t *st)
{
	printf("%d, %s, %d\n", st->roll, st->name, st->marks);
}

void add()
{
	student_t s;
	FILE *fp;
	accept_student(&s);
	fp = fopen(DB_FILE, "ab");
	// err check
	fwrite(&s, sizeof(s), 1, fp);
	fclose(fp);
}
void display()
{
	student_t s;
	FILE *fp;
	fp = fopen(DB_FILE, "rb");
	// err check
	while( fread(&s, sizeof(s), 1, fp) > 0)
		display_student(&s);
	fclose(fp);
}
void print()
{
	student_t s;
	FILE *fp;
	fp = fopen(DB_FILE, "rb");
	// err check
	while( fread(&s, sizeof(s), 1, fp) > 0)
		fprintf(stdout, "|%5d|%-20s|%5d|\n", s.roll, s.name, s.marks);
	fclose(fp);
}
void find()
{
	int roll, found=0;
	student_t s;
	printf("enter roll to find : ");
	scanf("%d", &roll);
	FILE *fp;
	fp = fopen(DB_FILE, "rb");
	// err check
	while( fread(&s, sizeof(s), 1, fp) > 0)
	{
		if(roll == s.roll)
		{
			found = 1;
			break;
		}
	}
	fclose(fp);
	if(found)
		display_student(&s);
	else
		printf("record not found.\n");
}
void del()
{
	int roll, found=0;
	student_t s;
	printf("enter roll to delete : ");
	scanf("%d", &roll);
	FILE *fp, *ft;
	fp = fopen(DB_FILE, "rb");
	// err check
	ft = fopen("temp.db", "wb");
	// err check
	//1. copy all records into temp file, except record to be deleted.
	while( fread(&s, sizeof(s), 1, fp) > 0)
	{
		if(roll == s.roll)
			found = 1;
		else
			fwrite(&s, sizeof(s), 1, ft);
	}
	fclose(ft);
	fclose(fp);
	//2. delete original file.
	remove(DB_FILE);
	//3. rename temp file to the original file.
	rename("temp.db", DB_FILE);
	if(found)
		printf("record deleted.\n");
	else
		printf("record not found.\n");
}
void edit()
{
	int roll, found=0;
	student_t s, t;
	printf("enter roll to find : ");
	scanf("%d", &roll);
	FILE *fp;
	long size = sizeof(student_t);
	fp = fopen(DB_FILE, "rb+");
	// err check
	while( fread(&s, sizeof(s), 1, fp) > 0)
	{
		// search record
		if(roll == s.roll)
		{
			found = 1;
			// print old record.
			printf("OLD Record: ");
			display_student(&s);
			// accept new record
			printf("New Record: ");
			accept_student(&t);
			// change file pos to one record back from the cur pos.
			fseek(fp, -size, SEEK_CUR);
			// write record to file
			fwrite(&t, sizeof(t), 1, fp);
			break;
		}
	}
	fclose(fp);
	if(found==0)
		printf("record not found.\n");
}

int main(void)
{
	enum menu choice = EXIT;
	do
	{
		printf("\n\n0. EXIT\n1. ADD\n2. DISPLAY\n3. PRINT\n4. FIND\n5. DELETE\n6. EDIT\nEnter Choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
		case ADD:
			add();
			break;
		case DISPLAY:
			display();
			break;
		case PRINT:
			print();
			break;
		case FIND:
			find();
			break;
		case DELETE:
			del();
			break;
		case EDIT:
			edit();
			break;
		}
	}while(choice!=EXIT);
	return 0;
}
