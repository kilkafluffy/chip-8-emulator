#include <iostream>
#include <cstdint>
using namespace std;

uint16_t fetch(uint8_t a, uint8_t b) {
    return (a << 8) | b;
}

int main()
{
    uint8_t memory[4096];
    memory[0x200] = 0xA2;
    memory[0x201] = 0xF0;

    cout << hex << uppercase;
    cout << fetch(memory[0x200], memory[0x201]) << endl;

    return 0;
}
