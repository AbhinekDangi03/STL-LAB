#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
  {
    vector<int> array = {3,4,524,2,2231,1,23,4,5,56,6,2,3,5,234,6,3,234,5,6};
    for(int i = 0; i<array.size(); i++) cout<<array[i]<<" ";
    sort(array.begin(), array.end());
    cout<<endl;
    for(int i = 0; i<array.size(); i++) cout<<array[i]<<" ";
    return 0;
  }