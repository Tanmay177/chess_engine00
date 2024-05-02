#include<iostream>
#include "helpers.h"
void print_bitboard(U64 bitboard);
int main(){

    U64 bit = 1ULL;
    print_bitboard(bit);
    bit |= 1ULL << e4;
    set_bit(bit, a1);
    rst_bit(bit, e4);
    // std::cout << get_bit(bit,e1);
    print_bitboard(bit);
   
    return 0;


}