/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : obsUnion 
* to be used with : obsUnion.c 
********/
#ifndef _obsUnion_EC2C_H_FILE
#define _obsUnion_EC2C_H_FILE
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
//MODULE: obsUnion 2 1
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean out
#ifndef _obsUnion_EC2C_SRC_FILE
/*--------Context type -------------*/
struct obsUnion_ctx;
/*-------- Input procedures -------------*/
extern void obsUnion_I_a(struct obsUnion_ctx* ctx, _boolean);
extern void obsUnion_I_b(struct obsUnion_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void obsUnion_reset(struct obsUnion_ctx* ctx);
/*--------Context copy -------------*/
extern void obsUnion_copy_ctx(struct obsUnion_ctx* dest, struct obsUnion_ctx
* src);
/*--------Context allocation --------*/
extern struct obsUnion_ctx* obsUnion_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void obsUnion_step(struct obsUnion_ctx* ctx);
#endif
#endif
