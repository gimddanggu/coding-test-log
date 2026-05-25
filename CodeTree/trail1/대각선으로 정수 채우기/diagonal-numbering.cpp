#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100][100] = {};
    int n, m; 
    int cnt = 1;
    cin >> n >> m;

    for (int s = 0; s <= n + m - 2; s++) {
        for (int r=0; r < n ; r++) {
            int c = s - r;

            if (c >= 0 && c < m)
                arr[r][c] = cnt++;
        }
    }

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cout << arr[i][j] << " ";
        }

        cout << "\n";
    }
    return 0;
}