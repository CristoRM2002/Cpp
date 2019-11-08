#include <bits/stdc++.h>
using namespace std;
int main(){
	int m; cin>>m;
	int n; cin>>n;
	int d[m];
	int fp[n];
	for(int i=0;i<m;i++)
		cin>>d[i];
		
	for(int i=0;i<n;i++)
		cin>>fp[i];
		
	for(int  i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(d[i]==fp[j])
				cout<<d[i]<<" ";
		}
	}
}
