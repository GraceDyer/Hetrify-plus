#include <stdint.h>
#include <string.h>
#include <assert.h>
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
int assert_ret1 = 1;
uint64_t stack0[6];
uint64_t stack1[4];
uint64_t stack2[2];
extern int32_t start(cpu_t *c);
extern void __VERIFIER_assert(cpu_t *c);
extern void reach_error(cpu_t *c);



/*******************    Function: reach_error   *********************/
void reach_error(cpu_t *c) { 
L_10000: {//addi_reach_error
    c->gp_regs[2] = &stack2[2];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-16LL;
    }
L_10004: {//sd_reach_error
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack2)[8]))=(uint64_t)rs2;
    }
L_10008: {//addi_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)16LL;
    }
L_1000c: {//lui_reach_error
    c->gp_regs[15] = 65536LL;
    }
L_10010: {//sw_reach_error
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&assert_ret1) = (uint32_t)rs2;
    }
L_10014: {//addi_reach_error
    uint64_t rs1 = 0;
    }
L_10018: {//ld_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack2)[8]));
    }
L_1001c: {//addi_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)16LL;
    }
L_10020: {//jalr_reach_error
    uint64_t rs1 = c->gp_regs[1];
    }
}



/*******************    Function: __VERIFIER_assert   *********************/
void __VERIFIER_assert(cpu_t *c) { 
L_10024: {//addi___VERIFIER_assert
    c->gp_regs[2] = &stack1[4];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10028: {//sd___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *( uint64_t*)(&(((uint8_t*)stack1)[24]))=(uint64_t)rs2;
    }
L_1002c: {//sd___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack1)[16]))=(uint64_t)rs2;
    }
L_10030: {//addi___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10034: {//addi___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10038: {//sw___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[12]))=(uint32_t)rs2;
    }
L_1003c: {//lw___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[12]));
    }
L_10040: {//addiw___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10044: {//bne___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10054;
    }
    }
L_10048: {//addi___VERIFIER_assert
    uint64_t rs1 = 0;
    }
L_1004c: {//jal___VERIFIER_assert
    c->gp_regs[1] = 65616LL;
    reach_error(c);
    }
L_10050: {//addi___VERIFIER_assert
    uint64_t rs1 = 0;
    }
L_10054: {//addi___VERIFIER_assert
    uint64_t rs1 = 0;
    }
L_10058: {//ld___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[1] = *(int64_t*)(&(((uint8_t*)stack1)[24]));
    }
L_1005c: {//ld___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack1)[16]));
    }
L_10060: {//addi___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10064: {//jalr___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[1];
    }
}



/*******************    Function: main   *********************/
int32_t start(cpu_t *c) { 
L_10068: {//addi_main
    c->gp_regs[2] = &stack0[6];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_1006c: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *( uint64_t*)(&(((uint8_t*)stack0)[40]))=(uint64_t)rs2;
    }
L_10070: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[32]))=(uint64_t)rs2;
    }
L_10074: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_10078: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[16]))=(uint32_t)rs2;
    }
L_1007c: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[16]));
    }
L_10080: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[20]))=(uint32_t)rs2;
    }
L_10084: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[20]));
    }
L_10088: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_1008c: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10090: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_10094: {//jal_main
    goto L_10164;
    }
L_10098: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[8]));
    }
L_1009c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a0: {//beq_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100c0;
    }
    }
L_100a4: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_100a8: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100ac: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_100b0: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_100b4: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)100LL);
    }
L_100b8: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_100bc: {//jal_main
    goto L_1014c;
    }
L_100c0: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[4]));
    }
L_100c4: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c8: {//beq_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100f8;
    }
    }
L_100cc: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_100d0: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100d4: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_100d8: {//bge_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_1014c;
    }
    }
L_100dc: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_100e0: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100e4: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_100e8: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_100ec: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100f0: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_100f4: {//jal_main
    goto L_1014c;
    }
L_100f8: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[16]));
    }
L_100fc: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10100: {//addi_main
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10104: {//slliw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 << 2);
    }
L_10108: {//addw_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1010c: {//slliw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 << 1);
    }
L_10110: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10114: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10118: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1011c: {//bge_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_1014c;
    }
    }
L_10120: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_10124: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10128: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)100LL;
    }
L_1012c: {//mulw_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 * rs2);
    }
L_10130: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10134: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[20]));
    }
L_10138: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1013c: {//blt_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_1014c;
    }
    }
L_10140: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10144: {//subw_main
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 - rs2);
    }
L_10148: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_1014c: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[16]));
    }
L_10150: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10154: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[16]))=(uint32_t)rs2;
    }
L_10158: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[20]));
    }
L_1015c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)10LL);
    }
L_10160: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[20]))=(uint32_t)rs2;
    }
L_10164: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[12]));
    }
L_10168: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1016c: {//beq_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10184;
    }
    }
L_10170: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10174: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10178: {//lui_main
    c->gp_regs[15] = 8192LL;
    }
L_1017c: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)1807LL;
    }
L_10180: {//bge_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10098;
    }
    }
L_10184: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_10188: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1018c: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_10190: {//bge_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_101ac;
    }
    }
L_10194: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10198: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1019c: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_101a0: {//blt_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_101ac;
    }
    }
L_101a4: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_101a8: {//jal_main
    goto L_101b0;
    }
L_101ac: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_101b0: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_101b4: {//jal_main
    c->gp_regs[1] = 65976LL;
    __VERIFIER_assert(c);
    }
L_101b8: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_101bc: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_101c0: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[1] = *(int64_t*)(&(((uint8_t*)stack0)[40]));
    }
L_101c4: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[32]));
    }
L_101c8: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_101cc: {//jalr_main
    uint64_t rs1 = c->gp_regs[1];
    }
}
int32_t main() {                                     
    cpu_t cpu={0};                                 
    cpu_t *c=&cpu;                                 
    uint64_t tmp_stack00;
    stack0[0] = tmp_stack00;
    uint64_t tmp_stack01;
    stack0[1] = tmp_stack01;
    uint64_t tmp_stack02;
    stack0[2] = tmp_stack02;
    uint64_t tmp_stack03;
    stack0[3] = tmp_stack03;
    uint64_t tmp_stack04;
    stack0[4] = tmp_stack04;
    uint64_t tmp_stack05;
    stack0[5] = tmp_stack05;
    uint64_t tmp_stack10;
    stack1[0] = tmp_stack10;
    uint64_t tmp_stack11;
    stack1[1] = tmp_stack11;
    uint64_t tmp_stack12;
    stack1[2] = tmp_stack12;
    uint64_t tmp_stack13;
    stack1[3] = tmp_stack13;
    uint64_t tmp_stack20;
    stack2[0] = tmp_stack20;
    uint64_t tmp_stack21;
    stack2[1] = tmp_stack21;
    c->gp_regs[2]= 0;
    c->gp_regs[0]= 0;
    /**************Pls input your assume expr, setting the args by the pointers of args (p_arg0 ~ p_arg7)*************/ 



    /****************************************************************************************************************/
    start(c);                     
    uint64_t ret= cpu.gp_regs[a0];                      
    /************************************************ Pls input your assert expr ********************************/
	assert(assert_ret1 == 1);



    /************************************************************************************************************/
    return 0;                               
}                                      
