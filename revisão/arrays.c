#include <stdio.h>

int main()
{
    int mat[4][3], i = 0, j = 0;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            mat[i][j] = (j+1+i);
        }
    }
    
    int mat2[12];
    
    /*
    
     vetor mat2 recebe os valores conforme a fórmula 
            "v[k] = mat[i][j] onde k = n * i + j em que n é o número de
             colunas da matriz bidimensional"
   
   */
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            mat2[3*i+j] = mat[i][j];
        }
    }
    for(i = 0 ; i < 12; i++)
    {
        printf("%d ", mat2[i]);
    }

    return 0;
}
