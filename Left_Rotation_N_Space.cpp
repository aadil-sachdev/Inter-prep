#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    int temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=d, j=0;i<n;i++,j++)
    {
        temp[j]=arr[i];
    }
    for(int i=0,j=n-d;j<n;i++,j++)
    {
        temp[j]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }

}
