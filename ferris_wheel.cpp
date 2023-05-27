#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n,x;
	cin>>n>>x;
	vector<int>weight(n);
	for(int i=0;i<n;i++){
		cin>>weight[i];
	}
	int answer=n;
	int p_begin=0;
	int p_end=n-1;
	
	sort(weight.begin(),weight.end());
	while(p_begin<p_end){
		if(weight[p_begin]+weight[p_end]<=x){
			answer--;p_begin++;p_end--;
		}
		else{
			p_end--;
		}

	}
	cout<<answer;
}