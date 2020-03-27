/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : AltInit 
* to be used with : AltInit.c 
********/
#ifndef _AltInit_EC2C_H_FILE
#define _AltInit_EC2C_H_FILE
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
//MODULE: AltInit 2 1
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean err
#ifndef _AltInit_EC2C_SRC_FILE
/*--------Context type -------------*/
struct AltInit_ctx;
/*-------- Input procedures -------------*/
extern void AltInit_I_a(struct AltInit_ctx* ctx, _boolean);
extern void AltInit_I_b(struct AltInit_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void AltInit_reset(struct AltInit_ctx* ctx);
/*--------Context copy -------------*/
extern void AltInit_copy_ctx(struct AltInit_ctx* dest, struct AltInit_ctx
* src);
/*--------Context allocation --------*/
extern struct AltInit_ctx* AltInit_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void AltInit_step(struct AltInit_ctx* ctx);
#endif
#endif
