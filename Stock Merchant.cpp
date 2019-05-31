#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int counter=0;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]<0)
        continue;
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                counter++;
                ar[i]=-ar[i];
                ar[j]=-ar[j];
                break;
            }

        }
    }
    cout<<counter;
