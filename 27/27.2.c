#include<stdio.h>
#include<string.h>
int main(){

    char s1[15]="new string";
    char s2[15]="another string";
    char *p1=s1;

    p1=s2;
    printf("Orignal array: ");
    puts(s1);
    printf("\nChange the string using assignmnet operator : %s \n",p1);
    strcpy(s1,s2);
    printf("\nChange the string using strcpy : %s \n",s1);

    return 0;
}


