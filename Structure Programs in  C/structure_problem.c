#include<stdio.h>
typedef struct student{
	int roll;
	char name[15];
	char dept[20];
	char course[30];
	int YearOfJoin;
}stu;

void fun(stu s1, stu s2){
	if(s1.dept == s2.dept){
		printf("\nHave same Department");
	}
	else	printf("\nDifferent Depertment");
}
void main(){
		stu s1,s2;
	printf("1st student: \n");
	scanf("%d",&s1.roll);
	scanf("%s",s1.name);
	scanf("%s",s1.dept);
	scanf("%s",s1.course);
	scanf("%d",&s1.YearOfJoin);
	printf("\n\n");
	printf("\n2nd student:\n");
	scanf("%d",&s2.roll);
	scanf("%s",s2.name);
	scanf("%s",s2.dept);
	scanf("%s",s2.course);
	scanf("%d",&s2.YearOfJoin);
	
	fun(s1,s2);
}
