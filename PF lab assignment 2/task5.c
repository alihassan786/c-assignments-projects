//this program is made by ali hassan sp20-bse-013
#include <stdio.h>
#include <stdlib.h>
void Veiw_Instructions();

double comb(int n, int r);
double perm(int n, int r);
int validate(int *ptrn);
int fact(int n);
int main()
{
    int n, r,input;
    double ncr, npr;

    printf("Please Enter the value of n: ");
    scanf("%d",&n);
  if(n<0){
        validate(&n);

    }
    printf("PLease Enter the value of r: ");
    scanf("%d", &r);
    if(r<0){

        validate(&r);
    }

    Veiw_Instructions();

    scanf("%d", &input);
    if(input == 1)
    {
        printf("Multiplication of the given numbers is: %d\n", n*r);

    }
    else if(input == 2)
    {
        ncr = comb(n, r);
        printf("Value of %dC%d = %0.lf\n",n,r,ncr);
    }
    else if(input == 3)
    {
        npr = perm(n, r);
        printf("\nThe value of %dp%d is: %0.2f\n",n,r,npr);
    }
    else if(input == -1)
    {
        exit(0);
    }
    else{
        printf("Enter the valid instruction\n");
    }

}

void Veiw_Instructions()
{

    printf("Enter 1 for Multiplication\n");
    printf("Enter 2 for nCr\n");
    printf("Enter 3 for nPr\n");
    printf("Enter -1 for exit\n");


}
double comb(int n, int r)
{
    double ncr;
    ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
double perm(int n, int r)
{
    double npr;
    npr = fact(n) / fact(n - r);
    return npr;
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int validate(int *ptrn){//input validation function using pointers
do{
            printf("Enter a valid value of n: ");
            scanf("%d",ptrn);
        }while(*ptrn<0);

}
