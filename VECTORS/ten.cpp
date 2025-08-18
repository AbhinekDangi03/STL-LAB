#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
    {
        vector<int> array = {1,2,3,3,4,5,6,7,8,9};
        for(int i = 0; i<array.size(); i++) cout<<array[i]<<" ";
        cout<<endl;
        array.erase(unique(array.begin(), array.end()));
        for(int i = 0; i<array.size(); i++) cout<<array[i]<<" ";
        return 0;
    }