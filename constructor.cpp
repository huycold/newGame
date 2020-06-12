#include "constructor.h"

//khoi tao ran
void nhapran(ran &snack)
{
	snack.n=2;
	TextColor(13);
	snack.dot[0].x=1;
	snack.dot[0].y=0;
	snack.dot[1].x=0;
	snack.dot[1].y=0;
	snack.tt=RIGHT;
	snack.diem.a=0;
}
// khoi tao hoa qua
void nhaphoaqua(hoaqua &hq)
{
	srand(time(NULL));
	hq.td.x=rand()%ngang-5;
	hq.td.y=rand()%doc-5;
}

