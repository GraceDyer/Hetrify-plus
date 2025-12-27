
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
  unsigned int local_18;
  unsigned int local_14;
  
  local_18 = local_14 + 1;
  for (; local_14 < 0x400; local_14 = local_14 + 1) {
    local_18 = local_18 + 1;
  }
  __VERIFIER_assert(local_14 == local_18);
  return 0;
}

