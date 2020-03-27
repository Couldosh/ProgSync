/********
* ec2c version 0.68
* c file generated for node : inf_sup 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _inf_sup_EC2C_SRC_FILE
#include "inf_sup.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _inf;
   _boolean _sup;
   //REGISTERS
   _integer M22;
   _boolean M22_nil;
   _boolean M14;
} inf_sup_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void inf_sup_I_a(inf_sup_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void inf_sup_I_b(inf_sup_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void inf_sup_O_inf(void* cdata, _boolean);
extern void inf_sup_O_sup(void* cdata, _boolean);
#ifdef CKCHECK
extern void inf_sup_BOT_inf(void* cdata);
extern void inf_sup_BOT_sup(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void inf_sup_reset_input(inf_sup_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void inf_sup_reset(inf_sup_ctx* ctx){
   ctx->M22_nil = _true;
   ctx->M14 = _true;
   inf_sup_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void inf_sup_copy_ctx(inf_sup_ctx* dest, inf_sup_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(inf_sup_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
inf_sup_ctx* inf_sup_new_ctx(void* cdata){
   inf_sup_ctx* ctx = (inf_sup_ctx*)calloc(1, sizeof(inf_sup_ctx));
   ctx->client_data = cdata;
   inf_sup_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void inf_sup_step(inf_sup_ctx* ctx){
//LOCAL VARIABLES
   _boolean L3;
   _boolean L7;
   _boolean L8;
   _boolean L6;
   _integer L17;
   _integer L15;
   _integer L21;
   _integer L24;
   _integer L23;
   _integer L20;
   _integer L13;
   _integer L12;
   _boolean L11;
   _boolean L10;
   _boolean L5;
   _boolean L2;
   _boolean L29;
   _boolean L28;
   _boolean L27;
   _boolean L26;
   _integer T22;
//CODE
   L3 = (ctx->_a && ctx->_b);
   L7 = (! ctx->_a);
   L8 = (! ctx->_b);
   L6 = (L7 && L8);
   if (L6) {
      L17 = 0;
   } else {
      L17 = 1;
   }
   if (L3) {
      L15 = 2;
   } else {
      L15 = L17;
   }
   L21 = (ctx->M22 + 2);
   L24 = (ctx->M22 + 1);
   if (L6) {
      L23 = ctx->M22;
   } else {
      L23 = L24;
   }
   if (L3) {
      L20 = L21;
   } else {
      L20 = L23;
   }
   if (ctx->M14) {
      L13 = L15;
   } else {
      L13 = L20;
   }
   L12 = (L13 % 2);
   L11 = (L12 == 1);
   if (L11) {
      L10 = _true;
   } else {
      L10 = _false;
   }
   if (L6) {
      L5 = _false;
   } else {
      L5 = L10;
   }
   if (L3) {
      L2 = _true;
   } else {
      L2 = L5;
   }
   inf_sup_O_inf(ctx->client_data, L2);
   L29 = (L12 == 0);
   if (L29) {
      L28 = _true;
   } else {
      L28 = _false;
   }
   if (L6) {
      L27 = _false;
   } else {
      L27 = L28;
   }
   if (L3) {
      L26 = _true;
   } else {
      L26 = L27;
   }
   inf_sup_O_sup(ctx->client_data, L26);
   T22 = L13;
   ctx->M22 = T22;
   ctx->M22_nil = _false;
   ctx->M14 = ctx->M14 && !(_true);
}
