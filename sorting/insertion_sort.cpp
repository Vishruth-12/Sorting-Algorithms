#include <iostream>
using namespace std;
int main() {
    int a[] = {9, 5, 1, 4, 3};
    for (int i = 1; i < 5; ++i) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) { a[j + 1] = a[j]; --j; }
        a[j + 1] = key;
    }
    for (int x : a) cout << x << ' ';
    cout << '\n';
}