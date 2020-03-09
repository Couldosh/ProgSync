/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : FullAdder 
* to be used with : FullAdder.c 
********/
#ifndef _FullAdder_EC2C_H_FILE
#define _FullAdder_EC2C_H_FILE
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
//MODULE: FullAdder 3 2
//IN: _boolean a
//IN: _boolean b
//IN: _boolean c
//OUT: _boolean sum
//OUT: _boolean carry
#ifndef _FullAdder_EC2C_SRC_FILE
/*--------Context type -------------*/
struct FullAdder_ctx;
/*-------- Input procedures -------------*/
extern void FullAdder_I_a(struct FullAdder_ctx* ctx, _boolean);
extern void FullAdder_I_b(struct FullAdder_ctx* ctx, _boolean);
extern void FullAdder_I_c(struct FullAdder_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void FullAdder_reset(struct FullAdder_ctx* ctx);
/*--------Context copy -------------*/
extern void FullAdder_copy_ctx(struct FullAdder_ctx* dest, struct FullAdder_ctx
* src);
/*--------Context allocation --------*/
extern struct FullAdder_ctx* FullAdder_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void FullAdder_step(struct FullAdder_ctx* ctx);
#endif
#endif
