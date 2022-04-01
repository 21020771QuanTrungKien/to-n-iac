#include<iostream>
#include<string>
using namespace std;

int function(string str){
	if(str.length()==0) return 0;
	
	string temp=str.substr(0,str.length()-1);
	if(str[str.length()-1]=='1'){
		return function(temp)+1;
	}
	return function(temp)-1;
}

int main(){
	
	if(function("11111000") < 0){
		cout<<"YES";
	}
	else cout<<"NO";
}
