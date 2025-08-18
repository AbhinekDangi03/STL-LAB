#include<iostream>
#include<vector>
using namespace std;
int main()
  {
    vector<int> array = {1,2,3,4,5};
    int index = 3;
    for(int i= 0; i<array.size(); i++) cout<<array[i]<<" ";
    cout<<endl;
    array.insert(array.begin() + index, 15);
    for(int i= 0; i<array.size(); i++) cout<<array[i]<<" ";
    return 0;
  }