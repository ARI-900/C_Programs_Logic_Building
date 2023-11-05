#include<stdio.h>
void main(){
	int arr[15],no,i,no2,j;
	
	printf("Enter a decimal number: ");
	scanf("%d",&no);
	no2 = no;
	i=0;
	while(no != 0){
		
		arr[i] = (no%2);
			no = no/2;
			i++;
	}

	printf("\nDecimal value of %d is: ",no2);
	for(j=i-1 ; j>=0 ; j--){
		printf("%d",arr[j]);
	}
	
}
