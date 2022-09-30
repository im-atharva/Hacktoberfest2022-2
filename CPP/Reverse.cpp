// THIS CODE IS FOR REVERSE A WHOLE ARRAY BY ELEMENTS
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
int t;
cin>>t;
while (t--)
{

int n;
cin>>n;
int ary[n];
for (int i = n-1; i >= 0 ; i--)
{
    cin>>ary[i];
}
int s = 0;
int e = n - 1;
while (s<=e)
{
    swap(ary[s],ary[e]);
    s++;
    e--;
}
for (int i = n-1; i >= 0 ; i--)
{
    cout<<ary[i]<<" ";
}
cout<<endl;
}
    return 0;
}