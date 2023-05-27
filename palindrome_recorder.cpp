#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<map>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	sort(s.begin(),s.end());
	long int n=s.length();
	map<char, int> char_count;
	long int k=0;
	char A[n];
	char MyChar;
	//counting the occurence of each character in the string
	for(char c:s){
		char_count[c]++;
	}
	for(char c:s){
		long int p=0;
		if(char_count[c]==0){char_count.erase(c);p++;}
	}
	for(char c:s){
		if(char_count[c]==n){
			k=n;
			for(int w=0;w<n;w++){
				cout<<c;
			}
			return 0;
		}		
		else if(char_count[c]%2==1 ){
			k++;
			MyChar = c;
			char_count[c]--;
		}
	}
	if(k==1)A[n/2]=MyChar;
	

	if(k>1 ){cout<<"NO SOLUTION";}
	
	
	else{
		
		int i=0;
		for(char c : s){
			int b= char_count[c]/2;
			
			
			
			
				while(b!=0 && b--){
					A[i++]=c;
					char_count[c]=0;
				}
			
		}
		
		for(long int p=0;p<n/2;p++){A[n-p-1]=A[p];}

		for(long int q=0;q<n;q++){
			cout<<A[q];
		}

	}
	
	


}