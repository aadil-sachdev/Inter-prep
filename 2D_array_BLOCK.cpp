#include <bits/stdc++.h>

using namespace std;

int hourglassSum(int arr[6][6]) 
{
    int sum[4][4]={0};
    for(int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            for(int k=i;k<i+3;k++)
            {
                if(k==i+1)
                    {
                        sum[i][j]+=arr[k][j+1];
                    }
                else{
                    for(int l=j;l<j+3;l++)
                    {
                        sum[i][j]+=arr[k][l];
                    }
                    }
            }
        }
    }
    int max=INT_MIN;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(sum[i][j]>max)
            max=sum[i][j];
        }
    }
    return max;
}

int main()
{
    int arr[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }

    int result=hourglassSum(arr);
    cout<<result;
    return 0;
}
