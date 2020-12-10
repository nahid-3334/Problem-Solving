#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int t;
	scanf("%d",&t);
	while(t--)
	{

	       int r,g,b,y,n,ans,ans2,ans3;
	       scanf("%d %d %d %d %d",&r,&g,&b,&y,&n);
	       ans=min(r,g);
	       ans2=min(b,y);
	       ans3=min(ans,ans2)+n-1;
	       printf("%d\n",ans3);

	}
	return 0;

}
