#ifndef RUBIKSCUBEV3_TEST_PROGRAM_H
#define RUBIKSCUBEV3_TEST_PROGRAM_H
#include "dynamic.h"


///VERIF
int verif_state();// FINISH CUBE

///TEST ROTATION
//int RETURNTRUE = 0;
//int RETURNFALSE = 0;
//int RETURNTOTAL ;

int test_rx(); //TEST ROTATION AXIS X -> horizontal
int test_ry(); //TEST ROTATION AXIS Y | vertical
int test_rz(); //TEST ROTATION AXIS Z O 3D
int test_rotates();//TEST PRINCIPAL FUNCTION

///TEST COUP
int test_coup(); //TEST COUP
///TEST COMPLET
int test_combinaison();//400 coup
int test_inv_combinaison(); // 400 coup inv
///BILAN
int BILAN_test(); //BILAN AFFICHAGE

int melange_400000() ;
int melange_inv_400000() ;


#endif // RUBIKSCUBEV3_TEST_PROGRAM_H
