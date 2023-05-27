#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;

void inp(int *a,int n){
	for(int i=0;i<n;i++)cin>>a[i];
}
int main(){
	
	int n;
	cin>>n;
	int a[n-1];
		inp(a,n-1);
		

	sort(a,a+n-1);
	
	int Ca=0,Cb=n-2;
	while(true){
		if(a[Ca++]!=Ca){cout<<Ca;break;}
		if(a[Cb--]!=Cb+3){cout<<Cb+3;break;}
	}
	

	


}