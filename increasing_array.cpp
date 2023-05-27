#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
using namespace std;

void inp(long int *a,int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int main(){
	
	int n;
	cin>>n;
	long int A[n];
	inp(A,n);
	
	long int moves=0;
	for(int i=0;i<n-1;i++){
		if(A[i+1]<A[i]){moves+=A[i]-A[i+1];A[i+1]=A[i];}
	}
	cout<<moves;
	
}
