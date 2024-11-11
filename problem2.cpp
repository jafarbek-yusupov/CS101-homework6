#include <iostream>
#include <vector>

using namespace std;

// int main() {
//     int m, n;
//     cin >> m >> n;

//     vector<vector<int>> matrix(m, vector<int>(n));
//     for (int i = 0; i < m; ++i)
//         for (int j = 0; j < n; ++j)
//             cin >> matrix[i][j];

//     double rowSum = 0, colSum = 0;
    
//     for (int i = 0; i < m; ++i) {
//         double rowTotal = 0;
//         for (int j = 0; j < n; ++j)
//             rowTotal += matrix[i][j];
//         rowSum += rowTotal / n;
//     }

//     for (int j = 0; j < n; ++j) {
//         double colTotal = 0;
//         for (int i = 0; i < m; ++i)
//             colTotal += matrix[i][j];
//         colSum += colTotal / m;
//     }

//     cout << (rowSum == colSum ? "YES" : "NO") << endl;

//     return 0;
// }
