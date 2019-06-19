#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    map<string,int> mag;
    map<string,int> line;
    string word;
    for(int i=0;i<m;i++)
    {
        cin>>word;
        mag[word]++;
    }    
    for(int i=0;i<n;i++)
    {
        cin>>word;
        line[word]++;
    }
    int success=0;
    map<string,int>::iterator it;
    for(it=line.begin();it!=line.end();it++)
    {
        if(it->second>mag[it->first])
        {success++;
        break;}
    }
    if(success)
    cout<<"No";
    else
    cout<<"Yes";
}
