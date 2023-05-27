#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

int count_distinct_values(vector<int> &numbers){
	unordered_set<int> distinct_values;
	for(int num : numbers){
		distinct_values.insert(num);
	}
	return distinct_values.size();
}

int main(){
	
	int num;
	int n;
	cin>>n;
	vector<int> numbers(n);
	
	for(int i=0;i<n;i++){
		cin>>numbers[i];
		
	}	

	cout<<count_distinct_values(numbers);
}