#include <stdio.h>

#define NUM_ELE 50

/* y = x^2 -2 (y = 0) の x が √2 で考える */
double center(long double, long double);

int main() {
  int i;
  long double a = 1;
  long double b = 2;
  long double c;
  long double y;

  for (i = 1; i < NUM_ELE; i++) {
    printf("i=%d, a=%.15Le, b=%.15Le \n", i, a, b);

    c = center(a,b);  //aとbの中間c

    y = c * c - 2;  //中間cをyの式に代入

    if (y < 0) {
      a = c;
    }

    if (y > 0) {
      b = c;
    }

  }
  c = center(a,b);
  printf("x=%.15Le @i=50 \n", c);

  return 0;
}

double center(long double a, long double b) {
  return (a + b) / 2;
}


