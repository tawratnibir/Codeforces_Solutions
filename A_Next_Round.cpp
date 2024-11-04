#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k, i, j, count=0;
	cin >> n >> k;
	int ar[n];
	for(i=0;i<n;i++) {
		cin >> ar[i];
	}
	for(j=0;j<n;j++) {
		if(ar[j]>=ar[k-1] && ar[j]>0) {
			count++;
		}
	}
	cout << count;
} 