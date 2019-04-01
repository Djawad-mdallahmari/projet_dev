#include "dynamic.h"
#include "console_display.h"

void initialize_cube()
{
    cube.face[WHITE].symbol = 'W' ;
    cube.face[GREEN].symbol = 'G' ;
    cube.face[RED].symbol = 'R' ;
    cube.face[BLUE].symbol = 'B' ;
    cube.face[ORANGE].symbol = 'O' ;
    cube.face[YELLOW].symbol = 'Y' ;
    cube.face[BUFFER].symbol = 'X' ;

    cube.FrontFace.numFace = RED ;
    cube.TopFace.numFace = WHITE ;
    cube.BackFace.numFace = ORANGE ;
    cube.RightFace.numFace = BLUE ;
    cube.LeftFace.numFace = GREEN;
    cube.DownFace.numFace = YELLOW ;
    cube.BufferFace.numFace = 0;

fill_face(cube.FrontFace.numFace);
fill_face(cube.TopFace.numFace);
fill_face(cube.BackFace.numFace);
fill_face(cube.RightFace.numFace);
fill_face(cube.LeftFace.numFace);
fill_face(cube.DownFace.numFace);

}

void fill_face(int Fce) // Create face of the cube and fill them with color
{
     for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            cube.face[Fce].color[i][j] = Fce ;

        }
    }
};






void effect_butter_opposite(int positive_sense,int negative_sense)//effect to rotate opposite face
{
///1st Face positive
 for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cube.face[BUFFER].color[i][j] = cube.face[positive_sense].color[i][j] ;
        }
    }
    int j= size-1 ;
    for(int i=0;i<size;i++){ //repartition comme il faut
        cube.face[positive_sense].color[0][i] = cube.face[BUFFER].color[j][0] ;
        cube.face[positive_sense].color[j][0] = cube.face[BUFFER].color[size-1][j] ;
        cube.face[positive_sense].color[size-1][j] = cube.face[BUFFER].color[i][size-1] ;
        cube.face[positive_sense].color[i][size-1] = cube.face[BUFFER].color[0][i] ;
        j--;
    }

    ///2nd Face negative
     for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cube.face[BUFFER].color[i][j] = cube.face[negative_sense].color[i][j] ;
        }
    }
    j= size-1 ;
    for(int i=0;i<size;i++){ //repartition comme il faut
        cube.face[negative_sense].color[0][j] = cube.face[BUFFER].color[j][size-1] ;
        cube.face[negative_sense].color[j][size-1] = cube.face[BUFFER].color[size-1][i] ;
        cube.face[negative_sense].color[size-1][i] = cube.face[BUFFER].color[i][0] ;
        cube.face[negative_sense].color[i][0] = cube.face[BUFFER].color[0][j] ;
        j--;
    }
}


void play() // menu console to play
{
    int choice=-1;

    do
    {

        printf("\n Choice (MAJ) : ");
        scanf("%d",&choice);
        switch(choice){
            //VIEW
            case 1 : rx(); break;
            case 2 : ry(); break;
            case 3 : rz(); break;
            //SIMPLE
            case 10 : right(); break;
            case 20 : right_inv(); break;
            case 11 : left(); break;
            case 21 : left_inv(); break;
            case 12 : top(); break;
            case 22 : top_inv(); break;
            case 13 : down(); break;
            case 23 : down_inv(); break;
            case 14 : front(); break;
            case 24 : front_inv(); break;
            case 15 : back(); break;
            case 25 : back_inv(); break;
            //DOUBLE
            case 30 : double_right(); break;
            case 40 : double_right_inv(); break;
            case 31 : double_left(); break;
            case 41 : double_left_inv(); break;
            case 32 : double_top(); break;
            case 42 : double_top_inv(); break;
            case 33 : double_down(); break;
            case 43 : double_down_inv(); break;
            case 34 : double_front(); break;
            case 44 : double_front_inv(); break;
            case 35 : double_back(); break;
            case 45 : double_back_inv(); break;
            //MIDDLE
            case 50 : middle_x(); break;
            case 60 : middle_x_inv(); break;
            case 51 : middle_y(); break;
            case 61 : middle_y_inv(); break;
            case 52 : middle_z(); break;
            case 62 : middle_z_inv(); break;
           //CMD
           case 5 : menu(); break;
           case 0 : break;
           default:
                printf("Error\n");
                menu();

        }
      display_game();

    }
    while((choice!=0));
};


void butter_effect_rotate(int R)
{
/*-----------------------*/
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cube.face[BUFFER].color[i][j] = cube.face[R].color[i][j] ;
        }
    }

    int j= size-1 ;
    for(int i=0;i<size;i++){
        cube.face[R].color[0][i] = cube.face[BUFFER].color[j][0] ;
        cube.face[R].color[j][0] = cube.face[BUFFER].color[size-1][j] ;
        cube.face[R].color[size-1][j] = cube.face[BUFFER].color[i][size-1] ;
        cube.face[R].color[i][size-1] = cube.face[BUFFER].color[0][i] ;
        j--;
    }
}


void rotates() //Movement right()
{

    int FrontV=cube.FrontFace.numFace; //COPY of num face in int
    int TopV=cube.TopFace.numFace;
    int BackV=cube.BackFace.numFace;
    int RightV=cube.RightFace.numFace;
    int LeftV=cube.LeftFace.numFace;
    int DownV=cube.DownFace.numFace;

    int j=size-1;
    for(int i = 0 ; i<size ; i++)
    {
        cube.face[BUFFER].color[i][size-1] = cube.face[FrontV].color[i][size-1] ;
    }
    for(int i = 0 ; i<size ; i++)
    {
        cube.face[FrontV].color[i][size-1] = cube.face[DownV].color[i][size-1] ;
    }
    for(int i = 0 ; i<size ; i++)
    {
        cube.face[DownV].color[j][size-1] = cube.face[BackV].color[i][0] ;//XXX
        j--;
    }
    j=size-1;
    for(int i = 0 ; i<size ; i++)
    {
        cube.face[BackV].color[i][0] = cube.face[TopV].color[j][size-1] ;//XXX
        j--;
    }
    for(int i = 0 ; i<size ; i++)
    {
        cube.face[TopV].color[i][size-1] = cube.face[BUFFER].color[i][size-1] ;
    }

    butter_effect_rotate(RightV);
}

void hundred_eighty(int Fce)
{
    for(int k = 0;k<size-1;k++)
    {
      for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cube.face[BUFFER].color[i][j] = cube.face[Fce].color[i][j] ;
            }
        }

        int j= size-1 ;
        for(int i=0;i<size;i++){
            cube.face[Fce].color[0][i] = cube.face[BUFFER].color[j][0] ;
            cube.face[Fce].color[j][0] = cube.face[BUFFER].color[size-1][j] ;
            cube.face[Fce].color[size-1][j] = cube.face[BUFFER].color[i][size-1] ;
            cube.face[Fce].color[i][size-1] = cube.face[BUFFER].color[0][i] ;
            j--;
        }
    }

}

void ninety(int Fce)
{
   for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cube.face[BUFFER].color[i][j] = cube.face[Fce].color[i][j] ;
            }
        }

        int j= size-1 ;
        for(int i=0;i<size;i++){
            cube.face[Fce].color[0][i] = cube.face[BUFFER].color[j][0] ;
            cube.face[Fce].color[j][0] = cube.face[BUFFER].color[size-1][j] ;
            cube.face[Fce].color[size-1][j] = cube.face[BUFFER].color[i][size-1] ;
            cube.face[Fce].color[i][size-1] = cube.face[BUFFER].color[0][i] ;
            j--;
        }
}


void rx()
{
    cube.BufferFace.numFace=cube.TopFace.numFace;
    cube.TopFace.numFace=cube.FrontFace.numFace;
    cube.FrontFace.numFace=cube.DownFace.numFace;

    cube.DownFace.numFace=cube.BackFace.numFace;
    cube.BackFace.numFace=cube.BufferFace.numFace;

    hundred_eighty(cube.DownFace.numFace);
    hundred_eighty(cube.BackFace.numFace);

    effect_butter_opposite(cube.RightFace.numFace,cube.LeftFace.numFace);

}

void ry()
{
    cube.BufferFace.numFace=cube.FrontFace.numFace;
    cube.FrontFace.numFace=cube.RightFace.numFace;
    cube.RightFace.numFace=cube.BackFace.numFace;

    cube.BackFace.numFace=cube.LeftFace.numFace;
    cube.LeftFace.numFace=cube.BufferFace.numFace;

    effect_butter_opposite(cube.TopFace.numFace,cube.DownFace.numFace);

}

void rz()
{

    cube.BufferFace.numFace=cube.TopFace.numFace;
    cube.TopFace.numFace=cube.LeftFace.numFace;
    cube.LeftFace.numFace=cube.DownFace.numFace;

    cube.DownFace.numFace=cube.RightFace.numFace;
    cube.RightFace.numFace=cube.BufferFace.numFace;

    ninety(cube.LeftFace.numFace);
    ninety(cube.RightFace.numFace);


    ninety(cube.TopFace.numFace);
    ninety(cube.DownFace.numFace);


    effect_butter_opposite(cube.FrontFace.numFace,cube.BackFace.numFace);

}
/* ninety(cube.LeftFace.numFace);
    hundred_eighty(cube.TopFace.numFace);*/
