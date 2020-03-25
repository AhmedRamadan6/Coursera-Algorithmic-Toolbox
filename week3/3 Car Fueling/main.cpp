#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int d, int m, int n,vector<int> & stops) {
    int lR=0,nR=0,i=1,z=m;
     while(i<n+2)
    {
        if(m<stops[i]-stops[i-1])
        {
            return-1;
        }
        else
        {
            m-=(stops[i]-lR);
            if(m<0)
            {
                lR=stops[i-1];
                nR+=1;
            }

        }

        i++;
        m=z;
    }
    return nR;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n+2);
    stops[0]=0;
    stops[n+1]=d;
    for (size_t i = 1; i < n+1; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, n,stops) << "\n";

    return 0;
}
