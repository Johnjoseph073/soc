#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long int n;
	long int prod=1;
	cin>>n;
	long int MOD=1000000007;
	for(long int i=0;i<n;i++){
		prod = prod*2;
		prod = prod%MOD;
	}
	cout<<prod;
}