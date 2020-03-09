/********
* ec2c version 0.68
* c file generated for node : Dmux 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Dmux_EC2C_SRC_FILE
#include "Dmux.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _in;
   _boolean _sel;
   //OUTPUTS
   _boolean _a;
   _boolean _b;
   //REGISTERS
} Dmux_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Dmux_I_in(Dmux_ctx* ctx, _boolean V){
   ctx->_in = V;
}
void Dmux_I_sel(Dmux_ctx* ctx, _boolean V){
   ctx->_sel = V;
}
extern void Dmux_O_a(void* cdata, _boolean);
extern void Dmux_O_b(void* cdata, _boolean);
#ifdef CKCHECK
extern void Dmux_BOT_a(void* cdata);
extern void Dmux_BOT_b(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Dmux_reset_input(Dmux_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Dmux_reset(Dmux_ctx* ctx){
   Dmux_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Dmux_copy_ctx(Dmux_ctx* dest, Dmux_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Dmux_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Dmux_ctx* Dmux_new_ctx(void* cdata){
   Dmux_ctx* ctx = (Dmux_ctx*)calloc(1, sizeof(Dmux_ctx));
   ctx->client_data = cdata;
   Dmux_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Dmux_step(Dmux_ctx* ctx){
//LOCAL VARIABLES
   _boolean L3;
   _boolean L2;
   _boolean L7;
//CODE
   L3 = (! ctx->_sel);
   if (L3) {
      L2 = ctx->_in;
   } else {
      L2 = _false;
   }
   Dmux_O_a(ctx->client_data, L2);
   if (ctx->_sel) {
      L7 = ctx->_in;
   } else {
      L7 = _false;
   }
   Dmux_O_b(ctx->client_data, L7);
}
