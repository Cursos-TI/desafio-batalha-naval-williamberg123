#include <stdio.h>

int main()
{
  int * batalhaNaval[10][10] = {
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

  batalhaNaval[2][2] = 3;
  batalhaNaval[3][2] = 3;
  batalhaNaval[4][2] = 3;

  batalhaNaval[5][5] = 3;
  batalhaNaval[5][6] = 3;
  batalhaNaval[5][7] = 3;

  for (int i = 0; i <= 9; i++)
  {
    for (int j = 0; j <= 9; j++)
    {
      printf("%d ", batalhaNaval[i][j]);
    }
    printf("\n");
  }
}