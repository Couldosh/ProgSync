/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : inf_sup 
* to be used with : inf_sup.c 
********/
#ifndef _inf_sup_EC2C_H_FILE
#define _inf_sup_EC2C_H_FILE
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
//MODULE: inf_sup 2 2
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean inf
//OUT: _boolean sup
#ifndef _inf_sup_EC2C_SRC_FILE
/*--------Context type -------------*/
struct inf_sup_ctx;
/*-------- Input procedures -------------*/
extern void inf_sup_I_a(struct inf_sup_ctx* ctx, _boolean);
extern void inf_sup_I_b(struct inf_sup_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void inf_sup_reset(struct inf_sup_ctx* ctx);
/*--------Context copy -------------*/
extern void inf_sup_copy_ctx(struct inf_sup_ctx* dest, struct inf_sup_ctx
* src);
/*--------Context allocation --------*/
extern struct inf_sup_ctx* inf_sup_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void inf_sup_step(struct inf_sup_ctx* ctx);
#endif
#endif
