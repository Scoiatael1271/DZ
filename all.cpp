#include <iostream>
using namespace std;
long long calls = 0;
int maxDepth = 0;     
int fib(int n, int depth) {
    calls++;
    if (depth > maxDepth) {
        maxDepth = depth;
    }
    if (n <= 1) {
        return 1;      // F(0) = 1, F(1) = 1
    }
    return fib(n - 1, depth + 1) + fib(n - 2, depth + 1);
}
int main() {
    int n;
    cin >> n;
    calls = 0;
    maxDepth = 0;
    fib(n, 1);
    cout << calls << " " << maxDepth << endl;
    return 0;
}