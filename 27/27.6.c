#include<stdio.h>
#include<stdlib.h>
int main(){
    char reg[50];
printf("Enter your registration number:");
gets(reg);
char *token=strtok(reg,"-");
    while(token!=NULL)
    {
        printf("%s\n",token);
        token=strtok(NULL,"-");
}
}
