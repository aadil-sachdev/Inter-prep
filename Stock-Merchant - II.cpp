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
    sort(ar,ar+n);
    int i=0;
    int j;
    while(i<n-1)
    { 
        j=i+1;
        int add=0;
        while(ar[j]==ar[i])
        {
            add++;
            j++;
           
        }
        i+=(add+1);
        counter=counter+ceil(float(add)/2);
    }
    cout<<counter;
    }
