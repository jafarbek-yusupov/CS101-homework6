#include <iostream>
#include <vector>
using namespace std;
#define rp(i,a,b) for(int i=a; i<b; i++)

int main() {
    int m, n, t;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    rp(i, 0, m){    rp(j, 0, n) {    cin >> v[i][j];}}
    cin >> t;
    rp(i, 0, t){
        int row, col, num;
        cin >> row >> col >> num;
        v[row - 1][col - 1] = num;
    }
    rp(i, 0, m){    rp(j, 0, n){    cout << v[i][j] << " ";}    cout << endl;}
    return 0;
}
