#include<stdio.h>
int fact(int x){
	int pro = 1;
	for(x ; x>=1 ; x--){
		pro *= x;
	}
	return pro;
}
int combi(int i, int j, int n){
	int res;
	
	res = fact(i) / (fact(j) * fact(i-j));
	return res;
}
void main(){
	int i,j,n,nCr;
	
	printf("Enter the line number: ");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++){
		for(j=i ; j<n ; j++){
			printf("  ");
		}
		for(j=0 ; j<=i ; j++){
			nCr = combi(i,j,n);
			printf("%d   ",nCr);
		}
		printf("\n");
	}
}
