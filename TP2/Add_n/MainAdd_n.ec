node MainAdd_n
  (x_0: bool;
  x_1: bool;
  x_2: bool;
  x_3: bool;
  x_4: bool;
  x_5: bool;
  x_6: bool;
  x_7: bool;
  x_8: bool;
  x_9: bool;
  x_10: bool;
  x_11: bool;
  x_12: bool;
  x_13: bool;
  x_14: bool;
  x_15: bool;
  x_16: bool;
  x_17: bool;
  x_18: bool;
  x_19: bool;
  x_20: bool;
  x_21: bool;
  x_22: bool;
  x_23: bool;
  x_24: bool;
  x_25: bool;
  x_26: bool;
  x_27: bool;
  x_28: bool;
  x_29: bool;
  x_30: bool;
  x_31: bool;
  y_0: bool;
  y_1: bool;
  y_2: bool;
  y_3: bool;
  y_4: bool;
  y_5: bool;
  y_6: bool;
  y_7: bool;
  y_8: bool;
  y_9: bool;
  y_10: bool;
  y_11: bool;
  y_12: bool;
  y_13: bool;
  y_14: bool;
  y_15: bool;
  y_16: bool;
  y_17: bool;
  y_18: bool;
  y_19: bool;
  y_20: bool;
  y_21: bool;
  y_22: bool;
  y_23: bool;
  y_24: bool;
  y_25: bool;
  y_26: bool;
  y_27: bool;
  y_28: bool;
  y_29: bool;
  y_30: bool;
  y_31: bool;
  c: bool)
returns
  (out_0: bool;
  out_1: bool;
  out_2: bool;
  out_3: bool;
  out_4: bool;
  out_5: bool;
  out_6: bool;
  out_7: bool;
  out_8: bool;
  out_9: bool;
  out_10: bool;
  out_11: bool;
  out_12: bool;
  out_13: bool;
  out_14: bool;
  out_15: bool;
  out_16: bool;
  out_17: bool;
  out_18: bool;
  out_19: bool;
  out_20: bool;
  out_21: bool;
  out_22: bool;
  out_23: bool;
  out_24: bool;
  out_25: bool;
  out_26: bool;
  out_27: bool;
  out_28: bool;
  out_29: bool;
  out_30: bool;
  out_31: bool;
  carry: bool);

var
  V916_carrys_1: bool;
  V917_carrys_2: bool;
  V918_carrys_3: bool;
  V919_carrys_4: bool;
  V920_carrys_5: bool;
  V921_carrys_6: bool;
  V922_carrys_7: bool;
  V923_carrys_8: bool;
  V924_carrys_9: bool;
  V925_carrys_10: bool;
  V926_carrys_11: bool;
  V927_carrys_12: bool;
  V928_carrys_13: bool;
  V929_carrys_14: bool;
  V930_carrys_15: bool;
  V931_carrys_16: bool;
  V932_carrys_17: bool;
  V933_carrys_18: bool;
  V934_carrys_19: bool;
  V935_carrys_20: bool;
  V936_carrys_21: bool;
  V937_carrys_22: bool;
  V938_carrys_23: bool;
  V939_carrys_24: bool;
  V940_carrys_25: bool;
  V941_carrys_26: bool;
  V942_carrys_27: bool;
  V943_carrys_28: bool;
  V944_carrys_29: bool;
  V945_carrys_30: bool;
  V946_carrys_31: bool;

let
  out_0 = ((x_0 xor y_0) xor V916_carrys_1);
  out_1 = ((x_1 xor y_1) xor V917_carrys_2);
  out_2 = ((x_2 xor y_2) xor V918_carrys_3);
  out_3 = ((x_3 xor y_3) xor V919_carrys_4);
  out_4 = ((x_4 xor y_4) xor V920_carrys_5);
  out_5 = ((x_5 xor y_5) xor V921_carrys_6);
  out_6 = ((x_6 xor y_6) xor V922_carrys_7);
  out_7 = ((x_7 xor y_7) xor V923_carrys_8);
  out_8 = ((x_8 xor y_8) xor V924_carrys_9);
  out_9 = ((x_9 xor y_9) xor V925_carrys_10);
  out_10 = ((x_10 xor y_10) xor V926_carrys_11);
  out_11 = ((x_11 xor y_11) xor V927_carrys_12);
  out_12 = ((x_12 xor y_12) xor V928_carrys_13);
  out_13 = ((x_13 xor y_13) xor V929_carrys_14);
  out_14 = ((x_14 xor y_14) xor V930_carrys_15);
  out_15 = ((x_15 xor y_15) xor V931_carrys_16);
  out_16 = ((x_16 xor y_16) xor V932_carrys_17);
  out_17 = ((x_17 xor y_17) xor V933_carrys_18);
  out_18 = ((x_18 xor y_18) xor V934_carrys_19);
  out_19 = ((x_19 xor y_19) xor V935_carrys_20);
  out_20 = ((x_20 xor y_20) xor V936_carrys_21);
  out_21 = ((x_21 xor y_21) xor V937_carrys_22);
  out_22 = ((x_22 xor y_22) xor V938_carrys_23);
  out_23 = ((x_23 xor y_23) xor V939_carrys_24);
  out_24 = ((x_24 xor y_24) xor V940_carrys_25);
  out_25 = ((x_25 xor y_25) xor V941_carrys_26);
  out_26 = ((x_26 xor y_26) xor V942_carrys_27);
  out_27 = ((x_27 xor y_27) xor V943_carrys_28);
  out_28 = ((x_28 xor y_28) xor V944_carrys_29);
  out_29 = ((x_29 xor y_29) xor V945_carrys_30);
  out_30 = ((x_30 xor y_30) xor V946_carrys_31);
  out_31 = ((x_31 xor y_31) xor c);
  carry = (((x_0 and y_0) or (x_0 and V916_carrys_1)) or (y_0 and V916_carrys_1
  ));
  V916_carrys_1 = (((x_1 and y_1) or (x_1 and V917_carrys_2)) or (y_1 and 
  V917_carrys_2));
  V917_carrys_2 = (((x_2 and y_2) or (x_2 and V918_carrys_3)) or (y_2 and 
  V918_carrys_3));
  V918_carrys_3 = (((x_3 and y_3) or (x_3 and V919_carrys_4)) or (y_3 and 
  V919_carrys_4));
  V919_carrys_4 = (((x_4 and y_4) or (x_4 and V920_carrys_5)) or (y_4 and 
  V920_carrys_5));
  V920_carrys_5 = (((x_5 and y_5) or (x_5 and V921_carrys_6)) or (y_5 and 
  V921_carrys_6));
  V921_carrys_6 = (((x_6 and y_6) or (x_6 and V922_carrys_7)) or (y_6 and 
  V922_carrys_7));
  V922_carrys_7 = (((x_7 and y_7) or (x_7 and V923_carrys_8)) or (y_7 and 
  V923_carrys_8));
  V923_carrys_8 = (((x_8 and y_8) or (x_8 and V924_carrys_9)) or (y_8 and 
  V924_carrys_9));
  V924_carrys_9 = (((x_9 and y_9) or (x_9 and V925_carrys_10)) or (y_9 and 
  V925_carrys_10));
  V925_carrys_10 = (((x_10 and y_10) or (x_10 and V926_carrys_11)) or (y_10 and 
  V926_carrys_11));
  V926_carrys_11 = (((x_11 and y_11) or (x_11 and V927_carrys_12)) or (y_11 and 
  V927_carrys_12));
  V927_carrys_12 = (((x_12 and y_12) or (x_12 and V928_carrys_13)) or (y_12 and 
  V928_carrys_13));
  V928_carrys_13 = (((x_13 and y_13) or (x_13 and V929_carrys_14)) or (y_13 and 
  V929_carrys_14));
  V929_carrys_14 = (((x_14 and y_14) or (x_14 and V930_carrys_15)) or (y_14 and 
  V930_carrys_15));
  V930_carrys_15 = (((x_15 and y_15) or (x_15 and V931_carrys_16)) or (y_15 and 
  V931_carrys_16));
  V931_carrys_16 = (((x_16 and y_16) or (x_16 and V932_carrys_17)) or (y_16 and 
  V932_carrys_17));
  V932_carrys_17 = (((x_17 and y_17) or (x_17 and V933_carrys_18)) or (y_17 and 
  V933_carrys_18));
  V933_carrys_18 = (((x_18 and y_18) or (x_18 and V934_carrys_19)) or (y_18 and 
  V934_carrys_19));
  V934_carrys_19 = (((x_19 and y_19) or (x_19 and V935_carrys_20)) or (y_19 and 
  V935_carrys_20));
  V935_carrys_20 = (((x_20 and y_20) or (x_20 and V936_carrys_21)) or (y_20 and 
  V936_carrys_21));
  V936_carrys_21 = (((x_21 and y_21) or (x_21 and V937_carrys_22)) or (y_21 and 
  V937_carrys_22));
  V937_carrys_22 = (((x_22 and y_22) or (x_22 and V938_carrys_23)) or (y_22 and 
  V938_carrys_23));
  V938_carrys_23 = (((x_23 and y_23) or (x_23 and V939_carrys_24)) or (y_23 and 
  V939_carrys_24));
  V939_carrys_24 = (((x_24 and y_24) or (x_24 and V940_carrys_25)) or (y_24 and 
  V940_carrys_25));
  V940_carrys_25 = (((x_25 and y_25) or (x_25 and V941_carrys_26)) or (y_25 and 
  V941_carrys_26));
  V941_carrys_26 = (((x_26 and y_26) or (x_26 and V942_carrys_27)) or (y_26 and 
  V942_carrys_27));
  V942_carrys_27 = (((x_27 and y_27) or (x_27 and V943_carrys_28)) or (y_27 and 
  V943_carrys_28));
  V943_carrys_28 = (((x_28 and y_28) or (x_28 and V944_carrys_29)) or (y_28 and 
  V944_carrys_29));
  V944_carrys_29 = (((x_29 and y_29) or (x_29 and V945_carrys_30)) or (y_29 and 
  V945_carrys_30));
  V945_carrys_30 = (((x_30 and y_30) or (x_30 and V946_carrys_31)) or (y_30 and 
  V946_carrys_31));
  V946_carrys_31 = (((x_31 and y_31) or (x_31 and c)) or (y_31 and c));
tel

