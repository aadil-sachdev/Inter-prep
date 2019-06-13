#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]==i+1)
                {
                    swap(a[i],a[j]);
                    counter++;
                    break;
                }
            }
        }
    }
    cout<<counter;

}
