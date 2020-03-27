/********
* ec2c version 0.68
* c file generated for node : sync 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _sync_EC2C_SRC_FILE
#include "sync.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _isSync;
   //REGISTERS
   _boolean M10;
   _boolean M10_nil;
   _boolean M3;
} sync_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void sync_I_a(sync_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void sync_I_b(sync_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void sync_O_isSync(void* cdata, _boolean);
#ifdef CKCHECK
extern void sync_BOT_isSync(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void sync_reset_input(sync_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void sync_reset(sync_ctx* ctx){
   ctx->M10_nil = _true;
   ctx->M3 = _true;
   sync_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void sync_copy_ctx(sync_ctx* dest, sync_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(sync_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
sync_ctx* sync_new_ctx(void* cdata){
   sync_ctx* ctx = (sync_ctx*)calloc(1, sizeof(sync_ctx));
   ctx->client_data = cdata;
   sync_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void sync_step(sync_ctx* ctx){
//LOCAL VARIABLES
   _boolean L5;
   _boolean L8;
   _boolean L7;
   _boolean L6;
   _boolean L2;
   _boolean T10;
//CODE
   L5 = (ctx->_a == ctx->_b);
   L8 = (! ctx->_b);
   L7 = (ctx->_a == L8);
   if (L7) {
      L6 = _false;
   } else {
      L6 = ctx->M10;
   }
   if (ctx->M3) {
      L2 = L5;
   } else {
      L2 = L6;
   }
   sync_O_isSync(ctx->client_data, L2);
   T10 = L2;
   ctx->M10 = T10;
   ctx->M10_nil = _false;
   ctx->M3 = ctx->M3 && !(_true);
}
