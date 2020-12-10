#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,s1,s2;
int index=0,f=0,cnt=0,j=0;
getline(cin,s);
int i=s.find(' ',0);
s1=s.substr(0,i);
s2=s.substr(i+1,s.size()-1);
//int sz=max(s1.size(),s2.size());

for(int i=0;i<s1.size()||i<s2.size();i++)
{if(s1[i]==s2[i]&&f==0)
{
    cnt++;
}
else
{
    f=1;
}
}
for(int i=0;i<s1.size();i++)
{
    if(s2[0]>=s[i])
    {
        index=i;
        //cout<<index;
      //h  break;
    }

}
  if(s1[0]==s2[0])
  {

  for(int i=0;i<cnt;i++)
cout<<s1[i];
}
else
    for(int i=0;i<=index;i++)
cout<<s1[i];
    cout<<s2[0]<<endl;
}



