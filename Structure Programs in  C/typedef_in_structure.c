// typedef old_name new_name;
#include<stdio.h>
#include<string.h>
typedef struct student{
	char name[20];
	int roll;
	int ma1,ma2;
}stu;
void main(){
//	struct student s1;
//	strcpy(s1.name,"arijit Chowdhury");
//	s1.roll=1;
//	s1.ma1=89;
//	s1.ma2=92;

//	struct student s2;
//	struct student s3;
//	struct student s4;

//	struct student s5;
//	strcpy(s5.name,"avhijit Chowdhury");
//	s1.roll=1;
//	s1.ma1=79;
//	s1.ma2=82;
	
	stu s1;
	strcpy(s1.name,"arijit Chowdhury");
	s1.roll=1;
	s1.ma1=89;
	s1.ma2=92;

	
	printf("%s\n",s1.name);
	//printf("%s",s5.name);
}
