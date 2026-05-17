#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<int> even;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            even.push_back(v[i]);
        }
    }

    reverse(even.begin(), even.end());

    for (auto a : even) {
        cout << a << " ";
    }
    return 0;
}