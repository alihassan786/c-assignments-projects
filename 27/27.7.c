#include<stdio.h>
#include<stdlib.h>
int main(){
    char name[50];
printf("Enter the name of your organization:");
gets(name);
char *token=strtok(name," ");
    while(token!=NULL)
    {
        printf("%c",toupper(*token));
        token=strtok(NULL," ");
}
}
