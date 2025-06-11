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
  unsigned int local_38;
  unsigned int local_34;
  long local_30;
  long local_28;
  unsigned long local_20;
  unsigned long local_18;
  
  if (((local_34 < 0x15) && (local_38 != 0)) && (local_38 < 0x15)) {
    local_18 = (unsigned long)local_34;
    local_20 = (unsigned long)local_38;
    local_28 = 1;
    local_30 = 0;
    while( true ) {
      __VERIFIER_assert(1);
      __VERIFIER_assert(1);
      __VERIFIER_assert(local_20 == (unsigned long)local_38 * local_28);
      if ((long)local_18 < (long)local_20) break;
      local_20 = local_20 << 1;
      local_28 = local_28 << 1;
    }
    while( true ) {
      __VERIFIER_assert((unsigned long)local_34 == (unsigned long)local_38 * local_30 + local_18);
      __VERIFIER_assert(local_20 == (unsigned long)local_38 * local_28);
      if (local_28 == 1) break;
      local_20 = (long)local_20 / 2;
      local_28 = local_28 / 2;
      if ((long)local_20 <= (long)local_18) {
        local_18 = local_18 - local_20;
        local_30 = local_30 + local_28;
      }
    }
    __VERIFIER_assert((unsigned long)local_34 == local_20 * local_30 + local_18);
    __VERIFIER_assert(local_20 == local_38);
  }
  return 0;
}

