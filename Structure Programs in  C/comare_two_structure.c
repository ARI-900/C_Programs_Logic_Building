#include<stdio.h>
#include<stdbool.h>
struct date{
	int day;
	int month;
	int year;
};
void main(){
	struct date x,y;
	bool flag1 = 0,flag2 = 0,flag3 = 0;	//true/false
		x.day = 23;
		x.month =11;
		x.year = 1999;
		
		y.day = 25;
		y.month = 11;
		y.year = 1999;
		
//		y = x;	// deep copy;
//		printf("%d		%d		%d",y.day,y.month,y.year);
	
	
//		if(y.day == x.day)	// compairing
//			puts("Equal");
//		else puts("Not Equal");
//		
//			if(y.month == x.month)
//			puts("Equal");
//		else puts("Not Equal");
//		
//			if(y.year == x.year)
//			puts("Equal");
//		else puts("Not Equal");

// Alternative process

		if(x.day == y.day)	flag1 = 1;
		if(x.month == y.month)	flag2 = 1; // flag = true
		if(x.year == y.year)	flag3 = 1;
		
		if(flag1==1 && flag2 == 1 && flag3 == 1)		puts("Equal");
		else		puts("Unequal");
		
}
