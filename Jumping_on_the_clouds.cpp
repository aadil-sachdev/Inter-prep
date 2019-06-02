#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string cloud;
    cin.ignore();
    getline(cin,cloud);
    int step=0;
    int i=0;
    while(cloud[i+2]!='\0')
    {
        //cout<<i;
        if(cloud[i+4]=='0')
        {
            i+=4;
            step++;
        }
        else 
        {
            i+=2;
            step++;
        }
        
    }
    cout<<step;
}
