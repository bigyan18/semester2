#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    srand(time(nullptr));
    int m=7, n=6;
    vector<vector<int>> arr(m,vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = rand() % 9;
        }
    }
    for(vector<int> row: arr){
        for(int val : row){
            cout<<val<<"   ";
        }
        cout<<endl;
    }

}