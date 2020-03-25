

#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
using std::vector;
int j=0;
struct Segment {
    public:
  int start, end;
};
bool cmp( Segment v1, Segment v2)
{
    return v1.end<v2.end;
}
vector<int> optimal_points(vector<Segment> &segments) {
    int arr[segments.size()];
  vector<int> points;
    sort(segments.begin(),segments.end(),cmp);
    int x=0,n=segments.size();
    for(int i=1;i<n;i++)
    {
        if(segments[x].end>=segments[i].start && segments[x].end<=segments[i].end)
            continue;
        else
        {
            arr[j]=segments[x].end;
            j++;
            x=i;
        }

    }
      arr[j]=segments[x].end;
  for (size_t i = 0; i <=j; ++i) {
    points.push_back(arr[i]);
  }
  return points;
}

int main() {
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i) {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0,L=points.size(); i <L; ++i) {
    std::cout << points[i] << " ";
  }
}




