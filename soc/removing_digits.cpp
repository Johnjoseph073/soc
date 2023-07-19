#include<bits/stdc++.h>
#define INT_MAX 1000000000
using namespace std;


int main(){
	int n;
	cin>>n;
	vector<int> dp(n+1,INT_MAX);
	dp[0]=0;
	for(int i=1;i<=n;i++){
		int temp=i;
		while(temp!=0){
			int x=temp%10;
			dp[i]=min(dp[i],dp[i-x]+1);
			temp=temp/10;
		}
	}
	cout<<dp[n];

}