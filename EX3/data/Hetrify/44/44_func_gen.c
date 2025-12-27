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
char result[1024] = "";
extern char* change_base(int, int);



/*******************    Function: change_base   *********************/
char* change_base(int arg0, int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[368];
    c->gp_regs[sp]=(uint64_t)&stack[368-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10000: {//addi_change_base
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-352LL;
    }
L_10004: {//sd_change_base
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)344LL) = (uint64_t)rs2;
    }
L_10008: {//addi_change_base
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)352LL;
    }
L_1000c: {//addi_change_base
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//addi_change_base
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10014: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-340LL) = (uint32_t)rs2;
    }
L_10018: {//addi_change_base
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1001c: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-344LL) = (uint32_t)rs2;
    }
L_10020: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10024: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10028: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-340LL);
    c->gp_regs[15] = rd;
    }
L_1002c: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10030: {//blt_change_base
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10090;
    }
    }
L_10034: {//lui_change_base
    c->gp_regs[15] = 65536LL;
    }
L_10038: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&result[0]) + (int64_t)0LL;
    }
L_1003c: {//sb_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)((uint64_t)(&result[0])+66104LL-66104LL) = (uint8_t)rs2;
    }
L_10040: {//lui_change_base
    c->gp_regs[15] = 65536LL;
    }
L_10044: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&result[0]) + (int64_t)0LL;
    }
L_10048: {//jal_change_base
    goto L_10228;
    }
L_1004c: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10050: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10054: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10058: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-340LL);
    c->gp_regs[14] = rd;
    }
L_1005c: {//addi_change_base
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[13] = rs1 + (int64_t)0LL;
    }
L_10060: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-344LL);
    c->gp_regs[14] = rd;
    }
L_10064: {//remw_change_base
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[14] = (rs2 == 0 ? (int64_t)(int32_t)rs1 : (int64_t)(int32_t)((int64_t)(int32_t)rs1 % (int64_t)(int32_t)rs2));
    }
L_10068: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1006c: {//slli_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10070: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10074: {//add_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10078: {//sw_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)-288LL) = (uint32_t)rs2;
    }
L_1007c: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-340LL);
    c->gp_regs[15] = rd;
    }
L_10080: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10084: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-344LL);
    c->gp_regs[15] = rd;
    }
L_10088: {//divw_change_base
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (rs2 == 0 ? UINT64_MAX : (int32_t)((int64_t)(int32_t)rs1 / (int64_t)(int32_t)rs2));
    }
L_1008c: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-340LL) = (uint32_t)rs2;
    }
L_10090: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-340LL);
    c->gp_regs[15] = rd;
    }
L_10094: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10098: {//blt_change_base
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_1004c;
    }
    }
L_1009c: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100a0: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_100a4: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_100a8: {//jal_change_base
    goto L_10200;
    }
L_100ac: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_100b0: {//slli_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_100b4: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100b8: {//add_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100bc: {//lw_change_base
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-288LL);
    c->gp_regs[15] = rd;
    }
L_100c0: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_100c4: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_100c8: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-40LL) = (uint32_t)rs2;
    }
L_100cc: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_100d0: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100d4: {//bne_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10144;
    }
    }
L_100d8: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_100dc: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100e0: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_100e4: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100e8: {//add_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100ec: {//addi_change_base
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)48LL;
    }
L_100f0: {//sb_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)-304LL) = (uint8_t)rs2;
    }
L_100f4: {//jal_change_base
    goto L_10194;
    }
L_100f8: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_100fc: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10100: {//addi_change_base
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)10LL;
    }
L_10104: {//remw_change_base
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (rs2 == 0 ? (int64_t)(int32_t)rs1 : (int64_t)(int32_t)((int64_t)(int32_t)rs1 % (int64_t)(int32_t)rs2));
    }
L_10108: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1010c: {//andi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_10110: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10114: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[13] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10118: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[13];
    *(uint32_t *)(rs1 + (int64_t)-40LL) = (uint32_t)rs2;
    }
L_1011c: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)48LL);
    }
L_10120: {//andi_change_base
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_10124: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10128: {//add_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1012c: {//sb_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)-320LL) = (uint8_t)rs2;
    }
L_10130: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10134: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10138: {//addi_change_base
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)10LL;
    }
L_1013c: {//divw_change_base
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (rs2 == 0 ? UINT64_MAX : (int32_t)((int64_t)(int32_t)rs1 / (int64_t)(int32_t)rs2));
    }
L_10140: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_10144: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10148: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1014c: {//blt_change_base
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_100f8;
    }
    }
L_10150: {//jal_change_base
    goto L_10188;
    }
L_10154: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10158: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_1015c: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-40LL) = (uint32_t)rs2;
    }
L_10160: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10164: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10168: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_1016c: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10170: {//addi_change_base
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 + (int64_t)-16LL;
    }
L_10174: {//add_change_base
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[14] = rs1 + rs2;
    }
L_10178: {//lbu_change_base
    uint64_t rs1 = c->gp_regs[14];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-320LL);
    c->gp_regs[14] = rd;
    }
L_1017c: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10180: {//add_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10184: {//sb_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)-304LL) = (uint8_t)rs2;
    }
L_10188: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_1018c: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10190: {//blt_change_base
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10154;
    }
    }
L_10194: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10198: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1019c: {//add_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101a0: {//sb_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(rs1 + (int64_t)-304LL) = (uint8_t)rs2;
    }
L_101a4: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-44LL) = (uint32_t)rs2;
    }
L_101a8: {//jal_change_base
    goto L_101e0;
    }
L_101ac: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[14] = rd;
    }
L_101b0: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_101b4: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-44LL) = (uint32_t)rs2;
    }
L_101b8: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_101bc: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[13] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_101c0: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[13];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_101c4: {//addi_change_base
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 + (int64_t)-16LL;
    }
L_101c8: {//add_change_base
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[14] = rs1 + rs2;
    }
L_101cc: {//lbu_change_base
    uint64_t rs1 = c->gp_regs[14];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-304LL);
    c->gp_regs[14] = rd;
    }
L_101d0: {//lui_change_base
    c->gp_regs[13] = 65536LL;
    }
L_101d4: {//addi_change_base
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[13] = (uint64_t)(&result[0]) + (int64_t)0LL;
    }
L_101d8: {//add_change_base
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101dc: {//sb_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_101e0: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_101e4: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_101e8: {//add_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101ec: {//lbu_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-304LL);
    c->gp_regs[15] = rd;
    }
L_101f0: {//bne_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_101ac;
    }
    }
L_101f4: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_101f8: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_101fc: {//sw_change_base
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_10200: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_10204: {//addiw_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10208: {//bge_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_100ac;
    }
    }
L_1020c: {//lui_change_base
    c->gp_regs[15] = 65536LL;
    }
L_10210: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (uint64_t)(&result[0]) + (int64_t)0LL;
    }
L_10214: {//lw_change_base
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10218: {//add_change_base
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1021c: {//sb_change_base
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_10220: {//lui_change_base
    c->gp_regs[15] = 65536LL;
    }
L_10224: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&result[0]) + (int64_t)0LL;
    }
L_10228: {//addi_change_base
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = (uint64_t)(&result[0]) + (int64_t)0LL;
    }
L_1022c: {//ld_change_base
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)344LL);
    c->gp_regs[8] = rd;
    }
L_10230: {//addi_change_base
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)352LL;
    }
L_10234: {//jalr_change_base
    uint64_t rs1 = c->gp_regs[1];
    return (char*)c->gp_regs[a0];
    }
}
