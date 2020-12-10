#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
while(cin>>s>>t)
{
    int sz=s.size();
    int j=0;
   for(int i=0;i<t.size();i++)
        {
            if(t[i]==s[j])
                j++;
        }

    if(j==sz)printf("Yes\n");
    else
    printf("No\n");

}
return 0;
}
