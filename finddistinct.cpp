#include<bits/stdc++.h>
using namespace std;
void recur(int *arr,string out,int i,int n,int k){
	if(k>n){
	return;
	}
	if(k==0){
	cout<<out<<endl;
	}
	for(int j=i;j<n;j++){
	recur(arr,out+" "+to_string(arr[j]),j+1,n,k-1);
	
	while(j<n-1&&arr[j]==arr[j+1])
		j++;
}
}
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	recur(arr,"",0,n,k);
}