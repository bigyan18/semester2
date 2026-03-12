#include <iostream>
#include <fstream>//file input/output operations
#include <ctime> //time-related functions and types
#include <cstdlib>//rand(), srand()
#include <iomanip>  //for setw()
#include <filesystem>//C++17+ for filesize
// UPDATED ON FEB 27 - test change to force update
namespace fs = std::filesystem;  
//using namespace std;

struct BinaryJournal {
    int id;
    float value;
    char level;
    int year;
};

int main() {
    srand(time(nullptr));

    //writing
    const int n = 10;
    std::fstream file("binJournal.bin", std::ios::out | std::ios::binary);
    if (file) {
         
    for (int i = 1; i <= n; i++) {
        BinaryJournal j;
        j.id    = i;
        j.value = rand() % 100;           //0–99
        j.level = "NMLH"[rand() % 4];
        j.year  = 2020 + (rand() % 6);    //2020–2025

        file.write(reinterpret_cast<const char*>(&j), sizeof(BinaryJournal));
    }
    file.close();
    std::cout << "Successfully wrote " << n << " records\n\n";
        
    }
    else std::cout << "Error opening file for writing\n";
        
    //Reading
    std::fstream fin("binJournal.bin", std::ios::in | std::ios::binary);
    if (!fin) {
        std::cout << "Error opening file for reading\n";
        return 1;
    }

    //header
    std::cout << std::left
         << std::setw(6)  << "ID"
         << std::setw(10) << "Value"
         << std::setw(8)  << "Level"
         << std::setw(6)  << "Year"
         << "\n";

    std::cout << std::string(30, '-') << "\n";

    for (int i = 1; i <=n; i++) {
        BinaryJournal j;
        fin.read(reinterpret_cast<char*>(&j), sizeof(BinaryJournal));

        std::cout << std::left
             << std::setw(6)  << j.id
             << std::setw(10) << j.value
             << std::setw(8)  << j.level
             << std::setw(6)  << j.year
             << "\n";
    }

    fin.close();

       //for file size
    std::string filePath="binJournal.bin";
    auto size=fs::file_size(filePath);
    std::cout<<"The file size is " <<size<<" bytes"<<std::endl;

   return 0;
}