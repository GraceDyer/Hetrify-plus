
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
  unsigned int local_28;
  unsigned int local_24;
  unsigned int local_20;
  unsigned int local_1c;
  unsigned int local_18;
  unsigned int local_14;
  
  if ((((local_24 < 0xb) && (local_28 < 0x10000)) && (local_28 < 0xb)) &&
     (((local_24 != 0 && (local_28 != 0)) && (local_24 < 0x10000)))) {
    local_14 = local_24;
    local_18 = local_28;
    local_1c = local_28;
    local_20 = local_24;
    while (__VERIFIER_assert(local_14 * local_1c + local_18 * local_20 == local_24 * local_28 * 2),
          local_14 != local_18) {
      if (local_18 < local_14) {
        local_14 = local_14 - local_18;
        local_20 = local_20 + local_1c;
      }
      else {
        local_18 = local_18 - local_14;
        local_1c = local_1c + local_20;
      }
    }
    __VERIFIER_assert(local_14 * local_1c + local_18 * local_20 == local_24 * local_28 * 2);
  }
  return 0;
}



