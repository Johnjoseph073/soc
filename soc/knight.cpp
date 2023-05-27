#include<iostream>
using namespace std;

int main(){
	long int n;
	cin>>n;
	
		for(long int k=1;k<=n;k++){
			if(k==1)cout<<0<<"\n";
			else if(k==2)cout<<6<<'\n';
			else{
			long int k1=k*k;
			long int k2=k*k-1;
			long int k3=4*(k-1)*(k-2);
			cout<<((k1*k2)/2)-k3<<"\n";
			}
		}
	

}