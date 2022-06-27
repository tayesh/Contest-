#include<stdio.h>
int main()
{
    int n, i, sum=0;

    printf("Input the 10 numbers \n");
    for(i=1;i<=10;i++){
        printf("Number %d : ",i);
        scanf("%d",&n);
        if(i==10){
            printf("\n");
        }
        sum = sum+n;
    }
    float avg;
    printf("The Sum of 10 numbers is: %d \n",sum);
    avg = sum / 10.00;
    printf("The Average is: %f",avg);
    return 0;
}
