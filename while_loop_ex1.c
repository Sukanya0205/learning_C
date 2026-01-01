#include<stdio.h>

int main(){
	int battery = 100;//initilization
    
    while(battery>0){
    	printf("Battery : %d\n",battery);
    	battery -=10;
	}
	printf("Battery Empty");
}

