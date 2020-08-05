#include<stdio.h>
int main(){
char str[100];
int i,j;
printf("Enter the name of your organization:");
gets(str);
printf("The abbreviation is :");
printf("%c",toupper(str[0]));
for(i=0;str[i]!='\0';i++){
if(str[i]==' '){
        j=i+1;
    printf("%c",toupper(str[j]));
}

}
}
