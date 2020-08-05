#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    bool alphabet,number,alphanum,mixed;
    printf("Enter a string:");
   char str[50];
   gets(str);
   for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            continue;
        }

    else if(!isalnum(str[i])){
    mixed=true;
   }
   else if(isalpha(str[i])){
    alphabet=true;
   }
   else if(isdigit(str[i])){
    number=true;
   }
   }
   if(mixed){
    printf("Mixed");
    }
    else if(alphabet && number){
        printf("Alphanumeric");
    }
    else if(alphabet){
        printf("Alphabets");
    }
    else if(number){
        printf("Numbers");
    }
}
