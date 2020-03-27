/********
* ec2c version 0.68
* c file generated for node : Alt 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Alt_EC2C_SRC_FILE
#include "Alt.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _err;
   //REGISTERS
   _boolean M13;
   _boolean M13_nil;
   _boolean M10;
   _boolean M10_nil;
   _boolean M3;
} Alt_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Alt_I_a(Alt_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void Alt_I_b(Alt_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void Alt_O_err(void* cdata, _boolean);
#ifdef CKCHECK
extern void Alt_BOT_err(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Alt_reset_input(Alt_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Alt_reset(Alt_ctx* ctx){
   ctx->M13_nil = _true;
   ctx->M10_nil = _true;
   ctx->M3 = _true;
   Alt_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Alt_copy_ctx(Alt_ctx* dest, Alt_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Alt_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Alt_ctx* Alt_new_ctx(void* cdata){
   Alt_ctx* ctx = (Alt_ctx*)calloc(1, sizeof(Alt_ctx));
   ctx->client_data = cdata;
   Alt_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Alt_step(Alt_ctx* ctx){
//LOCAL VARIABLES
   _boolean L8;
   _boolean L9;
   _boolean L7;
   _boolean L12;
   _boolean L17;
   _boolean L20;
   _boolean L11;
   _boolean L6;
   _boolean L2;
   _boolean L16;
   _boolean L19;
   _boolean L18;
   _boolean L15;
   _boolean L14;
   _boolean T13;
   _boolean T10;
//CODE
   L8 = (! ctx->_a);
   L9 = (! ctx->_b);
   L7 = (L8 && L9);
   L12 = (ctx->M13 && ctx->_a);
   L17 = (! ctx->M13);
   L20 = (L17 && ctx->_b);
   L11 = (L12 || L20);
   if (L7) {
      L6 = ctx->M10;
   } else {
      L6 = L11;
   }
   if (ctx->M3) {
      L2 = _false;
   } else {
      L2 = L6;
   }
   Alt_O_err(ctx->client_data, L2);
   L16 = (ctx->_a && L17);
   L19 = (ctx->_b && ctx->M13);
   if (L19) {
      L18 = _false;
   } else {
      L18 = ctx->M13;
   }
   if (L16) {
      L15 = _true;
   } else {
      L15 = L18;
   }
   if (ctx->M3) {
      L14 = ctx->_a;
   } else {
      L14 = L15;
   }
   T13 = L14;
   T10 = L2;
   ctx->M13 = T13;
   ctx->M13_nil = _false;
   ctx->M10 = T10;
   ctx->M10_nil = _false;
   ctx->M3 = ctx->M3 && !(_true);
}
