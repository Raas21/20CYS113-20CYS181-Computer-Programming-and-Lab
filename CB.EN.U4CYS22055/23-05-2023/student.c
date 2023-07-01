#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Enter the number of students");
	scanf("%d",&n);
	struct stud
	{
		char name[45], Fname[45], Mname[45];
		int rollno, phoneno;
		float sem1, sem2, cgpa;} s[76];
	for (int i=0;i<n;i++){
		printf("Enter the name of the student %d",i+1);
		scanf("%s",&s[i].name);
		printf("Enter the roll No. of the student %d",i+1);
                scanf("%d",&s[i].rollno);
		printf("Enter the father's name of the student %d",i+1);
                scanf("%s",&s[i].Fname);
		printf("Enter the mother's name of the student %d",i+1);
                scanf("%s",&s[i].Mname);
		printf("Enter the Phone No. of the student %d",i+1);
                scanf("%d",&s[i].phoneno);
	}
	int temp;
	int total[n];
	for (int i=0;i<n;i++){
		int sum=0;
		for (int j=0;j<6;j++){
			printf("Enter the marks of %s in subject %d",s[i].name,j);
			scanf("%d",temp);
			while (temp<0 || temp>100){
				printf("enter a valid mark");
				scanf("%d",temp);
			}
			sum=sum+temp;
		}
		total[n]=sum;
	}
	double avg;
	double sgpa[n];
	for (int i=0;i<n;i++){
		s[i].sem1=total[i]/60;
		s[i].cgpa=s[i].sem1;
		s[i].sem2=0;
	}
	for (int i=0;i<n;i++){
		printf("\nname: %s",s[i].name);
		printf("\nsem1 sgpa: %.2f",s[i].sem1);
		printf("\n cgpa: %.2f",s[i].sem1);
	}

return 0;
}

