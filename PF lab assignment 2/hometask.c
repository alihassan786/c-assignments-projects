#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(){

char name[]="";
int i=0,x=0;
float float1=0.0,grade,marks,tmarks;
printf("Enter your name :");
scanf("%s",&name);
fflush(stdin);

printf("Enter obtained score:");
scanf("%f",&marks);
printf("Enter total marks:\n");
scanf("%f",&tmarks);


float1=marks/tmarks;
grade=float1*100;
if(grade>90){                           //showing results
    printf("%s %0.f%% %f Excellent\n",name,grade,float1);
}
else if(grade>80 ){
    printf(" %0.f%% %f Well done\n",grade,float1);
}
else if(grade>70){
    printf(" %0.f%% %f Good\n",grade,float1);
}

else if(grade>=60 ){
    printf(" %0.f%% %f Need improvement\n",grade,float1);
}
else if(grade<50 ){
    printf(" %0.f%% %f Fail\n",grade,float1);
}





return 0;
}

