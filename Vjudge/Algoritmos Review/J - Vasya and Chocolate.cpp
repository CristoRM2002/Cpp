#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		long long s; cin>>s;
		long long a; cin>>a;
		long long b; cin>>b;
		long long c; cin>>c;
		long long x,y;
		x=s/c;
		y=(s/(c*a))*b;
		cout<<x+y<<endl;
	}
}
