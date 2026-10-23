#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int left = 0;
    int right = n;
    int comparisons = 0;
    while (left < right) {
        int mid = left + (right - left) / 2;
        comparisons++;
        if (a[mid] > x) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }
    cout << left << " " << comparisons << endl;
    return 0;
}