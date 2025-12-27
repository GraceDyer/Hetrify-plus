
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
  long lVar1;
  int local_30;
  int local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  if ((((-1 < local_2c) && (local_2c < 0xb)) && (-1 < local_30)) && (local_30 < 0xb)) {
    local_28 = (long)local_30 * 2 - (long)local_2c;
    local_20 = 0;
    local_18 = 0;
    while( true ) {
      __VERIFIER_assert(local_28 ==
                        ((local_18 * local_30 - local_20 * local_2c) * 2 - (long)local_2c) +
                        (long)local_30 * 2);
      if (local_2c < local_18) break;
      if (local_28 < 0) {
        lVar1 = (long)local_30;
      }
      else {
        lVar1 = (long)local_30 - (long)local_2c;
        local_20 = local_20 + 1;
      }
      local_28 = local_28 + lVar1 * 2;
      local_18 = local_18 + 1;
    }
    __VERIFIER_assert(((((local_18 * local_30 - local_18 * local_20) * 2 - (long)local_2c) +
                       (long)local_30 * 2) - local_28) + local_20 * 2 == 0);
  }
  return 0;
}

