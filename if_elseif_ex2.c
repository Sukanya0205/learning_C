#include<stdio.h>

int main(){
	
	int temp;
	printf("Enter todays Temprature:");
	scanf("%d",&temp);
	
	if(temp>=40){
	printf("Very Hot");
	}
	
	else if(temp>=30){
	printf("Hot");	
	}
	
	else if(temp>=18){
	printf("Moderate");	
	}
	
	else if(temp>=8){
	printf("Cold");	
	}
	
	else{
	printf(" Very Cold");	
	}

	return 0;
}
