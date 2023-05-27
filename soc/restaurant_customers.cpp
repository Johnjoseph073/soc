#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>departure_times(n);
	vector<int>arrival_times(n);
	for(int i=0;i<n;i++){
		cin>>arrival_times[i]>>departure_times[i];
	}
	sort(departure_times.begin(),departure_times.end());
	sort(arrival_times.begin(),arrival_times.end());
	int curr_customers=0;
	int max_customers=0;
	int i=0;
	int j=0;
	while(i<n && j<n){
		if(arrival_times[i]<=departure_times[j]){
			curr_customers++;
			i++;
		}
		else{
			j++;
			curr_customers--;
		}
		max_customers=max(max_customers,curr_customers);
	}
	cout<<max_customers;

}