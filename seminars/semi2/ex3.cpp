#include<iostream>
#include<vector>
using namespace std;

void stalinSort(vector<int>& arr){
   int index=1;
   for(int i=1;i<arr.size();i++){
    if(arr[i]>=arr[index-1]){
        arr[index++]=arr[i];
    }
   }
   arr.resize(index);
   for(int i: arr){
    cout<<i<<" ";
   }
}

int main(){
    vector<int> arr={1,3,2,5,4,6};
    stalinSort(arr);
}