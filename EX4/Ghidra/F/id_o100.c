
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


long id(int param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = id((long)(param_1 + -1));
    lVar2 = (long)(iVar1 + 1);
  }
  return lVar2;
}


long long main(void)

{
  int iVar1;
  int local_14;
  
  iVar1 = id((long)local_14);
  if (iVar1 == 100) {
    reach_error();
  }
  return 0;
}

