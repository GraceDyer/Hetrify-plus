
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



void __VERIFIER_assert(int param_1)

{
  if (param_1 == 0) {
    reach_error();
  }
  return;
}

long long main(void)

{
  unsigned int local_14;
  
  for (; local_14 < 0xfffffff; local_14 = local_14 + 1) {
  }
  __VERIFIER_assert(0xfffffff < local_14);
  return 0;
}

