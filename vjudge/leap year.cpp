#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{ string s;

ll leap,mod4,mod100,mod400,mod15,mod55;
int f=0,flag;
while(cin>>s)
{
    if(f)
        printf("\n");
    f=1;
    leap=mod4=mod100=mod400=mod15=mod55=0;
    flag=0;
    for(int i=0;i<s.size();i++)
    {
        mod4=((mod4*10)+(s[i]-'0'))%4;
        mod100=((mod100*10)+(s[i]-'0'))%100;
        mod400=((mod400*10)+(s[i]-'0'))%400;
        mod15=((mod15*10)+(s[i]-'0'))%15;
        mod55=((mod55*10)+(s[i]-'0'))%55;
    }
    if((mod4==0&&mod100!=0)||mod400==0)
    {
        printf("This is leap year.\n");
            leap = 1;
            flag=1;

    }
    if(mod15==0)
      {

       printf("This is huluculu festival year.\n");
       flag=1;}

        if(leap==1&&mod55==0)
       {

        printf("This is bulukulu festival year.\n");}
    if(flag==0)
        printf("This is an ordinary year.\n");

}
return 0;
}
