    #include <bits/stdc++.h>
    using namespace std;
    typedef vector<int> vi;
    #define ll long long int


    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin>>n;
        string s[n];
        int wtn=0,wtt=0,other=0;
        for(int i=0;i<n;i++)
            getline(cin,s[i]);
        for(int i=0;i<n;i++){
            int l=s[i].size();
            for(int j=0;j<l-1;j++){
                if(s[i][0]=='G'){
                    if(s[i][j]=='1' && s[i][j+1]=='9')
                        wtn+=2;
                    else if(s[i][j]=='2' && s[i][j+1]=='0')
                        wtt+=2;
                    else if((s[i][j]>='0' && s[i][j]<='9') &&(s[i][j+1]>='0' && s[i][j+1]<='9'))
                        other+=2;
                }
                else{
                    if(s[i][j]=='1' && s[i][j+1]=='9')
                        wtn+=1;
                    else if(s[i][j]=='2' && s[i][j+1]=='0')
                        wtt+=1;
                    else if((s[i][j]>='0' && s[i][j]<='9') &&(s[i][j+1]>='0' && s[i][j+1]<='9'))
                        other+=1;

                }
            }
        }
        if(wtn>other || wtt>other)
            cout<<"Date";
        else if(wtn==wtt)
            cout<<"No Date";
        else
            cout<<"No Date";


    	return 0;
    }
