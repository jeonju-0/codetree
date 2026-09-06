#include <iostream>
#include <string>
using namespace std;

int num_of_days[13] = {-99, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day_name[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string target_day;
    cin >> target_day;
    int target_day_idx;
    for (int i = 0; i < 7; ++i) {
        if (target_day == day_name[i]) {target_day_idx = i; break;}
    }

    int cnt = 0;
    int curr_month = m1;
    int curr_date = d1;
    int curr_day_idx = 0;
    while (!(curr_month == m2 && curr_date == d2)) {
        if (curr_day_idx == target_day_idx) {cnt++;}
        if (curr_date == num_of_days[curr_month]) {
            curr_month++;
            curr_date = 1;
        }
        else {
            curr_date++;
        }
        curr_day_idx = (curr_day_idx + 1)%7;
    }
    if (curr_day_idx == target_day_idx) {cnt++;}
    cout << cnt;

    return 0;
}