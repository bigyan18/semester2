#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

vector<int> createArr(int n){
    vector<int> newArr;
    for(int i=0;i<n;i++){
        newArr.push_back(rand()%9);
    }
    return newArr;

}
void printArr(vector<int> arr3){
    for(int i: arr3){
        cout<<i<<" ";
    }
}

int main(){
    srand(time(nullptr));
    int n=10;
    vector<int> arr=createArr(n);
    printArr(arr);
}