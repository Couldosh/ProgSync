/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : FullAdder2 
* to be used with : FullAdder2.c 
********/
#ifndef _FullAdder2_EC2C_H_FILE
#define _FullAdder2_EC2C_H_FILE
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
//MODULE: FullAdder2 3 2
//IN: _boolean a
//IN: _boolean b
//IN: _boolean c
//OUT: _boolean sum
//OUT: _boolean carry
#ifndef _FullAdder2_EC2C_SRC_FILE
/*--------Context type -------------*/
struct FullAdder2_ctx;
/*-------- Input procedures -------------*/
extern void FullAdder2_I_a(struct FullAdder2_ctx* ctx, _boolean);
extern void FullAdder2_I_b(struct FullAdder2_ctx* ctx, _boolean);
extern void FullAdder2_I_c(struct FullAdder2_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void FullAdder2_reset(struct FullAdder2_ctx* ctx);
/*--------Context copy -------------*/
extern void FullAdder2_copy_ctx(struct FullAdder2_ctx* dest, struct 
FullAdder2_ctx* src);
/*--------Context allocation --------*/
extern struct FullAdder2_ctx* FullAdder2_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void FullAdder2_step(struct FullAdder2_ctx* ctx);
#endif
#endif
