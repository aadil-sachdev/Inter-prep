#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string ,string>phonebook;
    int n;
    cin>>n;
    string phone,name;
    for(int i=0;i<n;i++)
    {
        cin>>name>>phone;
        phonebook[name]=phone;
    }
    map<string,string>::iterator it;
    string query;
    while(cin>>query)
    {
        if(phonebook.find(query)!=phonebook.end())
        {
            cout<<phonebook.find(query)->first<<"="<<phonebook.find(query)->second<<endl;
        }
        else
            cout<<"Not found"<<endl;
    }
}
