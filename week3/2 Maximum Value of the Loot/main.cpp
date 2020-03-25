
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using std::vector;
  double n;
  double capacity;
bool sortcol(  vector<double> v1,
                vector<double> v2 ) {
 return v1[0] > v2[0];
                }

double get_optimal_value(double capacity, vector<double> weights, vector<double> values) {
  double value = 0.0;

      vector<vector<double>> valu(n,vector <double> (2));
    for(int i=0;i<n;i++)
    {
        valu[i][0]=values[i]/weights[i];
        valu[i][1]=i;
    }
    sort(valu.begin(),valu.end(),sortcol);
    int i=0,pos=0;
    double units=0;
    while(capacity>0 && i<n)
    {
        pos=valu[i][1];
        if(capacity<weights[pos])
        {
            units=weights[pos]/capacity;
            value+=values[pos]/units;
            capacity=0;
        }
        else
        {
        capacity-=weights[pos];
        value+=values[pos];
        }
        i++;
    }
  return value;
}

int main() {
  std::cin >> n >> capacity;
  vector<double> values(n);
  vector<double> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
