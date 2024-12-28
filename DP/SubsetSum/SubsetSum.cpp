#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 7, 8, 10};
    int sum = 11;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool t[n + 1][sum + 1];  // Use a boolean table

    // Initialize the DP table
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            if (j == 0) {
                t[i][j] = true; // Sum of 0 is always achievable
            } else if (i == 0) {
                t[i][j] = false; // Can't achieve a non-zero sum with 0 items
            } else {
                if (arr[i - 1] <= j) {
                    t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
                } else {
                    t[i][j] = t[i - 1][j];
                }
            }
        }
    }

    // Output the result
    cout << (t[n][sum] ? "Yes" : "No") << endl;
    return 0;
}
