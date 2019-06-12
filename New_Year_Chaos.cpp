#include<bits/stdc++.h>
using namespace std;
int main()
{
    int step;
    cin>>step;
    for(int i=0;i<step;i++)
    {
        int flag=0;
        int counter=0;
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=n-1;j>=0;j--)
        {
            if(a[j]!=j+1)
            {
                if(a[j-1]==j+1)
                {
                    swap(a[j-1],a[j]);
                    counter++;
                }
                else if(a[j-2]==j+1)
                {
                    a[j-2]=a[j-1];
                    a[j-1]=a[j];
                    a[j]=j+1;
                    counter+=2;
                }
                else
                {
                    cout<<"Too chaotic"<<endl;
                    flag++;
                    break;
                }
            }
        }
    if(!flag)
    cout<<counter<<endl;
    }    
}
