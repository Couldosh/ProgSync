/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Logic16 
* to be used with : Logic16.c 
********/
#ifndef _Logic16_EC2C_H_FILE
#define _Logic16_EC2C_H_FILE
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
//MODULE: Logic16 32 64
//IN: _boolean a_0
//IN: _boolean a_1
//IN: _boolean a_2
//IN: _boolean a_3
//IN: _boolean a_4
//IN: _boolean a_5
//IN: _boolean a_6
//IN: _boolean a_7
//IN: _boolean a_8
//IN: _boolean a_9
//IN: _boolean a_10
//IN: _boolean a_11
//IN: _boolean a_12
//IN: _boolean a_13
//IN: _boolean a_14
//IN: _boolean a_15
//IN: _boolean b_0
//IN: _boolean b_1
//IN: _boolean b_2
//IN: _boolean b_3
//IN: _boolean b_4
//IN: _boolean b_5
//IN: _boolean b_6
//IN: _boolean b_7
//IN: _boolean b_8
//IN: _boolean b_9
//IN: _boolean b_10
//IN: _boolean b_11
//IN: _boolean b_12
//IN: _boolean b_13
//IN: _boolean b_14
//IN: _boolean b_15
//OUT: _boolean And_0
//OUT: _boolean And_1
//OUT: _boolean And_2
//OUT: _boolean And_3
//OUT: _boolean And_4
//OUT: _boolean And_5
//OUT: _boolean And_6
//OUT: _boolean And_7
//OUT: _boolean And_8
//OUT: _boolean And_9
//OUT: _boolean And_10
//OUT: _boolean And_11
//OUT: _boolean And_12
//OUT: _boolean And_13
//OUT: _boolean And_14
//OUT: _boolean And_15
//OUT: _boolean Nand_0
//OUT: _boolean Nand_1
//OUT: _boolean Nand_2
//OUT: _boolean Nand_3
//OUT: _boolean Nand_4
//OUT: _boolean Nand_5
//OUT: _boolean Nand_6
//OUT: _boolean Nand_7
//OUT: _boolean Nand_8
//OUT: _boolean Nand_9
//OUT: _boolean Nand_10
//OUT: _boolean Nand_11
//OUT: _boolean Nand_12
//OUT: _boolean Nand_13
//OUT: _boolean Nand_14
//OUT: _boolean Nand_15
//OUT: _boolean Or_0
//OUT: _boolean Or_1
//OUT: _boolean Or_2
//OUT: _boolean Or_3
//OUT: _boolean Or_4
//OUT: _boolean Or_5
//OUT: _boolean Or_6
//OUT: _boolean Or_7
//OUT: _boolean Or_8
//OUT: _boolean Or_9
//OUT: _boolean Or_10
//OUT: _boolean Or_11
//OUT: _boolean Or_12
//OUT: _boolean Or_13
//OUT: _boolean Or_14
//OUT: _boolean Or_15
//OUT: _boolean Xor_0
//OUT: _boolean Xor_1
//OUT: _boolean Xor_2
//OUT: _boolean Xor_3
//OUT: _boolean Xor_4
//OUT: _boolean Xor_5
//OUT: _boolean Xor_6
//OUT: _boolean Xor_7
//OUT: _boolean Xor_8
//OUT: _boolean Xor_9
//OUT: _boolean Xor_10
//OUT: _boolean Xor_11
//OUT: _boolean Xor_12
//OUT: _boolean Xor_13
//OUT: _boolean Xor_14
//OUT: _boolean Xor_15
#ifndef _Logic16_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Logic16_ctx;
/*-------- Input procedures -------------*/
extern void Logic16_I_a_0(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_1(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_2(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_3(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_4(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_5(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_6(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_7(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_8(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_9(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_10(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_11(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_12(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_13(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_14(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_a_15(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_0(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_1(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_2(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_3(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_4(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_5(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_6(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_7(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_8(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_9(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_10(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_11(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_12(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_13(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_14(struct Logic16_ctx* ctx, _boolean);
extern void Logic16_I_b_15(struct Logic16_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Logic16_reset(struct Logic16_ctx* ctx);
/*--------Context copy -------------*/
extern void Logic16_copy_ctx(struct Logic16_ctx* dest, struct Logic16_ctx
* src);
/*--------Context allocation --------*/
extern struct Logic16_ctx* Logic16_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Logic16_step(struct Logic16_ctx* ctx);
#endif
#endif
