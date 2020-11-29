#include <stdio.h>
union result
{
	char grade;
	float marks;
};
struct student
{
	int roll;
	char name[20];
	int std;
	union result res;
};
int main()
{
	struct student s1;
	printf("enter roll, name, std : ");
	scanf("%d%s%d", &s1.roll, s1.name, &s1.std);
	getchar(); // to take \n from stdin & clear it.
	if(s1.std > 4)
	{
		printf("enter marks : ");
		scanf("%f", &s1.res.marks);
	}
	else
	{
		printf("enter grade : ");
		s1.res.grade = getchar();
	}
	printf("%d %s %d\n", s1.roll, s1.name, s1.std);
	if(s1.std > 4)
		printf("marks : %f\n", s1.res.marks);
	else
		printf("grade : %c\n", s1.res.grade);
	return 0;
}
