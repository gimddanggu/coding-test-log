#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int>& card, int findNum);

int main(void)
{
    int n, m;

    cin >> n;
    vector<int> card1(n);
    for (int i = 0; i < n; i++) cin >> card1[i];
    
    cin >> m;
    vector<int> card2(m);
    for (int i=0; i < m; i++) cin >> card2[i];

    vector<int> res;

    sort(card1.begin(), card1.end());


    for (int e : card2)
    {
        // ����Ž�� 
        // ���� �����ϸ� �ε��� ����, ������ -1 ����
        int find = binarySearch(card1, e);
        res.push_back(find);
    }

    for (int r : res)
    {
        cout << r << ' ';
    }

    return 0;
}

// ã���� �ε��� ����

int binarySearch(const vector<int>& card, int findNum)
{
    int s, e;
    int mid;
    int findIdx = -1;
    int cnt = 0;
    s = 0;
    e = card.size() - 1;

    mid = (s + e) / 2;

    while (s < e)
    {
        //cout << s << ' ' << e << "\n";
        if (card[mid] == findNum)
        {
            findIdx = mid;
            cnt++;
            break;
        }


        else if (card[mid] > findNum) e = mid ;
        else if (card[mid] < findNum) s = mid + 1;
       

        mid = (s + e) / 2;
    }

    if (findIdx == -1) return 0;

    int i = findIdx - 1;
    // �������� Ž��
    while (i >= 0 && card[i] == findNum)
    {
        cnt++;
        i--;
    }
    
    i = findIdx + 1;
    // ���������� Ž��
    while (i < card.size() && card[i] == findNum)
    {
        cnt++;
        i++;
    }

    return cnt;
}