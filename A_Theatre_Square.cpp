#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, n;
    cin >> a >> b>> n;
    int count=0;
    if(a%n!=0) count++;
    if(b%n!=0) count++;
    cout << a/n + b/n + count ;
}