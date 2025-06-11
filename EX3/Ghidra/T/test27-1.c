
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



bool check(long *param_1,int param_2)

{
  return param_2 == *(int *)(**(long **)(*param_1 + (long)param_2 * 8) + 4);
}


long long main(void)

{
  long lVar1;
  int aiStack_a8 [10];
  long *aplStack_80 [10];
  int *local_30;
  long **local_28;
  int *local_20;
  int local_18;
  int local_14;
  
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    aplStack_80[local_18] = (long *)0x0;
  }
  if ((0 < local_14) && (local_14 < 9)) {
    aiStack_a8[local_14] = local_14;
    local_30 = aiStack_a8 + (local_14 + -1);
    aplStack_80[local_14 + 1] = (long *)&local_30;
    local_28 = aplStack_80 + 1;
    local_20 = (int *)(*(aplStack_80 + 1)[local_14] + 4);
    if (0 < aiStack_a8[local_14]) {
      for (local_14 = *(int *)(*aplStack_80[local_14 + 1] + 4) + -10; local_14 < *local_20;
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

