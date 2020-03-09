/********
* ec2c version 0.68
* c main file generated for node : MainMuxN 
* to be used with : MainMuxN.c 
* and             : MainMuxN.h 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "MainMuxN.h"

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
void MainMuxN_BOT_out_0(void* cdata){
   _put_bottom("out_0");
}
void MainMuxN_BOT_out_1(void* cdata){
   _put_bottom("out_1");
}
void MainMuxN_BOT_out_2(void* cdata){
   _put_bottom("out_2");
}
void MainMuxN_BOT_out_3(void* cdata){
   _put_bottom("out_3");
}
void MainMuxN_BOT_out_4(void* cdata){
   _put_bottom("out_4");
}
void MainMuxN_BOT_out_5(void* cdata){
   _put_bottom("out_5");
}
void MainMuxN_BOT_out_6(void* cdata){
   _put_bottom("out_6");
}
void MainMuxN_BOT_out_7(void* cdata){
   _put_bottom("out_7");
}
void MainMuxN_BOT_out_8(void* cdata){
   _put_bottom("out_8");
}
void MainMuxN_BOT_out_9(void* cdata){
   _put_bottom("out_9");
}
void MainMuxN_BOT_out_10(void* cdata){
   _put_bottom("out_10");
}
void MainMuxN_BOT_out_11(void* cdata){
   _put_bottom("out_11");
}
void MainMuxN_BOT_out_12(void* cdata){
   _put_bottom("out_12");
}
void MainMuxN_BOT_out_13(void* cdata){
   _put_bottom("out_13");
}
void MainMuxN_BOT_out_14(void* cdata){
   _put_bottom("out_14");
}
void MainMuxN_BOT_out_15(void* cdata){
   _put_bottom("out_15");
}
#endif
/* Output procedures **********************/
void MainMuxN_O_out_0(void* cdata, _boolean _V) {
   _put_bool("out_0", _V);
}
void MainMuxN_O_out_1(void* cdata, _boolean _V) {
   _put_bool("out_1", _V);
}
void MainMuxN_O_out_2(void* cdata, _boolean _V) {
   _put_bool("out_2", _V);
}
void MainMuxN_O_out_3(void* cdata, _boolean _V) {
   _put_bool("out_3", _V);
}
void MainMuxN_O_out_4(void* cdata, _boolean _V) {
   _put_bool("out_4", _V);
}
void MainMuxN_O_out_5(void* cdata, _boolean _V) {
   _put_bool("out_5", _V);
}
void MainMuxN_O_out_6(void* cdata, _boolean _V) {
   _put_bool("out_6", _V);
}
void MainMuxN_O_out_7(void* cdata, _boolean _V) {
   _put_bool("out_7", _V);
}
void MainMuxN_O_out_8(void* cdata, _boolean _V) {
   _put_bool("out_8", _V);
}
void MainMuxN_O_out_9(void* cdata, _boolean _V) {
   _put_bool("out_9", _V);
}
void MainMuxN_O_out_10(void* cdata, _boolean _V) {
   _put_bool("out_10", _V);
}
void MainMuxN_O_out_11(void* cdata, _boolean _V) {
   _put_bool("out_11", _V);
}
void MainMuxN_O_out_12(void* cdata, _boolean _V) {
   _put_bool("out_12", _V);
}
void MainMuxN_O_out_13(void* cdata, _boolean _V) {
   _put_bool("out_13", _V);
}
void MainMuxN_O_out_14(void* cdata, _boolean _V) {
   _put_bool("out_14", _V);
}
void MainMuxN_O_out_15(void* cdata, _boolean _V) {
   _put_bool("out_15", _V);
}/* Main procedure *************************/
int main(){
   
   int s = 0;
   /* Context allocation */
   struct MainMuxN_ctx* ctx = MainMuxN_new_ctx(NULL);
   MainMuxN_reset(ctx);
   /* Main loop */
   ISATTY = isatty(0);
   while(1){
      if (ISATTY) printf("## STEP %d ##########\n", s+1);
      else if(s) printf("\n");
      fflush(stdout);
      ++s;
      MainMuxN_I_a_0(ctx, _get_bool("a_0"));
      MainMuxN_I_a_1(ctx, _get_bool("a_1"));
      MainMuxN_I_a_2(ctx, _get_bool("a_2"));
      MainMuxN_I_a_3(ctx, _get_bool("a_3"));
      MainMuxN_I_a_4(ctx, _get_bool("a_4"));
      MainMuxN_I_a_5(ctx, _get_bool("a_5"));
      MainMuxN_I_a_6(ctx, _get_bool("a_6"));
      MainMuxN_I_a_7(ctx, _get_bool("a_7"));
      MainMuxN_I_a_8(ctx, _get_bool("a_8"));
      MainMuxN_I_a_9(ctx, _get_bool("a_9"));
      MainMuxN_I_a_10(ctx, _get_bool("a_10"));
      MainMuxN_I_a_11(ctx, _get_bool("a_11"));
      MainMuxN_I_a_12(ctx, _get_bool("a_12"));
      MainMuxN_I_a_13(ctx, _get_bool("a_13"));
      MainMuxN_I_a_14(ctx, _get_bool("a_14"));
      MainMuxN_I_a_15(ctx, _get_bool("a_15"));
      MainMuxN_I_b_0(ctx, _get_bool("b_0"));
      MainMuxN_I_b_1(ctx, _get_bool("b_1"));
      MainMuxN_I_b_2(ctx, _get_bool("b_2"));
      MainMuxN_I_b_3(ctx, _get_bool("b_3"));
      MainMuxN_I_b_4(ctx, _get_bool("b_4"));
      MainMuxN_I_b_5(ctx, _get_bool("b_5"));
      MainMuxN_I_b_6(ctx, _get_bool("b_6"));
      MainMuxN_I_b_7(ctx, _get_bool("b_7"));
      MainMuxN_I_b_8(ctx, _get_bool("b_8"));
      MainMuxN_I_b_9(ctx, _get_bool("b_9"));
      MainMuxN_I_b_10(ctx, _get_bool("b_10"));
      MainMuxN_I_b_11(ctx, _get_bool("b_11"));
      MainMuxN_I_b_12(ctx, _get_bool("b_12"));
      MainMuxN_I_b_13(ctx, _get_bool("b_13"));
      MainMuxN_I_b_14(ctx, _get_bool("b_14"));
      MainMuxN_I_b_15(ctx, _get_bool("b_15"));
      MainMuxN_I_set(ctx, _get_bool("set"));
      MainMuxN_step(ctx);
      
   }
   return 1;
   
}
