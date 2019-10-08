#include<iostream>
using namespace std;
int findproduct(int *arr,int n,int left,int i){
	//base case : no elements left on right side
	if(i==n){
	return 1;
	}
	//take back up of current element 
	int curr=arr[i];
	//calculate product of the right subarray
	int right=findproduct(arr,n,left*arr[i],i+1);
	//replace current element with product of left and right 
	arr[i]=left*right;
	//return product of right subarray including current element 
	return curr*right;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	findproduct(arr,n,1,0);
   for(int i=0;i<n;i++){
	 cout<<arr[i]<<" ";
}
}