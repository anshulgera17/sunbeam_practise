#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/*
_exit(code);
	- arg1: exit code -- 0 success, non-zero failure.

int fd = open("filepath", flags, mode);
	- arg1: file path
	- arg2: flags-- O_WRONLY, O_RDONLY, O_RDWR | O_APPEND, O_TRUNC, O_CREAT
	- arg3: mode(perm) -- to be given only if 2nd arg contains O_CREAT - octal number
		- e.g. rwx rw- r--	-> 	111 110 100 -> 0764
	- return: file desc on success.
		-1 on failure.

close(fd);
	- arg1: file desc

ret = write(fd, addr, size);
	- arg1: file desc
	- arg2: addr of var to be written in file
	- arg3: num of bytes to be written in file.
	- returns: number of bytes successfully written.

ret = read(fd, addr, size);
	- arg1: file desc
	- arg2: addr of var in which data to be read from file.
	- arg3: num of bytes to be read from file.
	- returns: number of bytes successfully read.
		- if end of file is reached, it returns 0.

newpos = lseek(fd, offset, origin);
	- arg1: file desc
	- arg2: num of bytes by which pos to change -- +ve or -ve.
	- arg3: file pos to be changed w.r.t. which pos?
		SEEK_SET -- from beginning of file -- offset must +ve
		SEEK_END -- from end of file -- offset must be -ve
		SEEK_CUR -- from cur file pos -- offset can be +ve or -ve
	- return: new filepos from the beginning of file.
*/


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
	int fd;
	student_t s;
	accept_student(&s);

	// rw- r-- r-- => 110 100 100 => 0644
	fd = open(DB_FILE, O_WRONLY | O_APPEND | O_CREAT, 0644);
	if(fd < 0)
	{
		perror("open() failed");
		_exit(1);
	}

	write(fd, &s, sizeof(s));

	close(fd);
}
void display()
{
	int fd;
	student_t s;

	fd = open(DB_FILE, O_RDONLY);
	if(fd < 0)
	{
		perror("open() failed");
		_exit(1);
	}

	while( read(fd, &s, sizeof(s)) > 0 )
		display_student(&s);

	close(fd);
}
void print()
{
	// lab assign
}
void find()
{
	int fd;
	int roll;
	printf("enter roll to search : ");
	scanf("%d", &roll);

	student_t s;

	fd = open(DB_FILE, O_RDONLY);
	if(fd < 0)
	{
		perror("open() failed");
		_exit(1);
	}

	while( read(fd, &s, sizeof(s)) > 0 )
	{
		if(roll == s.roll)
		{
			printf("student found: ");
			display_student(&s);
		}
	}

	close(fd);
}
void del()
{
}
void edit()
{
	int fd;
	int roll;
	student_t s, t;
	long size = sizeof(student_t);
	
	printf("enter roll to search : ");
	scanf("%d", &roll);

	fd = open(DB_FILE, O_RDWR);
	if(fd < 0)
	{
		perror("open() failed");
		_exit(1);
	}

	while( read(fd, &s, sizeof(s)) > 0 )
	{
		if(roll == s.roll)
		{
			printf("student found: ");
			display_student(&s);

			printf("enter new details : \n");
			accept_student(&t);

			lseek(fd, -size, SEEK_CUR);

			write(fd, &t, sizeof(t));
		}
	}

	close(fd);
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
