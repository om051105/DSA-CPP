#include <iostream>
#include <conio.h>
#include <windows.h>

int main() {
    char ch = '.';
    std::cout << "Enter following character to produce sound with different freq\n";
    std::cout << "a s d f g h j k l";
    std::cout << "\n     q-> for exiting ...\n";
    while (ch != 'q') {
        ch = _getch();
        switch (ch) {
            case 'a': Beep(350, 200); break;
            case 's': Beep(380, 200); break;
            case 'd': Beep(410, 200); break;
            case 'f': Beep(440, 200); break;
            case 'g': Beep(470, 200); break;
            case 'h': Beep(500, 200); break;
            case 'j': Beep(530, 200); break;
            case 'k': Beep(560, 200); break;
            case 'l': Beep(590, 200); break;
        }
    }
    return 0;
}
