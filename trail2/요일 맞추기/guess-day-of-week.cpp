#include <iostream>
#include <string>
using namespace std;

int days_in_month[13] = {-99, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day_name[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int ordinalDate(int mm, int dd) {
    int res = 0;
    for (int i = 1; i < mm; ++i) {
        res += days_in_month[i];
    }
    res += dd;
    return res;
}

int main() {
    int m1,d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int diff = ordinalDate(m2, d2) - ordinalDate(m1, d1);
    while (diff < 0) {diff += 7;}
    diff %= 7;
    cout << day_name[diff];

    return 0;
}