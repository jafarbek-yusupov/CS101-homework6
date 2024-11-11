#include <iostream>
#include <vector>
using namespace std;

#define rp(i, a, b) for(int i = a; i < b; i++)

bool isa(const vector<vector<int>>& v, int m, int n) {
    double c = 0;
    rp(j, 0, n){    c += v[0][j];}
    c /= n;
    rp(i, 1, m){
        double ra = 0;
        rp(j, 0, n){    ra += v[i][j];}
        ra /= n;
        if(ra != c){    return false;}
    }
    rp(j, 0, n){
        double ca = 0;
        rp(i, 0, m){    ca += v[i][j];}
        ca /= m;
        if(ca != c){    return false;}
    }
    return true;
}

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    rp(i, 0, m){    rp(j, 0, n){    cin >> v[i][j]; }   }
    cout << (isa(v, m, n) ? "YES" : "NO") << endl;
    return 0;
}
