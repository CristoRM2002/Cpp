#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,aux; cin>>n;
	int v[n];
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(v[i]<v[j]){
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
	
	deque <int> elementos;
	for(int i=0;i<n;i++){
		elementos.push_back(v[i]);
	}
	for(int i=1;i<n;i++){
		if(i%2==0){
			if(elementos.front()<elementos.back()){
				elementos.pop_front();
			}else{
				elementos.pop_back();
			}			
		}else{
			if(elementos.front()<elementos.back()){
				elementos.pop_back();
			}else{
				elementos.pop_front();
			}
		}
	}
	cout<<elementos.front();
}
