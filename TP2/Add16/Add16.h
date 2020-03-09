/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Add16 
* to be used with : Add16.c 
********/
#ifndef _Add16_EC2C_H_FILE
#define _Add16_EC2C_H_FILE
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
//MODULE: Add16 33 17
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
//IN: _boolean y_0
//IN: _boolean y_1
//IN: _boolean y_2
//IN: _boolean y_3
//IN: _boolean y_4
//IN: _boolean y_5
//IN: _boolean y_6
//IN: _boolean y_7
//IN: _boolean y_8
//IN: _boolean y_9
//IN: _boolean y_10
//IN: _boolean y_11
//IN: _boolean y_12
//IN: _boolean y_13
//IN: _boolean y_14
//IN: _boolean y_15
//IN: _boolean c
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
#ifndef _Add16_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Add16_ctx;
/*-------- Input procedures -------------*/
extern void Add16_I_x_0(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_1(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_2(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_3(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_4(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_5(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_6(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_7(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_8(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_9(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_10(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_11(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_12(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_13(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_14(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_x_15(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_0(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_1(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_2(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_3(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_4(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_5(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_6(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_7(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_8(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_9(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_10(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_11(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_12(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_13(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_14(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_y_15(struct Add16_ctx* ctx, _boolean);
extern void Add16_I_c(struct Add16_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Add16_reset(struct Add16_ctx* ctx);
/*--------Context copy -------------*/
extern void Add16_copy_ctx(struct Add16_ctx* dest, struct Add16_ctx* src);
/*--------Context allocation --------*/
extern struct Add16_ctx* Add16_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Add16_step(struct Add16_ctx* ctx);
#endif
#endif
