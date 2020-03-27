/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : SubClock 
* to be used with : SubClock.c 
********/
#ifndef _SubClock_EC2C_H_FILE
#define _SubClock_EC2C_H_FILE
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
//MODULE: SubClock 2 1
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean isSubClock
#ifndef _SubClock_EC2C_SRC_FILE
/*--------Context type -------------*/
struct SubClock_ctx;
/*-------- Input procedures -------------*/
extern void SubClock_I_a(struct SubClock_ctx* ctx, _boolean);
extern void SubClock_I_b(struct SubClock_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void SubClock_reset(struct SubClock_ctx* ctx);
/*--------Context copy -------------*/
extern void SubClock_copy_ctx(struct SubClock_ctx* dest, struct SubClock_ctx
* src);
/*--------Context allocation --------*/
extern struct SubClock_ctx* SubClock_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void SubClock_step(struct SubClock_ctx* ctx);
#endif
#endif
