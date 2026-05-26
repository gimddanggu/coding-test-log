#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    int arr [10][10] = {};
    cin >> n >> m;

    for (int i=0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
    }

    for (int i=1; i <= n; i++) {
        for (int j=1; j <= n; j++)
            cout << arr[i][j] << " ";
        cout << "\n";
    }

    return 0;
}