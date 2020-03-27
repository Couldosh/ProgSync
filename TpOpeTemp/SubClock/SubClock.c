/********
* ec2c version 0.68
* c file generated for node : SubClock 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _SubClock_EC2C_SRC_FILE
#include "SubClock.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _isSubClock;
   //REGISTERS
   _boolean M10;
   _boolean M10_nil;
   _boolean M3;
} SubClock_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void SubClock_I_a(SubClock_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void SubClock_I_b(SubClock_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void SubClock_O_isSubClock(void* cdata, _boolean);
#ifdef CKCHECK
extern void SubClock_BOT_isSubClock(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void SubClock_reset_input(SubClock_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void SubClock_reset(SubClock_ctx* ctx){
   ctx->M10_nil = _true;
   ctx->M3 = _true;
   SubClock_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void SubClock_copy_ctx(SubClock_ctx* dest, SubClock_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(SubClock_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
SubClock_ctx* SubClock_new_ctx(void* cdata){
   SubClock_ctx* ctx = (SubClock_ctx*)calloc(1, sizeof(SubClock_ctx));
   ctx->client_data = cdata;
   SubClock_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void SubClock_step(SubClock_ctx* ctx){
//LOCAL VARIABLES
   _boolean L7;
   _boolean L6;
   _boolean L5;
   _boolean L8;
   _boolean L2;
   _boolean T10;
//CODE
   L7 = (! ctx->_a);
   L6 = (ctx->_b && L7);
   L5 = (! L6);
   if (L6) {
      L8 = _false;
   } else {
      L8 = ctx->M10;
   }
   if (ctx->M3) {
      L2 = L5;
   } else {
      L2 = L8;
   }
   SubClock_O_isSubClock(ctx->client_data, L2);
   T10 = L2;
   ctx->M10 = T10;
   ctx->M10_nil = _false;
   ctx->M3 = ctx->M3 && !(_true);
}
