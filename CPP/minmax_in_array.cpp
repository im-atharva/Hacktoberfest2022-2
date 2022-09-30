//THIS CODE FOR SORTING ELEMENTS OF AN ARRAY

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
ios::sync_with_stdio(0); 
cin.tie(0);
int ary[] = {1,4,5,1,7,2,3};
    ary.sort();
    for (int i = 0; i < 5; i++)
    {
        cout<<ary[i]<<endl;
    }
    
    return 0;
}