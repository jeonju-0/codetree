#include <iostream>
using namespace std;

int dateToMin(int day, int hour, int min) {
    return day*24*60 + hour*60 + min;
}

int main() {
    int start = dateToMin(11, 11, 11);
    int a, b, c;
    cin >> a >> b >> c;
    int end   = dateToMin(a, b, c);
    cout << (end >= start ? end - start : -1);

    return 0;
}