#include "helpers.h"
#include<iostream>
void print_bitboard(U64 bitboard)
{
    for(int rank = 0 ; rank < 8; rank++)
    {
        std::cout << 8- rank << "   ";
       
        for(int file=0; file < 8; file++){

            int square = rank*8 + file;
            std::cout << (get_bit(bitboard, square) ? 1 : 0 )<< " ";
        }
        std::cout << "\n";

       
    }

    std::cout  << "    a b c d e f g h\n";
     std::cout << bitboard << "\n";
}