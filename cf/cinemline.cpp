#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,tk_25=0,tk_50=0,tk;
cin>>n;
int f=0;
for(int i=0;i<n;i++)
{
    cin>>tk;
    if(i==0&&(tk==50||tk==100))
    {
        f=1;
        break;
    }
    if(tk==25)
    {
       tk_25++;
    }
        else if(tk==50)
        {  tk_25--;
          tk_50++;

        }
        else if(tk==100)
        {
            if(tk_50>0)
            {
                  tk_25--;
                    tk_50--;

            }
             else
            tk_25-=3;
        }

        if(tk_25<0||tk_50<0)
        {
            f=1;
            break;
        }
}
f?cout<<"NO\n":cout<<"YES\n";
}
