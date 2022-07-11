#include<stdio.h>
int main()
{
    while(1)
    {
        int n,q,r,i=0,sum=0,m,o;
        scanf("%d",&n);
        m=n;
        o=n;
        while(n!=0)
        {
            r=n%10;
            n=n/10;
            i++;
        }
        while(m!=0)
        {
            int j,k=1;
            q=m%10;
            m=m/10;
            for(j=1;j<=i;j++){
                k=k*q;
            }
            sum=sum+k;

        }
        if(sum==o){
            printf("%d is an Armstrong number \n\n",o);
        }
        else{
            printf("%d is not an Armstrong number \n\n",o);
        }
    }
    return 0;
}
