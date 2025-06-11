
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
  int local_20;
  int local_1c;
  int local_18;
  unsigned int local_14;
  
  if (local_1c == (int)(((unsigned int)(local_18 >> 0x1f) >> 0x1b) + local_18) >> 5) {
    for (local_14 = 0;
        ((int)local_14 < (int)(((unsigned int)(local_18 >> 0x1f) >> 0x1d) + local_18) >> 3 &&
        ((int)local_14 < local_20)); local_14 = local_14 + 1) {
      __VERIFIER_assert(~local_14 >> 0x1f);
      __VERIFIER_assert((int)local_14 < local_20);
      __VERIFIER_assert(-4 < (int)local_14);
      __VERIFIER_assert((int)(((unsigned int)((int)local_14 >> 0x1f) >> 0x1e) + local_14) >> 2 < local_1c);
    }
  }
  return 0;
}

