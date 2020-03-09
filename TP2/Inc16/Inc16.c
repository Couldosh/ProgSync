/********
* ec2c version 0.68
* c file generated for node : Inc16 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Inc16_EC2C_SRC_FILE
#include "Inc16.h"
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
} Inc16_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Inc16_I_x_0(Inc16_ctx* ctx, _boolean V){
   ctx->_x_0 = V;
}
void Inc16_I_x_1(Inc16_ctx* ctx, _boolean V){
   ctx->_x_1 = V;
}
void Inc16_I_x_2(Inc16_ctx* ctx, _boolean V){
   ctx->_x_2 = V;
}
void Inc16_I_x_3(Inc16_ctx* ctx, _boolean V){
   ctx->_x_3 = V;
}
void Inc16_I_x_4(Inc16_ctx* ctx, _boolean V){
   ctx->_x_4 = V;
}
void Inc16_I_x_5(Inc16_ctx* ctx, _boolean V){
   ctx->_x_5 = V;
}
void Inc16_I_x_6(Inc16_ctx* ctx, _boolean V){
   ctx->_x_6 = V;
}
void Inc16_I_x_7(Inc16_ctx* ctx, _boolean V){
   ctx->_x_7 = V;
}
void Inc16_I_x_8(Inc16_ctx* ctx, _boolean V){
   ctx->_x_8 = V;
}
void Inc16_I_x_9(Inc16_ctx* ctx, _boolean V){
   ctx->_x_9 = V;
}
void Inc16_I_x_10(Inc16_ctx* ctx, _boolean V){
   ctx->_x_10 = V;
}
void Inc16_I_x_11(Inc16_ctx* ctx, _boolean V){
   ctx->_x_11 = V;
}
void Inc16_I_x_12(Inc16_ctx* ctx, _boolean V){
   ctx->_x_12 = V;
}
void Inc16_I_x_13(Inc16_ctx* ctx, _boolean V){
   ctx->_x_13 = V;
}
void Inc16_I_x_14(Inc16_ctx* ctx, _boolean V){
   ctx->_x_14 = V;
}
void Inc16_I_x_15(Inc16_ctx* ctx, _boolean V){
   ctx->_x_15 = V;
}
extern void Inc16_O_out_0(void* cdata, _boolean);
extern void Inc16_O_out_1(void* cdata, _boolean);
extern void Inc16_O_out_2(void* cdata, _boolean);
extern void Inc16_O_out_3(void* cdata, _boolean);
extern void Inc16_O_out_4(void* cdata, _boolean);
extern void Inc16_O_out_5(void* cdata, _boolean);
extern void Inc16_O_out_6(void* cdata, _boolean);
extern void Inc16_O_out_7(void* cdata, _boolean);
extern void Inc16_O_out_8(void* cdata, _boolean);
extern void Inc16_O_out_9(void* cdata, _boolean);
extern void Inc16_O_out_10(void* cdata, _boolean);
extern void Inc16_O_out_11(void* cdata, _boolean);
extern void Inc16_O_out_12(void* cdata, _boolean);
extern void Inc16_O_out_13(void* cdata, _boolean);
extern void Inc16_O_out_14(void* cdata, _boolean);
extern void Inc16_O_out_15(void* cdata, _boolean);
extern void Inc16_O_carry(void* cdata, _boolean);
#ifdef CKCHECK
extern void Inc16_BOT_out_0(void* cdata);
extern void Inc16_BOT_out_1(void* cdata);
extern void Inc16_BOT_out_2(void* cdata);
extern void Inc16_BOT_out_3(void* cdata);
extern void Inc16_BOT_out_4(void* cdata);
extern void Inc16_BOT_out_5(void* cdata);
extern void Inc16_BOT_out_6(void* cdata);
extern void Inc16_BOT_out_7(void* cdata);
extern void Inc16_BOT_out_8(void* cdata);
extern void Inc16_BOT_out_9(void* cdata);
extern void Inc16_BOT_out_10(void* cdata);
extern void Inc16_BOT_out_11(void* cdata);
extern void Inc16_BOT_out_12(void* cdata);
extern void Inc16_BOT_out_13(void* cdata);
extern void Inc16_BOT_out_14(void* cdata);
extern void Inc16_BOT_out_15(void* cdata);
extern void Inc16_BOT_carry(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Inc16_reset_input(Inc16_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Inc16_reset(Inc16_ctx* ctx){
   Inc16_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Inc16_copy_ctx(Inc16_ctx* dest, Inc16_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Inc16_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Inc16_ctx* Inc16_new_ctx(void* cdata){
   Inc16_ctx* ctx = (Inc16_ctx*)calloc(1, sizeof(Inc16_ctx));
   ctx->client_data = cdata;
   Inc16_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Inc16_step(Inc16_ctx* ctx){
//LOCAL VARIABLES
   _boolean L17;
   _boolean L21;
   _boolean L25;
   _boolean L29;
   _boolean L33;
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
   _boolean L79;
   _boolean L76;
   _boolean L80;
   _boolean L75;
   _boolean L74;
   _boolean L72;
   _boolean L81;
   _boolean L71;
   _boolean L70;
   _boolean L68;
   _boolean L82;
   _boolean L67;
   _boolean L66;
   _boolean L64;
   _boolean L83;
   _boolean L63;
   _boolean L62;
   _boolean L60;
   _boolean L84;
   _boolean L59;
   _boolean L58;
   _boolean L56;
   _boolean L85;
   _boolean L55;
   _boolean L54;
   _boolean L52;
   _boolean L86;
   _boolean L51;
   _boolean L50;
   _boolean L48;
   _boolean L87;
   _boolean L47;
   _boolean L46;
   _boolean L44;
   _boolean L88;
   _boolean L43;
   _boolean L42;
   _boolean L40;
   _boolean L89;
   _boolean L39;
   _boolean L38;
   _boolean L36;
   _boolean L90;
   _boolean L35;
   _boolean L34;
   _boolean L32;
   _boolean L91;
   _boolean L31;
   _boolean L30;
   _boolean L28;
   _boolean L92;
   _boolean L27;
   _boolean L26;
   _boolean L24;
   _boolean L93;
   _boolean L23;
   _boolean L22;
   _boolean L20;
   _boolean L94;
   _boolean L19;
   _boolean L16;
   _boolean L97;
   _boolean L96;
   _boolean L100;
   _boolean L99;
   _boolean L103;
   _boolean L102;
   _boolean L106;
   _boolean L105;
   _boolean L109;
   _boolean L108;
   _boolean L112;
   _boolean L111;
   _boolean L115;
   _boolean L114;
   _boolean L118;
   _boolean L117;
   _boolean L121;
   _boolean L120;
   _boolean L124;
   _boolean L123;
   _boolean L127;
   _boolean L126;
   _boolean L130;
   _boolean L129;
   _boolean L133;
   _boolean L132;
   _boolean L136;
   _boolean L135;
   _boolean L139;
   _boolean L138;
   _boolean L143;
   _boolean L144;
   _boolean L142;
   _boolean L145;
   _boolean L141;
//CODE
   L17 = (ctx->_x_0 != _false);
   L21 = (ctx->_x_1 && _false);
   L25 = (ctx->_x_2 && _false);
   L29 = (ctx->_x_3 && _false);
   L33 = (ctx->_x_4 && _false);
   L37 = (ctx->_x_5 && _false);
   L41 = (ctx->_x_6 && _false);
   L45 = (ctx->_x_7 && _false);
   L49 = (ctx->_x_8 && _false);
   L53 = (ctx->_x_9 && _false);
   L57 = (ctx->_x_10 && _false);
   L61 = (ctx->_x_11 && _false);
   L65 = (ctx->_x_12 && _false);
   L69 = (ctx->_x_13 && _false);
   L73 = (ctx->_x_14 && _false);
   L77 = (ctx->_x_15 && _true);
   L79 = (ctx->_x_15 && _false);
   L76 = (L77 || L79);
   L80 = (_true && _false);
   L75 = (L76 || L80);
   L74 = (ctx->_x_14 && L75);
   L72 = (L73 || L74);
   L81 = (_false && L75);
   L71 = (L72 || L81);
   L70 = (ctx->_x_13 && L71);
   L68 = (L69 || L70);
   L82 = (_false && L71);
   L67 = (L68 || L82);
   L66 = (ctx->_x_12 && L67);
   L64 = (L65 || L66);
   L83 = (_false && L67);
   L63 = (L64 || L83);
   L62 = (ctx->_x_11 && L63);
   L60 = (L61 || L62);
   L84 = (_false && L63);
   L59 = (L60 || L84);
   L58 = (ctx->_x_10 && L59);
   L56 = (L57 || L58);
   L85 = (_false && L59);
   L55 = (L56 || L85);
   L54 = (ctx->_x_9 && L55);
   L52 = (L53 || L54);
   L86 = (_false && L55);
   L51 = (L52 || L86);
   L50 = (ctx->_x_8 && L51);
   L48 = (L49 || L50);
   L87 = (_false && L51);
   L47 = (L48 || L87);
   L46 = (ctx->_x_7 && L47);
   L44 = (L45 || L46);
   L88 = (_false && L47);
   L43 = (L44 || L88);
   L42 = (ctx->_x_6 && L43);
   L40 = (L41 || L42);
   L89 = (_false && L43);
   L39 = (L40 || L89);
   L38 = (ctx->_x_5 && L39);
   L36 = (L37 || L38);
   L90 = (_false && L39);
   L35 = (L36 || L90);
   L34 = (ctx->_x_4 && L35);
   L32 = (L33 || L34);
   L91 = (_false && L35);
   L31 = (L32 || L91);
   L30 = (ctx->_x_3 && L31);
   L28 = (L29 || L30);
   L92 = (_false && L31);
   L27 = (L28 || L92);
   L26 = (ctx->_x_2 && L27);
   L24 = (L25 || L26);
   L93 = (_false && L27);
   L23 = (L24 || L93);
   L22 = (ctx->_x_1 && L23);
   L20 = (L21 || L22);
   L94 = (_false && L23);
   L19 = (L20 || L94);
   L16 = (L17 != L19);
   Inc16_O_out_0(ctx->client_data, L16);
   L97 = (ctx->_x_1 != _false);
   L96 = (L97 != L23);
   Inc16_O_out_1(ctx->client_data, L96);
   L100 = (ctx->_x_2 != _false);
   L99 = (L100 != L27);
   Inc16_O_out_2(ctx->client_data, L99);
   L103 = (ctx->_x_3 != _false);
   L102 = (L103 != L31);
   Inc16_O_out_3(ctx->client_data, L102);
   L106 = (ctx->_x_4 != _false);
   L105 = (L106 != L35);
   Inc16_O_out_4(ctx->client_data, L105);
   L109 = (ctx->_x_5 != _false);
   L108 = (L109 != L39);
   Inc16_O_out_5(ctx->client_data, L108);
   L112 = (ctx->_x_6 != _false);
   L111 = (L112 != L43);
   Inc16_O_out_6(ctx->client_data, L111);
   L115 = (ctx->_x_7 != _false);
   L114 = (L115 != L47);
   Inc16_O_out_7(ctx->client_data, L114);
   L118 = (ctx->_x_8 != _false);
   L117 = (L118 != L51);
   Inc16_O_out_8(ctx->client_data, L117);
   L121 = (ctx->_x_9 != _false);
   L120 = (L121 != L55);
   Inc16_O_out_9(ctx->client_data, L120);
   L124 = (ctx->_x_10 != _false);
   L123 = (L124 != L59);
   Inc16_O_out_10(ctx->client_data, L123);
   L127 = (ctx->_x_11 != _false);
   L126 = (L127 != L63);
   Inc16_O_out_11(ctx->client_data, L126);
   L130 = (ctx->_x_12 != _false);
   L129 = (L130 != L67);
   Inc16_O_out_12(ctx->client_data, L129);
   L133 = (ctx->_x_13 != _false);
   L132 = (L133 != L71);
   Inc16_O_out_13(ctx->client_data, L132);
   L136 = (ctx->_x_14 != _false);
   L135 = (L136 != L75);
   Inc16_O_out_14(ctx->client_data, L135);
   L139 = (ctx->_x_15 != _true);
   L138 = (L139 != _false);
   Inc16_O_out_15(ctx->client_data, L138);
   L143 = (ctx->_x_0 && _false);
   L144 = (ctx->_x_0 && L19);
   L142 = (L143 || L144);
   L145 = (_false && L19);
   L141 = (L142 || L145);
   Inc16_O_carry(ctx->client_data, L141);
}
