#include<iostream>
#include<string>

using namespace std;

int ones(string s){
	if(s.length() == 0) return 0;
	string temp=s.substr(0, s.length()-1);
	if(s[s.length()-1] == '1') return ones(temp) +1;
	else return ones(temp);
}

int main(){
	cout<<ones("1100010001")<<endl;
	cout<<ones("10001101010110101")<<endl;
}
