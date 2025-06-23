#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    int n, m;

    cin >> n;
    vector<int> card1(n);
    for (int i = 0; i < n; i++) cin >> card1[i];

    cin >> m;
    vector<int> card2(m);
    for (int i = 0; i < m; i++) cin >> card2[i];
    
    vector<int> res;

    sort(card1.begin(), card1.end());

    for (int e : card2)
    {
        int f_l = lower_bound(card1.begin(), card1.end(), e) - card1.begin();
        int f_u = upper_bound(card1.begin(), card1.end(), e) - card1.begin();

        cout << f_u - f_l << ' ';

    }

    /*for (int e : res)
    {
        cout << e << ' ';
    }*/
	return 0;

}