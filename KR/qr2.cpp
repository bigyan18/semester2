#include<iostream>
#include<vector>
using namespace std;


vector<int> find(vector<int>&arr){
    vector<int>newArr;
    int maxx=INT_MIN, minn=INT_MAX;
    for(int i=0;i<arr.size();i++){
        maxx=max(maxx,arr[i]);
        minn=min(minn,arr[i]);
    }
    newArr.push_back(minn);
    newArr.push_back(maxx);
    return newArr;
}

int main(){
    vector<int> arr={ 3,4,5,6,1,9};
    for(int i :find(arr)){
        cout<<i<<" ";
    }
    return 0;
}