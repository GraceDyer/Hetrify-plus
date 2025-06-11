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
int counter =0 ;
long long main(void)

{
  bool bVar1;
  int iVar2;
  unsigned int local_28;
  unsigned int local_24;
  int local_20;
  unsigned int local_1c;
  unsigned int local_18;
  unsigned int local_14;
  
  if (local_24 != 0) {
    local_14 = local_28;
    local_18 = local_24;
    local_1c = 1;
    local_20 = 0;
    while (iVar2 = counter + 1, bVar1 = counter < 0x14, counter = iVar2, bVar1) {
      __VERIFIER_assert(1);
      __VERIFIER_assert(1);
      __VERIFIER_assert(local_18 == local_24 * local_1c);
      if (local_28 < local_18) break;
      local_18 = local_18 << 1;
      local_1c = local_1c << 1;
    }
LAB_00010258:
    iVar2 = counter + 1;
    bVar1 = counter < 0x14;
    counter = iVar2;
    if (bVar1) {
      __VERIFIER_assert(local_28 == local_14 + local_20 * local_24);
      __VERIFIER_assert(local_18 == local_24 * local_1c);
      if (local_1c == 1) goto LAB_00010284;
      local_18 = local_18 >> 1;
      local_1c = local_1c >> 1;
      if (local_18 <= local_14) {
        local_14 = local_14 - local_18;
        local_20 = local_20 + local_1c;
      }
      goto LAB_00010258;
    }
LAB_00010284:
    __VERIFIER_assert(local_28 == local_14 + local_18 * local_20);
    __VERIFIER_assert(local_24 == local_18);
  }
  return 0;
}

