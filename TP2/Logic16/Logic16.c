/********
* ec2c version 0.68
* c file generated for node : Logic16 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Logic16_EC2C_SRC_FILE
#include "Logic16.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a_0;
   _boolean _a_1;
   _boolean _a_2;
   _boolean _a_3;
   _boolean _a_4;
   _boolean _a_5;
   _boolean _a_6;
   _boolean _a_7;
   _boolean _a_8;
   _boolean _a_9;
   _boolean _a_10;
   _boolean _a_11;
   _boolean _a_12;
   _boolean _a_13;
   _boolean _a_14;
   _boolean _a_15;
   _boolean _b_0;
   _boolean _b_1;
   _boolean _b_2;
   _boolean _b_3;
   _boolean _b_4;
   _boolean _b_5;
   _boolean _b_6;
   _boolean _b_7;
   _boolean _b_8;
   _boolean _b_9;
   _boolean _b_10;
   _boolean _b_11;
   _boolean _b_12;
   _boolean _b_13;
   _boolean _b_14;
   _boolean _b_15;
   //OUTPUTS
   _boolean _And_0;
   _boolean _And_1;
   _boolean _And_2;
   _boolean _And_3;
   _boolean _And_4;
   _boolean _And_5;
   _boolean _And_6;
   _boolean _And_7;
   _boolean _And_8;
   _boolean _And_9;
   _boolean _And_10;
   _boolean _And_11;
   _boolean _And_12;
   _boolean _And_13;
   _boolean _And_14;
   _boolean _And_15;
   _boolean _Nand_0;
   _boolean _Nand_1;
   _boolean _Nand_2;
   _boolean _Nand_3;
   _boolean _Nand_4;
   _boolean _Nand_5;
   _boolean _Nand_6;
   _boolean _Nand_7;
   _boolean _Nand_8;
   _boolean _Nand_9;
   _boolean _Nand_10;
   _boolean _Nand_11;
   _boolean _Nand_12;
   _boolean _Nand_13;
   _boolean _Nand_14;
   _boolean _Nand_15;
   _boolean _Or_0;
   _boolean _Or_1;
   _boolean _Or_2;
   _boolean _Or_3;
   _boolean _Or_4;
   _boolean _Or_5;
   _boolean _Or_6;
   _boolean _Or_7;
   _boolean _Or_8;
   _boolean _Or_9;
   _boolean _Or_10;
   _boolean _Or_11;
   _boolean _Or_12;
   _boolean _Or_13;
   _boolean _Or_14;
   _boolean _Or_15;
   _boolean _Xor_0;
   _boolean _Xor_1;
   _boolean _Xor_2;
   _boolean _Xor_3;
   _boolean _Xor_4;
   _boolean _Xor_5;
   _boolean _Xor_6;
   _boolean _Xor_7;
   _boolean _Xor_8;
   _boolean _Xor_9;
   _boolean _Xor_10;
   _boolean _Xor_11;
   _boolean _Xor_12;
   _boolean _Xor_13;
   _boolean _Xor_14;
   _boolean _Xor_15;
   //REGISTERS
} Logic16_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Logic16_I_a_0(Logic16_ctx* ctx, _boolean V){
   ctx->_a_0 = V;
}
void Logic16_I_a_1(Logic16_ctx* ctx, _boolean V){
   ctx->_a_1 = V;
}
void Logic16_I_a_2(Logic16_ctx* ctx, _boolean V){
   ctx->_a_2 = V;
}
void Logic16_I_a_3(Logic16_ctx* ctx, _boolean V){
   ctx->_a_3 = V;
}
void Logic16_I_a_4(Logic16_ctx* ctx, _boolean V){
   ctx->_a_4 = V;
}
void Logic16_I_a_5(Logic16_ctx* ctx, _boolean V){
   ctx->_a_5 = V;
}
void Logic16_I_a_6(Logic16_ctx* ctx, _boolean V){
   ctx->_a_6 = V;
}
void Logic16_I_a_7(Logic16_ctx* ctx, _boolean V){
   ctx->_a_7 = V;
}
void Logic16_I_a_8(Logic16_ctx* ctx, _boolean V){
   ctx->_a_8 = V;
}
void Logic16_I_a_9(Logic16_ctx* ctx, _boolean V){
   ctx->_a_9 = V;
}
void Logic16_I_a_10(Logic16_ctx* ctx, _boolean V){
   ctx->_a_10 = V;
}
void Logic16_I_a_11(Logic16_ctx* ctx, _boolean V){
   ctx->_a_11 = V;
}
void Logic16_I_a_12(Logic16_ctx* ctx, _boolean V){
   ctx->_a_12 = V;
}
void Logic16_I_a_13(Logic16_ctx* ctx, _boolean V){
   ctx->_a_13 = V;
}
void Logic16_I_a_14(Logic16_ctx* ctx, _boolean V){
   ctx->_a_14 = V;
}
void Logic16_I_a_15(Logic16_ctx* ctx, _boolean V){
   ctx->_a_15 = V;
}
void Logic16_I_b_0(Logic16_ctx* ctx, _boolean V){
   ctx->_b_0 = V;
}
void Logic16_I_b_1(Logic16_ctx* ctx, _boolean V){
   ctx->_b_1 = V;
}
void Logic16_I_b_2(Logic16_ctx* ctx, _boolean V){
   ctx->_b_2 = V;
}
void Logic16_I_b_3(Logic16_ctx* ctx, _boolean V){
   ctx->_b_3 = V;
}
void Logic16_I_b_4(Logic16_ctx* ctx, _boolean V){
   ctx->_b_4 = V;
}
void Logic16_I_b_5(Logic16_ctx* ctx, _boolean V){
   ctx->_b_5 = V;
}
void Logic16_I_b_6(Logic16_ctx* ctx, _boolean V){
   ctx->_b_6 = V;
}
void Logic16_I_b_7(Logic16_ctx* ctx, _boolean V){
   ctx->_b_7 = V;
}
void Logic16_I_b_8(Logic16_ctx* ctx, _boolean V){
   ctx->_b_8 = V;
}
void Logic16_I_b_9(Logic16_ctx* ctx, _boolean V){
   ctx->_b_9 = V;
}
void Logic16_I_b_10(Logic16_ctx* ctx, _boolean V){
   ctx->_b_10 = V;
}
void Logic16_I_b_11(Logic16_ctx* ctx, _boolean V){
   ctx->_b_11 = V;
}
void Logic16_I_b_12(Logic16_ctx* ctx, _boolean V){
   ctx->_b_12 = V;
}
void Logic16_I_b_13(Logic16_ctx* ctx, _boolean V){
   ctx->_b_13 = V;
}
void Logic16_I_b_14(Logic16_ctx* ctx, _boolean V){
   ctx->_b_14 = V;
}
void Logic16_I_b_15(Logic16_ctx* ctx, _boolean V){
   ctx->_b_15 = V;
}
extern void Logic16_O_And_0(void* cdata, _boolean);
extern void Logic16_O_And_1(void* cdata, _boolean);
extern void Logic16_O_And_2(void* cdata, _boolean);
extern void Logic16_O_And_3(void* cdata, _boolean);
extern void Logic16_O_And_4(void* cdata, _boolean);
extern void Logic16_O_And_5(void* cdata, _boolean);
extern void Logic16_O_And_6(void* cdata, _boolean);
extern void Logic16_O_And_7(void* cdata, _boolean);
extern void Logic16_O_And_8(void* cdata, _boolean);
extern void Logic16_O_And_9(void* cdata, _boolean);
extern void Logic16_O_And_10(void* cdata, _boolean);
extern void Logic16_O_And_11(void* cdata, _boolean);
extern void Logic16_O_And_12(void* cdata, _boolean);
extern void Logic16_O_And_13(void* cdata, _boolean);
extern void Logic16_O_And_14(void* cdata, _boolean);
extern void Logic16_O_And_15(void* cdata, _boolean);
extern void Logic16_O_Nand_0(void* cdata, _boolean);
extern void Logic16_O_Nand_1(void* cdata, _boolean);
extern void Logic16_O_Nand_2(void* cdata, _boolean);
extern void Logic16_O_Nand_3(void* cdata, _boolean);
extern void Logic16_O_Nand_4(void* cdata, _boolean);
extern void Logic16_O_Nand_5(void* cdata, _boolean);
extern void Logic16_O_Nand_6(void* cdata, _boolean);
extern void Logic16_O_Nand_7(void* cdata, _boolean);
extern void Logic16_O_Nand_8(void* cdata, _boolean);
extern void Logic16_O_Nand_9(void* cdata, _boolean);
extern void Logic16_O_Nand_10(void* cdata, _boolean);
extern void Logic16_O_Nand_11(void* cdata, _boolean);
extern void Logic16_O_Nand_12(void* cdata, _boolean);
extern void Logic16_O_Nand_13(void* cdata, _boolean);
extern void Logic16_O_Nand_14(void* cdata, _boolean);
extern void Logic16_O_Nand_15(void* cdata, _boolean);
extern void Logic16_O_Or_0(void* cdata, _boolean);
extern void Logic16_O_Or_1(void* cdata, _boolean);
extern void Logic16_O_Or_2(void* cdata, _boolean);
extern void Logic16_O_Or_3(void* cdata, _boolean);
extern void Logic16_O_Or_4(void* cdata, _boolean);
extern void Logic16_O_Or_5(void* cdata, _boolean);
extern void Logic16_O_Or_6(void* cdata, _boolean);
extern void Logic16_O_Or_7(void* cdata, _boolean);
extern void Logic16_O_Or_8(void* cdata, _boolean);
extern void Logic16_O_Or_9(void* cdata, _boolean);
extern void Logic16_O_Or_10(void* cdata, _boolean);
extern void Logic16_O_Or_11(void* cdata, _boolean);
extern void Logic16_O_Or_12(void* cdata, _boolean);
extern void Logic16_O_Or_13(void* cdata, _boolean);
extern void Logic16_O_Or_14(void* cdata, _boolean);
extern void Logic16_O_Or_15(void* cdata, _boolean);
extern void Logic16_O_Xor_0(void* cdata, _boolean);
extern void Logic16_O_Xor_1(void* cdata, _boolean);
extern void Logic16_O_Xor_2(void* cdata, _boolean);
extern void Logic16_O_Xor_3(void* cdata, _boolean);
extern void Logic16_O_Xor_4(void* cdata, _boolean);
extern void Logic16_O_Xor_5(void* cdata, _boolean);
extern void Logic16_O_Xor_6(void* cdata, _boolean);
extern void Logic16_O_Xor_7(void* cdata, _boolean);
extern void Logic16_O_Xor_8(void* cdata, _boolean);
extern void Logic16_O_Xor_9(void* cdata, _boolean);
extern void Logic16_O_Xor_10(void* cdata, _boolean);
extern void Logic16_O_Xor_11(void* cdata, _boolean);
extern void Logic16_O_Xor_12(void* cdata, _boolean);
extern void Logic16_O_Xor_13(void* cdata, _boolean);
extern void Logic16_O_Xor_14(void* cdata, _boolean);
extern void Logic16_O_Xor_15(void* cdata, _boolean);
#ifdef CKCHECK
extern void Logic16_BOT_And_0(void* cdata);
extern void Logic16_BOT_And_1(void* cdata);
extern void Logic16_BOT_And_2(void* cdata);
extern void Logic16_BOT_And_3(void* cdata);
extern void Logic16_BOT_And_4(void* cdata);
extern void Logic16_BOT_And_5(void* cdata);
extern void Logic16_BOT_And_6(void* cdata);
extern void Logic16_BOT_And_7(void* cdata);
extern void Logic16_BOT_And_8(void* cdata);
extern void Logic16_BOT_And_9(void* cdata);
extern void Logic16_BOT_And_10(void* cdata);
extern void Logic16_BOT_And_11(void* cdata);
extern void Logic16_BOT_And_12(void* cdata);
extern void Logic16_BOT_And_13(void* cdata);
extern void Logic16_BOT_And_14(void* cdata);
extern void Logic16_BOT_And_15(void* cdata);
extern void Logic16_BOT_Nand_0(void* cdata);
extern void Logic16_BOT_Nand_1(void* cdata);
extern void Logic16_BOT_Nand_2(void* cdata);
extern void Logic16_BOT_Nand_3(void* cdata);
extern void Logic16_BOT_Nand_4(void* cdata);
extern void Logic16_BOT_Nand_5(void* cdata);
extern void Logic16_BOT_Nand_6(void* cdata);
extern void Logic16_BOT_Nand_7(void* cdata);
extern void Logic16_BOT_Nand_8(void* cdata);
extern void Logic16_BOT_Nand_9(void* cdata);
extern void Logic16_BOT_Nand_10(void* cdata);
extern void Logic16_BOT_Nand_11(void* cdata);
extern void Logic16_BOT_Nand_12(void* cdata);
extern void Logic16_BOT_Nand_13(void* cdata);
extern void Logic16_BOT_Nand_14(void* cdata);
extern void Logic16_BOT_Nand_15(void* cdata);
extern void Logic16_BOT_Or_0(void* cdata);
extern void Logic16_BOT_Or_1(void* cdata);
extern void Logic16_BOT_Or_2(void* cdata);
extern void Logic16_BOT_Or_3(void* cdata);
extern void Logic16_BOT_Or_4(void* cdata);
extern void Logic16_BOT_Or_5(void* cdata);
extern void Logic16_BOT_Or_6(void* cdata);
extern void Logic16_BOT_Or_7(void* cdata);
extern void Logic16_BOT_Or_8(void* cdata);
extern void Logic16_BOT_Or_9(void* cdata);
extern void Logic16_BOT_Or_10(void* cdata);
extern void Logic16_BOT_Or_11(void* cdata);
extern void Logic16_BOT_Or_12(void* cdata);
extern void Logic16_BOT_Or_13(void* cdata);
extern void Logic16_BOT_Or_14(void* cdata);
extern void Logic16_BOT_Or_15(void* cdata);
extern void Logic16_BOT_Xor_0(void* cdata);
extern void Logic16_BOT_Xor_1(void* cdata);
extern void Logic16_BOT_Xor_2(void* cdata);
extern void Logic16_BOT_Xor_3(void* cdata);
extern void Logic16_BOT_Xor_4(void* cdata);
extern void Logic16_BOT_Xor_5(void* cdata);
extern void Logic16_BOT_Xor_6(void* cdata);
extern void Logic16_BOT_Xor_7(void* cdata);
extern void Logic16_BOT_Xor_8(void* cdata);
extern void Logic16_BOT_Xor_9(void* cdata);
extern void Logic16_BOT_Xor_10(void* cdata);
extern void Logic16_BOT_Xor_11(void* cdata);
extern void Logic16_BOT_Xor_12(void* cdata);
extern void Logic16_BOT_Xor_13(void* cdata);
extern void Logic16_BOT_Xor_14(void* cdata);
extern void Logic16_BOT_Xor_15(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Logic16_reset_input(Logic16_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Logic16_reset(Logic16_ctx* ctx){
   Logic16_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Logic16_copy_ctx(Logic16_ctx* dest, Logic16_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Logic16_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Logic16_ctx* Logic16_new_ctx(void* cdata){
   Logic16_ctx* ctx = (Logic16_ctx*)calloc(1, sizeof(Logic16_ctx));
   ctx->client_data = cdata;
   Logic16_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Logic16_step(Logic16_ctx* ctx){
//LOCAL VARIABLES
   _boolean L32;
   _boolean L35;
   _boolean L37;
   _boolean L39;
   _boolean L41;
   _boolean L43;
   _boolean L45;
   _boolean L47;
   _boolean L49;
   _boolean L51;
   _boolean L53;
   _boolean L55;
   _boolean L57;
   _boolean L59;
   _boolean L61;
   _boolean L63;
   _boolean L65;
   _boolean L67;
   _boolean L69;
   _boolean L71;
   _boolean L73;
   _boolean L75;
   _boolean L77;
   _boolean L79;
   _boolean L81;
   _boolean L83;
   _boolean L85;
   _boolean L87;
   _boolean L89;
   _boolean L91;
   _boolean L93;
   _boolean L95;
   _boolean L97;
   _boolean L99;
   _boolean L101;
   _boolean L103;
   _boolean L105;
   _boolean L107;
   _boolean L109;
   _boolean L111;
   _boolean L113;
   _boolean L115;
   _boolean L117;
   _boolean L119;
   _boolean L121;
   _boolean L123;
   _boolean L125;
   _boolean L127;
   _boolean L129;
   _boolean L131;
   _boolean L133;
   _boolean L135;
   _boolean L137;
   _boolean L139;
   _boolean L141;
   _boolean L143;
   _boolean L145;
   _boolean L147;
   _boolean L149;
   _boolean L151;
   _boolean L153;
   _boolean L155;
   _boolean L157;
   _boolean L159;
//CODE
   L32 = (ctx->_a_0 && ctx->_b_0);
   Logic16_O_And_0(ctx->client_data, L32);
   L35 = (ctx->_a_1 && ctx->_b_1);
   Logic16_O_And_1(ctx->client_data, L35);
   L37 = (ctx->_a_2 && ctx->_b_2);
   Logic16_O_And_2(ctx->client_data, L37);
   L39 = (ctx->_a_3 && ctx->_b_3);
   Logic16_O_And_3(ctx->client_data, L39);
   L41 = (ctx->_a_4 && ctx->_b_4);
   Logic16_O_And_4(ctx->client_data, L41);
   L43 = (ctx->_a_5 && ctx->_b_5);
   Logic16_O_And_5(ctx->client_data, L43);
   L45 = (ctx->_a_6 && ctx->_b_6);
   Logic16_O_And_6(ctx->client_data, L45);
   L47 = (ctx->_a_7 && ctx->_b_7);
   Logic16_O_And_7(ctx->client_data, L47);
   L49 = (ctx->_a_8 && ctx->_b_8);
   Logic16_O_And_8(ctx->client_data, L49);
   L51 = (ctx->_a_9 && ctx->_b_9);
   Logic16_O_And_9(ctx->client_data, L51);
   L53 = (ctx->_a_10 && ctx->_b_10);
   Logic16_O_And_10(ctx->client_data, L53);
   L55 = (ctx->_a_11 && ctx->_b_11);
   Logic16_O_And_11(ctx->client_data, L55);
   L57 = (ctx->_a_12 && ctx->_b_12);
   Logic16_O_And_12(ctx->client_data, L57);
   L59 = (ctx->_a_13 && ctx->_b_13);
   Logic16_O_And_13(ctx->client_data, L59);
   L61 = (ctx->_a_14 && ctx->_b_14);
   Logic16_O_And_14(ctx->client_data, L61);
   L63 = (ctx->_a_15 && ctx->_b_15);
   Logic16_O_And_15(ctx->client_data, L63);
   L65 = (! L32);
   Logic16_O_Nand_0(ctx->client_data, L65);
   L67 = (! L35);
   Logic16_O_Nand_1(ctx->client_data, L67);
   L69 = (! L37);
   Logic16_O_Nand_2(ctx->client_data, L69);
   L71 = (! L39);
   Logic16_O_Nand_3(ctx->client_data, L71);
   L73 = (! L41);
   Logic16_O_Nand_4(ctx->client_data, L73);
   L75 = (! L43);
   Logic16_O_Nand_5(ctx->client_data, L75);
   L77 = (! L45);
   Logic16_O_Nand_6(ctx->client_data, L77);
   L79 = (! L47);
   Logic16_O_Nand_7(ctx->client_data, L79);
   L81 = (! L49);
   Logic16_O_Nand_8(ctx->client_data, L81);
   L83 = (! L51);
   Logic16_O_Nand_9(ctx->client_data, L83);
   L85 = (! L53);
   Logic16_O_Nand_10(ctx->client_data, L85);
   L87 = (! L55);
   Logic16_O_Nand_11(ctx->client_data, L87);
   L89 = (! L57);
   Logic16_O_Nand_12(ctx->client_data, L89);
   L91 = (! L59);
   Logic16_O_Nand_13(ctx->client_data, L91);
   L93 = (! L61);
   Logic16_O_Nand_14(ctx->client_data, L93);
   L95 = (! L63);
   Logic16_O_Nand_15(ctx->client_data, L95);
   L97 = (ctx->_a_0 || ctx->_b_0);
   Logic16_O_Or_0(ctx->client_data, L97);
   L99 = (ctx->_a_1 || ctx->_b_1);
   Logic16_O_Or_1(ctx->client_data, L99);
   L101 = (ctx->_a_2 || ctx->_b_2);
   Logic16_O_Or_2(ctx->client_data, L101);
   L103 = (ctx->_a_3 || ctx->_b_3);
   Logic16_O_Or_3(ctx->client_data, L103);
   L105 = (ctx->_a_4 || ctx->_b_4);
   Logic16_O_Or_4(ctx->client_data, L105);
   L107 = (ctx->_a_5 || ctx->_b_5);
   Logic16_O_Or_5(ctx->client_data, L107);
   L109 = (ctx->_a_6 || ctx->_b_6);
   Logic16_O_Or_6(ctx->client_data, L109);
   L111 = (ctx->_a_7 || ctx->_b_7);
   Logic16_O_Or_7(ctx->client_data, L111);
   L113 = (ctx->_a_8 || ctx->_b_8);
   Logic16_O_Or_8(ctx->client_data, L113);
   L115 = (ctx->_a_9 || ctx->_b_9);
   Logic16_O_Or_9(ctx->client_data, L115);
   L117 = (ctx->_a_10 || ctx->_b_10);
   Logic16_O_Or_10(ctx->client_data, L117);
   L119 = (ctx->_a_11 || ctx->_b_11);
   Logic16_O_Or_11(ctx->client_data, L119);
   L121 = (ctx->_a_12 || ctx->_b_12);
   Logic16_O_Or_12(ctx->client_data, L121);
   L123 = (ctx->_a_13 || ctx->_b_13);
   Logic16_O_Or_13(ctx->client_data, L123);
   L125 = (ctx->_a_14 || ctx->_b_14);
   Logic16_O_Or_14(ctx->client_data, L125);
   L127 = (ctx->_a_15 || ctx->_b_15);
   Logic16_O_Or_15(ctx->client_data, L127);
   L129 = (L97 && L65);
   Logic16_O_Xor_0(ctx->client_data, L129);
   L131 = (L99 && L67);
   Logic16_O_Xor_1(ctx->client_data, L131);
   L133 = (L101 && L69);
   Logic16_O_Xor_2(ctx->client_data, L133);
   L135 = (L103 && L71);
   Logic16_O_Xor_3(ctx->client_data, L135);
   L137 = (L105 && L73);
   Logic16_O_Xor_4(ctx->client_data, L137);
   L139 = (L107 && L75);
   Logic16_O_Xor_5(ctx->client_data, L139);
   L141 = (L109 && L77);
   Logic16_O_Xor_6(ctx->client_data, L141);
   L143 = (L111 && L79);
   Logic16_O_Xor_7(ctx->client_data, L143);
   L145 = (L113 && L81);
   Logic16_O_Xor_8(ctx->client_data, L145);
   L147 = (L115 && L83);
   Logic16_O_Xor_9(ctx->client_data, L147);
   L149 = (L117 && L85);
   Logic16_O_Xor_10(ctx->client_data, L149);
   L151 = (L119 && L87);
   Logic16_O_Xor_11(ctx->client_data, L151);
   L153 = (L121 && L89);
   Logic16_O_Xor_12(ctx->client_data, L153);
   L155 = (L123 && L91);
   Logic16_O_Xor_13(ctx->client_data, L155);
   L157 = (L125 && L93);
   Logic16_O_Xor_14(ctx->client_data, L157);
   L159 = (L127 && L95);
   Logic16_O_Xor_15(ctx->client_data, L159);
}
