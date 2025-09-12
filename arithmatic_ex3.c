#include<stdio.h>

int main(){
	int appleQty ,oilQty,milkQty;
	int applePrice,oilPrice,milkPrice ;
	int paid;
	int total;
	
	applePrice=50;
	oilPrice=25;
	milkPrice=20;
	
	printf("Enter Qty of Apple(kg)");
	scanf("%d",&appleQty);
	printf("Enter Qty of oil(ltr)");
	scanf("%d",&oilQty);
	printf("Enter Qty of milk(ltr)");
	scanf("%d",&milkQty);
	
	total=(appleQty*applePrice)+(oilQty*oilPrice)+(milkQty*milkPrice);
	printf("Total Bill Amount:%d\n",total);
	
	printf("Enter the amount paid by customer:");
	scanf("%d\n",&paid);
	
	printf("change to return=%d\n", paid-total);
	return 0;
	
}
