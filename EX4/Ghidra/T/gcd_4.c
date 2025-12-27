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




long gcd_test(long param_1,long param_2)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_18 = param_1;
  if (param_1 < 0) {
    local_18 = -param_1;
  }
  local_20 = param_2;
  if (param_2 < 0) {
    local_20 = -param_2;
  }
  lVar1 = local_20;
  if (local_18 != 0) {
    while (lVar1 = local_18, local_20 != 0) {
      if (local_20 < local_18) {
        local_18 = local_18 - local_20;
      }
      else {
        local_20 = local_20 - local_18;
      }
    }
  }
  return lVar1;
}

long long main(void)

{
  long lVar1;
  
  lVar1 = gcd_test(0x3f,0x12);
  __VERIFIER_assert(0x3f % lVar1 == 0);
  __VERIFIER_assert(0x12 % lVar1 == 0);
  __VERIFIER_assert(lVar1 == 9);
  return 0;
}


