#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(long long i,long long j)
{
        return i>j;

}

bool sortcol( const vector<long long>& v1,
               const vector<long long>& v2 ) {
    if(v1[0]==v2[0])
    {

        return v1[1]<v2[1];
    }
 return v1[0] > v2[0];
}
int main()
{
    int n,input;
    cin >> n;
    vector <long long> arr (n);
    vector <vector <long long>> arr2 (n,vector <long long> (2));
    int flag=0;
    for(int i=0;i<n;i++)
    {
            cin >> arr[i];
            if(arr[i]-10<0)
                flag++;

    }
    stable_sort(arr.begin(),arr.end());
    vector <long long> arr3;
    arr3 =arr;
        if(flag ==n|| flag==0)
            flag=0;
        else
            flag=1;
    if(flag ==1)
    {
        int temp=0,x=0;
        for(int i=0;i<n;i++)
        {
            temp =arr[i];
            if(temp-10>=0)
            {
                x = arr[i]/10;
                arr2[i][0]=x;
            }
            else
                arr2[i][0]=arr[i];

                arr2[i][1]=i;
        }
            int pos=0;
            stable_sort(arr2.begin(),arr2.end(),sortcol);
            for(int i=0;i<n;i++)
            {
                pos =arr2[i][1];

                arr[i] = arr3[pos];
            }
            //sort(arr.begin(),arr.end(),cmp);
            for(int i=0;i<n;i++)
            {
                //int j =0;
                /*while(arr2[i][0]== arr2[i+1][0] && j<n-1 && arr[pos]>10)
                {
                        swap(arr[pos],arr[pos+1]);
                        j++;
                }*/
                if(i<n-1)
                {
                     int j=i;
                    while (arr[j]/10==arr[j+1]/10 && arr[j]>10 && arr[j+1]>10)
                    {
                        int k =j+1;
                        while(arr[j]/10==arr[k]/10 && arr[k]>arr[j] && arr[k]>10)
                        {
                            swap(arr[j],arr[k]);
                            k++;
                        }
                        j++;

                    }
                }
            cout << arr[i];

            }
             cout << endl;
            }
    else
    {
            stable_sort(arr.begin(),arr.end(),cmp);;
            for(int i=0;i<arr.size();i++)
            cout << arr[i];
            cout << endl;
    }
    return 0;
}
