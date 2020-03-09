/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Mux 
* to be used with : Mux.c 
********/
#ifndef _Mux_EC2C_H_FILE
#define _Mux_EC2C_H_FILE
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
//MODULE: Mux 3 1
//IN: _boolean a
//IN: _boolean b
//IN: _boolean set
//OUT: _boolean out
#ifndef _Mux_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Mux_ctx;
/*-------- Input procedures -------------*/
extern void Mux_I_a(struct Mux_ctx* ctx, _boolean);
extern void Mux_I_b(struct Mux_ctx* ctx, _boolean);
extern void Mux_I_set(struct Mux_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Mux_reset(struct Mux_ctx* ctx);
/*--------Context copy -------------*/
extern void Mux_copy_ctx(struct Mux_ctx* dest, struct Mux_ctx* src);
/*--------Context allocation --------*/
extern struct Mux_ctx* Mux_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Mux_step(struct Mux_ctx* ctx);
#endif
#endif
