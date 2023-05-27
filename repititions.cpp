#include<iostream>
#include<ctime>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	long int curr_length=1;
	long int max_length=1;
	string s;
	getline(cin,s);
	for(long int i=0;i<(s.length());i++){
		if(i==0)continue;
		else{
			if(s[i-1]==s[i]){
				curr_length++;
				if(i==(s.length()-1)){
					if(max_length<curr_length)max_length=curr_length;
				}
			}

			if(s[i-1]!=s[i]){
				if(curr_length>max_length){max_length=curr_length;}
				curr_length=1;
			}
		}

	}
	cout<<max_length;
}