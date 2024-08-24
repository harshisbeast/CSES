//  isss question mei mereko coins ka order matters



#include<bits/stdc++.h>
using namespace std;
int main()
{

int n; 

int k;
cin>> n>>k;
int coins[n];
 for( int i=0; i< n; i++)
 {
  cin>>coins[i];
 }


  // 2 -> le skate 
  //  skip 2 
//  state of dp
//  dp[i][k] represents if we pick or not pick  this coin then no of wayas to get sum k  represnted by dp
//  if we pick coin i thenb the sum is reduced a nd if we dont pick then the sum is not reduced ki agar mai sum reduce kar rha hands if i reach 0 sum then ans is 1 and if we addd up both pick and not pick then that will give dp sum
//  dp[i][0]= 1 that means that to get a sum of 0 any index or coin will give sma ed value 
// final subproblem -> {}

//  move on coins only 

int MOD= 10^9+7;

vector< vector<int>>dp( n+1, vector<int>( k+1 ,0));

//base case moissing
 for( int i=0; i< n;i++)
 {
     dp[i][0]=1;
 }

   for( int i= n-1; i>=0 ; i--)
   {
    //  the i m traversing on all coins 
for( int sum=1; sum<=k; sum++)
{
int skip= dp[i+1][sum];
int pick=0;
if( coins[i]<=sum)
{
  pick= dp[i][sum- coins[i]];
}
dp[i][sum]= (pick+skip)%MOD;


}

   }

//  mai chah rhas hu ki koi bhi x liya agar sum  kaise reach hoga 

cout<<dp[0][k];




}