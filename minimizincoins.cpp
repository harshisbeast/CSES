#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n ;
  int sum;
  cin>> n; cin>>sum;
  int arr[n];
  for( int i=0; i< n; i++)
  {
    cin>> arr[i];
  
  }


//  dp[i represents minimumj coins required to get the sum i 

  vector<int> dp( sum+1, 1e9);
  dp[0]=0;
  for( int i= 1; i<=sum; i++)
  {
    //  har sum tak jai and ab har element ofd array pe jau 
    for( int j=0; j< n; j++)
    {
      if( i>= arr[j])
      {
        dp[i]= min( dp[i],1+dp[i-arr[j]] );
      }

    }
  }
  if( dp[sum]== 1e9)
  {
    cout<<-1;
  }
  else{
  cout<< dp[sum];
  }
}