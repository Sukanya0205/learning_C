#include<stdio.h>
int main(){
    int appleQty , oilQty , milkQty;
    int appleprice, oilprice, milkprice;
    int total;
    int paid;
    
    appleprice=50;
    oilprice=25;
    milkprice=20;
    
    printf("Enter Qty of apple(kg)");
    scanf("%d",&appleQty);
    
    printf("Enter Qty of oil(ltr)");
    scanf("%d",&oilQty);
    
    printf("Enter Qty of milk(ltr)");
    scanf("%d",&milkQty);
    
    total = (appleQty*appleprice)+(oilQty*oilprice)+(milkQty*milkprice);
    printf("total bill amount : %d \n",total);

    printf("Enter the amount paid by customer: ");
    scanf("%d",&paid);
    
    printf("change to return = %d \n", paid - total);
    return 0;
    
}
