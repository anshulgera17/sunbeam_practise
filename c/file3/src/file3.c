#include <stdio.h>
#include <stdlib.h>

#define MAX 10

enum menu
{
	EXIT, ADD, DISPLAY, PRINT, FIND, DELETE, EDIT
};

typedef struct student
{
	int roll;
	char name[20];
	int marks;
}student_t;

student_t arr[MAX];
int cnt=0;

void accept_student(student_t *st)
{
	printf("enter roll, name, marks : ");
	scanf("%d%s%d", &st->roll, st->name, &st->marks);
}
void display_student(student_t *st)
{
	printf("%d, %s, %d\n", st->roll, st->name, st->marks);
}

void add()
{
	student_t s;
	if(cnt==MAX)
	{
		printf("array is full.\n");
		return;
	}
	accept_student(&s);
	arr[cnt] = s;
	cnt++;
}
void display()
{
	int i;
	for(i=0; i<cnt; i++)
		display_student(&arr[i]);
}
void print()
{
	int i;
	FILE *fp = fopen("report.txt", "w");
	for(i=0; i<cnt; i++)
	{
		fprintf(fp, "|%5d|%-20s|%5d|\n", arr[i].roll, arr[i].name, arr[i].marks);
		fprintf(stdout, "|%5d|%-20s|%5d|\n", arr[i].roll, arr[i].name, arr[i].marks);
	}
	fclose(fp);
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
			break;
		case DELETE:
			break;
		case EDIT:
			break;
		}
	}while(choice!=EXIT);
	return 0;
}
