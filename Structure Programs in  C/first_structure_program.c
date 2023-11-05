#include<stdio.h>
struct book{
	char name[15];
	int price;
	int book_pages;
}bk1,bk2;
void main(){
	printf("Enter name of the book: ");
	gets(bk1.name);
	
	printf("\nEnter price: ");
	scanf("%d",&bk1.price);
	
	printf("\nNumber of pages: ");
	scanf("%d",&bk1.book_pages);
	
	puts(bk1.name);
	printf("%d\n%d",bk1.price,bk1.book_pages);
}
