#include<bits/stdc++.h>
using namespace std;
int fun(int n, int m, int arr[][3],int array[]);
int main()
{
    int n,m;
    cin>>n>>m;
    int array[n]={0};
    int arr[m][3];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ans=fun(n,m,arr,array);
    cout<<ans;
}

int fun(int n,int m,int arr[][3],int array[])
{
    for(int i=0;i<m;i++)
    {
        for(int j=arr[i][0];j++;j<arr[i][1])
        {
            array[j]+=arr[i][2];
        }
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        max=array[i];
    }
    return max;
}
