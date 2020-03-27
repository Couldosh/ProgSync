/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : sync 
* to be used with : sync.c 
********/
#ifndef _sync_EC2C_H_FILE
#define _sync_EC2C_H_FILE
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
//MODULE: sync 2 1
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean isSync
#ifndef _sync_EC2C_SRC_FILE
/*--------Context type -------------*/
struct sync_ctx;
/*-------- Input procedures -------------*/
extern void sync_I_a(struct sync_ctx* ctx, _boolean);
extern void sync_I_b(struct sync_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void sync_reset(struct sync_ctx* ctx);
/*--------Context copy -------------*/
extern void sync_copy_ctx(struct sync_ctx* dest, struct sync_ctx* src);
/*--------Context allocation --------*/
extern struct sync_ctx* sync_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void sync_step(struct sync_ctx* ctx);
#endif
#endif
