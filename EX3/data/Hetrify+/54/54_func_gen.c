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
extern int same_chars(void*, void*);
extern int find_char(void*, int, char);
extern int str_len(void*);



/*******************    Function: str_len   *********************/
int str_len(void* arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack2[6];
    c->gp_regs[sp]=(uint64_t)&stack2[6];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_str_len
    c->gp_regs[2] = &stack2[6];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_str_len
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack2)[40]))=(uint64_t)rs2;
    }
L_10008: {//addi_str_len
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//sd_str_len
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack2)[8]))=(uint64_t)rs2;
    }
L_10010: {//sw_str_len
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack2)[28]))=(uint32_t)rs2;
    }
L_10014: {//jal_str_len
    goto L_10024;
    }
L_10018: {//lw_str_len
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack2)[28]));
    }
L_1001c: {//addiw_str_len
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10020: {//sw_str_len
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack2)[28]))=(uint32_t)rs2;
    }
L_10024: {//lw_str_len
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack2)[28]));
    }
L_10028: {//ld_str_len
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack2)[8]));
    }
L_1002c: {//add_str_len
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10030: {//lbu_str_len
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10034: {//bne_str_len
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10018;
    }
    }
L_10038: {//lw_str_len
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack2)[28]));
    }
L_1003c: {//addi_str_len
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10040: {//ld_str_len
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack2)[40]));
    }
L_10044: {//addi_str_len
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10048: {//jalr_str_len
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: find_char   *********************/
int find_char(void* arg0, int arg1, char arg2){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack1[6];
    c->gp_regs[sp]=(uint64_t)&stack1[6];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
L_1004c: {//addi_find_char
    c->gp_regs[2] = &stack1[6];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10050: {//sd_find_char
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack1)[40]))=(uint64_t)rs2;
    }
L_10054: {//addi_find_char
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_10058: {//sd_find_char
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack1)[8]))=(uint64_t)rs2;
    }
L_1005c: {//addi_find_char
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10060: {//addi_find_char
    uint64_t rs1 = c->gp_regs[12];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10064: {//sw_find_char
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[4]))=(uint32_t)rs2;
    }
L_10068: {//addi_find_char
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1006c: {//sb_find_char
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint8_t*)(&(((uint8_t*)stack1)[3]))=(uint8_t)rs2;
    }
L_10070: {//sw_find_char
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack1)[28]))=(uint32_t)rs2;
    }
L_10074: {//jal_find_char
    goto L_100a8;
    }
L_10078: {//lw_find_char
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_1007c: {//ld_find_char
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack1)[8]));
    }
L_10080: {//add_find_char
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10084: {//lbu_find_char
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10088: {//lbu_find_char
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(uint8_t*)(&(((uint8_t*)stack1)[3]));
    }
L_1008c: {//andi_find_char
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10090: {//bne_find_char
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1009c;
    }
    }
L_10094: {//lw_find_char
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_10098: {//jal_find_char
    goto L_100c4;
    }
L_1009c: {//lw_find_char
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_100a0: {//addiw_find_char
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100a4: {//sw_find_char
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[28]))=(uint32_t)rs2;
    }
L_100a8: {//lw_find_char
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_100ac: {//addi_find_char
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100b0: {//lw_find_char
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[4]));
    }
L_100b4: {//addiw_find_char
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100b8: {//addiw_find_char
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100bc: {//blt_find_char
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10078;
    }
    }
L_100c0: {//addi_find_char
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_100c4: {//addi_find_char
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100c8: {//ld_find_char
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack1)[40]));
    }
L_100cc: {//addi_find_char
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_100d0: {//jalr_find_char
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: same_chars   *********************/
int same_chars(void* arg0, void* arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack0[6];
    c->gp_regs[sp]=(uint64_t)&stack0[6];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_100d4: {//addi_same_chars
    c->gp_regs[2] = &stack0[6];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_100d8: {//sd_same_chars
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *( uint64_t*)(&(((uint8_t*)stack0)[40]))=(uint64_t)rs2;
    }
L_100dc: {//sd_same_chars
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[32]))=(uint64_t)rs2;
    }
L_100e0: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_100e4: {//sd_same_chars
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack0)[8]))=(uint64_t)rs2;
    }
L_100e8: {//sd_same_chars
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *( uint64_t*)(&(((uint8_t*)stack0)[0]))=(uint64_t)rs2;
    }
L_100ec: {//ld_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[10] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_100f0: {//jal_same_chars
    c->gp_regs[1] = 65780LL;
    c->gp_regs[a0] = (uint64_t)str_len(c->gp_regs[a0]);
    }
L_100f4: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100f8: {//sw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[20]))=(uint32_t)rs2;
    }
L_100fc: {//ld_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[10] = *(int64_t*)(&(((uint8_t*)stack0)[0]));
    }
L_10100: {//jal_same_chars
    c->gp_regs[1] = 65796LL;
    c->gp_regs[a0] = (uint64_t)str_len(c->gp_regs[a0]);
    }
L_10104: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10108: {//sw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[16]))=(uint32_t)rs2;
    }
L_1010c: {//sw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_10110: {//jal_same_chars
    goto L_1015c;
    }
L_10114: {//lw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_10118: {//ld_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_1011c: {//add_same_chars
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10120: {//lbu_same_chars
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10124: {//lw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[16]));
    }
L_10128: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[12] = rs1 + (int64_t)0LL;
    }
L_1012c: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[11] = rs1 + (int64_t)0LL;
    }
L_10130: {//ld_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[10] = *(int64_t*)(&(((uint8_t*)stack0)[0]));
    }
L_10134: {//jal_same_chars
    c->gp_regs[1] = 65848LL;
    c->gp_regs[a0] = (uint64_t)find_char(c->gp_regs[a0],c->gp_regs[a1],c->gp_regs[a2]);
    }
L_10138: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1013c: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10140: {//addi_same_chars
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_10144: {//bne_same_chars
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10150;
    }
    }
L_10148: {//addi_same_chars
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1014c: {//jal_same_chars
    goto L_101e0;
    }
L_10150: {//lw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_10154: {//addiw_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10158: {//sw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_1015c: {//lw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_10160: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10164: {//lw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[20]));
    }
L_10168: {//addiw_same_chars
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1016c: {//addiw_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10170: {//blt_same_chars
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10114;
    }
    }
L_10174: {//sw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_10178: {//jal_same_chars
    goto L_101c4;
    }
L_1017c: {//lw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10180: {//ld_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[0]));
    }
L_10184: {//add_same_chars
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10188: {//lbu_same_chars
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_1018c: {//lw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[20]));
    }
L_10190: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[12] = rs1 + (int64_t)0LL;
    }
L_10194: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[11] = rs1 + (int64_t)0LL;
    }
L_10198: {//ld_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[10] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_1019c: {//jal_same_chars
    c->gp_regs[1] = 65952LL;
    c->gp_regs[a0] = (uint64_t)find_char(c->gp_regs[a0],c->gp_regs[a1],c->gp_regs[a2]);
    }
L_101a0: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_101a4: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_101a8: {//addi_same_chars
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_101ac: {//bne_same_chars
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_101b8;
    }
    }
L_101b0: {//addi_same_chars
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_101b4: {//jal_same_chars
    goto L_101e0;
    }
L_101b8: {//lw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_101bc: {//addiw_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_101c0: {//sw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_101c4: {//lw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_101c8: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_101cc: {//lw_same_chars
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[16]));
    }
L_101d0: {//addiw_same_chars
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101d4: {//addiw_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101d8: {//blt_same_chars
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_1017c;
    }
    }
L_101dc: {//addi_same_chars
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_101e0: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_101e4: {//ld_same_chars
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[1] = *(int64_t*)(&(((uint8_t*)stack0)[40]));
    }
L_101e8: {//ld_same_chars
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[32]));
    }
L_101ec: {//addi_same_chars
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_101f0: {//jalr_same_chars
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
