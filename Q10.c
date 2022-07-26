#include<stdio.h>
void primefactor(int);
int main()
{
    int n;
    printf("enter your number =");
    scanf("%d",&n);
    primefactor(n);
    return 0;
}
void primefactor(int n)
{
    int j,i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                    break;
            }
            if(i==j || i==1)
            {
                 printf("%d\t",i);
                 n=n/i;
                if(n%i==0)
                        i--;
            }
        }
    }
}
