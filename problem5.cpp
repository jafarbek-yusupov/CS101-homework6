#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
#define rp(i,a,b)   for(int i=a; i<=b; i++)

int main() {
    int a, b, c, e, d;
    cin >> a >> b >> c >> e >> d;
    int cnt = 0;
    rp(i,1,d){    if(i % a == 0 || i % b == 0 || i % c == 0 || i % e == 0){    cnt++;}}
    cout << cnt << endl;
    return 0;
}
