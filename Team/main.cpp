#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 0;
    scanf("%d",&n);
    int ret = 0;
    while(n--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a==b&&a==1)||(a==c&&a==1)||(b==c&&b==1))
        {
            ret++;
        }

    }
    printf("%d\n",ret);
    return 0;
}