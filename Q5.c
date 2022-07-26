#include<stdio.h>
void natural(int);
int main()
{
    int n;
    printf("enter N =");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int n)
{
    int d=1;
    printf("first %d odd numbers are =\n",n);
    for(int i=1;i<=n;i++)
    {
            printf("%d \t",d);
            d=d+2;
    }
}
