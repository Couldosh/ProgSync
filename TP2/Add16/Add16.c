/********
* ec2c version 0.68
* c file generated for node : Add16 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Add16_EC2C_SRC_FILE
#include "Add16.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _x_0;
   _boolean _x_1;
   _boolean _x_2;
   _boolean _x_3;
   _boolean _x_4;
   _boolean _x_5;
   _boolean _x_6;
   _boolean _x_7;
   _boolean _x_8;
   _boolean _x_9;
   _boolean _x_10;
   _boolean _x_11;
   _boolean _x_12;
   _boolean _x_13;
   _boolean _x_14;
   _boolean _x_15;
   _boolean _y_0;
   _boolean _y_1;
   _boolean _y_2;
   _boolean _y_3;
   _boolean _y_4;
   _boolean _y_5;
   _boolean _y_6;
   _boolean _y_7;
   _boolean _y_8;
   _boolean _y_9;
   _boolean _y_10;
   _boolean _y_11;
   _boolean _y_12;
   _boolean _y_13;
   _boolean _y_14;
   _boolean _y_15;
   _boolean _c;
   //OUTPUTS
   _boolean _out_0;
   _boolean _out_1;
   _boolean _out_2;
   _boolean _out_3;
   _boolean _out_4;
   _boolean _out_5;
   _boolean _out_6;
   _boolean _out_7;
   _boolean _out_8;
   _boolean _out_9;
   _boolean _out_10;
   _boolean _out_11;
   _boolean _out_12;
   _boolean _out_13;
   _boolean _out_14;
   _boolean _out_15;
   _boolean _carry;
   //REGISTERS
} Add16_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Add16_I_x_0(Add16_ctx* ctx, _boolean V){
   ctx->_x_0 = V;
}
void Add16_I_x_1(Add16_ctx* ctx, _boolean V){
   ctx->_x_1 = V;
}
void Add16_I_x_2(Add16_ctx* ctx, _boolean V){
   ctx->_x_2 = V;
}
void Add16_I_x_3(Add16_ctx* ctx, _boolean V){
   ctx->_x_3 = V;
}
void Add16_I_x_4(Add16_ctx* ctx, _boolean V){
   ctx->_x_4 = V;
}
void Add16_I_x_5(Add16_ctx* ctx, _boolean V){
   ctx->_x_5 = V;
}
void Add16_I_x_6(Add16_ctx* ctx, _boolean V){
   ctx->_x_6 = V;
}
void Add16_I_x_7(Add16_ctx* ctx, _boolean V){
   ctx->_x_7 = V;
}
void Add16_I_x_8(Add16_ctx* ctx, _boolean V){
   ctx->_x_8 = V;
}
void Add16_I_x_9(Add16_ctx* ctx, _boolean V){
   ctx->_x_9 = V;
}
void Add16_I_x_10(Add16_ctx* ctx, _boolean V){
   ctx->_x_10 = V;
}
void Add16_I_x_11(Add16_ctx* ctx, _boolean V){
   ctx->_x_11 = V;
}
void Add16_I_x_12(Add16_ctx* ctx, _boolean V){
   ctx->_x_12 = V;
}
void Add16_I_x_13(Add16_ctx* ctx, _boolean V){
   ctx->_x_13 = V;
}
void Add16_I_x_14(Add16_ctx* ctx, _boolean V){
   ctx->_x_14 = V;
}
void Add16_I_x_15(Add16_ctx* ctx, _boolean V){
   ctx->_x_15 = V;
}
void Add16_I_y_0(Add16_ctx* ctx, _boolean V){
   ctx->_y_0 = V;
}
void Add16_I_y_1(Add16_ctx* ctx, _boolean V){
   ctx->_y_1 = V;
}
void Add16_I_y_2(Add16_ctx* ctx, _boolean V){
   ctx->_y_2 = V;
}
void Add16_I_y_3(Add16_ctx* ctx, _boolean V){
   ctx->_y_3 = V;
}
void Add16_I_y_4(Add16_ctx* ctx, _boolean V){
   ctx->_y_4 = V;
}
void Add16_I_y_5(Add16_ctx* ctx, _boolean V){
   ctx->_y_5 = V;
}
void Add16_I_y_6(Add16_ctx* ctx, _boolean V){
   ctx->_y_6 = V;
}
void Add16_I_y_7(Add16_ctx* ctx, _boolean V){
   ctx->_y_7 = V;
}
void Add16_I_y_8(Add16_ctx* ctx, _boolean V){
   ctx->_y_8 = V;
}
void Add16_I_y_9(Add16_ctx* ctx, _boolean V){
   ctx->_y_9 = V;
}
void Add16_I_y_10(Add16_ctx* ctx, _boolean V){
   ctx->_y_10 = V;
}
void Add16_I_y_11(Add16_ctx* ctx, _boolean V){
   ctx->_y_11 = V;
}
void Add16_I_y_12(Add16_ctx* ctx, _boolean V){
   ctx->_y_12 = V;
}
void Add16_I_y_13(Add16_ctx* ctx, _boolean V){
   ctx->_y_13 = V;
}
void Add16_I_y_14(Add16_ctx* ctx, _boolean V){
   ctx->_y_14 = V;
}
void Add16_I_y_15(Add16_ctx* ctx, _boolean V){
   ctx->_y_15 = V;
}
void Add16_I_c(Add16_ctx* ctx, _boolean V){
   ctx->_c = V;
}
extern void Add16_O_out_0(void* cdata, _boolean);
extern void Add16_O_out_1(void* cdata, _boolean);
extern void Add16_O_out_2(void* cdata, _boolean);
extern void Add16_O_out_3(void* cdata, _boolean);
extern void Add16_O_out_4(void* cdata, _boolean);
extern void Add16_O_out_5(void* cdata, _boolean);
extern void Add16_O_out_6(void* cdata, _boolean);
extern void Add16_O_out_7(void* cdata, _boolean);
extern void Add16_O_out_8(void* cdata, _boolean);
extern void Add16_O_out_9(void* cdata, _boolean);
extern void Add16_O_out_10(void* cdata, _boolean);
extern void Add16_O_out_11(void* cdata, _boolean);
extern void Add16_O_out_12(void* cdata, _boolean);
extern void Add16_O_out_13(void* cdata, _boolean);
extern void Add16_O_out_14(void* cdata, _boolean);
extern void Add16_O_out_15(void* cdata, _boolean);
extern void Add16_O_carry(void* cdata, _boolean);
#ifdef CKCHECK
extern void Add16_BOT_out_0(void* cdata);
extern void Add16_BOT_out_1(void* cdata);
extern void Add16_BOT_out_2(void* cdata);
extern void Add16_BOT_out_3(void* cdata);
extern void Add16_BOT_out_4(void* cdata);
extern void Add16_BOT_out_5(void* cdata);
extern void Add16_BOT_out_6(void* cdata);
extern void Add16_BOT_out_7(void* cdata);
extern void Add16_BOT_out_8(void* cdata);
extern void Add16_BOT_out_9(void* cdata);
extern void Add16_BOT_out_10(void* cdata);
extern void Add16_BOT_out_11(void* cdata);
extern void Add16_BOT_out_12(void* cdata);
extern void Add16_BOT_out_13(void* cdata);
extern void Add16_BOT_out_14(void* cdata);
extern void Add16_BOT_out_15(void* cdata);
extern void Add16_BOT_carry(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Add16_reset_input(Add16_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Add16_reset(Add16_ctx* ctx){
   Add16_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Add16_copy_ctx(Add16_ctx* dest, Add16_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Add16_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Add16_ctx* Add16_new_ctx(void* cdata){
   Add16_ctx* ctx = (Add16_ctx*)calloc(1, sizeof(Add16_ctx));
   ctx->client_data = cdata;
   Add16_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Add16_step(Add16_ctx* ctx){
//LOCAL VARIABLES
   _boolean L34;
   _boolean L37;
   _boolean L41;
   _boolean L45;
   _boolean L49;
   _boolean L53;
   _boolean L57;
   _boolean L61;
   _boolean L65;
   _boolean L69;
   _boolean L73;
   _boolean L77;
   _boolean L81;
   _boolean L85;
   _boolean L89;
   _boolean L93;
   _boolean L94;
   _boolean L92;
   _boolean L95;
   _boolean L91;
   _boolean L90;
   _boolean L88;
   _boolean L96;
   _boolean L87;
   _boolean L86;
   _boolean L84;
   _boolean L97;
   _boolean L83;
   _boolean L82;
   _boolean L80;
   _boolean L98;
   _boolean L79;
   _boolean L78;
   _boolean L76;
   _boolean L99;
   _boolean L75;
   _boolean L74;
   _boolean L72;
   _boolean L100;
   _boolean L71;
   _boolean L70;
   _boolean L68;
   _boolean L101;
   _boolean L67;
   _boolean L66;
   _boolean L64;
   _boolean L102;
   _boolean L63;
   _boolean L62;
   _boolean L60;
   _boolean L103;
   _boolean L59;
   _boolean L58;
   _boolean L56;
   _boolean L104;
   _boolean L55;
   _boolean L54;
   _boolean L52;
   _boolean L105;
   _boolean L51;
   _boolean L50;
   _boolean L48;
   _boolean L106;
   _boolean L47;
   _boolean L46;
   _boolean L44;
   _boolean L107;
   _boolean L43;
   _boolean L42;
   _boolean L40;
   _boolean L108;
   _boolean L39;
   _boolean L38;
   _boolean L36;
   _boolean L109;
   _boolean L35;
   _boolean L33;
   _boolean L113;
   _boolean L112;
   _boolean L116;
   _boolean L115;
   _boolean L119;
   _boolean L118;
   _boolean L122;
   _boolean L121;
   _boolean L125;
   _boolean L124;
   _boolean L128;
   _boolean L127;
   _boolean L131;
   _boolean L130;
   _boolean L134;
   _boolean L133;
   _boolean L137;
   _boolean L136;
   _boolean L140;
   _boolean L139;
   _boolean L143;
   _boolean L142;
   _boolean L146;
   _boolean L145;
   _boolean L149;
   _boolean L148;
   _boolean L152;
   _boolean L151;
   _boolean L155;
   _boolean L154;
   _boolean L159;
   _boolean L160;
   _boolean L158;
   _boolean L161;
   _boolean L157;
//CODE
   L34 = (ctx->_x_0 != ctx->_y_0);
   L37 = (ctx->_x_1 && ctx->_y_1);
   L41 = (ctx->_x_2 && ctx->_y_2);
   L45 = (ctx->_x_3 && ctx->_y_3);
   L49 = (ctx->_x_4 && ctx->_y_4);
   L53 = (ctx->_x_5 && ctx->_y_5);
   L57 = (ctx->_x_6 && ctx->_y_6);
   L61 = (ctx->_x_7 && ctx->_y_7);
   L65 = (ctx->_x_8 && ctx->_y_8);
   L69 = (ctx->_x_9 && ctx->_y_9);
   L73 = (ctx->_x_10 && ctx->_y_10);
   L77 = (ctx->_x_11 && ctx->_y_11);
   L81 = (ctx->_x_12 && ctx->_y_12);
   L85 = (ctx->_x_13 && ctx->_y_13);
   L89 = (ctx->_x_14 && ctx->_y_14);
   L93 = (ctx->_x_15 && ctx->_y_15);
   L94 = (ctx->_x_15 && ctx->_c);
   L92 = (L93 || L94);
   L95 = (ctx->_y_15 && ctx->_c);
   L91 = (L92 || L95);
   L90 = (ctx->_x_14 && L91);
   L88 = (L89 || L90);
   L96 = (ctx->_y_14 && L91);
   L87 = (L88 || L96);
   L86 = (ctx->_x_13 && L87);
   L84 = (L85 || L86);
   L97 = (ctx->_y_13 && L87);
   L83 = (L84 || L97);
   L82 = (ctx->_x_12 && L83);
   L80 = (L81 || L82);
   L98 = (ctx->_y_12 && L83);
   L79 = (L80 || L98);
   L78 = (ctx->_x_11 && L79);
   L76 = (L77 || L78);
   L99 = (ctx->_y_11 && L79);
   L75 = (L76 || L99);
   L74 = (ctx->_x_10 && L75);
   L72 = (L73 || L74);
   L100 = (ctx->_y_10 && L75);
   L71 = (L72 || L100);
   L70 = (ctx->_x_9 && L71);
   L68 = (L69 || L70);
   L101 = (ctx->_y_9 && L71);
   L67 = (L68 || L101);
   L66 = (ctx->_x_8 && L67);
   L64 = (L65 || L66);
   L102 = (ctx->_y_8 && L67);
   L63 = (L64 || L102);
   L62 = (ctx->_x_7 && L63);
   L60 = (L61 || L62);
   L103 = (ctx->_y_7 && L63);
   L59 = (L60 || L103);
   L58 = (ctx->_x_6 && L59);
   L56 = (L57 || L58);
   L104 = (ctx->_y_6 && L59);
   L55 = (L56 || L104);
   L54 = (ctx->_x_5 && L55);
   L52 = (L53 || L54);
   L105 = (ctx->_y_5 && L55);
   L51 = (L52 || L105);
   L50 = (ctx->_x_4 && L51);
   L48 = (L49 || L50);
   L106 = (ctx->_y_4 && L51);
   L47 = (L48 || L106);
   L46 = (ctx->_x_3 && L47);
   L44 = (L45 || L46);
   L107 = (ctx->_y_3 && L47);
   L43 = (L44 || L107);
   L42 = (ctx->_x_2 && L43);
   L40 = (L41 || L42);
   L108 = (ctx->_y_2 && L43);
   L39 = (L40 || L108);
   L38 = (ctx->_x_1 && L39);
   L36 = (L37 || L38);
   L109 = (ctx->_y_1 && L39);
   L35 = (L36 || L109);
   L33 = (L34 != L35);
   Add16_O_out_0(ctx->client_data, L33);
   L113 = (ctx->_x_1 != ctx->_y_1);
   L112 = (L113 != L39);
   Add16_O_out_1(ctx->client_data, L112);
   L116 = (ctx->_x_2 != ctx->_y_2);
   L115 = (L116 != L43);
   Add16_O_out_2(ctx->client_data, L115);
   L119 = (ctx->_x_3 != ctx->_y_3);
   L118 = (L119 != L47);
   Add16_O_out_3(ctx->client_data, L118);
   L122 = (ctx->_x_4 != ctx->_y_4);
   L121 = (L122 != L51);
   Add16_O_out_4(ctx->client_data, L121);
   L125 = (ctx->_x_5 != ctx->_y_5);
   L124 = (L125 != L55);
   Add16_O_out_5(ctx->client_data, L124);
   L128 = (ctx->_x_6 != ctx->_y_6);
   L127 = (L128 != L59);
   Add16_O_out_6(ctx->client_data, L127);
   L131 = (ctx->_x_7 != ctx->_y_7);
   L130 = (L131 != L63);
   Add16_O_out_7(ctx->client_data, L130);
   L134 = (ctx->_x_8 != ctx->_y_8);
   L133 = (L134 != L67);
   Add16_O_out_8(ctx->client_data, L133);
   L137 = (ctx->_x_9 != ctx->_y_9);
   L136 = (L137 != L71);
   Add16_O_out_9(ctx->client_data, L136);
   L140 = (ctx->_x_10 != ctx->_y_10);
   L139 = (L140 != L75);
   Add16_O_out_10(ctx->client_data, L139);
   L143 = (ctx->_x_11 != ctx->_y_11);
   L142 = (L143 != L79);
   Add16_O_out_11(ctx->client_data, L142);
   L146 = (ctx->_x_12 != ctx->_y_12);
   L145 = (L146 != L83);
   Add16_O_out_12(ctx->client_data, L145);
   L149 = (ctx->_x_13 != ctx->_y_13);
   L148 = (L149 != L87);
   Add16_O_out_13(ctx->client_data, L148);
   L152 = (ctx->_x_14 != ctx->_y_14);
   L151 = (L152 != L91);
   Add16_O_out_14(ctx->client_data, L151);
   L155 = (ctx->_x_15 != ctx->_y_15);
   L154 = (L155 != ctx->_c);
   Add16_O_out_15(ctx->client_data, L154);
   L159 = (ctx->_x_0 && ctx->_y_0);
   L160 = (ctx->_x_0 && L35);
   L158 = (L159 || L160);
   L161 = (ctx->_y_0 && L35);
   L157 = (L158 || L161);
   Add16_O_carry(ctx->client_data, L157);
}
