#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int left = 0;
    int right = n - 1;
    int answer = -1;
    int comparisons = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        comparisons++;
        if (a[mid] == x) {
            answer = mid;
            right = mid - 1;
        }
        else if (a[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    cout << answer << " " << comparisons << endl;
    return 0;
}