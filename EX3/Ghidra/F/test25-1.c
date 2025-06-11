
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



bool check(long *param_1,int param_2)

{
  return param_2 == *(int *)(*param_1 + 0xc);
}


long long main(void)

{
  long lVar1;
  int auStack_78 [4];
  int aiStack_74 [19];
  int *local_28;
  int *local_20;
  int local_14;
  
  if ((-1 < local_14) && (local_14 < 9)) {
    lVar1 = (long)local_14;
    local_28 = auStack_78 + lVar1 * 8;
    local_20 = aiStack_74 + lVar1 * 2;
    if (0 < aiStack_74[lVar1 * 2]) {
      for (local_14 = aiStack_74[(long)local_14 * 2] + -10; local_14 < aiStack_74[lVar1 * 2];
          local_14 = local_14 + 1) {
      }
      lVar1 = check(&local_28,(long)local_14);
      if (lVar1 == 0) {
        reach_error();
        return 1;
      }
    }
  }
  return 0;
}

