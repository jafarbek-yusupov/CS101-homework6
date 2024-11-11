#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
#define rp(i,a,b)   for(int i=a; i<b; i++)

int main(){
    int m, n;  cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n, 0));
    rp(i,0,m){ rp(j,0, n){    cin >> v[i][j];} }
    rp(i,0,m){ cout << accumulate(v[i].begin(), v[i].end(), 0) << endl;}
    return 0;
}
