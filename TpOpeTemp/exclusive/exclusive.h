/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : exclusive 
* to be used with : exclusive.c 
********/
#ifndef _exclusive_EC2C_H_FILE
#define _exclusive_EC2C_H_FILE
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
//MODULE: exclusive 2 1
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean exclusive
#ifndef _exclusive_EC2C_SRC_FILE
/*--------Context type -------------*/
struct exclusive_ctx;
/*-------- Input procedures -------------*/
extern void exclusive_I_a(struct exclusive_ctx* ctx, _boolean);
extern void exclusive_I_b(struct exclusive_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void exclusive_reset(struct exclusive_ctx* ctx);
/*--------Context copy -------------*/
extern void exclusive_copy_ctx(struct exclusive_ctx* dest, struct exclusive_ctx
* src);
/*--------Context allocation --------*/
extern struct exclusive_ctx* exclusive_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void exclusive_step(struct exclusive_ctx* ctx);
#endif
#endif
