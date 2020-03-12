/********
* ec2c version 0.68
* c file generated for node : ObsFullAdder 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _ObsFullAdder_EC2C_SRC_FILE
#include "ObsFullAdder.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   _boolean _Cin;
   //OUTPUTS
   _boolean _out;
   //REGISTERS
} ObsFullAdder_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void ObsFullAdder_I_a(ObsFullAdder_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void ObsFullAdder_I_b(ObsFullAdder_ctx* ctx, _boolean V){
   ctx->_b = V;
}
void ObsFullAdder_I_Cin(ObsFullAdder_ctx* ctx, _boolean V){
   ctx->_Cin = V;
}
extern void ObsFullAdder_O_out(void* cdata, _boolean);
#ifdef CKCHECK
extern void ObsFullAdder_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void ObsFullAdder_reset_input(ObsFullAdder_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void ObsFullAdder_reset(ObsFullAdder_ctx* ctx){
   ObsFullAdder_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void ObsFullAdder_copy_ctx(ObsFullAdder_ctx* dest, ObsFullAdder_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(ObsFullAdder_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
ObsFullAdder_ctx* ObsFullAdder_new_ctx(void* cdata){
   ObsFullAdder_ctx* ctx = (ObsFullAdder_ctx*)calloc(1, sizeof(ObsFullAdder_ctx
));
   ctx->client_data = cdata;
   ObsFullAdder_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void ObsFullAdder_step(ObsFullAdder_ctx* ctx){
//LOCAL VARIABLES
   _boolean L5;
   _boolean L7;
   _boolean L6;
   _boolean L4;
   _boolean L10;
   _boolean L9;
   _boolean L11;
   _boolean L8;
   _boolean L3;
//CODE
   L5 = (ctx->_a && ctx->_b);
   L7 = (ctx->_a != ctx->_b);
   L6 = (L7 && ctx->_Cin);
   L4 = (L5 || L6);
   L10 = (ctx->_a && ctx->_Cin);
   L9 = (L5 || L10);
   L11 = (ctx->_b && ctx->_Cin);
   L8 = (L9 || L11);
   L3 = (L4 == L8);
   ObsFullAdder_O_out(ctx->client_data, L3);
}
