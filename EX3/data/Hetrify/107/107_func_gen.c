#include <stdint.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>
enum gp_reg_type_t {                           
    zero, ra, sp, gp, tp,  t0, t1, t2, s0, s1,             
    a0, a1, a2, a3, a4, a5, a6, a7,                          
    s2, s3, s4, s5, s6, s7, s8, s9, s10, s11,                        
    t3, t4, t5, t6,                             
};                                              
typedef struct {                               
    uint64_t gp_regs[32];                      
    uint64_t pc;                               
} cpu_t;                                       
int result[2] = {0};
extern int* even_odd_palindrome(int);



/*******************    Function: even_odd_palindrome   *********************/
int* even_odd_palindrome(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[80];
    c->gp_regs[sp]=(uint64_t)&stack[80-1];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-64LL;
    }
L_10004: {//sd_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)56LL) = (uint64_t)rs2;
    }
L_10008: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)64LL;
    }
L_1000c: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-52LL) = (uint32_t)rs2;
    }
L_10014: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10018: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_1001c: {//addi_even_odd_palindrome
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10020: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_10024: {//jal_even_odd_palindrome
    goto L_100e0;
    }
L_10028: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_1002c: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_10030: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_10034: {//jal_even_odd_palindrome
    goto L_10084;
    }
L_10038: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_1003c: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10040: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10044: {//slliw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 << 2);
    }
L_10048: {//addw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1004c: {//slliw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 << 1);
    }
L_10050: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10054: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[13] = rs1 + (int64_t)0LL;
    }
L_1005c: {//addi_even_odd_palindrome
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)10LL;
    }
L_10060: {//remw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (rs2 == 0 ? (int64_t)(int32_t)rs1 : (int64_t)(int32_t)((int64_t)(int32_t)rs1 % (int64_t)(int32_t)rs2));
    }
L_10064: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10068: {//addw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1006c: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_10070: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10074: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10078: {//addi_even_odd_palindrome
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)10LL;
    }
L_1007c: {//divw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (rs2 == 0 ? UINT64_MAX : (int32_t)((int64_t)(int32_t)rs1 / (int64_t)(int32_t)rs2));
    }
L_10080: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_10084: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10088: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1008c: {//blt_even_odd_palindrome
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10038;
    }
    }
L_10090: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10094: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10098: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_1009c: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a0: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a4: {//bne_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100d4;
    }
    }
L_100a8: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_100ac: {//andi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 1ULL;
    }
L_100b0: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100b4: {//bne_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100c8;
    }
    }
L_100b8: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100bc: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100c0: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100c4: {//jal_even_odd_palindrome
    goto L_100d4;
    }
L_100c8: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_100cc: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100d0: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_100d4: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_100d8: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100dc: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_100e0: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_100e4: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100e8: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[15] = rd;
    }
L_100ec: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100f0: {//addiw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100f4: {//bge_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10028;
    }
    }
L_100f8: {//lui_even_odd_palindrome
    c->gp_regs[15] = 65536LL;
    }
L_100fc: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_10100: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)((uint64_t)(&result[0])+65840LL-65840LL) = (uint32_t)rs2;
    }
L_10104: {//lui_even_odd_palindrome
    c->gp_regs[15] = 65536LL;
    }
L_10108: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&result[0]) + (int64_t)0LL;
    }
L_1010c: {//lw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_10110: {//sw_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)((uint64_t)(&result[0])+65844LL-65840LL) = (uint32_t)rs2;
    }
L_10114: {//lui_even_odd_palindrome
    c->gp_regs[15] = 65536LL;
    }
L_10118: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&result[0]) + (int64_t)0LL;
    }
L_1011c: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = (uint64_t)(&result[0]) + (int64_t)0LL;
    }
L_10120: {//ld_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)56LL);
    c->gp_regs[8] = rd;
    }
L_10124: {//addi_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)64LL;
    }
L_10128: {//jalr_even_odd_palindrome
    uint64_t rs1 = c->gp_regs[1];
    return (int*)c->gp_regs[a0];
    }
}
