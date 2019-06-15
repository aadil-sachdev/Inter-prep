#include<bits/stdc++.h>
using namespace std;
long fun(long n, long m, long arr[][3],long array[]);
int main()
{
    long n,m;
    cin>>n>>m;
    long array[n]={0};
    long arr[m][3];
    for(long i=0;i<m;i++)
    {
        for(long j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    long ans=fun(n,m,arr,array);
    cout<<ans;
}

long fun(long n,long m,long arr[][3],long array[])
{
    for(long i=0;i<m;i++)
    {
        for(long j=arr[i][0]-1;j<=arr[i][1]-1;j++)
        {
            array[j]+=arr[i][2];
        }
        
    }
    long max=0;
    for(long i=0;i<n;i++)
    {
        if(array[i]>max)
        max=array[i];
    }
    return max;
}
