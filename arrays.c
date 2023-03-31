#include <stdio.h>

int main()
{
    int mat[4][3], i = 0, j = 0;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            mat[i][j] = i;
        }
    }
    int mat2[12];
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            mat2[4*i] = mat[i][j];
        }
    }
    for(i = 0 ; i < 12; i++)
    {
        printf("%d ", mat2[i]);
    }

    return 0;
}
