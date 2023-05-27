#include<iostream>
using namespace std;



void stepwise(int n){
	if(n==1)cout<<"1\n1 3";
	else if(n==2)cout<<"3\n1 2\n1 3\n2 3";
	else if(n%2==1){
		int k=n/2-1;
		cout<<5+4*k;
		cout<<"\n1 3\n1 2\n3 2\n1 3\n2 3\n";
		while(k--){
			cout<<"1 2\n3 2\n1 3\n2 3";
		}
	
	}
	else{
		int k=n/2-2;
		cout<<7+4*k;
		cout<<"1 2\n1 3\n2 3\n1 2\n3 2\n";
		
		while(k--){
			cout<<"1 3\n2 3\n1 2\n3 2\n";
		}
		cout<<"1 3\n2 3";	
	}
}
int main(){
	int n;
	cin>>n;
stepwise(n);

}