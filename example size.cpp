#include "TXLib.h"
#include "THGLib.h"

using namespace std;

int main() {
    txCreateWindow(600, 177);
    clearScreen();
    drawCharacter("Cirno", 0, 0, 1);
    drawCharacter("Satori", 360, 60, -0.4, true, false, false, true, false, 0, 0, 0, true);
    drawCharacter("Marisa", 600, 0, -0.8);
}