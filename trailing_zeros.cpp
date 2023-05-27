#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int z=0;
	while(n/5!=0){
		z+=n/5;
		n=n/5;
	}
	cout<<z;
}