/********
* ec2c version 0.68
* c file generated for node : Mux_16 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Mux_16_EC2C_SRC_FILE
#include "Mux_16.h"
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
   _boolean _set;
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
   //REGISTERS
} Mux_16_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Mux_16_I_a_0(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_0 = V;
}
void Mux_16_I_a_1(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_1 = V;
}
void Mux_16_I_a_2(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_2 = V;
}
void Mux_16_I_a_3(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_3 = V;
}
void Mux_16_I_a_4(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_4 = V;
}
void Mux_16_I_a_5(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_5 = V;
}
void Mux_16_I_a_6(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_6 = V;
}
void Mux_16_I_a_7(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_7 = V;
}
void Mux_16_I_a_8(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_8 = V;
}
void Mux_16_I_a_9(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_9 = V;
}
void Mux_16_I_a_10(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_10 = V;
}
void Mux_16_I_a_11(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_11 = V;
}
void Mux_16_I_a_12(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_12 = V;
}
void Mux_16_I_a_13(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_13 = V;
}
void Mux_16_I_a_14(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_14 = V;
}
void Mux_16_I_a_15(Mux_16_ctx* ctx, _boolean V){
   ctx->_a_15 = V;
}
void Mux_16_I_b_0(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_0 = V;
}
void Mux_16_I_b_1(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_1 = V;
}
void Mux_16_I_b_2(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_2 = V;
}
void Mux_16_I_b_3(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_3 = V;
}
void Mux_16_I_b_4(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_4 = V;
}
void Mux_16_I_b_5(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_5 = V;
}
void Mux_16_I_b_6(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_6 = V;
}
void Mux_16_I_b_7(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_7 = V;
}
void Mux_16_I_b_8(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_8 = V;
}
void Mux_16_I_b_9(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_9 = V;
}
void Mux_16_I_b_10(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_10 = V;
}
void Mux_16_I_b_11(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_11 = V;
}
void Mux_16_I_b_12(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_12 = V;
}
void Mux_16_I_b_13(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_13 = V;
}
void Mux_16_I_b_14(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_14 = V;
}
void Mux_16_I_b_15(Mux_16_ctx* ctx, _boolean V){
   ctx->_b_15 = V;
}
void Mux_16_I_set(Mux_16_ctx* ctx, _boolean V){
   ctx->_set = V;
}
extern void Mux_16_O_out_0(void* cdata, _boolean);
extern void Mux_16_O_out_1(void* cdata, _boolean);
extern void Mux_16_O_out_2(void* cdata, _boolean);
extern void Mux_16_O_out_3(void* cdata, _boolean);
extern void Mux_16_O_out_4(void* cdata, _boolean);
extern void Mux_16_O_out_5(void* cdata, _boolean);
extern void Mux_16_O_out_6(void* cdata, _boolean);
extern void Mux_16_O_out_7(void* cdata, _boolean);
extern void Mux_16_O_out_8(void* cdata, _boolean);
extern void Mux_16_O_out_9(void* cdata, _boolean);
extern void Mux_16_O_out_10(void* cdata, _boolean);
extern void Mux_16_O_out_11(void* cdata, _boolean);
extern void Mux_16_O_out_12(void* cdata, _boolean);
extern void Mux_16_O_out_13(void* cdata, _boolean);
extern void Mux_16_O_out_14(void* cdata, _boolean);
extern void Mux_16_O_out_15(void* cdata, _boolean);
#ifdef CKCHECK
extern void Mux_16_BOT_out_0(void* cdata);
extern void Mux_16_BOT_out_1(void* cdata);
extern void Mux_16_BOT_out_2(void* cdata);
extern void Mux_16_BOT_out_3(void* cdata);
extern void Mux_16_BOT_out_4(void* cdata);
extern void Mux_16_BOT_out_5(void* cdata);
extern void Mux_16_BOT_out_6(void* cdata);
extern void Mux_16_BOT_out_7(void* cdata);
extern void Mux_16_BOT_out_8(void* cdata);
extern void Mux_16_BOT_out_9(void* cdata);
extern void Mux_16_BOT_out_10(void* cdata);
extern void Mux_16_BOT_out_11(void* cdata);
extern void Mux_16_BOT_out_12(void* cdata);
extern void Mux_16_BOT_out_13(void* cdata);
extern void Mux_16_BOT_out_14(void* cdata);
extern void Mux_16_BOT_out_15(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Mux_16_reset_input(Mux_16_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Mux_16_reset(Mux_16_ctx* ctx){
   Mux_16_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Mux_16_copy_ctx(Mux_16_ctx* dest, Mux_16_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Mux_16_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Mux_16_ctx* Mux_16_new_ctx(void* cdata){
   Mux_16_ctx* ctx = (Mux_16_ctx*)calloc(1, sizeof(Mux_16_ctx));
   ctx->client_data = cdata;
   Mux_16_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Mux_16_step(Mux_16_ctx* ctx){
//LOCAL VARIABLES
   _boolean L33;
   _boolean L36;
   _boolean L38;
   _boolean L40;
   _boolean L42;
   _boolean L44;
   _boolean L46;
   _boolean L48;
   _boolean L50;
   _boolean L52;
   _boolean L54;
   _boolean L56;
   _boolean L58;
   _boolean L60;
   _boolean L62;
   _boolean L64;
//CODE
   if (ctx->_set) {
      L33 = ctx->_a_0;
   } else {
      L33 = ctx->_b_0;
   }
   Mux_16_O_out_0(ctx->client_data, L33);
   if (ctx->_set) {
      L36 = ctx->_a_1;
   } else {
      L36 = ctx->_b_1;
   }
   Mux_16_O_out_1(ctx->client_data, L36);
   if (ctx->_set) {
      L38 = ctx->_a_2;
   } else {
      L38 = ctx->_b_2;
   }
   Mux_16_O_out_2(ctx->client_data, L38);
   if (ctx->_set) {
      L40 = ctx->_a_3;
   } else {
      L40 = ctx->_b_3;
   }
   Mux_16_O_out_3(ctx->client_data, L40);
   if (ctx->_set) {
      L42 = ctx->_a_4;
   } else {
      L42 = ctx->_b_4;
   }
   Mux_16_O_out_4(ctx->client_data, L42);
   if (ctx->_set) {
      L44 = ctx->_a_5;
   } else {
      L44 = ctx->_b_5;
   }
   Mux_16_O_out_5(ctx->client_data, L44);
   if (ctx->_set) {
      L46 = ctx->_a_6;
   } else {
      L46 = ctx->_b_6;
   }
   Mux_16_O_out_6(ctx->client_data, L46);
   if (ctx->_set) {
      L48 = ctx->_a_7;
   } else {
      L48 = ctx->_b_7;
   }
   Mux_16_O_out_7(ctx->client_data, L48);
   if (ctx->_set) {
      L50 = ctx->_a_8;
   } else {
      L50 = ctx->_b_8;
   }
   Mux_16_O_out_8(ctx->client_data, L50);
   if (ctx->_set) {
      L52 = ctx->_a_9;
   } else {
      L52 = ctx->_b_9;
   }
   Mux_16_O_out_9(ctx->client_data, L52);
   if (ctx->_set) {
      L54 = ctx->_a_10;
   } else {
      L54 = ctx->_b_10;
   }
   Mux_16_O_out_10(ctx->client_data, L54);
   if (ctx->_set) {
      L56 = ctx->_a_11;
   } else {
      L56 = ctx->_b_11;
   }
   Mux_16_O_out_11(ctx->client_data, L56);
   if (ctx->_set) {
      L58 = ctx->_a_12;
   } else {
      L58 = ctx->_b_12;
   }
   Mux_16_O_out_12(ctx->client_data, L58);
   if (ctx->_set) {
      L60 = ctx->_a_13;
   } else {
      L60 = ctx->_b_13;
   }
   Mux_16_O_out_13(ctx->client_data, L60);
   if (ctx->_set) {
      L62 = ctx->_a_14;
   } else {
      L62 = ctx->_b_14;
   }
   Mux_16_O_out_14(ctx->client_data, L62);
   if (ctx->_set) {
      L64 = ctx->_a_15;
   } else {
      L64 = ctx->_b_15;
   }
   Mux_16_O_out_15(ctx->client_data, L64);
}
