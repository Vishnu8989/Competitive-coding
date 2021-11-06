char *tictactoe(int **moves, int movesSize, int *movesColSize)
{
    int d[3][3] = {0};
    for (int i = 0; i < movesSize; i++)
    {
        int m = 2;
        if (i % 2 == 0)
        {
            m = 1;
        }
        d[moves[i][0]][moves[i][1]] = m;
    }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf(" %d",d[i][j]);
    //     }
    //     printf("\n");
    // }
    int win = 0;
    if (d[1][1] == d[0][0] == d[2][2])
    {
        win = d[1][1];
    }
    else if (d[2][0] == d[1][1] == d[0][2])
    {
        win = d[1][1];
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if (d[0][i] == d[1][i] == d[2][i])
            {
                win = d[0][i];
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (d[i][0] == d[i][1] == d[i][2])
            {
                win = d[i][0];
            }
        }
    }
    if (win == 0 && movesSize == 9)
    {
        return "Draw";
    }
    if (win == 2)
    {
        return "B";
    }
    if (win == 1)
    {
        return "A";
    }
    if (win == 0 && movesSize < 9)
    {
        return "Pending";
    }
    return "Pending";
}