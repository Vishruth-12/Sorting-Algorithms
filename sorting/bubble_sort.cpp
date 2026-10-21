#include <iostream>
using namespace std;
int main() {
    int a[] = {5, 1, 4, 2, 8};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
    for (int x : a) cout << x << ' ';
    cout << '\n';
}