/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Not16 
* to be used with : Not16.c 
********/
#ifndef _Not16_EC2C_H_FILE
#define _Not16_EC2C_H_FILE
/*-------- Predefined types ---------*/
#ifndef _EC2C_PREDEF_TYPES
#define _EC2C_PREDEF_TYPES
typedef int _boolean;
typedef int _integer;
typedef char* _string;
typedef double _real;
typedef double _double;
typedef float _float;
#define _false 0
#define _true 1
#endif
/*--------- Pragmas ----------------*/
//MODULE: Not16 16 16
//IN: _boolean in_0
//IN: _boolean in_1
//IN: _boolean in_2
//IN: _boolean in_3
//IN: _boolean in_4
//IN: _boolean in_5
//IN: _boolean in_6
//IN: _boolean in_7
//IN: _boolean in_8
//IN: _boolean in_9
//IN: _boolean in_10
//IN: _boolean in_11
//IN: _boolean in_12
//IN: _boolean in_13
//IN: _boolean in_14
//IN: _boolean in_15
//OUT: _boolean out_0
//OUT: _boolean out_1
//OUT: _boolean out_2
//OUT: _boolean out_3
//OUT: _boolean out_4
//OUT: _boolean out_5
//OUT: _boolean out_6
//OUT: _boolean out_7
//OUT: _boolean out_8
//OUT: _boolean out_9
//OUT: _boolean out_10
//OUT: _boolean out_11
//OUT: _boolean out_12
//OUT: _boolean out_13
//OUT: _boolean out_14
//OUT: _boolean out_15
#ifndef _Not16_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Not16_ctx;
/*-------- Input procedures -------------*/
extern void Not16_I_in_0(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_1(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_2(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_3(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_4(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_5(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_6(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_7(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_8(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_9(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_10(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_11(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_12(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_13(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_14(struct Not16_ctx* ctx, _boolean);
extern void Not16_I_in_15(struct Not16_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Not16_reset(struct Not16_ctx* ctx);
/*--------Context copy -------------*/
extern void Not16_copy_ctx(struct Not16_ctx* dest, struct Not16_ctx* src);
/*--------Context allocation --------*/
extern struct Not16_ctx* Not16_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Not16_step(struct Not16_ctx* ctx);
#endif
#endif
