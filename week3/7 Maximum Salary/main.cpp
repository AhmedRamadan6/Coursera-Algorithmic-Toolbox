#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool cmp (string i,string j)
{

    return i+j>j+i;
}
int main()
{
    int n,x;
    cin >> n;
    vector <string> v;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(to_string(x));
    }
    sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++)
          cout << v[i];
    return 0;
}
