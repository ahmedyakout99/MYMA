#include"mkf1.h"
#include"mkf2.h"
#include"Raggal.h"
#include"mario.h"
void printSolution(int board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout<<board[i][j]<<"  ";
        cout<<endl;
    }
}
