#include<bits/stdc++.h>
using namespace std;

void prints(int **arr, int **sample, int n, int x, int y)
{
    if(x==n-1&&y==n-1)
    {
        sample[x][y]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<sample[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        sample[x][y]=0;
        return;
    }
    if(x>n-1||y>n-1||x<0||y<0||sample[x][y]==1||arr[x][y]==0)
    {
        return;
    }
    sample[x][y]=1;
    prints(arr,sample,n,x+1,y);
    prints(arr,sample,n,x,y+1);
    prints(arr,sample,n,x-1,y);
    prints(arr,sample,n,x,y-1);
    sample[x][y]=0;
    return;
    
}


bool printt(int **arr, int**sample, int n, int x, int y)
{
    if(x==n-1&&y==n-1)
    {
        return true;
    }
    if(x<0||y<0||x>n-1||y>n-1||sample[x][y]==1||arr[x][y]==0)
    {
        return false;
    }
    sample[x][y]=1;
    if(printt(arr,sample,n,x+1,y))
    {
        return true;
    }
    if(printt(arr,sample,n,x,y+1))
    {
        return true;
    }
    if(printt(arr,sample,n,x-1,y))
    {
        return true;
    }
    if(printt(arr,sample,n,x,y-1))
    {
        return true;
    }
    sample[x][y]=0;
    return false;
}

int main()
{
    int **arr;
    int n;
    cin>>n;
    arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int **sample=new int*[n];
    for(int i=0;i<n;i++)
    {
        sample[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            sample[i][j]=0;
        }
    }
    prints(arr,sample,n,0,0);
    
    
    cout<<printt(arr,sample,n,0,0);
    
}
