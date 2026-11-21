#ifndef BOARD_H
#define BOARD_H
#include "Piece.h"

class Board {
private:
    Piece* grid[4][8];

public:
    Board();
    void display();
    Piece* getPiece(int r, int c);
    Color checkWinner();
    bool flipPiece(int r, int c);
    bool isCannonPathClear(int r1, int c1, int r2, int c2);
    bool move(int r1, int c1, int r2, int c2, Color turn);
};
#endif
