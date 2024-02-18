#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long int n = 0,m = 0,a = 0;
    scanf("%lld %lld %lld", &n, &m, &a);
    
    long long int x = n / a + (n % a > 0 ? 1 : 0);
    long long int y = m / a + (m % a > 0 ? 1 : 0);
    printf("%lld\n",x*y);

    return 0;
}