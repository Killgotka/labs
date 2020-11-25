#include<stdio.h>
#include<math.h>

int main()
{
    int k,n;
    scanf("%d\n",&k);
    scanf("%d",&n);
    printf("%d",(k+n-2)%7+1);
}