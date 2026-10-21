#include <iostream>
using namespace std;
int main() {
    int a[] = {29, 10, 14, 37, 13};
    int n = 5;
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
            if (a[j] < a[minIndex]) minIndex = j;
        swap(a[i], a[minIndex]);
    }
    for (int x : a) cout << x << ' ';
    cout << '\n';
}