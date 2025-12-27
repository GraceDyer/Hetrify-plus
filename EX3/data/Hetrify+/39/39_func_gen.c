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
extern int prime_fib(int);
extern int is_prime(int);



/*******************    Function: is_prime   *********************/
int is_prime(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack1[6];
    c->gp_regs[sp]=(uint64_t)&stack1[6];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_is_prime
    c->gp_regs[2] = &stack1[6];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_is_prime
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack1)[40]))=(uint64_t)rs2;
    }
L_10008: {//addi_is_prime
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//addi_is_prime
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//sw_is_prime
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[12]))=(uint32_t)rs2;
    }
L_10014: {//lw_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[12]));
    }
L_10018: {//addiw_is_prime
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1001c: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10020: {//blt_is_prime
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_1002c;
    }
    }
L_10024: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10028: {//jal_is_prime
    goto L_10098;
    }
L_1002c: {//lw_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[12]));
    }
L_10030: {//addiw_is_prime
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10034: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10038: {//bne_is_prime
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10044;
    }
    }
L_1003c: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10040: {//jal_is_prime
    goto L_10098;
    }
L_10044: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10048: {//sw_is_prime
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[28]))=(uint32_t)rs2;
    }
L_1004c: {//jal_is_prime
    goto L_1007c;
    }
L_10050: {//lw_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[12]));
    }
L_10054: {//addi_is_prime
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10058: {//lw_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_1005c: {//remw_is_prime
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (rs2 == 0 ? (int64_t)(int32_t)rs1 : (int64_t)(int32_t)((int64_t)(int32_t)rs1 % (int64_t)(int32_t)rs2));
    }
L_10060: {//addiw_is_prime
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10064: {//bne_is_prime
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10070;
    }
    }
L_10068: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1006c: {//jal_is_prime
    goto L_10098;
    }
L_10070: {//lw_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_10074: {//addiw_is_prime
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10078: {//sw_is_prime
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[28]))=(uint32_t)rs2;
    }
L_1007c: {//lw_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_10080: {//mulw_is_prime
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 * rs2);
    }
L_10084: {//addiw_is_prime
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10088: {//lw_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[12]));
    }
L_1008c: {//addiw_is_prime
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10090: {//bge_is_prime
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10050;
    }
    }
L_10094: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10098: {//addi_is_prime
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1009c: {//ld_is_prime
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack1)[40]));
    }
L_100a0: {//addi_is_prime
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_100a4: {//jalr_is_prime
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: prime_fib   *********************/
int prime_fib(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack0[6];
    c->gp_regs[sp]=(uint64_t)&stack0[6];
    c->gp_regs[a0]=arg0;
L_100a8: {//addi_prime_fib
    c->gp_regs[2] = &stack0[6];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_100ac: {//sd_prime_fib
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *( uint64_t*)(&(((uint8_t*)stack0)[40]))=(uint64_t)rs2;
    }
L_100b0: {//sd_prime_fib
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[32]))=(uint64_t)rs2;
    }
L_100b4: {//addi_prime_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_100b8: {//addi_prime_fib
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100bc: {//sw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[12]))=(uint32_t)rs2;
    }
L_100c0: {//addi_prime_fib
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100c4: {//sw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_100c8: {//addi_prime_fib
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_100cc: {//sw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_100d0: {//sw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[20]))=(uint32_t)rs2;
    }
L_100d4: {//jal_prime_fib
    goto L_1013c;
    }
L_100d8: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_100dc: {//addi_prime_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100e0: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_100e4: {//addw_prime_fib
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100e8: {//sw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[16]))=(uint32_t)rs2;
    }
L_100ec: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_100f0: {//sw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_100f4: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[16]));
    }
L_100f8: {//sw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_100fc: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_10100: {//addi_prime_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10104: {//jal_prime_fib
    c->gp_regs[1] = 65800LL;
    c->gp_regs[a0] = (uint64_t)is_prime(c->gp_regs[a0]);
    }
L_10108: {//addi_prime_fib
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1010c: {//beq_prime_fib
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_1011c;
    }
    }
L_10110: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[20]));
    }
L_10114: {//addiw_prime_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10118: {//sw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[20]))=(uint32_t)rs2;
    }
L_1011c: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[20]));
    }
L_10120: {//addi_prime_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10124: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[12]));
    }
L_10128: {//addiw_prime_fib
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1012c: {//addiw_prime_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10130: {//bne_prime_fib
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1013c;
    }
    }
L_10134: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_10138: {//jal_prime_fib
    goto L_10158;
    }
L_1013c: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[20]));
    }
L_10140: {//addi_prime_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10144: {//lw_prime_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[12]));
    }
L_10148: {//addiw_prime_fib
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1014c: {//addiw_prime_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10150: {//blt_prime_fib
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_100d8;
    }
    }
L_10154: {//addi_prime_fib
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_10158: {//addi_prime_fib
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1015c: {//ld_prime_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[1] = *(int64_t*)(&(((uint8_t*)stack0)[40]));
    }
L_10160: {//ld_prime_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[32]));
    }
L_10164: {//addi_prime_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10168: {//jalr_prime_fib
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
