#include<stdio.h>
	
int main(){
	
	int ticket, idProof, luggage;
	printf("Do you have a ticket? (1 = yes , 0 - No)");
	scanf("%d",&ticket);
	
	if(ticket==1){
	  printf("Do you have a idProof? (1 = yes , 0 - No)");
	  scanf("%d",&idProof);
	  
	  if(idProof == 1 ){
		printf("is luggage within 20 kg? (1 = yes , 0 - No)");
		scanf("%d",&luggage);
		
	    if(luggage==1){
	    	printf("Check in Successfully");
		}
		else{
			printf("Extra Luggage charges apply");
		}
		
	}else{
		printf("Id proof required");
	}
	
	}else{
		printf("No ticket No Entry");
	}
}
