node Inc16
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
  x_15: bool)
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
  V73_carrys_1: bool;
  V74_carrys_2: bool;
  V75_carrys_3: bool;
  V76_carrys_4: bool;
  V77_carrys_5: bool;
  V78_carrys_6: bool;
  V79_carrys_7: bool;
  V80_carrys_8: bool;
  V81_carrys_9: bool;
  V82_carrys_10: bool;
  V83_carrys_11: bool;
  V84_carrys_12: bool;
  V85_carrys_13: bool;
  V86_carrys_14: bool;
  V87_carrys_15: bool;

let
  out_0 = ((x_0 xor false) xor V73_carrys_1);
  out_1 = ((x_1 xor false) xor V74_carrys_2);
  out_2 = ((x_2 xor false) xor V75_carrys_3);
  out_3 = ((x_3 xor false) xor V76_carrys_4);
  out_4 = ((x_4 xor false) xor V77_carrys_5);
  out_5 = ((x_5 xor false) xor V78_carrys_6);
  out_6 = ((x_6 xor false) xor V79_carrys_7);
  out_7 = ((x_7 xor false) xor V80_carrys_8);
  out_8 = ((x_8 xor false) xor V81_carrys_9);
  out_9 = ((x_9 xor false) xor V82_carrys_10);
  out_10 = ((x_10 xor false) xor V83_carrys_11);
  out_11 = ((x_11 xor false) xor V84_carrys_12);
  out_12 = ((x_12 xor false) xor V85_carrys_13);
  out_13 = ((x_13 xor false) xor V86_carrys_14);
  out_14 = ((x_14 xor false) xor V87_carrys_15);
  out_15 = ((x_15 xor true) xor false);
  carry = (((x_0 and false) or (x_0 and V73_carrys_1)) or (false and 
  V73_carrys_1));
  V73_carrys_1 = (((x_1 and false) or (x_1 and V74_carrys_2)) or (false and 
  V74_carrys_2));
  V74_carrys_2 = (((x_2 and false) or (x_2 and V75_carrys_3)) or (false and 
  V75_carrys_3));
  V75_carrys_3 = (((x_3 and false) or (x_3 and V76_carrys_4)) or (false and 
  V76_carrys_4));
  V76_carrys_4 = (((x_4 and false) or (x_4 and V77_carrys_5)) or (false and 
  V77_carrys_5));
  V77_carrys_5 = (((x_5 and false) or (x_5 and V78_carrys_6)) or (false and 
  V78_carrys_6));
  V78_carrys_6 = (((x_6 and false) or (x_6 and V79_carrys_7)) or (false and 
  V79_carrys_7));
  V79_carrys_7 = (((x_7 and false) or (x_7 and V80_carrys_8)) or (false and 
  V80_carrys_8));
  V80_carrys_8 = (((x_8 and false) or (x_8 and V81_carrys_9)) or (false and 
  V81_carrys_9));
  V81_carrys_9 = (((x_9 and false) or (x_9 and V82_carrys_10)) or (false and 
  V82_carrys_10));
  V82_carrys_10 = (((x_10 and false) or (x_10 and V83_carrys_11)) or (false and 
  V83_carrys_11));
  V83_carrys_11 = (((x_11 and false) or (x_11 and V84_carrys_12)) or (false and 
  V84_carrys_12));
  V84_carrys_12 = (((x_12 and false) or (x_12 and V85_carrys_13)) or (false and 
  V85_carrys_13));
  V85_carrys_13 = (((x_13 and false) or (x_13 and V86_carrys_14)) or (false and 
  V86_carrys_14));
  V86_carrys_14 = (((x_14 and false) or (x_14 and V87_carrys_15)) or (false and 
  V87_carrys_15));
  V87_carrys_15 = (((x_15 and true) or (x_15 and false)) or (true and false));
tel

