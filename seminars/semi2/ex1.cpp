/*Создать блок схему:
Дана матрица N*M. Найти сумму наибольших элементов.*/

#include<iostream>
#include<cstdlib>
#include<vector>
#include<ctime>
using namespace std;
int main(){
    srand(time(nullptr));
    int m,n;
    if(!(cin>>m>>n)){
        cout<<"error inputs"<<endl;
        return 1;
    } 
 //   vector<vector<int>> arr(m,vector<int>(n));

    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j]=rand()%10;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    
    int ans=0;
    for(int i=0;i<3;i++){
        int sum=INT_MIN;
        for(int j=0;j<3;j++){
            sum=max(sum,arr[i][j]);   
        }
        ans+=sum;
        cout<<endl;
    }
    cout<<ans;
    
    
}