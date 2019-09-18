//This code cover implementation of countsubsequence
#include<iostream>
using namespace std;

int  countSubsequence(string q,string ans){
	if(q.length()==0){
	return 1;
	}
	char ch=q[0];
	string ros=q.substr(1);
	int count=0;
	count+=countSubsequence(ros,ans);
	count+=countSubsequence(ros,ans+ch);
	return count;
}
int main(){
	string s;
	cin>>s;
	cout<<countSubsequence(s," ");
}