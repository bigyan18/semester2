#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream Rfile("lab0.txt");
    if(!Rfile.is_open()){
        cout<<"error ";
        return 1;
    }
    string line;
    while(getline(Rfile,line)){
        cout<<line<<endl;
    }

}