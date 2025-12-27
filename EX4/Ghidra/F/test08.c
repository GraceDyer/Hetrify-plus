
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}

int a, b;
int *p1, *p2;

bool f(void)

{
  bool bVar1;
  
  bVar1 = (*p1 + *p2) - a == 1;
  if (bVar1) {
    p1 = p2;
  }
  return bVar1;
}


long long main(void)

{
  p1 = &a;
  p2 = &b;
  b = 1;
  a = 4;
  a = f();
  if ((a != 0) && (p1 == p2)) {
    reach_error();
    return 1;
  }
  return 0;
}

