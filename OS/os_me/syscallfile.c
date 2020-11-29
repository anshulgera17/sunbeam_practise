#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#define FB_FILE "abc.db"


typedef struct student{
int roll;
char name[30];
int marks;
}stud_t;

accept_record(stud_t *s)
{
	printf("enter student rollno:\n");
	scanf("%d",&s->roll);
	printf("Enter name of student:\n");
	scanf("%s",s->name);
	printf("enter student marks:\n");
	scanf("%d",&s->marks);
}

print_record(stud_t *s)
{
	printf("%-10d %s  %-10d\n",s->roll,s->name,s->marks);
}

void add()
{
	int fd;
	stud_t s;
	accept_record(&s);

	fd=open(FB_FILE,O_CREAT|O_WRONLY|O_APPEND,0644);
	
	if(fd<0)
		{
			perror("file open failed");
			_exit(1);
		}

		write(fd,&s,sizeof(s));
		close(fd);
}

void display()
	{
		int fd;
		stud_t s;
		fd=open(FB_FILE,O_RDONLY);
		if(fd<0)
			{
				perror("read on work properly\n");
				_exit(1);
			}
		while(read(fd,&s,sizeof(s))>0)
		{
			print_record(&s);
		}
		close(fd);
	}	

void find()
	{
		int fd;
		
			int searchroll;
			printf("enter student roll no for search:\n");

			scanf("%d",&searchroll);
		stud_t s;
		fd=open(FB_FILE,O_RDONLY);
		
		if(fd<0)
			{
				perror("read not working properly\n");
				_exit(1);
			}
			
		while(read(fd,&s,sizeof(s))>0)
			{

			if(searchroll == s.roll)
				{	
				printf("student found");
				
				print_record(&s);

				}
		
		}
		close(fd);
	}

void delete()
{
int fd,ft,found=0;
int roll;
	stud_t s;
	printf("Enter rollno to delete:\n");
	scanf("%d",&roll);

			fd=open(FB_FILE,O_RDONLY);

			ft=open("temp.db",O_CREAT|O_WRONLY,0644);	
		
		while(read(fd,&s,sizeof(s))>0)
			{
			if(roll == s.roll)	
				found=1;	
				else
				write(ft,&s,sizeof(s));
			}
		
		close(fd);
		close(ft);
		remove(FB_FILE);
		
		rename("temp.db",FB_FILE);
		if(found)
		{	
		printf("Record deleted");
		}
	else
		printf("record not found");
}


void edit() //not complete
{
int fd;

int roll;

long size=sizeof(stud_t);
stud_t s,t;
	printf("Enter rollno to edit:\n");
	scanf("%d",&roll);
	fd = open(FB_FILE,O_RDWR);
			if(fd<0)
			{
			perror("open failed:\n");
			_exit(1);
			}

		while(read(fd,&s,sizeof(s))>0)
			{
			if(roll == s.roll)	
			{
				printf("OLD RECORD:\n");
				print_record(&s);
				printf("enter new record:\n");
				accept_record(&t);
				lseek(fd,-size,SEEK_CUR);
				write(fd,&t,sizeof(t));
				
			}

			}
		
		close(fd);
		
}



int main()
{

	int choice=0;

	do
	{
	printf("0.EXIT\n 1.Add Record\n 2.Show Record\n 3.Find Record\n 4.Delete Record\n 5.Edit Record\n Enter Choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		add();
		break;
		case 2:
		display();
		break;
		case 3:
		find();
		break;
		case 4:
		delete();
		break;
		case 5:
		edit();
		break;
	}


	}while(choice!=0);


	return 0;
}
