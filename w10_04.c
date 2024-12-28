#include <stdio.h>
#include <math.h>

int main()
{
  int a = 0;
  int b = 1;
  int N, h, j, I;

  for (j = 1; j <= N - 1; j++)
  {
    N = pow(2, j);
    h = (b - a) / N;
    I = (a + j * h) * (a + j * h) * h

    printf("%d, %.15lf");
  }
}