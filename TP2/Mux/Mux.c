/********
* ec2c version 0.68
* c file generated for node : Mux 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Mux_EC2C_SRC_FILE
#include "Mux.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   _boolean _set;
   //OUTPUTS
   _boolean _out;
   //REGISTERS
} Mux_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Mux_I_a(Mux_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void Mux_I_b(Mux_ctx* ctx, _boolean V){
   ctx->_b = V;
}
void Mux_I_set(Mux_ctx* ctx, _boolean V){
   ctx->_set = V;
}
extern void Mux_O_out(void* cdata, _boolean);
#ifdef CKCHECK
extern void Mux_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Mux_reset_input(Mux_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Mux_reset(Mux_ctx* ctx){
   Mux_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Mux_copy_ctx(Mux_ctx* dest, Mux_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Mux_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Mux_ctx* Mux_new_ctx(void* cdata){
   Mux_ctx* ctx = (Mux_ctx*)calloc(1, sizeof(Mux_ctx));
   ctx->client_data = cdata;
   Mux_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Mux_step(Mux_ctx* ctx){
//LOCAL VARIABLES
   _boolean L3;
//CODE
   if (ctx->_set) {
      L3 = ctx->_a;
   } else {
      L3 = ctx->_b;
   }
   Mux_O_out(ctx->client_data, L3);
}
