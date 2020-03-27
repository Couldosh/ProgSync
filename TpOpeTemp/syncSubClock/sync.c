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
   _boolean M17;
   _boolean M17_nil;
   _boolean M11;
   _boolean M11_nil;
   _boolean M4;
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
   ctx->M17_nil = _true;
   ctx->M11_nil = _true;
   ctx->M4 = _true;
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
   _boolean L8;
   _boolean L7;
   _boolean L6;
   _boolean L9;
   _boolean L3;
   _boolean L15;
   _boolean L14;
   _boolean L13;
   _boolean L16;
   _boolean L12;
   _boolean L2;
   _boolean T17;
   _boolean T11;
//CODE
   L8 = (! ctx->_a);
   L7 = (ctx->_b && L8);
   L6 = (! L7);
   if (L7) {
      L9 = _false;
   } else {
      L9 = ctx->M11;
   }
   if (ctx->M4) {
      L3 = L6;
   } else {
      L3 = L9;
   }
   L15 = (! ctx->_b);
   L14 = (ctx->_a && L15);
   L13 = (! L14);
   if (L14) {
      L16 = _false;
   } else {
      L16 = ctx->M17;
   }
   if (ctx->M4) {
      L12 = L13;
   } else {
      L12 = L16;
   }
   L2 = (L3 && L12);
   sync_O_isSync(ctx->client_data, L2);
   T17 = L12;
   T11 = L3;
   ctx->M17 = T17;
   ctx->M17_nil = _false;
   ctx->M11 = T11;
   ctx->M11_nil = _false;
   ctx->M4 = ctx->M4 && !(_true);
}
