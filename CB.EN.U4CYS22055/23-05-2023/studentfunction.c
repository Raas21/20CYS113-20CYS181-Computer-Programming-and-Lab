#include <stdio.h>
struct student
{
	char name[30], mother[30], father[30], roll[30];
	float sem1, sem2, cgpa;
	int phno; 
} s[72];
void details(int n)
{
	for (int i=0; i<n; i++)
	{
		printf("\nEnter the name of the student: ");
		scanf("%s", &s[i].name);
		printf("\nEnter the student's roll number: ");
		scanf("%s", s[i].roll);
		printf("\nEnter the student's father's name: ");
		scanf("%s", &s[i].father);
		printf("\nEnter the student's mother's name: ");
		scanf("%s", &s[i].mother);
		printf("\nEnter the student's contact number: ");
		scanf("%d", &s[i].phno);
	}	
}
void mark(int n)
{
	double total;
	int marks[6] = {0,0,0,0,0,0};
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<6; j++)
		{

			printf("Enter marks of %s in subject number %d: ", s[i].name, j+1);
			scanf("%d", &marks[j]);
			while(marks[j]<0 || marks[j]>100)
			{
				printf("please enter valid mark (within 0-100)");
				scanf("%d", &marks[j]);
			}
		}
		total = marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5];
		s[i].sem1 = (total/60);
		s[i].cgpa = s[i].sem1;
		s[i].sem2 = 0;	
	} 
}

void display(int n)
{
	for (int i=0; i<n; i++)
	{
		printf("\n Name of student: %s", s[i].name);
		printf("\n Student's mother's name: %s", s[i].mother);
		printf("\n Student's father's name: %s", s[i].father);
		printf("\n Student's roll number: %s", s[i].roll);
		printf("\n Student's contact number: %d", s[i].phno);
		printf("\n Student's Semester 1 SGPA: %.2f", s[i].sem1);
		printf("\n Student's Semester 2 SGPA: %.2f", s[i].sem2);
		printf("\n Student's CGPA: %.2f", s[i].cgpa);
	}
	
}

void main()
{
	int noofstud; 
	
	printf("Enter number of students: ");
	scanf("%d", &noofstud);
	details(noofstud);
	mark(noofstud);
	display(noofstud);
	
}
