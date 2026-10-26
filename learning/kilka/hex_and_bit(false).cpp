#include <iostream>
#include <string>
using namespace std;

int main() {

    string symbol = "0xA2F0";

    for (int i = 2; i < 6; i++) {
        char c = symbol[i];
        cout << symbol[i] << ": " <<(int)symbol[i] << endl;
    }
    return 0;
}
