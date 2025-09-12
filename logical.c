#include<stdio.h>

int main(){
	int x, y ,z;
	printf("Enter Value of X");
	scanf("%d",&x);
	printf("Enter Value of Y");
	scanf("%d",&y);
	printf("Enter Value of Z");
	scanf("%d",&z);
	
	printf("Logical Operation Result:");
	printf("AND result :%d \n",(x>5 && y<10));

	printf("OR result :%d \n",(x>5 || y<10));
	printf("NOT result :%d \n",!(x> y));

printf("AND,OR Result :%d\n",(x>5&& y<8 ||z>12));
	return 0;
}
