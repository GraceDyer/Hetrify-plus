
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



long hanoi(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 1) {
    lVar2 = 1;
  }
  else {
    iVar1 = hanoi((long)(param_1 + -1));
    lVar2 = (long)(iVar1 * 2 + 1);
  }
  return lVar2;
}


long long main(void)

{
  int iVar1;
  int local_14;
  
  if ((0 < local_14) &&
     ((iVar1 = hanoi((long)local_14), iVar1 == -1 || (iVar1 + 1 != 1 << ((long)local_14 & 0x1fU)))))
  {
    reach_error();
  }
  return 0;
}

