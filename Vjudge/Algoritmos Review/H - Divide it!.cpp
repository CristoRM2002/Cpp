#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	int q,i=0;
	cin>>q;
	for(int j=1;j<=q;j++){
		cin>>n;
		while((n%2==0)||(n%3==0)||(n%5==0)){
		if(n%2==0){
			n=n/2;
			i++;
		}
		if(n%3==0){
			n=2*n/3;
			i++;
		}
		if(n%5==0){
			n=4*n/5;
			i++;
		}
	}
	if(n==1){
		cout<<i<<endl;
	}else{
		i=-1;
		cout<<i<<endl;
	}
	i=0;
}
	return 0;
}
