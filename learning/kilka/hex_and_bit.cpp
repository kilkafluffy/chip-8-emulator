#include <iostream>
using namespace std;

int main() {
    auto number = 0xA2F0;

    for (int n=0; n<=12; n+=4) {
        int x = (number >> n) & 0xF;
        cout << x << " ";
    }

    return 0;
}
