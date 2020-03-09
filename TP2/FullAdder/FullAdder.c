/********
* ec2c version 0.68
* c file generated for node : FullAdder 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _FullAdder_EC2C_SRC_FILE
#include "FullAdder.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   _boolean _c;
   //OUTPUTS
   _boolean _sum;
   _boolean _carry;
   //REGISTERS
} FullAdder_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void FullAdder_I_a(FullAdder_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void FullAdder_I_b(FullAdder_ctx* ctx, _boolean V){
   ctx->_b = V;
}
void FullAdder_I_c(FullAdder_ctx* ctx, _boolean V){
   ctx->_c = V;
}
extern void FullAdder_O_sum(void* cdata, _boolean);
extern void FullAdder_O_carry(void* cdata, _boolean);
#ifdef CKCHECK
extern void FullAdder_BOT_sum(void* cdata);
extern void FullAdder_BOT_carry(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void FullAdder_reset_input(FullAdder_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void FullAdder_reset(FullAdder_ctx* ctx){
   FullAdder_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void FullAdder_copy_ctx(FullAdder_ctx* dest, FullAdder_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(FullAdder_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
FullAdder_ctx* FullAdder_new_ctx(void* cdata){
   FullAdder_ctx* ctx = (FullAdder_ctx*)calloc(1, sizeof(FullAdder_ctx));
   ctx->client_data = cdata;
   FullAdder_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void FullAdder_step(FullAdder_ctx* ctx){
//LOCAL VARIABLES
   _boolean L4;
   _boolean L3;
   _boolean L9;
   _boolean L10;
   _boolean L8;
   _boolean L11;
   _boolean L7;
//CODE
   L4 = (ctx->_a != ctx->_b);
   L3 = (L4 != ctx->_c);
   FullAdder_O_sum(ctx->client_data, L3);
   L9 = (ctx->_a && ctx->_b);
   L10 = (ctx->_a && ctx->_c);
   L8 = (L9 || L10);
   L11 = (ctx->_b && ctx->_c);
   L7 = (L8 || L11);
   FullAdder_O_carry(ctx->client_data, L7);
}
