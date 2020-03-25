#include <iostream>

using namespace std;
int GCD (int a,int b)
{

    if (b==0)
        return a;
    else
    {

        a=a%b;
        return GCD(b,a);

    }
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << GCD(a,b) << endl;
    return 0;
}
