#include<stdio.h>

int main(){
	int marks;
	printf("Enter the Marks of student :");
	scanf("%d",&marks);
	
	if(marks>35){
	printf("The Student has passed the exam");
	}
	
	else{
	printf("The student has failed  the Exam");	
	}
	return 0;
}
