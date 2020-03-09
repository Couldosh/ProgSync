/********
* ec2c version 0.68
* c main file generated for node : MainAdd_n 
* to be used with : MainAdd_n.c 
* and             : MainAdd_n.h 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "MainAdd_n.h"

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
void MainAdd_n_BOT_out_0(void* cdata){
   _put_bottom("out_0");
}
void MainAdd_n_BOT_out_1(void* cdata){
   _put_bottom("out_1");
}
void MainAdd_n_BOT_out_2(void* cdata){
   _put_bottom("out_2");
}
void MainAdd_n_BOT_out_3(void* cdata){
   _put_bottom("out_3");
}
void MainAdd_n_BOT_out_4(void* cdata){
   _put_bottom("out_4");
}
void MainAdd_n_BOT_out_5(void* cdata){
   _put_bottom("out_5");
}
void MainAdd_n_BOT_out_6(void* cdata){
   _put_bottom("out_6");
}
void MainAdd_n_BOT_out_7(void* cdata){
   _put_bottom("out_7");
}
void MainAdd_n_BOT_out_8(void* cdata){
   _put_bottom("out_8");
}
void MainAdd_n_BOT_out_9(void* cdata){
   _put_bottom("out_9");
}
void MainAdd_n_BOT_out_10(void* cdata){
   _put_bottom("out_10");
}
void MainAdd_n_BOT_out_11(void* cdata){
   _put_bottom("out_11");
}
void MainAdd_n_BOT_out_12(void* cdata){
   _put_bottom("out_12");
}
void MainAdd_n_BOT_out_13(void* cdata){
   _put_bottom("out_13");
}
void MainAdd_n_BOT_out_14(void* cdata){
   _put_bottom("out_14");
}
void MainAdd_n_BOT_out_15(void* cdata){
   _put_bottom("out_15");
}
void MainAdd_n_BOT_out_16(void* cdata){
   _put_bottom("out_16");
}
void MainAdd_n_BOT_out_17(void* cdata){
   _put_bottom("out_17");
}
void MainAdd_n_BOT_out_18(void* cdata){
   _put_bottom("out_18");
}
void MainAdd_n_BOT_out_19(void* cdata){
   _put_bottom("out_19");
}
void MainAdd_n_BOT_out_20(void* cdata){
   _put_bottom("out_20");
}
void MainAdd_n_BOT_out_21(void* cdata){
   _put_bottom("out_21");
}
void MainAdd_n_BOT_out_22(void* cdata){
   _put_bottom("out_22");
}
void MainAdd_n_BOT_out_23(void* cdata){
   _put_bottom("out_23");
}
void MainAdd_n_BOT_out_24(void* cdata){
   _put_bottom("out_24");
}
void MainAdd_n_BOT_out_25(void* cdata){
   _put_bottom("out_25");
}
void MainAdd_n_BOT_out_26(void* cdata){
   _put_bottom("out_26");
}
void MainAdd_n_BOT_out_27(void* cdata){
   _put_bottom("out_27");
}
void MainAdd_n_BOT_out_28(void* cdata){
   _put_bottom("out_28");
}
void MainAdd_n_BOT_out_29(void* cdata){
   _put_bottom("out_29");
}
void MainAdd_n_BOT_out_30(void* cdata){
   _put_bottom("out_30");
}
void MainAdd_n_BOT_out_31(void* cdata){
   _put_bottom("out_31");
}
void MainAdd_n_BOT_carry(void* cdata){
   _put_bottom("carry");
}
#endif
/* Output procedures **********************/
void MainAdd_n_O_out_0(void* cdata, _boolean _V) {
   _put_bool("out_0", _V);
}
void MainAdd_n_O_out_1(void* cdata, _boolean _V) {
   _put_bool("out_1", _V);
}
void MainAdd_n_O_out_2(void* cdata, _boolean _V) {
   _put_bool("out_2", _V);
}
void MainAdd_n_O_out_3(void* cdata, _boolean _V) {
   _put_bool("out_3", _V);
}
void MainAdd_n_O_out_4(void* cdata, _boolean _V) {
   _put_bool("out_4", _V);
}
void MainAdd_n_O_out_5(void* cdata, _boolean _V) {
   _put_bool("out_5", _V);
}
void MainAdd_n_O_out_6(void* cdata, _boolean _V) {
   _put_bool("out_6", _V);
}
void MainAdd_n_O_out_7(void* cdata, _boolean _V) {
   _put_bool("out_7", _V);
}
void MainAdd_n_O_out_8(void* cdata, _boolean _V) {
   _put_bool("out_8", _V);
}
void MainAdd_n_O_out_9(void* cdata, _boolean _V) {
   _put_bool("out_9", _V);
}
void MainAdd_n_O_out_10(void* cdata, _boolean _V) {
   _put_bool("out_10", _V);
}
void MainAdd_n_O_out_11(void* cdata, _boolean _V) {
   _put_bool("out_11", _V);
}
void MainAdd_n_O_out_12(void* cdata, _boolean _V) {
   _put_bool("out_12", _V);
}
void MainAdd_n_O_out_13(void* cdata, _boolean _V) {
   _put_bool("out_13", _V);
}
void MainAdd_n_O_out_14(void* cdata, _boolean _V) {
   _put_bool("out_14", _V);
}
void MainAdd_n_O_out_15(void* cdata, _boolean _V) {
   _put_bool("out_15", _V);
}
void MainAdd_n_O_out_16(void* cdata, _boolean _V) {
   _put_bool("out_16", _V);
}
void MainAdd_n_O_out_17(void* cdata, _boolean _V) {
   _put_bool("out_17", _V);
}
void MainAdd_n_O_out_18(void* cdata, _boolean _V) {
   _put_bool("out_18", _V);
}
void MainAdd_n_O_out_19(void* cdata, _boolean _V) {
   _put_bool("out_19", _V);
}
void MainAdd_n_O_out_20(void* cdata, _boolean _V) {
   _put_bool("out_20", _V);
}
void MainAdd_n_O_out_21(void* cdata, _boolean _V) {
   _put_bool("out_21", _V);
}
void MainAdd_n_O_out_22(void* cdata, _boolean _V) {
   _put_bool("out_22", _V);
}
void MainAdd_n_O_out_23(void* cdata, _boolean _V) {
   _put_bool("out_23", _V);
}
void MainAdd_n_O_out_24(void* cdata, _boolean _V) {
   _put_bool("out_24", _V);
}
void MainAdd_n_O_out_25(void* cdata, _boolean _V) {
   _put_bool("out_25", _V);
}
void MainAdd_n_O_out_26(void* cdata, _boolean _V) {
   _put_bool("out_26", _V);
}
void MainAdd_n_O_out_27(void* cdata, _boolean _V) {
   _put_bool("out_27", _V);
}
void MainAdd_n_O_out_28(void* cdata, _boolean _V) {
   _put_bool("out_28", _V);
}
void MainAdd_n_O_out_29(void* cdata, _boolean _V) {
   _put_bool("out_29", _V);
}
void MainAdd_n_O_out_30(void* cdata, _boolean _V) {
   _put_bool("out_30", _V);
}
void MainAdd_n_O_out_31(void* cdata, _boolean _V) {
   _put_bool("out_31", _V);
}
void MainAdd_n_O_carry(void* cdata, _boolean _V) {
   _put_bool("carry", _V);
}/* Main procedure *************************/
int main(){
   
   int s = 0;
   /* Context allocation */
   struct MainAdd_n_ctx* ctx = MainAdd_n_new_ctx(NULL);
   MainAdd_n_reset(ctx);
   /* Main loop */
   ISATTY = isatty(0);
   while(1){
      if (ISATTY) printf("## STEP %d ##########\n", s+1);
      else if(s) printf("\n");
      fflush(stdout);
      ++s;
      MainAdd_n_I_x_0(ctx, _get_bool("x_0"));
      MainAdd_n_I_x_1(ctx, _get_bool("x_1"));
      MainAdd_n_I_x_2(ctx, _get_bool("x_2"));
      MainAdd_n_I_x_3(ctx, _get_bool("x_3"));
      MainAdd_n_I_x_4(ctx, _get_bool("x_4"));
      MainAdd_n_I_x_5(ctx, _get_bool("x_5"));
      MainAdd_n_I_x_6(ctx, _get_bool("x_6"));
      MainAdd_n_I_x_7(ctx, _get_bool("x_7"));
      MainAdd_n_I_x_8(ctx, _get_bool("x_8"));
      MainAdd_n_I_x_9(ctx, _get_bool("x_9"));
      MainAdd_n_I_x_10(ctx, _get_bool("x_10"));
      MainAdd_n_I_x_11(ctx, _get_bool("x_11"));
      MainAdd_n_I_x_12(ctx, _get_bool("x_12"));
      MainAdd_n_I_x_13(ctx, _get_bool("x_13"));
      MainAdd_n_I_x_14(ctx, _get_bool("x_14"));
      MainAdd_n_I_x_15(ctx, _get_bool("x_15"));
      MainAdd_n_I_x_16(ctx, _get_bool("x_16"));
      MainAdd_n_I_x_17(ctx, _get_bool("x_17"));
      MainAdd_n_I_x_18(ctx, _get_bool("x_18"));
      MainAdd_n_I_x_19(ctx, _get_bool("x_19"));
      MainAdd_n_I_x_20(ctx, _get_bool("x_20"));
      MainAdd_n_I_x_21(ctx, _get_bool("x_21"));
      MainAdd_n_I_x_22(ctx, _get_bool("x_22"));
      MainAdd_n_I_x_23(ctx, _get_bool("x_23"));
      MainAdd_n_I_x_24(ctx, _get_bool("x_24"));
      MainAdd_n_I_x_25(ctx, _get_bool("x_25"));
      MainAdd_n_I_x_26(ctx, _get_bool("x_26"));
      MainAdd_n_I_x_27(ctx, _get_bool("x_27"));
      MainAdd_n_I_x_28(ctx, _get_bool("x_28"));
      MainAdd_n_I_x_29(ctx, _get_bool("x_29"));
      MainAdd_n_I_x_30(ctx, _get_bool("x_30"));
      MainAdd_n_I_x_31(ctx, _get_bool("x_31"));
      MainAdd_n_I_y_0(ctx, _get_bool("y_0"));
      MainAdd_n_I_y_1(ctx, _get_bool("y_1"));
      MainAdd_n_I_y_2(ctx, _get_bool("y_2"));
      MainAdd_n_I_y_3(ctx, _get_bool("y_3"));
      MainAdd_n_I_y_4(ctx, _get_bool("y_4"));
      MainAdd_n_I_y_5(ctx, _get_bool("y_5"));
      MainAdd_n_I_y_6(ctx, _get_bool("y_6"));
      MainAdd_n_I_y_7(ctx, _get_bool("y_7"));
      MainAdd_n_I_y_8(ctx, _get_bool("y_8"));
      MainAdd_n_I_y_9(ctx, _get_bool("y_9"));
      MainAdd_n_I_y_10(ctx, _get_bool("y_10"));
      MainAdd_n_I_y_11(ctx, _get_bool("y_11"));
      MainAdd_n_I_y_12(ctx, _get_bool("y_12"));
      MainAdd_n_I_y_13(ctx, _get_bool("y_13"));
      MainAdd_n_I_y_14(ctx, _get_bool("y_14"));
      MainAdd_n_I_y_15(ctx, _get_bool("y_15"));
      MainAdd_n_I_y_16(ctx, _get_bool("y_16"));
      MainAdd_n_I_y_17(ctx, _get_bool("y_17"));
      MainAdd_n_I_y_18(ctx, _get_bool("y_18"));
      MainAdd_n_I_y_19(ctx, _get_bool("y_19"));
      MainAdd_n_I_y_20(ctx, _get_bool("y_20"));
      MainAdd_n_I_y_21(ctx, _get_bool("y_21"));
      MainAdd_n_I_y_22(ctx, _get_bool("y_22"));
      MainAdd_n_I_y_23(ctx, _get_bool("y_23"));
      MainAdd_n_I_y_24(ctx, _get_bool("y_24"));
      MainAdd_n_I_y_25(ctx, _get_bool("y_25"));
      MainAdd_n_I_y_26(ctx, _get_bool("y_26"));
      MainAdd_n_I_y_27(ctx, _get_bool("y_27"));
      MainAdd_n_I_y_28(ctx, _get_bool("y_28"));
      MainAdd_n_I_y_29(ctx, _get_bool("y_29"));
      MainAdd_n_I_y_30(ctx, _get_bool("y_30"));
      MainAdd_n_I_y_31(ctx, _get_bool("y_31"));
      MainAdd_n_I_c(ctx, _get_bool("c"));
      MainAdd_n_step(ctx);
      
   }
   return 1;
   
}
