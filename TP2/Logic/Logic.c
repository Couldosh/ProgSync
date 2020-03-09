/********
* ec2c version 0.68
* c file generated for node : Logic 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Logic_EC2C_SRC_FILE
#include "Logic.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _And;
   _boolean _Nand;
   _boolean _Or;
   _boolean _Xor;
   //REGISTERS
} Logic_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Logic_I_a(Logic_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void Logic_I_b(Logic_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void Logic_O_And(void* cdata, _boolean);
extern void Logic_O_Nand(void* cdata, _boolean);
extern void Logic_O_Or(void* cdata, _boolean);
extern void Logic_O_Xor(void* cdata, _boolean);
#ifdef CKCHECK
extern void Logic_BOT_And(void* cdata);
extern void Logic_BOT_Nand(void* cdata);
extern void Logic_BOT_Or(void* cdata);
extern void Logic_BOT_Xor(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Logic_reset_input(Logic_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Logic_reset(Logic_ctx* ctx){
   Logic_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Logic_copy_ctx(Logic_ctx* dest, Logic_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Logic_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Logic_ctx* Logic_new_ctx(void* cdata){
   Logic_ctx* ctx = (Logic_ctx*)calloc(1, sizeof(Logic_ctx));
   ctx->client_data = cdata;
   Logic_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Logic_step(Logic_ctx* ctx){
//LOCAL VARIABLES
   _boolean L2;
   _boolean L5;
   _boolean L7;
   _boolean L9;
//CODE
   L2 = (ctx->_a && ctx->_b);
   Logic_O_And(ctx->client_data, L2);
   L5 = (! L2);
   Logic_O_Nand(ctx->client_data, L5);
   L7 = (ctx->_a || ctx->_b);
   Logic_O_Or(ctx->client_data, L7);
   L9 = (L7 && L5);
   Logic_O_Xor(ctx->client_data, L9);
}
