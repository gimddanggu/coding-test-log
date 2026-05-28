#include <iostream>
using namespace std;

class Game {
public:
    string id;
    int lv;

    Game(string id, int lv) {
        this->id = id;
        this-> lv = lv;
    }
};

int main() {
    // Please write your code here.
    Game g1("codetree", 10);
    
    string inputId;
    int inputLv;

    cin >> inputId >> inputLv;
    
    Game g2(inputId, inputLv);

    cout << "user " << g1.id <<" lv " << g1.lv << "\n";
    cout << "user " << g2.id <<" lv " << g2.lv << "\n";

    return 0;
}