#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    scanf("%lld",&n);
    if(n&1)
        printf("%lld\n",(n+1)/2);
    else
    printf("%lld\n",n+1);

    return 0;

}
