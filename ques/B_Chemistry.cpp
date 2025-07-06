#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int ar[n];
    int br[n];
	for(int i = 0;i<n;i++){
		cin>>ar[i];
        br[i] = ar[i];
	}
    int sum = 0;
	reverse(br, br+n);
	int pre[n];
	pre[0] = br[0];
	for(int i = 1;i<n;i++){
		pre[i] = br[i]+pre[i-1];
	}
    // for(int i = 0;i<n;i++){
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;
	for(int i = 0;i<n;i++){
		if(i>0){
			 sum = sum+ar[i-1];
		}
		int value = abs(pre[n-1-i] - ar[i]);
		cout<<abs(value-sum)<<" ";

	}
}