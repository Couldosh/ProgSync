/********
* ec2c version 0.68
* c main file generated for node : Logic16 
* to be used with : Logic16.c 
* and             : Logic16.h 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "Logic16.h"

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
void Logic16_BOT_And_0(void* cdata){
   _put_bottom("And_0");
}
void Logic16_BOT_And_1(void* cdata){
   _put_bottom("And_1");
}
void Logic16_BOT_And_2(void* cdata){
   _put_bottom("And_2");
}
void Logic16_BOT_And_3(void* cdata){
   _put_bottom("And_3");
}
void Logic16_BOT_And_4(void* cdata){
   _put_bottom("And_4");
}
void Logic16_BOT_And_5(void* cdata){
   _put_bottom("And_5");
}
void Logic16_BOT_And_6(void* cdata){
   _put_bottom("And_6");
}
void Logic16_BOT_And_7(void* cdata){
   _put_bottom("And_7");
}
void Logic16_BOT_And_8(void* cdata){
   _put_bottom("And_8");
}
void Logic16_BOT_And_9(void* cdata){
   _put_bottom("And_9");
}
void Logic16_BOT_And_10(void* cdata){
   _put_bottom("And_10");
}
void Logic16_BOT_And_11(void* cdata){
   _put_bottom("And_11");
}
void Logic16_BOT_And_12(void* cdata){
   _put_bottom("And_12");
}
void Logic16_BOT_And_13(void* cdata){
   _put_bottom("And_13");
}
void Logic16_BOT_And_14(void* cdata){
   _put_bottom("And_14");
}
void Logic16_BOT_And_15(void* cdata){
   _put_bottom("And_15");
}
void Logic16_BOT_Nand_0(void* cdata){
   _put_bottom("Nand_0");
}
void Logic16_BOT_Nand_1(void* cdata){
   _put_bottom("Nand_1");
}
void Logic16_BOT_Nand_2(void* cdata){
   _put_bottom("Nand_2");
}
void Logic16_BOT_Nand_3(void* cdata){
   _put_bottom("Nand_3");
}
void Logic16_BOT_Nand_4(void* cdata){
   _put_bottom("Nand_4");
}
void Logic16_BOT_Nand_5(void* cdata){
   _put_bottom("Nand_5");
}
void Logic16_BOT_Nand_6(void* cdata){
   _put_bottom("Nand_6");
}
void Logic16_BOT_Nand_7(void* cdata){
   _put_bottom("Nand_7");
}
void Logic16_BOT_Nand_8(void* cdata){
   _put_bottom("Nand_8");
}
void Logic16_BOT_Nand_9(void* cdata){
   _put_bottom("Nand_9");
}
void Logic16_BOT_Nand_10(void* cdata){
   _put_bottom("Nand_10");
}
void Logic16_BOT_Nand_11(void* cdata){
   _put_bottom("Nand_11");
}
void Logic16_BOT_Nand_12(void* cdata){
   _put_bottom("Nand_12");
}
void Logic16_BOT_Nand_13(void* cdata){
   _put_bottom("Nand_13");
}
void Logic16_BOT_Nand_14(void* cdata){
   _put_bottom("Nand_14");
}
void Logic16_BOT_Nand_15(void* cdata){
   _put_bottom("Nand_15");
}
void Logic16_BOT_Or_0(void* cdata){
   _put_bottom("Or_0");
}
void Logic16_BOT_Or_1(void* cdata){
   _put_bottom("Or_1");
}
void Logic16_BOT_Or_2(void* cdata){
   _put_bottom("Or_2");
}
void Logic16_BOT_Or_3(void* cdata){
   _put_bottom("Or_3");
}
void Logic16_BOT_Or_4(void* cdata){
   _put_bottom("Or_4");
}
void Logic16_BOT_Or_5(void* cdata){
   _put_bottom("Or_5");
}
void Logic16_BOT_Or_6(void* cdata){
   _put_bottom("Or_6");
}
void Logic16_BOT_Or_7(void* cdata){
   _put_bottom("Or_7");
}
void Logic16_BOT_Or_8(void* cdata){
   _put_bottom("Or_8");
}
void Logic16_BOT_Or_9(void* cdata){
   _put_bottom("Or_9");
}
void Logic16_BOT_Or_10(void* cdata){
   _put_bottom("Or_10");
}
void Logic16_BOT_Or_11(void* cdata){
   _put_bottom("Or_11");
}
void Logic16_BOT_Or_12(void* cdata){
   _put_bottom("Or_12");
}
void Logic16_BOT_Or_13(void* cdata){
   _put_bottom("Or_13");
}
void Logic16_BOT_Or_14(void* cdata){
   _put_bottom("Or_14");
}
void Logic16_BOT_Or_15(void* cdata){
   _put_bottom("Or_15");
}
void Logic16_BOT_Xor_0(void* cdata){
   _put_bottom("Xor_0");
}
void Logic16_BOT_Xor_1(void* cdata){
   _put_bottom("Xor_1");
}
void Logic16_BOT_Xor_2(void* cdata){
   _put_bottom("Xor_2");
}
void Logic16_BOT_Xor_3(void* cdata){
   _put_bottom("Xor_3");
}
void Logic16_BOT_Xor_4(void* cdata){
   _put_bottom("Xor_4");
}
void Logic16_BOT_Xor_5(void* cdata){
   _put_bottom("Xor_5");
}
void Logic16_BOT_Xor_6(void* cdata){
   _put_bottom("Xor_6");
}
void Logic16_BOT_Xor_7(void* cdata){
   _put_bottom("Xor_7");
}
void Logic16_BOT_Xor_8(void* cdata){
   _put_bottom("Xor_8");
}
void Logic16_BOT_Xor_9(void* cdata){
   _put_bottom("Xor_9");
}
void Logic16_BOT_Xor_10(void* cdata){
   _put_bottom("Xor_10");
}
void Logic16_BOT_Xor_11(void* cdata){
   _put_bottom("Xor_11");
}
void Logic16_BOT_Xor_12(void* cdata){
   _put_bottom("Xor_12");
}
void Logic16_BOT_Xor_13(void* cdata){
   _put_bottom("Xor_13");
}
void Logic16_BOT_Xor_14(void* cdata){
   _put_bottom("Xor_14");
}
void Logic16_BOT_Xor_15(void* cdata){
   _put_bottom("Xor_15");
}
#endif
/* Output procedures **********************/
void Logic16_O_And_0(void* cdata, _boolean _V) {
   _put_bool("And_0", _V);
}
void Logic16_O_And_1(void* cdata, _boolean _V) {
   _put_bool("And_1", _V);
}
void Logic16_O_And_2(void* cdata, _boolean _V) {
   _put_bool("And_2", _V);
}
void Logic16_O_And_3(void* cdata, _boolean _V) {
   _put_bool("And_3", _V);
}
void Logic16_O_And_4(void* cdata, _boolean _V) {
   _put_bool("And_4", _V);
}
void Logic16_O_And_5(void* cdata, _boolean _V) {
   _put_bool("And_5", _V);
}
void Logic16_O_And_6(void* cdata, _boolean _V) {
   _put_bool("And_6", _V);
}
void Logic16_O_And_7(void* cdata, _boolean _V) {
   _put_bool("And_7", _V);
}
void Logic16_O_And_8(void* cdata, _boolean _V) {
   _put_bool("And_8", _V);
}
void Logic16_O_And_9(void* cdata, _boolean _V) {
   _put_bool("And_9", _V);
}
void Logic16_O_And_10(void* cdata, _boolean _V) {
   _put_bool("And_10", _V);
}
void Logic16_O_And_11(void* cdata, _boolean _V) {
   _put_bool("And_11", _V);
}
void Logic16_O_And_12(void* cdata, _boolean _V) {
   _put_bool("And_12", _V);
}
void Logic16_O_And_13(void* cdata, _boolean _V) {
   _put_bool("And_13", _V);
}
void Logic16_O_And_14(void* cdata, _boolean _V) {
   _put_bool("And_14", _V);
}
void Logic16_O_And_15(void* cdata, _boolean _V) {
   _put_bool("And_15", _V);
}
void Logic16_O_Nand_0(void* cdata, _boolean _V) {
   _put_bool("Nand_0", _V);
}
void Logic16_O_Nand_1(void* cdata, _boolean _V) {
   _put_bool("Nand_1", _V);
}
void Logic16_O_Nand_2(void* cdata, _boolean _V) {
   _put_bool("Nand_2", _V);
}
void Logic16_O_Nand_3(void* cdata, _boolean _V) {
   _put_bool("Nand_3", _V);
}
void Logic16_O_Nand_4(void* cdata, _boolean _V) {
   _put_bool("Nand_4", _V);
}
void Logic16_O_Nand_5(void* cdata, _boolean _V) {
   _put_bool("Nand_5", _V);
}
void Logic16_O_Nand_6(void* cdata, _boolean _V) {
   _put_bool("Nand_6", _V);
}
void Logic16_O_Nand_7(void* cdata, _boolean _V) {
   _put_bool("Nand_7", _V);
}
void Logic16_O_Nand_8(void* cdata, _boolean _V) {
   _put_bool("Nand_8", _V);
}
void Logic16_O_Nand_9(void* cdata, _boolean _V) {
   _put_bool("Nand_9", _V);
}
void Logic16_O_Nand_10(void* cdata, _boolean _V) {
   _put_bool("Nand_10", _V);
}
void Logic16_O_Nand_11(void* cdata, _boolean _V) {
   _put_bool("Nand_11", _V);
}
void Logic16_O_Nand_12(void* cdata, _boolean _V) {
   _put_bool("Nand_12", _V);
}
void Logic16_O_Nand_13(void* cdata, _boolean _V) {
   _put_bool("Nand_13", _V);
}
void Logic16_O_Nand_14(void* cdata, _boolean _V) {
   _put_bool("Nand_14", _V);
}
void Logic16_O_Nand_15(void* cdata, _boolean _V) {
   _put_bool("Nand_15", _V);
}
void Logic16_O_Or_0(void* cdata, _boolean _V) {
   _put_bool("Or_0", _V);
}
void Logic16_O_Or_1(void* cdata, _boolean _V) {
   _put_bool("Or_1", _V);
}
void Logic16_O_Or_2(void* cdata, _boolean _V) {
   _put_bool("Or_2", _V);
}
void Logic16_O_Or_3(void* cdata, _boolean _V) {
   _put_bool("Or_3", _V);
}
void Logic16_O_Or_4(void* cdata, _boolean _V) {
   _put_bool("Or_4", _V);
}
void Logic16_O_Or_5(void* cdata, _boolean _V) {
   _put_bool("Or_5", _V);
}
void Logic16_O_Or_6(void* cdata, _boolean _V) {
   _put_bool("Or_6", _V);
}
void Logic16_O_Or_7(void* cdata, _boolean _V) {
   _put_bool("Or_7", _V);
}
void Logic16_O_Or_8(void* cdata, _boolean _V) {
   _put_bool("Or_8", _V);
}
void Logic16_O_Or_9(void* cdata, _boolean _V) {
   _put_bool("Or_9", _V);
}
void Logic16_O_Or_10(void* cdata, _boolean _V) {
   _put_bool("Or_10", _V);
}
void Logic16_O_Or_11(void* cdata, _boolean _V) {
   _put_bool("Or_11", _V);
}
void Logic16_O_Or_12(void* cdata, _boolean _V) {
   _put_bool("Or_12", _V);
}
void Logic16_O_Or_13(void* cdata, _boolean _V) {
   _put_bool("Or_13", _V);
}
void Logic16_O_Or_14(void* cdata, _boolean _V) {
   _put_bool("Or_14", _V);
}
void Logic16_O_Or_15(void* cdata, _boolean _V) {
   _put_bool("Or_15", _V);
}
void Logic16_O_Xor_0(void* cdata, _boolean _V) {
   _put_bool("Xor_0", _V);
}
void Logic16_O_Xor_1(void* cdata, _boolean _V) {
   _put_bool("Xor_1", _V);
}
void Logic16_O_Xor_2(void* cdata, _boolean _V) {
   _put_bool("Xor_2", _V);
}
void Logic16_O_Xor_3(void* cdata, _boolean _V) {
   _put_bool("Xor_3", _V);
}
void Logic16_O_Xor_4(void* cdata, _boolean _V) {
   _put_bool("Xor_4", _V);
}
void Logic16_O_Xor_5(void* cdata, _boolean _V) {
   _put_bool("Xor_5", _V);
}
void Logic16_O_Xor_6(void* cdata, _boolean _V) {
   _put_bool("Xor_6", _V);
}
void Logic16_O_Xor_7(void* cdata, _boolean _V) {
   _put_bool("Xor_7", _V);
}
void Logic16_O_Xor_8(void* cdata, _boolean _V) {
   _put_bool("Xor_8", _V);
}
void Logic16_O_Xor_9(void* cdata, _boolean _V) {
   _put_bool("Xor_9", _V);
}
void Logic16_O_Xor_10(void* cdata, _boolean _V) {
   _put_bool("Xor_10", _V);
}
void Logic16_O_Xor_11(void* cdata, _boolean _V) {
   _put_bool("Xor_11", _V);
}
void Logic16_O_Xor_12(void* cdata, _boolean _V) {
   _put_bool("Xor_12", _V);
}
void Logic16_O_Xor_13(void* cdata, _boolean _V) {
   _put_bool("Xor_13", _V);
}
void Logic16_O_Xor_14(void* cdata, _boolean _V) {
   _put_bool("Xor_14", _V);
}
void Logic16_O_Xor_15(void* cdata, _boolean _V) {
   _put_bool("Xor_15", _V);
}/* Main procedure *************************/
int main(){
   
   int s = 0;
   /* Context allocation */
   struct Logic16_ctx* ctx = Logic16_new_ctx(NULL);
   Logic16_reset(ctx);
   /* Main loop */
   ISATTY = isatty(0);
   while(1){
      if (ISATTY) printf("## STEP %d ##########\n", s+1);
      else if(s) printf("\n");
      fflush(stdout);
      ++s;
      Logic16_I_a_0(ctx, _get_bool("a_0"));
      Logic16_I_a_1(ctx, _get_bool("a_1"));
      Logic16_I_a_2(ctx, _get_bool("a_2"));
      Logic16_I_a_3(ctx, _get_bool("a_3"));
      Logic16_I_a_4(ctx, _get_bool("a_4"));
      Logic16_I_a_5(ctx, _get_bool("a_5"));
      Logic16_I_a_6(ctx, _get_bool("a_6"));
      Logic16_I_a_7(ctx, _get_bool("a_7"));
      Logic16_I_a_8(ctx, _get_bool("a_8"));
      Logic16_I_a_9(ctx, _get_bool("a_9"));
      Logic16_I_a_10(ctx, _get_bool("a_10"));
      Logic16_I_a_11(ctx, _get_bool("a_11"));
      Logic16_I_a_12(ctx, _get_bool("a_12"));
      Logic16_I_a_13(ctx, _get_bool("a_13"));
      Logic16_I_a_14(ctx, _get_bool("a_14"));
      Logic16_I_a_15(ctx, _get_bool("a_15"));
      Logic16_I_b_0(ctx, _get_bool("b_0"));
      Logic16_I_b_1(ctx, _get_bool("b_1"));
      Logic16_I_b_2(ctx, _get_bool("b_2"));
      Logic16_I_b_3(ctx, _get_bool("b_3"));
      Logic16_I_b_4(ctx, _get_bool("b_4"));
      Logic16_I_b_5(ctx, _get_bool("b_5"));
      Logic16_I_b_6(ctx, _get_bool("b_6"));
      Logic16_I_b_7(ctx, _get_bool("b_7"));
      Logic16_I_b_8(ctx, _get_bool("b_8"));
      Logic16_I_b_9(ctx, _get_bool("b_9"));
      Logic16_I_b_10(ctx, _get_bool("b_10"));
      Logic16_I_b_11(ctx, _get_bool("b_11"));
      Logic16_I_b_12(ctx, _get_bool("b_12"));
      Logic16_I_b_13(ctx, _get_bool("b_13"));
      Logic16_I_b_14(ctx, _get_bool("b_14"));
      Logic16_I_b_15(ctx, _get_bool("b_15"));
      Logic16_step(ctx);
      
   }
   return 1;
   
}
