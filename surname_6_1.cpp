#include <iostream>
using namespace std;

void countFrequency(int arr[], int n, int index) {
    if (index >= n)
        return;

    int count = 1;
    int current = arr[index];

    while (index + count < n && arr[index + count] == current)
        count++;

    cout << current << " appears " << count << " time(s)" << endl;

    countFrequency(arr, n, index + count);
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Frequencies of elements in sorted array:\n";
    countFrequency(arr, n, 0);

    return 0;
}
