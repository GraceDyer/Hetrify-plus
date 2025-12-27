#include <stdint.h>
#include <string.h>
#include <assert.h>
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
int assert_ret1 = 1;
uint64_t stack0[36];
uint64_t stack1[8];
uint64_t stack2[6];
uint64_t stack3[2];
extern int32_t start(cpu_t *c);
extern void rangesum(cpu_t *c);
extern void init_nondet(cpu_t *c);
extern void reach_error(cpu_t *c);



/*******************    Function: reach_error   *********************/
void reach_error(cpu_t *c) { 
L_10000: {//addi_reach_error
    c->gp_regs[2] = &stack3[2];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-16LL;
    }
L_10004: {//sd_reach_error
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack3)[8]))=(uint64_t)rs2;
    }
L_10008: {//addi_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)16LL;
    }
L_1000c: {//lui_reach_error
    c->gp_regs[15] = 65536LL;
    }
L_10010: {//sw_reach_error
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&assert_ret1) = (uint32_t)rs2;
    }
L_10014: {//addi_reach_error
    uint64_t rs1 = 0;
    }
L_10018: {//ld_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack3)[8]));
    }
L_1001c: {//addi_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)16LL;
    }
L_10020: {//jalr_reach_error
    uint64_t rs1 = c->gp_regs[1];
    }
}



/*******************    Function: init_nondet   *********************/
void init_nondet(cpu_t *c) { 
L_10024: {//addi_init_nondet
    c->gp_regs[2] = &stack2[6];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10028: {//sd_init_nondet
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack2)[40]))=(uint64_t)rs2;
    }
L_1002c: {//addi_init_nondet
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_10030: {//sd_init_nondet
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack2)[8]))=(uint64_t)rs2;
    }
L_10034: {//sw_init_nondet
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack2)[28]))=(uint32_t)rs2;
    }
L_10038: {//jal_init_nondet
    goto L_10048;
    }
L_1003c: {//lw_init_nondet
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack2)[28]));
    }
L_10040: {//addiw_init_nondet
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10044: {//sw_init_nondet
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack2)[28]))=(uint32_t)rs2;
    }
L_10048: {//lw_init_nondet
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack2)[28]));
    }
L_1004c: {//addiw_init_nondet
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10050: {//addi_init_nondet
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)59LL;
    }
L_10054: {//bge_init_nondet
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_1003c;
    }
    }
L_10058: {//addi_init_nondet
    uint64_t rs1 = 0;
    }
L_1005c: {//addi_init_nondet
    uint64_t rs1 = 0;
    }
L_10060: {//ld_init_nondet
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack2)[40]));
    }
L_10064: {//addi_init_nondet
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10068: {//jalr_init_nondet
    uint64_t rs1 = c->gp_regs[1];
    }
}



/*******************    Function: rangesum   *********************/
void rangesum(cpu_t *c) { 
L_1006c: {//addi_rangesum
    c->gp_regs[2] = &stack1[8];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-64LL;
    }
L_10070: {//sd_rangesum
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack1)[56]))=(uint64_t)rs2;
    }
L_10074: {//addi_rangesum
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)64LL;
    }
L_10078: {//sd_rangesum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack1)[8]))=(uint64_t)rs2;
    }
L_1007c: {//sd_rangesum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint64_t*)(&(((uint8_t*)stack1)[32]))=(uint64_t)rs2;
    }
L_10080: {//sw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack1)[28]))=(uint32_t)rs2;
    }
L_10084: {//sw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack1)[44]))=(uint32_t)rs2;
    }
L_10088: {//jal_rangesum
    goto L_100d8;
    }
L_1008c: {//lw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[44]));
    }
L_10090: {//addiw_rangesum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10094: {//addi_rangesum
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)30LL;
    }
L_10098: {//bge_rangesum
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_100cc;
    }
    }
L_1009c: {//lw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[44]));
    }
L_100a0: {//slli_rangesum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_100a4: {//ld_rangesum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack1)[8]));
    }
L_100a8: {//add_rangesum
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100ac: {//lw_rangesum
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100b0: {//addi_rangesum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100b4: {//ld_rangesum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack1)[32]));
    }
L_100b8: {//add_rangesum
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100bc: {//sd_rangesum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint64_t*)(&(((uint8_t*)stack1)[32]))=(uint64_t)rs2;
    }
L_100c0: {//lw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_100c4: {//addiw_rangesum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100c8: {//sw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[28]))=(uint32_t)rs2;
    }
L_100cc: {//lw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[44]));
    }
L_100d0: {//addiw_rangesum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100d4: {//sw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack1)[44]))=(uint32_t)rs2;
    }
L_100d8: {//lw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[44]));
    }
L_100dc: {//addiw_rangesum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100e0: {//addi_rangesum
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)59LL;
    }
L_100e4: {//bge_rangesum
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_1008c;
    }
    }
L_100e8: {//lw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_100ec: {//addiw_rangesum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100f0: {//beq_rangesum
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10108;
    }
    }
L_100f4: {//lw_rangesum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack1)[28]));
    }
L_100f8: {//ld_rangesum
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack1)[32]));
    }
L_100fc: {//div_rangesum
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    uint64_t rd = 0;                                   
    if (rs2 == 0) {                                    
        rd = UINT64_MAX;                               
    } else if (rs1 == INT64_MIN && rs2 == UINT64_MAX) {
        rd = INT64_MIN;                                
    } else {                                           
        rd = (int64_t)rs1 / (int64_t)rs2;              
    }                                                  
    c->gp_regs[15] = rd;
    }
L_10100: {//addiw_rangesum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10104: {//jal_rangesum
    goto L_1010c;
    }
L_10108: {//addi_rangesum
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1010c: {//addi_rangesum
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10110: {//ld_rangesum
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack1)[56]));
    }
L_10114: {//addi_rangesum
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)64LL;
    }
L_10118: {//jalr_rangesum
    uint64_t rs1 = c->gp_regs[1];
    }
}



/*******************    Function: main   *********************/
int32_t start(cpu_t *c) { 
L_1011c: {//addi_main
    c->gp_regs[2] = &stack0[36];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-288LL;
    }
L_10120: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *( uint64_t*)(&(((uint8_t*)stack0)[280]))=(uint64_t)rs2;
    }
L_10124: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[272]))=(uint64_t)rs2;
    }
L_10128: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)288LL;
    }
L_1012c: {//addi_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + (int64_t)-280LL;
    }
L_10130: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10134: {//jal_main
    c->gp_regs[1] = 65848LL;
    init_nondet(c);
    }
L_10138: {//addi_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + (int64_t)-280LL;
    }
L_1013c: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10140: {//jal_main
    c->gp_regs[1] = 65860LL;
    rangesum(c);
    }
L_10144: {//addi_main
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10148: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[264]))=(uint32_t)rs2;
    }
L_1014c: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10150: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[260]))=(uint32_t)rs2;
    }
L_10154: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[12]));
    }
L_10158: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[8]))=(uint32_t)rs2;
    }
L_1015c: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[260]));
    }
L_10160: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[12]))=(uint32_t)rs2;
    }
L_10164: {//addi_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + (int64_t)-280LL;
    }
L_10168: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1016c: {//jal_main
    c->gp_regs[1] = 65904LL;
    rangesum(c);
    }
L_10170: {//addi_main
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10174: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[256]))=(uint32_t)rs2;
    }
L_10178: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[8]));
    }
L_1017c: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[260]))=(uint32_t)rs2;
    }
L_10180: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[268]))=(uint32_t)rs2;
    }
L_10184: {//jal_main
    goto L_101c4;
    }
L_10188: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[268]));
    }
L_1018c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10190: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10194: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10198: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_1019c: {//add_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101a0: {//lw_main
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-264LL);
    c->gp_regs[14] = rd;
    }
L_101a4: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[268]));
    }
L_101a8: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_101ac: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-16LL;
    }
L_101b0: {//add_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101b4: {//sw_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)-264LL) = (uint32_t)rs2;
    }
L_101b8: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[268]));
    }
L_101bc: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_101c0: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[268]))=(uint32_t)rs2;
    }
L_101c4: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[268]));
    }
L_101c8: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101cc: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)58LL;
    }
L_101d0: {//bge_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10188;
    }
    }
L_101d4: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[260]));
    }
L_101d8: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[244]))=(uint32_t)rs2;
    }
L_101dc: {//addi_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = rs1 + (int64_t)-280LL;
    }
L_101e0: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_101e4: {//jal_main
    c->gp_regs[1] = 66024LL;
    rangesum(c);
    }
L_101e8: {//addi_main
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_101ec: {//sw_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[252]))=(uint32_t)rs2;
    }
L_101f0: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[264]));
    }
L_101f4: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_101f8: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[256]));
    }
L_101fc: {//addiw_main
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10200: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10204: {//bne_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10220;
    }
    }
L_10208: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[264]));
    }
L_1020c: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10210: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[252]));
    }
L_10214: {//addiw_main
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10218: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1021c: {//beq_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10224;
    }
    }
L_10220: {//jal_main
    c->gp_regs[1] = 66084LL;
    reach_error(c);
    }
L_10224: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10228: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1022c: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[1] = *(int64_t*)(&(((uint8_t*)stack0)[280]));
    }
L_10230: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[272]));
    }
L_10234: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)288LL;
    }
L_10238: {//jalr_main
    uint64_t rs1 = c->gp_regs[1];
    }
}
int32_t main() {                                     
    cpu_t cpu={0};                                 
    cpu_t *c=&cpu;                                 
    uint64_t tmp_stack00;
    stack0[0] = tmp_stack00;
    uint64_t tmp_stack01;
    stack0[1] = tmp_stack01;
    uint64_t tmp_stack02;
    stack0[2] = tmp_stack02;
    uint64_t tmp_stack03;
    stack0[3] = tmp_stack03;
    uint64_t tmp_stack04;
    stack0[4] = tmp_stack04;
    uint64_t tmp_stack05;
    stack0[5] = tmp_stack05;
    uint64_t tmp_stack06;
    stack0[6] = tmp_stack06;
    uint64_t tmp_stack07;
    stack0[7] = tmp_stack07;
    uint64_t tmp_stack08;
    stack0[8] = tmp_stack08;
    uint64_t tmp_stack09;
    stack0[9] = tmp_stack09;
    uint64_t tmp_stack010;
    stack0[10] = tmp_stack010;
    uint64_t tmp_stack011;
    stack0[11] = tmp_stack011;
    uint64_t tmp_stack012;
    stack0[12] = tmp_stack012;
    uint64_t tmp_stack013;
    stack0[13] = tmp_stack013;
    uint64_t tmp_stack014;
    stack0[14] = tmp_stack014;
    uint64_t tmp_stack015;
    stack0[15] = tmp_stack015;
    uint64_t tmp_stack016;
    stack0[16] = tmp_stack016;
    uint64_t tmp_stack017;
    stack0[17] = tmp_stack017;
    uint64_t tmp_stack018;
    stack0[18] = tmp_stack018;
    uint64_t tmp_stack019;
    stack0[19] = tmp_stack019;
    uint64_t tmp_stack020;
    stack0[20] = tmp_stack020;
    uint64_t tmp_stack021;
    stack0[21] = tmp_stack021;
    uint64_t tmp_stack022;
    stack0[22] = tmp_stack022;
    uint64_t tmp_stack023;
    stack0[23] = tmp_stack023;
    uint64_t tmp_stack024;
    stack0[24] = tmp_stack024;
    uint64_t tmp_stack025;
    stack0[25] = tmp_stack025;
    uint64_t tmp_stack026;
    stack0[26] = tmp_stack026;
    uint64_t tmp_stack027;
    stack0[27] = tmp_stack027;
    uint64_t tmp_stack028;
    stack0[28] = tmp_stack028;
    uint64_t tmp_stack029;
    stack0[29] = tmp_stack029;
    uint64_t tmp_stack030;
    stack0[30] = tmp_stack030;
    uint64_t tmp_stack031;
    stack0[31] = tmp_stack031;
    uint64_t tmp_stack032;
    stack0[32] = tmp_stack032;
    uint64_t tmp_stack033;
    stack0[33] = tmp_stack033;
    uint64_t tmp_stack034;
    stack0[34] = tmp_stack034;
    uint64_t tmp_stack035;
    stack0[35] = tmp_stack035;
    uint64_t tmp_stack10;
    stack1[0] = tmp_stack10;
    uint64_t tmp_stack11;
    stack1[1] = tmp_stack11;
    uint64_t tmp_stack12;
    stack1[2] = tmp_stack12;
    uint64_t tmp_stack13;
    stack1[3] = tmp_stack13;
    uint64_t tmp_stack14;
    stack1[4] = tmp_stack14;
    uint64_t tmp_stack15;
    stack1[5] = tmp_stack15;
    uint64_t tmp_stack16;
    stack1[6] = tmp_stack16;
    uint64_t tmp_stack17;
    stack1[7] = tmp_stack17;
    uint64_t tmp_stack20;
    stack2[0] = tmp_stack20;
    uint64_t tmp_stack21;
    stack2[1] = tmp_stack21;
    uint64_t tmp_stack22;
    stack2[2] = tmp_stack22;
    uint64_t tmp_stack23;
    stack2[3] = tmp_stack23;
    uint64_t tmp_stack24;
    stack2[4] = tmp_stack24;
    uint64_t tmp_stack25;
    stack2[5] = tmp_stack25;
    uint64_t tmp_stack30;
    stack3[0] = tmp_stack30;
    uint64_t tmp_stack31;
    stack3[1] = tmp_stack31;
    c->gp_regs[2]= 0;
    c->gp_regs[0]= 0;
    /**************Pls input your assume expr, setting the args by the pointers of args (p_arg0 ~ p_arg7)*************/ 



    /****************************************************************************************************************/
    start(c);                     
    uint64_t ret= cpu.gp_regs[a0];                      
    /************************************************ Pls input your assert expr ********************************/
	assert(assert_ret1 == 1);



    /************************************************************************************************************/
    return 0;                               
}                                      
