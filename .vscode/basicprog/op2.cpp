#include <bits/stdc++.h>
using namespace std;

 int isPalindrome(string S)
{
    int c = 0;

    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++)
    {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1])
        {
            return c;
            // Return No
            
        }
    }
    c=1;
    // Return "Yes"
    return c;
}
int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	   int n;
	   cin>>n;
	   string s;
	   cin>>s;
       string str;

	  int flag =0;
         int p = isPalindrome(s);
         if(p ==1){
            cout<<"YES"<<endl;

         }
         else{
       
      for(int i = 1;i<n;i++){
str =str+s.substr(0,i-1)+ s.substr(i+1,(s.length()-1)-(i+1));
         int p = isPalindrome(str);

         if(p == 1){
            flag =1 ;
            break;
         }
         else
         {
cout<<str<<endl;
         }

      }
      if(flag == 1){
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }

         }
       
       


     
     
	    
	}
	return 0;
}
