#include <iostream>
using namespace std;

int getGcd(int a, int b) {
    if (b == 0) {return a;}
    return getGcd(b, a%b);
}

int lcm(int a, int b) {
    return a*b/getGcd(a, b);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << lcm(n, m);

    return 0;
}