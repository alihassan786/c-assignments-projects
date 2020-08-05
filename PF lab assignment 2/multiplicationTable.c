//this function is made by ali hassan reg.no sp20-bse-013.
//this function inputs a number and prints its table upto 5 terms again asks to continue this process continue until user enters n.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int no,i=1,z=5,x=6;
    bool exit=false;
    char op;
    printf("Enter a number to print its table:");
    scanf("%d",&no);
    if(no>=2 && no<=20){
    do{
    printf("%d x %d=%d\n",no,i,no*i);
    i++;
    if(i==x){
        printf("Do you want to continue (y/n):\n");
        op=getche();
        if(op!='y'){
            exit=true;
        }
        printf("\n");
        x+=5;
    }
    }while(!exit );
    }


return 0;
}
