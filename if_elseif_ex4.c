#include<stdio.h>
	
int main(){
	
	int hotelOpen, FoodReady, Payment;
	printf("is Hotel open? (1 = yes , 0 - No)");
	scanf("%d",&hotelOpen);
	
	if(hotelOpen==1){
	  printf("is Food redy? (1 = yes , 0 - No)");
	  scanf("%d",&FoodReady);
	  
	  if(FoodReady == 1 ){
		printf("Payment Done? (1 = yes , 0 - No)");
		scanf("%d",&Payment);
		
	    if(Payment==1){
	    	printf("Ordered Successfully");
		}
		else{
			printf("Order gets Cancelled");
		}
		
	}else{
		printf("Food is Not ready");
	}
	
	}else{
		printf("Hotel is Not Open.");
	}
	return 0;
}
