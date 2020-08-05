#include<stdio.h>

    void reverse(char *p){
    if(p[0]=='\0')
    return;
    else reverse(&p[1]);
    printf("%c",p[0]);

    }
int main()
{
 char str[100];
    printf("Enter a string :");
    gets(str);
    printf("The reversed string is :\n");
    reverse(str);
    return 0;
}
