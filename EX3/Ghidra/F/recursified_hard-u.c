
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


void func_to_recursive_line_31_to_38_0
               (int *param_1,unsigned int *param_2,int *param_3,int *param_4,unsigned int *param_5,unsigned int *param_6)

{
  __VERIFIER_assert(*param_3 == 0);
  __VERIFIER_assert(*param_5 == *param_6);
  __VERIFIER_assert(*param_2 == *param_4 * *param_1);
  if (*param_2 <= *param_5) {
    *param_2 = *param_2 << 1;
    *param_1 = *param_1 << 1;
    func_to_recursive_line_31_to_38_0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


void func_to_recursive_line_41_to_51_0
               (unsigned int *param_1,unsigned int *param_2,int *param_3,int *param_4,unsigned int *param_5,int *param_6)

{
  __VERIFIER_assert(*param_6 == *param_3 * *param_4 + *param_5);
  __VERIFIER_assert(*param_2 == *param_4 * *param_1);
  if (*param_1 != 1) {
    *param_2 = *param_2 >> 1;
    *param_1 = *param_1 >> 1;
    if (*param_2 <= *param_5) {
      *param_5 = *param_5 - *param_2;
      *param_3 = *param_3 + *param_1;
    }
    func_to_recursive_line_41_to_51_0(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


long long main(void)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (local_18 != 0) {
    local_1c = local_14;
    local_20 = local_18;
    local_24 = 1;
    local_28 = 0;
    func_to_recursive_line_31_to_38_0(&local_24,&local_20,&local_28,&local_18,&local_1c,&local_14);
    func_to_recursive_line_41_to_51_0(&local_24,&local_20,&local_28,&local_18,&local_1c,&local_14);
    __VERIFIER_assert(local_20 * local_28 + local_1c == local_14);
    __VERIFIER_assert(local_18 == local_20);
  }
  return 0;
}

