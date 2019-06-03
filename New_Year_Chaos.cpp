#include<bits/stdc++.h>
using namespace std;
int main()
{
    int step;
    cin>>step;
    for(int i=0;i<step;i++)
    {
        int red_flag=0;
        int counter=0;
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int j=0;j<n;j++)
            {
                cin>>a[j];
                b[j]=j+1;
            }   
        for(int j=0;j<n;j++)
        {
            int flag=0;
            int temp;
            if(a[j]!=b[j])
            {
                temp=a[j];
                for(int k=temp-1;k>j;k--)
                {
                    b[k]=b[k-1];
                    counter++;
                    flag++;
                }
                b[j]=temp;
            }
            if(flag>2)
            {
                cout<<"Too chaotic"<<endl;
                red_flag++;
                break;
            }
        }
        if(!red_flag)
        cout<<counter<<endl;

    }
}
