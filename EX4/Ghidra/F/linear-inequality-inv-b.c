
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



long long main(void)

{
  long long uVar1;
  unsigned char local_1a;
  unsigned char local_19;
  unsigned int local_18;
  unsigned char local_11;
  
  if (local_19 == 0) {
    uVar1 = 0;
  }
  else {
    local_11 = 0;
    for (local_18 = 0; local_18 < local_19; local_18 = local_18 + 1) {
      local_11 = local_11 + local_1a;
    }
    if (local_11 < local_1a) {
      reach_error();
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

