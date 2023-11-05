#include<stdio.h>
typedef struct cricketer{
	char first_name[15];
	char last_name[15];
	int age;
	int tol_matches;
	float avg;
}cricket;
void main(){
	cricket crk[3];
	int i;
	
	for(i=0 ; i<3 ; i++){
		printf("Enter first name: ");
		scanf("%s",crk[i].first_name);
		
		printf("Enter last name: ");
		scanf("%s",crk[i].last_name);
		
		printf("\nEnter age: ");
		scanf("%d",&crk[i].age);
		
		printf("\nEnter total matches: ");
		scanf("%d",&crk[i].tol_matches);
		
		printf("\nEnter average runs: ");
		scanf("%f",&crk[i].avg);
		printf("\n\n");
	}
	
	for(i=0 ; i<3 ; i++){
		printf("\nName: %s %s",crk[i].first_name,crk[i].last_name);
		printf("\nAge: %d",crk[i].age);
		printf("\nTotal Matches: %d",crk[i].tol_matches);
		printf("\nAverage Runs: %f",crk[i].avg);
	}
}
