#include<stdio.h>
void natural(int n)
{
    for(int i=0;i<=n;i++)
        printf("%d \t",i);
}
int main()
{
    int n;
    printf("enter N =");
    scanf("%d",&n);
    natural(n);
}
