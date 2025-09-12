#include<stdio.h>

int main(){
	int age;
	printf("Enter your age:");
	scanf("%d\n",&age);
	
	printf("\n Eligible for vote?= %d\n",age>=18);
	return 0;
}



