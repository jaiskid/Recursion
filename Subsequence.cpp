#include<iostream>
using namespace std;
void subsequence(string q,string ans){
	if(q.length()==0){
		cout<<ans<<" ";
	return ;
	}
	char ch=q[0];
	string ros=q.substr(1);
	subsequence(ros,ans+ch);
	subsequence(ros,ans);
}
int  main(){
	string s;
	cin>>s;
	subsequence(s," ");
}