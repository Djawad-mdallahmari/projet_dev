#include "Test_program.h"
///VERIF
int verif_state()// FINISH CUBE
{
    int verif=0;
    if ((cube.FrontFace.numFace == RED) &
        (cube.TopFace.numFace == WHITE) &
        (cube.BackFace.numFace == ORANGE) &
        (cube.RightFace.numFace == BLUE) &
        (cube.LeftFace.numFace == GREEN) &
        (cube.DownFace.numFace == YELLOW) ){
    verif++;
    }//OK FONCTIONNE

    for(int F =1 ; F<nbface ; F++)
    {
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                if(cube.face[F].color[i][j] == F)
                {
                    verif++;
                    //printf("test : %d/55 color is : %d \n",verif,cube.face[F].color[i][j]);
                }
            }
        }
    }
    if(verif==(6*size*size)+1)
    {
         printf("OK : %d\n",verif);
         return 0;
    }
    else{

        printf("ERROR verification = %d\n",verif);
        return -1;
    }

}

///TEST ROTATION

int test_rx() //TEST ROTATION AXIS X -> horizontal
{
    for(int i = 0 ;i<4000;i++)
    {
        rx();
    }
    printf("recurence 4000 : rx() : ");
    verif_state();
}
int test_ry() //TEST ROTATION AXIS Y | vertical
{
      for(int i = 0 ;i<4000;i++)
    {
        ry();
    }
    printf("recurence 4000 : ry() : ");
    verif_state();
}
int test_rz() //TEST ROTATION AXIS Z O 3D
{
      for(int i = 0 ;i<4000;i++)
    {
        rz();
    }
    printf("recurence 4000 : rz() : ");
    verif_state();
}
int test_rotates()//TEST PRINCIPAL FUNCTION
{
    for(int i = 0 ;i<4000;i++)
    {
        rotates();
    }
    printf("recurence 4000 : rotates() : ");
    verif_state();
}

///TEST COUP
int test_coup() //TEST COUP
{
///---SIMPLE----///
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        right();
    }
    printf("recurence 4000 : right() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        left();
    }
   printf("recurence 4000 : left() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        top();
    }
    printf("recurence 4000 : top() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        down();
    }
   printf("recurence 4000 : down() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
       front() ;
    }
    printf("recurence 4000 : front() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        back();
    }
    printf("recurence 4000 : back() : ");
    verif_state();
///---------------------------------------------------------
///---SIMPLE_INV----///
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        right_inv();
    }
    printf("recurence 4000 : right_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        left_inv();
    }
   printf("recurence 4000 : left_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        top_inv();
    }
    printf("recurence 4000 : top_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        down_inv();
    }
   printf("recurence 4000 : down() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
       front_inv() ;
    }
    printf("recurence 4000 : front_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        back_inv();
    }
    printf("recurence 4000 : back_inv() : ");
    verif_state();
///---------------------------------------------------------
///---DOUBLE----///
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        double_right();
    }
    printf("recurence 4000 : double_right() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        double_left();
    }
   printf("recurence 4000 : double_left() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        double_top();
    }
    printf("recurence 4000 : double_top() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        double_down();
    }
   printf("recurence 4000 : double_down() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
       double_front() ;
    }
    printf("recurence 4000 : double_front() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        double_back();
    }
    printf("recurence 4000 : double_back() : ");
    verif_state();
///---------------------------------------------------------
///---DOUBLE_INV----///
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        double_right_inv();
    }
    printf("recurence 4000 : double_right_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        double_left_inv();
    }
   printf("recurence 4000 : double_left_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        double_top_inv();
    }
    printf("recurence 4000 : double_top_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        double_down_inv();
    }
   printf("recurence 4000 : double_down_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
       double_front_inv() ;
    }
    printf("recurence 4000 : double_front_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        double_back_inv();
    }
    printf("recurence 4000 : double_back_inv() : ");
    verif_state();
///---------------------------------------------------------
///MIDDLE
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        middle_x();
    }
    printf("recurence 4000 : middle_x() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        middle_y();
    }
    printf("recurence 4000 : middle_y() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        middle_z();
    }
    printf("recurence 4000 : middle_z() : ");
    verif_state();
///---------------------------------------------------------
///MIDDLE_inv
///---------------------------------------------------------
  for(int i = 0 ;i<4000;i++)
    {
        middle_x_inv();
    }
    printf("recurence 4000 : middle_x_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        middle_y_inv();
    }
    printf("recurence 4000 : middle_y_inv() : ");
    verif_state();
///---------------------------------------------------------
    for(int i = 0 ;i<4000;i++)
    {
        middle_z_inv();
    }
    printf("recurence 4000 : middle_z_inv() : ");
    verif_state();


/**/
}
///TEST COMPLET
int test_combinaison()//400 coup
{

}
int test_inv_combinaison() // 400 coup inv
{

}
///BILAN
int BILAN_test() //BILAN AFFICHAGE
{
    test_rx();
    test_ry();
    test_rz();

    test_coup();

    melange_400000();
    melange_inv_400000();
}

int melange_400000()
{
    for(int i=0;i<400000;i++){
        ry();
        right();
    }
    printf("400000 recurence ry()+right() : ");
    verif_state();
    display_game();
}

int melange_inv_400000()
{
    for(int i=0;i<400000;i++){
        right_inv();
        ry();
        ry();
        ry();

    }
    printf("400000 recurence inv right()_inv()+ry_inv() : ");
    verif_state();
    display_game();
}

