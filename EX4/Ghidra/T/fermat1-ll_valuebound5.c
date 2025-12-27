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
  int local_30;
  int local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  if ((((-1 < local_2c) && (local_2c < 6)) && (local_2c % 2 == 1)) &&
     (((-1 < local_30 && (local_30 < 6)) &&
      (((long)local_30 + -1) * ((long)local_30 + -1) < (long)local_2c)))) {
    local_18 = (long)local_30 * 2 + 1;
    local_20 = 1;
    local_28 = (long)local_30 * (long)local_30 - (long)local_2c;
    while (__VERIFIER_assert((local_2c + local_28) * 4 ==
                             (local_18 * local_18 - local_20 * local_20) + local_18 * -2 +
                             local_20 * 2), local_28 != 0) {
      if (local_28 < 1) {
        local_28 = local_28 + local_18;
        local_18 = local_18 + 2;
      }
      else {
        local_28 = local_28 - local_20;
        local_20 = local_20 + 2;
      }
    }
    __VERIFIER_assert((long)local_2c * 4 ==
                      (local_18 * local_18 - local_20 * local_20) + local_18 * -2 + local_20 * 2);
  }
  return 0;
}



