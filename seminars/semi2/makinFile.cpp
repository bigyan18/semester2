#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    ofstream file("remembraing.txt");
    if(!file.is_open()){
        cout<<"error in opening"<<endl;
        return 1;
    }
    //file<<"hello hwo are you??";
    
    for(int i=0;i<10;i++){
        file<<i<<endl;
    }
    file.close();

    ifstream Rfile("remembraing.txt");
    if(!Rfile.is_open()){
        cout<<"error in opening file"<<endl;  
        return 1;
    }
    string line;
    while(getline(Rfile,line)){
        cout<<line<<endl;
    }
    Rfile.close();
}