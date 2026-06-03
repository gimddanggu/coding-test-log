#include <iostream>
#include <algorithm>

using namespace std;

class Weather {
public:
    string date;
    string day;
    string weather;

    Weather() = default;
    Weather(string date, string day, string weather) {
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
};


int main() {
    // Please write your code here.
    int n;
    cin >> n;

    Weather w[100] = {};
    for (int i=0; i<n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;
        w[i] = Weather(date, day, weather);
    }

    Weather ans;
    bool found = false;

    for (int i=0; i<n; i++) {
        if (w[i].weather == "Rain") {
            if (!found || w[i].date < ans.date) { 
                ans = w[i]; 
                found = true;
            }
        }
    }
    cout << ans.date << " " << ans.day << " " << ans.weather;

    return 0;
}