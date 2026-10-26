#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    uint16_t number = 0xA2F0;
    cout << hex << uppercase;
    for (int n=12; n>=0; n-=4) {
        int x = (number >> n) & 0xF;
        cout << x << " ";
    }

    return 0;
}
