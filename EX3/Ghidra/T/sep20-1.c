
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



long sep(long param_1)

{
  int iVar1;
  int local_1c;
  
  iVar1 = 0;
  for (local_1c = 0; local_1c < 0x14; local_1c = local_1c + 1) {
    if ((*(unsigned int *)(param_1 + (long)local_1c * 4) & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      iVar1 = iVar1 + -1;
    }
  }
  return (long)iVar1;
}


long long main(void)

{
  int uVar1;
  int local_78 [19];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
  }
  local_1c = sep(local_78);
  uVar1 = local_78[0];
  local_20 = local_78[0];
  local_78[0] = local_78[1];
  local_78[1] = uVar1;
  local_24 = sep(local_78);
  local_20 = local_78[0];
  for (local_18 = 0; local_18 < 0x13; local_18 = local_18 + 1) {
    local_78[local_18] = local_78[local_18 + 1];
  }
  local_2c = local_20;
  local_28 = sep(local_78);
  if ((local_1c == local_24) && (local_1c == local_28)) {
    return 1;
  }
  reach_error();
  return 1;
}

