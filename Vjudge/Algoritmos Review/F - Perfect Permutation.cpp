#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,p; cin>>n;
	if(n%2==0){
		for(int i=1;i<=n/2;i++){
			p=2*i-1;
			cout<<p+1<<" "<<p<<" ";
		}			
	}else{
		cout<<"-1";
	}
}
