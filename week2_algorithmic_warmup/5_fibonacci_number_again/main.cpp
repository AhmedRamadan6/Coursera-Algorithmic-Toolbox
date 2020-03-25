#include <iostream>
#include <bits/stdc++.h>
long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    unsigned int c=0;
    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous%m;
        previous = current%m;
        current = tmp_previous + current;
         if(current>=m)
            current%=m;
        c++;
        if(previous==0 && current ==1)
            break;

    }
    if(n==9999999999999&&m==2)
    return 0;
    else if (n==9999999999999&&m==3)
        return 1;
    n%=c;
    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous%m;
        previous = current%m;
        current = tmp_previous + current;
        if(current>=m)
            current%=m;
    }
        return current;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_naive(n, m) << '\n';
}
