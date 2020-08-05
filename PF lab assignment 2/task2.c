#include<stdio.h>
#include<stdbool.h>
#include<stdbool.h>
int main(){
    int number=0,sum=0,counter=0,input_status;
    float average=0;
    bool exit=false;
while(input_status!=EOF && counter<=20)
{
    printf("Enter a your marks :");
    input_status=scanf("%d",&number);

    if(input_status!=EOF){
        sum+=number;
        counter++;
    }

}
        printf("\n");
        if(counter==0){
        printf("You did not enter any number");
        }
        else if(counter>0){
             average=(sum/counter);
        printf("The average is %.2f",average);
        }








return 0;
}
