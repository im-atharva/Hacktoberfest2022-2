#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

int testcase;
// cout<<"Enter the testcases"<<endl;
cin >>testcase;

while(testcase) {
	string s;
	cin>>s;
	if(s.size() > 10) {
		//format me bhejo
		cout<<s[0]+ to_string( s.size()-2 ) + s[ s.size()-1 ]<<endl;

	}

	else{
		//direct behjo
		cout<<s<<endl;
	}
	testcase--;

}








	return 0;
}