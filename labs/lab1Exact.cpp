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

bool isPrime(int a){
    if(a <= 1) return false;
    for(int i = 2; i * i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}

void findSum(vector<vector<int>>&arr, int m, int n){
    int sum=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n || i==(m/2)+1){
                if(isPrime(arr[i][j])){
                    sum+=arr[i][j];
                }
            }
        }
    }
    cout<<"the sum is "<<sum<<endl;
}

int main(){
    srand(time(nullptr));
    int m=7, n=6;
    vector<vector<int>> arr =createArr(m,n);
    printArr(arr);
    findSum(arr,m,n);
    

}