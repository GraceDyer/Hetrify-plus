
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}

int counter =0 ;

void __VERIFIER_assert(int param_1)

{
  if (param_1 == 0) {
    reach_error();
  }
  return;
}


long long main(void)

{
  bool bVar1;
  int iVar2;
  unsigned int local_24;
  unsigned int local_20;
  unsigned int local_1c;
  unsigned int local_18;
  int local_14;
  
  if ((local_20 < 0x7fffffff) && (local_20 != 0)) {
    local_14 = 0;
    local_18 = local_24;
    for (local_1c = local_20;
        (iVar2 = counter + 1, bVar1 = counter < 100, counter = iVar2, bVar1 &&
        (local_1c <= local_24)); local_1c = local_1c << 1) {
    }
    while ((iVar2 = counter + 1, bVar1 = counter < 100, counter = iVar2, bVar1 &&
           (__VERIFIER_assert(local_24 == local_18 + local_14 * local_1c), local_1c != local_20))) {
      local_14 = local_14 * 2;
      local_1c = local_1c >> 1;
      if (local_1c <= local_18) {
        local_14 = local_14 + 1;
        local_18 = local_18 - local_1c;
      }
    }
    __VERIFIER_assert(local_24 == local_18 + local_14 * local_1c);
  }
  return 0;
}

