#include<iostream>
using namespace std;
char a[10][10]={"zero","one","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void spelling(int n){
	if(n==0)
	return;
	
	spelling(n/10);
	cout<<a[n%10]<<" ";
}
int main(){
	int n;
	cin>>n;
	spelling(n);
}