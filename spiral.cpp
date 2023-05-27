#include<iostream>
#include<ctime>
using namespace std;

int main(){
	int t;
	cin>>t;
	long int a[t];
	long int y[t];
	long int x[t];
	for(int i=0;i<t;i++){
		cin>>y[i]>>x[i];
		if(y[i]>x[i]){
			if(y[i]%2==0)a[i]=y[i]*y[i]-x[i]+1;
			else a[i]=y[i]*y[i]-2*y[i]+x[i]+1;
		}
		if(x[i]>y[i]){
			if(x[i]%2==1)a[i]=x[i]*x[i]-y[i]+1;
			else a[i]=x[i]*x[i]-2*x[i]+y[i]+1;
		}
		if(x[i]==y[i]){
			a[i]=x[i]*x[i]-x[i]+1;

		}

		
		
	}
	for(int i=0;i<t;i++){
			cout<<a[i]<<"\n";
		}

	
}