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
        for(int j=0;j<n-1;j++)
        {
            int flag=0;
            int temp;
            if(a[j]!=b[j])
            {
                int holder=abs(a[j]-(j+1));
                int holder1=holder;
                while(holder1)
                {
                    temp=b[j];
                    int k=j;
                    while(holder)
                    {
                        b[k]=b[k+1];
                        k++;
                        holder--;
                    }
                    counter++;
                    //cout<<j<<" "<<counter<<endl;
                    flag++;            
                    b[k]=temp;
                    cout<<j<<"     ";
                    for(int l=0;l<n;l++)
                    cout<<b[l]<<" ";
                    cout<<endl;
                    holder1--;
                }
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
