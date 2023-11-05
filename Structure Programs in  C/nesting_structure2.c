#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
	char first_name[15];
	char last_name[15];
	int roll;
	char grade[1];
	int tol_mark;
	
}student;
void main(){
	int n,i;
		printf("Enter total number of input: ");
		scanf("%d",&n);	
		
		student stu[n];
		
		for(i=0 ; i<n ; i++){
			puts("\nEnter First name: ");
			scanf("%s",stu[i].first_name);
			
			
			puts("\nEnter Last name: ");
			scanf("%s",stu[i].last_name);
			
			
			puts("Enter Roll no: ");
			scanf("%d",&stu[i].roll);
			
			puts("Enter Total marks: ");
			scanf("%d",&stu[i].tol_mark);
			
			printf("Student Grade: ");
			scanf("%s",stu[i].grade);
			
			printf("\n\n");
		}
		
		for(i=0 ; i<n ; i++){
			printf("\nName: %s %s",stu[i].first_name,stu[i].last_name);
			printf("\nRoll no: %d",stu[i].roll);
			printf("\nTotal marks: %d",stu[i].tol_mark);
			printf("\nGrade of student: %s",stu[i].grade);
			
			printf("\n\n");
		}
		
//	strcpy(stu.first_name,"Arijit");
//	strcpy(stu.last_name," chowdhury");
//	
//	printf("\n%s %s",stu.first_name,stu.last_name);
}
