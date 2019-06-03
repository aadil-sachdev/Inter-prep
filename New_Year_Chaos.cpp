#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    for(int i=0;i<test;i++)
    {
        int counter=0;
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[i];
        for(int j=0;j<n;j++)
        {
            if(abs(arr[i]-(i+1))>2)
                cout<<"Too chaotic"<<endl;
            else if(arr[i]>arr[i+1]&&arr[i]==i+1)
                counter++;
            else if(arr[i]>arr[i+1])
                counter+=abs(arr[i]-(i+1));
        }
        cout<<counter<<endl;   
    }
}
