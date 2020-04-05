#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
    long long fibonacci_sum_fast(long long n) {
        long long f[60];
        f[0]=0;
        f[1]=1;
        for(int i=2;i<60;i++)
        {
            f[i]=(f[i-1]%10+f[i-2]%10)%10;
        }
        long long r = (++n)%60; // reminder after cycles done


    return (f[r]*f[r-1])%10;
    }





int main() {
    long long n;
    cin >> n;

    cout << fibonacci_sum_fast(n);

}
