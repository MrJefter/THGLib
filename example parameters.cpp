#include "TXLib.h"
#include "THGLib.h"

using namespace std;

int main() {
    txCreateWindow(300, 177);
    clearScreen();
    while (true) {
    drawCharacter("Cirno", 0, 0, 1, true, false, true, true, true, RGB (143, 234, 244), RGB (130, 153, 225),
    RGB (95, 224, 239));
    Sleep(500);
    clearScreen();
    drawCharacter("Cirno", 0, 0, 1, false, false, false, true, true, RGB (143, 234, 244), RGB (130, 153, 225),
    RGB (95, 224, 239));
    Sleep(500);
    clearScreen();
    drawCharacter("Cirno", 0, 0, 1, true, false, false, false, true, RGB (143, 234, 244), RGB (130, 153, 225),
    RGB (95, 224, 239));
    Sleep(500);
    clearScreen();
    drawCharacter("Cirno", 0, 0, 1, true, true, true, false, false, RGB (143, 234, 244), RGB (130, 153, 225),
    RGB (95, 224, 239));
    Sleep(500);
    clearScreen();
    drawCharacter("Cirno", 0, 0, 1, true, true, false, true, true, RGB (143, 234, 244), RGB (130, 153, 225),
    RGB (95, 224, 239));
    Sleep(500);
    clearScreen();
    }
}