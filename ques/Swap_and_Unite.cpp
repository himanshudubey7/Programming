#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.size();
	    long long dist = 0;
	    int j = 0;
	    int fians= INT_MAX;
	//    for(int i = 0;i<n;i++){
    //     if(s[i] == s[j]){
    //         j++;
    //     }
    //    }
	     for (int i = 0; i<26; i++)
        {
            char x = 'a';
            x += i;
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]==x)
                {
                    cnt++;
                }
            }
            if(cnt==0)
            {
                continue;
            }
            
            int lb=0, ub=cnt-1;
            int p=0;
            for(int i=lb;i<=ub;i++)
            {
                if(s[i]!=x)
                {
                    p++;
                }
            }
            int ans=p;
            while(ub<=n-1)
            {
                ans=min(ans,p);
                if(s[lb]!=x)
                {
                    p--;
                }
                lb++;
                ub++;
                if(ub<=n-1 && s[ub]!=x)
                {
                    p++;
                }
                
            }
            fians=min(ans,fians);

           

        }
 
	     cout<<fians<<endl;
	}

}
