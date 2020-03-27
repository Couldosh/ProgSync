/********
* ec2c version 0.68
* c file generated for node : faster 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _faster_EC2C_SRC_FILE
#include "faster.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _aFaster;
   _integer _countA;
   _integer _countB;
   //REGISTERS
   _integer M16;
   _boolean M16_nil;
   _integer M11;
   _boolean M11_nil;
   _boolean M4;
} faster_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void faster_I_a(faster_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void faster_I_b(faster_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void faster_O_aFaster(void* cdata, _boolean);
extern void faster_O_countA(void* cdata, _integer);
extern void faster_O_countB(void* cdata, _integer);
#ifdef CKCHECK
extern void faster_BOT_aFaster(void* cdata);
extern void faster_BOT_countA(void* cdata);
extern void faster_BOT_countB(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void faster_reset_input(faster_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void faster_reset(faster_ctx* ctx){
   ctx->M16_nil = _true;
   ctx->M11_nil = _true;
   ctx->M4 = _true;
   faster_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void faster_copy_ctx(faster_ctx* dest, faster_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(faster_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
faster_ctx* faster_new_ctx(void* cdata){
   faster_ctx* ctx = (faster_ctx*)calloc(1, sizeof(faster_ctx));
   ctx->client_data = cdata;
   faster_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void faster_step(faster_ctx* ctx){
//LOCAL VARIABLES
   _integer L6;
   _integer L10;
   _integer L9;
   _integer L3;
   _integer L13;
   _integer L15;
   _integer L14;
   _integer L12;
   _boolean L2;
   _integer T16;
   _integer T11;
//CODE
   if (ctx->_a) {
      L6 = 1;
   } else {
      L6 = 0;
   }
   L10 = (ctx->M11 + 1);
   if (ctx->_a) {
      L9 = L10;
   } else {
      L9 = ctx->M11;
   }
   if (ctx->M4) {
      L3 = L6;
   } else {
      L3 = L9;
   }
   if (ctx->_b) {
      L13 = 1;
   } else {
      L13 = 0;
   }
   L15 = (ctx->M16 + 1);
   if (ctx->_b) {
      L14 = L15;
   } else {
      L14 = ctx->M16;
   }
   if (ctx->M4) {
      L12 = L13;
   } else {
      L12 = L14;
   }
   L2 = (L3 >= L12);
   faster_O_aFaster(ctx->client_data, L2);
   faster_O_countA(ctx->client_data, L3);
   faster_O_countB(ctx->client_data, L12);
   T16 = L12;
   T11 = L3;
   ctx->M16 = T16;
   ctx->M16_nil = _false;
   ctx->M11 = T11;
   ctx->M11_nil = _false;
   ctx->M4 = ctx->M4 && !(_true);
}
