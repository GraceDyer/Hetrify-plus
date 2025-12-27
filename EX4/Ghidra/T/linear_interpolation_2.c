
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
  int iVar1;
  long lVar2;
  long long uVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((local_18 <= local_14) && ((unsigned int)(local_14 - local_18) < 0x101)) {
    lVar2 = (long)(local_14 - local_18) * (long)local_1c;
    iVar1 = (int)((lVar2 >> 0x3f & 0xffU) + lVar2 >> 8);
    if (local_1c < 0) {
      if ((iVar1 < local_1c) || (0 < iVar1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      __VERIFIER_assert(uVar3);
    }
    else {
      if ((iVar1 < 0) || (local_1c < iVar1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      __VERIFIER_assert(uVar3);
    }
  }
  return 0;
}

