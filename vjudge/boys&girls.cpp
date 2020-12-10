#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);
    int n,m;
    cin>>n>>m;
if(n>=m)
    {
        string s(n+m,'B');
        for(int i=1;i<2*m;i+=2)
        {
            s[i]='G';
            //s[j]='G';
        }
        cout<<s<<endl;
}

    else
    {
        string s(n+m,'G');
        for(int i=1;i<2*n;i+=2)
        {
           // s[i]='G';
            s[i]='B';
        }
cout<<s<<endl;
}

   return 0;
}
