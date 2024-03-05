#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a[200];
int main()
{
    int n = 0,m=0;
    scanf("%d %d",&n,&m);
    int nn = n;
    int i =0;
    while(n--)
    {
        scanf("%d",&a[i++]);
    }
    int x = 0;
    sort(a,a+nn,greater<int>());
    i = 0;
    int num = 0;
    for(int i=0;i<nn;i++)
    {
        if(i<m&&a[i]>0)
        {
            num = a[i];
        }
        else
        {
            break;
        }
    }
    for(int i=0;i<nn;i++)
    {
        if(a[i]<num)
        {
            cout<<i<<endl;
            return 0;
        }
        else if(i==nn-1&&a[i]!=0)
        {
            cout<<nn<<endl;
            return 0;
        }
    }
    
    cout<<0<<endl;

    return 0;
}