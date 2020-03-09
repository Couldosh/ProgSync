/********
* ec2c version 0.68
* c file generated for node : Or_n_way_logMain 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Or_n_way_logMain_EC2C_SRC_FILE
#include "Or_n_way_logMain.h"
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
   //OUTPUTS
   _boolean _out;
   //REGISTERS
} Or_n_way_logMain_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Or_n_way_logMain_I_in_0(Or_n_way_logMain_ctx* ctx, _boolean V){
   ctx->_in_0 = V;
}
void Or_n_way_logMain_I_in_1(Or_n_way_logMain_ctx* ctx, _boolean V){
   ctx->_in_1 = V;
}
void Or_n_way_logMain_I_in_2(Or_n_way_logMain_ctx* ctx, _boolean V){
   ctx->_in_2 = V;
}
void Or_n_way_logMain_I_in_3(Or_n_way_logMain_ctx* ctx, _boolean V){
   ctx->_in_3 = V;
}
void Or_n_way_logMain_I_in_4(Or_n_way_logMain_ctx* ctx, _boolean V){
   ctx->_in_4 = V;
}
void Or_n_way_logMain_I_in_5(Or_n_way_logMain_ctx* ctx, _boolean V){
   ctx->_in_5 = V;
}
void Or_n_way_logMain_I_in_6(Or_n_way_logMain_ctx* ctx, _boolean V){
   ctx->_in_6 = V;
}
void Or_n_way_logMain_I_in_7(Or_n_way_logMain_ctx* ctx, _boolean V){
   ctx->_in_7 = V;
}
extern void Or_n_way_logMain_O_out(void* cdata, _boolean);
#ifdef CKCHECK
extern void Or_n_way_logMain_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Or_n_way_logMain_reset_input(Or_n_way_logMain_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Or_n_way_logMain_reset(Or_n_way_logMain_ctx* ctx){
   Or_n_way_logMain_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Or_n_way_logMain_copy_ctx(Or_n_way_logMain_ctx* dest, Or_n_way_logMain_ctx
* src){
   memcpy((void*)dest, (void*)src, sizeof(Or_n_way_logMain_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Or_n_way_logMain_ctx* Or_n_way_logMain_new_ctx(void* cdata){
   Or_n_way_logMain_ctx* ctx = (Or_n_way_logMain_ctx*)calloc(1, sizeof(
Or_n_way_logMain_ctx));
   ctx->client_data = cdata;
   Or_n_way_logMain_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Or_n_way_logMain_step(Or_n_way_logMain_ctx* ctx){
//LOCAL VARIABLES
   _boolean L10;
   _boolean L11;
   _boolean L9;
   _boolean L13;
   _boolean L14;
   _boolean L12;
   _boolean L8;
//CODE
   L10 = (ctx->_in_0 || ctx->_in_1);
   L11 = (ctx->_in_2 || ctx->_in_3);
   L9 = (L10 || L11);
   L13 = (ctx->_in_4 || ctx->_in_5);
   L14 = (ctx->_in_6 || ctx->_in_7);
   L12 = (L13 || L14);
   L8 = (L9 || L12);
   Or_n_way_logMain_O_out(ctx->client_data, L8);
}
