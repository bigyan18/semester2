#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int A[7][6] = {
        {2, 4, 6, 8, 10, 3},
        {5, 9, 12, 7, 14, 15},
        {11, 16, 13, 18, 20, 21},
        {22, 23, 24, 17, 26, 27},
        {2, 3, 5, 7, 11, 13},
        {29, 30, 31, 32, 33, 34},
        {35, 36, 37, 38, 39, 40}
    };

    // ✅ Correct offsets
    int dx[] = {0, 1,1, 2,2, 3, 4,4,4,4,4,4};
    int dy[] = {0, 1,5, 2,4, 3, 0,1,2,3,4,5};

    int size = 12;
    int counter = 1;

    cout << "--------------------------------------\n";
    cout << "| No. |  i  |  j  | Result (Sum)      |\n";
    cout << "--------------------------------------\n";

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 6; j++) {

            int sum = 0;

            for (int k = 0; k < size; k++) {
                int x = i + dx[k];
                int y = j + dy[k];

                // boundary check
                if (x >= 0 && x < 7 && y >= 0 && y < 6) {
                    if (isPrime(A[x][y])) {
                        sum += A[x][y];
                    }
                }
            }

            cout << "| " << setw(3) << counter++
                 << " | " << setw(3) << i
                 << " | " << setw(3) << j
                 << " | " << setw(17) << sum << " |\n";
        }
    }

    cout << "--------------------------------------\n";

    return 0;
}