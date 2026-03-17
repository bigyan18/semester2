#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

vector<vector<int>> createArr(int m,int n){
    vector<vector<int>> Newarr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            Newarr[i][j]=rand()%9;
        }
    }
    return Newarr;
}

void printArr(vector<vector<int>> &arr){
    for(auto row: arr){
        for(int val :row){
            cout<<val<<"  ";
        }
        cout<<endl;
    }

}

int main(){
    srand(time(nullptr));
    int m=7, n=6;
    vector<vector<int>> arr =createArr(m,n);
    printArr(arr);
    

}