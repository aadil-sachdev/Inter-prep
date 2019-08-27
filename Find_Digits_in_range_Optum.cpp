#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int itr=a;
    int counter=0;
    while(itr<=b)
    {
        if(itr%10==a)
        counter++;
        if(itr/10==a)
        {
            itr++;
            counter++;
        }
        else
        itr++;
    }
    cout<<counter;
}


