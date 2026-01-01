#include<stdio.h>

int main(){
	int choice, balance = 1000, amount;
	char cont;
	
	do{
		printf("-------ATM Menu--------\n");
		printf("1.Check Balance \n");
		printf("2.Deposite Money\n");
		printf("3.Withdraw Money\n");
		printf("0.Exit\n");
		printf("---------------\n");
		
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:printf("Your Balance is = %d",balance);
			break;
			
			case 2:printf("Enter Amount to Deposite :");
			    scanf("%d",&amount);
			    balance +=amount;
			    printf("Deposited  Successfully,New Balance is = %d",balance);
			    break;
			
			case 3:printf("Enter amount to be withdraw :");
			       scanf("%d",&amount);
			       if(amount<=balance){
			       	balance -= amount;
			       	printf("Withdraw Successfully,new Balance is = %d",balance);
				   }
				   else{
				   	printf("Insufficient Balance");
				   }
		     	break;
			case 0:printf("Exiting ATM......\n");
			break;
			
			default : printf("Invalid Choice");
			
		}
        if(choice !=0){
        	printf("\nDo you want to Continue? (y/n)");
        	scanf(" %c",&cont);
		}
		else{
			cont = 'n';
		}

	}while(cont=='y' || cont=='Y');

return 0;	
}

