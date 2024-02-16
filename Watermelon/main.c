#include <stdio.h>

int main()
{
    int n=0;

    scanf("%d",&n);

    if(n>=4&&n%2==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}