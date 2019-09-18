//Given that this problem have 1*4 and 4*1 tiles and matrix of 4*N
#include<iostream>
using namespace std;
int tilling(int n){
	if(n<1)
	return 0;
	if(n<4)
	return 1;
	if(n==4)
	return 2;
	return tilling(n-1)+tilling(n-4);
}
int main(){
	int n;
	cin>>n;
	cout<<tilling(n);
}