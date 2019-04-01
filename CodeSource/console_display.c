#include "console_display.h"

void intro()
{ //introduction


    printf("--------------------------\n");
    printf("-----  Rubik's cube ------\n");
    printf("-By Djawad(©) & Nathan(©)-\n");
    printf("--------------------------\n");
};

void menu() //Menu of the game
{
    printf("\n|------------------------------------------------------------------------------|\n");
    printf("|------------------------------------GLOSSARIE---------------------------------|\n");
    printf("|R=Right L=Left T=Top D=Down F=Front B=Back                                    |\n");
    printf("|-------------------|------------------|-------------------|-------------------|\n");
    printf("|    VIEW           |   SIMPLE /INV    |   DOUBLE /INV     |      MIDDLE /INV  |\n");
    printf("| Rotate X: RX = 1  | R= 10 / RI= 20   | DR= 30 /DRI= 40   | MX= 50 / MXI= 60  |\n");
    printf("| Rotate Y: RY = 2  | L= 11 / LI= 21   | DL= 31 /DLI= 41   | MY= 51 / MYI= 61  |\n");
    printf("| Rotate Z: RZ = 3  | T= 12 / TI= 22   | DT= 32 /DTI= 42   | MZ= 52 / MZI= 62  |\n");
    printf("|                   | D= 13 / DI= 23   | DD= 33 /DDI= 43   |                   |\n");
    printf("| Help : 5          | F= 14 / FI= 24   | DF= 34 /DFI= 44   |                   |\n");
    printf("| EXIT : 0          | B= 15 / BI= 25   | DB= 35 /DBI= 45   |                   |\n");
    printf("|-------------------|------------------|-------------------|-------------------|\n");
};

int displayer(int Fce) //display the face in console table
{
    int nb = size * 2 + 1;
    display_pipe(nb);


    for(int i = 0; i < size; i++)
    {
        printf("\t|");
        for(int j = 0; j < size; j++)
        {


            if( cube.face[Fce].color[i][j] == WHITE )
            {
                printf("%c",cube.face[WHITE].symbol);
            }
            else if( cube.face[Fce].color[i][j] == GREEN )
            {
                printf("%c",cube.face[GREEN].symbol);
            }
            else if( cube.face[Fce].color[i][j] == BLUE )
            {
                printf("%c",cube.face[BLUE].symbol);
            }
            else if( cube.face[Fce].color[i][j] == RED )
            {
                printf("%c",cube.face[RED].symbol);
            }
            else if( cube.face[Fce].color[i][j] == ORANGE )
            {
                printf("%c",cube.face[ORANGE].symbol);
            }
            else if( cube.face[Fce].color[i][j] == YELLOW )
            {
                printf("%c",cube.face[YELLOW].symbol);
            }

            printf("|");

        }
        printf("\n");
        display_pipe(nb);

    }
    printf("\n");
};

void display_game() // display label before displayer
{
    printf("          TOP   \n");
    displayer(cube.TopFace.numFace);
    printf("         FRONT   \n");
    displayer(cube.FrontFace.numFace);
    printf("         LEFT   \n");
    displayer(cube.LeftFace.numFace);
    printf("         RIGHT   \n");
    displayer(cube.RightFace.numFace);
    printf("         DOWN   \n");
    displayer(cube.DownFace.numFace);
    printf("         BACK   \n");
    displayer(cube.BackFace.numFace);
};

void display_pipe(int nb) //visual rendering
{
    printf("\t");
    for(int k = 0; k < nb; k++)
    {
        printf("-");
    }
    printf("\t\n");
};
