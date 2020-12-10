#include<bits/stdc++.h>
using namespace std;
int main(){

    int k;
     int t,n,val;
     int ans=0,total=0,i=0;
        scanf("%d",&k);
           vector<int>v;
       for(int i=0;i<12;i++)
       {
           scanf("%d",&val);
           v.push_back(val);
           total+=val;

       }
       if(total<k)
        cout<<-1<<endl;
       else{
        sort(v.rbegin(),v.rend());
        while(ans<k)
        {
            ans+=v[i];
            i++;

        }
        cout<<i<<endl;
       }
}
