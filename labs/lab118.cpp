#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

void createArr(vector<vector<int>>&arr,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=rand()%9;
        }
    }
}
void printArr(vector<vector<int>>&arr){
    for(auto row:arr){
        for(auto i:row){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int m=6, n=5;
    vector<vector<int>> arr(m,vector<int>(n));
    createArr(arr,m,n);
    printArr(arr);
}