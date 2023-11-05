/* //delete a specific element from the array
#include<stdio.h>
void main(){
	int n,i,tr,con=0,j;
	
	printf("ENter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("\nEnter elements:\n");
	for(i=1 ; i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nInserted elements:\n");
	for(i=1 ; i<=n;i++){
		printf("%d ",a[i]);
	}
	
	printf("\n");
	getch();
	
	printf("\nEnter position of the element: ");
	scanf("%d",&tr);
	
	for(i=tr ; i<n ; i++){
		a[i]=a[i+1];
	}
	for(i=1 ; i<n;i++)
	printf("%d ",a[i]);
}
*/
//delete array elements multiple time , standard
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
	int n,i,tr,con=0,j;
	char str[4];
	
	printf("ENter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("\nEnter elements:\n");
	for(i=1 ; i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nInserted elements:\n");
	for(i=1 ; i<=n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	getch();
	
	while(1){
		printf("\nWould you like to  delete an array element:(yes/no) ");
		scanf("%s",str);
			int l = strlen(str);
			
			if(l == 2){
				exit(0);
			}
					
			con++;
		printf("\nEnter the position of the deleted element: ");
		scanf("%d",&tr);
		
			for(i=tr ; i<=n ; i++){
				a[i] = a[i+1];
			}
			printf("\nUpdated array:\n");
			for(i=1 ; i<=n-con ; i++){
				printf("%d  ",a[i]);
			}		
	}
}
