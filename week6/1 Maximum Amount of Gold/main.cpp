#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int optimal_weight(int w, const vector<int> &item) {
    int n= item.size(),val;
      if (n<=0|| w<=0)
    {
        return 0;
    }
    int arr[n+1][w+1];
    for(int i=0;i<=w;i++)
        arr[0][i]=0;
    for(int i=0;i<=n;i++)
        arr[i][0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            arr[i][j]=arr[i-1][j];
            if(item[i-1]<=j)
            {
                val = arr[i-1][j-item[i-1]]+item[i-1];
                if(val > arr[i][j])
                    arr[i][j]=val;
            }
        }
    }
    return arr[n][w];

}

int main() {
  int n, W;
  std::cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }
  std::cout << optimal_weight(W, w) << '\n';
}

