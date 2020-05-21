#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#include <deque>
#include <bitset>
#include <climits>
#include <cstdio>
#include <list>
#include <iomanip>
using namespace std;

#define ll long long int
#define mp make_pair
#define pb push_back
#define fi first
#define si second
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define NF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define AS 200001
#define mod 1000000007
int ans = 0;
void SquareFullArray(vector<int>A, int start) {
	if (start > 1) {
		int num = sqrt(A[start - 2] + A[start - 1]);
		if (A[start - 2] + A[start - 1] != num * num) {
			return;
		}
	}
	if (start == A.size()) {
		//update the answer that I have got one squarefull array
		ans++;
		return;
	}
	for (int j = start; j < A.size(); j++) {
		if (j == start || A[start] != A[j]) {
			swap(A[start], A[j]);
			SquareFullArray(A, start + 1);
		}
	}

}
int numSquarefulPerms(vector<int>&A) {
	sort(A.begin(), A.end());
	SquareFullArray(A, 0);
	return ans;
}
int main() {
	fastIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<int>A;
	A.resize(n);
	F(A, n);
	numSquarefulPerms(A);
	//P(A, n);
	cout << ans << endl;
}