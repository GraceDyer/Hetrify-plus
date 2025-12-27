
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
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((-1 < local_20) && (local_24 != 0)) {
    local_14 = 0;
    local_18 = 0;
    local_1c = local_20;
    while ((iVar2 = counter + 1, bVar1 = counter < 10, counter = iVar2, bVar1 &&
           (__VERIFIER_assert(local_20 == local_1c + local_18 + local_14 * local_24), local_1c != 0)
           )) {
      if (local_24 == local_18 + 1) {
        local_14 = local_14 + 1;
        local_18 = 0;
        local_1c = local_1c + -1;
      }
      else {
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
      }
    }
    __VERIFIER_assert(local_20 == local_18 + local_14 * local_24);
  }
  return 0;
}

