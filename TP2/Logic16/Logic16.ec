node Logic16
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
  b_15: bool)
returns
  (And_0: bool;
  And_1: bool;
  And_2: bool;
  And_3: bool;
  And_4: bool;
  And_5: bool;
  And_6: bool;
  And_7: bool;
  And_8: bool;
  And_9: bool;
  And_10: bool;
  And_11: bool;
  And_12: bool;
  And_13: bool;
  And_14: bool;
  And_15: bool;
  Nand_0: bool;
  Nand_1: bool;
  Nand_2: bool;
  Nand_3: bool;
  Nand_4: bool;
  Nand_5: bool;
  Nand_6: bool;
  Nand_7: bool;
  Nand_8: bool;
  Nand_9: bool;
  Nand_10: bool;
  Nand_11: bool;
  Nand_12: bool;
  Nand_13: bool;
  Nand_14: bool;
  Nand_15: bool;
  Or_0: bool;
  Or_1: bool;
  Or_2: bool;
  Or_3: bool;
  Or_4: bool;
  Or_5: bool;
  Or_6: bool;
  Or_7: bool;
  Or_8: bool;
  Or_9: bool;
  Or_10: bool;
  Or_11: bool;
  Or_12: bool;
  Or_13: bool;
  Or_14: bool;
  Or_15: bool;
  Xor_0: bool;
  Xor_1: bool;
  Xor_2: bool;
  Xor_3: bool;
  Xor_4: bool;
  Xor_5: bool;
  Xor_6: bool;
  Xor_7: bool;
  Xor_8: bool;
  Xor_9: bool;
  Xor_10: bool;
  Xor_11: bool;
  Xor_12: bool;
  Xor_13: bool;
  Xor_14: bool;
  Xor_15: bool);

let
  And_0 = (a_0 and b_0);
  And_1 = (a_1 and b_1);
  And_2 = (a_2 and b_2);
  And_3 = (a_3 and b_3);
  And_4 = (a_4 and b_4);
  And_5 = (a_5 and b_5);
  And_6 = (a_6 and b_6);
  And_7 = (a_7 and b_7);
  And_8 = (a_8 and b_8);
  And_9 = (a_9 and b_9);
  And_10 = (a_10 and b_10);
  And_11 = (a_11 and b_11);
  And_12 = (a_12 and b_12);
  And_13 = (a_13 and b_13);
  And_14 = (a_14 and b_14);
  And_15 = (a_15 and b_15);
  Nand_0 = (not (a_0 and b_0));
  Nand_1 = (not (a_1 and b_1));
  Nand_2 = (not (a_2 and b_2));
  Nand_3 = (not (a_3 and b_3));
  Nand_4 = (not (a_4 and b_4));
  Nand_5 = (not (a_5 and b_5));
  Nand_6 = (not (a_6 and b_6));
  Nand_7 = (not (a_7 and b_7));
  Nand_8 = (not (a_8 and b_8));
  Nand_9 = (not (a_9 and b_9));
  Nand_10 = (not (a_10 and b_10));
  Nand_11 = (not (a_11 and b_11));
  Nand_12 = (not (a_12 and b_12));
  Nand_13 = (not (a_13 and b_13));
  Nand_14 = (not (a_14 and b_14));
  Nand_15 = (not (a_15 and b_15));
  Or_0 = (a_0 or b_0);
  Or_1 = (a_1 or b_1);
  Or_2 = (a_2 or b_2);
  Or_3 = (a_3 or b_3);
  Or_4 = (a_4 or b_4);
  Or_5 = (a_5 or b_5);
  Or_6 = (a_6 or b_6);
  Or_7 = (a_7 or b_7);
  Or_8 = (a_8 or b_8);
  Or_9 = (a_9 or b_9);
  Or_10 = (a_10 or b_10);
  Or_11 = (a_11 or b_11);
  Or_12 = (a_12 or b_12);
  Or_13 = (a_13 or b_13);
  Or_14 = (a_14 or b_14);
  Or_15 = (a_15 or b_15);
  Xor_0 = ((a_0 or b_0) and (not (a_0 and b_0)));
  Xor_1 = ((a_1 or b_1) and (not (a_1 and b_1)));
  Xor_2 = ((a_2 or b_2) and (not (a_2 and b_2)));
  Xor_3 = ((a_3 or b_3) and (not (a_3 and b_3)));
  Xor_4 = ((a_4 or b_4) and (not (a_4 and b_4)));
  Xor_5 = ((a_5 or b_5) and (not (a_5 and b_5)));
  Xor_6 = ((a_6 or b_6) and (not (a_6 and b_6)));
  Xor_7 = ((a_7 or b_7) and (not (a_7 and b_7)));
  Xor_8 = ((a_8 or b_8) and (not (a_8 and b_8)));
  Xor_9 = ((a_9 or b_9) and (not (a_9 and b_9)));
  Xor_10 = ((a_10 or b_10) and (not (a_10 and b_10)));
  Xor_11 = ((a_11 or b_11) and (not (a_11 and b_11)));
  Xor_12 = ((a_12 or b_12) and (not (a_12 and b_12)));
  Xor_13 = ((a_13 or b_13) and (not (a_13 and b_13)));
  Xor_14 = ((a_14 or b_14) and (not (a_14 and b_14)));
  Xor_15 = ((a_15 or b_15) and (not (a_15 and b_15)));
tel

