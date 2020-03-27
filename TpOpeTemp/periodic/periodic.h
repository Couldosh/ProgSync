/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : periodic 
* to be used with : periodic.c 
********/
#ifndef _periodic_EC2C_H_FILE
#define _periodic_EC2C_H_FILE
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
//MODULE: periodic 2 2
//IN: _boolean c
//IN: _integer n
//OUT: _boolean clock
//OUT: _integer counter
#ifndef _periodic_EC2C_SRC_FILE
/*--------Context type -------------*/
struct periodic_ctx;
/*-------- Input procedures -------------*/
extern void periodic_I_c(struct periodic_ctx* ctx, _boolean);
extern void periodic_I_n(struct periodic_ctx* ctx, _integer);
/*-------- Reset procedure -----------*/
extern void periodic_reset(struct periodic_ctx* ctx);
/*--------Context copy -------------*/
extern void periodic_copy_ctx(struct periodic_ctx* dest, struct periodic_ctx
* src);
/*--------Context allocation --------*/
extern struct periodic_ctx* periodic_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void periodic_step(struct periodic_ctx* ctx);
#endif
#endif
