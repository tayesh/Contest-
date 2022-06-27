#include<stdio.h>
int main()
{
    int n, i, sum=0;
    scanf("%d",&n);
    printf("The first %d natural number is: \n",n);
    for(i=1;i<=n;i++){
        printf("%d ",i);
        if(i==n){
            printf("\n");
        }
        sum = sum+i;
    }

    printf("The Sum is: %d",sum);
    return 0;
}
