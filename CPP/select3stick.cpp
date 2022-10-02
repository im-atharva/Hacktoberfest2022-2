#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int  t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long> v(n);
		for (int  i : v) {cin>>v[i];}
			
		sort(v.begin() , v.end());	
		long long  ans = INT_MAX;
		for(int  i=2 ; i<n; i++){
			long long  ans1 , ans2, ans3;
			long long  x = v[i] ,y = v[i-1], z = v[i-2];
			ans1 = abs(x-y) +abs(y-y) + abs(z-y);
			ans2 = abs(x-x) +abs(y-x) + abs(z-x);
			ans3 = abs(x-z) +abs(y-z) + abs(z-z);
			ans = min({ans1, ans2, ans3});
		}
		
			cout<<ans<<endl;
		}
	return 0;
}
