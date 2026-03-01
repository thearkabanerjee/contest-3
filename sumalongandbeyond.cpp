#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long diagonalSum = 0;
    long long nonDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long x;
            cin >> x;

            if (i == j || i + j == n - 1) {
                diagonalSum += x;
            } else {
                nonDiagonalSum += x;
            }
        }
    }

    cout << diagonalSum << " " << nonDiagonalSum << endl;

    return 0;
}