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
extern int fruit_distribution(void*, int);
extern int atoi(void*);



/*******************    Function: atoi   *********************/
int atoi(void* arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack1[6];
    c->gp_regs[sp]=(uint64_t)&stack1[6];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_atoi
    c->gp_regs[2] = &stack1[6];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_atoi
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack1)[40]))=(uint64_t)rs2;
    }
L_10008: {//addi_atoi
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//sd_atoi
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack1)[8]))=(uint64_t)rs2;
    }
L_10010: {//sw_atoi
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack1)[28]))=(uint32_t)rs2;
    }
L_10014: {//addi_atoi
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10018: {//sw_atoi
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[24]))=(uint32_t)rs2;
    }
L_1001c: {//sw_atoi
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack1)[20]))=(uint32_t)rs2;
    }
L_10020: {//ld_atoi
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack1)[8]));
    }
L_10024: {//lbu_atoi
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10028: {//addi_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1002c: {//addi_atoi
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)45LL;
    }
L_10030: {//bne_atoi
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10098;
    }
    }
L_10034: {//addi_atoi
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_10038: {//sw_atoi
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[24]))=(uint32_t)rs2;
    }
L_1003c: {//lw_atoi
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[20]));
    }
L_10040: {//addiw_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10044: {//sw_atoi
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[20]))=(uint32_t)rs2;
    }
L_10048: {//jal_atoi
    goto L_10098;
    }
L_1004c: {//lw_atoi
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_10050: {//addi_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10054: {//addi_atoi
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10058: {//slliw_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 << 2);
    }
L_1005c: {//addw_atoi
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10060: {//slliw_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 << 1);
    }
L_10064: {//addiw_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10068: {//lw_atoi
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[20]));
    }
L_1006c: {//ld_atoi
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[13] = *(int64_t*)(&(((uint8_t*)stack1)[8]));
    }
L_10070: {//add_atoi
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10074: {//lbu_atoi
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10078: {//addiw_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1007c: {//addw_atoi
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10080: {//addiw_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10084: {//addiw_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-48LL);
    }
L_10088: {//sw_atoi
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[28]))=(uint32_t)rs2;
    }
L_1008c: {//lw_atoi
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[20]));
    }
L_10090: {//addiw_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10094: {//sw_atoi
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[20]))=(uint32_t)rs2;
    }
L_10098: {//lw_atoi
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[20]));
    }
L_1009c: {//ld_atoi
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack1)[8]));
    }
L_100a0: {//add_atoi
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100a4: {//lbu_atoi
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100a8: {//bne_atoi
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1004c;
    }
    }
L_100ac: {//lw_atoi
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[24]));
    }
L_100b0: {//addi_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100b4: {//lw_atoi
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_100b8: {//mulw_atoi
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 * rs2);
    }
L_100bc: {//addiw_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c0: {//addi_atoi
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100c4: {//ld_atoi
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack1)[40]));
    }
L_100c8: {//addi_atoi
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_100cc: {//jalr_atoi
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: fruit_distribution   *********************/
int fruit_distribution(void* arg0, int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack0[34];
    c->gp_regs[sp]=(uint64_t)&stack0[34];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_100d0: {//addi_fruit_distribution
    c->gp_regs[2] = &stack0[34];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-272LL;
    }
L_100d4: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *( uint64_t*)(&(((uint8_t*)stack0)[264]))=(uint64_t)rs2;
    }
L_100d8: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[256]))=(uint64_t)rs2;
    }
L_100dc: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)272LL;
    }
L_100e0: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack0)[8]))=(uint64_t)rs2;
    }
L_100e4: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100e8: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[4]))=(uint32_t)rs2;
    }
L_100ec: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[128]))=(uint64_t)rs2;
    }
L_100f0: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[136]))=(uint64_t)rs2;
    }
L_100f4: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[144]))=(uint64_t)rs2;
    }
L_100f8: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[152]))=(uint64_t)rs2;
    }
L_100fc: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[160]))=(uint64_t)rs2;
    }
L_10100: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[168]))=(uint64_t)rs2;
    }
L_10104: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[176]))=(uint64_t)rs2;
    }
L_10108: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[184]))=(uint64_t)rs2;
    }
L_1010c: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[192]))=(uint64_t)rs2;
    }
L_10110: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[200]))=(uint64_t)rs2;
    }
L_10114: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[208]))=(uint64_t)rs2;
    }
L_10118: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[216]))=(uint64_t)rs2;
    }
L_1011c: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[224]))=(uint32_t)rs2;
    }
L_10120: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[24]))=(uint64_t)rs2;
    }
L_10124: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[32]))=(uint64_t)rs2;
    }
L_10128: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[40]))=(uint64_t)rs2;
    }
L_1012c: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[48]))=(uint64_t)rs2;
    }
L_10130: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[56]))=(uint64_t)rs2;
    }
L_10134: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[64]))=(uint64_t)rs2;
    }
L_10138: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[72]))=(uint64_t)rs2;
    }
L_1013c: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[80]))=(uint64_t)rs2;
    }
L_10140: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[88]))=(uint64_t)rs2;
    }
L_10144: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[96]))=(uint64_t)rs2;
    }
L_10148: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[104]))=(uint64_t)rs2;
    }
L_1014c: {//sd_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack0)[112]))=(uint64_t)rs2;
    }
L_10150: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[120]))=(uint32_t)rs2;
    }
L_10154: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[252]))=(uint32_t)rs2;
    }
L_10158: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[236]))=(uint32_t)rs2;
    }
L_1015c: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[248]))=(uint32_t)rs2;
    }
L_10160: {//jal_fruit_distribution
    goto L_102b0;
    }
L_10164: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[248]));
    }
L_10168: {//ld_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_1016c: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10170: {//lbu_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10174: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10178: {//addi_fruit_distribution
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)47LL;
    }
L_1017c: {//bgeu_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_10280;
    }
    }
L_10180: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[248]));
    }
L_10184: {//ld_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10188: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1018c: {//lbu_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10190: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10194: {//addi_fruit_distribution
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)57LL;
    }
L_10198: {//bltu_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_10280;
    }
    }
L_1019c: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[252]));
    }
L_101a0: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101a4: {//bne_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1020c;
    }
    }
L_101a8: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[244]))=(uint32_t)rs2;
    }
L_101ac: {//jal_fruit_distribution
    goto L_101bc;
    }
L_101b0: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[244]));
    }
L_101b4: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_101b8: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[244]))=(uint32_t)rs2;
    }
L_101bc: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[244]));
    }
L_101c0: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_101c4: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101c8: {//lbu_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-128LL);
    c->gp_regs[15] = rd;
    }
L_101cc: {//bne_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_101b0;
    }
    }
L_101d0: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[248]));
    }
L_101d4: {//ld_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_101d8: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101dc: {//lbu_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_101e0: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[244]));
    }
L_101e4: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_101e8: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101ec: {//sb_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)-128LL) = (uint8_t)rs2;
    }
L_101f0: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[244]));
    }
L_101f4: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_101f8: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101fc: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10200: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10204: {//sb_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(rs1 + (int64_t)-128LL) = (uint8_t)rs2;
    }
L_10208: {//jal_fruit_distribution
    goto L_102a0;
    }
L_1020c: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[252]));
    }
L_10210: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10214: {//addi_fruit_distribution
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10218: {//bne_fruit_distribution
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_102a0;
    }
    }
L_1021c: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[240]))=(uint32_t)rs2;
    }
L_10220: {//jal_fruit_distribution
    goto L_10230;
    }
L_10224: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[240]));
    }
L_10228: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1022c: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[240]))=(uint32_t)rs2;
    }
L_10230: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[240]));
    }
L_10234: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10238: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1023c: {//lbu_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-232LL);
    c->gp_regs[15] = rd;
    }
L_10240: {//bne_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10224;
    }
    }
L_10244: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[248]));
    }
L_10248: {//ld_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_1024c: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10250: {//lbu_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10254: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[240]));
    }
L_10258: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1025c: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10260: {//sb_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)-232LL) = (uint8_t)rs2;
    }
L_10264: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[240]));
    }
L_10268: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_1026c: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10270: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_10274: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10278: {//sb_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(rs1 + (int64_t)-232LL) = (uint8_t)rs2;
    }
L_1027c: {//jal_fruit_distribution
    goto L_102a0;
    }
L_10280: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[252]));
    }
L_10284: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10288: {//bne_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_102a4;
    }
    }
L_1028c: {//lbu_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(uint8_t*)(&(((uint8_t*)stack0)[128]));
    }
L_10290: {//beq_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_102a4;
    }
    }
L_10294: {//addi_fruit_distribution
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10298: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[252]))=(uint32_t)rs2;
    }
L_1029c: {//jal_fruit_distribution
    goto L_102a4;
    }
L_102a0: {//addi_fruit_distribution
    uint64_t rs1 = 0;
    }
L_102a4: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[248]));
    }
L_102a8: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_102ac: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[248]))=(uint32_t)rs2;
    }
L_102b0: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[248]));
    }
L_102b4: {//ld_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_102b8: {//add_fruit_distribution
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_102bc: {//lbu_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_102c0: {//bne_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10164;
    }
    }
L_102c4: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + (int64_t)-144LL;
    }
L_102c8: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_102cc: {//jal_fruit_distribution
    c->gp_regs[1] = 66256LL;
    c->gp_regs[a0] = (uint64_t)atoi(c->gp_regs[a0]);
    }
L_102d0: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_102d4: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[232]))=(uint32_t)rs2;
    }
L_102d8: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + (int64_t)-248LL;
    }
L_102dc: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_102e0: {//jal_fruit_distribution
    c->gp_regs[1] = 66276LL;
    c->gp_regs[a0] = (uint64_t)atoi(c->gp_regs[a0]);
    }
L_102e4: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_102e8: {//sw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[228]))=(uint32_t)rs2;
    }
L_102ec: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[4]));
    }
L_102f0: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_102f4: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[232]));
    }
L_102f8: {//subw_fruit_distribution
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 - rs2);
    }
L_102fc: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10300: {//lw_fruit_distribution
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int32_t*)(&(((uint8_t*)stack0)[228]));
    }
L_10304: {//subw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 - rs2);
    }
L_10308: {//addiw_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1030c: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10310: {//ld_fruit_distribution
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[1] = *(int64_t*)(&(((uint8_t*)stack0)[264]));
    }
L_10314: {//ld_fruit_distribution
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[256]));
    }
L_10318: {//addi_fruit_distribution
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)272LL;
    }
L_1031c: {//jalr_fruit_distribution
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
