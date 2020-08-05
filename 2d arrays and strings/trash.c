#include<stdio.h>
int main(){
int x[3][3]={{2,2,2},{2,2,2},{2,2,2}};
int y[3][3]={{2,2,2},{2,2,2},{2,2,2}};
int z[3][3]={{},{}};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        z[i][j]=x[i][j]+y[i][j];
    }

}
printf("The sum of 3X3 array is :")
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("z[%d][%d]=%d    ",i,j,z[i][j]);
    }
    printf("\n");
}


return 0;
}
