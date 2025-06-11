
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



void __blast_assert(void)

{
  reach_error();
  return;
}


long long main(void)

{
  int local_14;
  
  local_14 = 0;
  while (local_14 < 5) {
    local_14 = local_14 + 1;
    if (local_14 == 3) {
      __blast_assert();
    }
  }
  return 0;
}

