#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int ar[((s.size())+1)/2];
	for(int i=0;i<s.size();i+=2) {
		for(int j=i+2;j<s.size();j+=2) {
			if(s[j]<s[i]) {
				int temp=s[j];
				s[j]=s[i];
				s[i]=temp;
			}
		}
	}
	for(int i=0;i<s.size();i++) {
		cout << s[i];
	}
} 