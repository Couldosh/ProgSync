/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : union 
* to be used with : union.c 
********/
#ifndef _union_EC2C_H_FILE
#define _union_EC2C_H_FILE
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
//MODULE: union 2 1
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean c
#ifndef _union_EC2C_SRC_FILE
/*--------Context type -------------*/
struct union_ctx;
/*-------- Input procedures -------------*/
extern void union_I_a(struct union_ctx* ctx, _boolean);
extern void union_I_b(struct union_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void union_reset(struct union_ctx* ctx);
/*--------Context copy -------------*/
extern void union_copy_ctx(struct union_ctx* dest, struct union_ctx* src);
/*--------Context allocation --------*/
extern struct union_ctx* union_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void union_step(struct union_ctx* ctx);
#endif
#endif
