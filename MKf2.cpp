#include"MKf.h"
#include"MKf2.h"
#include"mario.h"
#include"Raggal.h"
void printSolution(int board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout<<board[i][j]<<"  ";
        cout<<endl;
    }
}
