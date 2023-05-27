#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int v=2;
	if(n==2 | n==3)cout<<"NO SOLUTION";
	else{
		while(v<=n){
			cout<<v<<" ";
			v+=2;
		}
		v=1;
		while(v<=n){
			cout<<v<<" ";
			v+=2;
		}
	}
}