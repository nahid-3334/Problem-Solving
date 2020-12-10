#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int s,arr[102],sum=0,cnt=0,n;
		vector<int>v;
		cin>>s;
		for(int j=1;j<=100;j++)
          {

            cin>>n;
            v.push_back(n);}
        sort(v.begin(),v.end());
        for(int j=99;j>=0;j--)
        {
            if(sum>=s)
                break;
            sum+=v[j];
            cnt++;
        }
		cout<<sum<<endl<<cnt;

	}
	return 0;
}


