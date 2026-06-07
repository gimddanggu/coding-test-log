#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 10

int n;
string name[MAX] = {};
int height[MAX] = {};
int weight[MAX] = {};
tuple<int, int, string> arr[MAX] = {}; // 키, 몸무게, 이름
int main() {
    // Please write your code here.
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        arr[i] = make_tuple(height[i], -weight[i], name[i]);
    }

    sort(arr, arr+n);

    for (int i=0; i<n; i++) {
        cout << get<2>(arr[i]) << " " << get<0>(arr[i]) << " " << -get<1>(arr[i]) << "\n";
    }
    return 0;
}