#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int money,result=0;
    cin>>money;
    int arr[money+1];
    arr[0]=0;
    for(int i=1;i<=money;i++)
        arr[i]=INT_MAX;
    int coins[3]={1,3,4};
    for(int i=0;i<=money;i++)
    {
        int j=0;
        while(j<3&&i>=coins[j])
        {
            result=arr[i-coins[j]]+1;
            if(result<arr[i])
                arr[i]=result;
                j++;
        }
    }
    cout << arr[money] << endl;
    return 0;
}
