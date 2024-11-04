#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int p;
	cin >> s;
	int count=s.size();
	for(int i=0;i<s.size();i++) {
		if(s[i]=='0') {
				continue;
			}
		else {
			for(int j=0;j<s.size();j++) {
				if(s[j]==s[i]&&j!=i){
					p=0;
					s[j]='0';
					break;
				}
				else{
					p=1;
				}
			}
			if(p==0) {
				count--;
			}
		}
	}
	count%2==0 ? cout << "CHAT WITH HER!": cout << "IGNORE HIM!";
} 