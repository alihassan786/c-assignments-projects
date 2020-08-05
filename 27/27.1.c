#include<stdio.h>
#include<string.h>
int main(){
compare("ABCDE","ABCE");
compare("ABCDE","");
compare("Pakistan","Iran");
compare("Pak","Iran");
char y[100]="Pak";
char str3[100];
strcat(y,"China");
printf("The concatenation of Pak and China is :%s\n",y);
strcpy(str3,y);
printf("The str3 is %s\n",str3);
strcat(y,"Economic Corridor");
printf("The concatenation of PakChina and Economic corridor is  is :%s",y);
}
void compare(char x[],char y[]){
printf("The comparison of %s and %s returns %d\n",x,y,strcmp(x,y));
}

