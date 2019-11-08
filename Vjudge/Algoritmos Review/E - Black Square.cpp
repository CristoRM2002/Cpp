#include <bits/stdc++.h>
using namespace std;
int main(){
	int V[4];
	for(int i=0;i<4;i++)
		cin>>V[i];
	
	string n="1234";
	string a; cin>>a;
	int p=a.length();
	int calorias=0;
	
	for(int i=0;i<p;i++){
		if(a[i]==n[0])
			calorias+=V[0];	
		
		if(a[i]==n[1])
			calorias+=V[1];
			
		if(a[i]==n[2])
			calorias+=V[2];
		
		if(a[i]==n[3])
			calorias+=V[3];
					
	}
	cout<<calorias;
}
