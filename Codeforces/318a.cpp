#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        k<=n/2 ? cout<<2*k-1 : cout<< 2*(k-n/2);
    }
    else
    {
        k<=n/2+1 ? cout<<2*k-1 : cout<<2*(k-n/2-1);
    }
    return 0;
}
