#include<bits/stdc++.h>
using namespace std;
int main()
{string s;
int odd[26],ans=0;
cin>>s;
memset(odd,0,sizeof(odd));

for(int i=0;i<s.size();i++)
{

odd[s[i]-'a']++;


}
for(int i=0;i<26;i++)
{if(odd[i]%2!=0)
ans++;}
if(ans%2!=0)

cout<<"First\n";
else
    cout<<"Second\n";
}
