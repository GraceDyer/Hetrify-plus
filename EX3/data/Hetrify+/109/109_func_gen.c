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
extern int move_one_ball(void*, int);



/*******************    Function: move_one_ball   *********************/
int move_one_ball(void* arg0, int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack0[6];
    c->gp_regs[sp]=(uint64_t)&stack0[6];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10000: {//addi_move_one_ball
    c->gp_regs[2] = &stack0[6];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_move_one_ball
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[40]))=(uint64_t)rs2;
    }
L_10008: {//addi_move_one_ball
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//sd_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack0)[8]))=(uint64_t)rs2;
    }
L_10010: {//addi_move_one_ball
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10014: {//sw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[4]))=(uint32_t)rs2;
    }
L_10018: {//sw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_1001c: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[4]));
    }
L_10020: {//addiw_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10024: {//bne_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10030;
    }
    }
L_10028: {//addi_move_one_ball
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1002c: {//jal_move_one_ball
    goto L_100ec;
    }
L_10030: {//addi_move_one_ball
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10034: {//sw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_10038: {//jal_move_one_ball
    goto L_10088;
    }
L_1003c: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10040: {//slli_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10044: {//ld_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10048: {//add_move_one_ball
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1004c: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[13] = rd;
    }
L_10050: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10054: {//slli_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10058: {//addi_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-4LL;
    }
L_1005c: {//ld_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10060: {//add_move_one_ball
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10064: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10068: {//addi_move_one_ball
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1006c: {//bge_move_one_ball
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_1007c;
    }
    }
L_10070: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_10074: {//addiw_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10078: {//sw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_1007c: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10080: {//addiw_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10084: {//sw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[24]))=(uint32_t)rs2;
    }
L_10088: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[24]));
    }
L_1008c: {//addi_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10090: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[4]));
    }
L_10094: {//addiw_move_one_ball
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10098: {//addiw_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1009c: {//blt_move_one_ball
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_1003c;
    }
    }
L_100a0: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[4]));
    }
L_100a4: {//slli_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_100a8: {//addi_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-4LL;
    }
L_100ac: {//ld_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_100b0: {//add_move_one_ball
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100b4: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_100b8: {//ld_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_100bc: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100c0: {//bge_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_100d0;
    }
    }
L_100c4: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_100c8: {//addiw_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100cc: {//sw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[28]))=(uint32_t)rs2;
    }
L_100d0: {//lw_move_one_ball
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[28]));
    }
L_100d4: {//addiw_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100d8: {//addi_move_one_ball
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100dc: {//blt_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_100e8;
    }
    }
L_100e0: {//addi_move_one_ball
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100e4: {//jal_move_one_ball
    goto L_100ec;
    }
L_100e8: {//addi_move_one_ball
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100ec: {//addi_move_one_ball
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100f0: {//ld_move_one_ball
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[40]));
    }
L_100f4: {//addi_move_one_ball
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_100f8: {//jalr_move_one_ball
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
