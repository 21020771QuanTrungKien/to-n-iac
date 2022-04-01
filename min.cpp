#include<iostream>
#include<string>


using namespace std;

char m(string s){
	
	if(s.length()==0) return '9';
	string temp = s.substr(0, s.length()-1);
	return min(m(temp), s[s.length()-1]);
}

int main(){
	
	cout<<m("46534657460625107809")<<endl;
	cout<<m("3435215745729474")<<endl;
}
