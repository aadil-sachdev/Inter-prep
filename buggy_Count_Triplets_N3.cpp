#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n>>r;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int counter=0;

    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(arr[j]==arr[i]*r)
            {
            for(int k=j+1;k<n;k++)
            {
                if(arr[k]==arr[j]*r)
                counter++;
            }
            }
        }
    }
    cout<<counter;
}
