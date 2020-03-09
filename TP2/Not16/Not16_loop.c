/********
* ec2c version 0.68
* c main file generated for node : Not16 
* to be used with : Not16.c 
* and             : Not16.h 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "Not16.h"

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
void Not16_BOT_out_0(void* cdata){
   _put_bottom("out_0");
}
void Not16_BOT_out_1(void* cdata){
   _put_bottom("out_1");
}
void Not16_BOT_out_2(void* cdata){
   _put_bottom("out_2");
}
void Not16_BOT_out_3(void* cdata){
   _put_bottom("out_3");
}
void Not16_BOT_out_4(void* cdata){
   _put_bottom("out_4");
}
void Not16_BOT_out_5(void* cdata){
   _put_bottom("out_5");
}
void Not16_BOT_out_6(void* cdata){
   _put_bottom("out_6");
}
void Not16_BOT_out_7(void* cdata){
   _put_bottom("out_7");
}
void Not16_BOT_out_8(void* cdata){
   _put_bottom("out_8");
}
void Not16_BOT_out_9(void* cdata){
   _put_bottom("out_9");
}
void Not16_BOT_out_10(void* cdata){
   _put_bottom("out_10");
}
void Not16_BOT_out_11(void* cdata){
   _put_bottom("out_11");
}
void Not16_BOT_out_12(void* cdata){
   _put_bottom("out_12");
}
void Not16_BOT_out_13(void* cdata){
   _put_bottom("out_13");
}
void Not16_BOT_out_14(void* cdata){
   _put_bottom("out_14");
}
void Not16_BOT_out_15(void* cdata){
   _put_bottom("out_15");
}
#endif
/* Output procedures **********************/
void Not16_O_out_0(void* cdata, _boolean _V) {
   _put_bool("out_0", _V);
}
void Not16_O_out_1(void* cdata, _boolean _V) {
   _put_bool("out_1", _V);
}
void Not16_O_out_2(void* cdata, _boolean _V) {
   _put_bool("out_2", _V);
}
void Not16_O_out_3(void* cdata, _boolean _V) {
   _put_bool("out_3", _V);
}
void Not16_O_out_4(void* cdata, _boolean _V) {
   _put_bool("out_4", _V);
}
void Not16_O_out_5(void* cdata, _boolean _V) {
   _put_bool("out_5", _V);
}
void Not16_O_out_6(void* cdata, _boolean _V) {
   _put_bool("out_6", _V);
}
void Not16_O_out_7(void* cdata, _boolean _V) {
   _put_bool("out_7", _V);
}
void Not16_O_out_8(void* cdata, _boolean _V) {
   _put_bool("out_8", _V);
}
void Not16_O_out_9(void* cdata, _boolean _V) {
   _put_bool("out_9", _V);
}
void Not16_O_out_10(void* cdata, _boolean _V) {
   _put_bool("out_10", _V);
}
void Not16_O_out_11(void* cdata, _boolean _V) {
   _put_bool("out_11", _V);
}
void Not16_O_out_12(void* cdata, _boolean _V) {
   _put_bool("out_12", _V);
}
void Not16_O_out_13(void* cdata, _boolean _V) {
   _put_bool("out_13", _V);
}
void Not16_O_out_14(void* cdata, _boolean _V) {
   _put_bool("out_14", _V);
}
void Not16_O_out_15(void* cdata, _boolean _V) {
   _put_bool("out_15", _V);
}/* Main procedure *************************/
int main(){
   
   int s = 0;
   /* Context allocation */
   struct Not16_ctx* ctx = Not16_new_ctx(NULL);
   Not16_reset(ctx);
   /* Main loop */
   ISATTY = isatty(0);
   while(1){
      if (ISATTY) printf("## STEP %d ##########\n", s+1);
      else if(s) printf("\n");
      fflush(stdout);
      ++s;
      Not16_I_in_0(ctx, _get_bool("in_0"));
      Not16_I_in_1(ctx, _get_bool("in_1"));
      Not16_I_in_2(ctx, _get_bool("in_2"));
      Not16_I_in_3(ctx, _get_bool("in_3"));
      Not16_I_in_4(ctx, _get_bool("in_4"));
      Not16_I_in_5(ctx, _get_bool("in_5"));
      Not16_I_in_6(ctx, _get_bool("in_6"));
      Not16_I_in_7(ctx, _get_bool("in_7"));
      Not16_I_in_8(ctx, _get_bool("in_8"));
      Not16_I_in_9(ctx, _get_bool("in_9"));
      Not16_I_in_10(ctx, _get_bool("in_10"));
      Not16_I_in_11(ctx, _get_bool("in_11"));
      Not16_I_in_12(ctx, _get_bool("in_12"));
      Not16_I_in_13(ctx, _get_bool("in_13"));
      Not16_I_in_14(ctx, _get_bool("in_14"));
      Not16_I_in_15(ctx, _get_bool("in_15"));
      Not16_step(ctx);
      
   }
   return 1;
   
}
