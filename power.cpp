//This code help us to calculate power of a number
#include<iostream>
using namespace std;
int power(int a,int b){
	if(b==0){
	return 1;
	}
	return a*power(a,b-1);
}
int fast(int a,int b){
	if(b==0)
		{
			return 1;
		}
		int smallans=fast(a,b/2);
		smallans*=smallans;
		if(b&1){
			return a*smallans;
		}
		else
			return smallans;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b);
	cout<<endl;
	cout<<fast(a,b);
}