#include<stdio.h>
int main()
{
    int n=10, i, sum=0;
    printf("The first 10 natural number is: \n");
    for(i=1;i<=n;i++){
        printf("%d ",i);
        if(i==10){
            printf("\n");
        }
        sum = sum+i;
    }

    printf("The Sum is: %d",sum);
    return 0;
}
