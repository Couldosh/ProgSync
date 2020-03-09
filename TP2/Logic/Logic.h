/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Logic 
* to be used with : Logic.c 
********/
#ifndef _Logic_EC2C_H_FILE
#define _Logic_EC2C_H_FILE
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
//MODULE: Logic 2 4
//IN: _boolean a
//IN: _boolean b
//OUT: _boolean And
//OUT: _boolean Nand
//OUT: _boolean Or
//OUT: _boolean Xor
#ifndef _Logic_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Logic_ctx;
/*-------- Input procedures -------------*/
extern void Logic_I_a(struct Logic_ctx* ctx, _boolean);
extern void Logic_I_b(struct Logic_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Logic_reset(struct Logic_ctx* ctx);
/*--------Context copy -------------*/
extern void Logic_copy_ctx(struct Logic_ctx* dest, struct Logic_ctx* src);
/*--------Context allocation --------*/
extern struct Logic_ctx* Logic_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Logic_step(struct Logic_ctx* ctx);
#endif
#endif
