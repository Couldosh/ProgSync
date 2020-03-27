/********
* ec2c version 0.68
* c file generated for node : Never 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Never_EC2C_SRC_FILE
#include "Never.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   //OUTPUTS
   _boolean _out;
   //REGISTERS
   _boolean M6;
   _boolean M6_nil;
   _boolean M2;
} Never_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Never_I_a(Never_ctx* ctx, _boolean V){
   ctx->_a = V;
}
extern void Never_O_out(void* cdata, _boolean);
#ifdef CKCHECK
extern void Never_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Never_reset_input(Never_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Never_reset(Never_ctx* ctx){
   ctx->M6_nil = _true;
   ctx->M2 = _true;
   Never_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Never_copy_ctx(Never_ctx* dest, Never_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Never_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Never_ctx* Never_new_ctx(void* cdata){
   Never_ctx* ctx = (Never_ctx*)calloc(1, sizeof(Never_ctx));
   ctx->client_data = cdata;
   Never_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Never_step(Never_ctx* ctx){
//LOCAL VARIABLES
   _boolean L4;
   _boolean L5;
   _boolean L1;
   _boolean T6;
//CODE
   L4 = (! ctx->_a);
   L5 = (ctx->M6 && L4);
   if (ctx->M2) {
      L1 = L4;
   } else {
      L1 = L5;
   }
   Never_O_out(ctx->client_data, L1);
   T6 = L1;
   ctx->M6 = T6;
   ctx->M6_nil = _false;
   ctx->M2 = ctx->M2 && !(_true);
}
