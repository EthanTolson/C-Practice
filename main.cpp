#include <iostream>

using namespace std;

void output(char board[])
{
    for(int i = 0; i < 64; i ++)
    {
        if( i % 8 == 0)
        {
            cout << endl;
        }
        cout << board[i] << " ";
    }
}

int main()
{
    int piecesOne[] = { 2, 4, 6, 8, 9,11,13,15,18,20,22,24}; //Starting position of red pieces
    int piecesTwo[] = {41,43,45,47,50,52,54,56,57,59,61,63}; //Starting position of black pieces
    char board[64];
    //builds the board
    for(int i = 0; i < 8; i ++)
    {
        for (int j = 0; j < 8; j++)
        {
            //even rows go b r b r
            if( i % 2 == 0 )
            {
                if ((i*8+j) % 2 == 0)
                {
                    board[i * 8 + j] = 'r';
                }
                else
                {
                    board[i * 8 + j] = 'b';
                }
            }
            //odd rows go r b r b
            else
            {
                if ((i*8+j) % 2 == 0)
                {
                    board[i*8+j] = 'b';
                }
                else
                {
                    board[i*8+j] = 'r';
                }
            }
        }        
    }
    output(board);
    return 0;
}