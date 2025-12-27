
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



bool check(long param_1,int param_2)

{
  return param_2 == *(int *)(param_1 + (long)param_2 * 8);
}


long long main(void)

{
  long lVar1;
  int aiStack_c8 [40];
  int *local_28;
  int *local_20;
  int local_18;
  int local_14;
  
  for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
  }
  if ((-1 < local_14) && (local_14 < 10)) {
    local_20 = aiStack_c8;
    aiStack_c8[(long)local_14 * 2] = local_14;
    local_28 = aiStack_c8 + (long)local_14 * 2;
    for (local_14 = local_20[(long)local_14 * 2] + 10; local_14 < *local_28; local_14 = local_14 + 1
        ) {
    }
    lVar1 = check(aiStack_c8,(long)local_14);
    if (lVar1 == 0) {
      reach_error();
      return 1;
    }
  }
  return 0;
}

