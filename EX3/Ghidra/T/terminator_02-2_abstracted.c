
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
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((((-100 < local_14) && (local_14 < 200)) && (100 < local_18)) && (local_18 < 200)) {
    if (100 < local_18 && local_14 < 100) {
      local_18 = local_1c;
      local_14 = local_20;
    }
    if (local_18 < 0x65 || 99 < local_14) {
      if ((local_14 < 100) && (100 < local_18)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      __VERIFIER_assert(uVar1);
    }
  }
  return 0;
}



