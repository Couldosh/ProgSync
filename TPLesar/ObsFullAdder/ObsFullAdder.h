/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : ObsFullAdder 
* to be used with : ObsFullAdder.c 
********/
#ifndef _ObsFullAdder_EC2C_H_FILE
#define _ObsFullAdder_EC2C_H_FILE
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
//MODULE: ObsFullAdder 3 1
//IN: _boolean a
//IN: _boolean b
//IN: _boolean Cin
//OUT: _boolean out
#ifndef _ObsFullAdder_EC2C_SRC_FILE
/*--------Context type -------------*/
struct ObsFullAdder_ctx;
/*-------- Input procedures -------------*/
extern void ObsFullAdder_I_a(struct ObsFullAdder_ctx* ctx, _boolean);
extern void ObsFullAdder_I_b(struct ObsFullAdder_ctx* ctx, _boolean);
extern void ObsFullAdder_I_Cin(struct ObsFullAdder_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void ObsFullAdder_reset(struct ObsFullAdder_ctx* ctx);
/*--------Context copy -------------*/
extern void ObsFullAdder_copy_ctx(struct ObsFullAdder_ctx* dest, struct 
ObsFullAdder_ctx* src);
/*--------Context allocation --------*/
extern struct ObsFullAdder_ctx* ObsFullAdder_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void ObsFullAdder_step(struct ObsFullAdder_ctx* ctx);
#endif
#endif
