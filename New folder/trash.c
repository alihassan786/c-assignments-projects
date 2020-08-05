//REG.NO=sp20-bse-013
#include<stdio.h>
#include<stdlib.h>
int main(){

int nums[10]={2,6,-4,8,10,-12,14,16,18,20};
printf("Using nums[i]:");
for(int i=0;i<10;i++){
    printf(" %d  ",nums[i]);
}
printf("\nUsing *(nums+i)");
for(int i=0;i<10;i++){

printf(" %d  ",*(nums+i));
}

printf("\nUsing *(iptr+i)");
int *iptr=nums;
for(int i=0;i<10;i++){

printf(" %d  ",*(iptr+i));
}
printf("\nUsing (iptr[i])");
for(int i=0;i<10;i++){

printf(" %d  ",iptr[i]);
}

printf("\nUsing *ptr");
for(int i=0;i<10;i++){

printf(" %d  ",*iptr);
*iptr++;
}
printf("\n");




system("pause");

}
