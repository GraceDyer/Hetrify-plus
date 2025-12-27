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
extern int get_matrix_triples(int);



/*******************    Function: get_matrix_triples   *********************/
int get_matrix_triples(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[544];
    c->gp_regs[sp]=(uint64_t)&stack[544-1];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-528LL;
    }
L_10004: {//sd_get_matrix_triples
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)520LL) = (uint64_t)rs2;
    }
L_10008: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)528LL;
    }
L_1000c: {//lui_get_matrix_triples
    c->gp_regs[5] = -24576LL;
    }
L_10010: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[5];
    c->gp_regs[2] = rs1 + rs2;
    }
L_10014: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10018: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_1001c: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10020: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10024: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)-500LL) = (uint32_t)rs2;
    }
L_10028: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_1002c: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10030: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10034: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-500LL);
    c->gp_regs[15] = rd;
    }
L_10038: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-48LL) = (uint32_t)rs2;
    }
L_1003c: {//sd_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10040: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_10044: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10048: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1004c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-500LL);
    c->gp_regs[15] = rd;
    }
L_10050: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10054: {//bge_get_matrix_triples
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_100fc;
    }
    }
L_10058: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_1005c: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-496LL;
    }
L_10060: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10064: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10068: {//sd_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_1006c: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10070: {//jal_get_matrix_triples
    goto L_100dc;
    }
L_10074: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10078: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1007c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10080: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10084: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10088: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1008c: {//mulw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 * rs2);
    }
L_10090: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10094: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10098: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1009c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a0: {//subw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 - rs2);
    }
L_100a4: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a8: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100ac: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[13] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100b0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100b4: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_100b8: {//ld_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_100bc: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100c0: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)3LL;
    }
L_100c4: {//remw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[14] = (rs2 == 0 ? (int64_t)(int32_t)rs1 : (int64_t)(int32_t)((int64_t)(int32_t)rs1 % (int64_t)(int32_t)rs2));
    }
L_100c8: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100cc: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_100d0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100d4: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100d8: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100dc: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_100e0: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_100e4: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100e8: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_100ec: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-500LL);
    c->gp_regs[15] = rd;
    }
L_100f0: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100f4: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100f8: {//blt_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10074;
    }
    }
L_100fc: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10100: {//jal_get_matrix_triples
    goto L_1012c;
    }
L_10104: {//lui_get_matrix_triples
    c->gp_regs[15] = -12288LL;
    }
L_10108: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1010c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[14] = rs1 + rs2;
    }
L_10110: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10114: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10118: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1011c: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)240LL) = (uint32_t)rs2;
    }
L_10120: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10124: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10128: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_1012c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10130: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10134: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10138: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10104;
    }
    }
L_1013c: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10140: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-44LL) = (uint32_t)rs2;
    }
L_10144: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10148: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1014c: {//jal_get_matrix_triples
    goto L_10284;
    }
L_10150: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10154: {//jal_get_matrix_triples
    goto L_101cc;
    }
L_10158: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1015c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_10160: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10164: {//lui_get_matrix_triples
    c->gp_regs[15] = -12288LL;
    }
L_10168: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1016c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[13] = rs1 + rs2;
    }
L_10170: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[12] = rd;
    }
L_10174: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10178: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_1017c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10180: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[12];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10184: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10188: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1018c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)240LL);
    c->gp_regs[13] = rd;
    }
L_10190: {//lui_get_matrix_triples
    c->gp_regs[15] = -12288LL;
    }
L_10194: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10198: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[12] = rs1 + rs2;
    }
L_1019c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[11] = rd;
    }
L_101a0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_101a4: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_101a8: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_101ac: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101b0: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101b4: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_101b8: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[12];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101bc: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[13];
    *(uint32_t *)(rs1 + (int64_t)240LL) = (uint32_t)rs2;
    }
L_101c0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_101c4: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_101c8: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_101cc: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_101d0: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101d4: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_101d8: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10158;
    }
    }
L_101dc: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_101e0: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_101e4: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-4LL;
    }
L_101e8: {//ld_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_101ec: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101f0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[12] = rd;
    }
L_101f4: {//lui_get_matrix_triples
    c->gp_regs[15] = -12288LL;
    }
L_101f8: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_101fc: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[13] = rs1 + rs2;
    }
L_10200: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_10204: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10208: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_1020c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10210: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[12];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10214: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10218: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1021c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)240LL);
    c->gp_regs[15] = rd;
    }
L_10220: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_10224: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 << 2;
    }
L_10228: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 + (int64_t)-4LL;
    }
L_1022c: {//ld_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[13] = rd;
    }
L_10230: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[14] = rs1 + rs2;
    }
L_10234: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[11] = rd;
    }
L_10238: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1023c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[13] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10240: {//lui_get_matrix_triples
    c->gp_regs[15] = -12288LL;
    }
L_10244: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10248: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[12] = rs1 + rs2;
    }
L_1024c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_10250: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10254: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_10258: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1025c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10260: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10264: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[12];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10268: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[13];
    *(uint32_t *)(rs1 + (int64_t)240LL) = (uint32_t)rs2;
    }
L_1026c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_10270: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10274: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-44LL) = (uint32_t)rs2;
    }
L_10278: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1027c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10280: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10284: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_10288: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1028c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10290: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_10294: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-500LL);
    c->gp_regs[15] = rd;
    }
L_10298: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1029c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_102a0: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10150;
    }
    }
L_102a4: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_102a8: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_102ac: {//jal_get_matrix_triples
    goto L_105a8;
    }
L_102b0: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_102b4: {//jal_get_matrix_triples
    goto L_102e0;
    }
L_102b8: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_102bc: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_102c0: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[14] = rs1 + rs2;
    }
L_102c4: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_102c8: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_102cc: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_102d0: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)512LL) = (uint32_t)rs2;
    }
L_102d4: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_102d8: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_102dc: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_102e0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_102e4: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_102e8: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_102ec: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_102b8;
    }
    }
L_102f0: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_102f4: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_102f8: {//jal_get_matrix_triples
    goto L_10484;
    }
L_102fc: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10300: {//jal_get_matrix_triples
    goto L_10378;
    }
L_10304: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10308: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_1030c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10310: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_10314: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10318: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[13] = rs1 + rs2;
    }
L_1031c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[12] = rd;
    }
L_10320: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10324: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_10328: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1032c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[12];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10330: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10334: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10338: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)512LL);
    c->gp_regs[13] = rd;
    }
L_1033c: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_10340: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10344: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[12] = rs1 + rs2;
    }
L_10348: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[11] = rd;
    }
L_1034c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_10350: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10354: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_10358: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1035c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10360: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10364: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[12];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10368: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[13];
    *(uint32_t *)(rs1 + (int64_t)512LL) = (uint32_t)rs2;
    }
L_1036c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10370: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10374: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10378: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_1037c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10380: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10384: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10304;
    }
    }
L_10388: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_1038c: {//jal_get_matrix_triples
    goto L_10468;
    }
L_10390: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10394: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10398: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-4LL;
    }
L_1039c: {//ld_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_103a0: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_103a4: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_103a8: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_103ac: {//addw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_103b0: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_103b4: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_103b8: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_103bc: {//remw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (rs2 == 0 ? (int64_t)(int32_t)rs1 : (int64_t)(int32_t)((int64_t)(int32_t)rs1 % (int64_t)(int32_t)rs2));
    }
L_103c0: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_103c4: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_103c8: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_103cc: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[12] = rs1 + rs2;
    }
L_103d0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[13] = rd;
    }
L_103d4: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_103d8: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_103dc: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[13];
    c->gp_regs[15] = rs1 + rs2;
    }
L_103e0: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_103e4: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_103e8: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[12];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_103ec: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)512LL);
    c->gp_regs[12] = rd;
    }
L_103f0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_103f4: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_103f8: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[13] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_103fc: {//lui_get_matrix_triples
    c->gp_regs[15] = -12288LL;
    }
L_10400: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10404: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[11] = rs1 + rs2;
    }
L_10408: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[10] = rd;
    }
L_1040c: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10410: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_10414: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[13];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10418: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1041c: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10420: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[11];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10424: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)240LL);
    c->gp_regs[15] = rd;
    }
L_10428: {//addw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[12];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1042c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[12] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10430: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_10434: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10438: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[11] = rs1 + rs2;
    }
L_1043c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[13] = rd;
    }
L_10440: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10444: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_10448: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[13];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1044c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10450: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10454: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[11];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10458: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[12];
    *(uint32_t *)(rs1 + (int64_t)512LL) = (uint32_t)rs2;
    }
L_1045c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10460: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10464: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10468: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_1046c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10470: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10474: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10390;
    }
    }
L_10478: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1047c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10480: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10484: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_10488: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1048c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10490: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_10494: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-500LL);
    c->gp_regs[15] = rd;
    }
L_10498: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1049c: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_104a0: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_102fc;
    }
    }
L_104a4: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_104a8: {//jal_get_matrix_triples
    goto L_1053c;
    }
L_104ac: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_104b0: {//jal_get_matrix_triples
    goto L_10520;
    }
L_104b4: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_104b8: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_104bc: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[13] = rs1 + rs2;
    }
L_104c0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[12] = rd;
    }
L_104c4: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_104c8: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_104cc: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_104d0: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_104d4: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[12];
    c->gp_regs[15] = rs1 + rs2;
    }
L_104d8: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_104dc: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_104e0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)512LL);
    c->gp_regs[13] = rd;
    }
L_104e4: {//lui_get_matrix_triples
    c->gp_regs[15] = -12288LL;
    }
L_104e8: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_104ec: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[12] = rs1 + rs2;
    }
L_104f0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[11] = rd;
    }
L_104f4: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_104f8: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_104fc: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_10500: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10504: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10508: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_1050c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[12];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10510: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[13];
    *(uint32_t *)(rs1 + (int64_t)240LL) = (uint32_t)rs2;
    }
L_10514: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10518: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1051c: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10520: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10524: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10528: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_1052c: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_104b4;
    }
    }
L_10530: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10534: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10538: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1053c: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_10540: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10544: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10548: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[14] = rd;
    }
L_1054c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-500LL);
    c->gp_regs[15] = rd;
    }
L_10550: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10554: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10558: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_104ac;
    }
    }
L_1055c: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10560: {//jal_get_matrix_triples
    goto L_1058c;
    }
L_10564: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_10568: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1056c: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[14] = rs1 + rs2;
    }
L_10570: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10574: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10578: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1057c: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)512LL) = (uint32_t)rs2;
    }
L_10580: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10584: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10588: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_1058c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10590: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10594: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10598: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10564;
    }
    }
L_1059c: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_105a0: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_105a4: {//sw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_105a8: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_105ac: {//addiw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_105b0: {//addi_get_matrix_triples
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_105b4: {//bge_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_102b0;
    }
    }
L_105b8: {//lui_get_matrix_triples
    c->gp_regs[15] = -12288LL;
    }
L_105bc: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_105c0: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[13] = rs1 + rs2;
    }
L_105c4: {//lui_get_matrix_triples
    c->gp_regs[15] = -24576LL;
    }
L_105c8: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_105cc: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_105d0: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-500LL);
    c->gp_regs[14] = rd;
    }
L_105d4: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_105d8: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_105dc: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_105e0: {//slli_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_105e4: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_105e8: {//lw_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)240LL);
    c->gp_regs[15] = rd;
    }
L_105ec: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_105f0: {//lui_get_matrix_triples
    c->gp_regs[5] = 24576LL;
    }
L_105f4: {//add_get_matrix_triples
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[5];
    c->gp_regs[2] = rs1 + rs2;
    }
L_105f8: {//ld_get_matrix_triples
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)520LL);
    c->gp_regs[8] = rd;
    }
L_105fc: {//addi_get_matrix_triples
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)528LL;
    }
L_10600: {//jalr_get_matrix_triples
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
