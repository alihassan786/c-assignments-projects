#include<stdio.h>
int main(){
int x[3][3];
int sum=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("Enter a value for X[%d][%d]:",i,j);
        scanf("%d",&x[i][j]);
        sum+=x[i][j];
    }
}
printf("The sum of all elements of the matrix is :%d",sum);




}
