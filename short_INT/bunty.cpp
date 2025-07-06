#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;
#define ll long long
#define int ll

int msb(int num){
    int ret=-1;
    while(num>0){
        ret++;
        num/=2;
    }
    return ret;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
	    cin>>n;
	    long long  a[n];
        vector<vector<long long>>buckets(32);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
            buckets[msb(a[i])].push_back(a[i]);
	    }
        ll score_alice=0;
	    for(auto &bucket:buckets){
            sort(bucket.begin(),bucket.end());
            int size=bucket.size();

            // ll sum=accumulate(bucket.begin(),bucket.end(),0);
            ll sum = 0;
            for(ll i = 0;i<size;i++){
                sum +=bucket[i];
            }
            for(int i=size-1;i>=0;i--){
                int left=i;
                sum-=long(bucket[i]);
                score_alice+=long(left)*bucket[i]-sum;
            }
        }
        sort(a, a+n);

	    // ll total_sum=accumulate(a,a+n,0);
        ll total_sum = 0;
        for(ll i = 0;i<n;i++){
            total_sum+= a[i];
        }
        cout<<"total sum = "<<total_sum<<endl;
        ll total_score=0;
        for(int i=n-1;i>=0;i--){
            int left=i;
            total_sum-=long(a[i]);
            total_score+=long(left)*a[i]-total_sum;
        }
        cout<<"total socre = "<<total_score<<endl;
        cout<<"alice ="<<score_alice<<endl;
        ll score_bob=total_score-score_alice;
        cout<<score_bob<<endl;
        
    }

    return 0;
}