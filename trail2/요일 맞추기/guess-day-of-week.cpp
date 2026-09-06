#include <iostream>
#include <string>
using namespace std;

int num_of_days[13] = {-99, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

bool isEarlier(int m1, int d1, int m2, int d2) {
    return m1*100 + d1 < m2*100 + d2;
}

int main() {
    int m1,d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int curr_month_idx = m1;
    int curr_date = d1;
    int curr_day_idx = 0;
    if (isEarlier(m1, d1, m2, d2)) {
        while (!(curr_month_idx == m2 && curr_date == d2)) {
            // 달 넘어가는 순간
            if (curr_date == num_of_days[curr_month_idx]) {
                curr_date = 1;
                curr_month_idx++;
            }
            else {
                curr_date++;
            }
            curr_day_idx = (curr_day_idx + 1)%7;
        }
    }
    else {
        while (!(curr_month_idx == m2 && curr_date == d2)) {
            // 달 넘어가는 순간
            if (curr_date == 1) {
                curr_month_idx--;
                curr_date = num_of_days[curr_month_idx];
            }
            else {
                curr_date--;
            }
            curr_day_idx--;
            if (curr_day_idx < 0) {curr_day_idx = 6;}
        }
    }
    cout << day[curr_day_idx];

    return 0;
}