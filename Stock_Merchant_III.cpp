#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[101]={};
    int a;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        ar[a]++;
    }
    for(int i=0;i<101;i++)
    {
        counter+=ar[i]/2;
    }
    cout<<counter;
}
