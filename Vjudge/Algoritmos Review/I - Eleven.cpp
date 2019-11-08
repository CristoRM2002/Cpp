#include <bits/stdc++.h>
using namespace std;
int main(){
	int a=1,b=0,t;
	int n; cin>>n;
	set <int> fib;
	while(t<=n){
		t=a+b;
		b=a;
		a=t;
		fib.insert(t);
	}
	for(int i=1;i<=n;i++){
		if(fib.count(i))
			cout<<"O";
		else
			cout<<"o";
	}
}
