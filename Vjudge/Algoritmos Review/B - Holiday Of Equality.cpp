#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int v[n];
	int mayor=0,suma=0,d;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n;i++){
		mayor=max(mayor,v[i]);
	}
	for(int i=0;i<n;i++){
		d=mayor-v[i];
		suma+=d;
	}
	cout<<suma;
}
