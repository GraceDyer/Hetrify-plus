
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
  int local_48;
  int local_44;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  if ((((-1 < local_44) && (local_44 < 3)) && (0 < local_48)) &&
     (((-1 < local_48 && (local_48 < 3)) && (0 < local_44)))) {
    local_18 = (long)local_44;
    local_20 = (long)local_48;
    local_28 = 1;
    local_30 = 0;
    local_38 = 0;
    local_40 = 1;
    while( true ) {
      __VERIFIER_assert(local_28 * local_40 - local_38 * local_30 == 1);
      __VERIFIER_assert(local_18 == local_48 * local_38 + local_44 * local_28);
      __VERIFIER_assert(local_20 == local_44 * local_30 + local_48 * local_40);
      if (local_18 == local_20) break;
      if (local_20 < local_18) {
        local_18 = local_18 - local_20;
        local_28 = local_28 - local_30;
        local_38 = local_38 - local_40;
      }
      else {
        local_20 = local_20 - local_18;
        local_30 = local_30 - local_28;
        local_40 = local_40 - local_38;
      }
    }
    __VERIFIER_assert(local_18 == local_20);
    __VERIFIER_assert(local_20 == local_44 * local_28 + local_48 * local_38);
    __VERIFIER_assert(local_30 * local_38 - local_28 * local_40 == -1);
    __VERIFIER_assert(local_20 == local_44 * local_30 + local_48 * local_40);
  }
  return 0;
}

