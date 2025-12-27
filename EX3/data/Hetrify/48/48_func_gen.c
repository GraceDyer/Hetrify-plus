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
extern int is_palindrome(void*);
extern void reverse_string(void*, char*, unsigned int);
extern int my_strcmp(void*, void*);
extern unsigned int my_strlen(void*);



/*******************    Function: my_strlen   *********************/
unsigned int my_strlen(void* arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_my_strlen
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_my_strlen
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10008: {//addi_my_strlen
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//sd_my_strlen
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10010: {//sw_my_strlen
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10014: {//jal_my_strlen
    goto L_10024;
    }
L_10018: {//lw_my_strlen
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1001c: {//addiw_my_strlen
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10020: {//sw_my_strlen
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10024: {//lwu_my_strlen
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10028: {//ld_my_strlen
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_1002c: {//add_my_strlen
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10030: {//lbu_my_strlen
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10034: {//bne_my_strlen
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10018;
    }
    }
L_10038: {//lw_my_strlen
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1003c: {//addi_my_strlen
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10040: {//ld_my_strlen
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_10044: {//addi_my_strlen
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10048: {//jalr_my_strlen
    uint64_t rs1 = c->gp_regs[1];
    return (unsigned int)c->gp_regs[a0];
    }
}



/*******************    Function: my_strcmp   *********************/
int my_strcmp(void* arg0, void* arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_1004c: {//addi_my_strcmp
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10050: {//sd_my_strcmp
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10054: {//addi_my_strcmp
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_10058: {//sd_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_1005c: {//sd_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_10060: {//sw_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10064: {//jal_my_strcmp
    goto L_100d4;
    }
L_10068: {//lwu_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1006c: {//ld_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10070: {//add_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10074: {//lbu_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[13] = rd;
    }
L_10078: {//lwu_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1007c: {//ld_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[14] = rd;
    }
L_10080: {//add_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10084: {//lbu_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10088: {//addi_my_strcmp
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1008c: {//beq_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100c8;
    }
    }
L_10090: {//lwu_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10094: {//ld_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10098: {//add_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1009c: {//lbu_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[13] = rd;
    }
L_100a0: {//lwu_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100a4: {//ld_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[14] = rd;
    }
L_100a8: {//add_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100ac: {//lbu_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100b0: {//addi_my_strcmp
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100b4: {//bgeu_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_100c0;
    }
    }
L_100b8: {//addi_my_strcmp
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_100bc: {//jal_my_strcmp
    goto L_1014c;
    }
L_100c0: {//addi_my_strcmp
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100c4: {//jal_my_strcmp
    goto L_1014c;
    }
L_100c8: {//lw_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100cc: {//addiw_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100d0: {//sw_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100d4: {//lwu_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100d8: {//ld_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_100dc: {//add_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100e0: {//lbu_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100e4: {//beq_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100fc;
    }
    }
L_100e8: {//lwu_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100ec: {//ld_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[14] = rd;
    }
L_100f0: {//add_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100f4: {//lbu_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100f8: {//bne_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10068;
    }
    }
L_100fc: {//lwu_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10100: {//ld_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10104: {//add_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10108: {//lbu_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_1010c: {//bne_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1012c;
    }
    }
L_10110: {//lwu_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10114: {//ld_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[14] = rd;
    }
L_10118: {//add_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1011c: {//lbu_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10120: {//bne_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1012c;
    }
    }
L_10124: {//addi_my_strcmp
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10128: {//jal_my_strcmp
    goto L_1014c;
    }
L_1012c: {//lwu_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10130: {//ld_my_strcmp
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10134: {//add_my_strcmp
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10138: {//lbu_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_1013c: {//bne_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10148;
    }
    }
L_10140: {//addi_my_strcmp
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_10144: {//jal_my_strcmp
    goto L_1014c;
    }
L_10148: {//addi_my_strcmp
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1014c: {//addi_my_strcmp
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10150: {//ld_my_strcmp
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_10154: {//addi_my_strcmp
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10158: {//jalr_my_strcmp
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: reverse_string   *********************/
void reverse_string(void* arg0, char* arg1, unsigned int arg2){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[80];
    c->gp_regs[sp]=(uint64_t)&stack[80-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
L_1015c: {//addi_reverse_string
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-64LL;
    }
L_10160: {//sd_reverse_string
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)56LL) = (uint64_t)rs2;
    }
L_10164: {//addi_reverse_string
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)64LL;
    }
L_10168: {//sd_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_1016c: {//sd_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_10170: {//addi_reverse_string
    uint64_t rs1 = c->gp_regs[12];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10174: {//sw_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-52LL) = (uint32_t)rs2;
    }
L_10178: {//sw_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1017c: {//jal_reverse_string
    goto L_101cc;
    }
L_10180: {//lw_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[15] = rd;
    }
L_10184: {//addi_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10188: {//lw_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1018c: {//subw_reverse_string
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 - rs2);
    }
L_10190: {//addiw_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10194: {//addiw_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_10198: {//addiw_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1019c: {//slli_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 32;
    }
L_101a0: {//srli_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 >> 32;
    }
L_101a4: {//ld_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_101a8: {//add_reverse_string
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + rs2;
    }
L_101ac: {//lwu_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_101b0: {//ld_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[13] = rd;
    }
L_101b4: {//add_reverse_string
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101b8: {//lbu_reverse_string
    uint64_t rs1 = c->gp_regs[14];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_101bc: {//sb_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_101c0: {//lw_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_101c4: {//addiw_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_101c8: {//sw_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_101cc: {//lw_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_101d0: {//addi_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_101d4: {//lw_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[15] = rd;
    }
L_101d8: {//addiw_reverse_string
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101dc: {//addiw_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101e0: {//bltu_reverse_string
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_10180;
    }
    }
L_101e4: {//lwu_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[15] = rd;
    }
L_101e8: {//ld_reverse_string
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[14] = rd;
    }
L_101ec: {//add_reverse_string
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101f0: {//sb_reverse_string
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_101f4: {//addi_reverse_string
    uint64_t rs1 = 0;
    }
L_101f8: {//ld_reverse_string
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)56LL);
    c->gp_regs[8] = rd;
    }
L_101fc: {//addi_reverse_string
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)64LL;
    }
L_10200: {//jalr_reverse_string
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: is_palindrome   *********************/
int is_palindrome(void* arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[160];
    c->gp_regs[sp]=(uint64_t)&stack[160-1];
    c->gp_regs[a0]=arg0;
L_10204: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-144LL;
    }
L_10208: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *(uint64_t *)(rs1 + (int64_t)136LL) = (uint64_t)rs2;
    }
L_1020c: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)128LL) = (uint64_t)rs2;
    }
L_10210: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[9];
    *(uint64_t *)(rs1 + (int64_t)120LL) = (uint64_t)rs2;
    }
L_10214: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[18];
    *(uint64_t *)(rs1 + (int64_t)112LL) = (uint64_t)rs2;
    }
L_10218: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[19];
    *(uint64_t *)(rs1 + (int64_t)104LL) = (uint64_t)rs2;
    }
L_1021c: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[20];
    *(uint64_t *)(rs1 + (int64_t)96LL) = (uint64_t)rs2;
    }
L_10220: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[21];
    *(uint64_t *)(rs1 + (int64_t)88LL) = (uint64_t)rs2;
    }
L_10224: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[22];
    *(uint64_t *)(rs1 + (int64_t)80LL) = (uint64_t)rs2;
    }
L_10228: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[23];
    *(uint64_t *)(rs1 + (int64_t)72LL) = (uint64_t)rs2;
    }
L_1022c: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[24];
    *(uint64_t *)(rs1 + (int64_t)64LL) = (uint64_t)rs2;
    }
L_10230: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[25];
    *(uint64_t *)(rs1 + (int64_t)56LL) = (uint64_t)rs2;
    }
L_10234: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)144LL;
    }
L_10238: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-136LL) = (uint64_t)rs2;
    }
L_1023c: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10240: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[9] = rs1 + (int64_t)0LL;
    }
L_10244: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-136LL);
    c->gp_regs[10] = rd;
    }
L_10248: {//jal_is_palindrome
    c->gp_regs[1] = 66124LL;
    c->gp_regs[a0] = (uint64_t)my_strlen(c->gp_regs[a0]);
    }
L_1024c: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10250: {//sw_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-100LL) = (uint32_t)rs2;
    }
L_10254: {//lw_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-100LL);
    c->gp_regs[15] = rd;
    }
L_10258: {//addiw_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1025c: {//addiw_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10260: {//slli_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 << 32;
    }
L_10264: {//srli_is_palindrome
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 >> 32;
    }
L_10268: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 + (int64_t)-1LL;
    }
L_1026c: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(rs1 + (int64_t)-112LL) = (uint64_t)rs2;
    }
L_10270: {//slli_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 << 32;
    }
L_10274: {//srli_is_palindrome
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 >> 32;
    }
L_10278: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[24] = rs1 + (int64_t)0LL;
    }
L_1027c: {//addi_is_palindrome
    uint64_t rs1 = 0;
    c->gp_regs[25] = rs1 + (int64_t)0LL;
    }
L_10280: {//srli_is_palindrome
    uint64_t rs1 = c->gp_regs[24];
    c->gp_regs[14] = rs1 >> 61;
    }
L_10284: {//slli_is_palindrome
    uint64_t rs1 = c->gp_regs[25];
    c->gp_regs[21] = rs1 << 3;
    }
L_10288: {//or_is_palindrome
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[21];
    c->gp_regs[21] = rs1 | rs2;
    }
L_1028c: {//slli_is_palindrome
    uint64_t rs1 = c->gp_regs[24];
    c->gp_regs[20] = rs1 << 3;
    }
L_10290: {//slli_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 << 32;
    }
L_10294: {//srli_is_palindrome
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 >> 32;
    }
L_10298: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[22] = rs1 + (int64_t)0LL;
    }
L_1029c: {//addi_is_palindrome
    uint64_t rs1 = 0;
    c->gp_regs[23] = rs1 + (int64_t)0LL;
    }
L_102a0: {//srli_is_palindrome
    uint64_t rs1 = c->gp_regs[22];
    c->gp_regs[14] = rs1 >> 61;
    }
L_102a4: {//slli_is_palindrome
    uint64_t rs1 = c->gp_regs[23];
    c->gp_regs[19] = rs1 << 3;
    }
L_102a8: {//or_is_palindrome
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[19];
    c->gp_regs[19] = rs1 | rs2;
    }
L_102ac: {//slli_is_palindrome
    uint64_t rs1 = c->gp_regs[22];
    c->gp_regs[18] = rs1 << 3;
    }
L_102b0: {//slli_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 32;
    }
L_102b4: {//srli_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 >> 32;
    }
L_102b8: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)15LL;
    }
L_102bc: {//srli_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 >> 4;
    }
L_102c0: {//slli_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 4;
    }
L_102c4: {//sub_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[2] = rs1 - rs2;
    }
L_102c8: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_102cc: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_102d0: {//sd_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-120LL) = (uint64_t)rs2;
    }
L_102d4: {//lw_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-100LL);
    c->gp_regs[15] = rd;
    }
L_102d8: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[12] = rs1 + (int64_t)0LL;
    }
L_102dc: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-120LL);
    c->gp_regs[11] = rd;
    }
L_102e0: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-136LL);
    c->gp_regs[10] = rd;
    }
L_102e4: {//jal_is_palindrome
    c->gp_regs[1] = 66280LL;
    reverse_string(c->gp_regs[a0],c->gp_regs[a1],c->gp_regs[a2]);
    }
L_102e8: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-120LL);
    c->gp_regs[11] = rd;
    }
L_102ec: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-136LL);
    c->gp_regs[10] = rd;
    }
L_102f0: {//jal_is_palindrome
    c->gp_regs[1] = 66292LL;
    c->gp_regs[a0] = (uint64_t)my_strcmp(c->gp_regs[a0],c->gp_regs[a1]);
    }
L_102f4: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_102f8: {//sltiu_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_102fc: {//andi_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10300: {//addiw_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10304: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[9];
    c->gp_regs[2] = rs1 + (int64_t)0LL;
    }
L_10308: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1030c: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[2] = rs1 + (int64_t)-144LL;
    }
L_10310: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)136LL);
    c->gp_regs[1] = rd;
    }
L_10314: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)128LL);
    c->gp_regs[8] = rd;
    }
L_10318: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)120LL);
    c->gp_regs[9] = rd;
    }
L_1031c: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)112LL);
    c->gp_regs[18] = rd;
    }
L_10320: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)104LL);
    c->gp_regs[19] = rd;
    }
L_10324: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)96LL);
    c->gp_regs[20] = rd;
    }
L_10328: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)88LL);
    c->gp_regs[21] = rd;
    }
L_1032c: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)80LL);
    c->gp_regs[22] = rd;
    }
L_10330: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)72LL);
    c->gp_regs[23] = rd;
    }
L_10334: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)64LL);
    c->gp_regs[24] = rd;
    }
L_10338: {//ld_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)56LL);
    c->gp_regs[25] = rd;
    }
L_1033c: {//addi_is_palindrome
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)144LL;
    }
L_10340: {//jalr_is_palindrome
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
