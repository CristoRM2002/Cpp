#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,p,total=0;
	cin>>n>>k;
	deque <int> A;
	for(int i=0;i<n;i++){
		cin>>p;
		A.push_back(p);
	}
	for(int j=(n-1);j>=0;j--){
		if(A[0]<=k || A[j]<=k){
			if(A[0]<=A[j]){
				A.pop_front();
				total++;
			}else{
				A.pop_back();
				total++;
			}
		}else{
			break;
		}
	}
	cout<<total<<endl;
	return 0;
}
