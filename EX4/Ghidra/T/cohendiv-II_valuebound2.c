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

int counter =0;
long long main(void)

{
  bool bVar1;
  int iVar2;
  int local_38;
  int local_34;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  if (0 < local_34) {
    local_18 = 0;
    local_20 = (long)local_38;
    local_28 = 0;
    local_30 = 0;
    while (iVar2 = counter + 1, bVar1 = counter < 2, counter = iVar2, bVar1) {
      __VERIFIER_assert(local_30 == local_34 * local_28);
      __VERIFIER_assert((long)local_38 == local_34 * local_18 + local_20);
      if (local_20 < local_34) break;
      local_28 = 1;
      local_30 = (long)local_34;
      while (iVar2 = counter + 1, bVar1 = counter < 2, counter = iVar2, bVar1) {
        __VERIFIER_assert(local_30 == local_34 * local_28);
        __VERIFIER_assert((long)local_38 == local_34 * local_18 + local_20);
        __VERIFIER_assert(~(unsigned int)((unsigned long)local_20 >> 0x20) >> 0x1f);
        if (local_20 < local_30 << 1) break;
        __VERIFIER_assert((local_34 << 1) * local_28 <= local_20);
        local_28 = local_28 << 1;
        local_30 = local_30 << 1;
      }
      local_20 = local_20 - local_30;
      local_18 = local_18 + local_28;
    }
    __VERIFIER_assert((long)local_38 == local_34 * local_18 + local_20);
  }
  return 0;
}
