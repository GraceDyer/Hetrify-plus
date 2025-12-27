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
extern int fibfib(int);



/*******************    Function: fibfib   *********************/
int fibfib(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack0[56];
    c->gp_regs[sp]=(uint64_t)&stack0[56];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_fibfib
    c->gp_regs[2] = &stack0[56];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-448LL;
    }
L_10004: {//sd_fibfib
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[440]))=(uint64_t)rs2;
    }
L_10008: {//addi_fibfib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)448LL;
    }
L_1000c: {//addi_fibfib
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//sw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[12]))=(uint32_t)rs2;
    }
L_10014: {//sw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_10018: {//sw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_1001c: {//addi_fibfib
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10020: {//sw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[32]))=(uint32_t)rs2;
    }
L_10024: {//addi_fibfib
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_10028: {//sw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[428]))=(uint32_t)rs2;
    }
L_1002c: {//jal_fibfib
    goto L_100b4;
    }
L_10030: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[428]));
    }
L_10034: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_10038: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1003c: {//slli_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10040: {//addi_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10044: {//add_fibfib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10048: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-408LL);
    c->gp_regs[14] = rd;
    }
L_1004c: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[428]));
    }
L_10050: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-2LL);
    }
L_10054: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10058: {//slli_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_1005c: {//addi_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10060: {//add_fibfib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10064: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-408LL);
    c->gp_regs[15] = rd;
    }
L_10068: {//addw_fibfib
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1006c: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10070: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[428]));
    }
L_10074: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-3LL);
    }
L_10078: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1007c: {//slli_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10080: {//addi_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10084: {//add_fibfib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10088: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-408LL);
    c->gp_regs[15] = rd;
    }
L_1008c: {//addw_fibfib
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10090: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10094: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[428]));
    }
L_10098: {//slli_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_1009c: {//addi_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100a0: {//add_fibfib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100a4: {//sw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)-408LL) = (uint32_t)rs2;
    }
L_100a8: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[428]));
    }
L_100ac: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100b0: {//sw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[428]))=(uint32_t)rs2;
    }
L_100b4: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[428]));
    }
L_100b8: {//addi_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100bc: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[12]));
    }
L_100c0: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c4: {//addiw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c8: {//bge_fibfib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10030;
    }
    }
L_100cc: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[12]));
    }
L_100d0: {//slli_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_100d4: {//addi_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100d8: {//add_fibfib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100dc: {//lw_fibfib
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-408LL);
    c->gp_regs[15] = rd;
    }
L_100e0: {//addi_fibfib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100e4: {//ld_fibfib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[440]));
    }
L_100e8: {//addi_fibfib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)448LL;
    }
L_100ec: {//jalr_fibfib
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
