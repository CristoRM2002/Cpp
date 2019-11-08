#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int v[n];
	for(int i=0;i<n;i++)
		cin>>v[i];
		
	int B=0,C=0;
	
	for(int i=0;i<n;i++){
		if(v[i]<0){
			C+=v[i];
		}else{
			B+=v[i];
		}
	}
	cout<<B-C;
}
