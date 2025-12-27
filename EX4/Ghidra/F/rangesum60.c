
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



void init_nondet(void)

{
  int local_14;
  
  for (local_14 = 0; local_14 < 0x3c; local_14 = local_14 + 1) {
  }
  return;
}


long rangesum(long param_1)

{
  long lVar1;
  int local_24;
  long local_20;
  int local_14;
  
  local_20 = 0;
  local_24 = 0;
  for (local_14 = 0; local_14 < 0x3c; local_14 = local_14 + 1) {
    if (0x1e < local_14) {
      local_20 = local_20 + *(int *)(param_1 + (long)local_14 * 4);
      local_24 = local_24 + 1;
    }
  }
  if (local_24 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (long)(int)(local_20 / (long)local_24);
  }
  return lVar1;
}


long long main(void)

{
  int uVar1;
  int local_118 [59];
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  init_nondet(local_118);
  local_18 = rangesum(local_118);
  uVar1 = local_118[0];
  local_1c = local_118[0];
  local_118[0] = local_118[1];
  local_118[1] = uVar1;
  local_20 = rangesum(local_118);
  local_1c = local_118[0];
  for (local_14 = 0; local_14 < 0x3b; local_14 = local_14 + 1) {
    local_118[local_14] = local_118[local_14 + 1];
  }
  local_2c = local_1c;
  local_24 = rangesum(local_118);
  if ((local_18 == local_20) && (local_18 == local_24)) {
    return 1;
  }
  reach_error();
  return 1;
}

