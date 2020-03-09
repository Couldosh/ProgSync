/********
* ec2c version 0.68
* c file generated for node : FullAdder2 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _FullAdder2_EC2C_SRC_FILE
#include "FullAdder2.h"
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
} FullAdder2_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void FullAdder2_I_a(FullAdder2_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void FullAdder2_I_b(FullAdder2_ctx* ctx, _boolean V){
   ctx->_b = V;
}
void FullAdder2_I_c(FullAdder2_ctx* ctx, _boolean V){
   ctx->_c = V;
}
extern void FullAdder2_O_sum(void* cdata, _boolean);
extern void FullAdder2_O_carry(void* cdata, _boolean);
#ifdef CKCHECK
extern void FullAdder2_BOT_sum(void* cdata);
extern void FullAdder2_BOT_carry(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void FullAdder2_reset_input(FullAdder2_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void FullAdder2_reset(FullAdder2_ctx* ctx){
   FullAdder2_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void FullAdder2_copy_ctx(FullAdder2_ctx* dest, FullAdder2_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(FullAdder2_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
FullAdder2_ctx* FullAdder2_new_ctx(void* cdata){
   FullAdder2_ctx* ctx = (FullAdder2_ctx*)calloc(1, sizeof(FullAdder2_ctx));
   ctx->client_data = cdata;
   FullAdder2_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void FullAdder2_step(FullAdder2_ctx* ctx){
//LOCAL VARIABLES
   _boolean L4;
   _boolean L3;
   _boolean L8;
   _boolean L9;
   _boolean L7;
//CODE
   L4 = (ctx->_a != ctx->_b);
   L3 = (L4 != ctx->_c);
   FullAdder2_O_sum(ctx->client_data, L3);
   L8 = (ctx->_a && ctx->_b);
   L9 = (L4 && ctx->_c);
   L7 = (L8 || L9);
   FullAdder2_O_carry(ctx->client_data, L7);
}
