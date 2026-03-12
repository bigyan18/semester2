#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<vector>
using namespace std;
int main(){
    srand(time(nullptr));
    int m,n;
    cout<<"enter row and col "<<endl;
    if(!(cin>>m>>n)  || m<=0 || n<=0){
        cout<<"error in inputs"<<endl;
        return 1;
    }
    

    vector<vector<int>> arr(m,vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=rand()%20;
        }
    }
    cout<<endl<<endl;
       //to print 2D array
    for (const auto& row : arr) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    
    cout<<endl;
    int ans=0;
    for(int i=0;i<m;i++){
        int sum=INT_MIN;
        for(int j=0;j<n;j++){
            sum=max(sum,arr[i][j]);
        }
        ans+=sum;
    }

    cout<<"the sum is "<<ans;
}