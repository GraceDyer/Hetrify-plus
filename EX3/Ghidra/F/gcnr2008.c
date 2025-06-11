
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
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  while ((local_24 != 0 && (local_18 < 10000))) {
    if (local_28 == 0) {
      if (local_2c == 0) {
        if ((local_20 * 10 < local_18) && (local_14 * 100 <= local_1c)) {
          local_18 = -local_18;
        }
      }
      else if (3 < local_14) {
        local_14 = local_14 + 1;
        local_18 = local_18 + 1;
      }
    }
    else {
      local_14 = local_14 + 1;
      local_18 = local_18 + 100;
    }
    local_20 = local_20 + 1;
    local_1c = local_1c + 10;
  }
  if ((local_14 < 4) || (2 < local_18)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  __VERIFIER_assert(uVar1);
  return 0;
}

