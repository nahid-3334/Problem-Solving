#include<bits/stdc++.h>
using namespace std;
bool match(int num);
int main()
{
    int t,i,val;
        cin>>t;
        for(i=0;i<t;i++){
            cin>>val;
            if(val%21==0||match(val)){
                cout<<"The streak is broken!\n";
            }
            else{
            cout<<"The streak lives still in our heart!\n";
            }
        }

        return 0;
}
bool match(int num)
{
        int r;
        while(num!=0){
            r=num%10;
            num=num/10;
            if(r==1 && num>0 && num%10==2){
                return true;
            }
        }
        return false;


    }
