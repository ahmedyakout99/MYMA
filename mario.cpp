#include"mkf.h"
#include"mkf2.h"
#include"Raggal.h"
#include"mario.h"
bool solveNQ()
{
    int board[N][N] = {0};
    if (solveNQUtil(board, 0) == false)
    {
        cout<<"Solution does not exist"<<endl;
        return false;
    }
    printSolution(board);
    return true;
}
