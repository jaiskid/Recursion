#include<iostream>
using namespace std;
int linear(int *arr,int i,int n,int key)
{
	if(i==n){
	return -1;
	}
	if(arr[i]==key){
	return i;
	}
	return linear(arr,i+1,n,key);
}

int main(){
	int n;
	cin>>n;
	int arr[10005];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<linear(arr,0,n,key);
}