#include "console.h"
#include "myStruct.h"
#include "display.h"
#include "constructor.h"
#include "handl.h"

int main ()
{	int i;
    int kt=0;
    int x;
    int dokho=150;
    diemso diem;
	ran snack;
	hoaqua hq;
	 char snake[11][80]= {
               " OOOOOO   O       O        O        O    O   O O O O",
			   "O         O o     O       O O       O   O    O",
			   "O         O  o    O      O   O      O O      O",
               " OOOOOO   O   o   O     O O O O     O        O O O O",
			   "      O   O    o  O    O       O    O O      O",
               "      O   O     o O   O         O   O   O    O",
			   "OOOOOOO   O      oO  O           O  O    O   O O O O"



                            };
    char huongdan[12][80]= {          "A :left",
    								  "D :right",
    								  "W :up",
    								  "S :down",
    								  "Y :static",
    								  "X :fast and forius",
    								  "O :prey"
    								  


                            };
    TextColor(11);
    for ( i=0;i<7;i++)
    {   gotoXY(5,5+i);
        cout<<snake[i];
        Sleep(200);
    }

    TextColor(12);
    for ( i=0;i<11;i++)
    {   gotoXY(5,15+i);
        cout<<huongdan[i];
        Sleep(200);
    }
    while(1){
    		if(kbhit())
	{
		   char key=_getch();
                if(key=='x'||key=='	X')    
				{
					

	nhapran(snack);
	nhaphoaqua(hq);

	while(1)
	{

	hienthiran( snack);
	hienthihoaqua(hq);

	hienthidiem(snack);
	dieukien(snack);
	xuly1(snack,hq,dokho);

	kt=gameover(snack);
	if(kt==-1)
	{
		clrscr();
		ketthuc();
		break;
	}

    Sleep(dokho);
	}
	
				}	
				else if(key=='y'|| key =='Y')
				{
						nhapran(snack);
	nhaphoaqua(hq);

	while(1)
	{

	hienthiran( snack);
	hienthihoaqua(hq);

	hienthidiem(snack);
	dieukien(snack);
	xuly2(snack,hq,dokho);

	kt=gameover2(snack);
	if(kt==-1)
	{
		clrscr();
		ketthuc();
		break;
	}

    Sleep(dokho);
	}
					}	
	}
	

}

	
	

return 0;
}
