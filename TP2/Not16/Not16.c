/********
* ec2c version 0.68
* c file generated for node : Not16 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Not16_EC2C_SRC_FILE
#include "Not16.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _in_0;
   _boolean _in_1;
   _boolean _in_2;
   _boolean _in_3;
   _boolean _in_4;
   _boolean _in_5;
   _boolean _in_6;
   _boolean _in_7;
   _boolean _in_8;
   _boolean _in_9;
   _boolean _in_10;
   _boolean _in_11;
   _boolean _in_12;
   _boolean _in_13;
   _boolean _in_14;
   _boolean _in_15;
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
} Not16_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Not16_I_in_0(Not16_ctx* ctx, _boolean V){
   ctx->_in_0 = V;
}
void Not16_I_in_1(Not16_ctx* ctx, _boolean V){
   ctx->_in_1 = V;
}
void Not16_I_in_2(Not16_ctx* ctx, _boolean V){
   ctx->_in_2 = V;
}
void Not16_I_in_3(Not16_ctx* ctx, _boolean V){
   ctx->_in_3 = V;
}
void Not16_I_in_4(Not16_ctx* ctx, _boolean V){
   ctx->_in_4 = V;
}
void Not16_I_in_5(Not16_ctx* ctx, _boolean V){
   ctx->_in_5 = V;
}
void Not16_I_in_6(Not16_ctx* ctx, _boolean V){
   ctx->_in_6 = V;
}
void Not16_I_in_7(Not16_ctx* ctx, _boolean V){
   ctx->_in_7 = V;
}
void Not16_I_in_8(Not16_ctx* ctx, _boolean V){
   ctx->_in_8 = V;
}
void Not16_I_in_9(Not16_ctx* ctx, _boolean V){
   ctx->_in_9 = V;
}
void Not16_I_in_10(Not16_ctx* ctx, _boolean V){
   ctx->_in_10 = V;
}
void Not16_I_in_11(Not16_ctx* ctx, _boolean V){
   ctx->_in_11 = V;
}
void Not16_I_in_12(Not16_ctx* ctx, _boolean V){
   ctx->_in_12 = V;
}
void Not16_I_in_13(Not16_ctx* ctx, _boolean V){
   ctx->_in_13 = V;
}
void Not16_I_in_14(Not16_ctx* ctx, _boolean V){
   ctx->_in_14 = V;
}
void Not16_I_in_15(Not16_ctx* ctx, _boolean V){
   ctx->_in_15 = V;
}
extern void Not16_O_out_0(void* cdata, _boolean);
extern void Not16_O_out_1(void* cdata, _boolean);
extern void Not16_O_out_2(void* cdata, _boolean);
extern void Not16_O_out_3(void* cdata, _boolean);
extern void Not16_O_out_4(void* cdata, _boolean);
extern void Not16_O_out_5(void* cdata, _boolean);
extern void Not16_O_out_6(void* cdata, _boolean);
extern void Not16_O_out_7(void* cdata, _boolean);
extern void Not16_O_out_8(void* cdata, _boolean);
extern void Not16_O_out_9(void* cdata, _boolean);
extern void Not16_O_out_10(void* cdata, _boolean);
extern void Not16_O_out_11(void* cdata, _boolean);
extern void Not16_O_out_12(void* cdata, _boolean);
extern void Not16_O_out_13(void* cdata, _boolean);
extern void Not16_O_out_14(void* cdata, _boolean);
extern void Not16_O_out_15(void* cdata, _boolean);
#ifdef CKCHECK
extern void Not16_BOT_out_0(void* cdata);
extern void Not16_BOT_out_1(void* cdata);
extern void Not16_BOT_out_2(void* cdata);
extern void Not16_BOT_out_3(void* cdata);
extern void Not16_BOT_out_4(void* cdata);
extern void Not16_BOT_out_5(void* cdata);
extern void Not16_BOT_out_6(void* cdata);
extern void Not16_BOT_out_7(void* cdata);
extern void Not16_BOT_out_8(void* cdata);
extern void Not16_BOT_out_9(void* cdata);
extern void Not16_BOT_out_10(void* cdata);
extern void Not16_BOT_out_11(void* cdata);
extern void Not16_BOT_out_12(void* cdata);
extern void Not16_BOT_out_13(void* cdata);
extern void Not16_BOT_out_14(void* cdata);
extern void Not16_BOT_out_15(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Not16_reset_input(Not16_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Not16_reset(Not16_ctx* ctx){
   Not16_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Not16_copy_ctx(Not16_ctx* dest, Not16_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Not16_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Not16_ctx* Not16_new_ctx(void* cdata){
   Not16_ctx* ctx = (Not16_ctx*)calloc(1, sizeof(Not16_ctx));
   ctx->client_data = cdata;
   Not16_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Not16_step(Not16_ctx* ctx){
//LOCAL VARIABLES
   _boolean L16;
   _boolean L19;
   _boolean L21;
   _boolean L23;
   _boolean L25;
   _boolean L27;
   _boolean L29;
   _boolean L31;
   _boolean L33;
   _boolean L35;
   _boolean L37;
   _boolean L39;
   _boolean L41;
   _boolean L43;
   _boolean L45;
   _boolean L47;
//CODE
   L16 = (! ctx->_in_0);
   Not16_O_out_0(ctx->client_data, L16);
   L19 = (! ctx->_in_1);
   Not16_O_out_1(ctx->client_data, L19);
   L21 = (! ctx->_in_2);
   Not16_O_out_2(ctx->client_data, L21);
   L23 = (! ctx->_in_3);
   Not16_O_out_3(ctx->client_data, L23);
   L25 = (! ctx->_in_4);
   Not16_O_out_4(ctx->client_data, L25);
   L27 = (! ctx->_in_5);
   Not16_O_out_5(ctx->client_data, L27);
   L29 = (! ctx->_in_6);
   Not16_O_out_6(ctx->client_data, L29);
   L31 = (! ctx->_in_7);
   Not16_O_out_7(ctx->client_data, L31);
   L33 = (! ctx->_in_8);
   Not16_O_out_8(ctx->client_data, L33);
   L35 = (! ctx->_in_9);
   Not16_O_out_9(ctx->client_data, L35);
   L37 = (! ctx->_in_10);
   Not16_O_out_10(ctx->client_data, L37);
   L39 = (! ctx->_in_11);
   Not16_O_out_11(ctx->client_data, L39);
   L41 = (! ctx->_in_12);
   Not16_O_out_12(ctx->client_data, L41);
   L43 = (! ctx->_in_13);
   Not16_O_out_13(ctx->client_data, L43);
   L45 = (! ctx->_in_14);
   Not16_O_out_14(ctx->client_data, L45);
   L47 = (! ctx->_in_15);
   Not16_O_out_15(ctx->client_data, L47);
}
