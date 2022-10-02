#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n , fenceHeight;
	int ans =0;
	cin>>n>>fenceHeight;
	int hi[n];
	for(int i=0; i<n;i++) {
		cin>>hi[i];
		if(hi[i] <= fenceHeight){
			ans ++;
		}
		else{
			ans = ans +2 ;
		}
	}
	
	cout<<ans;
	return 0;
}