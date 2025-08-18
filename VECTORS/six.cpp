#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
  {
    vector<int> array = {1,2,3,4,4,4,4,5,6};
    int a = 4;
    int freq = 0;
    for(int i= 0; i<9; i++)
      {
        if(array[i] == a)
            freq++;
      }
    cout<<"key appeared "<<freq<<" times in the array."<<endl;
    return 0;
  }