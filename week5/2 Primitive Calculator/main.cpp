#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int mini(int a,int b,int c)
{
    return min(a,min(b,c));
}

int main() {
  int n,result=0;
  cin >> n;
  vector <int> v (n+1);
  v[1]=0;
  for(int i=2;i<=n;i++)
        v[i]=INT_MAX;
  int numbers[3]={1,2,3};
  for(int i=2;i<=n;i++)
  {
      int j=0;
      while(j<3)
      {
          if(numbers[j]>1 && i%numbers[j]==0)
          {
                result=v[i/numbers[j]]+1;
                if(result<v[i])
                    v[i]=result;

          }
          else if(numbers[j]==1)
          {
              result=v[i-1]+1;
              if(result<v[i])
                v[i]=result;
          }
          j++;
      }
  }
  cout << v[n] << endl;
  vector <int> vect;
  vect.push_back(n);
  int temp=n,x=INT_MAX,y=INT_MAX,z=INT_MAX,store=0;
  while(temp>1)
  {
      if(temp%3==0)
        x=v[temp/3];
       if(temp%2==0)
        y=v[temp/2];
        z=v[temp-1];
      store=mini(x,y,z);
    if(store==x)
        temp/=3;
    else if(store==y)
        temp/=2;
    else
        temp-=1;
    vect.push_back(temp);
    x=INT_MAX,y=INT_MAX,z=INT_MAX;

  }
  reverse(vect.begin(),vect.end());
  for(int i=0;i<vect.size();i++)
    cout << vect[i] << " ";
  cout << endl;

}
