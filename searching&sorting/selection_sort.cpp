#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int size;

    cout << "Size: ";
    cin >> size;

    if (size < 0) {
        cout << "Size must be non-negative.\n";
        return 1;
    }

    numbers.reserve(size);
    for (int index = 0; index < size; ++index) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    for (int index = 0; index < size; ++index) {
        auto minimum = min_element(numbers.begin() + index, numbers.end());
        swap(numbers[index], *minimum);
    }

    cout << "Sorted array: ";
    for (int number : numbers) {
        cout << number << ' ';
    }

    cout << '\n';
}