#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a;
	if(n%3==0){
		a=n/3;
		cout<<2*a;
	}
	if(n%3==1){
		a=(n+2)/3;
		cout<<2*a-1;
	}
	if(n%3==2){
		a=(n+1)/3;
		cout<<2*a-1;
	}
}
