#include <iostream>
#include <string>
using namespace std;

int num_of_days[13] = {-99, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day_name[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int ordinalDate(int m, int d) {
    int res = 0;
    for (int i = 1; i < m; ++i) {
        res += num_of_days[i];
    }
    res += d;

    return res;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string target_day;
    cin >> target_day;
    int target_day_idx;
    for (int i = 0; i < 7; ++i) {
        if (target_day == day_name[i]) {target_day_idx = i; break;}
    }

    int total_days = ordinalDate(m2, d2) - ordinalDate(m1, d1) + 1;
    int cnt = total_days/7;
    cnt += (target_day_idx <= total_days%7 - 1);
    cout << cnt;

    return 0;
}