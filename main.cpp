#include "D:\Инженерка\TX\TXLib.h"

using namespace std;

void drawMan(int x, int y,
             int dlina_ruki, int polojenie_nogi,
             int radius_golovy, COLORREF color);
int main()
{
    txCreateWindow(1000, 600);

    for (int i =  0; i < 50; i++) {
        txClear();
        txSetFillColor(TX_BLACK);
        txFloodFill(3, 3);

        if (i < 10) {
            drawMan(100 + 4 * i, 200,   50, 6, 20, TX_RED);
        } else if (i < 20) {
            drawMan(100 + 4 * i, 200,  -50, 60,20, TX_YELLOW);
        } else if (i < 30) {
            drawMan(100 + 4 * i, 200,   50, 6, 20, TX_BLUE);
        } else if (i < 40) {
            drawMan(100 + 4 * i, 200,  -50, 60,20, TX_BLUE);
        } else {
            drawMan(100 + 4 * i, 200,   50, 6, 20, TX_BLUE);
        }
        drawMan(400, 200, -100, 10, 50, TX_BLUE);
        drawMan(700, 200,   30, 10, 10, TX_BLUE);
        txSleep(200);
    }

    return 0;
}


void drawMan(int x, int y,
             int dlina_ruki, int polojenie_nogi,
             int radius_golovy, COLORREF color)

{

    txSetFillColor(color);
    txCircle   (x +              25, y -  radius_golovy, radius_golovy);
    txRectangle(x                  , y,
                x +              50, y + 200);
    txLine     (x                  , y,
                x -              10, y +  dlina_ruki);
    txLine     (x +              50, y,
                x +              60, y +  50);
    txLine     (x                  , y + 200,
                x -              10, y + 250);
    txLine     (x +              50, y + 200,
                x +  polojenie_nogi, y + 250);
}
