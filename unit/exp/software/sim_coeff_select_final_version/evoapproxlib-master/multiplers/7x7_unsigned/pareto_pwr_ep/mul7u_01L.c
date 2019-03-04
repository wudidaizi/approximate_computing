/***
* This code is a part of EvoApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under The MIT License.
* When used, please cite the following article(s): V. Mrazek, S. S. Sarwar, L. Sekanina, Z. Vasicek and K. Roy, "Design of power-efficient approximate multipliers for approximate artificial neural networks," 2016 IEEE/ACM International Conference on Computer-Aided Design (ICCAD), Austin, TX, 2016, pp. 1-7. doi: 10.1145/2966986.2967021 
* This file contains a circuit from a sub-set of pareto optimal circuits with respect to the pwr and ep parameters
***/
// MAE% = 0.00 %
// MAE = 0 
// WCE% = 0.00 %
// WCE = 0 
// WCRE% = 0.00 %
// EP% = 0.00 %
// MRE% = 0.00 %
// MSE = 0 
// PDK45_PWR = 0.277 mW
// PDK45_AREA = 536.4 um2
// PDK45_DELAY = 1.20 ns
#include <stdint.h>
#include <stdlib.h>

uint64_t mul7u_01L(uint64_t a, uint64_t b) {
  int wa[7];
  int wb[7];
  uint64_t y = 0;
  wa[0] = (a >> 0) & 0x01;
  wb[0] = (b >> 0) & 0x01;
  wa[1] = (a >> 1) & 0x01;
  wb[1] = (b >> 1) & 0x01;
  wa[2] = (a >> 2) & 0x01;
  wb[2] = (b >> 2) & 0x01;
  wa[3] = (a >> 3) & 0x01;
  wb[3] = (b >> 3) & 0x01;
  wa[4] = (a >> 4) & 0x01;
  wb[4] = (b >> 4) & 0x01;
  wa[5] = (a >> 5) & 0x01;
  wb[5] = (b >> 5) & 0x01;
  wa[6] = (a >> 6) & 0x01;
  wb[6] = (b >> 6) & 0x01;
  int sig_14 = wa[0] & wb[0];
  int sig_15 = wa[1] & wb[0];
  int sig_16 = wa[2] & wb[0];
  int sig_17 = wa[3] & wb[0];
  int sig_18 = wa[4] & wb[0];
  int sig_19 = wa[5] & wb[0];
  int sig_20 = wa[6] & wb[0];
  int sig_21 = wa[0] & wb[1];
  int sig_22 = wa[1] & wb[1];
  int sig_23 = wa[2] & wb[1];
  int sig_24 = wa[3] & wb[1];
  int sig_25 = wa[4] & wb[1];
  int sig_26 = wa[5] & wb[1];
  int sig_27 = wa[6] & wb[1];
  int sig_28 = sig_15 ^ sig_21;
  int sig_29 = sig_15 & sig_21;
  int sig_30 = sig_16 ^ sig_22;
  int sig_31 = sig_16 & sig_22;
  int sig_32 = sig_17 ^ sig_23;
  int sig_33 = sig_17 & sig_23;
  int sig_34 = sig_18 ^ sig_24;
  int sig_35 = sig_18 & sig_24;
  int sig_36 = sig_19 ^ sig_25;
  int sig_37 = sig_19 & sig_25;
  int sig_38 = sig_20 ^ sig_26;
  int sig_39 = sig_20 & sig_26;
  int sig_40 = wa[0] & wb[2];
  int sig_41 = wa[1] & wb[2];
  int sig_42 = wa[2] & wb[2];
  int sig_43 = wa[3] & wb[2];
  int sig_44 = wa[4] & wb[2];
  int sig_45 = wa[5] & wb[2];
  int sig_46 = wa[6] & wb[2];
  int sig_47 = sig_30 ^ sig_40;
  int sig_48 = sig_30 & sig_40;
  int sig_49 = sig_47 & sig_29;
  int sig_50 = sig_47 ^ sig_29;
  int sig_51 = sig_48 | sig_49;
  int sig_52 = sig_32 ^ sig_41;
  int sig_53 = sig_32 & sig_41;
  int sig_54 = sig_52 & sig_31;
  int sig_55 = sig_52 ^ sig_31;
  int sig_56 = sig_53 | sig_54;
  int sig_57 = sig_34 ^ sig_42;
  int sig_58 = sig_34 & sig_42;
  int sig_59 = sig_57 & sig_33;
  int sig_60 = sig_57 ^ sig_33;
  int sig_61 = sig_58 | sig_59;
  int sig_62 = sig_36 ^ sig_43;
  int sig_63 = sig_36 & sig_43;
  int sig_64 = sig_62 & sig_35;
  int sig_65 = sig_62 ^ sig_35;
  int sig_66 = sig_63 | sig_64;
  int sig_67 = sig_38 ^ sig_44;
  int sig_68 = sig_38 & sig_44;
  int sig_69 = sig_67 & sig_37;
  int sig_70 = sig_67 ^ sig_37;
  int sig_71 = sig_68 | sig_69;
  int sig_72 = sig_27 ^ sig_45;
  int sig_73 = sig_27 & sig_45;
  int sig_74 = sig_72 & sig_39;
  int sig_75 = sig_72 ^ sig_39;
  int sig_76 = sig_73 | sig_74;
  int sig_77 = wa[0] & wb[3];
  int sig_78 = wa[1] & wb[3];
  int sig_79 = wa[2] & wb[3];
  int sig_80 = wa[3] & wb[3];
  int sig_81 = wa[4] & wb[3];
  int sig_82 = wa[5] & wb[3];
  int sig_83 = wa[6] & wb[3];
  int sig_84 = sig_55 ^ sig_77;
  int sig_85 = sig_55 & sig_77;
  int sig_86 = sig_84 & sig_51;
  int sig_87 = sig_84 ^ sig_51;
  int sig_88 = sig_85 | sig_86;
  int sig_89 = sig_60 ^ sig_78;
  int sig_90 = sig_60 & sig_78;
  int sig_91 = sig_89 & sig_56;
  int sig_92 = sig_89 ^ sig_56;
  int sig_93 = sig_90 | sig_91;
  int sig_94 = sig_65 ^ sig_79;
  int sig_95 = sig_65 & sig_79;
  int sig_96 = sig_94 & sig_61;
  int sig_97 = sig_94 ^ sig_61;
  int sig_98 = sig_95 | sig_96;
  int sig_99 = sig_70 ^ sig_80;
  int sig_100 = sig_70 & sig_80;
  int sig_101 = sig_99 & sig_66;
  int sig_102 = sig_99 ^ sig_66;
  int sig_103 = sig_100 | sig_101;
  int sig_104 = sig_75 ^ sig_81;
  int sig_105 = sig_75 & sig_81;
  int sig_106 = sig_104 & sig_71;
  int sig_107 = sig_104 ^ sig_71;
  int sig_108 = sig_105 | sig_106;
  int sig_109 = sig_46 ^ sig_82;
  int sig_110 = sig_46 & sig_82;
  int sig_111 = sig_109 & sig_76;
  int sig_112 = sig_109 ^ sig_76;
  int sig_113 = sig_110 | sig_111;
  int sig_114 = wa[0] & wb[4];
  int sig_115 = wa[1] & wb[4];
  int sig_116 = wa[2] & wb[4];
  int sig_117 = wa[3] & wb[4];
  int sig_118 = wa[4] & wb[4];
  int sig_119 = wa[5] & wb[4];
  int sig_120 = wa[6] & wb[4];
  int sig_121 = sig_92 ^ sig_114;
  int sig_122 = sig_92 & sig_114;
  int sig_123 = sig_121 & sig_88;
  int sig_124 = sig_121 ^ sig_88;
  int sig_125 = sig_122 | sig_123;
  int sig_126 = sig_97 ^ sig_115;
  int sig_127 = sig_97 & sig_115;
  int sig_128 = sig_126 & sig_93;
  int sig_129 = sig_126 ^ sig_93;
  int sig_130 = sig_127 | sig_128;
  int sig_131 = sig_102 ^ sig_116;
  int sig_132 = sig_102 & sig_116;
  int sig_133 = sig_131 & sig_98;
  int sig_134 = sig_131 ^ sig_98;
  int sig_135 = sig_132 | sig_133;
  int sig_136 = sig_107 ^ sig_117;
  int sig_137 = sig_107 & sig_117;
  int sig_138 = sig_136 & sig_103;
  int sig_139 = sig_136 ^ sig_103;
  int sig_140 = sig_137 | sig_138;
  int sig_141 = sig_112 ^ sig_118;
  int sig_142 = sig_112 & sig_118;
  int sig_143 = sig_141 & sig_108;
  int sig_144 = sig_141 ^ sig_108;
  int sig_145 = sig_142 | sig_143;
  int sig_146 = sig_83 ^ sig_119;
  int sig_147 = sig_83 & sig_119;
  int sig_148 = sig_146 & sig_113;
  int sig_149 = sig_146 ^ sig_113;
  int sig_150 = sig_147 | sig_148;
  int sig_151 = wa[0] & wb[5];
  int sig_152 = wa[1] & wb[5];
  int sig_153 = wa[2] & wb[5];
  int sig_154 = wa[3] & wb[5];
  int sig_155 = wa[4] & wb[5];
  int sig_156 = wa[5] & wb[5];
  int sig_157 = wa[6] & wb[5];
  int sig_158 = sig_129 ^ sig_151;
  int sig_159 = sig_129 & sig_151;
  int sig_160 = sig_158 & sig_125;
  int sig_161 = sig_158 ^ sig_125;
  int sig_162 = sig_159 | sig_160;
  int sig_163 = sig_134 ^ sig_152;
  int sig_164 = sig_134 & sig_152;
  int sig_165 = sig_163 & sig_130;
  int sig_166 = sig_163 ^ sig_130;
  int sig_167 = sig_164 | sig_165;
  int sig_168 = sig_139 ^ sig_153;
  int sig_169 = sig_139 & sig_153;
  int sig_170 = sig_168 & sig_135;
  int sig_171 = sig_168 ^ sig_135;
  int sig_172 = sig_169 | sig_170;
  int sig_173 = sig_144 ^ sig_154;
  int sig_174 = sig_144 & sig_154;
  int sig_175 = sig_173 & sig_140;
  int sig_176 = sig_173 ^ sig_140;
  int sig_177 = sig_174 | sig_175;
  int sig_178 = sig_149 ^ sig_155;
  int sig_179 = sig_149 & sig_155;
  int sig_180 = sig_178 & sig_145;
  int sig_181 = sig_178 ^ sig_145;
  int sig_182 = sig_179 | sig_180;
  int sig_183 = sig_120 ^ sig_156;
  int sig_184 = sig_120 & sig_156;
  int sig_185 = sig_183 & sig_150;
  int sig_186 = sig_183 ^ sig_150;
  int sig_187 = sig_184 | sig_185;
  int sig_188 = wa[0] & wb[6];
  int sig_189 = wa[1] & wb[6];
  int sig_190 = wa[2] & wb[6];
  int sig_191 = wa[3] & wb[6];
  int sig_192 = wa[4] & wb[6];
  int sig_193 = wa[5] & wb[6];
  int sig_194 = wa[6] & wb[6];
  int sig_195 = sig_166 ^ sig_188;
  int sig_196 = sig_166 & sig_188;
  int sig_197 = sig_195 & sig_162;
  int sig_198 = sig_195 ^ sig_162;
  int sig_199 = sig_196 | sig_197;
  int sig_200 = sig_171 ^ sig_189;
  int sig_201 = sig_171 & sig_189;
  int sig_202 = sig_200 & sig_167;
  int sig_203 = sig_200 ^ sig_167;
  int sig_204 = sig_201 | sig_202;
  int sig_205 = sig_176 ^ sig_190;
  int sig_206 = sig_176 & sig_190;
  int sig_207 = sig_205 & sig_172;
  int sig_208 = sig_205 ^ sig_172;
  int sig_209 = sig_206 | sig_207;
  int sig_210 = sig_181 ^ sig_191;
  int sig_211 = sig_181 & sig_191;
  int sig_212 = sig_210 & sig_177;
  int sig_213 = sig_210 ^ sig_177;
  int sig_214 = sig_211 | sig_212;
  int sig_215 = sig_186 ^ sig_192;
  int sig_216 = sig_186 & sig_192;
  int sig_217 = sig_215 & sig_182;
  int sig_218 = sig_215 ^ sig_182;
  int sig_219 = sig_216 | sig_217;
  int sig_220 = sig_157 ^ sig_193;
  int sig_221 = sig_157 & sig_193;
  int sig_222 = sig_220 & sig_187;
  int sig_223 = sig_220 ^ sig_187;
  int sig_224 = sig_221 | sig_222;
  int sig_225 = sig_203 ^ sig_199;
  int sig_226 = sig_203 & sig_199;
  int sig_227 = sig_208 ^ sig_204;
  int sig_228 = sig_208 & sig_204;
  int sig_229 = sig_227 & sig_226;
  int sig_230 = sig_227 ^ sig_226;
  int sig_231 = sig_228 | sig_229;
  int sig_232 = sig_213 ^ sig_209;
  int sig_233 = sig_213 & sig_209;
  int sig_234 = sig_232 & sig_231;
  int sig_235 = sig_232 ^ sig_231;
  int sig_236 = sig_233 | sig_234;
  int sig_237 = sig_218 ^ sig_214;
  int sig_238 = sig_218 & sig_214;
  int sig_239 = sig_237 & sig_236;
  int sig_240 = sig_237 ^ sig_236;
  int sig_241 = sig_238 | sig_239;
  int sig_242 = sig_223 ^ sig_219;
  int sig_243 = sig_223 & sig_219;
  int sig_244 = sig_242 & sig_241;
  int sig_245 = sig_242 ^ sig_241;
  int sig_246 = sig_243 | sig_244;
  int sig_247 = sig_194 ^ sig_224;
  int sig_248 = sig_194 & sig_224;
  int sig_249 = sig_247 & sig_246;
  int sig_250 = sig_247 ^ sig_246;
  int sig_251 = sig_248 | sig_249;
  y |=  (sig_14 & 0x01) << 0; // default output
  y |=  (sig_28 & 0x01) << 1; // default output
  y |=  (sig_50 & 0x01) << 2; // default output
  y |=  (sig_87 & 0x01) << 3; // default output
  y |=  (sig_124 & 0x01) << 4; // default output
  y |=  (sig_161 & 0x01) << 5; // default output
  y |=  (sig_198 & 0x01) << 6; // default output
  y |=  (sig_225 & 0x01) << 7; // default output
  y |=  (sig_230 & 0x01) << 8; // default output
  y |=  (sig_235 & 0x01) << 9; // default output
  y |=  (sig_240 & 0x01) << 10; // default output
  y |=  (sig_245 & 0x01) << 11; // default output
  y |=  (sig_250 & 0x01) << 12; // default output
  y |=  (sig_251 & 0x01) << 13; // default output
   return y;
}
