#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverse(string s, int i, int j){
	if(i==j) return s;
	else if(i<j) {
		swap(s[i], s[j]);
		return reverse(s, i+1, j-1);
	}
}
int main(){
	cout<<reverse("abcde",0,4);
	
}
