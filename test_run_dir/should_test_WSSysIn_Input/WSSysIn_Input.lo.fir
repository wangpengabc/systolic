circuit WSSysIn_Input :
  module ram_sdp_1024x256 :
    input clock : Clock
    input reset : UInt<1>
    input io_wr_en : UInt<1>
    input io_wr_addr : UInt<10>
    input io_wr_data : UInt<256>
    input io_rd_en : UInt<1>
    input io_rd_addr : UInt<10>
    output io_rd_data : UInt<256>

    mem buf : @[systolic_base.scala 70:24]
      data-type => UInt<256>
      depth => 1024
      read-latency => 1
      write-latency => 1
      reader => io_rd_data_MPORT
      writer => MPORT
      read-under-write => undefined
    node _GEN_0 = validif(io_wr_en, io_wr_addr) @[systolic_base.scala 71:17]
    node _GEN_1 = validif(io_wr_en, clock) @[systolic_base.scala 71:17]
    node _GEN_2 = mux(io_wr_en, UInt<1>("h1"), UInt<1>("h0")) @[systolic_base.scala 71:17 70:24]
    node _GEN_3 = validif(io_wr_en, UInt<1>("h1")) @[systolic_base.scala 71:17]
    node _GEN_4 = validif(io_wr_en, io_wr_data) @[systolic_base.scala 71:17]
    io_rd_data <= buf.io_rd_data_MPORT.data @[systolic_base.scala 74:14]
    buf.io_rd_data_MPORT.addr <= io_rd_addr @[systolic_base.scala 74:25]
    buf.io_rd_data_MPORT.en <= UInt<1>("h1") @[systolic_base.scala 74:25]
    buf.io_rd_data_MPORT.clk <= clock @[systolic_base.scala 74:25]
    buf.MPORT.addr <= _GEN_0
    buf.MPORT.en <= _GEN_2
    buf.MPORT.clk <= _GEN_1
    buf.MPORT.data <= _GEN_4
    buf.MPORT.mask <= _GEN_3

  module WSSysIn_Input :
    input clock : Clock
    input reset : UInt<1>
    output io_in_inst_ready : UInt<1>
    input io_in_inst_valid : UInt<1>
    input io_in_inst_bits_id : UInt<5>
    output io_out_inst_ready : UInt<1>
    input io_out_inst_valid : UInt<1>
    input io_out_inst_bits_id : UInt<5>
    input io_config_in_w : UInt<10>
    input io_config_ks : UInt<10>
    input io_config_out_w : UInt<10>
    input io_config_stride : UInt<10>
    output io_data_in_ready : UInt<1>
    input io_data_in_valid : UInt<1>
    input io_data_in_bits_0_valid : UInt<1>
    input io_data_in_bits_0_bits : UInt<256>
    input io_data_in_bits_1_valid : UInt<1>
    input io_data_in_bits_1_bits : UInt<256>
    input io_data_in_bits_2_valid : UInt<1>
    input io_data_in_bits_2_bits : UInt<256>
    input io_data_in_bits_3_valid : UInt<1>
    input io_data_in_bits_3_bits : UInt<256>
    input io_data_in_bits_4_valid : UInt<1>
    input io_data_in_bits_4_bits : UInt<256>
    input io_data_in_bits_5_valid : UInt<1>
    input io_data_in_bits_5_bits : UInt<256>
    input io_data_in_bits_6_valid : UInt<1>
    input io_data_in_bits_6_bits : UInt<256>
    input io_data_in_bits_7_valid : UInt<1>
    input io_data_in_bits_7_bits : UInt<256>
    input io_data_out_ready : UInt<1>
    output io_data_out_valid : UInt<1>
    output io_data_out_bits_0_valid : UInt<1>
    output io_data_out_bits_0_bits : UInt<256>
    output io_data_out_bits_1_valid : UInt<1>
    output io_data_out_bits_1_bits : UInt<256>
    output io_data_out_bits_2_valid : UInt<1>
    output io_data_out_bits_2_bits : UInt<256>
    output io_data_out_bits_3_valid : UInt<1>
    output io_data_out_bits_3_bits : UInt<256>
    output io_data_out_bits_4_valid : UInt<1>
    output io_data_out_bits_4_bits : UInt<256>
    output io_data_out_bits_5_valid : UInt<1>
    output io_data_out_bits_5_bits : UInt<256>
    output io_data_out_bits_6_valid : UInt<1>
    output io_data_out_bits_6_bits : UInt<256>
    output io_data_out_bits_7_valid : UInt<1>
    output io_data_out_bits_7_bits : UInt<256>

    inst ram_sdp_1024x256 of ram_sdp_1024x256 @[systolic_base.scala 294:11]
    inst ram_sdp_1024x256_1 of ram_sdp_1024x256 @[systolic_base.scala 294:11]
    inst ram_sdp_1024x256_2 of ram_sdp_1024x256 @[systolic_base.scala 294:11]
    inst ram_sdp_1024x256_3 of ram_sdp_1024x256 @[systolic_base.scala 294:11]
    inst ram_sdp_1024x256_4 of ram_sdp_1024x256 @[systolic_base.scala 294:11]
    inst ram_sdp_1024x256_5 of ram_sdp_1024x256 @[systolic_base.scala 294:11]
    inst ram_sdp_1024x256_6 of ram_sdp_1024x256 @[systolic_base.scala 294:11]
    inst ram_sdp_1024x256_7 of ram_sdp_1024x256 @[systolic_base.scala 294:11]
    node _T = bits(reset, 0, 0) @[systolic_base.scala 290:9]
    node _T_1 = eq(_T, UInt<1>("h0")) @[systolic_base.scala 290:9]
    reg in_addr_0 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), in_addr_0) @[systolic_base.scala 297:24]
    reg in_addr_1 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), in_addr_1) @[systolic_base.scala 297:24]
    reg in_addr_2 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), in_addr_2) @[systolic_base.scala 297:24]
    reg in_addr_3 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), in_addr_3) @[systolic_base.scala 297:24]
    reg in_addr_4 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), in_addr_4) @[systolic_base.scala 297:24]
    reg in_addr_5 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), in_addr_5) @[systolic_base.scala 297:24]
    reg in_addr_6 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), in_addr_6) @[systolic_base.scala 297:24]
    reg in_addr_7 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), in_addr_7) @[systolic_base.scala 297:24]
    reg out_addr_0 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), out_addr_0) @[systolic_base.scala 298:25]
    reg out_addr_1 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), out_addr_1) @[systolic_base.scala 298:25]
    reg out_addr_2 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), out_addr_2) @[systolic_base.scala 298:25]
    reg out_addr_3 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), out_addr_3) @[systolic_base.scala 298:25]
    reg out_addr_4 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), out_addr_4) @[systolic_base.scala 298:25]
    reg out_addr_5 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), out_addr_5) @[systolic_base.scala 298:25]
    reg out_addr_6 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), out_addr_6) @[systolic_base.scala 298:25]
    reg out_addr_7 : UInt<10>, clock with :
      reset => (UInt<1>("h0"), out_addr_7) @[systolic_base.scala 298:25]
    reg can_out_0 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), can_out_0) @[systolic_base.scala 299:24]
    reg can_out_1 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), can_out_1) @[systolic_base.scala 299:24]
    reg can_out_2 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), can_out_2) @[systolic_base.scala 299:24]
    reg can_out_3 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), can_out_3) @[systolic_base.scala 299:24]
    reg can_out_4 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), can_out_4) @[systolic_base.scala 299:24]
    reg can_out_5 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), can_out_5) @[systolic_base.scala 299:24]
    reg can_out_6 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), can_out_6) @[systolic_base.scala 299:24]
    reg can_out_7 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), can_out_7) @[systolic_base.scala 299:24]
    reg can_out_8 : UInt<1>, clock with :
      reset => (UInt<1>("h0"), can_out_8) @[systolic_base.scala 299:24]
    reg out_kh_0 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kh_0) @[systolic_base.scala 302:23]
    reg out_kh_1 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kh_1) @[systolic_base.scala 302:23]
    reg out_kh_2 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kh_2) @[systolic_base.scala 302:23]
    reg out_kh_3 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kh_3) @[systolic_base.scala 302:23]
    reg out_kh_4 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kh_4) @[systolic_base.scala 302:23]
    reg out_kh_5 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kh_5) @[systolic_base.scala 302:23]
    reg out_kh_6 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kh_6) @[systolic_base.scala 302:23]
    reg out_kh_7 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kh_7) @[systolic_base.scala 302:23]
    reg out_kw_0 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kw_0) @[systolic_base.scala 303:23]
    reg out_kw_1 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kw_1) @[systolic_base.scala 303:23]
    reg out_kw_2 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kw_2) @[systolic_base.scala 303:23]
    reg out_kw_3 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kw_3) @[systolic_base.scala 303:23]
    reg out_kw_4 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kw_4) @[systolic_base.scala 303:23]
    reg out_kw_5 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kw_5) @[systolic_base.scala 303:23]
    reg out_kw_6 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kw_6) @[systolic_base.scala 303:23]
    reg out_kw_7 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_kw_7) @[systolic_base.scala 303:23]
    reg out_slot_0 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_slot_0) @[systolic_base.scala 304:25]
    reg out_slot_1 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_slot_1) @[systolic_base.scala 304:25]
    reg out_slot_2 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_slot_2) @[systolic_base.scala 304:25]
    reg out_slot_3 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_slot_3) @[systolic_base.scala 304:25]
    reg out_slot_4 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_slot_4) @[systolic_base.scala 304:25]
    reg out_slot_5 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_slot_5) @[systolic_base.scala 304:25]
    reg out_slot_6 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_slot_6) @[systolic_base.scala 304:25]
    reg out_slot_7 : UInt<4>, clock with :
      reset => (UInt<1>("h0"), out_slot_7) @[systolic_base.scala 304:25]
    node _can_out_0_T = and(io_out_inst_valid, io_data_out_ready) @[systolic_base.scala 307:35]
    node _T_2 = mul(io_in_inst_bits_id, UInt<6>("h20")) @[systolic_base.scala 322:47]
    node _T_3 = add(_T_2, in_addr_0) @[systolic_base.scala 322:68]
    node _T_4 = tail(_T_3, 1) @[systolic_base.scala 322:68]
    node _T_5 = and(io_data_in_valid, io_data_in_ready) @[systolic_base.scala 323:43]
    node _T_6 = add(out_slot_0, out_kh_0) @[systolic_base.scala 326:41]
    node _T_7 = tail(_T_6, 1) @[systolic_base.scala 326:41]
    node _T_8 = mul(_T_7, UInt<6>("h20")) @[systolic_base.scala 326:54]
    node _T_9 = add(_T_8, out_addr_0) @[systolic_base.scala 326:75]
    node _T_10 = tail(_T_9, 1) @[systolic_base.scala 326:75]
    node _T_11 = add(_T_10, out_kw_0) @[systolic_base.scala 326:88]
    node _T_12 = tail(_T_11, 1) @[systolic_base.scala 326:88]
    node _T_13 = mul(io_in_inst_bits_id, UInt<6>("h20")) @[systolic_base.scala 322:47]
    node _T_14 = add(_T_13, in_addr_1) @[systolic_base.scala 322:68]
    node _T_15 = tail(_T_14, 1) @[systolic_base.scala 322:68]
    node _T_16 = and(io_data_in_valid, io_data_in_ready) @[systolic_base.scala 323:43]
    node _T_17 = add(out_slot_1, out_kh_1) @[systolic_base.scala 326:41]
    node _T_18 = tail(_T_17, 1) @[systolic_base.scala 326:41]
    node _T_19 = mul(_T_18, UInt<6>("h20")) @[systolic_base.scala 326:54]
    node _T_20 = add(_T_19, out_addr_1) @[systolic_base.scala 326:75]
    node _T_21 = tail(_T_20, 1) @[systolic_base.scala 326:75]
    node _T_22 = add(_T_21, out_kw_1) @[systolic_base.scala 326:88]
    node _T_23 = tail(_T_22, 1) @[systolic_base.scala 326:88]
    node _T_24 = mul(io_in_inst_bits_id, UInt<6>("h20")) @[systolic_base.scala 322:47]
    node _T_25 = add(_T_24, in_addr_2) @[systolic_base.scala 322:68]
    node _T_26 = tail(_T_25, 1) @[systolic_base.scala 322:68]
    node _T_27 = and(io_data_in_valid, io_data_in_ready) @[systolic_base.scala 323:43]
    node _T_28 = add(out_slot_2, out_kh_2) @[systolic_base.scala 326:41]
    node _T_29 = tail(_T_28, 1) @[systolic_base.scala 326:41]
    node _T_30 = mul(_T_29, UInt<6>("h20")) @[systolic_base.scala 326:54]
    node _T_31 = add(_T_30, out_addr_2) @[systolic_base.scala 326:75]
    node _T_32 = tail(_T_31, 1) @[systolic_base.scala 326:75]
    node _T_33 = add(_T_32, out_kw_2) @[systolic_base.scala 326:88]
    node _T_34 = tail(_T_33, 1) @[systolic_base.scala 326:88]
    node _T_35 = mul(io_in_inst_bits_id, UInt<6>("h20")) @[systolic_base.scala 322:47]
    node _T_36 = add(_T_35, in_addr_3) @[systolic_base.scala 322:68]
    node _T_37 = tail(_T_36, 1) @[systolic_base.scala 322:68]
    node _T_38 = and(io_data_in_valid, io_data_in_ready) @[systolic_base.scala 323:43]
    node _T_39 = add(out_slot_3, out_kh_3) @[systolic_base.scala 326:41]
    node _T_40 = tail(_T_39, 1) @[systolic_base.scala 326:41]
    node _T_41 = mul(_T_40, UInt<6>("h20")) @[systolic_base.scala 326:54]
    node _T_42 = add(_T_41, out_addr_3) @[systolic_base.scala 326:75]
    node _T_43 = tail(_T_42, 1) @[systolic_base.scala 326:75]
    node _T_44 = add(_T_43, out_kw_3) @[systolic_base.scala 326:88]
    node _T_45 = tail(_T_44, 1) @[systolic_base.scala 326:88]
    node _T_46 = mul(io_in_inst_bits_id, UInt<6>("h20")) @[systolic_base.scala 322:47]
    node _T_47 = add(_T_46, in_addr_4) @[systolic_base.scala 322:68]
    node _T_48 = tail(_T_47, 1) @[systolic_base.scala 322:68]
    node _T_49 = and(io_data_in_valid, io_data_in_ready) @[systolic_base.scala 323:43]
    node _T_50 = add(out_slot_4, out_kh_4) @[systolic_base.scala 326:41]
    node _T_51 = tail(_T_50, 1) @[systolic_base.scala 326:41]
    node _T_52 = mul(_T_51, UInt<6>("h20")) @[systolic_base.scala 326:54]
    node _T_53 = add(_T_52, out_addr_4) @[systolic_base.scala 326:75]
    node _T_54 = tail(_T_53, 1) @[systolic_base.scala 326:75]
    node _T_55 = add(_T_54, out_kw_4) @[systolic_base.scala 326:88]
    node _T_56 = tail(_T_55, 1) @[systolic_base.scala 326:88]
    node _T_57 = mul(io_in_inst_bits_id, UInt<6>("h20")) @[systolic_base.scala 322:47]
    node _T_58 = add(_T_57, in_addr_5) @[systolic_base.scala 322:68]
    node _T_59 = tail(_T_58, 1) @[systolic_base.scala 322:68]
    node _T_60 = and(io_data_in_valid, io_data_in_ready) @[systolic_base.scala 323:43]
    node _T_61 = add(out_slot_5, out_kh_5) @[systolic_base.scala 326:41]
    node _T_62 = tail(_T_61, 1) @[systolic_base.scala 326:41]
    node _T_63 = mul(_T_62, UInt<6>("h20")) @[systolic_base.scala 326:54]
    node _T_64 = add(_T_63, out_addr_5) @[systolic_base.scala 326:75]
    node _T_65 = tail(_T_64, 1) @[systolic_base.scala 326:75]
    node _T_66 = add(_T_65, out_kw_5) @[systolic_base.scala 326:88]
    node _T_67 = tail(_T_66, 1) @[systolic_base.scala 326:88]
    node _T_68 = mul(io_in_inst_bits_id, UInt<6>("h20")) @[systolic_base.scala 322:47]
    node _T_69 = add(_T_68, in_addr_6) @[systolic_base.scala 322:68]
    node _T_70 = tail(_T_69, 1) @[systolic_base.scala 322:68]
    node _T_71 = and(io_data_in_valid, io_data_in_ready) @[systolic_base.scala 323:43]
    node _T_72 = add(out_slot_6, out_kh_6) @[systolic_base.scala 326:41]
    node _T_73 = tail(_T_72, 1) @[systolic_base.scala 326:41]
    node _T_74 = mul(_T_73, UInt<6>("h20")) @[systolic_base.scala 326:54]
    node _T_75 = add(_T_74, out_addr_6) @[systolic_base.scala 326:75]
    node _T_76 = tail(_T_75, 1) @[systolic_base.scala 326:75]
    node _T_77 = add(_T_76, out_kw_6) @[systolic_base.scala 326:88]
    node _T_78 = tail(_T_77, 1) @[systolic_base.scala 326:88]
    node _T_79 = mul(io_in_inst_bits_id, UInt<6>("h20")) @[systolic_base.scala 322:47]
    node _T_80 = add(_T_79, in_addr_7) @[systolic_base.scala 322:68]
    node _T_81 = tail(_T_80, 1) @[systolic_base.scala 322:68]
    node _T_82 = and(io_data_in_valid, io_data_in_ready) @[systolic_base.scala 323:43]
    node _T_83 = add(out_slot_7, out_kh_7) @[systolic_base.scala 326:41]
    node _T_84 = tail(_T_83, 1) @[systolic_base.scala 326:41]
    node _T_85 = mul(_T_84, UInt<6>("h20")) @[systolic_base.scala 326:54]
    node _T_86 = add(_T_85, out_addr_7) @[systolic_base.scala 326:75]
    node _T_87 = tail(_T_86, 1) @[systolic_base.scala 326:75]
    node _T_88 = add(_T_87, out_kw_7) @[systolic_base.scala 326:88]
    node _T_89 = tail(_T_88, 1) @[systolic_base.scala 326:88]
    node _T_90 = and(io_data_in_valid, io_data_in_ready) @[systolic_base.scala 330:25]
    node _T_91 = add(in_addr_0, io_data_in_bits_0_valid) @[systolic_base.scala 332:22]
    node _T_92 = tail(_T_91, 1) @[systolic_base.scala 332:22]
    node _T_93 = lt(_T_92, io_config_in_w) @[systolic_base.scala 332:47]
    node _in_addr_0_T = add(in_addr_0, io_data_in_bits_0_valid) @[systolic_base.scala 333:31]
    node _in_addr_0_T_1 = tail(_in_addr_0_T, 1) @[systolic_base.scala 333:31]
    node _GEN_0 = mux(_T_93, _in_addr_0_T_1, UInt<1>("h0")) @[systolic_base.scala 332:63 333:19 335:19]
    node _T_94 = add(in_addr_1, io_data_in_bits_1_valid) @[systolic_base.scala 332:22]
    node _T_95 = tail(_T_94, 1) @[systolic_base.scala 332:22]
    node _T_96 = lt(_T_95, io_config_in_w) @[systolic_base.scala 332:47]
    node _in_addr_1_T = add(in_addr_1, io_data_in_bits_1_valid) @[systolic_base.scala 333:31]
    node _in_addr_1_T_1 = tail(_in_addr_1_T, 1) @[systolic_base.scala 333:31]
    node _GEN_1 = mux(_T_96, _in_addr_1_T_1, UInt<1>("h0")) @[systolic_base.scala 332:63 333:19 335:19]
    node _T_97 = add(in_addr_2, io_data_in_bits_2_valid) @[systolic_base.scala 332:22]
    node _T_98 = tail(_T_97, 1) @[systolic_base.scala 332:22]
    node _T_99 = lt(_T_98, io_config_in_w) @[systolic_base.scala 332:47]
    node _in_addr_2_T = add(in_addr_2, io_data_in_bits_2_valid) @[systolic_base.scala 333:31]
    node _in_addr_2_T_1 = tail(_in_addr_2_T, 1) @[systolic_base.scala 333:31]
    node _GEN_2 = mux(_T_99, _in_addr_2_T_1, UInt<1>("h0")) @[systolic_base.scala 332:63 333:19 335:19]
    node _T_100 = add(in_addr_3, io_data_in_bits_3_valid) @[systolic_base.scala 332:22]
    node _T_101 = tail(_T_100, 1) @[systolic_base.scala 332:22]
    node _T_102 = lt(_T_101, io_config_in_w) @[systolic_base.scala 332:47]
    node _in_addr_3_T = add(in_addr_3, io_data_in_bits_3_valid) @[systolic_base.scala 333:31]
    node _in_addr_3_T_1 = tail(_in_addr_3_T, 1) @[systolic_base.scala 333:31]
    node _GEN_3 = mux(_T_102, _in_addr_3_T_1, UInt<1>("h0")) @[systolic_base.scala 332:63 333:19 335:19]
    node _T_103 = add(in_addr_4, io_data_in_bits_4_valid) @[systolic_base.scala 332:22]
    node _T_104 = tail(_T_103, 1) @[systolic_base.scala 332:22]
    node _T_105 = lt(_T_104, io_config_in_w) @[systolic_base.scala 332:47]
    node _in_addr_4_T = add(in_addr_4, io_data_in_bits_4_valid) @[systolic_base.scala 333:31]
    node _in_addr_4_T_1 = tail(_in_addr_4_T, 1) @[systolic_base.scala 333:31]
    node _GEN_4 = mux(_T_105, _in_addr_4_T_1, UInt<1>("h0")) @[systolic_base.scala 332:63 333:19 335:19]
    node _T_106 = add(in_addr_5, io_data_in_bits_5_valid) @[systolic_base.scala 332:22]
    node _T_107 = tail(_T_106, 1) @[systolic_base.scala 332:22]
    node _T_108 = lt(_T_107, io_config_in_w) @[systolic_base.scala 332:47]
    node _in_addr_5_T = add(in_addr_5, io_data_in_bits_5_valid) @[systolic_base.scala 333:31]
    node _in_addr_5_T_1 = tail(_in_addr_5_T, 1) @[systolic_base.scala 333:31]
    node _GEN_5 = mux(_T_108, _in_addr_5_T_1, UInt<1>("h0")) @[systolic_base.scala 332:63 333:19 335:19]
    node _T_109 = add(in_addr_6, io_data_in_bits_6_valid) @[systolic_base.scala 332:22]
    node _T_110 = tail(_T_109, 1) @[systolic_base.scala 332:22]
    node _T_111 = lt(_T_110, io_config_in_w) @[systolic_base.scala 332:47]
    node _in_addr_6_T = add(in_addr_6, io_data_in_bits_6_valid) @[systolic_base.scala 333:31]
    node _in_addr_6_T_1 = tail(_in_addr_6_T, 1) @[systolic_base.scala 333:31]
    node _GEN_6 = mux(_T_111, _in_addr_6_T_1, UInt<1>("h0")) @[systolic_base.scala 332:63 333:19 335:19]
    node _T_112 = add(in_addr_7, io_data_in_bits_7_valid) @[systolic_base.scala 332:22]
    node _T_113 = tail(_T_112, 1) @[systolic_base.scala 332:22]
    node _T_114 = lt(_T_113, io_config_in_w) @[systolic_base.scala 332:47]
    node _in_addr_7_T = add(in_addr_7, io_data_in_bits_7_valid) @[systolic_base.scala 333:31]
    node _in_addr_7_T_1 = tail(_in_addr_7_T, 1) @[systolic_base.scala 333:31]
    node _GEN_7 = mux(_T_114, _in_addr_7_T_1, UInt<1>("h0")) @[systolic_base.scala 332:63 333:19 335:19]
    node _T_115 = sub(io_config_in_w, UInt<1>("h1")) @[systolic_base.scala 340:45]
    node _T_116 = tail(_T_115, 1) @[systolic_base.scala 340:45]
    node _T_117 = eq(in_addr_7, _T_116) @[systolic_base.scala 340:27]
    node _T_118 = and(_T_117, io_data_in_bits_7_valid) @[systolic_base.scala 340:51]
    node _GEN_8 = mux(_T_118, UInt<1>("h1"), UInt<1>("h0")) @[systolic_base.scala 340:86 341:24 343:24]
    node _GEN_9 = mux(_T_90, _GEN_0, in_addr_0) @[systolic_base.scala 297:24 330:45]
    node _GEN_10 = mux(_T_90, _GEN_1, in_addr_1) @[systolic_base.scala 297:24 330:45]
    node _GEN_11 = mux(_T_90, _GEN_2, in_addr_2) @[systolic_base.scala 297:24 330:45]
    node _GEN_12 = mux(_T_90, _GEN_3, in_addr_3) @[systolic_base.scala 297:24 330:45]
    node _GEN_13 = mux(_T_90, _GEN_4, in_addr_4) @[systolic_base.scala 297:24 330:45]
    node _GEN_14 = mux(_T_90, _GEN_5, in_addr_5) @[systolic_base.scala 297:24 330:45]
    node _GEN_15 = mux(_T_90, _GEN_6, in_addr_6) @[systolic_base.scala 297:24 330:45]
    node _GEN_16 = mux(_T_90, _GEN_7, in_addr_7) @[systolic_base.scala 297:24 330:45]
    node _GEN_17 = mux(_T_90, _GEN_8, UInt<1>("h0")) @[systolic_base.scala 330:45 346:22]
    node _T_119 = add(out_addr_0, UInt<1>("h1")) @[systolic_base.scala 352:21]
    node _T_120 = tail(_T_119, 1) @[systolic_base.scala 352:21]
    node _T_121 = lt(_T_120, io_config_out_w) @[systolic_base.scala 352:25]
    node _out_addr_0_T = add(out_addr_0, UInt<1>("h1")) @[systolic_base.scala 353:31]
    node _out_addr_0_T_1 = tail(_out_addr_0_T, 1) @[systolic_base.scala 353:31]
    node _T_122 = add(out_kw_0, UInt<1>("h1")) @[systolic_base.scala 356:21]
    node _T_123 = tail(_T_122, 1) @[systolic_base.scala 356:21]
    node _T_124 = lt(_T_123, io_config_ks) @[systolic_base.scala 356:25]
    node _out_kw_0_T = add(out_kw_0, UInt<1>("h1")) @[systolic_base.scala 357:29]
    node _out_kw_0_T_1 = tail(_out_kw_0_T, 1) @[systolic_base.scala 357:29]
    node _T_125 = add(out_kh_0, UInt<1>("h1")) @[systolic_base.scala 360:23]
    node _T_126 = tail(_T_125, 1) @[systolic_base.scala 360:23]
    node _T_127 = lt(_T_126, io_config_ks) @[systolic_base.scala 360:27]
    node _out_kh_0_T = add(out_kh_0, UInt<1>("h1")) @[systolic_base.scala 361:31]
    node _out_kh_0_T_1 = tail(_out_kh_0_T, 1) @[systolic_base.scala 361:31]
    node _GEN_18 = mux(_T_127, _out_kh_0_T_1, UInt<1>("h0")) @[systolic_base.scala 360:41 361:20 363:20]
    node _GEN_19 = mux(_T_124, _out_kw_0_T_1, UInt<1>("h0")) @[systolic_base.scala 356:39 357:18 359:19]
    node _GEN_20 = mux(_T_124, out_kh_0, _GEN_18) @[systolic_base.scala 302:23 356:39]
    node _GEN_21 = mux(_T_121, _out_addr_0_T_1, UInt<1>("h0")) @[systolic_base.scala 352:42 353:18 355:18]
    node _GEN_22 = mux(_T_121, out_kw_0, _GEN_19) @[systolic_base.scala 303:23 352:42]
    node _GEN_23 = mux(_T_121, out_kh_0, _GEN_20) @[systolic_base.scala 302:23 352:42]
    node _GEN_24 = mux(can_out_0, _GEN_21, out_addr_0) @[systolic_base.scala 351:19 298:25]
    node _GEN_25 = mux(can_out_0, _GEN_22, out_kw_0) @[systolic_base.scala 351:19 303:23]
    node _GEN_26 = mux(can_out_0, _GEN_23, out_kh_0) @[systolic_base.scala 351:19 302:23]
    node _in_addr_WIRE_0 = UInt<10>("h0") @[systolic_base.scala 297:{32,32}]
    node _in_addr_WIRE_1 = UInt<10>("h0") @[systolic_base.scala 297:{32,32}]
    node _in_addr_WIRE_2 = UInt<10>("h0") @[systolic_base.scala 297:{32,32}]
    node _in_addr_WIRE_3 = UInt<10>("h0") @[systolic_base.scala 297:{32,32}]
    node _in_addr_WIRE_4 = UInt<10>("h0") @[systolic_base.scala 297:{32,32}]
    node _in_addr_WIRE_5 = UInt<10>("h0") @[systolic_base.scala 297:{32,32}]
    node _in_addr_WIRE_6 = UInt<10>("h0") @[systolic_base.scala 297:{32,32}]
    node _in_addr_WIRE_7 = UInt<10>("h0") @[systolic_base.scala 297:{32,32}]
    node _out_addr_WIRE_0 = UInt<10>("h0") @[systolic_base.scala 298:{33,33}]
    node _out_addr_WIRE_1 = UInt<10>("h0") @[systolic_base.scala 298:{33,33}]
    node _out_addr_WIRE_2 = UInt<10>("h0") @[systolic_base.scala 298:{33,33}]
    node _out_addr_WIRE_3 = UInt<10>("h0") @[systolic_base.scala 298:{33,33}]
    node _out_addr_WIRE_4 = UInt<10>("h0") @[systolic_base.scala 298:{33,33}]
    node _out_addr_WIRE_5 = UInt<10>("h0") @[systolic_base.scala 298:{33,33}]
    node _out_addr_WIRE_6 = UInt<10>("h0") @[systolic_base.scala 298:{33,33}]
    node _out_addr_WIRE_7 = UInt<10>("h0") @[systolic_base.scala 298:{33,33}]
    node _can_out_WIRE_0 = UInt<1>("h0") @[systolic_base.scala 299:{32,32}]
    node _can_out_WIRE_1 = UInt<1>("h0") @[systolic_base.scala 299:{32,32}]
    node _can_out_WIRE_2 = UInt<1>("h0") @[systolic_base.scala 299:{32,32}]
    node _can_out_WIRE_3 = UInt<1>("h0") @[systolic_base.scala 299:{32,32}]
    node _can_out_WIRE_4 = UInt<1>("h0") @[systolic_base.scala 299:{32,32}]
    node _can_out_WIRE_5 = UInt<1>("h0") @[systolic_base.scala 299:{32,32}]
    node _can_out_WIRE_6 = UInt<1>("h0") @[systolic_base.scala 299:{32,32}]
    node _can_out_WIRE_7 = UInt<1>("h0") @[systolic_base.scala 299:{32,32}]
    node _can_out_WIRE_8 = UInt<1>("h0") @[systolic_base.scala 299:{32,32}]
    node _out_kh_WIRE_0 = UInt<4>("h0") @[systolic_base.scala 302:{31,31}]
    node _out_kh_WIRE_1 = UInt<4>("h0") @[systolic_base.scala 302:{31,31}]
    node _out_kh_WIRE_2 = UInt<4>("h0") @[systolic_base.scala 302:{31,31}]
    node _out_kh_WIRE_3 = UInt<4>("h0") @[systolic_base.scala 302:{31,31}]
    node _out_kh_WIRE_4 = UInt<4>("h0") @[systolic_base.scala 302:{31,31}]
    node _out_kh_WIRE_5 = UInt<4>("h0") @[systolic_base.scala 302:{31,31}]
    node _out_kh_WIRE_6 = UInt<4>("h0") @[systolic_base.scala 302:{31,31}]
    node _out_kh_WIRE_7 = UInt<4>("h0") @[systolic_base.scala 302:{31,31}]
    node _out_kw_WIRE_0 = UInt<4>("h0") @[systolic_base.scala 303:{31,31}]
    node _out_kw_WIRE_1 = UInt<4>("h0") @[systolic_base.scala 303:{31,31}]
    node _out_kw_WIRE_2 = UInt<4>("h0") @[systolic_base.scala 303:{31,31}]
    node _out_kw_WIRE_3 = UInt<4>("h0") @[systolic_base.scala 303:{31,31}]
    node _out_kw_WIRE_4 = UInt<4>("h0") @[systolic_base.scala 303:{31,31}]
    node _out_kw_WIRE_5 = UInt<4>("h0") @[systolic_base.scala 303:{31,31}]
    node _out_kw_WIRE_6 = UInt<4>("h0") @[systolic_base.scala 303:{31,31}]
    node _out_kw_WIRE_7 = UInt<4>("h0") @[systolic_base.scala 303:{31,31}]
    node _out_slot_WIRE_0 = UInt<4>("h0") @[systolic_base.scala 304:{33,33}]
    node _out_slot_WIRE_1 = UInt<4>("h0") @[systolic_base.scala 304:{33,33}]
    node _out_slot_WIRE_2 = UInt<4>("h0") @[systolic_base.scala 304:{33,33}]
    node _out_slot_WIRE_3 = UInt<4>("h0") @[systolic_base.scala 304:{33,33}]
    node _out_slot_WIRE_4 = UInt<4>("h0") @[systolic_base.scala 304:{33,33}]
    node _out_slot_WIRE_5 = UInt<4>("h0") @[systolic_base.scala 304:{33,33}]
    node _out_slot_WIRE_6 = UInt<4>("h0") @[systolic_base.scala 304:{33,33}]
    node _out_slot_WIRE_7 = UInt<4>("h0") @[systolic_base.scala 304:{33,33}]
    io_in_inst_ready <= _GEN_17
    io_out_inst_ready <= UInt<1>("h1") @[systolic_base.scala 309:21]
    io_data_in_ready <= io_in_inst_valid @[systolic_base.scala 320:20]
    io_data_out_valid <= UInt<1>("h1") @[systolic_base.scala 368:21]
    io_data_out_bits_0_valid <= can_out_1 @[systolic_base.scala 349:30]
    io_data_out_bits_0_bits <= ram_sdp_1024x256.io_rd_data @[systolic_base.scala 327:30]
    io_data_out_bits_1_valid <= can_out_2 @[systolic_base.scala 349:30]
    io_data_out_bits_1_bits <= ram_sdp_1024x256_1.io_rd_data @[systolic_base.scala 327:30]
    io_data_out_bits_2_valid <= can_out_3 @[systolic_base.scala 349:30]
    io_data_out_bits_2_bits <= ram_sdp_1024x256_2.io_rd_data @[systolic_base.scala 327:30]
    io_data_out_bits_3_valid <= can_out_4 @[systolic_base.scala 349:30]
    io_data_out_bits_3_bits <= ram_sdp_1024x256_3.io_rd_data @[systolic_base.scala 327:30]
    io_data_out_bits_4_valid <= can_out_5 @[systolic_base.scala 349:30]
    io_data_out_bits_4_bits <= ram_sdp_1024x256_4.io_rd_data @[systolic_base.scala 327:30]
    io_data_out_bits_5_valid <= can_out_6 @[systolic_base.scala 349:30]
    io_data_out_bits_5_bits <= ram_sdp_1024x256_5.io_rd_data @[systolic_base.scala 327:30]
    io_data_out_bits_6_valid <= can_out_7 @[systolic_base.scala 349:30]
    io_data_out_bits_6_bits <= ram_sdp_1024x256_6.io_rd_data @[systolic_base.scala 327:30]
    io_data_out_bits_7_valid <= can_out_8 @[systolic_base.scala 349:30]
    io_data_out_bits_7_bits <= ram_sdp_1024x256_7.io_rd_data @[systolic_base.scala 327:30]
    ram_sdp_1024x256.clock <= clock
    ram_sdp_1024x256.reset <= reset
    ram_sdp_1024x256.io_wr_en <= _T_5 @[systolic_base.scala 323:23]
    ram_sdp_1024x256.io_wr_addr <= bits(_T_4, 9, 0) @[systolic_base.scala 322:25]
    ram_sdp_1024x256.io_wr_data <= io_data_in_bits_0_bits @[systolic_base.scala 324:25]
    ram_sdp_1024x256.io_rd_en <= UInt<1>("h1") @[systolic_base.scala 325:23]
    ram_sdp_1024x256.io_rd_addr <= _T_12 @[systolic_base.scala 326:25]
    ram_sdp_1024x256_1.clock <= clock
    ram_sdp_1024x256_1.reset <= reset
    ram_sdp_1024x256_1.io_wr_en <= _T_16 @[systolic_base.scala 323:23]
    ram_sdp_1024x256_1.io_wr_addr <= bits(_T_15, 9, 0) @[systolic_base.scala 322:25]
    ram_sdp_1024x256_1.io_wr_data <= io_data_in_bits_1_bits @[systolic_base.scala 324:25]
    ram_sdp_1024x256_1.io_rd_en <= UInt<1>("h1") @[systolic_base.scala 325:23]
    ram_sdp_1024x256_1.io_rd_addr <= _T_23 @[systolic_base.scala 326:25]
    ram_sdp_1024x256_2.clock <= clock
    ram_sdp_1024x256_2.reset <= reset
    ram_sdp_1024x256_2.io_wr_en <= _T_27 @[systolic_base.scala 323:23]
    ram_sdp_1024x256_2.io_wr_addr <= bits(_T_26, 9, 0) @[systolic_base.scala 322:25]
    ram_sdp_1024x256_2.io_wr_data <= io_data_in_bits_2_bits @[systolic_base.scala 324:25]
    ram_sdp_1024x256_2.io_rd_en <= UInt<1>("h1") @[systolic_base.scala 325:23]
    ram_sdp_1024x256_2.io_rd_addr <= _T_34 @[systolic_base.scala 326:25]
    ram_sdp_1024x256_3.clock <= clock
    ram_sdp_1024x256_3.reset <= reset
    ram_sdp_1024x256_3.io_wr_en <= _T_38 @[systolic_base.scala 323:23]
    ram_sdp_1024x256_3.io_wr_addr <= bits(_T_37, 9, 0) @[systolic_base.scala 322:25]
    ram_sdp_1024x256_3.io_wr_data <= io_data_in_bits_3_bits @[systolic_base.scala 324:25]
    ram_sdp_1024x256_3.io_rd_en <= UInt<1>("h1") @[systolic_base.scala 325:23]
    ram_sdp_1024x256_3.io_rd_addr <= _T_45 @[systolic_base.scala 326:25]
    ram_sdp_1024x256_4.clock <= clock
    ram_sdp_1024x256_4.reset <= reset
    ram_sdp_1024x256_4.io_wr_en <= _T_49 @[systolic_base.scala 323:23]
    ram_sdp_1024x256_4.io_wr_addr <= bits(_T_48, 9, 0) @[systolic_base.scala 322:25]
    ram_sdp_1024x256_4.io_wr_data <= io_data_in_bits_4_bits @[systolic_base.scala 324:25]
    ram_sdp_1024x256_4.io_rd_en <= UInt<1>("h1") @[systolic_base.scala 325:23]
    ram_sdp_1024x256_4.io_rd_addr <= _T_56 @[systolic_base.scala 326:25]
    ram_sdp_1024x256_5.clock <= clock
    ram_sdp_1024x256_5.reset <= reset
    ram_sdp_1024x256_5.io_wr_en <= _T_60 @[systolic_base.scala 323:23]
    ram_sdp_1024x256_5.io_wr_addr <= bits(_T_59, 9, 0) @[systolic_base.scala 322:25]
    ram_sdp_1024x256_5.io_wr_data <= io_data_in_bits_5_bits @[systolic_base.scala 324:25]
    ram_sdp_1024x256_5.io_rd_en <= UInt<1>("h1") @[systolic_base.scala 325:23]
    ram_sdp_1024x256_5.io_rd_addr <= _T_67 @[systolic_base.scala 326:25]
    ram_sdp_1024x256_6.clock <= clock
    ram_sdp_1024x256_6.reset <= reset
    ram_sdp_1024x256_6.io_wr_en <= _T_71 @[systolic_base.scala 323:23]
    ram_sdp_1024x256_6.io_wr_addr <= bits(_T_70, 9, 0) @[systolic_base.scala 322:25]
    ram_sdp_1024x256_6.io_wr_data <= io_data_in_bits_6_bits @[systolic_base.scala 324:25]
    ram_sdp_1024x256_6.io_rd_en <= UInt<1>("h1") @[systolic_base.scala 325:23]
    ram_sdp_1024x256_6.io_rd_addr <= _T_78 @[systolic_base.scala 326:25]
    ram_sdp_1024x256_7.clock <= clock
    ram_sdp_1024x256_7.reset <= reset
    ram_sdp_1024x256_7.io_wr_en <= _T_82 @[systolic_base.scala 323:23]
    ram_sdp_1024x256_7.io_wr_addr <= bits(_T_81, 9, 0) @[systolic_base.scala 322:25]
    ram_sdp_1024x256_7.io_wr_data <= io_data_in_bits_7_bits @[systolic_base.scala 324:25]
    ram_sdp_1024x256_7.io_rd_en <= UInt<1>("h1") @[systolic_base.scala 325:23]
    ram_sdp_1024x256_7.io_rd_addr <= _T_89 @[systolic_base.scala 326:25]
    in_addr_0 <= mux(reset, _in_addr_WIRE_0, _GEN_9) @[systolic_base.scala 297:{24,24}]
    in_addr_1 <= mux(reset, _in_addr_WIRE_1, _GEN_10) @[systolic_base.scala 297:{24,24}]
    in_addr_2 <= mux(reset, _in_addr_WIRE_2, _GEN_11) @[systolic_base.scala 297:{24,24}]
    in_addr_3 <= mux(reset, _in_addr_WIRE_3, _GEN_12) @[systolic_base.scala 297:{24,24}]
    in_addr_4 <= mux(reset, _in_addr_WIRE_4, _GEN_13) @[systolic_base.scala 297:{24,24}]
    in_addr_5 <= mux(reset, _in_addr_WIRE_5, _GEN_14) @[systolic_base.scala 297:{24,24}]
    in_addr_6 <= mux(reset, _in_addr_WIRE_6, _GEN_15) @[systolic_base.scala 297:{24,24}]
    in_addr_7 <= mux(reset, _in_addr_WIRE_7, _GEN_16) @[systolic_base.scala 297:{24,24}]
    out_addr_0 <= mux(reset, _out_addr_WIRE_0, _GEN_24) @[systolic_base.scala 298:{25,25}]
    out_addr_1 <= mux(reset, _out_addr_WIRE_1, out_addr_0) @[systolic_base.scala 298:{25,25} 317:16]
    out_addr_2 <= mux(reset, _out_addr_WIRE_2, out_addr_1) @[systolic_base.scala 298:{25,25} 317:16]
    out_addr_3 <= mux(reset, _out_addr_WIRE_3, out_addr_2) @[systolic_base.scala 298:{25,25} 317:16]
    out_addr_4 <= mux(reset, _out_addr_WIRE_4, out_addr_3) @[systolic_base.scala 298:{25,25} 317:16]
    out_addr_5 <= mux(reset, _out_addr_WIRE_5, out_addr_4) @[systolic_base.scala 298:{25,25} 317:16]
    out_addr_6 <= mux(reset, _out_addr_WIRE_6, out_addr_5) @[systolic_base.scala 298:{25,25} 317:16]
    out_addr_7 <= mux(reset, _out_addr_WIRE_7, out_addr_6) @[systolic_base.scala 298:{25,25} 317:16]
    can_out_0 <= mux(reset, _can_out_WIRE_0, _can_out_0_T) @[systolic_base.scala 299:{24,24} 307:14]
    can_out_1 <= mux(reset, _can_out_WIRE_1, can_out_0) @[systolic_base.scala 299:{24,24} 312:18]
    can_out_2 <= mux(reset, _can_out_WIRE_2, can_out_1) @[systolic_base.scala 299:{24,24} 312:18]
    can_out_3 <= mux(reset, _can_out_WIRE_3, can_out_2) @[systolic_base.scala 299:{24,24} 312:18]
    can_out_4 <= mux(reset, _can_out_WIRE_4, can_out_3) @[systolic_base.scala 299:{24,24} 312:18]
    can_out_5 <= mux(reset, _can_out_WIRE_5, can_out_4) @[systolic_base.scala 299:{24,24} 312:18]
    can_out_6 <= mux(reset, _can_out_WIRE_6, can_out_5) @[systolic_base.scala 299:{24,24} 312:18]
    can_out_7 <= mux(reset, _can_out_WIRE_7, can_out_6) @[systolic_base.scala 299:{24,24} 312:18]
    can_out_8 <= mux(reset, _can_out_WIRE_8, can_out_7) @[systolic_base.scala 299:{24,24} 312:18]
    out_kh_0 <= mux(reset, _out_kh_WIRE_0, _GEN_26) @[systolic_base.scala 302:{23,23}]
    out_kh_1 <= mux(reset, _out_kh_WIRE_1, out_kh_0) @[systolic_base.scala 302:{23,23} 315:14]
    out_kh_2 <= mux(reset, _out_kh_WIRE_2, out_kh_1) @[systolic_base.scala 302:{23,23} 315:14]
    out_kh_3 <= mux(reset, _out_kh_WIRE_3, out_kh_2) @[systolic_base.scala 302:{23,23} 315:14]
    out_kh_4 <= mux(reset, _out_kh_WIRE_4, out_kh_3) @[systolic_base.scala 302:{23,23} 315:14]
    out_kh_5 <= mux(reset, _out_kh_WIRE_5, out_kh_4) @[systolic_base.scala 302:{23,23} 315:14]
    out_kh_6 <= mux(reset, _out_kh_WIRE_6, out_kh_5) @[systolic_base.scala 302:{23,23} 315:14]
    out_kh_7 <= mux(reset, _out_kh_WIRE_7, out_kh_6) @[systolic_base.scala 302:{23,23} 315:14]
    out_kw_0 <= mux(reset, _out_kw_WIRE_0, _GEN_25) @[systolic_base.scala 303:{23,23}]
    out_kw_1 <= mux(reset, _out_kw_WIRE_1, out_kw_0) @[systolic_base.scala 303:{23,23} 316:14]
    out_kw_2 <= mux(reset, _out_kw_WIRE_2, out_kw_1) @[systolic_base.scala 303:{23,23} 316:14]
    out_kw_3 <= mux(reset, _out_kw_WIRE_3, out_kw_2) @[systolic_base.scala 303:{23,23} 316:14]
    out_kw_4 <= mux(reset, _out_kw_WIRE_4, out_kw_3) @[systolic_base.scala 303:{23,23} 316:14]
    out_kw_5 <= mux(reset, _out_kw_WIRE_5, out_kw_4) @[systolic_base.scala 303:{23,23} 316:14]
    out_kw_6 <= mux(reset, _out_kw_WIRE_6, out_kw_5) @[systolic_base.scala 303:{23,23} 316:14]
    out_kw_7 <= mux(reset, _out_kw_WIRE_7, out_kw_6) @[systolic_base.scala 303:{23,23} 316:14]
    out_slot_0 <= mux(reset, _out_slot_WIRE_0, bits(io_out_inst_bits_id, 3, 0)) @[systolic_base.scala 304:{25,25} 308:15]
    out_slot_1 <= mux(reset, _out_slot_WIRE_1, out_slot_0) @[systolic_base.scala 304:{25,25} 318:16]
    out_slot_2 <= mux(reset, _out_slot_WIRE_2, out_slot_1) @[systolic_base.scala 304:{25,25} 318:16]
    out_slot_3 <= mux(reset, _out_slot_WIRE_3, out_slot_2) @[systolic_base.scala 304:{25,25} 318:16]
    out_slot_4 <= mux(reset, _out_slot_WIRE_4, out_slot_3) @[systolic_base.scala 304:{25,25} 318:16]
    out_slot_5 <= mux(reset, _out_slot_WIRE_5, out_slot_4) @[systolic_base.scala 304:{25,25} 318:16]
    out_slot_6 <= mux(reset, _out_slot_WIRE_6, out_slot_5) @[systolic_base.scala 304:{25,25} 318:16]
    out_slot_7 <= mux(reset, _out_slot_WIRE_7, out_slot_6) @[systolic_base.scala 304:{25,25} 318:16]
    printf(clock, and(and(UInt<1>("h1"), _T_1), UInt<1>("h1")), "WSSysIn_Input: IO.in_inst is AnonymousBundle(in_inst -> DecoupledIO(ready -> %d, valid -> %d, bits -> BufIDInst(id -> %d)), out_inst -> DecoupledIO(ready -> %d, valid -> %d, bits -> BufIDInst(id -> %d)), config -> ConvConfig(in_w -> %d, ks -> %d, out_w -> %d, stride -> %d), data_in -> DecoupledIO(ready -> %d, valid -> %d, bits -> Vec(Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d))), data_out -> DecoupledIO(ready -> %d, valid -> %d, bits -> Vec(Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d), Valid(valid -> %d, bits -> %d)))) \n", io_in_inst_ready, io_in_inst_valid, io_in_inst_bits_id, io_out_inst_ready, io_out_inst_valid, io_out_inst_bits_id, io_config_in_w, io_config_ks, io_config_out_w, io_config_stride, io_data_in_ready, io_data_in_valid, io_data_in_bits_0_valid, io_data_in_bits_0_bits, io_data_in_bits_1_valid, io_data_in_bits_1_bits, io_data_in_bits_2_valid, io_data_in_bits_2_bits, io_data_in_bits_3_valid, io_data_in_bits_3_bits, io_data_in_bits_4_valid, io_data_in_bits_4_bits, io_data_in_bits_5_valid, io_data_in_bits_5_bits, io_data_in_bits_6_valid, io_data_in_bits_6_bits, io_data_in_bits_7_valid, io_data_in_bits_7_bits, io_data_out_ready, io_data_out_valid, io_data_out_bits_0_valid, io_data_out_bits_0_bits, io_data_out_bits_1_valid, io_data_out_bits_1_bits, io_data_out_bits_2_valid, io_data_out_bits_2_bits, io_data_out_bits_3_valid, io_data_out_bits_3_bits, io_data_out_bits_4_valid, io_data_out_bits_4_bits, io_data_out_bits_5_valid, io_data_out_bits_5_bits, io_data_out_bits_6_valid, io_data_out_bits_6_bits, io_data_out_bits_7_valid, io_data_out_bits_7_bits) @[systolic_base.scala 290:9]
