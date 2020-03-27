/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Alt 
* to be used with : Alt.c 
********/
#ifndef _Alt_EC2C_H_FILE
#define _Alt_EC2C_H_FILE
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
//MODULE: Alt 2 1
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean err
#ifndef _Alt_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Alt_ctx;
/*-------- Input procedures -------------*/
extern void Alt_I_a(struct Alt_ctx* ctx, _boolean);
extern void Alt_I_b(struct Alt_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Alt_reset(struct Alt_ctx* ctx);
/*--------Context copy -------------*/
extern void Alt_copy_ctx(struct Alt_ctx* dest, struct Alt_ctx* src);
/*--------Context allocation --------*/
extern struct Alt_ctx* Alt_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Alt_step(struct Alt_ctx* ctx);
#endif
#endif
