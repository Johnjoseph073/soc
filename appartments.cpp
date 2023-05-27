#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> clients(n);
	vector<int> appartments(m);
	for(int i=0;i<n;i++){
		cin>>clients[i];
	}
	int index=0;
	int answer=0;
	for(int i=0;i<m;i++){
		cin>>appartments[i];
	}
	sort(clients.begin(),clients.end());
	sort(appartments.begin(),appartments.end());
	for(int i=0;i<n;i++){
		while(index<m){
			if(appartments[index]+k<clients[i])
				index++;
			else if(appartments[index]-k>clients[i])
				break;
			else{
				index++;answer++;
				break;
			}
		}
	}
	cout<<answer;
}
