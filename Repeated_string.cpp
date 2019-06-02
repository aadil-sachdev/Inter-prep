#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    long n;
    cin>>n;
    cin.ignore();
    int len=s.length();
    long quo=n/len;
    int rem=n%len;
    int i=0;
    long count=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a')
        count++;
        i++;
    }
    count*=quo;
    for(int i=0;i<rem;i++)
    {
        if(s[i]=='a')
        count++;
    }
    cout<<count;
}
