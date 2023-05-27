#include<iostream>
#include<cmath>
using namespace std;
int cal(int a,int b){
	int pile;
	pile=(2*a-b)/3;
	return pile;
}

double calc(int a,int b){
	double coin;
	coin=(2*a-b)/3.0;
	return coin;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	int a,b;
	cin>>a>>b;
	if(a==0 && b==0){cout<<"YES\n";}
	else if(a==0 || b==0){cout<<"NO\n";}
	else if(cal(a,b)==calc(a,b) && cal(b,a)==calc(b,a))cout<<"YES\n";
	else cout<<"NO\n";
	}
}