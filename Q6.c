#include<stdio.h>
int fact(int );
int main()
{
    int n;
    printf("enter number to find factorial =");
    scanf("%d",&n);
    printf("factorial of %d is = %d ",n,fact(n));
    return 0;
}
int fact(int n)
{
    int p=1;
    for(int i=n;i>0;i--)
        p=p*i;
    return p;
}

