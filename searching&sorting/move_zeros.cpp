#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    int size;
    cout << "Size: ";
    cin >> size;

    while (size--) {
        int temp;
        cin >> temp;
        a.emplace_back(temp);
    }

    int next_non_zero = 0;
    for (int value : a) {
        if (value != 0) {
            a[next_non_zero++] = value;
        }
    }

    while (next_non_zero < a.size()) {
        a[next_non_zero++] = 0;
    }

    for (int value : a) {
        cout << value << ' ';
    }
    cout << '\n';
}