#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
int countDigit(int n)
{
    int count = 0;
    while (n > 0) {
        n = n / 10;
        ++count;
    }
    return count;
}
int fibonacci_sum_squares_naive( int n, int digits) {
    if (n <= 1)
        return n;

      int previous = 0;
      int current  = 1;
       int sum      = 0;
    for (int i = 0; i <n; ++i) {
        int tmp_previous = previous%digits;
        previous = current%digits;
        current = (tmp_previous + current)%digits;
    }
    sum = ((previous%digits)*(current%digits))%10;
    return sum;
}

int main() {
     int  n = 0,digits;
    std::cin >> n;
        for(int i=0,L=countDigit(n);i<L-1;i++)
            digits*=10;
    std::cout << fibonacci_sum_squares_naive(n,digits);
}
