#include "Random.h"

unsigned int
Random(unsigned int a, unsigned int b)
{
  return a + rand() % (M - m);
}

unsigned int
Random(unsigned int num)
{
  return Random(0, num);
}

// return a percentage with 4 precision digits
double
RandomPercentage(void)
{
  return (double)Random(10000)/10000;
}
