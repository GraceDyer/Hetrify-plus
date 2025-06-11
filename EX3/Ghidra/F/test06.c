
#include <assert.h>
#include <stdbool.h>
void reach_error(void)
{
  assert(0);
}



void g(long long *param_1,long long *param_2)

{
  int *puVar1;
  
  puVar1 = (int *)*param_2;
  *param_1 = *param_2;
  *puVar1 = 0;
  return;
}


bool f(int param_1,long long param_2,long long param_3)

{
  if (param_1 == 4) {
    g(param_2,param_3);
  }
  return param_1 == 4;
}


bool main(void)

{
  int iVar1;
  int *local_28;
  int *local_20;
  int local_18;
  int local_14;
  
  local_20 = &local_14;
  local_28 = &local_18;
  local_18 = 1;
  local_14 = 4;
  local_14 = f(4,&local_20,&local_28);
  iVar1 = *local_20;
  if (iVar1 == 0) {
    reach_error();
  }
  return iVar1 == 0;
}

