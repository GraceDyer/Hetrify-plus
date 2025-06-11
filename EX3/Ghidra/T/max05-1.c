
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



long max(long param_1)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  iVar2 = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    iVar1 = *(int *)(param_1 + (long)local_14 * 4);
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
  }
  return (long)iVar2;
}


long long main(void)

{
  int uVar1;
  int local_40 [6];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
  }
  local_1c = max(local_40);
  uVar1 = local_40[0];
  local_20 = local_40[0];
  local_40[0] = local_40[1];
  local_40[1] = uVar1;
  local_24 = max(local_40);
  local_20 = local_40[0];
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    local_40[local_18] = local_40[local_18 + 1];
  }
  local_40[4] = local_20;
  local_28 = max(local_40);
  if ((local_1c == local_24) && (local_1c == local_28)) {
    return 1;
  }
  reach_error();
  return 1;
}

