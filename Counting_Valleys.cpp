#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    int i=0;
    int counter=0;
    int valleys=0;
    while(s[i]!='\0')
    {
        if(s[i]=='U')
        counter++;
        else if(s[i]=='D')
        counter--;

        if (counter==0&&s[i]=='U')
        valleys++;
        i++;
    }
    return valleys;
}

int main()
{

    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    
    int valleys=countingValleys(n,s);
    cout<<valleys;
}
