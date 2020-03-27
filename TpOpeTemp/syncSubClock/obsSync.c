/********
* ec2c version 0.68
* c file generated for node : obsSync 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _obsSync_EC2C_SRC_FILE
#include "obsSync.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _isEqual;
   //REGISTERS
   _integer M39;
   _boolean M39_nil;
   _integer M34;
   _boolean M34_nil;
   _boolean M24;
   _boolean M24_nil;
   _boolean M19;
   _boolean M19_nil;
   _boolean M13;
   _boolean M13_nil;
   _boolean M6;
} obsSync_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void obsSync_I_a(obsSync_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void obsSync_I_b(obsSync_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void obsSync_O_isEqual(void* cdata, _boolean);
#ifdef CKCHECK
extern void obsSync_BOT_isEqual(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void obsSync_reset_input(obsSync_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void obsSync_reset(obsSync_ctx* ctx){
   ctx->M39_nil = _true;
   ctx->M34_nil = _true;
   ctx->M24_nil = _true;
   ctx->M19_nil = _true;
   ctx->M13_nil = _true;
   ctx->M6 = _true;
   obsSync_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void obsSync_copy_ctx(obsSync_ctx* dest, obsSync_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(obsSync_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
obsSync_ctx* obsSync_new_ctx(void* cdata){
   obsSync_ctx* ctx = (obsSync_ctx*)calloc(1, sizeof(obsSync_ctx));
   ctx->client_data = cdata;
   obsSync_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void obsSync_step(obsSync_ctx* ctx){
//LOCAL VARIABLES
   _boolean L10;
   _boolean L9;
   _boolean L8;
   _boolean L11;
   _boolean L5;
   _boolean L17;
   _boolean L16;
   _boolean L15;
   _boolean L18;
   _boolean L14;
   _boolean L4;
   _boolean L21;
   _boolean L23;
   _boolean L22;
   _boolean L20;
   _boolean L3;
   _integer L29;
   _integer L33;
   _integer L32;
   _integer L28;
   _integer L36;
   _integer L38;
   _integer L37;
   _integer L35;
   _boolean L27;
   _boolean L40;
   _boolean L26;
   _boolean L25;
   _boolean L2;
   _integer T39;
   _integer T34;
   _boolean T24;
   _boolean T19;
   _boolean T13;
//CODE
   L10 = (! ctx->_a);
   L9 = (ctx->_b && L10);
   L8 = (! L9);
   if (L9) {
      L11 = _false;
   } else {
      L11 = ctx->M13;
   }
   if (ctx->M6) {
      L5 = L8;
   } else {
      L5 = L11;
   }
   L17 = (! ctx->_b);
   L16 = (ctx->_a && L17);
   L15 = (! L16);
   if (L16) {
      L18 = _false;
   } else {
      L18 = ctx->M19;
   }
   if (ctx->M6) {
      L14 = L15;
   } else {
      L14 = L18;
   }
   L4 = (L5 && L14);
   L21 = (ctx->_a == ctx->_b);
   L23 = (ctx->_a == L17);
   if (L23) {
      L22 = _false;
   } else {
      L22 = ctx->M24;
   }
   if (ctx->M6) {
      L20 = L21;
   } else {
      L20 = L22;
   }
   L3 = (L4 == L20);
   if (ctx->_a) {
      L29 = 1;
   } else {
      L29 = 0;
   }
   L33 = (ctx->M34 + 1);
   if (ctx->_a) {
      L32 = L33;
   } else {
      L32 = ctx->M34;
   }
   if (ctx->M6) {
      L28 = L29;
   } else {
      L28 = L32;
   }
   if (ctx->_b) {
      L36 = 1;
   } else {
      L36 = 0;
   }
   L38 = (ctx->M39 + 1);
   if (ctx->_b) {
      L37 = L38;
   } else {
      L37 = ctx->M39;
   }
   if (ctx->M6) {
      L35 = L36;
   } else {
      L35 = L37;
   }
   L27 = (L28 >= L35);
   L40 = (L35 >= L28);
   L26 = (L27 && L40);
   L25 = (L20 == L26);
   L2 = (L3 && L25);
   obsSync_O_isEqual(ctx->client_data, L2);
   T39 = L35;
   T34 = L28;
   T24 = L20;
   T19 = L14;
   T13 = L5;
   ctx->M39 = T39;
   ctx->M39_nil = _false;
   ctx->M34 = T34;
   ctx->M34_nil = _false;
   ctx->M24 = T24;
   ctx->M24_nil = _false;
   ctx->M19 = T19;
   ctx->M19_nil = _false;
   ctx->M13 = T13;
   ctx->M13_nil = _false;
   ctx->M6 = ctx->M6 && !(_true);
}
