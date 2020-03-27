/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : obsSync 
* to be used with : obsSync.c 
********/
#ifndef _obsSync_EC2C_H_FILE
#define _obsSync_EC2C_H_FILE
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
//MODULE: obsSync 2 1
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean isEqual
#ifndef _obsSync_EC2C_SRC_FILE
/*--------Context type -------------*/
struct obsSync_ctx;
/*-------- Input procedures -------------*/
extern void obsSync_I_a(struct obsSync_ctx* ctx, _boolean);
extern void obsSync_I_b(struct obsSync_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void obsSync_reset(struct obsSync_ctx* ctx);
/*--------Context copy -------------*/
extern void obsSync_copy_ctx(struct obsSync_ctx* dest, struct obsSync_ctx
* src);
/*--------Context allocation --------*/
extern struct obsSync_ctx* obsSync_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void obsSync_step(struct obsSync_ctx* ctx);
#endif
#endif
