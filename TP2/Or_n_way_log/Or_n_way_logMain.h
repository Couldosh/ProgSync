/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Or_n_way_logMain 
* to be used with : Or_n_way_logMain.c 
********/
#ifndef _Or_n_way_logMain_EC2C_H_FILE
#define _Or_n_way_logMain_EC2C_H_FILE
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
//MODULE: Or_n_way_logMain 8 1
//IN: _boolean in_0
//IN: _boolean in_1
//IN: _boolean in_2
//IN: _boolean in_3
//IN: _boolean in_4
//IN: _boolean in_5
//IN: _boolean in_6
//IN: _boolean in_7
//OUT: _boolean out
#ifndef _Or_n_way_logMain_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Or_n_way_logMain_ctx;
/*-------- Input procedures -------------*/
extern void Or_n_way_logMain_I_in_0(struct Or_n_way_logMain_ctx* ctx, _boolean
);
extern void Or_n_way_logMain_I_in_1(struct Or_n_way_logMain_ctx* ctx, _boolean
);
extern void Or_n_way_logMain_I_in_2(struct Or_n_way_logMain_ctx* ctx, _boolean
);
extern void Or_n_way_logMain_I_in_3(struct Or_n_way_logMain_ctx* ctx, _boolean
);
extern void Or_n_way_logMain_I_in_4(struct Or_n_way_logMain_ctx* ctx, _boolean
);
extern void Or_n_way_logMain_I_in_5(struct Or_n_way_logMain_ctx* ctx, _boolean
);
extern void Or_n_way_logMain_I_in_6(struct Or_n_way_logMain_ctx* ctx, _boolean
);
extern void Or_n_way_logMain_I_in_7(struct Or_n_way_logMain_ctx* ctx, _boolean
);
/*-------- Reset procedure -----------*/
extern void Or_n_way_logMain_reset(struct Or_n_way_logMain_ctx* ctx);
/*--------Context copy -------------*/
extern void Or_n_way_logMain_copy_ctx(struct Or_n_way_logMain_ctx
* dest, struct Or_n_way_logMain_ctx* src);
/*--------Context allocation --------*/
extern struct Or_n_way_logMain_ctx* Or_n_way_logMain_new_ctx
(void* client_data);
/*-------- Step procedure -----------*/
extern void Or_n_way_logMain_step(struct Or_n_way_logMain_ctx* ctx);
#endif
#endif
