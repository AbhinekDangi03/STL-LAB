#include<iostream>
#include<vector>
using namespace std;
int main()
  {
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i= 0; i<n; i++) cin>>array[i];
    int sum = 0;
    for(int x: array)
      {
        sum += x;
      }
    cout<<"sum = "<<sum<<endl;
    return 0;
  }