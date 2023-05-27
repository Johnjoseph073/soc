#include<iostream>
using namespace std;

int main(){
	long int n;
	cin>>n;
	cout<<n<<" ";
	while(n!=1){
		if(n%2==0){
			n=n/2;
			cout<<n<<" ";
		}
		else {
			cout<<3*n+1<<" ";
			n=(3*n+1)/2;
			cout<<n<<" ";
		}
	}
}