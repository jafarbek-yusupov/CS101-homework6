#include <iostream>
#include <vector>
#define rp(i,a,b)   for(int i=a; i<b; i++)
#define pb push_back
using namespace std;

bool isp(vector<int>& ps, int n) {
    int cnt = 0;
    rp(i, 0, ps.size()){
        if (ps[i] == 0 && (i == 0 || ps[i - 1] == 0) && (i == ps.size() - 1 || ps[i + 1] == 0)){
            ps[i] = 1;    cnt++;
            if (cnt == n){  return true;}
        }
    }
    return false;
}

int main() {
    int n;  cin >> n;
    vector<int> ps;
    int i;
    while (cin >> i){    ps.pb(i);}
    cout << (isp(ps, n) ? "YES" : "NO") << endl;
    return 0;
}
