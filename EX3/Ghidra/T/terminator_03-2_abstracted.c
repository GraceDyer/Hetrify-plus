
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
  long long uVar1;
  int local_1c;
  int local_18;
  int local_14;
  
  if (local_18 < 0xf4241) {
    if (0 < local_18) {
      if (local_14 < 100) {
        local_14 = local_1c;
      }
      if (local_14 < 100) {
        return 0;
      }
    }
    if ((local_18 < 1) || ((0 < local_18 && (99 < local_14)))) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    __VERIFIER_assert(uVar1);
  }
  return 0;
}

