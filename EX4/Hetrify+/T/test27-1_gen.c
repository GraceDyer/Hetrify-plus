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
uint64_t stack0[22];
uint64_t stack1[4];
uint64_t stack2[2];
extern int32_t start(cpu_t *c);
extern void check(cpu_t *c);
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



/*******************    Function: check   *********************/
void check(cpu_t *c) { 
L_10024: {//addi_check
    c->gp_regs[2] = &stack1[4];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10028: {//sd_check
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack1)[24]))=(uint64_t)rs2;
    }
L_1002c: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10030: {//sd_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack1)[8]))=(uint64_t)rs2;
    }
L_10034: {//addi_check
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10038: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[4]))=(uint32_t)rs2;
    }
L_1003c: {//ld_check
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack1)[8]));
    }
L_10040: {//ld_check
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10044: {//lw_check
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[4]));
    }
L_10048: {//slli_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 3;
    }
L_1004c: {//add_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10050: {//ld_check
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10054: {//ld_check
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)4LL;
    }
L_1005c: {//lw_check
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10060: {//lw_check
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[4]));
    }
L_10064: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10068: {//sub_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 - rs2;
    }
L_1006c: {//sltiu_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_10070: {//andi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10074: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10078: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1007c: {//ld_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack1)[24]));
    }
L_10080: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10084: {//jalr_check
    uint64_t rs1 = c->gp_regs[1];
    }
}



/*******************    Function: main   *********************/
int32_t start(cpu_t *c) { 
L_10088: {//addi_main
    c->gp_regs[2] = &stack0[22];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-176LL;
    }
L_1008c: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *( uint64_t*)(&(((uint8_t*)stack0)[168]))=(uint64_t)rs2;
    }
L_10090: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[160]))=(uint64_t)rs2;
    }
L_10094: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)176LL;
    }
L_10098: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[152]))=(uint32_t)rs2;
    }
L_1009c: {//jal_main
    goto L_100c0;
    }
L_100a0: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[152]));
    }
L_100a4: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 3;
    }
L_100a8: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100ac: {//add_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100b0: {//sd_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint64_t *)(rs1 + (int64_t)-112LL) = (uint64_t)rs2;
    }
L_100b4: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[152]));
    }
L_100b8: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100bc: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[152]))=(uint32_t)rs2;
    }
L_100c0: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[152]));
    }
L_100c4: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c8: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)9LL;
    }
L_100cc: {//bge_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_100a0;
    }
    }
L_100d0: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_100d4: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100d8: {//bge_main
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_101f4;
    }
    }
L_100dc: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_100e0: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100e4: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)8LL;
    }
L_100e8: {//blt_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_101f4;
    }
    }
L_100ec: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_100f0: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_100f4: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100f8: {//add_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100fc: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_10100: {//sw_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)-152LL) = (uint32_t)rs2;
    }
L_10104: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_10108: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_1010c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10110: {//addi_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = rs1 + (int64_t)-168LL;
    }
L_10114: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10118: {//add_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1011c: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack0)[128]))=(uint64_t)rs2;
    }
L_10120: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_10124: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10128: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1012c: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 3;
    }
L_10130: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10134: {//add_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10138: {//addi_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = rs1 + (int64_t)-48LL;
    }
L_1013c: {//sd_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(rs1 + (int64_t)-112LL) = (uint64_t)rs2;
    }
L_10140: {//addi_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + (int64_t)-128LL;
    }
L_10144: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)8LL;
    }
L_10148: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack0)[136]))=(uint64_t)rs2;
    }
L_1014c: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[136]));
    }
L_10150: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_10154: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 3;
    }
L_10158: {//add_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1015c: {//ld_main
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10160: {//ld_main
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10164: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)4LL;
    }
L_10168: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack0)[144]))=(uint64_t)rs2;
    }
L_1016c: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_10170: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10174: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10178: {//add_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1017c: {//lw_main
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-152LL);
    c->gp_regs[15] = rd;
    }
L_10180: {//bge_main
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_101f4;
    }
    }
L_10184: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_10188: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1018c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10190: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 3;
    }
L_10194: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10198: {//add_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1019c: {//ld_main
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-112LL);
    c->gp_regs[15] = rd;
    }
L_101a0: {//ld_main
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_101a4: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)4LL;
    }
L_101a8: {//lw_main
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_101ac: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-10LL);
    }
L_101b0: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[156]))=(uint32_t)rs2;
    }
L_101b4: {//jal_main
    goto L_101c4;
    }
L_101b8: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_101bc: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_101c0: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[156]))=(uint32_t)rs2;
    }
L_101c4: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[144]));
    }
L_101c8: {//lw_main
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_101cc: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_101d0: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101d4: {//blt_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_101b8;
    }
    }
L_101d8: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int32_t*)(&(((uint8_t*)stack0)[156]));
    }
L_101dc: {//addi_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + (int64_t)-40LL;
    }
L_101e0: {//addi_main
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[11] = rs1 + (int64_t)0LL;
    }
L_101e4: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_101e8: {//jal_main
    c->gp_regs[1] = 66028LL;
    check(c);
    }
L_101ec: {//addi_main
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_101f0: {//beq_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_101fc;
    }
    }
L_101f4: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_101f8: {//jal_main
    goto L_10208;
    }
L_101fc: {//addi_main
    uint64_t rs1 = 0;
    }
L_10200: {//jal_main
    c->gp_regs[1] = 66052LL;
    reach_error(c);
    }
L_10204: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10208: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1020c: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[1] = *(int64_t*)(&(((uint8_t*)stack0)[168]));
    }
L_10210: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[160]));
    }
L_10214: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)176LL;
    }
L_10218: {//jalr_main
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
    uint64_t tmp_stack06;
    stack0[6] = tmp_stack06;
    uint64_t tmp_stack07;
    stack0[7] = tmp_stack07;
    uint64_t tmp_stack08;
    stack0[8] = tmp_stack08;
    uint64_t tmp_stack09;
    stack0[9] = tmp_stack09;
    uint64_t tmp_stack010;
    stack0[10] = tmp_stack010;
    uint64_t tmp_stack011;
    stack0[11] = tmp_stack011;
    uint64_t tmp_stack012;
    stack0[12] = tmp_stack012;
    uint64_t tmp_stack013;
    stack0[13] = tmp_stack013;
    uint64_t tmp_stack014;
    stack0[14] = tmp_stack014;
    uint64_t tmp_stack015;
    stack0[15] = tmp_stack015;
    uint64_t tmp_stack016;
    stack0[16] = tmp_stack016;
    uint64_t tmp_stack017;
    stack0[17] = tmp_stack017;
    uint64_t tmp_stack018;
    stack0[18] = tmp_stack018;
    uint64_t tmp_stack019;
    stack0[19] = tmp_stack019;
    uint64_t tmp_stack020;
    stack0[20] = tmp_stack020;
    uint64_t tmp_stack021;
    stack0[21] = tmp_stack021;
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
