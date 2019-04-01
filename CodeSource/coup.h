#ifndef RUBIKSCUBEV3_COUP_H
#define RUBIKSCUBEV3_COUP_H
#include "dynamic.h"
//HERE CODE

void rotates();
//Simple coup
// positive sense
void right();

void left();

void top();

void down();

void front();

void back();
// Simple coup
// negative sense

void back_inv();

void front_inv();

void down_inv();

void top_inv();

void left_inv();

void right_inv();

// Double coup
// positive sense
void double_right();

void double_left();

void double_top();

void double_down();

void double_front();

void double_back();

// Double coup
// negative sense
void double_right_inv();

void double_left_inv();

void double_top_inv();

void double_down_inv();

void double_front_inv();

void double_back_inv();

// Middle coup
// positive sense
void middle_x();

void middle_y();

void middle_z();
// Middle coup
// negative sense
void middle_x_inv();

void middle_y_inv();

void middle_z_inv();

#endif // RUBIKSCUBEV3_COUP_H
