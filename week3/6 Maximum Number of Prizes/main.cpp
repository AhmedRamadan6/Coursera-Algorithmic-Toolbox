#include <iostream>
#include <vector>

using std::vector;
vector<int> optimal_summands(int n) {
  vector<int> summands;
  for(int i=1;i<=n;i++)
    {
        n-=i;
        if(n<=i)
        {
            summands.push_back(i+n);
            break;
        }
        else
            summands.push_back(i);
    }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  int L = summands.size();
  std::cout << L << '\n';
  for (size_t i = 0; i <L; ++i) {
    std::cout << summands[i] << ' ';
  }
}


