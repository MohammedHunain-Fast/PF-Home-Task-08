#include <stdio.h>

int main() {
	int year=0,month=0,album[2][12]={
		{12,10,15,8,5,20,25,30,10,5,8,15},
		{10,12,18,9,6,22,28,35,12,7,8,16}
	};
	
	
	printf("Enter Year: ");
	scanf("%d",&year);
	printf("Enter Month: ");
	scanf("%d",&month);
	year-=1;
	month-=1;
	printf("/t-----RESULT-----\t\n");
	printf("Photos taken:%d",album[year][month]);
		
	return 0;
}