#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        bool isLargest = true;
        for (int j = i + 1; j < n - i; j++) {
            if (arr[i] < arr[j]) {
                isLargest = false;
                break;
            }
        }
        if (isLargest) {
            sum += arr[i];
        }
    }

    cout << sum;
    return 0;
}
