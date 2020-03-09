node Add16
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
  carry: bool);

var
  V76_carrys_1: bool;
  V77_carrys_2: bool;
  V78_carrys_3: bool;
  V79_carrys_4: bool;
  V80_carrys_5: bool;
  V81_carrys_6: bool;
  V82_carrys_7: bool;
  V83_carrys_8: bool;
  V84_carrys_9: bool;
  V85_carrys_10: bool;
  V86_carrys_11: bool;
  V87_carrys_12: bool;
  V88_carrys_13: bool;
  V89_carrys_14: bool;
  V90_carrys_15: bool;

let
  out_0 = ((x_0 xor y_0) xor V76_carrys_1);
  out_1 = ((x_1 xor y_1) xor V77_carrys_2);
  out_2 = ((x_2 xor y_2) xor V78_carrys_3);
  out_3 = ((x_3 xor y_3) xor V79_carrys_4);
  out_4 = ((x_4 xor y_4) xor V80_carrys_5);
  out_5 = ((x_5 xor y_5) xor V81_carrys_6);
  out_6 = ((x_6 xor y_6) xor V82_carrys_7);
  out_7 = ((x_7 xor y_7) xor V83_carrys_8);
  out_8 = ((x_8 xor y_8) xor V84_carrys_9);
  out_9 = ((x_9 xor y_9) xor V85_carrys_10);
  out_10 = ((x_10 xor y_10) xor V86_carrys_11);
  out_11 = ((x_11 xor y_11) xor V87_carrys_12);
  out_12 = ((x_12 xor y_12) xor V88_carrys_13);
  out_13 = ((x_13 xor y_13) xor V89_carrys_14);
  out_14 = ((x_14 xor y_14) xor V90_carrys_15);
  out_15 = ((x_15 xor y_15) xor c);
  carry = (((x_0 and y_0) or (x_0 and V76_carrys_1)) or (y_0 and V76_carrys_1))
  ;
  V76_carrys_1 = (((x_1 and y_1) or (x_1 and V77_carrys_2)) or (y_1 and 
  V77_carrys_2));
  V77_carrys_2 = (((x_2 and y_2) or (x_2 and V78_carrys_3)) or (y_2 and 
  V78_carrys_3));
  V78_carrys_3 = (((x_3 and y_3) or (x_3 and V79_carrys_4)) or (y_3 and 
  V79_carrys_4));
  V79_carrys_4 = (((x_4 and y_4) or (x_4 and V80_carrys_5)) or (y_4 and 
  V80_carrys_5));
  V80_carrys_5 = (((x_5 and y_5) or (x_5 and V81_carrys_6)) or (y_5 and 
  V81_carrys_6));
  V81_carrys_6 = (((x_6 and y_6) or (x_6 and V82_carrys_7)) or (y_6 and 
  V82_carrys_7));
  V82_carrys_7 = (((x_7 and y_7) or (x_7 and V83_carrys_8)) or (y_7 and 
  V83_carrys_8));
  V83_carrys_8 = (((x_8 and y_8) or (x_8 and V84_carrys_9)) or (y_8 and 
  V84_carrys_9));
  V84_carrys_9 = (((x_9 and y_9) or (x_9 and V85_carrys_10)) or (y_9 and 
  V85_carrys_10));
  V85_carrys_10 = (((x_10 and y_10) or (x_10 and V86_carrys_11)) or (y_10 and 
  V86_carrys_11));
  V86_carrys_11 = (((x_11 and y_11) or (x_11 and V87_carrys_12)) or (y_11 and 
  V87_carrys_12));
  V87_carrys_12 = (((x_12 and y_12) or (x_12 and V88_carrys_13)) or (y_12 and 
  V88_carrys_13));
  V88_carrys_13 = (((x_13 and y_13) or (x_13 and V89_carrys_14)) or (y_13 and 
  V89_carrys_14));
  V89_carrys_14 = (((x_14 and y_14) or (x_14 and V90_carrys_15)) or (y_14 and 
  V90_carrys_15));
  V90_carrys_15 = (((x_15 and y_15) or (x_15 and c)) or (y_15 and c));
tel

