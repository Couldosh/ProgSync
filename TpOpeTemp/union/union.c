/********
* ec2c version 0.68
* c file generated for node : union 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _union_EC2C_SRC_FILE
#include "union.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _c;
   //REGISTERS
} union_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void union_I_a(union_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void union_I_b(union_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void union_O_c(void* cdata, _boolean);
#ifdef CKCHECK
extern void union_BOT_c(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void union_reset_input(union_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void union_reset(union_ctx* ctx){
   union_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void union_copy_ctx(union_ctx* dest, union_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(union_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
union_ctx* union_new_ctx(void* cdata){
   union_ctx* ctx = (union_ctx*)calloc(1, sizeof(union_ctx));
   ctx->client_data = cdata;
   union_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void union_step(union_ctx* ctx){
//LOCAL VARIABLES
   _boolean L2;
//CODE
   L2 = (ctx->_a || ctx->_b);
   union_O_c(ctx->client_data, L2);
}
