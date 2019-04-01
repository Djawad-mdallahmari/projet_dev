#include"coup.h"
//Simple coup
// positive sense
void right(){
    rotates();
}

void left(){
    ry();
    ry();
    right();
    ry();
    ry();
}

void top(){
    rz();
    right();
    rz();
    rz();
    rz();
}

void down(){
    rz();
    rz();
    rz();
    right();
    rz();
}

void front(){
    ry();
    ry();
    ry();
    right();
    ry();
}

void back(){
    ry();
    right();
    ry();
    ry();
    ry();
}
// Simple coup
// negative sense

void back_inv(){
    back();
    back();
    back();
}

void front_inv(){
    front();
    front();
    front();
}

void down_inv(){
    down();
    down();
    down();
}

void top_inv(){
    top();
    top();
    top();
}

void left_inv(){
    left();
    left();
    left();
}

void right_inv(){
    right();
    right();
    right();
}

// Double coup
// positive sense
void double_right(){
    left();
    rx();
}

void double_left(){
    right();
    rx();
}

void double_top(){
    down();
    ry();
}

void double_down(){
    top();
    ry();
    ry();
    ry();
}

void double_front(){
    back();
    rz();
}

void double_back(){
    front();
    rz();
    rz();
    rz();
}

// Double coup
// negative sense
void double_right_inv(){
    double_right();
    double_right();
    double_right();
}

void double_left_inv(){
    double_left();
    double_left();
    double_left();
}

void double_top_inv(){
    double_top();
    double_top();
    double_top();
}

void double_down_inv(){
    double_down();
    double_down();
    double_down();
}

void double_front_inv(){
    double_front();
    double_front();
    double_front();
}

void double_back_inv(){
    double_back();
    double_back();
    double_back();
}

// Middle coup
// positive sense
void middle_x(){
    top();
    down_inv();
}

void middle_y(){
    right();
    left_inv();

}

void middle_z(){
    front();
    back_inv();
}
// Middle coup
// negative sense
void middle_x_inv(){
    middle_x();
    middle_x();
    middle_x();
}

void middle_y_inv(){
    middle_y();
    middle_y();
    middle_y();
}

void middle_z_inv(){
    middle_z();
    middle_z();
    middle_z();
}
