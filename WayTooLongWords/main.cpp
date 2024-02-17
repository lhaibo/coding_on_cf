#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 0;
    scanf("%d",&n);
    while(n--)
    {
        string s;
        cin>>s;

        if(s.length()<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
    }

    return 0;
}