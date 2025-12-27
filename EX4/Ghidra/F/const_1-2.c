
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
  int uVar1;
  unsigned int local_18;
  
  uVar1 = 1;
  for (local_18 = 0; local_18 < 0x400; local_18 = local_18 + 1) {
    uVar1 = 0;
  }
  __VERIFIER_assert(uVar1);
  return 0;
}

