#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000

pair<int,int> arr[MAX] = {};
int ans[MAX] = {};
int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        arr[i] = make_pair(num, i);
    }

    sort(arr, arr+n);

    // for (int i=0; i<n; i++) {
    //     int cnt=1;
    //     for (int j=0; j < n; j++) {
    //         if (i == arr[j].second) { 
    //             cout << cnt << " ";
    //             break;
    //         }
    //         cnt ++;
    //     }
    // }

    for (int i=0; i<n; i++) {
        ans[arr[i].second] = i+1;
    }

    for (int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}