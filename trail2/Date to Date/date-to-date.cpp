#include <iostream>
using namespace std;

int day_of_month[13] = {-99, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int start_idx = 0, end_idx = 0;
    for (int i = 1; i <= m1; ++i) {
        if (i == m1)
            start_idx += d1;
        else
            start_idx += day_of_month[i];
    }

    for (int i = 1; i <= m2; ++i) {
        if (i == m2)
            end_idx += d2;
        else
            end_idx += day_of_month[i];
    }

    cout << end_idx - start_idx + 1;

    return 0;
}