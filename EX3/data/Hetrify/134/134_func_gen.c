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
extern int check_if_last_char_is_a_letter(void*);
extern int is_letter(char);
extern int str_length(void*);



/*******************    Function: str_length   *********************/
int str_length(void* arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_str_length
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_str_length
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10008: {//addi_str_length
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//sd_str_length
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10010: {//sw_str_length
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10014: {//jal_str_length
    goto L_10024;
    }
L_10018: {//lw_str_length
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1001c: {//addiw_str_length
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10020: {//sw_str_length
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10024: {//lw_str_length
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10028: {//ld_str_length
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_1002c: {//add_str_length
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10030: {//lbu_str_length
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10034: {//bne_str_length
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10018;
    }
    }
L_10038: {//lw_str_length
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1003c: {//addi_str_length
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10040: {//ld_str_length
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_10044: {//addi_str_length
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10048: {//jalr_str_length
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: is_letter   *********************/
int is_letter(char arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
    c->gp_regs[a0]=arg0;
L_1004c: {//addi_is_letter
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10050: {//sd_is_letter
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10054: {//addi_is_letter
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10058: {//addi_is_letter
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1005c: {//sb_is_letter
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10060: {//lbu_is_letter
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10064: {//andi_is_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_10068: {//addi_is_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)64LL;
    }
L_1006c: {//bgeu_is_letter
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_10080;
    }
    }
L_10070: {//lbu_is_letter
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10074: {//andi_is_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_10078: {//addi_is_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)90LL;
    }
L_1007c: {//bgeu_is_letter
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_100a0;
    }
    }
L_10080: {//lbu_is_letter
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10084: {//andi_is_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_10088: {//addi_is_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)96LL;
    }
L_1008c: {//bgeu_is_letter
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_100a8;
    }
    }
L_10090: {//lbu_is_letter
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10094: {//andi_is_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_10098: {//addi_is_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)122LL;
    }
L_1009c: {//bltu_is_letter
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_100a8;
    }
    }
L_100a0: {//addi_is_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100a4: {//jal_is_letter
    goto L_100ac;
    }
L_100a8: {//addi_is_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100ac: {//addi_is_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100b0: {//ld_is_letter
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_100b4: {//addi_is_letter
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_100b8: {//jalr_is_letter
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: check_if_last_char_is_a_letter   *********************/
int check_if_last_char_is_a_letter(void* arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
L_100bc: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_100c0: {//sd_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_100c4: {//sd_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)32LL) = (uint64_t)rs2;
    }
L_100c8: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_100cc: {//sd_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_100d0: {//ld_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[10] = rd;
    }
L_100d4: {//jal_check_if_last_char_is_a_letter
    c->gp_regs[1] = 65752LL;
    c->gp_regs[a0] = (uint64_t)str_length(c->gp_regs[a0]);
    }
L_100d8: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100dc: {//sw_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100e0: {//lw_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100e4: {//addiw_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100e8: {//bne_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100f4;
    }
    }
L_100ec: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100f0: {//jal_check_if_last_char_is_a_letter
    goto L_10178;
    }
L_100f4: {//lw_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100f8: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_100fc: {//ld_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10100: {//add_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10104: {//lbu_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10108: {//sb_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-21LL) = (uint8_t)rs2;
    }
L_1010c: {//lbu_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-21LL);
    c->gp_regs[15] = rd;
    }
L_10110: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10114: {//jal_check_if_last_char_is_a_letter
    c->gp_regs[1] = 65816LL;
    c->gp_regs[a0] = (uint64_t)is_letter(c->gp_regs[a0]);
    }
L_10118: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1011c: {//bne_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10128;
    }
    }
L_10120: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10124: {//jal_check_if_last_char_is_a_letter
    goto L_10178;
    }
L_10128: {//lw_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1012c: {//addiw_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10130: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10134: {//bne_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10140;
    }
    }
L_10138: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1013c: {//jal_check_if_last_char_is_a_letter
    goto L_10178;
    }
L_10140: {//lw_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10144: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-2LL;
    }
L_10148: {//ld_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_1014c: {//add_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10150: {//lbu_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10154: {//sb_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-21LL) = (uint8_t)rs2;
    }
L_10158: {//lbu_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-21LL);
    c->gp_regs[15] = rd;
    }
L_1015c: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10160: {//jal_check_if_last_char_is_a_letter
    c->gp_regs[1] = 65892LL;
    c->gp_regs[a0] = (uint64_t)is_letter(c->gp_regs[a0]);
    }
L_10164: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10168: {//beq_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10174;
    }
    }
L_1016c: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10170: {//jal_check_if_last_char_is_a_letter
    goto L_10178;
    }
L_10174: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10178: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1017c: {//ld_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[1] = rd;
    }
L_10180: {//ld_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)32LL);
    c->gp_regs[8] = rd;
    }
L_10184: {//addi_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10188: {//jalr_check_if_last_char_is_a_letter
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
