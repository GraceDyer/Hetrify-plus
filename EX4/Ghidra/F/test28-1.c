
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



long long main(void)

{
  long long uVar1;
  int uStack_30;
  int local_2c;
  int local_28 [2];
  int *local_20;
  int local_14;
  
  if (local_14 == 0) {
    local_20 = &uStack_30;
  }
  else {
    local_20 = local_28;
  }
  if (local_20 == &uStack_30) {
    *local_20 = 0;
  }
  else {
    local_20[1] = 0;
  }
  if ((local_20 == &uStack_30) && (local_2c != 0)) {
    reach_error();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

