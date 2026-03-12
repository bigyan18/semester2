#include<iostream>
#include<vector>
using namespace std;

bool hasThree(int num){
    while(num>0){
        if(num%10==3) return true;
        num/=10;
    }
    return false;
}

int magicSum3(vector<int> arr){
    int sum=0;
    for(int i=0;i<arr.size();i=i+2){
        if(hasThree(arr[i])){
            sum+=arr[i];
        }
    }
    return sum;
}

int main(){
    vector<int> arr={1,2,3,4,5,6,13,3,30};
    cout<<"the sum is "<<  magicSum3(arr);
    return 0;
}