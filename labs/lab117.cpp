#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

void printArr(vector<vector<int>> &arr){
    for(auto row: arr){
        for(int val :row){
            cout<<val<<"  ";
        }
        cout<<endl;
    }

}

bool isPrime(int a){
    // if(a <= 1) return false;
    // for(int i = 2; i * i <= a; i++){
    //     if(a % i == 0) return false;
    // }
    // return true;
    int count=0;
    for(int i=2;i<=a;i++){
        if(a%i==0)count++;

    }
    if(count==1) return true;
    else return false;

}

void findSum(vector<vector<int>>&arr, int m, int n){
    int sum=0;
    for(int i=0;i<5;i++){
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

bool search(int a){
    if()
}

int main(){
    srand(time(nullptr));
   
   vector<std::vector<int>> arr = {
    {3, 3, 6, 2, 0, 8},
    {3, 6, 2, 5, 1, 0},
    {0, 0, 8, 4, 1, 8},
    {1, 3, 1, 6, 8, 5},
    {0, 2, 5, 3, 1, 1},
    {7, 3, 7, 6, 0, 2},
    {2, 8, 8, 8, 5, 5}
};
 int m=arr.size(), n=arr[0].size();
 
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(k)
        }
    }
 }
    printArr(arr);
    findSum(arr,m,n);
        
    

}