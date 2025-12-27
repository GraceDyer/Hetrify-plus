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
char str[40] = {0};
extern char* decimal_to_binary(int);



/*******************    Function: decimal_to_binary   *********************/
char* decimal_to_binary(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack0[10];
    c->gp_regs[sp]=(uint64_t)&stack0[10];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_decimal_to_binary
    c->gp_regs[2] = &stack0[10];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-80LL;
    }
L_10004: {//sd_decimal_to_binary
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[72]))=(uint64_t)rs2;
    }
L_10008: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)80LL;
    }
L_1000c: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[12]))=(uint32_t)rs2;
    }
L_10014: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[60]))=(uint32_t)rs2;
    }
L_10018: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[12]));
    }
L_1001c: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10020: {//bne_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1008c;
    }
    }
L_10024: {//lui_decimal_to_binary
    c->gp_regs[15] = 65536LL;
    }
L_10028: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_1002c: {//addi_decimal_to_binary
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)100LL;
    }
L_10030: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)((uint64_t)(&str[0])+66024LL-66024LL) = (uint8_t)rs2;
    }
L_10034: {//lui_decimal_to_binary
    c->gp_regs[15] = 65536LL;
    }
L_10038: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_1003c: {//addi_decimal_to_binary
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)98LL;
    }
L_10040: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)1LL) = (uint8_t)rs2;
    }
L_10044: {//lui_decimal_to_binary
    c->gp_regs[15] = 65536LL;
    }
L_10048: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_1004c: {//addi_decimal_to_binary
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)48LL;
    }
L_10050: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)2LL) = (uint8_t)rs2;
    }
L_10054: {//lui_decimal_to_binary
    c->gp_regs[15] = 65536LL;
    }
L_10058: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_1005c: {//addi_decimal_to_binary
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)100LL;
    }
L_10060: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)3LL) = (uint8_t)rs2;
    }
L_10064: {//lui_decimal_to_binary
    c->gp_regs[15] = 65536LL;
    }
L_10068: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_1006c: {//addi_decimal_to_binary
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)98LL;
    }
L_10070: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)4LL) = (uint8_t)rs2;
    }
L_10074: {//lui_decimal_to_binary
    c->gp_regs[15] = 65536LL;
    }
L_10078: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_1007c: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(rs1 + (int64_t)5LL) = (uint8_t)rs2;
    }
L_10080: {//lui_decimal_to_binary
    c->gp_regs[15] = 65536LL;
    }
L_10084: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_10088: {//jal_decimal_to_binary
    goto L_101d4;
    }
L_1008c: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[12]));
    }
L_10090: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[48]))=(uint32_t)rs2;
    }
L_10094: {//jal_decimal_to_binary
    goto L_100d4;
    }
L_10098: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[48]));
    }
L_1009c: {//andi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100a0: {//andi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 1ULL;
    }
L_100a4: {//andi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_100a8: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[60]));
    }
L_100ac: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[13] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100b0: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[13];
    *( uint32_t*)(&(((uint8_t*)stack0)[60]))=(uint32_t)rs2;
    }
L_100b4: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)48LL);
    }
L_100b8: {//andi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_100bc: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100c0: {//add_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100c4: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)-48LL) = (uint8_t)rs2;
    }
L_100c8: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[48]));
    }
L_100cc: {//srliw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)((uint32_t)rs1 >> 1);
    }
L_100d0: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[48]))=(uint32_t)rs2;
    }
L_100d4: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[48]));
    }
L_100d8: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100dc: {//bne_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10098;
    }
    }
L_100e0: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[52]))=(uint32_t)rs2;
    }
L_100e4: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[52]));
    }
L_100e8: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100ec: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *( uint32_t*)(&(((uint8_t*)stack0)[52]))=(uint32_t)rs2;
    }
L_100f0: {//lui_decimal_to_binary
    c->gp_regs[14] = 65536LL;
    }
L_100f4: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_100f8: {//add_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100fc: {//addi_decimal_to_binary
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)100LL;
    }
L_10100: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_10104: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[52]));
    }
L_10108: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1010c: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *( uint32_t*)(&(((uint8_t*)stack0)[52]))=(uint32_t)rs2;
    }
L_10110: {//lui_decimal_to_binary
    c->gp_regs[14] = 65536LL;
    }
L_10114: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_10118: {//add_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1011c: {//addi_decimal_to_binary
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)98LL;
    }
L_10120: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_10124: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[60]));
    }
L_10128: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_1012c: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[56]))=(uint32_t)rs2;
    }
L_10130: {//jal_decimal_to_binary
    goto L_1016c;
    }
L_10134: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[52]));
    }
L_10138: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1013c: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *( uint32_t*)(&(((uint8_t*)stack0)[52]))=(uint32_t)rs2;
    }
L_10140: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int32_t*)(&(((uint8_t*)stack0)[56]));
    }
L_10144: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 + (int64_t)-16LL;
    }
L_10148: {//add_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[14] = rs1 + rs2;
    }
L_1014c: {//lbu_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[14] = rd;
    }
L_10150: {//lui_decimal_to_binary
    c->gp_regs[13] = 65536LL;
    }
L_10154: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[13] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_10158: {//add_decimal_to_binary
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1015c: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_10160: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[56]));
    }
L_10164: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_10168: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[56]))=(uint32_t)rs2;
    }
L_1016c: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[56]));
    }
L_10170: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10174: {//bge_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10134;
    }
    }
L_10178: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[52]));
    }
L_1017c: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10180: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *( uint32_t*)(&(((uint8_t*)stack0)[52]))=(uint32_t)rs2;
    }
L_10184: {//lui_decimal_to_binary
    c->gp_regs[14] = 65536LL;
    }
L_10188: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_1018c: {//add_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10190: {//addi_decimal_to_binary
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)100LL;
    }
L_10194: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_10198: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[52]));
    }
L_1019c: {//addiw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_101a0: {//sw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *( uint32_t*)(&(((uint8_t*)stack0)[52]))=(uint32_t)rs2;
    }
L_101a4: {//lui_decimal_to_binary
    c->gp_regs[14] = 65536LL;
    }
L_101a8: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_101ac: {//add_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101b0: {//addi_decimal_to_binary
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)98LL;
    }
L_101b4: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_101b8: {//lui_decimal_to_binary
    c->gp_regs[15] = 65536LL;
    }
L_101bc: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_101c0: {//lw_decimal_to_binary
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[52]));
    }
L_101c4: {//add_decimal_to_binary
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101c8: {//sb_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_101cc: {//lui_decimal_to_binary
    c->gp_regs[15] = 65536LL;
    }
L_101d0: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_101d4: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = (uint64_t)(&str[0]) + (int64_t)0LL;
    }
L_101d8: {//ld_decimal_to_binary
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[72]));
    }
L_101dc: {//addi_decimal_to_binary
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)80LL;
    }
L_101e0: {//jalr_decimal_to_binary
    uint64_t rs1 = c->gp_regs[1];
    return (char*)c->gp_regs[a0];
    }
}
