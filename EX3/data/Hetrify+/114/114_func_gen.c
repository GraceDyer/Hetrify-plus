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
extern long long int minSubArraySum(long long int*, int);



/*******************    Function: minSubArraySum   *********************/
long long int minSubArraySum(long long int* arg0, int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack0[8];
    c->gp_regs[sp]=(uint64_t)&stack0[8];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10000: {//addi_minSubArraySum
    c->gp_regs[2] = &stack0[8];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-64LL;
    }
L_10004: {//sd_minSubArraySum
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[56]))=(uint64_t)rs2;
    }
L_10008: {//addi_minSubArraySum
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)64LL;
    }
L_1000c: {//sd_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack0)[8]))=(uint64_t)rs2;
    }
L_10010: {//addi_minSubArraySum
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10014: {//sw_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[4]))=(uint32_t)rs2;
    }
L_10018: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_1001c: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10020: {//sd_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack0)[40]))=(uint64_t)rs2;
    }
L_10024: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10028: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_1002c: {//sd_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack0)[32]))=(uint64_t)rs2;
    }
L_10030: {//addi_minSubArraySum
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10034: {//sw_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_10038: {//jal_minSubArraySum
    goto L_100a0;
    }
L_1003c: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[40]));
    }
L_10040: {//bge_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10068;
    }
    }
L_10044: {//lw_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_10048: {//slli_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 3;
    }
L_1004c: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10050: {//add_minSubArraySum
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10054: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[40]));
    }
L_1005c: {//add_minSubArraySum
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10060: {//sd_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack0)[40]))=(uint64_t)rs2;
    }
L_10064: {//jal_minSubArraySum
    goto L_10080;
    }
L_10068: {//lw_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_1006c: {//slli_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 3;
    }
L_10070: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10074: {//add_minSubArraySum
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10078: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_1007c: {//sd_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack0)[40]))=(uint64_t)rs2;
    }
L_10080: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[40]));
    }
L_10084: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[32]));
    }
L_10088: {//bge_minSubArraySum
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10094;
    }
    }
L_1008c: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[40]));
    }
L_10090: {//sd_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack0)[32]))=(uint64_t)rs2;
    }
L_10094: {//lw_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_10098: {//addiw_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1009c: {//sw_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_100a0: {//lw_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_100a4: {//addi_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100a8: {//lw_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[4]));
    }
L_100ac: {//addiw_minSubArraySum
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100b0: {//addiw_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100b4: {//blt_minSubArraySum
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_1003c;
    }
    }
L_100b8: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[32]));
    }
L_100bc: {//addi_minSubArraySum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100c0: {//ld_minSubArraySum
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[56]));
    }
L_100c4: {//addi_minSubArraySum
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)64LL;
    }
L_100c8: {//jalr_minSubArraySum
    uint64_t rs1 = c->gp_regs[1];
    return (long long int)c->gp_regs[a0];
    }
}
