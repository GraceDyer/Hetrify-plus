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
extern int fib(int);



/*******************    Function: fib   *********************/
int fib(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[2048];
    c->gp_regs[sp]=(uint64_t)&stack[2048-1];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-2032LL;
    }
L_10004: {//sd_fib
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)2024LL) = (uint64_t)rs2;
    }
L_10008: {//addi_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)2032LL;
    }
L_1000c: {//addi_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-2016LL;
    }
L_10010: {//addi_fib
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10014: {//lui_fib
    c->gp_regs[15] = -4096LL;
    }
L_10018: {//addi_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1001c: {//add_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10020: {//sw_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)76LL) = (uint32_t)rs2;
    }
L_10024: {//lui_fib
    c->gp_regs[15] = -4096LL;
    }
L_10028: {//addi_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1002c: {//add_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10030: {//sw_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)88LL) = (uint32_t)rs2;
    }
L_10034: {//lui_fib
    c->gp_regs[15] = -4096LL;
    }
L_10038: {//addi_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1003c: {//add_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10040: {//addi_fib
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_10044: {//sw_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)92LL) = (uint32_t)rs2;
    }
L_10048: {//addi_fib
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_1004c: {//sw_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10050: {//jal_fib
    goto L_100cc;
    }
L_10054: {//lw_fib
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//addiw_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_1005c: {//addiw_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10060: {//lui_fib
    c->gp_regs[14] = -4096LL;
    }
L_10064: {//addi_fib
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 + (int64_t)-16LL;
    }
L_10068: {//add_fib
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[14] = rs1 + rs2;
    }
L_1006c: {//slli_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10070: {//add_fib
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10074: {//lw_fib
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)88LL);
    c->gp_regs[14] = rd;
    }
L_10078: {//lw_fib
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1007c: {//addiw_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-2LL);
    }
L_10080: {//addiw_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10084: {//lui_fib
    c->gp_regs[13] = -4096LL;
    }
L_10088: {//addi_fib
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[13] = rs1 + (int64_t)-16LL;
    }
L_1008c: {//add_fib
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[13] = rs1 + rs2;
    }
L_10090: {//slli_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10094: {//add_fib
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10098: {//lw_fib
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)88LL);
    c->gp_regs[15] = rd;
    }
L_1009c: {//addw_fib
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100a0: {//addiw_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a4: {//lui_fib
    c->gp_regs[15] = -4096LL;
    }
L_100a8: {//addi_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100ac: {//add_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[13] = rs1 + rs2;
    }
L_100b0: {//lw_fib
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100b4: {//slli_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_100b8: {//add_fib
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100bc: {//sw_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)88LL) = (uint32_t)rs2;
    }
L_100c0: {//lw_fib
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100c4: {//addiw_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100c8: {//sw_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100cc: {//lui_fib
    c->gp_regs[15] = -4096LL;
    }
L_100d0: {//addi_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100d4: {//add_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100d8: {//lw_fib
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_100dc: {//lw_fib
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)76LL);
    c->gp_regs[15] = rd;
    }
L_100e0: {//addiw_fib
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100e4: {//addiw_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100e8: {//bge_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10054;
    }
    }
L_100ec: {//lui_fib
    c->gp_regs[15] = -4096LL;
    }
L_100f0: {//addi_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100f4: {//add_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[14] = rs1 + rs2;
    }
L_100f8: {//lui_fib
    c->gp_regs[15] = -4096LL;
    }
L_100fc: {//addi_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10100: {//add_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10104: {//lw_fib
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)76LL);
    c->gp_regs[15] = rd;
    }
L_10108: {//slli_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_1010c: {//add_fib
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10110: {//lw_fib
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)88LL);
    c->gp_regs[15] = rd;
    }
L_10114: {//addi_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10118: {//addi_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)2016LL;
    }
L_1011c: {//ld_fib
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)2024LL);
    c->gp_regs[8] = rd;
    }
L_10120: {//addi_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)2032LL;
    }
L_10124: {//jalr_fib
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
