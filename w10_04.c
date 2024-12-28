/*∫0→1 x^2dxを計算する*/
#include <stdio.h>
#include <math.h>

int main()
{
  int i, j;
  int N;
  int a = 0;
  int b = 1;
  double ans, h;

  printf("N, integral\n");

  for (i = 1; i <= 20; i++)
  {
    N = pow(2, i);
    h = (double)(b - a) / N;
    ans = 0.0;
    for (j = 0; j <= N - 1; j++)
    {
      ans += (a + j * h) * (a + j * h) * h;
    }
    printf("%d, %.15lf\n", N, ans);
  }
}
