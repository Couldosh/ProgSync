/********
* ec2c version 0.68
* c file generated for node : periodic 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _periodic_EC2C_SRC_FILE
#include "periodic.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _c;
   _integer _n;
   //OUTPUTS
   _boolean _clock;
   _integer _counter;
   //REGISTERS
   _integer M11;
   _boolean M11_nil;
   _boolean M5;
} periodic_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void periodic_I_c(periodic_ctx* ctx, _boolean V){
   ctx->_c = V;
}
void periodic_I_n(periodic_ctx* ctx, _integer V){
   ctx->_n = V;
}
extern void periodic_O_clock(void* cdata, _boolean);
extern void periodic_O_counter(void* cdata, _integer);
#ifdef CKCHECK
extern void periodic_BOT_clock(void* cdata);
extern void periodic_BOT_counter(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void periodic_reset_input(periodic_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void periodic_reset(periodic_ctx* ctx){
   ctx->M11_nil = _true;
   ctx->M5 = _true;
   periodic_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void periodic_copy_ctx(periodic_ctx* dest, periodic_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(periodic_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
periodic_ctx* periodic_new_ctx(void* cdata){
   periodic_ctx* ctx = (periodic_ctx*)calloc(1, sizeof(periodic_ctx));
   ctx->client_data = cdata;
   periodic_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void periodic_step(periodic_ctx* ctx){
//LOCAL VARIABLES
   _integer L7;
   _boolean L10;
   _integer L13;
   _integer L12;
   _integer L9;
   _integer L4;
   _boolean L3;
   _boolean L2;
   _integer T11;
//CODE
   if (ctx->_c) {
      L7 = ctx->_n;
   } else {
      L7 = 1;
   }
   L10 = (ctx->M11 >= ctx->_n);
   L13 = (ctx->M11 + 1);
   if (ctx->_c) {
      L12 = L13;
   } else {
      L12 = ctx->M11;
   }
   if (L10) {
      L9 = 1;
   } else {
      L9 = L12;
   }
   if (ctx->M5) {
      L4 = L7;
   } else {
      L4 = L9;
   }
   L3 = (L4 >= ctx->_n);
   if (L3) {
      L2 = _true;
   } else {
      L2 = _false;
   }
   periodic_O_clock(ctx->client_data, L2);
   periodic_O_counter(ctx->client_data, L4);
   T11 = L4;
   ctx->M11 = T11;
   ctx->M11_nil = _false;
   ctx->M5 = ctx->M5 && !(_true);
}
