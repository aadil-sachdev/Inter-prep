#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    string mag[m],line[n];
    for(int i=0;i<m-1;i++)
    {
        cin>>mag[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>line[i];
    }
    int intern=0;
    int flag;
    int j=0;
    for(int i=0;i<n;i++)
    {
        flag=0;
        while(j<m)
        {
            if(line[i]==mag[j])
            {
                j++;
                flag++;
                break;
            }
            else
            {
                j++;
            }

        }
        if(!flag)
        break;
    
    }
    if(!flag)
    {
        cout<<"No";
    }
    else
        cout<<"Yes";
}
