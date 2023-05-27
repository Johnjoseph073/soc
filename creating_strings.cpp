#include<iostream>
#include<set>
#include<string>
using namespace std;

void generate_strings(const string &s,set<string> &result,string current=""){
	if(s.empty()){
		result.insert(current);
		
		return;
	}

	for(int i=0;i<s.length();i++){
		char ch =s[i];
		string remaining = s.substr(0,i)+s.substr(i+1);
		generate_strings(remaining,result,current+ch);
	
	}
}


int main(){
	string s;
	getline(cin,s);
	set<string> result;
	string current="";
	generate_strings(s,result,current);
	cout<<result.size()<<endl;
	for(const string &str : result){
		cout<<str<<endl;
	}
	
}