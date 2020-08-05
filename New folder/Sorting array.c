#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b);   //function prototypes
void sort(int arr[],int n);
int searcharray(int arr[],int n,int searchnum);
void printarray(int arr[],int n);
int main(){
int arr[]={9,8,5,6,5,4,3,2,1,0};
int number=0;
int n=sizeof(arr)/sizeof(arr[0]);//getting size of the array
printf("The array before sorting is \n");
printarray(arr,n);
printf("\n");
sort(arr,10);
printf("The array after sorting is \n");
printarray(arr,n);
printf("\n");
printf("Enter a number to search:");
scanf("%d",&number);
searcharray(arr,n,number);
system("pause");
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;}
    void printarray(int arr[],int n){
        printf("\t");
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
            printf("  ");
        }
    }
void sort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){//second loop for comparisons
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);//swapping
            }}}
            }
int searcharray(int arr[],int n,int searchnum){
int times=0;
for(int i=0;i<n;i++){
    if(arr[i]==searchnum){
        times++;//incrementing the number of occurences
    }
    }
    printf("The element %d is found %d times in the array.\n",searchnum,times);
    }
