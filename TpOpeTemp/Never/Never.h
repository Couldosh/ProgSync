/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Never 
* to be used with : Never.c 
********/
#ifndef _Never_EC2C_H_FILE
#define _Never_EC2C_H_FILE
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
//MODULE: Never 1 1
//IN: _boolean a
//OUT: _boolean out
#ifndef _Never_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Never_ctx;
/*-------- Input procedures -------------*/
extern void Never_I_a(struct Never_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Never_reset(struct Never_ctx* ctx);
/*--------Context copy -------------*/
extern void Never_copy_ctx(struct Never_ctx* dest, struct Never_ctx* src);
/*--------Context allocation --------*/
extern struct Never_ctx* Never_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Never_step(struct Never_ctx* ctx);
#endif
#endif
