/********
* ec2c version 0.68
* c file generated for node : exclusive 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _exclusive_EC2C_SRC_FILE
#include "exclusive.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _exclusive;
   //REGISTERS
   _boolean M9;
   _boolean M9_nil;
   _boolean M3;
} exclusive_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void exclusive_I_a(exclusive_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void exclusive_I_b(exclusive_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void exclusive_O_exclusive(void* cdata, _boolean);
#ifdef CKCHECK
extern void exclusive_BOT_exclusive(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void exclusive_reset_input(exclusive_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void exclusive_reset(exclusive_ctx* ctx){
   ctx->M9_nil = _true;
   ctx->M3 = _true;
   exclusive_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void exclusive_copy_ctx(exclusive_ctx* dest, exclusive_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(exclusive_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
exclusive_ctx* exclusive_new_ctx(void* cdata){
   exclusive_ctx* ctx = (exclusive_ctx*)calloc(1, sizeof(exclusive_ctx));
   ctx->client_data = cdata;
   exclusive_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void exclusive_step(exclusive_ctx* ctx){
//LOCAL VARIABLES
   _boolean L5;
   _boolean L7;
   _boolean L6;
   _boolean L2;
   _boolean T9;
//CODE
   L5 = (ctx->_a != ctx->_b);
   L7 = (ctx->_a && ctx->_b);
   if (L7) {
      L6 = _false;
   } else {
      L6 = ctx->M9;
   }
   if (ctx->M3) {
      L2 = L5;
   } else {
      L2 = L6;
   }
   exclusive_O_exclusive(ctx->client_data, L2);
   T9 = L2;
   ctx->M9 = T9;
   ctx->M9_nil = _false;
   ctx->M3 = ctx->M3 && !(_true);
}
