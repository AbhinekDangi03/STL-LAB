#include<iostream>
#include<vector>
using namespace std;
int main()
  {
    int n;
    cin>>n;
    vector<int>array(n);
    for(int i = 0; i<n; i++) cin>>array[i];
    int a,b = array[0];
    for(int i = 1; i<n; i++)
      {
        if(array[i] > array[0])
            a = array[i];
        if(array[i]< array[0])
          b = array[i];
      }
      cout<<"biggest element = "<<a<<endl;
      cout<<"smallest element = "<<b<<endl;
    return 0;
  }