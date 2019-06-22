#include<bits/stdc++.h>
using namespace std;

int strr(string, string);
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    string s1, s2;
    cin>>s1>>s2;
    int ans=strr(s1,s2);
    if(ans)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    
}

int strr(string s1, string s2)
{
    string::iterator it;
    map<char,int> iden1;
    map<char,int> iden2;
    for(it=s1.begin();it!=s1.end();it++)
    {
        iden1[*it]++;
    }
    for(it=s2.begin();it!=s2.end();it++)
    {
        iden2[*it]++;
    }
    map<char,int> :: iterator ite;
    for(ite=iden1.begin();ite!=iden1.end();ite++)
    {
        if(iden1[ite->first]&&iden2[ite->first])
        {
            return 1;
        }
    }
    return 0;

}
