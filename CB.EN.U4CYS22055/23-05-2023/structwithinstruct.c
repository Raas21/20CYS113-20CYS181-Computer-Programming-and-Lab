#include <stdio.h>
struct student
{
	char mother[30], father[30], roll[30];
	struct name
	{
		char fname[30], lname[30];
	} n;
	float sem1, sem2, cgpa;
	int phno; 
} s[72];
void main()
{
	int noofstud; 
	double total;
	int marks[6] = {0,0,0,0,0,0};
	printf("Enter number of students: ");
	scanf("%d", &noofstud);
	for (int i=0; i<noofstud; i++)
	{
		printf("\nEnter the first name of the student: ");
		scanf("%s", &s[i].n.fname);
		printf("\nEnter the last name of the student: ");
		scanf("%s", &s[i].n.lname);		
		printf("\nEnter the student's roll number: ");
		scanf("%s", s[i].roll);
		printf("\nEnter the student's father's name: ");
		scanf("%s", &s[i].father);
		printf("\nEnter the student's mother's name: ");
		scanf("%s", &s[i].mother);
		printf("\nEnter the student's contact number: ");
		scanf("%d", &s[i].phno);
	}
	for (int i=0; i<noofstud; i++)
	{
		for (int j=0; j<6; j++)
		{

			printf("\nEnter marks of %s in subject number %d", s[i].name, j+1);
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
	for (int i=0; i<noofstud; i++)
	{
		printf("\n Name of student: %s %s", s[i].n.fname, s[i].n.lname);
		printf("\n Student's mother's name: %s", s[i].mother);
		printf("\n Student's father's name: %s", s[i].father);
		printf("\n Student's roll number: %s", s[i].roll);
		printf("\n Student's contact number: %d", s[i].phno);
		printf("\n Student's Semester 1 SGPA: %.2f", s[i].sem1);
		printf("\n Student's Semester 2 SGPA: %.2f", s[i].sem2);
		printf("\n Student's CGPA: %.2f", s[i].cgpa);
	}
	
}
