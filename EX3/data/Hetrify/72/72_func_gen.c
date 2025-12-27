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
extern int will_it_fly(int*, int, int);



/*******************    Function: will_it_fly   *********************/
int will_it_fly(int* arg0, int arg1, int arg2){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
L_10000: {//addi_will_it_fly
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_will_it_fly
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10008: {//addi_will_it_fly
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//sd_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10010: {//addi_will_it_fly
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10014: {//addi_will_it_fly
    uint64_t rs1 = c->gp_regs[12];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10018: {//sw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-44LL) = (uint32_t)rs2;
    }
L_1001c: {//addi_will_it_fly
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10020: {//sw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-48LL) = (uint32_t)rs2;
    }
L_10024: {//sw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10028: {//sw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_1002c: {//jal_will_it_fly
    goto L_100a8;
    }
L_10030: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10034: {//slli_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10038: {//ld_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_1003c: {//add_will_it_fly
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10040: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[13] = rd;
    }
L_10044: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_10048: {//addiw_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_1004c: {//addiw_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10050: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_10054: {//subw_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 - rs2);
    }
L_10058: {//addiw_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1005c: {//slli_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10060: {//ld_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10064: {//add_will_it_fly
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10068: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_1006c: {//addi_will_it_fly
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10070: {//beq_will_it_fly
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_1007c;
    }
    }
L_10074: {//addi_will_it_fly
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10078: {//jal_will_it_fly
    goto L_100e4;
    }
L_1007c: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10080: {//slli_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10084: {//ld_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10088: {//add_will_it_fly
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1008c: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10090: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_10094: {//addw_will_it_fly
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10098: {//sw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1009c: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_100a0: {//addiw_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100a4: {//sw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_100a8: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_100ac: {//addi_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100b0: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_100b4: {//addiw_will_it_fly
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100b8: {//addiw_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100bc: {//blt_will_it_fly
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10030;
    }
    }
L_100c0: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100c4: {//addi_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100c8: {//lw_will_it_fly
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_100cc: {//addiw_will_it_fly
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100d0: {//addiw_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100d4: {//bge_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_100e0;
    }
    }
L_100d8: {//addi_will_it_fly
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100dc: {//jal_will_it_fly
    goto L_100e4;
    }
L_100e0: {//addi_will_it_fly
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100e4: {//addi_will_it_fly
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100e8: {//ld_will_it_fly
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_100ec: {//addi_will_it_fly
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_100f0: {//jalr_will_it_fly
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
