#include<stdio.h>

int main(){
	
	int amount;
	printf("Enter your shopping Amount:");
	scanf("%d",&amount);
	
	if(amount>499){
		printf("Congrats, You get Free Delivery");
	}
	
	else{
	printf("Delivery Charges will Apply");	
	}
	
	return 0;
}
