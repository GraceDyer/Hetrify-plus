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
extern int is_prime(long long int);



/*******************    Function: is_prime   *********************/
int is_prime(long long int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack0[6];
    c->gp_regs[sp]=(uint64_t)&stack0[6];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_is_prime
    c->gp_regs[2] = &stack0[6];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_is_prime
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[40]))=(uint64_t)rs2;
    }
L_10008: {//addi_is_prime
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//sd_is_prime
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack0)[8]))=(uint64_t)rs2;
    }
L_10010: {//ld_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10014: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10018: {//blt_is_prime
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10024;
    }
    }
L_1001c: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10020: {//jal_is_prime
    goto L_10068;
    }
L_10024: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10028: {//sd_is_prime
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack0)[24]))=(uint64_t)rs2;
    }
L_1002c: {//jal_is_prime
    goto L_10054;
    }
L_10030: {//ld_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10034: {//ld_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10038: {//rem_is_prime
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    uint64_t rd = 0;                                   
    if (rs2 == 0) {                                    
        rd = rs1;                                      
    } else if (rs1 == INT64_MIN && rs2 == UINT64_MAX) {
        rd = 0;                                        
    } else {                                           
        rd = (int64_t)rs1 % (int64_t)rs2;              
    }                                                  
    c->gp_regs[15] = rd;
    }
L_1003c: {//bne_is_prime
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10048;
    }
    }
L_10040: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10044: {//jal_is_prime
    goto L_10068;
    }
L_10048: {//ld_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[24]));
    }
L_1004c: {//addi_is_prime
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10050: {//sd_is_prime
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack0)[24]))=(uint64_t)rs2;
    }
L_10054: {//ld_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10058: {//mul_is_prime
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 * rs2;
    }
L_1005c: {//ld_is_prime
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10060: {//bge_is_prime
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10030;
    }
    }
L_10064: {//addi_is_prime
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10068: {//addi_is_prime
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1006c: {//ld_is_prime
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[40]));
    }
L_10070: {//addi_is_prime
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10074: {//jalr_is_prime
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
