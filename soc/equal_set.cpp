#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void swap(int &a,int &b){
	int t;
	t=a;
	a=b;
	b=t;
}


void display(vector<int> &v){
	for(auto i:v){
		cout<<i<<" ";
	}
	cout<<endl;
}


int sum(int n){
	int sum_val=n*(n+1)/2;
	return sum_val;
}


int main(){
	int n;
	cin>>n;
	if(n%4==1 || n%4==2)cout<<"NO";
	else{
		cout<<"YES\n";
		vector<int> a,b;
		for(int i=1;i<=n;i++){
			if(i%2==1)a.push_back(i);
			else b.push_back(i);
		}
		int k=((n+1)/4)+1;
		if(n%2==1){
			int p=(n+1)/2;
			while(k--){
				swap(a[p],b[p-1]);
				p--;
			}	
		}
		else{
			int p=n/2;
			while(k--){
				swap(a[p],b[p]);
				p--;
			}
		}
		
		cout<<a.size()<<"\n";
		display(a);
		
		cout<<b.size()<<"\n";
		display(b);
		
	}
}