/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Dmux 
* to be used with : Dmux.c 
********/
#ifndef _Dmux_EC2C_H_FILE
#define _Dmux_EC2C_H_FILE
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
//MODULE: Dmux 2 2
//IN: _boolean in
//IN: _boolean sel
//OUT: _boolean a
//OUT: _boolean b
#ifndef _Dmux_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Dmux_ctx;
/*-------- Input procedures -------------*/
extern void Dmux_I_in(struct Dmux_ctx* ctx, _boolean);
extern void Dmux_I_sel(struct Dmux_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Dmux_reset(struct Dmux_ctx* ctx);
/*--------Context copy -------------*/
extern void Dmux_copy_ctx(struct Dmux_ctx* dest, struct Dmux_ctx* src);
/*--------Context allocation --------*/
extern struct Dmux_ctx* Dmux_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Dmux_step(struct Dmux_ctx* ctx);
#endif
#endif
