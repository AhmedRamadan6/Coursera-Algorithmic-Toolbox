#include <iostream>

/*void fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return ;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous%10;
        previous = current%10;
        current = (tmp_previous + current)%10;
        sum += current;
        std :: cout << sum <<" ";
    }}*/
    // //It takes a while before it is noticeable. In fact, the series is just 60 numbers long and then it repeats the same sequence again and again all the way through the Fibonacci series
    int fibonacci_sum_fast(long long n) {
        long long f[60];
        f[0]=0;
        f[1]=1;
        int sum=1;
        for(int i=2;i<=60;i++)
        {
            f[i]=(f[i-1]%10+f[i-2]%10)%10;
            sum+=f[i];
        }
        sum%=10;
        int c = n/60; // number of cycles
        int r = n%60; // reminder after cycles done
        sum = (sum*c)%10; // sum of last digit after multiple by number of cycles
        for(int i=0;i<=r;i++) // loop show how sum become after add number of iterations show by a reminder
        {
            sum+=f[i];
        }

    return sum%10;
    }





int main() {
    long long n = 0;
    std::cin >> n;
     std:: cout << fibonacci_sum_fast(n);
}
