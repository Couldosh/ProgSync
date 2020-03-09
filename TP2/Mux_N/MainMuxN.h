/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : MainMuxN 
* to be used with : MainMuxN.c 
********/
#ifndef _MainMuxN_EC2C_H_FILE
#define _MainMuxN_EC2C_H_FILE
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
//MODULE: MainMuxN 33 16
//IN: _boolean a_0
//IN: _boolean a_1
//IN: _boolean a_2
//IN: _boolean a_3
//IN: _boolean a_4
//IN: _boolean a_5
//IN: _boolean a_6
//IN: _boolean a_7
//IN: _boolean a_8
//IN: _boolean a_9
//IN: _boolean a_10
//IN: _boolean a_11
//IN: _boolean a_12
//IN: _boolean a_13
//IN: _boolean a_14
//IN: _boolean a_15
//IN: _boolean b_0
//IN: _boolean b_1
//IN: _boolean b_2
//IN: _boolean b_3
//IN: _boolean b_4
//IN: _boolean b_5
//IN: _boolean b_6
//IN: _boolean b_7
//IN: _boolean b_8
//IN: _boolean b_9
//IN: _boolean b_10
//IN: _boolean b_11
//IN: _boolean b_12
//IN: _boolean b_13
//IN: _boolean b_14
//IN: _boolean b_15
//IN: _boolean set
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
#ifndef _MainMuxN_EC2C_SRC_FILE
/*--------Context type -------------*/
struct MainMuxN_ctx;
/*-------- Input procedures -------------*/
extern void MainMuxN_I_a_0(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_1(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_2(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_3(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_4(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_5(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_6(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_7(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_8(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_9(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_10(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_11(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_12(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_13(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_14(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_a_15(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_0(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_1(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_2(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_3(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_4(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_5(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_6(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_7(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_8(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_9(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_10(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_11(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_12(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_13(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_14(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_b_15(struct MainMuxN_ctx* ctx, _boolean);
extern void MainMuxN_I_set(struct MainMuxN_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void MainMuxN_reset(struct MainMuxN_ctx* ctx);
/*--------Context copy -------------*/
extern void MainMuxN_copy_ctx(struct MainMuxN_ctx* dest, struct MainMuxN_ctx
* src);
/*--------Context allocation --------*/
extern struct MainMuxN_ctx* MainMuxN_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void MainMuxN_step(struct MainMuxN_ctx* ctx);
#endif
#endif
