#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,r;
    cin>>n>>r;
    long arr[n];
    map<long,long> geo;
    long counter=0;
    for(long i=0;i<n;i++)
    {
        cin>>arr[i];
        geo[arr[i]]++;
    }
    for(long i=0;i<n-2&&arr[i]!=arr[i-1];i++)
    {
        long inst=geo[arr[i]]*geo[arr[i]*r]*geo[arr[i]*r*r];
        counter+=inst;
    }
    cout<<counter;


}
