#include<stdio.h>

int main(){
	char op;
	int a,b;
	printf("Enter First Number");
	scanf("%d",&a);
	printf("Enter Second Number");
	scanf("%d",&b);
	
	printf("Enter Operator(+,-,*,/):");
	scanf(" %c",&op);
	
	switch(op){
		case'+':printf("Sum = %d", a+b);
		break;
		case'-':printf("Difference = %d", a-b);
		break;
		case'*':printf("Multiplication = %d", a*b);
		break;
		case'/':printf("Division = %d", a/b);
		break;
		default:printf("Invalid Character");
		
	}
			
	
return 0;
}
