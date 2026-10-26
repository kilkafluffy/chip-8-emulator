#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    uint16_t a = 0xA2F0;
    cout << hex << uppercase;
    for (int i = 12; i >= 0; i -= 4) {
        uint16_t blip = (a >> i)& 0xF;
        cout << blip;
    }

    return 0;
}