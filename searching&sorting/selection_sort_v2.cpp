#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    int size;
    cout << "Size: ";
    if (!(cin >> size) || size < 0) {
        cerr << "Size must be a non-negative integer.\n";
        return 1;
    }

    a.reserve(size);
    while (size--) {
        int temp;
        cin >> temp;
        a.emplace_back(temp);
    }

    for (size_t i = 0; i + 1 < a.size(); i++) {
        size_t minimum_index = i;
        for (size_t j = i + 1; j < a.size(); j++) {
            if (a[j] < a[minimum_index]) {
                minimum_index = j;
            }
        }
        swap(a[minimum_index], a[i]);
    }

    cout << "Sorted Array: ";
    for (int value : a) {
        cout << value << ' ';
    }
    cout << '\n';
}