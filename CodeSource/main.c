#include <stdio.h>
#include <stdlib.h>
#include "console_display.h"
#include "Test_program.h"

int main()
{

    printf("Do you want Test_Program() ?\n Press 1:Yes OR 2:No :  ");
    int choice ;
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("\nTest_mode\n");
        initialize_cube();
        printf("Verif initialize() : ");
        verif_state();
        BILAN_test();
        verif_state();
    }
    else if(choice==2)
    {
        printf("\nProgram\n");
        intro();
        initialize_cube();
        display_game();
        menu();
        play();
        return 0;

    }
     else
    {
        printf("\nERROR CHOICE\n Bye.");

    }








}


