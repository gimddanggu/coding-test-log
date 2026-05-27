#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n, k;
    int cnt = 0;
    string t;
    string str[100];
    cin >> n >> k;
    cin >> t;

    for (int i=0; i<n; i++) {
        string tmp;
        cin >> tmp;

        bool startStr = true;

        if (tmp.size() < t.size()) {
            startStr = false;
        } else {
            for (int j=0; j < t.size(); j++) {
                if (tmp[j] != t[j]) {
                    startStr = false;
                    break;
                }
            }

            if (startStr) {
                // str[i] = tmp; // 인덱스로 저장하면 순서대로 저장 안됨 조건에 맞는 번째만 저장되어서 나중에 정렬할 때 문제 발생
                str[cnt] = tmp;
                cnt++;
            }
        }
        
        
    }

    // for (auto w : str)
    //     cout << w << " ";
    
    std::sort(str, str + cnt);

    // cout << "\n";
    // for (auto w : str)
    //     cout << w << " ";

    cout << str[k-1];

    return 0;
}