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
extern int choose_num(int, int);



/*******************    Function: choose_num   *********************/
int choose_num(int arg0, int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack0[4];
    c->gp_regs[sp]=(uint64_t)&stack0[4];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10000: {//addi_choose_num
    c->gp_regs[2] = &stack0[4];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10004: {//sd_choose_num
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[24]))=(uint64_t)rs2;
    }
L_10008: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_1000c: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10014: {//sw_choose_num
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[12]))=(uint32_t)rs2;
    }
L_10018: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1001c: {//sw_choose_num
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[8]))=(uint32_t)rs2;
    }
L_10020: {//lw_choose_num
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10024: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10028: {//lw_choose_num
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[12]));
    }
L_1002c: {//addiw_choose_num
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10030: {//addiw_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10034: {//bge_choose_num
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10040;
    }
    }
L_10038: {//addi_choose_num
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_1003c: {//jal_choose_num
    goto L_100cc;
    }
L_10040: {//lw_choose_num
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10044: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10048: {//lw_choose_num
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[12]));
    }
L_1004c: {//addiw_choose_num
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10050: {//addiw_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10054: {//bne_choose_num
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1008c;
    }
    }
L_10058: {//lw_choose_num
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[8]));
    }
L_1005c: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10060: {//sraiw_choose_num
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = (int64_t)((int32_t)rs1 >> 31);
    }
L_10064: {//srliw_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)((uint32_t)rs1 >> 31);
    }
L_10068: {//addw_choose_num
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1006c: {//andi_choose_num
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 & 1ULL;
    }
L_10070: {//subw_choose_num
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 - rs2);
    }
L_10074: {//addiw_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10078: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1007c: {//addi_choose_num
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10080: {//bne_choose_num
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1008c;
    }
    }
L_10084: {//addi_choose_num
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_10088: {//jal_choose_num
    goto L_100cc;
    }
L_1008c: {//lw_choose_num
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10090: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10094: {//sraiw_choose_num
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = (int64_t)((int32_t)rs1 >> 31);
    }
L_10098: {//srliw_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)((uint32_t)rs1 >> 31);
    }
L_1009c: {//addw_choose_num
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100a0: {//andi_choose_num
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 & 1ULL;
    }
L_100a4: {//subw_choose_num
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 - rs2);
    }
L_100a8: {//addiw_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100ac: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100b0: {//addi_choose_num
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100b4: {//bne_choose_num
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100c8;
    }
    }
L_100b8: {//lw_choose_num
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[8]));
    }
L_100bc: {//addiw_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_100c0: {//addiw_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c4: {//jal_choose_num
    goto L_100cc;
    }
L_100c8: {//lw_choose_num
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[8]));
    }
L_100cc: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100d0: {//ld_choose_num
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[24]));
    }
L_100d4: {//addi_choose_num
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_100d8: {//jalr_choose_num
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
