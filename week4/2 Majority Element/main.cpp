#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
    int x = a[0],c=0;
    for(int i=0;i<right;i++)
    {
        if(a[i]==x)
            c++;
        else
        {
            if(c>right/2)
                return 1;
            else
            {
                x=a[i];
                c=1;
            }
        }
    }
    if(c>right/2)
        return 1;
    return 0;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  sort(a.begin(),a.end());
  std::cout << get_majority_element(a, 0, a.size()) << '\n';
}
