#include<bits/stdc++.h>
using namespace std;
int main() {
	string s1, s2;
	int sum1=0, sum2=0, p=0;
	cin >> s1 >> s2;
	for(int i=0;i<s1.size();i++) {
		if(s1[i]>=97) {
			s1[i]=s1[i]-'a'+'A';
		}
	}
	
	for(int i=0;i<s2.size();i++) {
		if(s2[i]>=97) {
			s2[i]=s2[i]-'a'+'A';
		}
	}
	
	for(int i=0;i<s1.size();i++) {
		sum1+=s1[i];
	}
	
	for(int i=0;i<s1.size();i++) {
		sum2+=s2[i];
	}
	for(int i=0;i<s1.size();i++) {
		if(s1[i]==s2[i]) {
			continue;
		}
		else if (s1[i]>s2[i]) {
			p=1;
			break;
		}
		else{
			p=-1;
			break;
		}
	}
	cout << p << endl;
} 