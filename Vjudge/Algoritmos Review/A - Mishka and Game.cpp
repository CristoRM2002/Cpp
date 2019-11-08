#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int v[2];
	int M=0,C=0;
	for(int i=1;i<=n;i++){
		cin>>v[0]; cin>>v[1];
		if(v[0]<v[1]){
			C++;
		}
		if(v[1]<v[0]){
			M++;
		}
	}
	if(C<M){
		cout<<"Mishka";
	}
	if(M<C){
		cout<<"Chris";
	}
	if(C==M){
		cout<<"Friendship is magic!^^";
	}
}
