/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Inc16 
* to be used with : Inc16.c 
********/
#ifndef _Inc16_EC2C_H_FILE
#define _Inc16_EC2C_H_FILE
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
//MODULE: Inc16 16 17
//IN: _boolean x_0
//IN: _boolean x_1
//IN: _boolean x_2
//IN: _boolean x_3
//IN: _boolean x_4
//IN: _boolean x_5
//IN: _boolean x_6
//IN: _boolean x_7
//IN: _boolean x_8
//IN: _boolean x_9
//IN: _boolean x_10
//IN: _boolean x_11
//IN: _boolean x_12
//IN: _boolean x_13
//IN: _boolean x_14
//IN: _boolean x_15
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
//OUT: _boolean carry
#ifndef _Inc16_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Inc16_ctx;
/*-------- Input procedures -------------*/
extern void Inc16_I_x_0(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_1(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_2(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_3(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_4(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_5(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_6(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_7(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_8(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_9(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_10(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_11(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_12(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_13(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_14(struct Inc16_ctx* ctx, _boolean);
extern void Inc16_I_x_15(struct Inc16_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Inc16_reset(struct Inc16_ctx* ctx);
/*--------Context copy -------------*/
extern void Inc16_copy_ctx(struct Inc16_ctx* dest, struct Inc16_ctx* src);
/*--------Context allocation --------*/
extern struct Inc16_ctx* Inc16_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Inc16_step(struct Inc16_ctx* ctx);
#endif
#endif
