/********
* ec2c version 0.68
* c file generated for node : main 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _main_EC2C_SRC_FILE
#include "main.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _c;
   //OUTPUTS
   _boolean _out;
   //REGISTERS
   _integer M10;
   _boolean M10_nil;
   _boolean M4;
} main_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void main_I_c(main_ctx* ctx, _boolean V){
   ctx->_c = V;
}
extern void main_O_out(void* cdata, _boolean);
#ifdef CKCHECK
extern void main_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void main_reset_input(main_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void main_reset(main_ctx* ctx){
   ctx->M10_nil = _true;
   ctx->M4 = _true;
   main_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void main_copy_ctx(main_ctx* dest, main_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(main_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
main_ctx* main_new_ctx(void* cdata){
   main_ctx* ctx = (main_ctx*)calloc(1, sizeof(main_ctx));
   ctx->client_data = cdata;
   main_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void main_step(main_ctx* ctx){
//LOCAL VARIABLES
   _boolean L9;
   _boolean L12;
   _boolean L8;
   _integer L13;
   _integer L7;
   _integer L3;
   _boolean L2;
   _boolean L1;
   _integer T10;
//CODE
   L9 = (ctx->M10 == 2);
   L12 = (! ctx->_c);
   L8 = (L9 || L12);
   L13 = (ctx->M10 + 1);
   if (L8) {
      L7 = ctx->M10;
   } else {
      L7 = L13;
   }
   if (ctx->M4) {
      L3 = 0;
   } else {
      L3 = L7;
   }
   L2 = (L3 == 2);
   if (L2) {
      L1 = ctx->_c;
   } else {
      L1 = _false;
   }
   main_O_out(ctx->client_data, L1);
   T10 = L3;
   ctx->M10 = T10;
   ctx->M10_nil = _false;
   ctx->M4 = ctx->M4 && !(_true);
}
