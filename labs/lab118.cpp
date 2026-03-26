#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;

void createArr(vector<vector<int>>&arr,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=rand()%4;
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
    cout<<endl;
}

bool isShaded(int i, int j){
    
     if((j==3 && i<3) || (i==3 && j>2)||(i+j==6 && i>3) ) return true;
     else return false;
}

void search(vector<vector<int>> &arr, int m,int n){
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int minDiff=INT_MAX;
            for(int x=0;x<m;x++){
                for(int y=0;y<n;y++){
                    if(isShaded(x,y)){
                        int diff=abs(arr[i][j]-arr[x][y]);
                        minDiff=min(diff, minDiff);
                    }
                }
                
            }
           
        }
    }
    cout<<sum;
}

int main(){
    srand(time(nullptr));
    int m=7, n=6;
    vector<vector<int>> arr(m,vector<int>(n));
    createArr(arr,m,n);
    printArr(arr);
    search(arr,m,n);
}