#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int v[n];
	int ma=1,c=1;
	
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	for(int i=0;i<n-1;i++){
		if(v[i]<v[i+1]){
			c++;
			ma=max(ma,c);
		}else{
			c=1;	
		}		
	}
	cout<<ma;
}
