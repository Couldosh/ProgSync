/********
* ec2c version 0.68
* c file generated for node : AltInit 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _AltInit_EC2C_SRC_FILE
#include "AltInit.h"
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
   _boolean M24;
   _boolean M24_nil;
   _boolean M16;
   _boolean M16_nil;
   _boolean M10;
   _boolean M10_nil;
   _boolean M3;
} AltInit_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void AltInit_I_a(AltInit_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void AltInit_I_b(AltInit_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void AltInit_O_err(void* cdata, _boolean);
#ifdef CKCHECK
extern void AltInit_BOT_err(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void AltInit_reset_input(AltInit_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void AltInit_reset(AltInit_ctx* ctx){
   ctx->M24_nil = _true;
   ctx->M16_nil = _true;
   ctx->M10_nil = _true;
   ctx->M3 = _true;
   AltInit_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void AltInit_copy_ctx(AltInit_ctx* dest, AltInit_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(AltInit_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
AltInit_ctx* AltInit_new_ctx(void* cdata){
   AltInit_ctx* ctx = (AltInit_ctx*)calloc(1, sizeof(AltInit_ctx));
   ctx->client_data = cdata;
   AltInit_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void AltInit_step(AltInit_ctx* ctx){
//LOCAL VARIABLES
   _boolean L8;
   _boolean L9;
   _boolean L7;
   _boolean L15;
   _boolean L14;
   _boolean L13;
   _boolean L12;
   _boolean L22;
   _boolean L23;
   _boolean L21;
   _boolean L26;
   _boolean L25;
   _boolean L20;
   _boolean L19;
   _boolean L18;
   _boolean L28;
   _boolean L27;
   _boolean L17;
   _boolean L11;
   _boolean L6;
   _boolean L2;
   _boolean T24;
   _boolean T16;
   _boolean T10;
//CODE
   L8 = (! ctx->_a);
   L9 = (! ctx->_b);
   L7 = (L8 && L9);
   L15 = (ctx->M16 && L8);
   L14 = (L15 && L9);
   if (ctx->M3) {
      L13 = _true;
   } else {
      L13 = L14;
   }
   L12 = (! L13);
   L22 = (ctx->M16 && ctx->_b);
   L23 = (ctx->M24 && ctx->_a);
   L21 = (L22 || L23);
   L26 = (! ctx->M24);
   L25 = (L26 && ctx->_b);
   L20 = (L21 || L25);
   if (ctx->M3) {
      L19 = _false;
   } else {
      L19 = L20;
   }
   L18 = (L19 && ctx->_a);
   L28 = (! L19);
   L27 = (L28 && ctx->_b);
   L17 = (L18 || L27);
   L11 = (L12 && L17);
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
   AltInit_O_err(ctx->client_data, L2);
   T24 = L19;
   T16 = L13;
   T10 = L2;
   ctx->M24 = T24;
   ctx->M24_nil = _false;
   ctx->M16 = T16;
   ctx->M16_nil = _false;
   ctx->M10 = T10;
   ctx->M10_nil = _false;
   ctx->M3 = ctx->M3 && !(_true);
}
