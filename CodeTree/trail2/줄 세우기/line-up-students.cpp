#include <iostream>
#include <algorithm>
using namespace std;

int N;
int h[1000];
int w[1000];
tuple<int, int, int> arr[1000] = {};

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        arr[i] = make_tuple(-h[i], -w[i], i+1);
    }
    sort(arr, arr+N);
    for (int i=0; i<N; i++) {
        // auto[h, w, idx] = arr[i];
        // cout << - h << " " << -w << " "<< idx <<"\n";
        cout << -get<0>(arr[i]) << " " << -get<1>(arr[i]) << " " << get<2>(arr[i]) << "\n";
    }
    return 0;
}
