/********
* ec2c version 0.68
* c file generated for node : obsUnion 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _obsUnion_EC2C_SRC_FILE
#include "obsUnion.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _out;
   //REGISTERS
   _boolean M17;
   _boolean M17_nil;
   _boolean M12;
   _boolean M12_nil;
   _boolean M4;
} obsUnion_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void obsUnion_I_a(obsUnion_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void obsUnion_I_b(obsUnion_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void obsUnion_O_out(void* cdata, _boolean);
#ifdef CKCHECK
extern void obsUnion_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void obsUnion_reset_input(obsUnion_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void obsUnion_reset(obsUnion_ctx* ctx){
   ctx->M17_nil = _true;
   ctx->M12_nil = _true;
   ctx->M4 = _true;
   obsUnion_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void obsUnion_copy_ctx(obsUnion_ctx* dest, obsUnion_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(obsUnion_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
obsUnion_ctx* obsUnion_new_ctx(void* cdata){
   obsUnion_ctx* ctx = (obsUnion_ctx*)calloc(1, sizeof(obsUnion_ctx));
   ctx->client_data = cdata;
   obsUnion_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void obsUnion_step(obsUnion_ctx* ctx){
//LOCAL VARIABLES
   _boolean L9;
   _boolean L8;
   _boolean L7;
   _boolean L6;
   _boolean L10;
   _boolean L3;
   _boolean L15;
   _boolean L14;
   _boolean L16;
   _boolean L13;
   _boolean L2;
   _boolean T17;
   _boolean T12;
//CODE
   L9 = (ctx->_a || ctx->_b);
   L8 = (! L9);
   L7 = (ctx->_a && L8);
   L6 = (! L7);
   if (L7) {
      L10 = _false;
   } else {
      L10 = ctx->M12;
   }
   if (ctx->M4) {
      L3 = L6;
   } else {
      L3 = L10;
   }
   L15 = (ctx->_b && L8);
   L14 = (! L15);
   if (L15) {
      L16 = _false;
   } else {
      L16 = ctx->M17;
   }
   if (ctx->M4) {
      L13 = L14;
   } else {
      L13 = L16;
   }
   L2 = (L3 && L13);
   obsUnion_O_out(ctx->client_data, L2);
   T17 = L13;
   T12 = L3;
   ctx->M17 = T17;
   ctx->M17_nil = _false;
   ctx->M12 = T12;
   ctx->M12_nil = _false;
   ctx->M4 = ctx->M4 && !(_true);
}
