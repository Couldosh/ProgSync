/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : main 
* to be used with : main.c 
********/
#ifndef _main_EC2C_H_FILE
#define _main_EC2C_H_FILE
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
//MODULE: main 1 1
//IN: _boolean c
//OUT: _boolean out
#ifndef _main_EC2C_SRC_FILE
/*--------Context type -------------*/
struct main_ctx;
/*-------- Input procedures -------------*/
extern void main_I_c(struct main_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void main_reset(struct main_ctx* ctx);
/*--------Context copy -------------*/
extern void main_copy_ctx(struct main_ctx* dest, struct main_ctx* src);
/*--------Context allocation --------*/
extern struct main_ctx* main_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void main_step(struct main_ctx* ctx);
#endif
#endif
