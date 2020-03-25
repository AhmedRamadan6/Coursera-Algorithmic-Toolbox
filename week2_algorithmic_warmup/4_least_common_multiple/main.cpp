#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long GCD (long long a,long long b)
{

    if (b==0)
        return a;
    else
    {
        return GCD(b,a%b);

    }
}
int main()
{
    long long a,b;
 std::cin >> a >> b;
cout <<(a*b)/GCD(a,b) << endl;
    return 0;
}


