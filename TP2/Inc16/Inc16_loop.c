/********
* ec2c version 0.68
* c main file generated for node : Inc16 
* to be used with : Inc16.c 
* and             : Inc16.h 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "Inc16.h"

/* Print a promt ? ************************/
static int ISATTY;
/* MACROS DEFINITIONS ****************/
#ifndef TT
#define TT "true"
#endif
#ifndef FF
#define FF "false"
#endif
#ifndef BB
#define BB "bottom"
#endif
#ifdef CKCHECK
/* set this macro for testing output clocks */
#endif

/* Standard Input procedures **************/
_boolean _get_bool(char* n){
   char b[512];
   _boolean r = 0;
   int s = 1;
   char c;
   do {
      if(ISATTY) {
         if((s != 1)||(r == -1)) printf("\a");
         printf("%s (1,t,T/0,f,F) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      s = sscanf(b, "%c", &c);
      r = -1;
      if((c == '0') || (c == 'f') || (c == 'F')) r = 0;
      if((c == '1') || (c == 't') || (c == 'T')) r = 1;
   } while((s != 1) || (r == -1));
   return r;
}
_integer _get_int(char* n){
   char b[512];
   _integer r;
   int s = 1;
   do {
      if(ISATTY) {
         if(s != 1) printf("\a");
         printf("%s (integer) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      s = sscanf(b, "%d", &r);
   } while(s != 1);
   return r;
}
#define REALFORMAT ((sizeof(_real)==8)?"%lf":"%f")
_real _get_real(char* n){
   char b[512];
   _real r;
   int s = 1;
   do {
      if(ISATTY) {
         if(s != 1) printf("\a");
         printf("%s (real) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      s = sscanf(b, REALFORMAT, &r);
   } while(s != 1);
   return r;
}
/* Standard Output procedures **************/
void _put_bottom(char* n){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", BB);
   if(ISATTY) printf("\n");
}
void _put_bool(char* n, _boolean _V){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", (_V)? TT : FF);
   if(ISATTY) printf("\n");
}
void _put_int(char* n, _integer _V){
   if(ISATTY) printf("%s = ", n);
   printf("%d ", _V);
   if(ISATTY) printf("\n");
}
void _put_real(char* n, _real _V){
   if(ISATTY) printf("%s = ", n);
   printf("%f ", _V);
   if(ISATTY) printf("\n");
}
/* Output procedures **********************/
#ifdef CKCHECK
void Inc16_BOT_out_0(void* cdata){
   _put_bottom("out_0");
}
void Inc16_BOT_out_1(void* cdata){
   _put_bottom("out_1");
}
void Inc16_BOT_out_2(void* cdata){
   _put_bottom("out_2");
}
void Inc16_BOT_out_3(void* cdata){
   _put_bottom("out_3");
}
void Inc16_BOT_out_4(void* cdata){
   _put_bottom("out_4");
}
void Inc16_BOT_out_5(void* cdata){
   _put_bottom("out_5");
}
void Inc16_BOT_out_6(void* cdata){
   _put_bottom("out_6");
}
void Inc16_BOT_out_7(void* cdata){
   _put_bottom("out_7");
}
void Inc16_BOT_out_8(void* cdata){
   _put_bottom("out_8");
}
void Inc16_BOT_out_9(void* cdata){
   _put_bottom("out_9");
}
void Inc16_BOT_out_10(void* cdata){
   _put_bottom("out_10");
}
void Inc16_BOT_out_11(void* cdata){
   _put_bottom("out_11");
}
void Inc16_BOT_out_12(void* cdata){
   _put_bottom("out_12");
}
void Inc16_BOT_out_13(void* cdata){
   _put_bottom("out_13");
}
void Inc16_BOT_out_14(void* cdata){
   _put_bottom("out_14");
}
void Inc16_BOT_out_15(void* cdata){
   _put_bottom("out_15");
}
void Inc16_BOT_carry(void* cdata){
   _put_bottom("carry");
}
#endif
/* Output procedures **********************/
void Inc16_O_out_0(void* cdata, _boolean _V) {
   _put_bool("out_0", _V);
}
void Inc16_O_out_1(void* cdata, _boolean _V) {
   _put_bool("out_1", _V);
}
void Inc16_O_out_2(void* cdata, _boolean _V) {
   _put_bool("out_2", _V);
}
void Inc16_O_out_3(void* cdata, _boolean _V) {
   _put_bool("out_3", _V);
}
void Inc16_O_out_4(void* cdata, _boolean _V) {
   _put_bool("out_4", _V);
}
void Inc16_O_out_5(void* cdata, _boolean _V) {
   _put_bool("out_5", _V);
}
void Inc16_O_out_6(void* cdata, _boolean _V) {
   _put_bool("out_6", _V);
}
void Inc16_O_out_7(void* cdata, _boolean _V) {
   _put_bool("out_7", _V);
}
void Inc16_O_out_8(void* cdata, _boolean _V) {
   _put_bool("out_8", _V);
}
void Inc16_O_out_9(void* cdata, _boolean _V) {
   _put_bool("out_9", _V);
}
void Inc16_O_out_10(void* cdata, _boolean _V) {
   _put_bool("out_10", _V);
}
void Inc16_O_out_11(void* cdata, _boolean _V) {
   _put_bool("out_11", _V);
}
void Inc16_O_out_12(void* cdata, _boolean _V) {
   _put_bool("out_12", _V);
}
void Inc16_O_out_13(void* cdata, _boolean _V) {
   _put_bool("out_13", _V);
}
void Inc16_O_out_14(void* cdata, _boolean _V) {
   _put_bool("out_14", _V);
}
void Inc16_O_out_15(void* cdata, _boolean _V) {
   _put_bool("out_15", _V);
}
void Inc16_O_carry(void* cdata, _boolean _V) {
   _put_bool("carry", _V);
}/* Main procedure *************************/
int main(){
   
   int s = 0;
   /* Context allocation */
   struct Inc16_ctx* ctx = Inc16_new_ctx(NULL);
   Inc16_reset(ctx);
   /* Main loop */
   ISATTY = isatty(0);
   while(1){
      if (ISATTY) printf("## STEP %d ##########\n", s+1);
      else if(s) printf("\n");
      fflush(stdout);
      ++s;
      Inc16_I_x_0(ctx, _get_bool("x_0"));
      Inc16_I_x_1(ctx, _get_bool("x_1"));
      Inc16_I_x_2(ctx, _get_bool("x_2"));
      Inc16_I_x_3(ctx, _get_bool("x_3"));
      Inc16_I_x_4(ctx, _get_bool("x_4"));
      Inc16_I_x_5(ctx, _get_bool("x_5"));
      Inc16_I_x_6(ctx, _get_bool("x_6"));
      Inc16_I_x_7(ctx, _get_bool("x_7"));
      Inc16_I_x_8(ctx, _get_bool("x_8"));
      Inc16_I_x_9(ctx, _get_bool("x_9"));
      Inc16_I_x_10(ctx, _get_bool("x_10"));
      Inc16_I_x_11(ctx, _get_bool("x_11"));
      Inc16_I_x_12(ctx, _get_bool("x_12"));
      Inc16_I_x_13(ctx, _get_bool("x_13"));
      Inc16_I_x_14(ctx, _get_bool("x_14"));
      Inc16_I_x_15(ctx, _get_bool("x_15"));
      Inc16_step(ctx);
      
   }
   return 1;
   
}
