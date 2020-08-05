#include<stdio.h>

void reverse(char *p);
int main()
{
 char str[100];
    printf("Enter a string :");
    gets(str);
    printf("The reversed string is :  ");
    reverse(str);
    return 0;
}
 void reverse(char *p){
    if(p[0]=='\0')
    return;
    else reverse(&p[1]);
    printf("%c",p[0]);

    }
