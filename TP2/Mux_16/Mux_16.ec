node Mux_16
  (a_0: bool;
  a_1: bool;
  a_2: bool;
  a_3: bool;
  a_4: bool;
  a_5: bool;
  a_6: bool;
  a_7: bool;
  a_8: bool;
  a_9: bool;
  a_10: bool;
  a_11: bool;
  a_12: bool;
  a_13: bool;
  a_14: bool;
  a_15: bool;
  b_0: bool;
  b_1: bool;
  b_2: bool;
  b_3: bool;
  b_4: bool;
  b_5: bool;
  b_6: bool;
  b_7: bool;
  b_8: bool;
  b_9: bool;
  b_10: bool;
  b_11: bool;
  b_12: bool;
  b_13: bool;
  b_14: bool;
  b_15: bool;
  set: bool)
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
  out_15: bool);

let
  out_0 = (if set then a_0 else b_0);
  out_1 = (if set then a_1 else b_1);
  out_2 = (if set then a_2 else b_2);
  out_3 = (if set then a_3 else b_3);
  out_4 = (if set then a_4 else b_4);
  out_5 = (if set then a_5 else b_5);
  out_6 = (if set then a_6 else b_6);
  out_7 = (if set then a_7 else b_7);
  out_8 = (if set then a_8 else b_8);
  out_9 = (if set then a_9 else b_9);
  out_10 = (if set then a_10 else b_10);
  out_11 = (if set then a_11 else b_11);
  out_12 = (if set then a_12 else b_12);
  out_13 = (if set then a_13 else b_13);
  out_14 = (if set then a_14 else b_14);
  out_15 = (if set then a_15 else b_15);
tel

