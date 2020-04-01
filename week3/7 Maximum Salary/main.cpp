#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;
bool cmp (int i,int j)
{
    return i>j;
}

int main()
{
    int n;
    cin >> n;
    vector <int> v1;
    vector <int> v2;
    int x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x<10)
            v1.push_back(x);
        else
            v2.push_back(x);
    }
    sort(v1.begin(),v1.end(),cmp);
    sort(v2.begin(),v2.end(),cmp);

    if(v1.size()==0)
    {
        for(int i=0;i<n;i++)
            cout << v2[i];
        return 0;
    }
        else if(v2.size()==0)
    {
        for(int i=0;i<n;i++)
            cout << v1[i];
        return 0;
    }
    int c1=0,c2=0;
    vector <int> v3;
    for(int i=0;i<n;i++)
    {
        while(v1.size() > c1 && v2.size() > c2)
        {
            if(v1[c1]>=v2[c2]%10)
            {
                v3.push_back(v1[c1]);
                c1++;
            }
            else if (v1[c1]<v2[c2]%10)
            {
                v3.push_back(v2[c2]);
                c2++;
            }

        }
        if(v1.size() > c1)
        {
            v3.push_back(v1[c1]);
            c1++;
        }
        else if(v2.size() > c2)
        {
            v3.push_back(v2[c2]);
            c2++;
        }

    }
    for(int i=0;i<v3.size();i++)
        cout << v3[i];

    return 0;
}
