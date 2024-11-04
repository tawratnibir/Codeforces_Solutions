#include<bits/stdc++.h>
using namespace std;
int main() {
	int i, j, m, n;
	int ar[5][5];
	for(i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			cin >> ar[i][j];
		}
	}
	for(i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			if(ar[i][j]>0) {
				m=i+1;
				n=j+1;
				break;
			}
		}
	}
	int p, q;
	if(m>=3&&n>=3) {
		cout << m-3+n-3;
	}
	else if(m<=3&&n>=3){
		cout << 3-m+n-3;
	}
	else if(m>=3&&n<=3){
		cout << m-3+3-n;
	}
	else if(m<=3&&n<=3){
		cout << 3-m+3-n;
	}
} 