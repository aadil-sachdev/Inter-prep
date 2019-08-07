#include<iostream>
using namespace std;
int main()
{
    int laps,n;
    cin>>laps;
    for(int i=0;i<laps;i++)
    {
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int profit=0;
        int pop=0;
        for(int j=0;j<n;j++)
        {
            if((arr[j+1]<arr[j]&&j!=pop&&j!=n-1))
            {
                cout<<"("<<pop<<" "<<j<<")"<<" ";
                pop=j+1;
                profit++;
            }
           else  if(arr[j+1]<arr[j]&&j==pop&&j!=n-1)
            {
                pop=j+1;
            }
            
            else if(j==n-1&&arr[j]>arr[j-1]&&j!=pop)
            {
                cout<<"("<<pop<<" "<<j<<")"<<" ";
                profit++;
            }
        }
        if(!profit)
        cout<<"No Profit";
        cout<<endl;
    }
}
