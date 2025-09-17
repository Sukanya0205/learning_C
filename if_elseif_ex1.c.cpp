#include<stdio.h>

int main(){
	
	int age;
	printf("Enter your Age:");
	scanf("%d",&age);
	
	if(age<=5){
	printf("Ticket Free - Enjoy");
	}
	
	else if(age>6 && age<60){
	printf("Full Ticket");	
	}
	
	else if(age>=60 && age<75){
	printf("Senior Citizen - half");	
	}
	
	else{
	printf("Free Ticket");
	}
	return 0;
}
