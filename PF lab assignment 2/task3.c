//Design an interactive input loop that scans pairs of integers until it reaches a pair in which the first integer
//evenly divides the second
#include<stdio.h>
int main(){
int no1,no2;

while(no2%no1!=0){
printf("Enter 1st number:");
scanf("%d",&no1);
printf("Enter 2nd number:");
scanf("%d",&no2);

}
printf("No 1=%d No2=%d",no1,no2);





return 0;

}
