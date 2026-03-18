#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

void createArr (vector<vector<int>>&arr, int m, int n){
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=rand()%9;
        }
    }

}

void printArr(vector<vector<int>>&arr){
    for(const auto row: arr){
        for(int i:row){
            cout<<i<<"  ";
        }
        cout<<endl;
    }
}

int main(){
    srand(time(nullptr));
    int m=3, n=3;
    vector<vector<int>> arr(m, vector<int>(n));
    createArr(arr,m,n);
    printArr(arr);
}