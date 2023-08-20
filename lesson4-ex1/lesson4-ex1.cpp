//
//  lesson4-ex1.cpp
//  lesson4-ex1
//
//  Created by domain_management on 8/20/23.
//
// Array that represents squares on a chessboard

#include <iostream>

using namespace std;

// Don't forget to initialize the first element of the list to guarantee that the data is valid
enum ChessPieces{
    Empty = 0,
    Pawn,
    Rook,
    Knight,
    Bishop,
    Queen,
    King
};

int main(){
    ChessPieces chessBoard[8][8] = {};
    
    chessBoard[0][0] = Rook;
    
    cout << "Piece at row 1, column 1 is: " << chessBoard[0][0] << endl;
    
    return 0;
    
}
