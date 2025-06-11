
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}

int q;

/* WARNING: Removing unreachable block (ram,0x00010058) */

int main(void)

{
  int auStack_24 [4];
  int *local_20;
  int *local_18;
  
  local_20 = auStack_24;
  q = 0;
  local_18 = local_20;
  reach_error();
  return 1;
}

