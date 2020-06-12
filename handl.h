#ifndef HANDL_H
#define HANDL_H

#include "myStruct.h"
#include <conio.h>
#include <ctime>

// dieu kien game
void dieukien (ran &snack);
// xu ly ran an hoa qua va tang do kho cho game
int xuly1 (ran &snack,hoaqua &hq,int &dokho);
// xu ly ran an boom

// xy ly thua game
int gameover (ran snack);
int xuly2 (ran &snack,hoaqua &hq,int &dokho);
int gameover2(ran snack);
#endif // HANDL_H
