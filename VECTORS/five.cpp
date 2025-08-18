#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
  {
    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0; i<n; i++)  cin>>array[i];
    cout<<"what element do you want to search for?"<<endl;
    int a;
    cin>>a;
    auto k = find(array.begin(), array.end(), a);
    if(k != array.end())
    { 
      cout<<"element at= "<< k - array.begin()<<endl;
    }
    else 
      return -1;

    return 0;
  }