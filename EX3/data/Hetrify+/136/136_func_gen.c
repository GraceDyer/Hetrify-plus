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
extern void largest_smallest_integers(void*, int, int*);



/*******************    Function: largest_smallest_integers   *********************/
void largest_smallest_integers(void* arg0, int arg1, int* arg2){
    cpu_t cpu;
    cpu_t *c=&cpu;
    uint64_t stack0[8];
    c->gp_regs[sp]=(uint64_t)&stack0[8];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
L_10000: {//addi_largest_smallest_integers
    c->gp_regs[2] = &stack0[8];
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-64LL;
    }
L_10004: {//sd_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *( uint64_t*)(&(((uint8_t*)stack0)[56]))=(uint64_t)rs2;
    }
L_10008: {//addi_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)64LL;
    }
L_1000c: {//sd_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *( uint64_t*)(&(((uint8_t*)stack0)[24]))=(uint64_t)rs2;
    }
L_10010: {//addi_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10014: {//sd_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[12];
    *( uint64_t*)(&(((uint8_t*)stack0)[8]))=(uint64_t)rs2;
    }
L_10018: {//sw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[20]))=(uint32_t)rs2;
    }
L_1001c: {//sw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[44]))=(uint32_t)rs2;
    }
L_10020: {//sw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[40]))=(uint32_t)rs2;
    }
L_10024: {//sw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *( uint32_t*)(&(((uint8_t*)stack0)[36]))=(uint32_t)rs2;
    }
L_10028: {//jal_largest_smallest_integers
    goto L_100f0;
    }
L_1002c: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[36]));
    }
L_10030: {//slli_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10034: {//ld_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10038: {//add_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1003c: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10040: {//bge_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10088;
    }
    }
L_10044: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[44]));
    }
L_10048: {//addiw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1004c: {//beq_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10070;
    }
    }
L_10050: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[36]));
    }
L_10054: {//slli_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10058: {//ld_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[24]));
    }
L_1005c: {//add_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10060: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10064: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[44]));
    }
L_10068: {//addiw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1006c: {//bge_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10088;
    }
    }
L_10070: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[36]));
    }
L_10074: {//slli_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10078: {//ld_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[24]));
    }
L_1007c: {//add_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10080: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10084: {//sw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[44]))=(uint32_t)rs2;
    }
L_10088: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[36]));
    }
L_1008c: {//slli_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_10090: {//ld_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[24]));
    }
L_10094: {//add_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10098: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_1009c: {//bge_largest_smallest_integers
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_100e4;
    }
    }
L_100a0: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[40]));
    }
L_100a4: {//addiw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a8: {//beq_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100cc;
    }
    }
L_100ac: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[36]));
    }
L_100b0: {//slli_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_100b4: {//ld_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[24]));
    }
L_100b8: {//add_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100bc: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_100c0: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[40]));
    }
L_100c4: {//addiw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c8: {//bge_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_100e4;
    }
    }
L_100cc: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[36]));
    }
L_100d0: {//slli_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 2;
    }
L_100d4: {//ld_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int64_t*)(&(((uint8_t*)stack0)[24]));
    }
L_100d8: {//add_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_100dc: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100e0: {//sw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[40]))=(uint32_t)rs2;
    }
L_100e4: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[36]));
    }
L_100e8: {//addiw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_100ec: {//sw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *( uint32_t*)(&(((uint8_t*)stack0)[36]))=(uint32_t)rs2;
    }
L_100f0: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[36]));
    }
L_100f4: {//addi_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100f8: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int32_t*)(&(((uint8_t*)stack0)[20]));
    }
L_100fc: {//addiw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10100: {//addiw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10104: {//blt_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_1002c;
    }
    }
L_10108: {//ld_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_1010c: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int32_t*)(&(((uint8_t*)stack0)[44]));
    }
L_10110: {//sw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10114: {//ld_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[15] = *(int64_t*)(&(((uint8_t*)stack0)[8]));
    }
L_10118: {//addi_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)4LL;
    }
L_1011c: {//lw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[14] = *(int32_t*)(&(((uint8_t*)stack0)[40]));
    }
L_10120: {//sw_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10124: {//addi_largest_smallest_integers
    uint64_t rs1 = 0;
    }
L_10128: {//ld_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = *(int64_t*)(&(((uint8_t*)stack0)[56]));
    }
L_1012c: {//addi_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)64LL;
    }
L_10130: {//jalr_largest_smallest_integers
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
