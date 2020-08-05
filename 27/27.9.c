#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
printf("Enter a string:");
gets(str);
for(int i=0;i<strlen(str);i++){
    if(isalpha(str[i])){
        printf("%c",str[i]);
    }



}





}
