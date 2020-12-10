#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    string s;
	int n;
	set<char>s1;
	cin>>s>>n;
		for(int i=0;i<s.size();i++)
        {
            s1.insert(s[i]);
        }
        cout<<s1.size()<<endl;
        if(s1.size()>=n)

            printf("YES\n");
            else
            printf("NO\n");
            s1.clear();
	}
	return 0;

}
