#include<stdio.h>
#include<string.h>
int main()
{
char s1[5]="ABCDE";
char s2[4]="ABCE";
char s3[5]="";
char s4[10]="Pakistan";
char s5[10]="Iran";
char s6[10]="Pak";
char s7[10]="China";
char s8[10]="Economic corridor";
printf("The comparison of ABCDE and ABCE strings returns %d\n",strcmp(s1,s2));
printf("The comparison of ABCDE "" strings returns %d\n",strcmp(s1,s3));
printf("The comparison of Pakistan and Iran return %d\n",strcmp(s4,s5));
printf("The comparison of Pak and Iran return %d\n",strcmp(s6,s5));
printf("The concatenation of Pakistan and China return\n ");
puts(strcat(s6,s7));
printf("The concatenation of PakChina and Economic corridor is\n ");
puts(strcat(s6,s8));






}
