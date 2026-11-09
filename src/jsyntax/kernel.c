// GENERATED from JuliaSyntax (Julia) by script/jsyntax/regenerate.sh (juliac --trim --output-bc, llvm-cbe,
// kgen.py): do not edit. Entry: jsk_jsyn_space_prefix, jsk_jsyn_token, jsk_jsyn_contextual_keyword, jsk_jsyn_string_token, jsk_jsyn_char_literal, jsk_jsyn_escape_len, jsk_jsyn_var_identifier; support: runtime.c.
/* Provide Declarations */
#include <stdint.h>
#include <string.h>
#ifndef __cplusplus
typedef unsigned char jsk_bool;
#define bool jsk_bool
#endif

#ifdef _MSC_VER
#define __builtin_unreachable() __assume(0)
#endif
#ifdef _MSC_VER
#define __noreturn __declspec(noreturn)
#else
#define __noreturn __attribute__((noreturn))
#endif
#ifndef _MSC_VER
#define __forceinline __attribute__((always_inline)) inline
#endif

#if defined(__GNUC__)
#define  __ATTRIBUTELIST__(x) __attribute__(x)
#else
#define  __ATTRIBUTELIST__(x)  
#endif

#ifdef _MSC_VER  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#ifdef _MSC_VER
#define __UNALIGNED_LOAD__(type, align, op) *((type __unaligned*)op)
#else
#define __UNALIGNED_LOAD__(type, align, op) ((struct { type data __attribute__((packed, aligned(align))); }*)op)->data
#endif

#ifdef _MSC_VER
#define __PREFIXALIGN__(X) __declspec(align(X))
#define __POSTFIXALIGN__(X)
#else
#define __PREFIXALIGN__(X)
#define __POSTFIXALIGN__(X) __attribute__((aligned(X)))
#endif



/* Global Declarations */

/* Types Declarations */
struct l_array_736_uint8_t;
struct l_array_1024_uint8_t;
struct l_array_108_uint8_t;
struct l_unnamed_1;
struct l_array_597_uint32_t;
struct l_array_597_uint16_t;
struct l_unnamed_2;
struct l_array_128_uint8_t;
struct l_array_39_uint16_t;
struct l_array_39_uint64_t;
struct l_unnamed_3;
struct l_array_1_void_KC_;
struct l_array_3_uint64_t;
struct l_array_4_uint64_t;
struct l_array_1_uint64_t;

/* Function definitions */

/* Types Definitions */
struct l_array_736_uint8_t {
  uint8_t array[736];
};
struct l_array_1024_uint8_t {
  uint8_t array[1024];
};
struct l_array_108_uint8_t {
  uint8_t array[108];
};
struct l_unnamed_1 {
  uint8_t field0;
  uint8_t field1;
  uint32_t field2;
  uint64_t field3;
};
struct l_array_597_uint32_t {
  uint32_t array[597];
};
struct l_array_597_uint16_t {
  uint16_t array[597];
};
struct l_unnamed_2 {
  struct l_array_597_uint32_t field0;
  struct l_array_597_uint16_t field1;
};
struct l_array_128_uint8_t {
  uint8_t array[128];
};
struct l_array_39_uint16_t {
  uint16_t array[39];
};
struct l_array_39_uint64_t {
  uint64_t array[39];
};
struct l_unnamed_3 {
  struct l_array_39_uint64_t field0;
  struct l_array_39_uint16_t field1;
};
struct l_array_1_void_KC_ {
  void* array[1];
};
struct l_array_3_uint64_t {
  uint64_t array[3];
};
struct l_array_4_uint64_t {
  uint64_t array[4];
};
struct l_array_1_uint64_t {
  uint64_t array[1];
};

/* Global Variable Declarations */
static __PREFIXALIGN__(16) struct l_array_736_uint8_t jsk_dummy_objs __POSTFIXALIGN__(16);
const static struct l_array_108_uint8_t _j_str_invalidSP_OC_GenericMemorySP_OC_sizDOT_OC_DOT_OC_DOT_OC_YY_OC_58;
const static struct l_unnamed_1 _j_constYY_OC_59;
const static struct l_unnamed_2 _j_constYY_OC_60;
const static struct l_array_128_uint8_t _j_constYY_OC_61;
const static struct l_unnamed_3 _j_constYY_OC_62;
const static struct l_array_39_uint16_t _j_constYY_OC_63;

/* Function Declarations */
uint32_t jsk_jsyn_space_prefix(void* _1, void* _2, uint64_t _3);
uint32_t jsk_jsyn_token(void* _31, void* _32, uint64_t _33, int32_t _34, void* _35);
uint32_t jsk_jsyn_contextual_keyword(void* _58, void* _59, uint64_t _60);
uint32_t jsk_jsyn_string_token(void* _62, void* _63, uint64_t _64, int32_t _65, int32_t _66, int32_t _67, int32_t _68, void* _69);
uint32_t jsk_jsyn_char_literal(void* _124, void* _125, uint64_t _126);
uint32_t jsk_jsyn_escape_len(void* _150, void* _151, uint64_t _152, int32_t _153, int32_t _154);
uint32_t jsk_jsyn_var_identifier(void* _156, void* _157, uint64_t _158);
static void* julia_Lexer_7(void* _160, void* _161, void* _162);
static void julia_next_token_8(void* _260, void* _261, void* _262, uint8_t _263);
static __noreturn void julia_throw_inexacterror_9(void* _319, void* _320, void* _321, int32_t _322);
static __noreturn void julia_throw_inexacterror_10(void* _323, void* _324, void* _325, int64_t _326);
static uint32_t julia_contextual_keyword_11(void* _327, void* _328, int64_t _329);
static __noreturn void julia_throw_code_point_err_12(void* _352, uint32_t _353) __ATTRIBUTELIST__((noinline));
static void julia__growend_internalNOT_OC__13(void* _354, void* _355, int64_t _356, int64_t _357);
static uint32_t julia_escape_len_14(void* _425, void* _426, int64_t _427, uint8_t _428, uint8_t _429);
static uint32_t julia_var_identifier_15(void* _495, void* _496, int64_t _497);
static void julia_lex_string_chunk_16(void* _528, void* _529, void* _530);
static void julia__next_token_17(void* _1639, void* _1640, void* _1641, uint32_t _1642);
static struct l_array_1_void_KC_ julia_ConcurrencyViolationError_18(void* _1860, void* _1861);
static __noreturn void julia_throw_boundserror_19(void* _1863, void* _1864, void* _1865) __ATTRIBUTELIST__((noinline));
static void julia_emit_20(void* _1866, void* _1867, void* _1868, uint16_t _1869, uint8_t _1870);
static __noreturn void julia_throw_invalid_char_21(void* _1926, uint32_t _1927) __ATTRIBUTELIST__((noinline));
static void julia_lex_identifier_22(void* _1928, void* _1929, void* _1930, uint32_t _1931);
static uint8_t julia_is_operator_start_char_23(void* _2136, uint32_t _2137);
static uint8_t julia_is_never_id_char_24(void* _2169, uint32_t _2170);
static __noreturn void julia__throw_argerror_25(void* _2206, void* _2207) __ATTRIBUTELIST__((noinline));
static struct l_array_1_void_KC_ julia_AssertionError_26(void* _2208, void* _2209);
static void julia_lex_whitespace_27(void* _2211, void* _2212, void* _2213, uint32_t _2214);
static void julia_lex_star_28(void* _2297, void* _2298, void* _2299);
static void julia_lex_circumflex_29(void* _2394, void* _2395, void* _2396);
static void julia_lex_dollar_30(void* _2447, void* _2448, void* _2449);
static void julia_lex_xor_31(void* _2500, void* _2501, void* _2502);
static void julia_lex_comment_32(void* _2553, void* _2554, void* _2555);
static void julia_lex_equal_33(void* _2731, void* _2732, void* _2733);
static void julia_lex_exclaim_34(void* _2872, void* _2873, void* _2874);
static void julia_lex_greater_35(void* _2969, void* _2970, void* _2971);
static void julia_lex_less_36(void* _3242, void* _3243, void* _3244);
static void julia_lex_colon_37(void* _3677, void* _3678, void* _3679);
static void julia_lex_bar_38(void* _3774, void* _3775, void* _3776);
static void julia_lex_amper_39(void* _3915, void* _3916, void* _3917);
static void julia_lex_division_40(void* _4012, void* _4013, void* _4014);
static void julia_lex_quote_41(void* _4065, void* _4066, void* _4067);
static void julia_lex_percent_42(void* _4181, void* _4182, void* _4183);
static void julia_lex_forwardslash_43(void* _4234, void* _4235, void* _4236);
static void julia_lex_backslash_44(void* _4375, void* _4376, void* _4377);
static void julia_lex_dot_45(void* _4428, void* _4429, void* _4430);
static void julia_lex_plus_46(void* _4589, void* _4590, void* _4591);
static void julia_lex_minus_47(void* _4686, void* _4687, void* _4688);
static void julia_lex_backtick_48(void* _4873, void* _4874, void* _4875);
static void julia_lex_digit_49(void* _4983, void* _4984, void* _4985, uint16_t _4986);
static uint8_t julia_isopsuffix_50(void* _5919, uint32_t _5920);
static uint8_t julia_accept_number_51(void* _5956, void* _5957);
static uint8_t julia_accept_number_52(void* _6009, void* _6010);
static uint8_t julia_accept_number_53(void* _6069, void* _6070);
static uint8_t julia_accept_number_54(void* _6121, void* _6122);
static uint8_t julia_YY_OC_lex_digitYY_OC_YY_OC_0_55(void* _6178, uint32_t _6179);
uint32_t jsk_jl_id_char(uint32_t _6202);
uint32_t jsk_jl_id_start_char(uint32_t _6203);
uint32_t jsk_utf8proc_category(uint32_t _6204);
uint64_t jsyn_cbe_fshl_i64(uint64_t _6205, uint64_t _6206, uint64_t _6207) __ATTRIBUTELIST__((nothrow));
uint8_t jsk_utf8proc_grapheme_break_stateful(uint32_t _6208, uint32_t _6209, void* _6210);
void* jsk_jl_alloc_genericmemory_unchecked(void* _6211, uint64_t _6212, void* _6213) __ATTRIBUTELIST__((nothrow));
void* jsk_ijl_gc_small_alloc(void* _6214, uint32_t _6215, uint32_t _6216, uint64_t _6217) __ATTRIBUTELIST__((nothrow, alloc_size(2)));
__noreturn void jsk_ijl_bounds_error_int(void* _6218, uint64_t _6219);
void jsk_ijl_gc_queue_root(void* _6220);
__noreturn void jsk_ijl_throw(void* _6221);
__noreturn void jsk_ijl_undefined_var_error(void* _6222, void* _6223);
__noreturn void jsk_jl_argument_error(void* _6224);
__noreturn void jsk_throw(void);
void* jsyn_cbe_thread_pointer(void);
void jsyn_cbe_sev(void);
void jsyn_cbe_wfe(void);


/* Global Variable Definitions and Initialization */
static __PREFIXALIGN__(16) struct l_array_736_uint8_t jsk_dummy_objs __POSTFIXALIGN__(16);
static const __PREFIXALIGN__(16) struct l_array_1024_uint8_t jl_small_typeof __POSTFIXALIGN__(16);
static const struct l_array_108_uint8_t _j_str_invalidSP_OC_GenericMemorySP_OC_sizDOT_OC_DOT_OC_DOT_OC_YY_OC_58 = { "invalid GenericMemory size: the number of elements is either negative or too large for system address width" };
static const struct l_unnamed_1 _j_constYY_OC_59 = { 0, 1, 654311424, 0 };
static const struct l_unnamed_2 _j_constYY_OC_60 = { { { -1029308416, -1028915200, -1028587520, -1028194304, -1013514240, -1011417088, -830013440, -494885376, -494822144, -494564608, -494497792, -494497536, -494497280, -494497024, -494496768, -494495232, -494494976, -494494720, -494494464, -494494208, -494493696, -494493184, -494492928, -494492672, -494492160, -494491392, -494491136, -494490880, -494490624, -494490112, -494488064, -494487808, -494487040, -494486784, -494486528, -494486272, -494436352, -494436096, -494435328, -494434816, -494434560, -494434048, -494433536, -494433280, -494433024, -494432768, -494432512, -494432256, -494431744, -494431232, -494429696, -494429440, -494429184, -494428928, -494428160, -494427648, -494423040, -494422784, -494422528, -494422272, -494422016, -494421760, -494421504, -494421248, -494420992, -494420736, -494420480, -494420224, -494368768, -494368512, -494368256, -494368000, -494367744, -494367488, -494366208, -494365952, -494365696, -494364928, -494364672, -494364416, -494364160, -494363904, -494363648, -494363392, -494361600, -494361344, -494361088, -494360832, -494360576, -494360320, -494360064, -494356736, -494356480, -494355968, -494355712, -494355200, -494354944, -494305280, -494305024, -494304768, -494304512, -494304256, -494304000, -494303744, -494303488, -494303232, -494302976, -494302720, -494302464, -494302208, -494301952, -494301696, -494301440, -494301184, -494300928, -494300672, -494300416, -494300160, -494299904, -494299648, -494299392, -494299136, -494298880, -494298624, -494298368, -494298112, -494297856, -494297600, -494297344, -494297088, -494296832, -494296576, -494296320, -494296064, -494295808, -494295552, -494295296, -494295040, -494294784, -494294528, -494294272, -494294016, -494293760, -494293504, -494293248, -494292992, -494292736, -494292480, -494292224, -494291968, -494291712, -494291456, -494291200, -494290944, -494290688, -494290432, -494290176, -494289920, -494289664, -494289408, -494289152, -494239744, -494239488, -494239232, -494238976, -494238720, -494238464, -494238208, -494237952, -494237696, -494237440, -494237184, -494236928, -494236416, -494236160, -494235904, -494235648, -494235392, -494235136, -494234880, -494234624, -494234368, -494234112, -494233856, -494233600, -494233344, -494233088, -494232832, -494232576, -494232064, -494231808, -494231552, -494231296, -494231040, -494230784, -494229248, -494228480, -494227968, -494227456, -494227200, -494226944, -494226688, -494226432, -494226176, -494225920, -494225664, -494224640, -494224384, -494224128, -494173184, -494172928, -494172672, -494172416, -494171904, -494171648, -494171392, -494171136, -494170880, -494170624, -494170368, -494170112, -494169856, -494169600, -494169344, -494168832, -494168576, -494168320, -494168064, -494167808, -494167552, -494167296, -494167040, -494166784, -494166528, -494166272, -494166016, -494165760, -494165504, -494165248, -494164992, -494164736, -494164480, -494164224, -494163968, -494163712, -494163456, -494163200, -494162944, -494162688, -494162432, -494162176, -494161920, -494161664, -494161408, -494161152, -494160896, -494160640, -494160384, -494160128, -494159872, -494159616, -494159360, -494159104, -494158848, -494158592, -494158336, -494158080, -494092544, -493439232, -492862976, -492861696, -492861440, -492861184, -492859136, -492858880, -492858112, -492857856, -492857600, -492851200, -492850944, -492849920, -492849664, -492849408, -492848896, -492848640, -492848384, -492848128, -492847872, -492847616, -492847360, -492535808, -492535552, -492535296, -492535040, -492534784, -492534528, -492534272, -492534016, -492533760, -492533504, -492533248, -492532992, -492532736, -492532480, -492532224, -492531968, -492531712, -492531456, -492531200, -492530944, -492530688, -492530432, -492530176, -492529920, -492529664, -492528384, -492528128, -492527872, -492527616, -492469248, -492468992, -492468736, -492468480, -492468224, -492467968, -492467712, -492467456, -492467200, -492466944, -492466688, -492466432, -492466176, -492465920, -492465664, -492465408, -492465152, -492464896, -492464640, -492464384, -492464128, -492463872, -492463616, -492463360, -492463104, -492462848, -492462592, -492462336, -492462080, -492461824, -492461568, -492461312, -492461056, -492460800, -492460544, -492460288, -492460032, -492459776, -492459520, -492459264, -492459008, -492458752, -492458496, -492458240, -492457984, -492456192, -492455424, -492390656, -492390400, -492389376, -492388864, -492388608, -492339200, -492338944, -492330752, -492330240, -492329984, -492329728, -492325888, -492325376, -492325120, -492324352, -492324096, -492271872, -492271616, -492266240, -492265728, -492264960, -492264704, -492264448, -492264192, -492263936, -492263680, -492263424, -492263168, -492262912, -492262656, -492262400, -492262144, -492261888, -492261376, -492261120, -492260864, -492260608, -492260352, -492260096, -492259840, -492259584, -492259328, -492259072, -492258816, -492258560, -492258304, -492258048, -492208128, -492207872, -492207616, -492207360, -492207104, -492206848, -492205568, -492205312, -492205056, -492204800, -492204544, -492204288, -492204032, -492203776, -492203520, -492203264, -492203008, -492202752, -492202496, -492202240, -492201984, -492201472, -492201216, -492200960, -492200704, -492200448, -492200192, -492199936, -492199680, -492199424, -492199168, -492198400, -492198144, -492197376, -492197120, -492196864, -492196608, -492196352, -492196096, -492195840, -492195584, -492195328, -492195072, -492194816, -492194560, -492194304, -492194048, -492193792, -492193536, -492193280, -492193024, -492192768, -492192512, -492192256, -492192000, -492142592, -492142336, -492142080, -492141824, -492141568, -492141312, -492141056, -492140800, -492140544, -492140288, -492140032, -492139776, -492139520, -492139264, -492139008, -492138752, -492138496, -492138240, -492137984, -492137728, -492137472, -492137216, -492136960, -492136704, -492136448, -492136192, -492135936, -492135680, -492135424, -492135168, -492134912, -492134656, -492134400, -492134144, -492133888, -492133632, -492133376, -492133120, -492132864, -492132608, -492132352, -492132096, -492131840, -492131584, -492131328, -492131072, -492130816, -492130560, -492130304, -492130048, -492129792, -492129536, -492129280, -492129024, -492128768, -492128512, -492128256, -492128000, -492127744, -492127488, -492127232, -492126976, -492126720, -492126464, -492077056, -492076800, -492076544, -492076288, -492076032, -492075776, -492075520, -492075264, -492075008, -492074752, -492074496, -492074240, -492073984, -492073728, -492073472, -492073216, -492072960, -492072704, -492072448, -492072192, -492071936, -492071680, -492071424, -492071168, -492070912, -492070656, -492070144, -492066304, -492066048, -492062976, -492062720, -492062464, -492062208, -491999232, -491998976, -491998720, -491998464, -491998208, -491997952, -491997696, -491997440, -491997184, -491996928, -491996672, -491996416, -491996160, -491995904, -491995648, -491995392, -491945984, -491945728, -491945472, -491945216, -491944960, -491944192, -491943936, -491943680, -491943424, -491943168, -491942912, -272652032, -272651776, -272651520, -272651264, -257973582 } }, { { 591, 712, 546, 596, 598, 594, 596, 528, 529, 614, 83, 675, 84, 676, 85, 86, 87, 207, 208, 88, 89, 90, 91, 92, 93, 209, 210, 211, 212, 94, 228, 227, 229, 230, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 96, 95, 97, 98, 99, 100, 223, 224, 205, 206, 225, 226, 101, 677, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 251, 254, 263, 255, 256, 264, 536, 547, 548, 611, 597, 612, 713, 714, 715, 262, 613, 265, 266, 602, 544, 601, 543, 267, 549, 268, 269, 270, 271, 615, 272, 274, 273, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 550, 286, 287, 288, 289, 75, 77, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 248, 246, 250, 300, 243, 241, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 259, 329, 260, 330, 257, 331, 258, 332, 261, 333, 662, 551, 334, 335, 336, 337, 610, 545, 538, 539, 603, 604, 605, 606, 607, 338, 540, 541, 608, 609, 519, 520, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 552, 616, 553, 617, 596, 618, 619, 620, 621, 622, 623, 350, 554, 624, 351, 352, 625, 555, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 530, 533, 532, 531, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 668, 663, 521, 556, 392, 393, 626, 394, 665, 666, 667, 678, 679, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 680, 681, 682, 683, 130, 131, 132, 133, 134, 135, 684, 685, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 686, 150, 151, 687, 688, 152, 689, 153, 690, 154, 155, 691, 692, 156, 157, 693, 694, 158, 159, 695, 696, 160, 161, 697, 698, 162, 699, 163, 700, 164, 165, 166, 167, 168, 169, 170, 171, 701, 702, 172, 194, 196, 395, 627, 628, 629, 630, 396, 397, 398, 399, 400, 401, 173, 631, 632, 557, 558, 633, 559, 664, 669, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 634, 635, 636, 637, 638, 639, 640, 641, 642, 573, 574, 643, 644, 645, 646, 575, 576, 647, 648, 577, 578, 649, 579, 650, 651, 580, 581, 652, 582, 653, 583, 654, 584, 585, 655, 656, 586, 657, 587, 658, 659, 660, 588, 589, 590, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 76, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 661, 522, 523, 515, 516, 517, 518, 175, 174, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 195, 197, 198, 199, 200, 201, 202, 203, 703, 204, 704, 231 } } };
static const struct l_array_128_uint8_t _j_constYY_OC_61 = { "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x00\x00\x00\x00\x00\x00\x00\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x00\x00\x00\x00\x01\x00\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x00\x00\x00\x00" };
static const struct l_unnamed_3 _j_constYY_OC_62 = { { { 51, 143, 294, 302, 4579, 5572, 6642, 9825, 12468, 21081, 22578, 176741, 681477, 2268462, 2692139, 3199080, 3652212, 13077548, 13667919, 16437426, 18529925, 22652359, 24385093, 24388997, 180983078, 193478228, 247957548, 316161620, 452089221, 558969123, 609900110, 659117172, INT64_C(6759166361), INT64_C(14684293509), INT64_C(37166318708), INT64_C(119676385957), INT64_C(229180581358), INT64_C(18220771321541), INT64_C(72092551894405) } }, { { 35, 12, 17, 252, 36, 33, 14, 253, 19, 26, 42, 31, 41, 8, 9, 29, 10, 20, 21, 38, 23, 27, 706, 28, 32, 13, 16, 18, 22, 40, 24, 25, 30, 37, 34, 11, 15, 39, 7 } } };
static const struct l_array_39_uint16_t _j_constYY_OC_63 = { { 35, 12, 17, 252, 36, 33, 14, 253, 19, 26, 42, 31, 41, 8, 9, 29, 10, 20, 21, 38, 23, 27, 706, 28, 32, 13, 16, 18, 22, 40, 24, 25, 30, 37, 34, 11, 15, 39, 7 } };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline bool llvm_select_bool(bool condition, bool iftrue, bool ifnot) {
  bool r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint8_t llvm_select_u8(bool condition, uint8_t iftrue, uint8_t ifnot) {
  uint8_t r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint16_t llvm_select_u16(bool condition, uint16_t iftrue, uint16_t ifnot) {
  uint16_t r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint32_t llvm_select_u32(bool condition, uint32_t iftrue, uint32_t ifnot) {
  uint32_t r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint64_t llvm_select_u64(bool condition, uint64_t iftrue, uint64_t ifnot) {
  uint64_t r;
  r = condition ? iftrue : ifnot;
  return r;
}
static __forceinline uint8_t llvm_add_u8(uint8_t a, uint8_t b) {
  uint8_t r = a + b;
  return r;
}
static __forceinline uint16_t llvm_add_u16(uint16_t a, uint16_t b) {
  uint16_t r = a + b;
  return r;
}
static __forceinline uint32_t llvm_add_u32(uint32_t a, uint32_t b) {
  uint32_t r = a + b;
  return r;
}
static __forceinline uint64_t llvm_add_u64(uint64_t a, uint64_t b) {
  uint64_t r = a + b;
  return r;
}
static __forceinline uint8_t llvm_sub_u8(uint8_t a, uint8_t b) {
  uint8_t r = a - b;
  return r;
}
static __forceinline uint64_t llvm_sub_u64(uint64_t a, uint64_t b) {
  uint64_t r = a - b;
  return r;
}
static __forceinline uint64_t llvm_mul_u64(uint64_t a, uint64_t b) {
  uint64_t r = a * b;
  return r;
}
static __forceinline uint64_t llvm_sdiv_u64(int64_t a, int64_t b) {
  uint64_t r = a / b;
  return r;
}
static __forceinline uint8_t llvm_shl_u8(uint8_t a, uint8_t b) {
  uint8_t r = a << b;
  return r;
}
static __forceinline uint32_t llvm_lshr_u32(uint32_t a, uint32_t b) {
  uint32_t r = a >> b;
  return r;
}
static __forceinline uint64_t llvm_lshr_u64(uint64_t a, uint64_t b) {
  uint64_t r = a >> b;
  return r;
}
static __forceinline uint64_t llvm_lshr_u54(uint64_t a, uint64_t b) {
  uint64_t r = (a >> b) & 4294967295;
  return r;
}
static __forceinline uint8_t llvm_and_u8(uint8_t a, uint8_t b) {
  uint8_t r = a & b;
  return r;
}
static __forceinline uint16_t llvm_and_u16(uint16_t a, uint16_t b) {
  uint16_t r = a & b;
  return r;
}
static __forceinline uint8_t llvm_or_u8(uint8_t a, uint8_t b) {
  uint8_t r = a | b;
  return r;
}
static __forceinline uint64_t llvm_neg_u64(int64_t a) {
  uint64_t r = -a;
  return r;
}
static __forceinline uint8_t llvm_not_u8(uint8_t a) {
  uint8_t r = ~a;
  return r;
}
static __forceinline struct l_array_1_void_KC_ llvm_ctor_ptra1(void* x0) {
  struct l_array_1_void_KC_ r;
  r.array[0] = x0;
  return r;
}
static __forceinline uint32_t llvm_OC_bswap_OC_i32(uint32_t a) {
  uint32_t r;
  int i;
  r = 0;
  int bitwidth = 32;
  for (i = 0; i < bitwidth/8; i++)
    r |= ((a >> (i*8)) & 0xff) << (bitwidth - (i+1)*8);
  return r;
}
static __forceinline uint32_t llvm_OC_ctlz_OC_i32(uint32_t a, bool b) {
  uint32_t r;
  int i;
  r = 0;
  int bitwidth = 32;
  for (i = bitwidth - 1; i >= 0; i--)
    if ( ((a >> i ) & 1) == 0 )
      r++;
    else
      break;
  return r;
}
static __forceinline uint32_t llvm_OC_cttz_OC_i32(uint32_t a, bool b) {
  uint32_t r;
  int i;
  r = 0;
  int bitwidth = 32;
  for (i = 0; i < bitwidth; i++)
    if ( ((a >> i) & 1) == 0 )
      r++;
    else
      break;
  return r;
}
static __forceinline uint32_t llvm_OC_umax_OC_i32(uint32_t a, uint32_t b) {
  uint32_t r;
  r = a > b ? a : b;
  return r;
}
static __forceinline uint64_t llvm_OC_ctlz_OC_i64(uint64_t a, bool b) {
  uint64_t r;
  int i;
  r = 0;
  int bitwidth = 64;
  for (i = bitwidth - 1; i >= 0; i--)
    if ( ((a >> i ) & 1) == 0 )
      r++;
    else
      break;
  return r;
}
static __forceinline uint64_t llvm_OC_smax_OC_i64(int64_t a, int64_t b) {
  uint64_t r;
  r = a > b ? a : b;
  return r;
}
static __forceinline uint8_t llvm_OC_ctlz_OC_i8(uint8_t a, bool b) {
  uint8_t r;
  int i;
  r = 0;
  int bitwidth = 8;
  for (i = bitwidth - 1; i >= 0; i--)
    if ( ((a >> i ) & 1) == 0 )
      r++;
    else
      break;
  return r;
}


/* Function Bodies */

uint32_t jsk_jsyn_space_prefix(void* _1, void* _2, uint64_t _3) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _4 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _5;
  void* _6;
  struct l_array_4_uint64_t _7;    /* Address-exposed local */
  struct l_array_4_uint64_t _8;    /* Address-exposed local */
  struct l_array_4_uint64_t _9;    /* Address-exposed local */
  void* _10;
  void* _11;
  void* _12;
  uint16_t _13;
  uint16_t _14;
  bool _15;
  bool _15__PHI_TEMPORARY;
  void* _16;
  void* _16__PHI_TEMPORARY;
  uint16_t _17;
  uint16_t _18;
  uint32_t _19;
  uint32_t _20;
  uint32_t _20__PHI_TEMPORARY;
  void* _21;
  uint8_t _22;
  bool _23;

  _5 = memset((&_4), 0, 24);
  *((uint64_t*)&_4) = 4;
  _6 = *(void**)_1;
  *(void**)(((&((uint8_t*)(&_4))[((int64_t)8)]))) = _6;
  *(void**)_1 = (&_4);
  _10 = *(void**)(((&((uint8_t*)_1)[((int64_t)16)])));
  _11 = jsk_ijl_gc_small_alloc(_10, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])))));
  *(void**)(((&((uint8_t*)_11)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])));
  *(void**)_11 = _2;
  *(uint64_t*)(((&((uint8_t*)_11)[((int64_t)8)]))) = _3;
  *(uint64_t*)(((&((uint8_t*)_11)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_4))[((int64_t)16)]))) = _11;
  _12 = julia_Lexer_7(_1, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _11);
  *(void**)(((&((uint8_t*)(&_4))[((int64_t)16)]))) = _12;
  julia_next_token_8((&_7), _1, _12, 1);
  _13 = *((uint16_t*)&_7);
  if ((_13 == ((uint16_t)707))) {
    goto _24;
  } else {
    goto _25;
  }

_24:
  julia_next_token_8((&_8), _1, _12, 1);
  _14 = *((uint16_t*)&_8);
  if ((((uint16_t)(llvm_add_u16(_14, -716))) < ((uint16_t)((uint16_t)-650)))) {
    _20__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _26;
  } else {
    _15__PHI_TEMPORARY = 1;   /* for PHI node */
    _16__PHI_TEMPORARY = (&_8);   /* for PHI node */
    goto _27;
  }

_27:
  _15 = _15__PHI_TEMPORARY;
  _16 = _16__PHI_TEMPORARY;
  _17 = *(uint16_t*)_16;
  julia_next_token_8((&_9), _1, _12, 1);
  if (_15) {
    _20__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _26;
  } else {
    goto _28;
  }

_28:
  switch (_17) {
  default:
    _20__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _26;
  case ((uint16_t)535):
    goto _29;
  case ((uint16_t)536):
    goto _29;
  case ((uint16_t)618):
    goto _29;
  case ((uint16_t)547):
    goto _29;
  case ((uint16_t)546):
    goto _29;
  case ((uint16_t)534):
    goto _29;
  case ((uint16_t)600):
    goto _29;
  case ((uint16_t)74):
    goto _29;
  }

_29:
  _18 = *((uint16_t*)&_9);
  if ((((uint16_t)(llvm_add_u16(_18, -1))) < ((uint16_t)((uint16_t)2)))) {
    _20__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _26;
  } else {
    goto _30;
  }

_30:
  _19 = ((uint32_t)(bool)(_18 != ((uint16_t)0)));
  _20__PHI_TEMPORARY = _19;   /* for PHI node */
  goto _26;

_26:
  _20 = _20__PHI_TEMPORARY;
  _21 = *(void**)(((&((uint8_t*)(&_4))[((int64_t)8)])));
  *(void**)_1 = _21;
  return _20;
_25:
  _22 = *(uint8_t*)(((&((uint8_t*)(&_7))[((int64_t)24)])));
  _23 = ((bool)_22&1u);
  _15__PHI_TEMPORARY = _23;   /* for PHI node */
  _16__PHI_TEMPORARY = (&_7);   /* for PHI node */
  goto _27;

}


uint32_t jsk_jsyn_token(void* _31, void* _32, uint64_t _33, int32_t _34, void* _35) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _36 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _37;
  void* _38;
  struct l_array_4_uint64_t _39;    /* Address-exposed local */
  void* _40;
  void* _41;
  void* _42;
  void* _43;
  uint64_t _44;
  uint64_t _45;
  uint64_t _46;
  uint64_t _47;
  void* _48;
  uint8_t _49;
  uint16_t _50;
  void* _51;

  _37 = memset((&_36), 0, 24);
  *((uint64_t*)&_36) = 4;
  _38 = *(void**)_31;
  *(void**)(((&((uint8_t*)(&_36))[((int64_t)8)]))) = _38;
  *(void**)_31 = (&_36);
  _40 = *(void**)(((&((uint8_t*)_31)[((int64_t)16)])));
  _41 = jsk_ijl_gc_small_alloc(_40, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])))));
  *(void**)(((&((uint8_t*)_41)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])));
  *(void**)_41 = _32;
  *(uint64_t*)(((&((uint8_t*)_41)[((int64_t)8)]))) = _33;
  *(uint64_t*)(((&((uint8_t*)_41)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_36))[((int64_t)16)]))) = _41;
  _42 = julia_Lexer_7(_31, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _41);
  if ((_34 == 0u)) {
    goto _52;
  } else {
    goto _53;
  }

_53:
  if ((((uint32_t)_34) > ((uint32_t)65535u))) {
    goto _54;
  } else {
    goto _55;
  }

_54:
  _43 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)304)])));
  *(void**)(((&((uint8_t*)(&_36))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  julia_throw_inexacterror_9(_31, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _43, _34);
  __builtin_unreachable();

_55:
  *(uint16_t*)(((&((uint8_t*)_42)[((int64_t)16)]))) = (((uint16_t)_34));
  goto _52;

_52:
  *(void**)(((&((uint8_t*)(&_36))[((int64_t)16)]))) = _42;
  julia_next_token_8((&_39), _31, _42, 1);
  _44 = *(uint64_t*)(((&((uint8_t*)(&_39))[((int64_t)16)])));
  _45 = *(uint64_t*)(((&((uint8_t*)(&_39))[((int64_t)8)])));
  _46 = llvm_sub_u64(_44, _45);
  _47 = llvm_add_u64(_46, 1);
  if ((((uint64_t)(llvm_add_u64(_46, INT64_C(-2147483647)))) < ((uint64_t)UINT64_C(18446744069414584320)))) {
    goto _56;
  } else {
    goto _57;
  }

_56:
  _48 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)256)])));
  *(void**)(((&((uint8_t*)(&_36))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  julia_throw_inexacterror_10(_31, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _48, _47);
  __builtin_unreachable();

_57:
  __UNALIGNED_LOAD__(uint32_t, 1, _35) = (((uint32_t)_47));
  _49 = *(uint8_t*)(((&((uint8_t*)(&_39))[((int64_t)24)])));
  __UNALIGNED_LOAD__(uint32_t, 1, (((&((uint8_t*)_35)[((int64_t)4)])))) = (((uint32_t)(uint8_t)_49));
  _50 = *((uint16_t*)&_39);
  _51 = *(void**)(((&((uint8_t*)(&_36))[((int64_t)8)])));
  *(void**)_31 = _51;
  return (((uint32_t)(uint16_t)_50));
}


uint32_t jsk_jsyn_contextual_keyword(void* _58, void* _59, uint64_t _60) {
  uint32_t _61;

  _61 = julia_contextual_keyword_11(_58, _59, _60);
  return _61;
}


uint32_t jsk_jsyn_string_token(void* _62, void* _63, uint64_t _64, int32_t _65, int32_t _66, int32_t _67, int32_t _68, void* _69) {
  __PREFIXALIGN__(16) struct l_array_4_uint64_t _70 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _71;
  void* _72;
  struct l_array_4_uint64_t _73;    /* Address-exposed local */
  void* _74;
  void* _75;
  void* _76;
  void* _77;
  void* _78;
  uint32_t _79;
  uint32_t _80;
  uint32_t _81;
  uint32_t _82;
  uint32_t _83;
  uint32_t _84;
  uint32_t _85;
  uint32_t _85__PHI_TEMPORARY;
  uint8_t _86;
  uint8_t _87;
  void* _88;
  void* _89;
  void* _90;
  uint64_t _91;
  uint64_t _92;
  void* _93;
  uint64_t _94;
  void* _95;
  void* _96;
  void* _97;
  uint64_t _98;
  uint64_t _99;
  uint64_t _100;
  uint64_t _101;
  void* _102;
  uint16_t _103;
  void* _104;

  _71 = memset((&_70), 0, 32);
  *((uint64_t*)&_70) = 8;
  _72 = *(void**)_62;
  *(void**)(((&((uint8_t*)(&_70))[((int64_t)8)]))) = _72;
  *(void**)_62 = (&_70);
  _74 = *(void**)(((&((uint8_t*)_62)[((int64_t)16)])));
  _75 = jsk_ijl_gc_small_alloc(_74, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])))));
  *(void**)(((&((uint8_t*)_75)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])));
  *(void**)_75 = _63;
  *(uint64_t*)(((&((uint8_t*)_75)[((int64_t)8)]))) = _64;
  *(uint64_t*)(((&((uint8_t*)_75)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_70))[((int64_t)16)]))) = _75;
  _76 = julia_Lexer_7(_62, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _75);
  _77 = *(void**)(((&((uint8_t*)_76)[((int64_t)24)])));
  if ((((int32_t)_65) > ((int32_t)4294967295u))) {
    goto _105;
  } else {
    goto _106;
  }

_106:
  _78 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)320)])));
  *(void**)(((&((uint8_t*)(&_70))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  julia_throw_inexacterror_9(_62, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)104)]))), _78, _65);
  __builtin_unreachable();

_105:
  if ((((uint32_t)_65) > ((uint32_t)127u))) {
    goto _107;
  } else {
    goto _108;
  }

_108:
  _79 = _65 << 24;
  _85__PHI_TEMPORARY = _79;   /* for PHI node */
  goto _109;

_107:
  if ((((uint32_t)_65) > ((uint32_t)2097151u))) {
    goto _110;
  } else {
    goto _111;
  }

_111:
  _80 = (_65 & 63) | ((_65 << 2) & 16128);
  _81 = (((_65 << 4) & 4128768) | ((_65 << 6) & 117440512)) | _80;
  if ((((uint32_t)_65) > ((uint32_t)2047u))) {
    goto _112;
  } else {
    goto _113;
  }

_113:
  _82 = (_80 << 16) | -1065353216;
  _85__PHI_TEMPORARY = _82;   /* for PHI node */
  goto _109;

_112:
  if ((((uint32_t)_65) > ((uint32_t)65535u))) {
    goto _114;
  } else {
    goto _115;
  }

_115:
  _83 = (_81 << 8) | -528449536;
  _85__PHI_TEMPORARY = _83;   /* for PHI node */
  goto _109;

_114:
  _84 = _81 | -260013952;
  _85__PHI_TEMPORARY = _84;   /* for PHI node */
  goto _109;

_110:
  *(void**)(((&((uint8_t*)(&_70))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  julia_throw_code_point_err_12(_62, _65);
  __builtin_unreachable();

_109:
  _85 = _85__PHI_TEMPORARY;
  _86 = ((uint8_t)(bool)(_66 != 0u));
  _87 = ((uint8_t)(bool)(_67 != 0u));
  _88 = *(void**)_77;
  _89 = *(void**)(((&((uint8_t*)_77)[((int64_t)8)])));
  _90 = ((&((uint8_t*)_77)[((int64_t)16)]));
  _91 = *(uint64_t*)_90;
  _92 = llvm_add_u64(_91, 1);
  _93 = *(void**)(((&((uint8_t*)_89)[((int64_t)8)])));
  _94 = *(uint64_t*)_89;
  if ((((int64_t)_94) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_88)), (((uint64_t)(uintptr_t)_93)))), 4)), 1)), _91))))) {
    goto _116;
  } else {
    goto _117;
  }

_116:
  *(void**)(((&((uint8_t*)(&_70))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  *(void**)(((&((uint8_t*)(&_70))[((int64_t)24)]))) = _77;
  *(void**)(((&((uint8_t*)(&_70))[((int64_t)16)]))) = _76;
  julia__growend_internalNOT_OC__13(_62, _77, 1, _91);
  goto _117;

_117:
  *(uint64_t*)_90 = _92;
  _95 = *(void**)_77;
  _96 = ((&((uint8_t*)_95)[((int64_t)(_91 << 4))]));
  *(uint8_t*)_96 = _86;
  *(uint8_t*)(((&((uint8_t*)_96)[((int64_t)1)]))) = _87;
  *(uint32_t*)(((&((uint8_t*)_96)[((int64_t)4)]))) = _85;
  *(uint64_t*)(((&((uint8_t*)_96)[((int64_t)8)]))) = 0;
  if ((_68 == 0u)) {
    goto _118;
  } else {
    goto _119;
  }

_119:
  if ((((uint32_t)_68) > ((uint32_t)65535u))) {
    goto _120;
  } else {
    goto _121;
  }

_120:
  _97 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)304)])));
  julia_throw_inexacterror_9(_62, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _97, _68);
  __builtin_unreachable();

_121:
  *(uint16_t*)(((&((uint8_t*)_76)[((int64_t)16)]))) = (((uint16_t)_68));
  goto _118;

_118:
  *(void**)(((&((uint8_t*)(&_70))[((int64_t)16)]))) = _76;
  julia_next_token_8((&_73), _62, _76, 1);
  _98 = *(uint64_t*)(((&((uint8_t*)(&_73))[((int64_t)16)])));
  _99 = *(uint64_t*)(((&((uint8_t*)(&_73))[((int64_t)8)])));
  _100 = llvm_sub_u64(_98, _99);
  _101 = llvm_add_u64(_100, 1);
  if ((((uint64_t)(llvm_add_u64(_100, INT64_C(-2147483647)))) < ((uint64_t)UINT64_C(18446744069414584320)))) {
    goto _122;
  } else {
    goto _123;
  }

_122:
  _102 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)256)])));
  *(void**)(((&((uint8_t*)(&_70))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  julia_throw_inexacterror_10(_62, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _102, _101);
  __builtin_unreachable();

_123:
  __UNALIGNED_LOAD__(uint32_t, 1, _69) = (((uint32_t)_101));
  _103 = *((uint16_t*)&_73);
  _104 = *(void**)(((&((uint8_t*)(&_70))[((int64_t)8)])));
  *(void**)_62 = _104;
  return (((uint32_t)(uint16_t)_103));
}


uint32_t jsk_jsyn_char_literal(void* _124, void* _125, uint64_t _126) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _127 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _128;
  void* _129;
  struct l_array_4_uint64_t _130;    /* Address-exposed local */
  struct l_array_4_uint64_t _131;    /* Address-exposed local */
  struct l_array_4_uint64_t _132;    /* Address-exposed local */
  void* _133;
  void* _134;
  void* _135;
  uint16_t _136;
  uint16_t _137;
  uint16_t _138;
  uint64_t _139;
  uint64_t _140;
  uint32_t _141;
  void* _142;
  uint32_t _143;
  uint32_t _143__PHI_TEMPORARY;
  void* _144;

  _128 = memset((&_127), 0, 24);
  *((uint64_t*)&_127) = 4;
  _129 = *(void**)_124;
  *(void**)(((&((uint8_t*)(&_127))[((int64_t)8)]))) = _129;
  *(void**)_124 = (&_127);
  _133 = *(void**)(((&((uint8_t*)_124)[((int64_t)16)])));
  _134 = jsk_ijl_gc_small_alloc(_133, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])))));
  *(void**)(((&((uint8_t*)_134)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])));
  *(void**)_134 = _125;
  *(uint64_t*)(((&((uint8_t*)_134)[((int64_t)8)]))) = _126;
  *(uint64_t*)(((&((uint8_t*)_134)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_127))[((int64_t)16)]))) = _134;
  _135 = julia_Lexer_7(_124, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _134);
  *(void**)(((&((uint8_t*)(&_127))[((int64_t)16)]))) = _135;
  julia_next_token_8((&_130), _124, _135, 1);
  _136 = *((uint16_t*)&_130);
  if ((_136 == ((uint16_t)709))) {
    goto _145;
  } else {
    _143__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _146;
  }

_145:
  julia_next_token_8((&_131), _124, _135, 1);
  _137 = *((uint16_t*)&_131);
  if ((_137 == ((uint16_t)51))) {
    goto _147;
  } else {
    _143__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _146;
  }

_147:
  julia_next_token_8((&_132), _124, _135, 1);
  _138 = *((uint16_t*)&_132);
  if ((_138 == ((uint16_t)709))) {
    goto _148;
  } else {
    _143__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _146;
  }

_148:
  _139 = *(uint64_t*)(((&((uint8_t*)(&_132))[((int64_t)16)])));
  _140 = llvm_add_u64(_139, 1);
  _141 = ((uint32_t)_140);
  if ((((uint64_t)(llvm_add_u64(_139, INT64_C(-2147483647)))) < ((uint64_t)UINT64_C(18446744069414584320)))) {
    goto _149;
  } else {
    _143__PHI_TEMPORARY = _141;   /* for PHI node */
    goto _146;
  }

_149:
  _142 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)256)])));
  *(void**)(((&((uint8_t*)(&_127))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  julia_throw_inexacterror_10(_124, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _142, _140);
  __builtin_unreachable();

_146:
  _143 = _143__PHI_TEMPORARY;
  _144 = *(void**)(((&((uint8_t*)(&_127))[((int64_t)8)])));
  *(void**)_124 = _144;
  return _143;
}


uint32_t jsk_jsyn_escape_len(void* _150, void* _151, uint64_t _152, int32_t _153, int32_t _154) {
  uint32_t _155;

  _155 = julia_escape_len_14(_150, _151, _152, (((uint8_t)(bool)(_153 != 0u))), (((uint8_t)_154)));
  return _155;
}


uint32_t jsk_jsyn_var_identifier(void* _156, void* _157, uint64_t _158) {
  uint32_t _159;

  _159 = julia_var_identifier_15(_156, _157, _158);
  return _159;
}


static void* julia_Lexer_7(void* _160, void* _161, void* _162) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _163 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _164;
  void* _165;
  void* _166;
  uint64_t _167;
  void* _168;
  uint64_t _169;
  void* _170;
  uint8_t _171;
  uint8_t _172;
  uint8_t _173;
  uint32_t _174;
  uint64_t _175;
  uint64_t _175__PHI_TEMPORARY;
  uint32_t _176;
  uint32_t _176__PHI_TEMPORARY;
  uint64_t _177;
  uint64_t _178;
  void* _179;
  uint8_t _180;
  uint32_t _181;
  uint64_t _182;
  uint64_t _183;
  uint32_t _184;
  uint64_t _185;
  uint32_t _186;
  uint32_t _186__PHI_TEMPORARY;
  uint64_t _187;
  uint64_t _188;
  void* _189;
  uint8_t _190;
  uint8_t _191;
  uint8_t _192;
  uint32_t _193;
  uint64_t _194;
  uint64_t _194__PHI_TEMPORARY;
  uint32_t _195;
  uint32_t _195__PHI_TEMPORARY;
  uint64_t _196;
  uint64_t _197;
  void* _198;
  uint8_t _199;
  uint32_t _200;
  uint64_t _201;
  uint64_t _202;
  uint32_t _203;
  uint64_t _204;
  uint32_t _205;
  uint32_t _205__PHI_TEMPORARY;
  uint64_t _206;
  uint64_t _207;
  void* _208;
  uint8_t _209;
  uint8_t _210;
  uint8_t _211;
  uint32_t _212;
  uint64_t _213;
  uint64_t _213__PHI_TEMPORARY;
  uint32_t _214;
  uint32_t _214__PHI_TEMPORARY;
  uint64_t _215;
  uint64_t _216;
  void* _217;
  uint8_t _218;
  uint32_t _219;
  uint64_t _220;
  uint64_t _221;
  uint32_t _222;
  uint64_t _223;
  uint32_t _224;
  uint32_t _224__PHI_TEMPORARY;
  uint64_t _225;
  uint64_t _226;
  uint64_t _227;
  uint64_t _227__PHI_TEMPORARY;
  uint64_t _228;
  uint64_t _228__PHI_TEMPORARY;
  uint64_t _229;
  uint64_t _229__PHI_TEMPORARY;
  uint32_t _230;
  uint32_t _230__PHI_TEMPORARY;
  uint64_t _231;
  uint64_t _231__PHI_TEMPORARY;
  uint32_t _232;
  uint32_t _232__PHI_TEMPORARY;
  uint64_t _233;
  void* _234;
  void* _235;
  void* _236;
  void* _237;
  void* _238;
  void* _239;
  void* _240;

  _164 = memset((&_163), 0, 24);
  *((uint64_t*)&_163) = 4;
  _165 = *(void**)_160;
  *(void**)(((&((uint8_t*)(&_163))[((int64_t)8)]))) = _165;
  *(void**)_160 = (&_163);
  _166 = ((&((uint8_t*)_162)[((int64_t)16)]));
  _167 = *(uint64_t*)_166;
  _168 = ((&((uint8_t*)_162)[((int64_t)8)]));
  _169 = *(uint64_t*)_168;
  if ((((int64_t)_169) > ((int64_t)_167))) {
    goto _241;
  } else {
    _227__PHI_TEMPORARY = _167;   /* for PHI node */
    _228__PHI_TEMPORARY = INT64_C(-4294967296);   /* for PHI node */
    _229__PHI_TEMPORARY = _167;   /* for PHI node */
    _230__PHI_TEMPORARY = -1;   /* for PHI node */
    _231__PHI_TEMPORARY = _167;   /* for PHI node */
    _232__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _242;
  }

_241:
  _170 = *(void**)_162;
  _171 = *(uint8_t*)(((&((uint8_t*)_170)[((int64_t)_167)])));
  *(uint64_t*)_166 = (llvm_add_u64(_167, 1));
  _172 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_171)), 0);
  _173 = llvm_sub_u8(32, (llvm_shl_u8(_172, 3)));
  _174 = (((uint32_t)(uint8_t)_171)) << 24;
  if ((((uint8_t)_173) > ((uint8_t)((uint8_t)16)))) {
    _186__PHI_TEMPORARY = _174;   /* for PHI node */
    goto _243;
  } else {
    _175__PHI_TEMPORARY = 16;   /* for PHI node */
    _176__PHI_TEMPORARY = _174;   /* for PHI node */
    goto _244;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_244:
  _175 = _175__PHI_TEMPORARY;
  _176 = _176__PHI_TEMPORARY;
  if (((((int64_t)_175) < ((int64_t)UINT64_C(0))) | (((uint64_t)_175) < ((uint64_t)(((uint64_t)(uint8_t)_173)))))) {
    _186__PHI_TEMPORARY = _176;   /* for PHI node */
    goto _243;
  } else {
    goto _245;
  }

_245:
  _177 = *(uint64_t*)_166;
  _178 = *(uint64_t*)_168;
  if ((((int64_t)_178) > ((int64_t)_177))) {
    goto _246;
  } else {
    _186__PHI_TEMPORARY = _176;   /* for PHI node */
    goto _243;
  }

_246:
  _179 = *(void**)_162;
  _180 = *(uint8_t*)(((&((uint8_t*)_179)[((int64_t)_177)])));
  if ((((int8_t)_180) > ((int8_t)((uint8_t)-65)))) {
    _186__PHI_TEMPORARY = _176;   /* for PHI node */
    goto _243;
  } else {
    goto _247;
  }

_247:
  _181 = llvm_select_u32((((int64_t)_177) < ((int64_t)_178)), (((uint32_t)(uint8_t)_180)), 0);
  _182 = *(uint64_t*)_166;
  *(uint64_t*)_166 = (llvm_add_u64(_182, 1));
  _183 = llvm_neg_u64(_175);
  _184 = _176 | (llvm_select_u32((((int64_t)_175) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_183) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_181, (((uint32_t)_183)))))), (llvm_select_u32((((uint64_t)_175) > ((uint64_t)UINT64_C(31))), 0, (_181 << (((uint32_t)_175)))))));
  _185 = llvm_add_u64(_175, -8);
  _175__PHI_TEMPORARY = _185;   /* for PHI node */
  _176__PHI_TEMPORARY = _184;   /* for PHI node */
  goto _244;

  } while (1); /* end of syntactic loop '' */
_243:
  _186 = _186__PHI_TEMPORARY;
  _187 = *(uint64_t*)_166;
  _188 = *(uint64_t*)_168;
  if ((((int64_t)_188) > ((int64_t)_187))) {
    goto _248;
  } else {
    _227__PHI_TEMPORARY = _187;   /* for PHI node */
    _228__PHI_TEMPORARY = INT64_C(-4294967296);   /* for PHI node */
    _229__PHI_TEMPORARY = _187;   /* for PHI node */
    _230__PHI_TEMPORARY = -1;   /* for PHI node */
    _231__PHI_TEMPORARY = _187;   /* for PHI node */
    _232__PHI_TEMPORARY = _186;   /* for PHI node */
    goto _242;
  }

_248:
  _189 = *(void**)_162;
  _190 = *(uint8_t*)(((&((uint8_t*)_189)[((int64_t)_187)])));
  *(uint64_t*)_166 = (llvm_add_u64(_187, 1));
  _191 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_190)), 0);
  _192 = llvm_sub_u8(32, (llvm_shl_u8(_191, 3)));
  _193 = (((uint32_t)(uint8_t)_190)) << 24;
  if ((((uint8_t)_192) > ((uint8_t)((uint8_t)16)))) {
    _205__PHI_TEMPORARY = _193;   /* for PHI node */
    goto _249;
  } else {
    _194__PHI_TEMPORARY = 16;   /* for PHI node */
    _195__PHI_TEMPORARY = _193;   /* for PHI node */
    goto _250;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_250:
  _194 = _194__PHI_TEMPORARY;
  _195 = _195__PHI_TEMPORARY;
  if (((((int64_t)_194) < ((int64_t)UINT64_C(0))) | (((uint64_t)_194) < ((uint64_t)(((uint64_t)(uint8_t)_192)))))) {
    _205__PHI_TEMPORARY = _195;   /* for PHI node */
    goto _249;
  } else {
    goto _251;
  }

_251:
  _196 = *(uint64_t*)_166;
  _197 = *(uint64_t*)_168;
  if ((((int64_t)_197) > ((int64_t)_196))) {
    goto _252;
  } else {
    _205__PHI_TEMPORARY = _195;   /* for PHI node */
    goto _249;
  }

_252:
  _198 = *(void**)_162;
  _199 = *(uint8_t*)(((&((uint8_t*)_198)[((int64_t)_196)])));
  if ((((int8_t)_199) > ((int8_t)((uint8_t)-65)))) {
    _205__PHI_TEMPORARY = _195;   /* for PHI node */
    goto _249;
  } else {
    goto _253;
  }

_253:
  _200 = llvm_select_u32((((int64_t)_196) < ((int64_t)_197)), (((uint32_t)(uint8_t)_199)), 0);
  _201 = *(uint64_t*)_166;
  *(uint64_t*)_166 = (llvm_add_u64(_201, 1));
  _202 = llvm_neg_u64(_194);
  _203 = _195 | (llvm_select_u32((((int64_t)_194) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_202) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_200, (((uint32_t)_202)))))), (llvm_select_u32((((uint64_t)_194) > ((uint64_t)UINT64_C(31))), 0, (_200 << (((uint32_t)_194)))))));
  _204 = llvm_add_u64(_194, -8);
  _194__PHI_TEMPORARY = _204;   /* for PHI node */
  _195__PHI_TEMPORARY = _203;   /* for PHI node */
  goto _250;

  } while (1); /* end of syntactic loop '' */
_249:
  _205 = _205__PHI_TEMPORARY;
  _206 = *(uint64_t*)_166;
  _207 = *(uint64_t*)_168;
  if ((((int64_t)_207) > ((int64_t)_206))) {
    goto _254;
  } else {
    _227__PHI_TEMPORARY = _206;   /* for PHI node */
    _228__PHI_TEMPORARY = INT64_C(-4294967296);   /* for PHI node */
    _229__PHI_TEMPORARY = _206;   /* for PHI node */
    _230__PHI_TEMPORARY = _205;   /* for PHI node */
    _231__PHI_TEMPORARY = _187;   /* for PHI node */
    _232__PHI_TEMPORARY = _186;   /* for PHI node */
    goto _242;
  }

_254:
  _208 = *(void**)_162;
  _209 = *(uint8_t*)(((&((uint8_t*)_208)[((int64_t)_206)])));
  *(uint64_t*)_166 = (llvm_add_u64(_206, 1));
  _210 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_209)), 0);
  _211 = llvm_sub_u8(32, (llvm_shl_u8(_210, 3)));
  _212 = (((uint32_t)(uint8_t)_209)) << 24;
  if ((((uint8_t)_211) > ((uint8_t)((uint8_t)16)))) {
    _224__PHI_TEMPORARY = _212;   /* for PHI node */
    goto _255;
  } else {
    _213__PHI_TEMPORARY = 16;   /* for PHI node */
    _214__PHI_TEMPORARY = _212;   /* for PHI node */
    goto _256;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_256:
  _213 = _213__PHI_TEMPORARY;
  _214 = _214__PHI_TEMPORARY;
  if (((((int64_t)_213) < ((int64_t)UINT64_C(0))) | (((uint64_t)_213) < ((uint64_t)(((uint64_t)(uint8_t)_211)))))) {
    _224__PHI_TEMPORARY = _214;   /* for PHI node */
    goto _255;
  } else {
    goto _257;
  }

_257:
  _215 = *(uint64_t*)_166;
  _216 = *(uint64_t*)_168;
  if ((((int64_t)_216) > ((int64_t)_215))) {
    goto _258;
  } else {
    _224__PHI_TEMPORARY = _214;   /* for PHI node */
    goto _255;
  }

_258:
  _217 = *(void**)_162;
  _218 = *(uint8_t*)(((&((uint8_t*)_217)[((int64_t)_215)])));
  if ((((int8_t)_218) > ((int8_t)((uint8_t)-65)))) {
    _224__PHI_TEMPORARY = _214;   /* for PHI node */
    goto _255;
  } else {
    goto _259;
  }

_259:
  _219 = llvm_select_u32((((int64_t)_215) < ((int64_t)_216)), (((uint32_t)(uint8_t)_218)), 0);
  _220 = *(uint64_t*)_166;
  *(uint64_t*)_166 = (llvm_add_u64(_220, 1));
  _221 = llvm_neg_u64(_213);
  _222 = _214 | (llvm_select_u32((((int64_t)_213) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_221) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_219, (((uint32_t)_221)))))), (llvm_select_u32((((uint64_t)_213) > ((uint64_t)UINT64_C(31))), 0, (_219 << (((uint32_t)_213)))))));
  _223 = llvm_add_u64(_213, -8);
  _213__PHI_TEMPORARY = _223;   /* for PHI node */
  _214__PHI_TEMPORARY = _222;   /* for PHI node */
  goto _256;

  } while (1); /* end of syntactic loop '' */
_255:
  _224 = _224__PHI_TEMPORARY;
  _225 = *(uint64_t*)_166;
  _226 = (((uint64_t)(uint32_t)_224)) << 32;
  _227__PHI_TEMPORARY = _225;   /* for PHI node */
  _228__PHI_TEMPORARY = _226;   /* for PHI node */
  _229__PHI_TEMPORARY = _206;   /* for PHI node */
  _230__PHI_TEMPORARY = _205;   /* for PHI node */
  _231__PHI_TEMPORARY = _187;   /* for PHI node */
  _232__PHI_TEMPORARY = _186;   /* for PHI node */
  goto _242;

_242:
  _227 = _227__PHI_TEMPORARY;
  _228 = _228__PHI_TEMPORARY;
  _229 = _229__PHI_TEMPORARY;
  _230 = _230__PHI_TEMPORARY;
  _231 = _231__PHI_TEMPORARY;
  _232 = _232__PHI_TEMPORARY;
  _233 = *(uint64_t*)_166;
  _234 = *(void**)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)144)])));
  _235 = *(void**)(((&((uint8_t*)_160)[((int64_t)16)])));
  _236 = jsk_ijl_gc_small_alloc(_235, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)168)])))));
  *(void**)(((&((uint8_t*)_236)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)168)])));
  *(void**)(((&((uint8_t*)_236)[((int64_t)8)]))) = ((void*)/*NULL*/0);
  *(void**)_236 = _234;
  *(void**)(((&((uint8_t*)_236)[((int64_t)8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)136)])));
  *(uint64_t*)(((&((uint8_t*)_236)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_163))[((int64_t)16)]))) = _236;
  _237 = *(void**)(((&((uint8_t*)_160)[((int64_t)16)])));
  _238 = jsk_ijl_gc_small_alloc(_237, 600, 96, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)200)])))));
  *(void**)(((&((uint8_t*)_238)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)200)])));
  *(void**)_238 = ((void*)/*NULL*/0);
  _239 = ((&((uint8_t*)_238)[((int64_t)24)]));
  *(void**)_239 = ((void*)/*NULL*/0);
  *(void**)_238 = _162;
  *(uint64_t*)(((&((uint8_t*)_238)[((int64_t)8)]))) = _233;
  *(uint16_t*)(((&((uint8_t*)_238)[((int64_t)16)]))) = 767;
  *(void**)_239 = _236;
  *(uint64_t*)(((&((uint8_t*)_238)[((int64_t)32)]))) = (((((uint64_t)(uint32_t)_232)) << 32) | 536870912);
  *(uint64_t*)(((&((uint8_t*)_238)[((int64_t)40)]))) = (_228 | (((uint64_t)(uint32_t)_230)));
  *(uint64_t*)(((&((uint8_t*)_238)[((int64_t)48)]))) = _167;
  *(uint64_t*)(((&((uint8_t*)_238)[((int64_t)56)]))) = _231;
  *(uint64_t*)(((&((uint8_t*)_238)[((int64_t)64)]))) = _229;
  *(uint64_t*)(((&((uint8_t*)_238)[((int64_t)72)]))) = _227;
  _240 = *(void**)(((&((uint8_t*)(&_163))[((int64_t)8)])));
  *(void**)_160 = _240;
  return _238;
}


static void julia_next_token_8(void* _260, void* _261, void* _262, uint8_t _263) {
  struct l_array_4_uint64_t _264;    /* Address-exposed local */
  struct l_array_4_uint64_t _265;    /* Address-exposed local */
  uint64_t _266;
  void* _267;
  uint64_t _268;
  void* _269;
  void* _269__PHI_TEMPORARY;
  void* _270;
  void* _271;
  void* _272;
  uint64_t _273;
  void* _274;
  uint64_t _275;
  void* _276;
  uint8_t _277;
  uint8_t _278;
  uint8_t _279;
  uint32_t _280;
  uint64_t _281;
  uint64_t _281__PHI_TEMPORARY;
  uint32_t _282;
  uint32_t _282__PHI_TEMPORARY;
  uint64_t _283;
  uint64_t _284;
  void* _285;
  uint8_t _286;
  uint32_t _287;
  uint64_t _288;
  uint64_t _289;
  uint32_t _290;
  uint64_t _291;
  uint32_t _292;
  uint32_t _292__PHI_TEMPORARY;
  void* _293;
  uint64_t _294;
  void* _295;
  uint64_t _296;
  uint64_t _297;
  uint64_t _298;
  void* _299;
  uint64_t _300;
  void* _301;
  uint64_t _302;
  void* _303;
  uint64_t _304;
  void* _305;
  uint64_t _306;
  uint64_t _307;

  if ((((bool)_263&1u))) {
    goto _308;
  } else {
    goto _309;
  }

_308:
  _266 = *(uint64_t*)(((&((uint8_t*)_262)[((int64_t)48)])));
  *(uint64_t*)(((&((uint8_t*)_262)[((int64_t)8)]))) = _266;
  goto _309;

_309:
  _267 = *(void**)(((&((uint8_t*)_262)[((int64_t)24)])));
  _268 = *(uint64_t*)(((&((uint8_t*)_267)[((int64_t)16)])));
  if ((_268 == UINT64_C(0))) {
    goto _310;
  } else {
    goto _311;
  }

_312:
  _269 = _269__PHI_TEMPORARY;
  _270 = memcpy(_260, _269, 32);
  return;
_311:
  julia_lex_string_chunk_16((&_264), _261, _262);
  _269__PHI_TEMPORARY = (&_264);   /* for PHI node */
  goto _312;

_310:
  _271 = *(void**)_262;
  _272 = ((&((uint8_t*)_271)[((int64_t)16)]));
  _273 = *(uint64_t*)_272;
  _274 = ((&((uint8_t*)_271)[((int64_t)8)]));
  _275 = *(uint64_t*)_274;
  if ((((int64_t)_275) > ((int64_t)_273))) {
    goto _313;
  } else {
    _292__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _314;
  }

_313:
  _276 = *(void**)_271;
  _277 = *(uint8_t*)(((&((uint8_t*)_276)[((int64_t)_273)])));
  *(uint64_t*)_272 = (llvm_add_u64(_273, 1));
  _278 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_277)), 0);
  _279 = llvm_sub_u8(32, (llvm_shl_u8(_278, 3)));
  _280 = (((uint32_t)(uint8_t)_277)) << 24;
  if ((((uint8_t)_279) > ((uint8_t)((uint8_t)16)))) {
    _292__PHI_TEMPORARY = _280;   /* for PHI node */
    goto _314;
  } else {
    _281__PHI_TEMPORARY = 16;   /* for PHI node */
    _282__PHI_TEMPORARY = _280;   /* for PHI node */
    goto _315;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_315:
  _281 = _281__PHI_TEMPORARY;
  _282 = _282__PHI_TEMPORARY;
  if (((((int64_t)_281) < ((int64_t)UINT64_C(0))) | (((uint64_t)_281) < ((uint64_t)(((uint64_t)(uint8_t)_279)))))) {
    _292__PHI_TEMPORARY = _282;   /* for PHI node */
    goto _314;
  } else {
    goto _316;
  }

_316:
  _283 = *(uint64_t*)_272;
  _284 = *(uint64_t*)_274;
  if ((((int64_t)_284) > ((int64_t)_283))) {
    goto _317;
  } else {
    _292__PHI_TEMPORARY = _282;   /* for PHI node */
    goto _314;
  }

_317:
  _285 = *(void**)_271;
  _286 = *(uint8_t*)(((&((uint8_t*)_285)[((int64_t)_283)])));
  if ((((int8_t)_286) > ((int8_t)((uint8_t)-65)))) {
    _292__PHI_TEMPORARY = _282;   /* for PHI node */
    goto _314;
  } else {
    goto _318;
  }

_318:
  _287 = llvm_select_u32((((int64_t)_283) < ((int64_t)_284)), (((uint32_t)(uint8_t)_286)), 0);
  _288 = *(uint64_t*)_272;
  *(uint64_t*)_272 = (llvm_add_u64(_288, 1));
  _289 = llvm_neg_u64(_281);
  _290 = _282 | (llvm_select_u32((((int64_t)_281) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_289) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_287, (((uint32_t)_289)))))), (llvm_select_u32((((uint64_t)_281) > ((uint64_t)UINT64_C(31))), 0, (_287 << (((uint32_t)_281)))))));
  _291 = llvm_add_u64(_281, -8);
  _281__PHI_TEMPORARY = _291;   /* for PHI node */
  _282__PHI_TEMPORARY = _290;   /* for PHI node */
  goto _315;

  } while (1); /* end of syntactic loop '' */
_314:
  _292 = _292__PHI_TEMPORARY;
  _293 = ((&((uint8_t*)_262)[((int64_t)32)]));
  _294 = *(uint64_t*)_293;
  _295 = ((&((uint8_t*)_262)[((int64_t)40)]));
  _296 = *(uint64_t*)_295;
  _297 = jsyn_cbe_fshl_i64(_296, _294, 32);
  _298 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_292)), _296, 32);
  *(uint64_t*)_293 = _297;
  *(uint64_t*)_295 = _298;
  _299 = ((&((uint8_t*)_262)[((int64_t)56)]));
  _300 = *(uint64_t*)_299;
  _301 = ((&((uint8_t*)_262)[((int64_t)64)]));
  _302 = *(uint64_t*)_301;
  _303 = ((&((uint8_t*)_262)[((int64_t)72)]));
  _304 = *(uint64_t*)_303;
  _305 = *(void**)_262;
  _306 = *(uint64_t*)(((&((uint8_t*)_305)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_262)[((int64_t)48)]))) = _300;
  *(uint64_t*)_299 = _302;
  *(uint64_t*)_301 = _304;
  *(uint64_t*)_303 = _306;
  _307 = *(uint64_t*)_293;
  julia__next_token_17((&_265), _261, _262, (((uint32_t)_307)));
  _269__PHI_TEMPORARY = (&_265);   /* for PHI node */
  goto _312;

}


static __noreturn void julia_throw_inexacterror_9(void* _319, void* _320, void* _321, int32_t _322) {
  jsk_throw();
  __builtin_unreachable();

}


static __noreturn void julia_throw_inexacterror_10(void* _323, void* _324, void* _325, int64_t _326) {
  jsk_throw();
  __builtin_unreachable();

}


static uint32_t julia_contextual_keyword_11(void* _327, void* _328, int64_t _329) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _330 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _331;
  void* _332;
  struct l_array_4_uint64_t _333;    /* Address-exposed local */
  struct l_array_4_uint64_t _334;    /* Address-exposed local */
  void* _335;
  void* _336;
  void* _337;
  uint16_t _338;
  uint16_t _339;
  bool _340;
  bool _340__PHI_TEMPORARY;
  void* _341;
  bool _342;
  bool _343;
  uint16_t _344;

  _331 = memset((&_330), 0, 24);
  *((uint64_t*)&_330) = 4;
  _332 = *(void**)_327;
  *(void**)(((&((uint8_t*)(&_330))[((int64_t)8)]))) = _332;
  *(void**)_327 = (&_330);
  _335 = *(void**)(((&((uint8_t*)_327)[((int64_t)16)])));
  _336 = jsk_ijl_gc_small_alloc(_335, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])))));
  *(void**)(((&((uint8_t*)_336)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])));
  *(void**)_336 = _328;
  *(uint64_t*)(((&((uint8_t*)_336)[((int64_t)8)]))) = _329;
  *(uint64_t*)(((&((uint8_t*)_336)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_330))[((int64_t)16)]))) = _336;
  _337 = julia_Lexer_7(_327, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _336);
  *(void**)(((&((uint8_t*)(&_330))[((int64_t)16)]))) = _337;
  julia_next_token_8((&_333), _327, _337, 1);
  goto _345;

  do {     /* Syntactic loop '' to make GCC happy */
_345:
  julia_next_token_8((&_334), _327, _337, 1);
  _338 = *((uint16_t*)&_334);
  if ((((uint16_t)_338) < ((uint16_t)((uint16_t)2)))) {
    goto _345;
  } else {
    goto _346;
  }

  } while (1); /* end of syntactic loop '' */
_346:
  _339 = *((uint16_t*)&_333);
  switch (_339) {
  default:
    _340__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _347;
  case ((uint16_t)37):
    goto _348;
  case ((uint16_t)34):
    goto _349;
  case ((uint16_t)39):
    goto _349;
  case ((uint16_t)40):
    goto _350;
  case ((uint16_t)38):
    goto _351;
  }

_347:
  _340 = _340__PHI_TEMPORARY;
  _341 = *(void**)(((&((uint8_t*)(&_330))[((int64_t)8)])));
  *(void**)_327 = _341;
  return (((uint32_t)(bool)_340));
_348:
  _340__PHI_TEMPORARY = (_338 == ((uint16_t)25));   /* for PHI node */
  goto _347;

_350:
  _342 = (_338 != ((uint16_t)69)) & ((llvm_and_u16(_338, -5)) != ((uint16_t)56));
  _340__PHI_TEMPORARY = _342;   /* for PHI node */
  goto _347;

_351:
  _343 = (_338 != ((uint16_t)69)) & (((uint16_t)(llvm_add_u16(_338, -253))) < ((uint16_t)((uint16_t)-2)));
  _340__PHI_TEMPORARY = _343;   /* for PHI node */
  goto _347;

_349:
  _344 = *((uint16_t*)&_334);
  _340__PHI_TEMPORARY = (_344 == ((uint16_t)41));   /* for PHI node */
  goto _347;

}


static __noreturn void julia_throw_code_point_err_12(void* _352, uint32_t _353) {
  jsk_throw();
  __builtin_unreachable();

}


static void julia__growend_internalNOT_OC__13(void* _354, void* _355, int64_t _356, int64_t _357) {
  __PREFIXALIGN__(16) struct l_array_4_uint64_t _358 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _359;
  void* _360;
  void* _361;
  void* _362;
  void* _363;
  void* _364;
  uint64_t _365;
  void* _366;
  void* _367;
  uint64_t _368;
  uint64_t _369;
  uint64_t _370;
  uint64_t _371;
  uint64_t _372;
  uint64_t _372__PHI_TEMPORARY;
  void* _373;
  void* _373__PHI_TEMPORARY;
  void* _374;
  void* _375;
  uint64_t _376;
  uint64_t _377;
  uint64_t _378;
  void* _379;
  void* _380;
  void* _381;
  void* _382;
  struct l_array_1_void_KC_ _383;
  void* _384;
  void* _385;
  uint64_t _386;
  uint64_t _387;
  void* _388;
  struct l_array_1_void_KC_ _389;
  void* _390;
  void* _391;
  uint64_t _392;
  void* _393;
  void* _394;
  uint64_t _395;
  void* _396;
  void* _397;
  void* _398;
  uint64_t _399;
  uint64_t _400;
  uint64_t _401;
  void* _402;
  void* _403;

  _359 = memset((&_358), 0, 32);
  *((uint64_t*)&_358) = 8;
  _360 = *(void**)_354;
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)8)]))) = _360;
  *(void**)_354 = (&_358);
  _361 = ((&((uint8_t*)_354)[((int64_t)16)]));
  _362 = *(void**)_355;
  _363 = ((&((uint8_t*)_355)[((int64_t)8)]));
  _364 = *(void**)_363;
  _365 = llvm_add_u64(_357, _356);
  _366 = ((&((uint8_t*)_364)[((int64_t)8)]));
  _367 = *(void**)_366;
  _368 = llvm_sub_u64((((uint64_t)(uintptr_t)_362)), (((uint64_t)(uintptr_t)_367)));
  _369 = llvm_lshr_u64(_368, 4);
  _370 = llvm_add_u64(_369, _365);
  _371 = *(uint64_t*)_364;
  if ((((int64_t)_371) < ((int64_t)(llvm_add_u64(_369, _357))))) {
    goto _404;
  } else {
    goto _405;
  }

_406:
  _372 = _372__PHI_TEMPORARY;
  _373 = _373__PHI_TEMPORARY;
  _374 = *(void**)(((&((uint8_t*)_373)[((int64_t)8)])));
  _375 = ((&((uint8_t*)_374)[((int64_t)_372)]));
  if ((_357 == UINT64_C(0))) {
    goto _407;
  } else {
    goto _408;
  }

_408:
  _376 = llvm_add_u64(_357, -1);
  _377 = *(uint64_t*)_373;
  _378 = _376 << 4;
  if ((llvm_select_bool((((uint64_t)(llvm_add_u64(_376, _377))) < ((uint64_t)(_377 << 1))), (((uint64_t)(llvm_sub_u64((((uint64_t)(uintptr_t)(((&((uint8_t*)_375)[((int64_t)_378)]))))), (((uint64_t)(uintptr_t)_374))))) < ((uint64_t)(_377 << 4))), 0))) {
    goto _409;
  } else {
    goto _410;
  }

_411:
  _379 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)336)])));
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)24)]))) = _364;
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)16)]))) = _373;
  julia_throw_inexacterror_10(_354, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)104)]))), _379, _399);
  __builtin_unreachable();

_412:
  _380 = memmove(_375, _362, _399);
  goto _407;

_407:
  _381 = *(void**)_355;
  _382 = *(void**)_363;
  if (((_362 == _381) & (_364 == _382))) {
    goto _413;
  } else {
    goto _414;
  }

_414:
  _383 = julia_ConcurrencyViolationError_18(_354, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)296)]))));
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)16)]))) = ((_383.array[0]));
  _384 = *(void**)(((&((uint8_t*)_354)[((int64_t)16)])));
  _385 = jsk_ijl_gc_small_alloc(_384, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])))));
  *(void**)(((&((uint8_t*)_385)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])));
  *(void**)_385 = ((_383.array[0]));
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_385);
  __builtin_unreachable();

_413:
  *(void**)_355 = _375;
  *(void**)(((&((uint8_t*)_355)[((int64_t)8)]))) = _373;
  _386 = *(volatile uint64_t*)(((&((uint8_t*)_355)[((int64_t)-8)])));
  if (((_386 & 3) == UINT64_C(3))) {
    goto _415;
  } else {
    goto _416;
  }

_415:
  _387 = *(volatile uint64_t*)(((&((uint8_t*)_373)[((int64_t)-8)])));
  if ((((_386 & 12) == UINT64_C(4)) | ((_387 & 1) == UINT64_C(0)))) {
    goto _417;
  } else {
    goto _416;
  }

_417:
  jsk_ijl_gc_queue_root(_355);
  goto _416;

_416:
  _388 = *(void**)(((&((uint8_t*)(&_358))[((int64_t)8)])));
  *(void**)_354 = _388;
  return;
_404:
  _389 = julia_ConcurrencyViolationError_18(_354, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)360)]))));
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)16)]))) = ((_389.array[0]));
  _390 = *(void**)(((&((uint8_t*)_354)[((int64_t)16)])));
  _391 = jsk_ijl_gc_small_alloc(_390, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])))));
  *(void**)(((&((uint8_t*)_391)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])));
  *(void**)_391 = ((_389.array[0]));
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_391);
  __builtin_unreachable();

_405:
  if ((((int64_t)(llvm_sdiv_u64((llvm_mul_u64(_365, 5)), 4))) < ((int64_t)_369))) {
    goto _418;
  } else {
    goto _419;
  }

_418:
  _392 = (llvm_sdiv_u64(_365, 8)) << 4;
  _372__PHI_TEMPORARY = _392;   /* for PHI node */
  _373__PHI_TEMPORARY = _364;   /* for PHI node */
  goto _406;

_410:
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)16)]))) = _373;
  _393 = *(void**)(((&((uint8_t*)_354)[((int64_t)16)])));
  _394 = jsk_ijl_gc_small_alloc(_393, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])))));
  *(void**)(((&((uint8_t*)_394)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])));
  *(void**)_394 = _375;
  *(void**)(((&((uint8_t*)_394)[((int64_t)8)]))) = _373;
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_bounds_error_int(_394, _357);
  __builtin_unreachable();

_409:
  _395 = *(uint64_t*)_364;
  _396 = *(void**)_366;
  if ((llvm_select_bool((((uint64_t)(llvm_add_u64(_376, _395))) < ((uint64_t)(_395 << 1))), (((uint64_t)(llvm_sub_u64((((uint64_t)(uintptr_t)(((&((uint8_t*)_362)[((int64_t)_378)]))))), (((uint64_t)(uintptr_t)_396))))) < ((uint64_t)(_395 << 4))), 0))) {
    goto _420;
  } else {
    goto _421;
  }

_421:
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)24)]))) = _364;
  _397 = *(void**)(((&((uint8_t*)_354)[((int64_t)16)])));
  _398 = jsk_ijl_gc_small_alloc(_397, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])))));
  *(void**)(((&((uint8_t*)_398)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])));
  *(void**)_398 = _362;
  *(void**)(((&((uint8_t*)_398)[((int64_t)8)]))) = _364;
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)24)]))) = ((void*)/*NULL*/0);
  jsk_ijl_bounds_error_int(_398, _357);
  __builtin_unreachable();

_420:
  _399 = _357 << 4;
  if ((((int64_t)_399) > ((int64_t)UINT64_C(18446744073709551615)))) {
    goto _412;
  } else {
    goto _411;
  }

_419:
  _400 = llvm_OC_ctlz_OC_i64(_371, 0);
  _401 = llvm_OC_smax_OC_i64(_370, (llvm_add_u64(_371, (llvm_add_u64((3 << (llvm_lshr_u64((llvm_mul_u64((llvm_sub_u64(64, _400)), 7)), 3))), (llvm_sdiv_u64(_371, 8)))))));
  if ((_401 == UINT64_C(0))) {
    _372__PHI_TEMPORARY = _368;   /* for PHI node */
    _373__PHI_TEMPORARY = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)136)])));   /* for PHI node */
    goto _406;
  } else {
    goto _422;
  }

_422:
  if ((((uint64_t)_401) < ((uint64_t)UINT64_C(576460752303423488)))) {
    goto _423;
  } else {
    goto _424;
  }

_424:
  jsk_jl_argument_error((&_j_str_invalidSP_OC_GenericMemorySP_OC_sizDOT_OC_DOT_OC_DOT_OC_YY_OC_58));
  __builtin_unreachable();

_423:
  _402 = *(void**)_361;
  *(void**)(((&((uint8_t*)(&_358))[((int64_t)24)]))) = _364;
  _403 = jsk_jl_alloc_genericmemory_unchecked(_402, (_401 << 4), (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)424)]))));
  *(uint64_t*)_403 = _401;
  _372__PHI_TEMPORARY = _368;   /* for PHI node */
  _373__PHI_TEMPORARY = _403;   /* for PHI node */
  goto _406;

}


static uint32_t julia_escape_len_14(void* _425, void* _426, int64_t _427, uint8_t _428, uint8_t _429) {
  uint8_t _430;
  uint8_t _431;
  uint32_t _432;
  uint32_t _433;
  uint32_t _433__PHI_TEMPORARY;
  uint32_t _434;
  uint32_t _435;
  uint32_t _435__PHI_TEMPORARY;
  uint64_t _436;
  uint64_t _436__PHI_TEMPORARY;
  uint64_t _437;
  uint64_t _437__PHI_TEMPORARY;
  uint64_t _438;
  uint64_t _439;
  uint8_t _440;
  uint32_t _441;
  uint8_t _442;
  uint64_t _443;
  uint64_t _443__PHI_TEMPORARY;
  uint64_t _444;
  uint8_t _445;
  uint64_t _446;
  uint32_t _447;
  uint32_t _447__PHI_TEMPORARY;
  uint64_t _448;
  uint64_t _448__PHI_TEMPORARY;
  uint64_t _449;
  uint64_t _449__PHI_TEMPORARY;
  uint64_t _450;
  uint64_t _451;
  uint8_t _452;
  uint8_t _453;
  uint8_t _454;
  uint8_t _455;
  uint8_t _456;
  uint8_t _456__PHI_TEMPORARY;
  uint32_t _457;
  bool _458;
  bool _459;
  bool _459__PHI_TEMPORARY;
  uint64_t _460;
  uint64_t _460__PHI_TEMPORARY;
  uint64_t _461;
  uint32_t _462;
  void* _463;

  if ((((int64_t)_427) < ((int64_t)UINT64_C(1)))) {
    _433__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _464;
  } else {
    goto _465;
  }

_465:
  _430 = *(uint8_t*)_426;
  if ((_430 == ((uint8_t)92))) {
    goto _466;
  } else {
    _433__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _464;
  }

_466:
  if ((_427 == UINT64_C(1))) {
    _433__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _464;
  } else {
    goto _467;
  }

_467:
  _431 = *(uint8_t*)(((&((uint8_t*)_426)[((int64_t)1)])));
  if ((((bool)_428&1u))) {
    goto _468;
  } else {
    goto _469;
  }

_468:
  _432 = llvm_select_u32((llvm_select_bool((_431 != ((uint8_t)92)), (_431 != _429), 0)), 0, 2);
  _433__PHI_TEMPORARY = _432;   /* for PHI node */
  goto _464;

_464:
  _433 = _433__PHI_TEMPORARY;
  return _433;
_469:
  switch (_431) {
  default:
    goto _470;
  case ((uint8_t)120):
    goto _471;
  case ((uint8_t)117):
    goto _471;
  case ((uint8_t)85):
    goto _471;
  }

_470:
  if (((llvm_and_u8(_431, -8)) == ((uint8_t)48))) {
    goto _472;
  } else {
    goto _473;
  }

_472:
  _434 = ((uint32_t)(uint8_t)(llvm_add_u8(_431, -48)));
  _435__PHI_TEMPORARY = _434;   /* for PHI node */
  _436__PHI_TEMPORARY = 1;   /* for PHI node */
  _437__PHI_TEMPORARY = 2;   /* for PHI node */
  goto _474;

  do {     /* Syntactic loop '' to make GCC happy */
_474:
  _435 = _435__PHI_TEMPORARY;
  _436 = _436__PHI_TEMPORARY;
  _437 = _437__PHI_TEMPORARY;
  _438 = llvm_add_u64(_436, 1);
  if ((((int64_t)_438) > ((int64_t)UINT64_C(3)))) {
    goto _475;
  } else {
    goto _476;
  }

_476:
  _439 = llvm_add_u64(_437, 1);
  if ((((int64_t)_439) > ((int64_t)_427))) {
    goto _475;
  } else {
    goto _477;
  }

_477:
  _440 = *(uint8_t*)(((&((uint8_t*)_426)[((int64_t)_437)])));
  if (((llvm_and_u8(_440, -8)) == ((uint8_t)48))) {
    goto _478;
  } else {
    goto _475;
  }

_478:
  _441 = (_435 << 3) | (((uint32_t)(uint8_t)(llvm_add_u8(_440, -48))));
  _435__PHI_TEMPORARY = _441;   /* for PHI node */
  _436__PHI_TEMPORARY = _438;   /* for PHI node */
  _437__PHI_TEMPORARY = _439;   /* for PHI node */
  goto _474;

  } while (1); /* end of syntactic loop '' */
_475:
  _459__PHI_TEMPORARY = (((uint32_t)_435) < ((uint32_t)256u));   /* for PHI node */
  _460__PHI_TEMPORARY = _437;   /* for PHI node */
  goto _479;

_473:
  if (((_431 != ((uint8_t)13)) | (_427 == UINT64_C(2)))) {
    goto _480;
  } else {
    goto _481;
  }

_481:
  _442 = *(uint8_t*)(((&((uint8_t*)_426)[((int64_t)2)])));
  if ((_442 == ((uint8_t)10))) {
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 3;   /* for PHI node */
    goto _479;
  } else {
    goto _480;
  }

_480:
  switch (_431) {
  default:
    _443__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _482;
  case ((uint8_t)118):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)116):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)114):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)110):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)102):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)101):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)98):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)97):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)92):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)39):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)36):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)34):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)96):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  case ((uint8_t)10):
    _459__PHI_TEMPORARY = 1;   /* for PHI node */
    _460__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _479;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_482:
  _443 = _443__PHI_TEMPORARY;
  _444 = llvm_add_u64(_443, 1);
  if ((((int64_t)_444) > ((int64_t)_427))) {
    _459__PHI_TEMPORARY = 0;   /* for PHI node */
    _460__PHI_TEMPORARY = _443;   /* for PHI node */
    goto _479;
  } else {
    goto _483;
  }

_483:
  _445 = *(uint8_t*)(((&((uint8_t*)_426)[((int64_t)_443)])));
  if ((((int8_t)_445) > ((int8_t)((uint8_t)-65)))) {
    _459__PHI_TEMPORARY = 0;   /* for PHI node */
    _460__PHI_TEMPORARY = _443;   /* for PHI node */
    goto _479;
  } else {
    _443__PHI_TEMPORARY = _444;   /* for PHI node */
    goto _482;
  }

  } while (1); /* end of syntactic loop '' */
_471:
  _446 = llvm_select_u64((_431 == ((uint8_t)120)), 2, (llvm_select_u64((_431 == ((uint8_t)117)), 4, 8)));
  _447__PHI_TEMPORARY = 0;   /* for PHI node */
  _448__PHI_TEMPORARY = 0;   /* for PHI node */
  _449__PHI_TEMPORARY = 2;   /* for PHI node */
  goto _484;

  do {     /* Syntactic loop '' to make GCC happy */
_484:
  _447 = _447__PHI_TEMPORARY;
  _448 = _448__PHI_TEMPORARY;
  _449 = _449__PHI_TEMPORARY;
  _450 = llvm_add_u64(_448, 1);
  if ((((int64_t)_450) > ((int64_t)_446))) {
    goto _485;
  } else {
    goto _486;
  }

_486:
  _451 = llvm_add_u64(_449, 1);
  if ((((int64_t)_451) > ((int64_t)_427))) {
    goto _485;
  } else {
    goto _487;
  }

_487:
  _452 = *(uint8_t*)(((&((uint8_t*)_426)[((int64_t)_449)])));
  if ((((uint8_t)(llvm_add_u8(_452, -58))) < ((uint8_t)((uint8_t)-10)))) {
    goto _488;
  } else {
    goto _489;
  }

_489:
  _453 = llvm_add_u8(_452, -48);
  _456__PHI_TEMPORARY = _453;   /* for PHI node */
  goto _490;

_488:
  if ((((uint8_t)(llvm_add_u8(_452, 153u))) < ((uint8_t)((uint8_t)-6)))) {
    goto _491;
  } else {
    goto _492;
  }

_492:
  _454 = llvm_add_u8(_452, 169u);
  _456__PHI_TEMPORARY = _454;   /* for PHI node */
  goto _490;

_491:
  _455 = llvm_select_u8((((uint8_t)(llvm_add_u8(_452, 185u))) < ((uint8_t)((uint8_t)-6))), -1, (llvm_add_u8(_452, -55)));
  _456__PHI_TEMPORARY = _455;   /* for PHI node */
  goto _490;

_490:
  _456 = _456__PHI_TEMPORARY;
  if ((_456 == ((uint8_t)-1))) {
    goto _485;
  } else {
    goto _493;
  }

_493:
  _457 = llvm_add_u32((_447 << 4), (((uint32_t)(uint8_t)_456)));
  _447__PHI_TEMPORARY = _457;   /* for PHI node */
  _448__PHI_TEMPORARY = _450;   /* for PHI node */
  _449__PHI_TEMPORARY = _451;   /* for PHI node */
  goto _484;

  } while (1); /* end of syntactic loop '' */
_485:
  _458 = llvm_select_bool((((int64_t)_450) > ((int64_t)UINT64_C(1))), (((uint32_t)_447) < ((uint32_t)1114112u)), 0);
  _459__PHI_TEMPORARY = _458;   /* for PHI node */
  _460__PHI_TEMPORARY = _449;   /* for PHI node */
  goto _479;

_479:
  _459 = _459__PHI_TEMPORARY;
  _460 = _460__PHI_TEMPORARY;
  _461 = llvm_select_u64(_459, _460, (llvm_neg_u64(_460)));
  _462 = ((uint32_t)_461);
  if ((((uint64_t)(llvm_add_u64(_461, INT64_C(-2147483648)))) < ((uint64_t)UINT64_C(18446744069414584320)))) {
    goto _494;
  } else {
    _433__PHI_TEMPORARY = _462;   /* for PHI node */
    goto _464;
  }

_494:
  _463 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)256)])));
  julia_throw_inexacterror_10(_425, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _463, _461);
  __builtin_unreachable();

}


static uint32_t julia_var_identifier_15(void* _495, void* _496, int64_t _497) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _498 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _499;
  void* _500;
  struct l_array_4_uint64_t _501;    /* Address-exposed local */
  struct l_array_4_uint64_t _502;    /* Address-exposed local */
  struct l_array_4_uint64_t _503;    /* Address-exposed local */
  struct l_array_4_uint64_t _504;    /* Address-exposed local */
  void* _505;
  void* _506;
  void* _507;
  uint16_t _508;
  uint64_t _509;
  uint16_t _510;
  uint64_t _511;
  uint16_t _512;
  void* _513;
  void* _513__PHI_TEMPORARY;
  uint16_t _514;
  uint64_t _515;
  uint64_t _516;
  uint32_t _517;
  void* _518;
  uint32_t _519;
  uint32_t _519__PHI_TEMPORARY;
  void* _520;

  _499 = memset((&_498), 0, 24);
  *((uint64_t*)&_498) = 4;
  _500 = *(void**)_495;
  *(void**)(((&((uint8_t*)(&_498))[((int64_t)8)]))) = _500;
  *(void**)_495 = (&_498);
  _505 = *(void**)(((&((uint8_t*)_495)[((int64_t)16)])));
  _506 = jsk_ijl_gc_small_alloc(_505, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])))));
  *(void**)(((&((uint8_t*)_506)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])));
  *(void**)_506 = _496;
  *(uint64_t*)(((&((uint8_t*)_506)[((int64_t)8)]))) = _497;
  *(uint64_t*)(((&((uint8_t*)_506)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_498))[((int64_t)16)]))) = _506;
  _507 = julia_Lexer_7(_495, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _506);
  *(void**)(((&((uint8_t*)(&_498))[((int64_t)16)]))) = _507;
  julia_next_token_8((&_501), _495, _507, 1);
  _508 = *((uint16_t*)&_501);
  _509 = *(uint64_t*)(((&((uint8_t*)(&_501))[((int64_t)16)])));
  if ((llvm_select_bool((_508 != ((uint16_t)42)), 1, (_509 != UINT64_C(2))))) {
    _519__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _521;
  } else {
    goto _522;
  }

_522:
  julia_next_token_8((&_502), _495, _507, 1);
  _510 = *((uint16_t*)&_502);
  _511 = *(uint64_t*)(((&((uint8_t*)(&_502))[((int64_t)8)])));
  if ((llvm_select_bool((_510 != ((uint16_t)62)), 1, (_511 != UINT64_C(3))))) {
    _519__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _521;
  } else {
    goto _523;
  }

_523:
  julia_next_token_8((&_503), _495, _507, 1);
  _512 = *((uint16_t*)&_503);
  if ((_512 == ((uint16_t)50))) {
    goto _524;
  } else {
    _513__PHI_TEMPORARY = (&_503);   /* for PHI node */
    goto _525;
  }

_524:
  julia_next_token_8((&_504), _495, _507, 1);
  _513__PHI_TEMPORARY = (&_504);   /* for PHI node */
  goto _525;

_525:
  _513 = _513__PHI_TEMPORARY;
  _514 = *(uint16_t*)_513;
  if ((_514 == ((uint16_t)62))) {
    goto _526;
  } else {
    _519__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _521;
  }

_526:
  _515 = *(uint64_t*)(((&((uint8_t*)_513)[((int64_t)16)])));
  _516 = llvm_add_u64(_515, 1);
  _517 = ((uint32_t)_516);
  if ((((uint64_t)(llvm_add_u64(_515, INT64_C(-2147483647)))) < ((uint64_t)UINT64_C(18446744069414584320)))) {
    goto _527;
  } else {
    _519__PHI_TEMPORARY = _517;   /* for PHI node */
    goto _521;
  }

_527:
  _518 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)256)])));
  *(void**)(((&((uint8_t*)(&_498))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  julia_throw_inexacterror_10(_495, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _518, _516);
  __builtin_unreachable();

_521:
  _519 = _519__PHI_TEMPORARY;
  _520 = *(void**)(((&((uint8_t*)(&_498))[((int64_t)8)])));
  *(void**)_495 = _520;
  return _519;
}


static void julia_lex_string_chunk_16(void* _528, void* _529, void* _530) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _531 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _532;
  void* _533;
  struct l_array_4_uint64_t _534;    /* Address-exposed local */
  struct l_array_1_uint64_t _535;    /* Address-exposed local */
  struct l_array_4_uint64_t _536;    /* Address-exposed local */
  struct l_array_1_uint64_t _537;    /* Address-exposed local */
  struct l_array_4_uint64_t _538;    /* Address-exposed local */
  struct l_array_4_uint64_t _539;    /* Address-exposed local */
  struct l_array_1_uint64_t _540;    /* Address-exposed local */
  struct l_array_4_uint64_t _541;    /* Address-exposed local */
  struct l_array_4_uint64_t _542;    /* Address-exposed local */
  struct l_array_4_uint64_t _543;    /* Address-exposed local */
  struct l_array_4_uint64_t _544;    /* Address-exposed local */
  struct l_array_4_uint64_t _545;    /* Address-exposed local */
  struct l_array_4_uint64_t _546;    /* Address-exposed local */
  struct l_array_4_uint64_t _547;    /* Address-exposed local */
  struct l_array_4_uint64_t _548;    /* Address-exposed local */
  struct l_array_4_uint64_t _549;    /* Address-exposed local */
  struct l_array_1_uint64_t _550;    /* Address-exposed local */
  void* _551;
  void* _552;
  uint64_t _553;
  void* _554;
  void* _555;
  uint8_t _556;
  uint8_t _557;
  uint32_t _558;
  uint64_t _559;
  void* _560;
  void* _561;
  uint64_t _562;
  void* _563;
  uint64_t _564;
  void* _565;
  uint8_t _566;
  uint8_t _567;
  uint8_t _568;
  uint32_t _569;
  uint64_t _570;
  uint64_t _570__PHI_TEMPORARY;
  uint32_t _571;
  uint32_t _571__PHI_TEMPORARY;
  uint64_t _572;
  uint64_t _573;
  void* _574;
  uint8_t _575;
  uint32_t _576;
  uint64_t _577;
  uint64_t _578;
  uint32_t _579;
  uint64_t _580;
  uint32_t _581;
  uint32_t _581__PHI_TEMPORARY;
  void* _582;
  uint64_t _583;
  void* _584;
  uint64_t _585;
  uint64_t _586;
  uint64_t _587;
  void* _588;
  uint64_t _589;
  void* _590;
  uint64_t _591;
  void* _592;
  uint64_t _593;
  void* _594;
  uint64_t _595;
  uint64_t _596;
  uint32_t _597;
  void* _598;
  uint64_t _599;
  void* _600;
  void* _601;
  void* _602;
  void* _602__PHI_TEMPORARY;
  void* _603;
  void* _604;
  void* _605;
  uint64_t _606;
  void* _607;
  void* _608;
  void* _609;
  uint64_t _610;
  void* _611;
  uint64_t _612;
  uint32_t _613;
  void* _614;
  uint16_t _615;
  uint64_t _616;
  uint64_t _617;
  uint32_t _618;
  void* _619;
  void* _620;
  uint64_t _621;
  void* _622;
  uint64_t _623;
  void* _624;
  uint8_t _625;
  uint8_t _626;
  uint8_t _627;
  uint32_t _628;
  uint64_t _629;
  uint64_t _629__PHI_TEMPORARY;
  uint32_t _630;
  uint32_t _630__PHI_TEMPORARY;
  uint64_t _631;
  uint64_t _632;
  void* _633;
  uint8_t _634;
  uint32_t _635;
  uint64_t _636;
  uint64_t _637;
  uint32_t _638;
  uint64_t _639;
  uint32_t _640;
  uint32_t _640__PHI_TEMPORARY;
  uint64_t _641;
  uint64_t _642;
  uint64_t _643;
  uint64_t _644;
  void* _645;
  uint64_t _646;
  void* _647;
  uint64_t _648;
  void* _649;
  uint64_t _650;
  void* _651;
  uint64_t _652;
  void* _653;
  uint64_t _654;
  void* _655;
  void* _656;
  uint32_t _657;
  uint64_t _658;
  uint32_t _659;
  uint32_t _660;
  uint64_t _661;
  bool _662;
  bool _663;
  uint32_t _664;
  uint32_t _665;
  uint32_t _666;
  uint32_t _667;
  uint32_t _667__PHI_TEMPORARY;
  uint32_t _668;
  void* _669;
  void* _670;
  uint64_t _671;
  void* _672;
  uint64_t _673;
  void* _674;
  uint8_t _675;
  uint8_t _676;
  uint8_t _677;
  uint32_t _678;
  uint64_t _679;
  uint64_t _679__PHI_TEMPORARY;
  uint32_t _680;
  uint32_t _680__PHI_TEMPORARY;
  uint64_t _681;
  uint64_t _682;
  void* _683;
  uint8_t _684;
  uint32_t _685;
  uint64_t _686;
  uint64_t _687;
  uint32_t _688;
  uint64_t _689;
  uint32_t _690;
  uint32_t _690__PHI_TEMPORARY;
  uint64_t _691;
  uint64_t _692;
  uint64_t _693;
  uint64_t _694;
  void* _695;
  uint64_t _696;
  void* _697;
  uint64_t _698;
  void* _699;
  uint64_t _700;
  void* _701;
  uint64_t _702;
  uint64_t _703;
  uint8_t _704;
  bool _705;
  uint8_t _706;
  bool _707;
  bool _708;
  bool _708__PHI_TEMPORARY;
  void* _709;
  void* _710;
  uint64_t _711;
  void* _712;
  uint64_t _713;
  void* _714;
  uint8_t _715;
  uint8_t _716;
  uint8_t _717;
  uint32_t _718;
  uint64_t _719;
  uint64_t _719__PHI_TEMPORARY;
  uint32_t _720;
  uint32_t _720__PHI_TEMPORARY;
  uint64_t _721;
  uint64_t _722;
  void* _723;
  uint8_t _724;
  uint32_t _725;
  uint64_t _726;
  uint64_t _727;
  uint32_t _728;
  uint64_t _729;
  uint32_t _730;
  uint32_t _730__PHI_TEMPORARY;
  uint64_t _731;
  uint64_t _732;
  uint64_t _733;
  uint64_t _734;
  void* _735;
  uint64_t _736;
  void* _737;
  uint64_t _738;
  void* _739;
  uint64_t _740;
  void* _741;
  uint64_t _742;
  uint32_t _743;
  uint32_t _743__PHI_TEMPORARY;
  bool _744;
  void* _745;
  void* _746;
  uint64_t _747;
  void* _748;
  uint64_t _749;
  void* _750;
  uint8_t _751;
  uint8_t _752;
  uint8_t _753;
  uint32_t _754;
  uint64_t _755;
  uint64_t _755__PHI_TEMPORARY;
  uint32_t _756;
  uint32_t _756__PHI_TEMPORARY;
  uint64_t _757;
  uint64_t _758;
  void* _759;
  uint8_t _760;
  uint32_t _761;
  uint64_t _762;
  uint64_t _763;
  uint32_t _764;
  uint64_t _765;
  uint32_t _766;
  uint32_t _766__PHI_TEMPORARY;
  uint64_t _767;
  uint64_t _768;
  uint64_t _769;
  uint64_t _770;
  void* _771;
  uint64_t _772;
  void* _773;
  uint64_t _774;
  void* _775;
  uint64_t _776;
  void* _777;
  uint64_t _778;
  uint64_t _779;
  uint32_t _780;
  void* _781;
  void* _782;
  uint64_t _783;
  void* _784;
  uint64_t _785;
  void* _786;
  uint8_t _787;
  uint8_t _788;
  uint8_t _789;
  uint32_t _790;
  uint64_t _791;
  uint64_t _791__PHI_TEMPORARY;
  uint32_t _792;
  uint32_t _792__PHI_TEMPORARY;
  uint64_t _793;
  uint64_t _794;
  void* _795;
  uint8_t _796;
  uint32_t _797;
  uint64_t _798;
  uint64_t _799;
  uint32_t _800;
  uint64_t _801;
  uint32_t _802;
  uint32_t _802__PHI_TEMPORARY;
  uint64_t _803;
  uint64_t _804;
  uint64_t _805;
  uint64_t _806;
  void* _807;
  void* _808;
  uint64_t _809;
  void* _810;
  uint64_t _811;
  void* _812;
  uint64_t _813;
  void* _814;
  uint64_t _815;
  void* _816;
  void* _817;
  uint64_t _818;
  void* _819;
  uint64_t _820;
  void* _821;
  uint8_t _822;
  uint8_t _823;
  uint8_t _824;
  uint32_t _825;
  uint64_t _826;
  uint64_t _826__PHI_TEMPORARY;
  uint32_t _827;
  uint32_t _827__PHI_TEMPORARY;
  uint64_t _828;
  uint64_t _829;
  void* _830;
  uint8_t _831;
  uint32_t _832;
  uint64_t _833;
  uint64_t _834;
  uint32_t _835;
  uint64_t _836;
  uint32_t _837;
  uint32_t _837__PHI_TEMPORARY;
  uint64_t _838;
  uint64_t _839;
  uint64_t _840;
  uint64_t _841;
  uint64_t _842;
  uint64_t _843;
  uint64_t _844;
  void* _845;
  uint64_t _846;
  uint64_t _847;
  void* _848;
  void* _849;
  uint64_t _850;
  void* _851;
  uint64_t _852;
  void* _853;
  uint8_t _854;
  uint8_t _855;
  uint8_t _856;
  uint32_t _857;
  uint64_t _858;
  uint64_t _858__PHI_TEMPORARY;
  uint32_t _859;
  uint32_t _859__PHI_TEMPORARY;
  uint64_t _860;
  uint64_t _861;
  void* _862;
  uint8_t _863;
  uint32_t _864;
  uint64_t _865;
  uint64_t _866;
  uint32_t _867;
  uint64_t _868;
  uint32_t _869;
  uint32_t _869__PHI_TEMPORARY;
  uint64_t _870;
  uint64_t _871;
  uint64_t _872;
  uint64_t _873;
  uint64_t _874;
  uint64_t _875;
  uint64_t _876;
  void* _877;
  uint64_t _878;
  uint64_t _879;
  void* _880;
  void* _881;
  uint64_t _882;
  void* _883;
  uint64_t _884;
  void* _885;
  uint8_t _886;
  uint8_t _887;
  uint8_t _888;
  uint32_t _889;
  uint64_t _890;
  uint64_t _890__PHI_TEMPORARY;
  uint32_t _891;
  uint32_t _891__PHI_TEMPORARY;
  uint64_t _892;
  uint64_t _893;
  void* _894;
  uint8_t _895;
  uint32_t _896;
  uint64_t _897;
  uint64_t _898;
  uint32_t _899;
  uint64_t _900;
  bool _901;
  uint64_t _902;
  uint64_t _903;
  uint64_t _904;
  uint64_t _904__PHI_TEMPORARY;
  uint16_t _905;
  uint64_t _906;
  void* _907;
  void* _908;
  uint64_t _909;
  void* _910;
  uint64_t _911;
  void* _912;
  uint8_t _913;
  uint8_t _914;
  uint8_t _915;
  uint32_t _916;
  uint64_t _917;
  uint64_t _917__PHI_TEMPORARY;
  uint32_t _918;
  uint32_t _918__PHI_TEMPORARY;
  uint64_t _919;
  uint64_t _920;
  void* _921;
  uint8_t _922;
  uint32_t _923;
  uint64_t _924;
  uint64_t _925;
  uint32_t _926;
  uint64_t _927;
  uint32_t _928;
  uint32_t _928__PHI_TEMPORARY;
  uint64_t _929;
  uint64_t _930;
  uint64_t _931;
  uint64_t _932;
  void* _933;
  uint64_t _934;
  void* _935;
  uint64_t _936;
  void* _937;
  uint64_t _938;
  void* _939;
  uint64_t _940;
  void* _941;
  void* _942;
  uint64_t _943;
  uint64_t _944;
  uint64_t _945;
  uint64_t _945__PHI_TEMPORARY;
  void* _946;
  void* _947;
  uint64_t _948;
  void* _949;
  uint64_t _950;
  void* _951;
  uint8_t _952;
  uint8_t _953;
  uint8_t _954;
  uint32_t _955;
  uint64_t _956;
  uint64_t _956__PHI_TEMPORARY;
  uint32_t _957;
  uint32_t _957__PHI_TEMPORARY;
  uint64_t _958;
  uint64_t _959;
  void* _960;
  uint8_t _961;
  uint32_t _962;
  uint64_t _963;
  uint64_t _964;
  uint32_t _965;
  uint64_t _966;
  uint32_t _967;
  uint32_t _967__PHI_TEMPORARY;
  uint64_t _968;
  uint64_t _969;
  uint64_t _970;
  uint64_t _971;
  void* _972;
  void* _973;
  uint64_t _974;
  void* _975;
  uint64_t _976;
  void* _977;
  uint64_t _978;
  void* _979;
  uint64_t _980;
  void* _981;
  void* _982;
  uint64_t _983;
  void* _984;
  uint64_t _985;
  void* _986;
  uint8_t _987;
  uint8_t _988;
  uint8_t _989;
  uint32_t _990;
  uint64_t _991;
  uint64_t _991__PHI_TEMPORARY;
  uint32_t _992;
  uint32_t _992__PHI_TEMPORARY;
  uint64_t _993;
  uint64_t _994;
  void* _995;
  uint8_t _996;
  uint32_t _997;
  uint64_t _998;
  uint64_t _999;
  uint32_t _1000;
  uint64_t _1001;
  uint32_t _1002;
  uint32_t _1002__PHI_TEMPORARY;
  uint64_t _1003;
  uint64_t _1004;
  uint64_t _1005;
  uint64_t _1006;
  uint64_t _1007;
  uint64_t _1008;
  uint64_t _1009;
  void* _1010;
  uint64_t _1011;
  void* _1012;
  void* _1013;
  uint64_t _1014;
  void* _1015;
  uint64_t _1016;
  void* _1017;
  uint8_t _1018;
  uint8_t _1019;
  uint8_t _1020;
  uint32_t _1021;
  uint64_t _1022;
  uint64_t _1022__PHI_TEMPORARY;
  uint32_t _1023;
  uint32_t _1023__PHI_TEMPORARY;
  uint64_t _1024;
  uint64_t _1025;
  void* _1026;
  uint8_t _1027;
  uint32_t _1028;
  uint64_t _1029;
  uint64_t _1030;
  uint32_t _1031;
  uint64_t _1032;
  uint32_t _1033;
  uint32_t _1033__PHI_TEMPORARY;
  uint64_t _1034;
  uint64_t _1035;
  uint64_t _1036;
  uint64_t _1037;
  uint64_t _1038;
  uint64_t _1039;
  uint64_t _1040;
  void* _1041;
  uint64_t _1042;
  bool _1043;
  bool _1043__PHI_TEMPORARY;
  uint64_t _1044;
  uint64_t _1044__PHI_TEMPORARY;
  uint64_t _1045;
  uint64_t _1045__PHI_TEMPORARY;
  uint64_t _1046;
  uint64_t _1047;
  uint32_t _1048;
  bool _1049;
  uint64_t _1050;
  uint32_t _1051;
  uint32_t _1052;
  uint32_t _1052__PHI_TEMPORARY;
  void* _1053;
  void* _1054;
  uint64_t _1055;
  void* _1056;
  uint64_t _1057;
  void* _1058;
  uint8_t _1059;
  uint8_t _1060;
  uint8_t _1061;
  uint32_t _1062;
  uint64_t _1063;
  uint64_t _1063__PHI_TEMPORARY;
  uint32_t _1064;
  uint32_t _1064__PHI_TEMPORARY;
  uint64_t _1065;
  uint64_t _1066;
  void* _1067;
  uint8_t _1068;
  uint32_t _1069;
  uint64_t _1070;
  uint64_t _1071;
  uint32_t _1072;
  uint64_t _1073;
  uint32_t _1074;
  uint32_t _1074__PHI_TEMPORARY;
  uint64_t _1075;
  uint64_t _1076;
  uint64_t _1077;
  uint64_t _1078;
  void* _1079;
  void* _1080;
  uint64_t _1081;
  void* _1082;
  uint64_t _1083;
  void* _1084;
  uint64_t _1085;
  void* _1086;
  uint64_t _1087;
  uint64_t _1088;
  uint64_t _1089;
  uint64_t _1090;
  void* _1091;
  void* _1092;
  uint64_t _1093;
  void* _1094;
  uint64_t _1095;
  void* _1096;
  uint8_t _1097;
  uint8_t _1098;
  uint8_t _1099;
  uint32_t _1100;
  uint64_t _1101;
  uint64_t _1101__PHI_TEMPORARY;
  uint32_t _1102;
  uint32_t _1102__PHI_TEMPORARY;
  uint64_t _1103;
  uint64_t _1104;
  void* _1105;
  uint8_t _1106;
  uint32_t _1107;
  uint64_t _1108;
  uint64_t _1109;
  uint32_t _1110;
  uint64_t _1111;
  uint32_t _1112;
  uint32_t _1112__PHI_TEMPORARY;
  uint64_t _1113;
  uint64_t _1114;
  uint64_t _1115;
  uint64_t _1116;
  uint64_t _1117;
  uint64_t _1118;
  uint64_t _1119;
  void* _1120;
  uint64_t _1121;
  void* _1122;
  void* _1123;
  uint64_t _1124;
  void* _1125;
  uint64_t _1126;
  void* _1127;
  uint8_t _1128;
  uint8_t _1129;
  uint8_t _1130;
  uint32_t _1131;
  uint64_t _1132;
  uint64_t _1132__PHI_TEMPORARY;
  uint32_t _1133;
  uint32_t _1133__PHI_TEMPORARY;
  uint64_t _1134;
  uint64_t _1135;
  void* _1136;
  uint8_t _1137;
  uint32_t _1138;
  uint64_t _1139;
  uint64_t _1140;
  uint32_t _1141;
  uint64_t _1142;
  uint32_t _1143;
  uint32_t _1143__PHI_TEMPORARY;
  uint64_t _1144;
  uint64_t _1145;
  uint64_t _1146;
  uint64_t _1147;
  void* _1148;
  void* _1149;
  uint64_t _1150;
  void* _1151;
  uint64_t _1152;
  void* _1153;
  uint64_t _1154;
  void* _1155;
  uint64_t _1156;
  uint64_t _1157;
  uint32_t _1158;
  uint64_t _1159;
  uint64_t _1159__PHI_TEMPORARY;
  uint64_t _1160;
  uint64_t _1161;
  void* _1162;
  void* _1163;
  uint64_t _1164;
  void* _1165;
  uint64_t _1166;
  void* _1167;
  uint8_t _1168;
  uint8_t _1169;
  uint8_t _1170;
  uint32_t _1171;
  uint64_t _1172;
  uint64_t _1172__PHI_TEMPORARY;
  uint32_t _1173;
  uint32_t _1173__PHI_TEMPORARY;
  uint64_t _1174;
  uint64_t _1175;
  void* _1176;
  uint8_t _1177;
  uint32_t _1178;
  uint64_t _1179;
  uint64_t _1180;
  uint32_t _1181;
  uint64_t _1182;
  uint32_t _1183;
  uint32_t _1183__PHI_TEMPORARY;
  uint64_t _1184;
  uint64_t _1185;
  uint64_t _1186;
  uint64_t _1187;
  uint64_t _1188;
  uint64_t _1189;
  uint64_t _1190;
  void* _1191;
  uint64_t _1192;
  uint64_t _1193;
  void* _1194;
  void* _1195;
  uint64_t _1196;
  void* _1197;
  uint64_t _1198;
  void* _1199;
  uint8_t _1200;
  uint8_t _1201;
  uint8_t _1202;
  uint32_t _1203;
  uint64_t _1204;
  uint64_t _1204__PHI_TEMPORARY;
  uint32_t _1205;
  uint32_t _1205__PHI_TEMPORARY;
  uint64_t _1206;
  uint64_t _1207;
  void* _1208;
  uint8_t _1209;
  uint32_t _1210;
  uint64_t _1211;
  uint64_t _1212;
  uint32_t _1213;
  uint64_t _1214;
  uint32_t _1215;
  uint32_t _1215__PHI_TEMPORARY;
  uint64_t _1216;
  uint64_t _1217;
  uint64_t _1218;
  uint64_t _1219;
  uint64_t _1220;
  uint64_t _1221;
  uint64_t _1222;
  void* _1223;
  uint64_t _1224;
  uint64_t _1225;
  uint64_t _1226;
  uint64_t _1227;
  uint64_t _1228;
  uint64_t _1229;
  uint64_t _1229__PHI_TEMPORARY;
  uint64_t _1230;
  uint64_t _1230__PHI_TEMPORARY;
  uint32_t _1231;
  uint32_t _1232;
  uint32_t _1233;
  bool _1234;
  bool _1235;
  bool _1235__PHI_TEMPORARY;
  uint64_t _1236;
  uint64_t _1236__PHI_TEMPORARY;
  uint64_t _1237;
  uint64_t _1237__PHI_TEMPORARY;
  uint64_t _1238;
  uint64_t _1239;
  uint32_t _1240;
  bool _1241;
  void* _1242;
  void* _1243;
  uint64_t _1244;
  void* _1245;
  uint64_t _1246;
  void* _1247;
  uint8_t _1248;
  uint8_t _1249;
  uint8_t _1250;
  uint32_t _1251;
  uint64_t _1252;
  uint64_t _1252__PHI_TEMPORARY;
  uint32_t _1253;
  uint32_t _1253__PHI_TEMPORARY;
  uint64_t _1254;
  uint64_t _1255;
  void* _1256;
  uint8_t _1257;
  uint32_t _1258;
  uint64_t _1259;
  uint64_t _1260;
  uint32_t _1261;
  uint64_t _1262;
  uint32_t _1263;
  uint32_t _1263__PHI_TEMPORARY;
  uint64_t _1264;
  uint64_t _1265;
  uint64_t _1266;
  uint64_t _1267;
  void* _1268;
  void* _1269;
  uint64_t _1270;
  void* _1271;
  uint64_t _1272;
  void* _1273;
  uint64_t _1274;
  void* _1275;
  uint64_t _1276;
  uint64_t _1277;
  uint64_t _1278;
  uint64_t _1279;
  void* _1280;
  void* _1281;
  uint64_t _1282;
  void* _1283;
  uint64_t _1284;
  void* _1285;
  uint8_t _1286;
  uint8_t _1287;
  uint8_t _1288;
  uint32_t _1289;
  uint64_t _1290;
  uint64_t _1290__PHI_TEMPORARY;
  uint32_t _1291;
  uint32_t _1291__PHI_TEMPORARY;
  uint64_t _1292;
  uint64_t _1293;
  void* _1294;
  uint8_t _1295;
  uint32_t _1296;
  uint64_t _1297;
  uint64_t _1298;
  uint32_t _1299;
  uint64_t _1300;
  uint32_t _1301;
  uint32_t _1301__PHI_TEMPORARY;
  uint64_t _1302;
  uint64_t _1303;
  uint64_t _1304;
  uint64_t _1305;
  uint64_t _1306;
  uint64_t _1307;
  uint64_t _1308;
  void* _1309;
  uint64_t _1310;
  uint64_t _1311;
  uint64_t _1312;
  uint64_t _1313;
  uint64_t _1313__PHI_TEMPORARY;
  uint64_t _1314;
  void* _1315;
  void* _1316;
  uint64_t _1317;
  void* _1318;
  uint64_t _1319;
  void* _1320;
  uint8_t _1321;
  uint8_t _1322;
  uint8_t _1323;
  uint32_t _1324;
  uint64_t _1325;
  uint64_t _1325__PHI_TEMPORARY;
  uint32_t _1326;
  uint32_t _1326__PHI_TEMPORARY;
  uint64_t _1327;
  uint64_t _1328;
  void* _1329;
  uint8_t _1330;
  uint32_t _1331;
  uint64_t _1332;
  uint64_t _1333;
  uint32_t _1334;
  uint64_t _1335;
  uint32_t _1336;
  uint32_t _1336__PHI_TEMPORARY;
  uint64_t _1337;
  uint64_t _1338;
  uint64_t _1339;
  uint64_t _1340;
  void* _1341;
  void* _1342;
  uint64_t _1343;
  void* _1344;
  uint64_t _1345;
  void* _1346;
  uint64_t _1347;
  void* _1348;
  uint64_t _1349;
  uint64_t _1350;
  uint32_t _1351;
  void* _1352;
  void* _1353;
  uint64_t _1354;
  void* _1355;
  uint64_t _1356;
  void* _1357;
  uint8_t _1358;
  uint8_t _1359;
  uint8_t _1360;
  uint32_t _1361;
  uint64_t _1362;
  uint64_t _1362__PHI_TEMPORARY;
  uint32_t _1363;
  uint32_t _1363__PHI_TEMPORARY;
  uint64_t _1364;
  uint64_t _1365;
  void* _1366;
  uint8_t _1367;
  uint32_t _1368;
  uint64_t _1369;
  uint64_t _1370;
  uint32_t _1371;
  uint64_t _1372;
  uint32_t _1373;
  uint32_t _1373__PHI_TEMPORARY;
  uint64_t _1374;
  uint64_t _1375;
  uint64_t _1376;
  uint64_t _1377;
  uint64_t _1378;
  uint64_t _1379;
  uint64_t _1380;
  void* _1381;
  uint64_t _1382;
  uint64_t _1383;
  uint32_t _1384;
  uint32_t _1385;
  uint32_t _1385__PHI_TEMPORARY;
  uint64_t _1386;
  uint64_t _1387;
  uint64_t _1388;
  uint64_t _1389;
  uint64_t _1390;
  uint64_t _1390__PHI_TEMPORARY;
  uint64_t _1391;
  uint64_t _1391__PHI_TEMPORARY;
  uint32_t _1392;
  uint32_t _1393;
  uint32_t _1394;
  bool _1395;
  bool _1396;
  bool _1396__PHI_TEMPORARY;
  uint64_t _1397;
  uint64_t _1397__PHI_TEMPORARY;
  uint64_t _1398;
  uint64_t _1398__PHI_TEMPORARY;
  struct l_array_1_void_KC_ _1399;
  void* _1400;
  void* _1401;
  uint16_t _1402;
  uint16_t _1402__PHI_TEMPORARY;

  _532 = memset((&_531), 0, 24);
  *((uint64_t*)&_531) = 4;
  _533 = *(void**)_529;
  *(void**)(((&((uint8_t*)(&_531))[((int64_t)8)]))) = _533;
  *(void**)_529 = (&_531);
  _551 = ((&((uint8_t*)_530)[((int64_t)24)]));
  _552 = *(void**)_551;
  _553 = *(uint64_t*)(((&((uint8_t*)_552)[((int64_t)16)])));
  if ((_553 == UINT64_C(0))) {
    goto _1403;
  } else {
    goto _1404;
  }

_1403:
  *((uint64_t*)&_550) = _553;
  *(void**)(((&((uint8_t*)(&_531))[((int64_t)16)]))) = _552;
  julia_throw_boundserror_19(_529, _552, (&_550));
  __builtin_unreachable();

_1404:
  _554 = *(void**)_552;
  _555 = ((&((uint8_t*)_554)[((int64_t)(_553 << 4))]));
  _556 = *(uint8_t*)(((&((uint8_t*)_555)[((int64_t)-16)])));
  _557 = *(uint8_t*)(((&((uint8_t*)_555)[((int64_t)-15)])));
  _558 = *(uint32_t*)(((&((uint8_t*)_555)[((int64_t)-12)])));
  _559 = *(uint64_t*)(((&((uint8_t*)_555)[((int64_t)-8)])));
  if ((((int64_t)_559) < ((int64_t)UINT64_C(1)))) {
    goto _1405;
  } else {
    goto _1406;
  }

_1406:
  _560 = *(void**)_530;
  _561 = ((&((uint8_t*)_560)[((int64_t)16)]));
  _562 = *(uint64_t*)_561;
  _563 = ((&((uint8_t*)_560)[((int64_t)8)]));
  _564 = *(uint64_t*)_563;
  if ((((int64_t)_564) > ((int64_t)_562))) {
    goto _1407;
  } else {
    _581__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1408;
  }

_1407:
  _565 = *(void**)_560;
  _566 = *(uint8_t*)(((&((uint8_t*)_565)[((int64_t)_562)])));
  *(uint64_t*)_561 = (llvm_add_u64(_562, 1));
  _567 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_566)), 0);
  _568 = llvm_sub_u8(32, (llvm_shl_u8(_567, 3)));
  _569 = (((uint32_t)(uint8_t)_566)) << 24;
  if ((((uint8_t)_568) > ((uint8_t)((uint8_t)16)))) {
    _581__PHI_TEMPORARY = _569;   /* for PHI node */
    goto _1408;
  } else {
    _570__PHI_TEMPORARY = 16;   /* for PHI node */
    _571__PHI_TEMPORARY = _569;   /* for PHI node */
    goto _1409;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1409:
  _570 = _570__PHI_TEMPORARY;
  _571 = _571__PHI_TEMPORARY;
  if (((((int64_t)_570) < ((int64_t)UINT64_C(0))) | (((uint64_t)_570) < ((uint64_t)(((uint64_t)(uint8_t)_568)))))) {
    _581__PHI_TEMPORARY = _571;   /* for PHI node */
    goto _1408;
  } else {
    goto _1410;
  }

_1410:
  _572 = *(uint64_t*)_561;
  _573 = *(uint64_t*)_563;
  if ((((int64_t)_573) > ((int64_t)_572))) {
    goto _1411;
  } else {
    _581__PHI_TEMPORARY = _571;   /* for PHI node */
    goto _1408;
  }

_1411:
  _574 = *(void**)_560;
  _575 = *(uint8_t*)(((&((uint8_t*)_574)[((int64_t)_572)])));
  if ((((int8_t)_575) > ((int8_t)((uint8_t)-65)))) {
    _581__PHI_TEMPORARY = _571;   /* for PHI node */
    goto _1408;
  } else {
    goto _1412;
  }

_1412:
  _576 = llvm_select_u32((((int64_t)_572) < ((int64_t)_573)), (((uint32_t)(uint8_t)_575)), 0);
  _577 = *(uint64_t*)_561;
  *(uint64_t*)_561 = (llvm_add_u64(_577, 1));
  _578 = llvm_neg_u64(_570);
  _579 = _571 | (llvm_select_u32((((int64_t)_570) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_578) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_576, (((uint32_t)_578)))))), (llvm_select_u32((((uint64_t)_570) > ((uint64_t)UINT64_C(31))), 0, (_576 << (((uint32_t)_570)))))));
  _580 = llvm_add_u64(_570, -8);
  _570__PHI_TEMPORARY = _580;   /* for PHI node */
  _571__PHI_TEMPORARY = _579;   /* for PHI node */
  goto _1409;

  } while (1); /* end of syntactic loop '' */
_1408:
  _581 = _581__PHI_TEMPORARY;
  _582 = ((&((uint8_t*)_530)[((int64_t)32)]));
  _583 = *(uint64_t*)_582;
  _584 = ((&((uint8_t*)_530)[((int64_t)40)]));
  _585 = *(uint64_t*)_584;
  _586 = jsyn_cbe_fshl_i64(_585, _583, 32);
  _587 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_581)), _585, 32);
  *(uint64_t*)_582 = _586;
  *(uint64_t*)_584 = _587;
  _588 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _589 = *(uint64_t*)_588;
  _590 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _591 = *(uint64_t*)_590;
  _592 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _593 = *(uint64_t*)_592;
  _594 = *(void**)_530;
  _595 = *(uint64_t*)(((&((uint8_t*)_594)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_530)[((int64_t)48)]))) = _589;
  *(uint64_t*)_588 = _591;
  *(uint64_t*)_590 = _593;
  *(uint64_t*)_592 = _595;
  _596 = *(uint64_t*)_582;
  _597 = ((uint32_t)_596);
  switch (_597) {
  default:
    goto _1413;
  case 671088640u:
    goto _1414;
  case 687865856u:
    goto _1415;
  }

_1414:
  _598 = *(void**)_551;
  _599 = *(uint64_t*)(((&((uint8_t*)_598)[((int64_t)16)])));
  if ((_599 == UINT64_C(0))) {
    goto _1416;
  } else {
    goto _1417;
  }

_1416:
  *((uint64_t*)&_535) = _599;
  *(void**)(((&((uint8_t*)(&_531))[((int64_t)16)]))) = _598;
  julia_throw_boundserror_19(_529, _598, (&_535));
  __builtin_unreachable();

_1417:
  _600 = *(void**)_598;
  _601 = ((&((uint8_t*)_600)[((int64_t)(_599 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_601)[((int64_t)-16)]))) = _556;
  *(uint8_t*)(((&((uint8_t*)_601)[((int64_t)-15)]))) = _557;
  *(uint32_t*)(((&((uint8_t*)_601)[((int64_t)-12)]))) = _558;
  *(uint64_t*)(((&((uint8_t*)_601)[((int64_t)-8)]))) = (llvm_add_u64(_559, 1));
  julia_emit_20((&_534), _529, _530, 60, 1);
  _602__PHI_TEMPORARY = (&_534);   /* for PHI node */
  goto _1418;

_1418:
  _602 = _602__PHI_TEMPORARY;
  _603 = memcpy(_528, _602, 32);
  _604 = *(void**)(((&((uint8_t*)(&_531))[((int64_t)8)])));
  *(void**)_529 = _604;
  return;
_1415:
  _605 = *(void**)_551;
  _606 = *(uint64_t*)(((&((uint8_t*)_605)[((int64_t)16)])));
  if ((_606 == UINT64_C(0))) {
    goto _1419;
  } else {
    goto _1420;
  }

_1419:
  *((uint64_t*)&_537) = _606;
  *(void**)(((&((uint8_t*)(&_531))[((int64_t)16)]))) = _605;
  julia_throw_boundserror_19(_529, _605, (&_537));
  __builtin_unreachable();

_1420:
  _607 = *(void**)_605;
  _608 = ((&((uint8_t*)_607)[((int64_t)(_606 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_608)[((int64_t)-16)]))) = _556;
  *(uint8_t*)(((&((uint8_t*)_608)[((int64_t)-15)]))) = _557;
  *(uint32_t*)(((&((uint8_t*)_608)[((int64_t)-12)]))) = _558;
  *(uint64_t*)(((&((uint8_t*)_608)[((int64_t)-8)]))) = (llvm_add_u64(_559, -1));
  julia_emit_20((&_536), _529, _530, 61, 1);
  _602__PHI_TEMPORARY = (&_536);   /* for PHI node */
  goto _1418;

_1413:
  julia__next_token_17((&_538), _529, _530, _597);
  _602__PHI_TEMPORARY = (&_538);   /* for PHI node */
  goto _1418;

_1405:
  _609 = ((&((uint8_t*)_530)[((int64_t)32)]));
  _610 = *(uint64_t*)_609;
  _611 = ((&((uint8_t*)_530)[((int64_t)40)]));
  _612 = llvm_lshr_u64(_610, 32);
  _613 = ((uint32_t)_612);
  _614 = ((&((uint8_t*)_530)[((int64_t)16)]));
  _615 = *(uint16_t*)_614;
  switch (_615) {
  default:
    _743__PHI_TEMPORARY = _613;   /* for PHI node */
    goto _1421;
  case ((uint16_t)534):
    goto _1422;
  case ((uint16_t)3):
    goto _1423;
  }

_1422:
  _616 = *(uint64_t*)_609;
  _617 = llvm_lshr_u64(_616, 32);
  _618 = ((uint32_t)_617);
  switch (_618) {
  default:
    goto _1424;
  case 671088640u:
    goto _1425;
  case 4294967295u:
    _743__PHI_TEMPORARY = _618;   /* for PHI node */
    goto _1421;
  }

_1425:
  _619 = *(void**)_530;
  _620 = ((&((uint8_t*)_619)[((int64_t)16)]));
  _621 = *(uint64_t*)_620;
  _622 = ((&((uint8_t*)_619)[((int64_t)8)]));
  _623 = *(uint64_t*)_622;
  if ((((int64_t)_623) > ((int64_t)_621))) {
    goto _1426;
  } else {
    _640__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1427;
  }

_1426:
  _624 = *(void**)_619;
  _625 = *(uint8_t*)(((&((uint8_t*)_624)[((int64_t)_621)])));
  *(uint64_t*)_620 = (llvm_add_u64(_621, 1));
  _626 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_625)), 0);
  _627 = llvm_sub_u8(32, (llvm_shl_u8(_626, 3)));
  _628 = (((uint32_t)(uint8_t)_625)) << 24;
  if ((((uint8_t)_627) > ((uint8_t)((uint8_t)16)))) {
    _640__PHI_TEMPORARY = _628;   /* for PHI node */
    goto _1427;
  } else {
    _629__PHI_TEMPORARY = 16;   /* for PHI node */
    _630__PHI_TEMPORARY = _628;   /* for PHI node */
    goto _1428;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1428:
  _629 = _629__PHI_TEMPORARY;
  _630 = _630__PHI_TEMPORARY;
  if (((((int64_t)_629) < ((int64_t)UINT64_C(0))) | (((uint64_t)_629) < ((uint64_t)(((uint64_t)(uint8_t)_627)))))) {
    _640__PHI_TEMPORARY = _630;   /* for PHI node */
    goto _1427;
  } else {
    goto _1429;
  }

_1429:
  _631 = *(uint64_t*)_620;
  _632 = *(uint64_t*)_622;
  if ((((int64_t)_632) > ((int64_t)_631))) {
    goto _1430;
  } else {
    _640__PHI_TEMPORARY = _630;   /* for PHI node */
    goto _1427;
  }

_1430:
  _633 = *(void**)_619;
  _634 = *(uint8_t*)(((&((uint8_t*)_633)[((int64_t)_631)])));
  if ((((int8_t)_634) > ((int8_t)((uint8_t)-65)))) {
    _640__PHI_TEMPORARY = _630;   /* for PHI node */
    goto _1427;
  } else {
    goto _1431;
  }

_1431:
  _635 = llvm_select_u32((((int64_t)_631) < ((int64_t)_632)), (((uint32_t)(uint8_t)_634)), 0);
  _636 = *(uint64_t*)_620;
  *(uint64_t*)_620 = (llvm_add_u64(_636, 1));
  _637 = llvm_neg_u64(_629);
  _638 = _630 | (llvm_select_u32((((int64_t)_629) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_637) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_635, (((uint32_t)_637)))))), (llvm_select_u32((((uint64_t)_629) > ((uint64_t)UINT64_C(31))), 0, (_635 << (((uint32_t)_629)))))));
  _639 = llvm_add_u64(_629, -8);
  _629__PHI_TEMPORARY = _639;   /* for PHI node */
  _630__PHI_TEMPORARY = _638;   /* for PHI node */
  goto _1428;

  } while (1); /* end of syntactic loop '' */
_1427:
  _640 = _640__PHI_TEMPORARY;
  _641 = *(uint64_t*)_609;
  _642 = *(uint64_t*)_611;
  _643 = jsyn_cbe_fshl_i64(_642, _641, 32);
  _644 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_640)), _642, 32);
  *(uint64_t*)_609 = _643;
  *(uint64_t*)_611 = _644;
  _645 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _646 = *(uint64_t*)_645;
  _647 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _648 = *(uint64_t*)_647;
  _649 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _650 = *(uint64_t*)_649;
  _651 = *(void**)_530;
  _652 = *(uint64_t*)(((&((uint8_t*)_651)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_530)[((int64_t)48)]))) = _646;
  *(uint64_t*)_645 = _648;
  *(uint64_t*)_647 = _650;
  *(uint64_t*)_649 = _652;
  _653 = *(void**)_551;
  _654 = *(uint64_t*)(((&((uint8_t*)_653)[((int64_t)16)])));
  if ((_654 == UINT64_C(0))) {
    goto _1432;
  } else {
    goto _1433;
  }

_1432:
  *((uint64_t*)&_540) = _654;
  *(void**)(((&((uint8_t*)(&_531))[((int64_t)16)]))) = _653;
  julia_throw_boundserror_19(_529, _653, (&_540));
  __builtin_unreachable();

_1433:
  _655 = *(void**)_653;
  _656 = ((&((uint8_t*)_655)[((int64_t)(_654 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_656)[((int64_t)-16)]))) = _556;
  *(uint8_t*)(((&((uint8_t*)_656)[((int64_t)-15)]))) = _557;
  *(uint32_t*)(((&((uint8_t*)_656)[((int64_t)-12)]))) = _558;
  *(uint64_t*)(((&((uint8_t*)_656)[((int64_t)-8)]))) = (llvm_add_u64(_559, 1));
  julia_emit_20((&_539), _529, _530, 60, 1);
  _602__PHI_TEMPORARY = (&_539);   /* for PHI node */
  goto _1418;

_1424:
  _657 = llvm_OC_ctlz_OC_i32((_618 ^ -1), 0);
  _658 = ((uint64_t)(uint32_t)_657);
  _659 = llvm_OC_cttz_OC_i32(_618, 0);
  _660 = _659 & 56;
  _661 = ((uint64_t)(uint32_t)_660);
  _662 = llvm_select_bool((((uint32_t)_659) < ((uint32_t)32u)), ((llvm_lshr_u32(((_618 & 12632256) ^ 8421504), _660)) != 0u), 0);
  _663 = (((_618 & -33554432) == 3221225472u) | ((_618 & -2097152) == 3766484992u)) | ((_618 & -1048576) == 4034920448u);
  if (((((((_657 == 1u) | (((uint64_t)(llvm_add_u64((_658 << 3), _661))) > ((uint64_t)UINT64_C(32)))) | ((((uint64_t)_616) > ((uint64_t)UINT64_C(17122614319301787647))) & (((uint32_t)(llvm_add_u32(_618, 191905856))) < ((uint32_t)4193304640u)))) | (_617 == UINT64_C(4036993714))) | _662) | _663)) {
    _743__PHI_TEMPORARY = _618;   /* for PHI node */
    goto _1421;
  } else {
    goto _1434;
  }

_1434:
  _664 = llvm_lshr_u32(_618, 24);
  if ((((int64_t)_616) < ((int64_t)UINT64_C(0)))) {
    goto _1435;
  } else {
    _667__PHI_TEMPORARY = _664;   /* for PHI node */
    goto _1436;
  }

_1435:
  if ((((_657 == 1u) | (((uint64_t)(llvm_add_u64((_658 << 3), _661))) > ((uint64_t)UINT64_C(32)))) | (_662 | _663))) {
    goto _1437;
  } else {
    goto _1438;
  }

_1437:
  julia_throw_invalid_char_21(_529, _618);
  __builtin_unreachable();

_1438:
  _665 = llvm_select_u32((((uint32_t)_659) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _657)) & _618), _660)), 0);
  _666 = (((_665 & 127) | ((llvm_lshr_u32(_665, 2)) & 8128)) | ((llvm_lshr_u32(_665, 4)) & 520192)) | ((llvm_lshr_u32(_665, 6)) & 33292288);
  _667__PHI_TEMPORARY = _666;   /* for PHI node */
  goto _1436;

_1436:
  _667 = _667__PHI_TEMPORARY;
  _668 = jsk_jl_id_start_char(_667);
  if ((_668 == 0u)) {
    _743__PHI_TEMPORARY = _618;   /* for PHI node */
    goto _1421;
  } else {
    goto _1439;
  }

_1439:
  _669 = *(void**)_530;
  _670 = ((&((uint8_t*)_669)[((int64_t)16)]));
  _671 = *(uint64_t*)_670;
  _672 = ((&((uint8_t*)_669)[((int64_t)8)]));
  _673 = *(uint64_t*)_672;
  if ((((int64_t)_673) > ((int64_t)_671))) {
    goto _1440;
  } else {
    _690__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1441;
  }

_1440:
  _674 = *(void**)_669;
  _675 = *(uint8_t*)(((&((uint8_t*)_674)[((int64_t)_671)])));
  *(uint64_t*)_670 = (llvm_add_u64(_671, 1));
  _676 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_675)), 0);
  _677 = llvm_sub_u8(32, (llvm_shl_u8(_676, 3)));
  _678 = (((uint32_t)(uint8_t)_675)) << 24;
  if ((((uint8_t)_677) > ((uint8_t)((uint8_t)16)))) {
    _690__PHI_TEMPORARY = _678;   /* for PHI node */
    goto _1441;
  } else {
    _679__PHI_TEMPORARY = 16;   /* for PHI node */
    _680__PHI_TEMPORARY = _678;   /* for PHI node */
    goto _1442;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1442:
  _679 = _679__PHI_TEMPORARY;
  _680 = _680__PHI_TEMPORARY;
  if (((((int64_t)_679) < ((int64_t)UINT64_C(0))) | (((uint64_t)_679) < ((uint64_t)(((uint64_t)(uint8_t)_677)))))) {
    _690__PHI_TEMPORARY = _680;   /* for PHI node */
    goto _1441;
  } else {
    goto _1443;
  }

_1443:
  _681 = *(uint64_t*)_670;
  _682 = *(uint64_t*)_672;
  if ((((int64_t)_682) > ((int64_t)_681))) {
    goto _1444;
  } else {
    _690__PHI_TEMPORARY = _680;   /* for PHI node */
    goto _1441;
  }

_1444:
  _683 = *(void**)_669;
  _684 = *(uint8_t*)(((&((uint8_t*)_683)[((int64_t)_681)])));
  if ((((int8_t)_684) > ((int8_t)((uint8_t)-65)))) {
    _690__PHI_TEMPORARY = _680;   /* for PHI node */
    goto _1441;
  } else {
    goto _1445;
  }

_1445:
  _685 = llvm_select_u32((((int64_t)_681) < ((int64_t)_682)), (((uint32_t)(uint8_t)_684)), 0);
  _686 = *(uint64_t*)_670;
  *(uint64_t*)_670 = (llvm_add_u64(_686, 1));
  _687 = llvm_neg_u64(_679);
  _688 = _680 | (llvm_select_u32((((int64_t)_679) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_687) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_685, (((uint32_t)_687)))))), (llvm_select_u32((((uint64_t)_679) > ((uint64_t)UINT64_C(31))), 0, (_685 << (((uint32_t)_679)))))));
  _689 = llvm_add_u64(_679, -8);
  _679__PHI_TEMPORARY = _689;   /* for PHI node */
  _680__PHI_TEMPORARY = _688;   /* for PHI node */
  goto _1442;

  } while (1); /* end of syntactic loop '' */
_1441:
  _690 = _690__PHI_TEMPORARY;
  _691 = *(uint64_t*)_609;
  _692 = *(uint64_t*)_611;
  _693 = jsyn_cbe_fshl_i64(_692, _691, 32);
  _694 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_690)), _692, 32);
  *(uint64_t*)_609 = _693;
  *(uint64_t*)_611 = _694;
  _695 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _696 = *(uint64_t*)_695;
  _697 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _698 = *(uint64_t*)_697;
  _699 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _700 = *(uint64_t*)_699;
  _701 = *(void**)_530;
  _702 = *(uint64_t*)(((&((uint8_t*)_701)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_530)[((int64_t)48)]))) = _696;
  *(uint64_t*)_695 = _698;
  *(uint64_t*)_697 = _700;
  *(uint64_t*)_699 = _702;
  _703 = *(uint64_t*)_609;
  julia_lex_identifier_22((&_541), _529, _530, (((uint32_t)_703)));
  _602__PHI_TEMPORARY = (&_541);   /* for PHI node */
  goto _1418;

_1423:
  if ((_612 == UINT64_C(4294967295))) {
    _743__PHI_TEMPORARY = _613;   /* for PHI node */
    goto _1421;
  } else {
    goto _1446;
  }

_1446:
  _704 = julia_is_operator_start_char_23(_529, _613);
  _705 = ((bool)_704&1u);
  if ((((bool)_704&1u))) {
    _708__PHI_TEMPORARY = _705;   /* for PHI node */
    goto _1447;
  } else {
    goto _1448;
  }

_1448:
  _706 = julia_is_never_id_char_24(_529, _613);
  _707 = ((bool)_706&1u);
  _708__PHI_TEMPORARY = _707;   /* for PHI node */
  goto _1447;

_1447:
  _708 = _708__PHI_TEMPORARY;
  if (_708) {
    _743__PHI_TEMPORARY = _613;   /* for PHI node */
    goto _1421;
  } else {
    goto _1449;
  }

_1449:
  _709 = *(void**)_530;
  _710 = ((&((uint8_t*)_709)[((int64_t)16)]));
  _711 = *(uint64_t*)_710;
  _712 = ((&((uint8_t*)_709)[((int64_t)8)]));
  _713 = *(uint64_t*)_712;
  if ((((int64_t)_713) > ((int64_t)_711))) {
    goto _1450;
  } else {
    _730__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1451;
  }

_1450:
  _714 = *(void**)_709;
  _715 = *(uint8_t*)(((&((uint8_t*)_714)[((int64_t)_711)])));
  *(uint64_t*)_710 = (llvm_add_u64(_711, 1));
  _716 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_715)), 0);
  _717 = llvm_sub_u8(32, (llvm_shl_u8(_716, 3)));
  _718 = (((uint32_t)(uint8_t)_715)) << 24;
  if ((((uint8_t)_717) > ((uint8_t)((uint8_t)16)))) {
    _730__PHI_TEMPORARY = _718;   /* for PHI node */
    goto _1451;
  } else {
    _719__PHI_TEMPORARY = 16;   /* for PHI node */
    _720__PHI_TEMPORARY = _718;   /* for PHI node */
    goto _1452;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1452:
  _719 = _719__PHI_TEMPORARY;
  _720 = _720__PHI_TEMPORARY;
  if (((((int64_t)_719) < ((int64_t)UINT64_C(0))) | (((uint64_t)_719) < ((uint64_t)(((uint64_t)(uint8_t)_717)))))) {
    _730__PHI_TEMPORARY = _720;   /* for PHI node */
    goto _1451;
  } else {
    goto _1453;
  }

_1453:
  _721 = *(uint64_t*)_710;
  _722 = *(uint64_t*)_712;
  if ((((int64_t)_722) > ((int64_t)_721))) {
    goto _1454;
  } else {
    _730__PHI_TEMPORARY = _720;   /* for PHI node */
    goto _1451;
  }

_1454:
  _723 = *(void**)_709;
  _724 = *(uint8_t*)(((&((uint8_t*)_723)[((int64_t)_721)])));
  if ((((int8_t)_724) > ((int8_t)((uint8_t)-65)))) {
    _730__PHI_TEMPORARY = _720;   /* for PHI node */
    goto _1451;
  } else {
    goto _1455;
  }

_1455:
  _725 = llvm_select_u32((((int64_t)_721) < ((int64_t)_722)), (((uint32_t)(uint8_t)_724)), 0);
  _726 = *(uint64_t*)_710;
  *(uint64_t*)_710 = (llvm_add_u64(_726, 1));
  _727 = llvm_neg_u64(_719);
  _728 = _720 | (llvm_select_u32((((int64_t)_719) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_727) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_725, (((uint32_t)_727)))))), (llvm_select_u32((((uint64_t)_719) > ((uint64_t)UINT64_C(31))), 0, (_725 << (((uint32_t)_719)))))));
  _729 = llvm_add_u64(_719, -8);
  _719__PHI_TEMPORARY = _729;   /* for PHI node */
  _720__PHI_TEMPORARY = _728;   /* for PHI node */
  goto _1452;

  } while (1); /* end of syntactic loop '' */
_1451:
  _730 = _730__PHI_TEMPORARY;
  _731 = *(uint64_t*)_609;
  _732 = *(uint64_t*)_611;
  _733 = jsyn_cbe_fshl_i64(_732, _731, 32);
  _734 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_730)), _732, 32);
  *(uint64_t*)_609 = _733;
  *(uint64_t*)_611 = _734;
  _735 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _736 = *(uint64_t*)_735;
  _737 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _738 = *(uint64_t*)_737;
  _739 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _740 = *(uint64_t*)_739;
  _741 = *(void**)_530;
  _742 = *(uint64_t*)(((&((uint8_t*)_741)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_530)[((int64_t)48)]))) = _736;
  *(uint64_t*)_735 = _738;
  *(uint64_t*)_737 = _740;
  *(uint64_t*)_739 = _742;
  julia_emit_20((&_549), _529, _530, 758, 1);
  _602__PHI_TEMPORARY = (&_549);   /* for PHI node */
  goto _1418;

_1421:
  _743 = _743__PHI_TEMPORARY;
  if ((_743 == 4294967295u)) {
    goto _1456;
  } else {
    goto _1457;
  }

_1456:
  julia_emit_20((&_542), _529, _530, 752, 1);
  _602__PHI_TEMPORARY = (&_542);   /* for PHI node */
  goto _1418;

_1457:
  _744 = ((bool)_557&1u);
  if (((_743 != 603979776u) | _744)) {
    goto _1458;
  } else {
    goto _1459;
  }

_1459:
  _745 = *(void**)_530;
  _746 = ((&((uint8_t*)_745)[((int64_t)16)]));
  _747 = *(uint64_t*)_746;
  _748 = ((&((uint8_t*)_745)[((int64_t)8)]));
  _749 = *(uint64_t*)_748;
  if ((((int64_t)_749) > ((int64_t)_747))) {
    goto _1460;
  } else {
    _766__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1461;
  }

_1460:
  _750 = *(void**)_745;
  _751 = *(uint8_t*)(((&((uint8_t*)_750)[((int64_t)_747)])));
  *(uint64_t*)_746 = (llvm_add_u64(_747, 1));
  _752 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_751)), 0);
  _753 = llvm_sub_u8(32, (llvm_shl_u8(_752, 3)));
  _754 = (((uint32_t)(uint8_t)_751)) << 24;
  if ((((uint8_t)_753) > ((uint8_t)((uint8_t)16)))) {
    _766__PHI_TEMPORARY = _754;   /* for PHI node */
    goto _1461;
  } else {
    _755__PHI_TEMPORARY = 16;   /* for PHI node */
    _756__PHI_TEMPORARY = _754;   /* for PHI node */
    goto _1462;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1462:
  _755 = _755__PHI_TEMPORARY;
  _756 = _756__PHI_TEMPORARY;
  if (((((int64_t)_755) < ((int64_t)UINT64_C(0))) | (((uint64_t)_755) < ((uint64_t)(((uint64_t)(uint8_t)_753)))))) {
    _766__PHI_TEMPORARY = _756;   /* for PHI node */
    goto _1461;
  } else {
    goto _1463;
  }

_1463:
  _757 = *(uint64_t*)_746;
  _758 = *(uint64_t*)_748;
  if ((((int64_t)_758) > ((int64_t)_757))) {
    goto _1464;
  } else {
    _766__PHI_TEMPORARY = _756;   /* for PHI node */
    goto _1461;
  }

_1464:
  _759 = *(void**)_745;
  _760 = *(uint8_t*)(((&((uint8_t*)_759)[((int64_t)_757)])));
  if ((((int8_t)_760) > ((int8_t)((uint8_t)-65)))) {
    _766__PHI_TEMPORARY = _756;   /* for PHI node */
    goto _1461;
  } else {
    goto _1465;
  }

_1465:
  _761 = llvm_select_u32((((int64_t)_757) < ((int64_t)_758)), (((uint32_t)(uint8_t)_760)), 0);
  _762 = *(uint64_t*)_746;
  *(uint64_t*)_746 = (llvm_add_u64(_762, 1));
  _763 = llvm_neg_u64(_755);
  _764 = _756 | (llvm_select_u32((((int64_t)_755) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_763) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_761, (((uint32_t)_763)))))), (llvm_select_u32((((uint64_t)_755) > ((uint64_t)UINT64_C(31))), 0, (_761 << (((uint32_t)_755)))))));
  _765 = llvm_add_u64(_755, -8);
  _755__PHI_TEMPORARY = _765;   /* for PHI node */
  _756__PHI_TEMPORARY = _764;   /* for PHI node */
  goto _1462;

  } while (1); /* end of syntactic loop '' */
_1461:
  _766 = _766__PHI_TEMPORARY;
  _767 = *(uint64_t*)_609;
  _768 = *(uint64_t*)_611;
  _769 = jsyn_cbe_fshl_i64(_768, _767, 32);
  _770 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_766)), _768, 32);
  *(uint64_t*)_609 = _769;
  *(uint64_t*)_611 = _770;
  _771 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _772 = *(uint64_t*)_771;
  _773 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _774 = *(uint64_t*)_773;
  _775 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _776 = *(uint64_t*)_775;
  _777 = *(void**)_530;
  _778 = *(uint64_t*)(((&((uint8_t*)_777)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_530)[((int64_t)48)]))) = _772;
  *(uint64_t*)_771 = _774;
  *(uint64_t*)_773 = _776;
  *(uint64_t*)_775 = _778;
  julia_emit_20((&_543), _529, _530, 534, 1);
  _602__PHI_TEMPORARY = (&_543);   /* for PHI node */
  goto _1418;

_1458:
  if (((_743 != 1543503872u) | _744)) {
    goto _1466;
  } else {
    goto _1467;
  }

_1467:
  _779 = *(uint64_t*)_611;
  _780 = ((uint32_t)_779);
  switch (_780) {
  default:
    goto _1466;
  case 218103808u:
    goto _1468;
  case 167772160u:
    goto _1468;
  }

_1468:
  _781 = *(void**)_530;
  _782 = ((&((uint8_t*)_781)[((int64_t)16)]));
  _783 = *(uint64_t*)_782;
  _784 = ((&((uint8_t*)_781)[((int64_t)8)]));
  _785 = *(uint64_t*)_784;
  if ((((int64_t)_785) > ((int64_t)_783))) {
    goto _1469;
  } else {
    _802__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1470;
  }

_1469:
  _786 = *(void**)_781;
  _787 = *(uint8_t*)(((&((uint8_t*)_786)[((int64_t)_783)])));
  *(uint64_t*)_782 = (llvm_add_u64(_783, 1));
  _788 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_787)), 0);
  _789 = llvm_sub_u8(32, (llvm_shl_u8(_788, 3)));
  _790 = (((uint32_t)(uint8_t)_787)) << 24;
  if ((((uint8_t)_789) > ((uint8_t)((uint8_t)16)))) {
    _802__PHI_TEMPORARY = _790;   /* for PHI node */
    goto _1470;
  } else {
    _791__PHI_TEMPORARY = 16;   /* for PHI node */
    _792__PHI_TEMPORARY = _790;   /* for PHI node */
    goto _1471;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1471:
  _791 = _791__PHI_TEMPORARY;
  _792 = _792__PHI_TEMPORARY;
  if (((((int64_t)_791) < ((int64_t)UINT64_C(0))) | (((uint64_t)_791) < ((uint64_t)(((uint64_t)(uint8_t)_789)))))) {
    _802__PHI_TEMPORARY = _792;   /* for PHI node */
    goto _1470;
  } else {
    goto _1472;
  }

_1472:
  _793 = *(uint64_t*)_782;
  _794 = *(uint64_t*)_784;
  if ((((int64_t)_794) > ((int64_t)_793))) {
    goto _1473;
  } else {
    _802__PHI_TEMPORARY = _792;   /* for PHI node */
    goto _1470;
  }

_1473:
  _795 = *(void**)_781;
  _796 = *(uint8_t*)(((&((uint8_t*)_795)[((int64_t)_793)])));
  if ((((int8_t)_796) > ((int8_t)((uint8_t)-65)))) {
    _802__PHI_TEMPORARY = _792;   /* for PHI node */
    goto _1470;
  } else {
    goto _1474;
  }

_1474:
  _797 = llvm_select_u32((((int64_t)_793) < ((int64_t)_794)), (((uint32_t)(uint8_t)_796)), 0);
  _798 = *(uint64_t*)_782;
  *(uint64_t*)_782 = (llvm_add_u64(_798, 1));
  _799 = llvm_neg_u64(_791);
  _800 = _792 | (llvm_select_u32((((int64_t)_791) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_799) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_797, (((uint32_t)_799)))))), (llvm_select_u32((((uint64_t)_791) > ((uint64_t)UINT64_C(31))), 0, (_797 << (((uint32_t)_791)))))));
  _801 = llvm_add_u64(_791, -8);
  _791__PHI_TEMPORARY = _801;   /* for PHI node */
  _792__PHI_TEMPORARY = _800;   /* for PHI node */
  goto _1471;

  } while (1); /* end of syntactic loop '' */
_1470:
  _802 = _802__PHI_TEMPORARY;
  _803 = *(uint64_t*)_609;
  _804 = *(uint64_t*)_611;
  _805 = jsyn_cbe_fshl_i64(_804, _803, 32);
  _806 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_802)), _804, 32);
  *(uint64_t*)_609 = _805;
  *(uint64_t*)_611 = _806;
  _807 = ((&((uint8_t*)_530)[((int64_t)48)]));
  _808 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _809 = *(uint64_t*)_808;
  _810 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _811 = *(uint64_t*)_810;
  _812 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _813 = *(uint64_t*)_812;
  _814 = *(void**)_530;
  _815 = *(uint64_t*)(((&((uint8_t*)_814)[((int64_t)16)])));
  *(uint64_t*)_807 = _809;
  *(uint64_t*)_808 = _811;
  *(uint64_t*)_810 = _813;
  *(uint64_t*)_812 = _815;
  _816 = *(void**)_530;
  _817 = ((&((uint8_t*)_816)[((int64_t)16)]));
  _818 = *(uint64_t*)_817;
  _819 = ((&((uint8_t*)_816)[((int64_t)8)]));
  _820 = *(uint64_t*)_819;
  if ((((int64_t)_820) > ((int64_t)_818))) {
    goto _1475;
  } else {
    _837__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1476;
  }

_1475:
  _821 = *(void**)_816;
  _822 = *(uint8_t*)(((&((uint8_t*)_821)[((int64_t)_818)])));
  *(uint64_t*)_817 = (llvm_add_u64(_818, 1));
  _823 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_822)), 0);
  _824 = llvm_sub_u8(32, (llvm_shl_u8(_823, 3)));
  _825 = (((uint32_t)(uint8_t)_822)) << 24;
  if ((((uint8_t)_824) > ((uint8_t)((uint8_t)16)))) {
    _837__PHI_TEMPORARY = _825;   /* for PHI node */
    goto _1476;
  } else {
    _826__PHI_TEMPORARY = 16;   /* for PHI node */
    _827__PHI_TEMPORARY = _825;   /* for PHI node */
    goto _1477;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1477:
  _826 = _826__PHI_TEMPORARY;
  _827 = _827__PHI_TEMPORARY;
  if (((((int64_t)_826) < ((int64_t)UINT64_C(0))) | (((uint64_t)_826) < ((uint64_t)(((uint64_t)(uint8_t)_824)))))) {
    _837__PHI_TEMPORARY = _827;   /* for PHI node */
    goto _1476;
  } else {
    goto _1478;
  }

_1478:
  _828 = *(uint64_t*)_817;
  _829 = *(uint64_t*)_819;
  if ((((int64_t)_829) > ((int64_t)_828))) {
    goto _1479;
  } else {
    _837__PHI_TEMPORARY = _827;   /* for PHI node */
    goto _1476;
  }

_1479:
  _830 = *(void**)_816;
  _831 = *(uint8_t*)(((&((uint8_t*)_830)[((int64_t)_828)])));
  if ((((int8_t)_831) > ((int8_t)((uint8_t)-65)))) {
    _837__PHI_TEMPORARY = _827;   /* for PHI node */
    goto _1476;
  } else {
    goto _1480;
  }

_1480:
  _832 = llvm_select_u32((((int64_t)_828) < ((int64_t)_829)), (((uint32_t)(uint8_t)_831)), 0);
  _833 = *(uint64_t*)_817;
  *(uint64_t*)_817 = (llvm_add_u64(_833, 1));
  _834 = llvm_neg_u64(_826);
  _835 = _827 | (llvm_select_u32((((int64_t)_826) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_834) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_832, (((uint32_t)_834)))))), (llvm_select_u32((((uint64_t)_826) > ((uint64_t)UINT64_C(31))), 0, (_832 << (((uint32_t)_826)))))));
  _836 = llvm_add_u64(_826, -8);
  _826__PHI_TEMPORARY = _836;   /* for PHI node */
  _827__PHI_TEMPORARY = _835;   /* for PHI node */
  goto _1477;

  } while (1); /* end of syntactic loop '' */
_1476:
  _837 = _837__PHI_TEMPORARY;
  _838 = *(uint64_t*)_609;
  _839 = *(uint64_t*)_611;
  _840 = jsyn_cbe_fshl_i64(_839, _838, 32);
  _841 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_837)), _839, 32);
  *(uint64_t*)_609 = _840;
  *(uint64_t*)_611 = _841;
  _842 = *(uint64_t*)_808;
  _843 = *(uint64_t*)_810;
  _844 = *(uint64_t*)_812;
  _845 = *(void**)_530;
  _846 = *(uint64_t*)(((&((uint8_t*)_845)[((int64_t)16)])));
  *(uint64_t*)_807 = _842;
  *(uint64_t*)_808 = _843;
  *(uint64_t*)_810 = _844;
  *(uint64_t*)_812 = _846;
  if ((_780 == 218103808u)) {
    goto _1481;
  } else {
    goto _1482;
  }

_1481:
  _847 = *(uint64_t*)_609;
  if (((_847 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1483;
  } else {
    goto _1482;
  }

_1483:
  _848 = *(void**)_530;
  _849 = ((&((uint8_t*)_848)[((int64_t)16)]));
  _850 = *(uint64_t*)_849;
  _851 = ((&((uint8_t*)_848)[((int64_t)8)]));
  _852 = *(uint64_t*)_851;
  if ((((int64_t)_852) > ((int64_t)_850))) {
    goto _1484;
  } else {
    _869__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1485;
  }

_1484:
  _853 = *(void**)_848;
  _854 = *(uint8_t*)(((&((uint8_t*)_853)[((int64_t)_850)])));
  *(uint64_t*)_849 = (llvm_add_u64(_850, 1));
  _855 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_854)), 0);
  _856 = llvm_sub_u8(32, (llvm_shl_u8(_855, 3)));
  _857 = (((uint32_t)(uint8_t)_854)) << 24;
  if ((((uint8_t)_856) > ((uint8_t)((uint8_t)16)))) {
    _869__PHI_TEMPORARY = _857;   /* for PHI node */
    goto _1485;
  } else {
    _858__PHI_TEMPORARY = 16;   /* for PHI node */
    _859__PHI_TEMPORARY = _857;   /* for PHI node */
    goto _1486;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1486:
  _858 = _858__PHI_TEMPORARY;
  _859 = _859__PHI_TEMPORARY;
  if (((((int64_t)_858) < ((int64_t)UINT64_C(0))) | (((uint64_t)_858) < ((uint64_t)(((uint64_t)(uint8_t)_856)))))) {
    _869__PHI_TEMPORARY = _859;   /* for PHI node */
    goto _1485;
  } else {
    goto _1487;
  }

_1487:
  _860 = *(uint64_t*)_849;
  _861 = *(uint64_t*)_851;
  if ((((int64_t)_861) > ((int64_t)_860))) {
    goto _1488;
  } else {
    _869__PHI_TEMPORARY = _859;   /* for PHI node */
    goto _1485;
  }

_1488:
  _862 = *(void**)_848;
  _863 = *(uint8_t*)(((&((uint8_t*)_862)[((int64_t)_860)])));
  if ((((int8_t)_863) > ((int8_t)((uint8_t)-65)))) {
    _869__PHI_TEMPORARY = _859;   /* for PHI node */
    goto _1485;
  } else {
    goto _1489;
  }

_1489:
  _864 = llvm_select_u32((((int64_t)_860) < ((int64_t)_861)), (((uint32_t)(uint8_t)_863)), 0);
  _865 = *(uint64_t*)_849;
  *(uint64_t*)_849 = (llvm_add_u64(_865, 1));
  _866 = llvm_neg_u64(_858);
  _867 = _859 | (llvm_select_u32((((int64_t)_858) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_866) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_864, (((uint32_t)_866)))))), (llvm_select_u32((((uint64_t)_858) > ((uint64_t)UINT64_C(31))), 0, (_864 << (((uint32_t)_858)))))));
  _868 = llvm_add_u64(_858, -8);
  _858__PHI_TEMPORARY = _868;   /* for PHI node */
  _859__PHI_TEMPORARY = _867;   /* for PHI node */
  goto _1486;

  } while (1); /* end of syntactic loop '' */
_1485:
  _869 = _869__PHI_TEMPORARY;
  _870 = *(uint64_t*)_609;
  _871 = *(uint64_t*)_611;
  _872 = jsyn_cbe_fshl_i64(_871, _870, 32);
  _873 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_869)), _871, 32);
  *(uint64_t*)_609 = _872;
  *(uint64_t*)_611 = _873;
  _874 = *(uint64_t*)_808;
  _875 = *(uint64_t*)_810;
  _876 = *(uint64_t*)_812;
  _877 = *(void**)_530;
  _878 = *(uint64_t*)(((&((uint8_t*)_877)[((int64_t)16)])));
  *(uint64_t*)_807 = _874;
  *(uint64_t*)_808 = _875;
  *(uint64_t*)_810 = _876;
  *(uint64_t*)_812 = _878;
  goto _1482;

_1482:
  _879 = *(uint64_t*)_609;
  switch ((((uint32_t)(llvm_lshr_u64(_879, 32))))) {
  default:
    goto _1490;
  case 536870912u:
    goto _1491;
  case 150994944u:
    goto _1491;
  }

_1490:
  julia_emit_20((&_544), _529, _530, 1, 1);
  _602__PHI_TEMPORARY = (&_544);   /* for PHI node */
  goto _1418;

_1491:
  _880 = *(void**)_530;
  _881 = ((&((uint8_t*)_880)[((int64_t)16)]));
  _882 = *(uint64_t*)_881;
  _883 = ((&((uint8_t*)_880)[((int64_t)8)]));
  _884 = *(uint64_t*)_883;
  if ((((int64_t)_884) > ((int64_t)_882))) {
    goto _1492;
  } else {
    _869__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1485;
  }

_1492:
  _885 = *(void**)_880;
  _886 = *(uint8_t*)(((&((uint8_t*)_885)[((int64_t)_882)])));
  *(uint64_t*)_881 = (llvm_add_u64(_882, 1));
  _887 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_886)), 0);
  _888 = llvm_sub_u8(32, (llvm_shl_u8(_887, 3)));
  _889 = (((uint32_t)(uint8_t)_886)) << 24;
  if ((((uint8_t)_888) > ((uint8_t)((uint8_t)16)))) {
    _869__PHI_TEMPORARY = _889;   /* for PHI node */
    goto _1485;
  } else {
    _890__PHI_TEMPORARY = 16;   /* for PHI node */
    _891__PHI_TEMPORARY = _889;   /* for PHI node */
    goto _1493;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1493:
  _890 = _890__PHI_TEMPORARY;
  _891 = _891__PHI_TEMPORARY;
  if (((((int64_t)_890) < ((int64_t)UINT64_C(0))) | (((uint64_t)_890) < ((uint64_t)(((uint64_t)(uint8_t)_888)))))) {
    _869__PHI_TEMPORARY = _891;   /* for PHI node */
    goto _1485;
  } else {
    goto _1494;
  }

_1494:
  _892 = *(uint64_t*)_881;
  _893 = *(uint64_t*)_883;
  if ((((int64_t)_893) > ((int64_t)_892))) {
    goto _1495;
  } else {
    _869__PHI_TEMPORARY = _891;   /* for PHI node */
    goto _1485;
  }

_1495:
  _894 = *(void**)_880;
  _895 = *(uint8_t*)(((&((uint8_t*)_894)[((int64_t)_892)])));
  if ((((int8_t)_895) > ((int8_t)((uint8_t)-65)))) {
    _869__PHI_TEMPORARY = _891;   /* for PHI node */
    goto _1485;
  } else {
    goto _1496;
  }

_1496:
  _896 = llvm_select_u32((((int64_t)_892) < ((int64_t)_893)), (((uint32_t)(uint8_t)_895)), 0);
  _897 = *(uint64_t*)_881;
  *(uint64_t*)_881 = (llvm_add_u64(_897, 1));
  _898 = llvm_neg_u64(_890);
  _899 = _891 | (llvm_select_u32((((int64_t)_890) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_898) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_896, (((uint32_t)_898)))))), (llvm_select_u32((((uint64_t)_890) > ((uint64_t)UINT64_C(31))), 0, (_896 << (((uint32_t)_890)))))));
  _900 = llvm_add_u64(_890, -8);
  _890__PHI_TEMPORARY = _900;   /* for PHI node */
  _891__PHI_TEMPORARY = _899;   /* for PHI node */
  goto _1493;

  } while (1); /* end of syntactic loop '' */
_1466:
  if ((_743 == _558)) {
    goto _1497;
  } else {
    goto _1498;
  }

_1497:
  _901 = ((bool)_556&1u);
  _902 = *(uint64_t*)_609;
  if (_901) {
    goto _1499;
  } else {
    _904__PHI_TEMPORARY = _902;   /* for PHI node */
    goto _1500;
  }

_1499:
  _903 = *(uint64_t*)_611;
  if ((llvm_select_bool((_558 == (((uint32_t)(llvm_lshr_u64(_902, 32))))), (_558 == (((uint32_t)_903))), 0))) {
    _904__PHI_TEMPORARY = _903;   /* for PHI node */
    goto _1500;
  } else {
    goto _1498;
  }

_1500:
  _904 = _904__PHI_TEMPORARY;
  if ((_558 == (((uint32_t)(llvm_lshr_u64(_904, 32)))))) {
    goto _1501;
  } else {
    goto _1498;
  }

_1501:
  _905 = *(uint16_t*)_614;
  if ((llvm_select_bool((_558 == 654311424u), (_905 == ((uint16_t)709)), 0))) {
    goto _1502;
  } else {
    goto _1503;
  }

_1502:
  _906 = *(uint64_t*)_611;
  if (((_906 & INT64_C(4294967295)) == UINT64_C(654311424))) {
    goto _1504;
  } else {
    goto _1503;
  }

_1504:
  _907 = *(void**)_530;
  _908 = ((&((uint8_t*)_907)[((int64_t)16)]));
  _909 = *(uint64_t*)_908;
  _910 = ((&((uint8_t*)_907)[((int64_t)8)]));
  _911 = *(uint64_t*)_910;
  if ((((int64_t)_911) > ((int64_t)_909))) {
    goto _1505;
  } else {
    _928__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1506;
  }

_1505:
  _912 = *(void**)_907;
  _913 = *(uint8_t*)(((&((uint8_t*)_912)[((int64_t)_909)])));
  *(uint64_t*)_908 = (llvm_add_u64(_909, 1));
  _914 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_913)), 0);
  _915 = llvm_sub_u8(32, (llvm_shl_u8(_914, 3)));
  _916 = (((uint32_t)(uint8_t)_913)) << 24;
  if ((((uint8_t)_915) > ((uint8_t)((uint8_t)16)))) {
    _928__PHI_TEMPORARY = _916;   /* for PHI node */
    goto _1506;
  } else {
    _917__PHI_TEMPORARY = 16;   /* for PHI node */
    _918__PHI_TEMPORARY = _916;   /* for PHI node */
    goto _1507;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1507:
  _917 = _917__PHI_TEMPORARY;
  _918 = _918__PHI_TEMPORARY;
  if (((((int64_t)_917) < ((int64_t)UINT64_C(0))) | (((uint64_t)_917) < ((uint64_t)(((uint64_t)(uint8_t)_915)))))) {
    _928__PHI_TEMPORARY = _918;   /* for PHI node */
    goto _1506;
  } else {
    goto _1508;
  }

_1508:
  _919 = *(uint64_t*)_908;
  _920 = *(uint64_t*)_910;
  if ((((int64_t)_920) > ((int64_t)_919))) {
    goto _1509;
  } else {
    _928__PHI_TEMPORARY = _918;   /* for PHI node */
    goto _1506;
  }

_1509:
  _921 = *(void**)_907;
  _922 = *(uint8_t*)(((&((uint8_t*)_921)[((int64_t)_919)])));
  if ((((int8_t)_922) > ((int8_t)((uint8_t)-65)))) {
    _928__PHI_TEMPORARY = _918;   /* for PHI node */
    goto _1506;
  } else {
    goto _1510;
  }

_1510:
  _923 = llvm_select_u32((((int64_t)_919) < ((int64_t)_920)), (((uint32_t)(uint8_t)_922)), 0);
  _924 = *(uint64_t*)_908;
  *(uint64_t*)_908 = (llvm_add_u64(_924, 1));
  _925 = llvm_neg_u64(_917);
  _926 = _918 | (llvm_select_u32((((int64_t)_917) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_925) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_923, (((uint32_t)_925)))))), (llvm_select_u32((((uint64_t)_917) > ((uint64_t)UINT64_C(31))), 0, (_923 << (((uint32_t)_917)))))));
  _927 = llvm_add_u64(_917, -8);
  _917__PHI_TEMPORARY = _927;   /* for PHI node */
  _918__PHI_TEMPORARY = _926;   /* for PHI node */
  goto _1507;

  } while (1); /* end of syntactic loop '' */
_1506:
  _928 = _928__PHI_TEMPORARY;
  _929 = *(uint64_t*)_609;
  _930 = *(uint64_t*)_611;
  _931 = jsyn_cbe_fshl_i64(_930, _929, 32);
  _932 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_928)), _930, 32);
  *(uint64_t*)_609 = _931;
  *(uint64_t*)_611 = _932;
  _933 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _934 = *(uint64_t*)_933;
  _935 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _936 = *(uint64_t*)_935;
  _937 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _938 = *(uint64_t*)_937;
  _939 = *(void**)_530;
  _940 = *(uint64_t*)(((&((uint8_t*)_939)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_530)[((int64_t)48)]))) = _934;
  *(uint64_t*)_933 = _936;
  *(uint64_t*)_935 = _938;
  *(uint64_t*)_937 = _940;
  julia_emit_20((&_545), _529, _530, 51, 1);
  _602__PHI_TEMPORARY = (&_545);   /* for PHI node */
  goto _1418;

_1503:
  _941 = *(void**)_551;
  _942 = ((&((uint8_t*)_941)[((int64_t)16)]));
  _943 = *(uint64_t*)_942;
  if ((_943 == UINT64_C(0))) {
    goto _1511;
  } else {
    goto _1512;
  }

_1511:
  julia__throw_argerror_25(_529, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)456)]))));
  __builtin_unreachable();

_1512:
  _944 = llvm_add_u64(_943, -1);
  _945__PHI_TEMPORARY = _943;   /* for PHI node */
  goto _1513;

  do {     /* Syntactic loop '' to make GCC happy */
_1513:
  _945 = _945__PHI_TEMPORARY;
  if ((_945 == _943)) {
    goto _1514;
  } else {
    _945__PHI_TEMPORARY = (llvm_add_u64(_945, 1));   /* for PHI node */
    goto _1513;
  }

  } while (1); /* end of syntactic loop '' */
_1514:
  *(uint64_t*)_942 = _944;
  _946 = *(void**)_530;
  _947 = ((&((uint8_t*)_946)[((int64_t)16)]));
  _948 = *(uint64_t*)_947;
  _949 = ((&((uint8_t*)_946)[((int64_t)8)]));
  _950 = *(uint64_t*)_949;
  if ((((int64_t)_950) > ((int64_t)_948))) {
    goto _1515;
  } else {
    _967__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1516;
  }

_1515:
  _951 = *(void**)_946;
  _952 = *(uint8_t*)(((&((uint8_t*)_951)[((int64_t)_948)])));
  *(uint64_t*)_947 = (llvm_add_u64(_948, 1));
  _953 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_952)), 0);
  _954 = llvm_sub_u8(32, (llvm_shl_u8(_953, 3)));
  _955 = (((uint32_t)(uint8_t)_952)) << 24;
  if ((((uint8_t)_954) > ((uint8_t)((uint8_t)16)))) {
    _967__PHI_TEMPORARY = _955;   /* for PHI node */
    goto _1516;
  } else {
    _956__PHI_TEMPORARY = 16;   /* for PHI node */
    _957__PHI_TEMPORARY = _955;   /* for PHI node */
    goto _1517;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1517:
  _956 = _956__PHI_TEMPORARY;
  _957 = _957__PHI_TEMPORARY;
  if (((((int64_t)_956) < ((int64_t)UINT64_C(0))) | (((uint64_t)_956) < ((uint64_t)(((uint64_t)(uint8_t)_954)))))) {
    _967__PHI_TEMPORARY = _957;   /* for PHI node */
    goto _1516;
  } else {
    goto _1518;
  }

_1518:
  _958 = *(uint64_t*)_947;
  _959 = *(uint64_t*)_949;
  if ((((int64_t)_959) > ((int64_t)_958))) {
    goto _1519;
  } else {
    _967__PHI_TEMPORARY = _957;   /* for PHI node */
    goto _1516;
  }

_1519:
  _960 = *(void**)_946;
  _961 = *(uint8_t*)(((&((uint8_t*)_960)[((int64_t)_958)])));
  if ((((int8_t)_961) > ((int8_t)((uint8_t)-65)))) {
    _967__PHI_TEMPORARY = _957;   /* for PHI node */
    goto _1516;
  } else {
    goto _1520;
  }

_1520:
  _962 = llvm_select_u32((((int64_t)_958) < ((int64_t)_959)), (((uint32_t)(uint8_t)_961)), 0);
  _963 = *(uint64_t*)_947;
  *(uint64_t*)_947 = (llvm_add_u64(_963, 1));
  _964 = llvm_neg_u64(_956);
  _965 = _957 | (llvm_select_u32((((int64_t)_956) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_964) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_962, (((uint32_t)_964)))))), (llvm_select_u32((((uint64_t)_956) > ((uint64_t)UINT64_C(31))), 0, (_962 << (((uint32_t)_956)))))));
  _966 = llvm_add_u64(_956, -8);
  _956__PHI_TEMPORARY = _966;   /* for PHI node */
  _957__PHI_TEMPORARY = _965;   /* for PHI node */
  goto _1517;

  } while (1); /* end of syntactic loop '' */
_1516:
  _967 = _967__PHI_TEMPORARY;
  _968 = *(uint64_t*)_609;
  _969 = *(uint64_t*)_611;
  _970 = jsyn_cbe_fshl_i64(_969, _968, 32);
  _971 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_967)), _969, 32);
  *(uint64_t*)_609 = _970;
  *(uint64_t*)_611 = _971;
  _972 = ((&((uint8_t*)_530)[((int64_t)48)]));
  _973 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _974 = *(uint64_t*)_973;
  _975 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _976 = *(uint64_t*)_975;
  _977 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _978 = *(uint64_t*)_977;
  _979 = *(void**)_530;
  _980 = *(uint64_t*)(((&((uint8_t*)_979)[((int64_t)16)])));
  *(uint64_t*)_972 = _974;
  *(uint64_t*)_973 = _976;
  *(uint64_t*)_975 = _978;
  *(uint64_t*)_977 = _980;
  if (_901) {
    goto _1521;
  } else {
    goto _1522;
  }

_1521:
  _981 = *(void**)_530;
  _982 = ((&((uint8_t*)_981)[((int64_t)16)]));
  _983 = *(uint64_t*)_982;
  _984 = ((&((uint8_t*)_981)[((int64_t)8)]));
  _985 = *(uint64_t*)_984;
  if ((((int64_t)_985) > ((int64_t)_983))) {
    goto _1523;
  } else {
    _1002__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1524;
  }

_1523:
  _986 = *(void**)_981;
  _987 = *(uint8_t*)(((&((uint8_t*)_986)[((int64_t)_983)])));
  *(uint64_t*)_982 = (llvm_add_u64(_983, 1));
  _988 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_987)), 0);
  _989 = llvm_sub_u8(32, (llvm_shl_u8(_988, 3)));
  _990 = (((uint32_t)(uint8_t)_987)) << 24;
  if ((((uint8_t)_989) > ((uint8_t)((uint8_t)16)))) {
    _1002__PHI_TEMPORARY = _990;   /* for PHI node */
    goto _1524;
  } else {
    _991__PHI_TEMPORARY = 16;   /* for PHI node */
    _992__PHI_TEMPORARY = _990;   /* for PHI node */
    goto _1525;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1525:
  _991 = _991__PHI_TEMPORARY;
  _992 = _992__PHI_TEMPORARY;
  if (((((int64_t)_991) < ((int64_t)UINT64_C(0))) | (((uint64_t)_991) < ((uint64_t)(((uint64_t)(uint8_t)_989)))))) {
    _1002__PHI_TEMPORARY = _992;   /* for PHI node */
    goto _1524;
  } else {
    goto _1526;
  }

_1526:
  _993 = *(uint64_t*)_982;
  _994 = *(uint64_t*)_984;
  if ((((int64_t)_994) > ((int64_t)_993))) {
    goto _1527;
  } else {
    _1002__PHI_TEMPORARY = _992;   /* for PHI node */
    goto _1524;
  }

_1527:
  _995 = *(void**)_981;
  _996 = *(uint8_t*)(((&((uint8_t*)_995)[((int64_t)_993)])));
  if ((((int8_t)_996) > ((int8_t)((uint8_t)-65)))) {
    _1002__PHI_TEMPORARY = _992;   /* for PHI node */
    goto _1524;
  } else {
    goto _1528;
  }

_1528:
  _997 = llvm_select_u32((((int64_t)_993) < ((int64_t)_994)), (((uint32_t)(uint8_t)_996)), 0);
  _998 = *(uint64_t*)_982;
  *(uint64_t*)_982 = (llvm_add_u64(_998, 1));
  _999 = llvm_neg_u64(_991);
  _1000 = _992 | (llvm_select_u32((((int64_t)_991) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_999) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_997, (((uint32_t)_999)))))), (llvm_select_u32((((uint64_t)_991) > ((uint64_t)UINT64_C(31))), 0, (_997 << (((uint32_t)_991)))))));
  _1001 = llvm_add_u64(_991, -8);
  _991__PHI_TEMPORARY = _1001;   /* for PHI node */
  _992__PHI_TEMPORARY = _1000;   /* for PHI node */
  goto _1525;

  } while (1); /* end of syntactic loop '' */
_1524:
  _1002 = _1002__PHI_TEMPORARY;
  _1003 = *(uint64_t*)_609;
  _1004 = *(uint64_t*)_611;
  _1005 = jsyn_cbe_fshl_i64(_1004, _1003, 32);
  _1006 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1002)), _1004, 32);
  *(uint64_t*)_609 = _1005;
  *(uint64_t*)_611 = _1006;
  _1007 = *(uint64_t*)_973;
  _1008 = *(uint64_t*)_975;
  _1009 = *(uint64_t*)_977;
  _1010 = *(void**)_530;
  _1011 = *(uint64_t*)(((&((uint8_t*)_1010)[((int64_t)16)])));
  *(uint64_t*)_972 = _1007;
  *(uint64_t*)_973 = _1008;
  *(uint64_t*)_975 = _1009;
  *(uint64_t*)_977 = _1011;
  _1012 = *(void**)_530;
  _1013 = ((&((uint8_t*)_1012)[((int64_t)16)]));
  _1014 = *(uint64_t*)_1013;
  _1015 = ((&((uint8_t*)_1012)[((int64_t)8)]));
  _1016 = *(uint64_t*)_1015;
  if ((((int64_t)_1016) > ((int64_t)_1014))) {
    goto _1529;
  } else {
    _1033__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1530;
  }

_1529:
  _1017 = *(void**)_1012;
  _1018 = *(uint8_t*)(((&((uint8_t*)_1017)[((int64_t)_1014)])));
  *(uint64_t*)_1013 = (llvm_add_u64(_1014, 1));
  _1019 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1018)), 0);
  _1020 = llvm_sub_u8(32, (llvm_shl_u8(_1019, 3)));
  _1021 = (((uint32_t)(uint8_t)_1018)) << 24;
  if ((((uint8_t)_1020) > ((uint8_t)((uint8_t)16)))) {
    _1033__PHI_TEMPORARY = _1021;   /* for PHI node */
    goto _1530;
  } else {
    _1022__PHI_TEMPORARY = 16;   /* for PHI node */
    _1023__PHI_TEMPORARY = _1021;   /* for PHI node */
    goto _1531;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1531:
  _1022 = _1022__PHI_TEMPORARY;
  _1023 = _1023__PHI_TEMPORARY;
  if (((((int64_t)_1022) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1022) < ((uint64_t)(((uint64_t)(uint8_t)_1020)))))) {
    _1033__PHI_TEMPORARY = _1023;   /* for PHI node */
    goto _1530;
  } else {
    goto _1532;
  }

_1532:
  _1024 = *(uint64_t*)_1013;
  _1025 = *(uint64_t*)_1015;
  if ((((int64_t)_1025) > ((int64_t)_1024))) {
    goto _1533;
  } else {
    _1033__PHI_TEMPORARY = _1023;   /* for PHI node */
    goto _1530;
  }

_1533:
  _1026 = *(void**)_1012;
  _1027 = *(uint8_t*)(((&((uint8_t*)_1026)[((int64_t)_1024)])));
  if ((((int8_t)_1027) > ((int8_t)((uint8_t)-65)))) {
    _1033__PHI_TEMPORARY = _1023;   /* for PHI node */
    goto _1530;
  } else {
    goto _1534;
  }

_1534:
  _1028 = llvm_select_u32((((int64_t)_1024) < ((int64_t)_1025)), (((uint32_t)(uint8_t)_1027)), 0);
  _1029 = *(uint64_t*)_1013;
  *(uint64_t*)_1013 = (llvm_add_u64(_1029, 1));
  _1030 = llvm_neg_u64(_1022);
  _1031 = _1023 | (llvm_select_u32((((int64_t)_1022) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1030) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1028, (((uint32_t)_1030)))))), (llvm_select_u32((((uint64_t)_1022) > ((uint64_t)UINT64_C(31))), 0, (_1028 << (((uint32_t)_1022)))))));
  _1032 = llvm_add_u64(_1022, -8);
  _1022__PHI_TEMPORARY = _1032;   /* for PHI node */
  _1023__PHI_TEMPORARY = _1031;   /* for PHI node */
  goto _1531;

  } while (1); /* end of syntactic loop '' */
_1530:
  _1033 = _1033__PHI_TEMPORARY;
  _1034 = *(uint64_t*)_609;
  _1035 = *(uint64_t*)_611;
  _1036 = jsyn_cbe_fshl_i64(_1035, _1034, 32);
  _1037 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1033)), _1035, 32);
  *(uint64_t*)_609 = _1036;
  *(uint64_t*)_611 = _1037;
  _1038 = *(uint64_t*)_973;
  _1039 = *(uint64_t*)_975;
  _1040 = *(uint64_t*)_977;
  _1041 = *(void**)_530;
  _1042 = *(uint64_t*)(((&((uint8_t*)_1041)[((int64_t)16)])));
  *(uint64_t*)_972 = _1038;
  *(uint64_t*)_973 = _1039;
  *(uint64_t*)_975 = _1040;
  *(uint64_t*)_977 = _1042;
  julia_emit_20((&_546), _529, _530, (llvm_select_u16((_558 == 570425344u), 63, 65)), 1);
  _602__PHI_TEMPORARY = (&_546);   /* for PHI node */
  goto _1418;

_1522:
  julia_emit_20((&_547), _529, _530, (llvm_select_u16((_558 == 570425344u), 62, (llvm_select_u16((_558 == 1610612736u), 64, 709)))), 0);
  _602__PHI_TEMPORARY = (&_547);   /* for PHI node */
  goto _1418;

_1498:
  if (_744) {
    _1043__PHI_TEMPORARY = 1;   /* for PHI node */
    _1044__PHI_TEMPORARY = 0;   /* for PHI node */
    _1045__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1535;
  } else {
    _1235__PHI_TEMPORARY = 1;   /* for PHI node */
    _1236__PHI_TEMPORARY = 0;   /* for PHI node */
    _1237__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1536;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1535:
  _1043 = _1043__PHI_TEMPORARY;
  _1044 = _1044__PHI_TEMPORARY;
  _1045 = _1045__PHI_TEMPORARY;
  _1046 = *(uint64_t*)_609;
  _1047 = llvm_lshr_u64(_1046, 32);
  _1048 = ((uint32_t)_1047);
  _1049 = ((bool)_556&1u);
  if (_1049) {
    goto _1537;
  } else {
    _1052__PHI_TEMPORARY = _1048;   /* for PHI node */
    goto _1538;
  }

_1537:
  _1050 = *(uint64_t*)_611;
  if ((llvm_select_bool((_558 == _1048), (_558 == (((uint32_t)_1050))), 0))) {
    goto _1539;
  } else {
    goto _1540;
  }

_1540:
  if ((_1047 == UINT64_C(4294967295))) {
    _1396__PHI_TEMPORARY = _1043;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1044;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1045;   /* for PHI node */
    goto _1541;
  } else {
    goto _1542;
  }

_1539:
  _1051 = ((uint32_t)(llvm_lshr_u64(_1050, 32)));
  _1052__PHI_TEMPORARY = _1051;   /* for PHI node */
  goto _1538;

_1538:
  _1052 = _1052__PHI_TEMPORARY;
  if ((llvm_select_bool((_558 == _1052), 1, (_1047 == UINT64_C(4294967295))))) {
    _1396__PHI_TEMPORARY = _1043;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1044;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1045;   /* for PHI node */
    goto _1541;
  } else {
    goto _1542;
  }

_1542:
  if (_1049) {
    goto _1543;
  } else {
    goto _1544;
  }

_1543:
  switch ((((uint32_t)_1047))) {
  default:
    goto _1544;
  case 218103808u:
    goto _1545;
  case 167772160u:
    goto _1545;
  }

_1544:
  _1122 = *(void**)_530;
  _1123 = ((&((uint8_t*)_1122)[((int64_t)16)]));
  _1124 = *(uint64_t*)_1123;
  _1125 = ((&((uint8_t*)_1122)[((int64_t)8)]));
  _1126 = *(uint64_t*)_1125;
  if ((((int64_t)_1126) > ((int64_t)_1124))) {
    goto _1546;
  } else {
    _1143__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1547;
  }

_1546:
  _1127 = *(void**)_1122;
  _1128 = *(uint8_t*)(((&((uint8_t*)_1127)[((int64_t)_1124)])));
  *(uint64_t*)_1123 = (llvm_add_u64(_1124, 1));
  _1129 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1128)), 0);
  _1130 = llvm_sub_u8(32, (llvm_shl_u8(_1129, 3)));
  _1131 = (((uint32_t)(uint8_t)_1128)) << 24;
  if ((((uint8_t)_1130) > ((uint8_t)((uint8_t)16)))) {
    _1143__PHI_TEMPORARY = _1131;   /* for PHI node */
    goto _1547;
  } else {
    _1132__PHI_TEMPORARY = 16;   /* for PHI node */
    _1133__PHI_TEMPORARY = _1131;   /* for PHI node */
    goto _1548;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1548:
  _1132 = _1132__PHI_TEMPORARY;
  _1133 = _1133__PHI_TEMPORARY;
  if (((((int64_t)_1132) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1132) < ((uint64_t)(((uint64_t)(uint8_t)_1130)))))) {
    _1143__PHI_TEMPORARY = _1133;   /* for PHI node */
    goto _1547;
  } else {
    goto _1549;
  }

_1549:
  _1134 = *(uint64_t*)_1123;
  _1135 = *(uint64_t*)_1125;
  if ((((int64_t)_1135) > ((int64_t)_1134))) {
    goto _1550;
  } else {
    _1143__PHI_TEMPORARY = _1133;   /* for PHI node */
    goto _1547;
  }

_1550:
  _1136 = *(void**)_1122;
  _1137 = *(uint8_t*)(((&((uint8_t*)_1136)[((int64_t)_1134)])));
  if ((((int8_t)_1137) > ((int8_t)((uint8_t)-65)))) {
    _1143__PHI_TEMPORARY = _1133;   /* for PHI node */
    goto _1547;
  } else {
    goto _1551;
  }

_1551:
  _1138 = llvm_select_u32((((int64_t)_1134) < ((int64_t)_1135)), (((uint32_t)(uint8_t)_1137)), 0);
  _1139 = *(uint64_t*)_1123;
  *(uint64_t*)_1123 = (llvm_add_u64(_1139, 1));
  _1140 = llvm_neg_u64(_1132);
  _1141 = _1133 | (llvm_select_u32((((int64_t)_1132) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1140) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1138, (((uint32_t)_1140)))))), (llvm_select_u32((((uint64_t)_1132) > ((uint64_t)UINT64_C(31))), 0, (_1138 << (((uint32_t)_1132)))))));
  _1142 = llvm_add_u64(_1132, -8);
  _1132__PHI_TEMPORARY = _1142;   /* for PHI node */
  _1133__PHI_TEMPORARY = _1141;   /* for PHI node */
  goto _1548;

  } while (1); /* end of syntactic loop '' */
_1547:
  _1143 = _1143__PHI_TEMPORARY;
  _1144 = *(uint64_t*)_609;
  _1145 = *(uint64_t*)_611;
  _1146 = jsyn_cbe_fshl_i64(_1145, _1144, 32);
  _1147 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1143)), _1145, 32);
  *(uint64_t*)_609 = _1146;
  *(uint64_t*)_611 = _1147;
  _1148 = ((&((uint8_t*)_530)[((int64_t)48)]));
  _1149 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _1150 = *(uint64_t*)_1149;
  _1151 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _1152 = *(uint64_t*)_1151;
  _1153 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _1154 = *(uint64_t*)_1153;
  _1155 = *(void**)_530;
  _1156 = *(uint64_t*)(((&((uint8_t*)_1155)[((int64_t)16)])));
  *(uint64_t*)_1148 = _1150;
  *(uint64_t*)_1149 = _1152;
  *(uint64_t*)_1151 = _1154;
  *(uint64_t*)_1153 = _1156;
  _1157 = *(uint64_t*)_609;
  _1158 = ((uint32_t)_1157);
  switch (_1158) {
  default:
    goto _1552;
  case 1543503872u:
    _1159__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1553;
  case 167772160u:
    _1229__PHI_TEMPORARY = 0;   /* for PHI node */
    _1230__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1554;
  case 3800082944u:
    goto _1555;
  case 3800083200u:
    goto _1555;
  case 3800083712u:
    goto _1555;
  case 3800083968u:
    goto _1555;
  case 3800083456u:
    goto _1556;
  case 3800147456u:
    goto _1557;
  case 3800147712u:
    goto _1557;
  case 3800147968u:
    goto _1557;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1553:
  _1159 = _1159__PHI_TEMPORARY;
  _1160 = *(uint64_t*)_609;
  _1161 = llvm_lshr_u64(_1160, 32);
  if ((_1161 == UINT64_C(1543503872))) {
    goto _1558;
  } else {
    goto _1559;
  }

_1558:
  _1162 = *(void**)_530;
  _1163 = ((&((uint8_t*)_1162)[((int64_t)16)]));
  _1164 = *(uint64_t*)_1163;
  _1165 = ((&((uint8_t*)_1162)[((int64_t)8)]));
  _1166 = *(uint64_t*)_1165;
  if ((((int64_t)_1166) > ((int64_t)_1164))) {
    goto _1560;
  } else {
    _1183__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1561;
  }

_1560:
  _1167 = *(void**)_1162;
  _1168 = *(uint8_t*)(((&((uint8_t*)_1167)[((int64_t)_1164)])));
  *(uint64_t*)_1163 = (llvm_add_u64(_1164, 1));
  _1169 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1168)), 0);
  _1170 = llvm_sub_u8(32, (llvm_shl_u8(_1169, 3)));
  _1171 = (((uint32_t)(uint8_t)_1168)) << 24;
  if ((((uint8_t)_1170) > ((uint8_t)((uint8_t)16)))) {
    _1183__PHI_TEMPORARY = _1171;   /* for PHI node */
    goto _1561;
  } else {
    _1172__PHI_TEMPORARY = 16;   /* for PHI node */
    _1173__PHI_TEMPORARY = _1171;   /* for PHI node */
    goto _1562;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1562:
  _1172 = _1172__PHI_TEMPORARY;
  _1173 = _1173__PHI_TEMPORARY;
  if (((((int64_t)_1172) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1172) < ((uint64_t)(((uint64_t)(uint8_t)_1170)))))) {
    _1183__PHI_TEMPORARY = _1173;   /* for PHI node */
    goto _1561;
  } else {
    goto _1563;
  }

_1563:
  _1174 = *(uint64_t*)_1163;
  _1175 = *(uint64_t*)_1165;
  if ((((int64_t)_1175) > ((int64_t)_1174))) {
    goto _1564;
  } else {
    _1183__PHI_TEMPORARY = _1173;   /* for PHI node */
    goto _1561;
  }

_1564:
  _1176 = *(void**)_1162;
  _1177 = *(uint8_t*)(((&((uint8_t*)_1176)[((int64_t)_1174)])));
  if ((((int8_t)_1177) > ((int8_t)((uint8_t)-65)))) {
    _1183__PHI_TEMPORARY = _1173;   /* for PHI node */
    goto _1561;
  } else {
    goto _1565;
  }

_1565:
  _1178 = llvm_select_u32((((int64_t)_1174) < ((int64_t)_1175)), (((uint32_t)(uint8_t)_1177)), 0);
  _1179 = *(uint64_t*)_1163;
  *(uint64_t*)_1163 = (llvm_add_u64(_1179, 1));
  _1180 = llvm_neg_u64(_1172);
  _1181 = _1173 | (llvm_select_u32((((int64_t)_1172) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1180) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1178, (((uint32_t)_1180)))))), (llvm_select_u32((((uint64_t)_1172) > ((uint64_t)UINT64_C(31))), 0, (_1178 << (((uint32_t)_1172)))))));
  _1182 = llvm_add_u64(_1172, -8);
  _1172__PHI_TEMPORARY = _1182;   /* for PHI node */
  _1173__PHI_TEMPORARY = _1181;   /* for PHI node */
  goto _1562;

  } while (1); /* end of syntactic loop '' */
_1561:
  _1183 = _1183__PHI_TEMPORARY;
  _1184 = *(uint64_t*)_609;
  _1185 = *(uint64_t*)_611;
  _1186 = jsyn_cbe_fshl_i64(_1185, _1184, 32);
  _1187 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1183)), _1185, 32);
  *(uint64_t*)_609 = _1186;
  *(uint64_t*)_611 = _1187;
  _1188 = *(uint64_t*)_1149;
  _1189 = *(uint64_t*)_1151;
  _1190 = *(uint64_t*)_1153;
  _1191 = *(void**)_530;
  _1192 = *(uint64_t*)(((&((uint8_t*)_1191)[((int64_t)16)])));
  *(uint64_t*)_1148 = _1188;
  *(uint64_t*)_1149 = _1189;
  *(uint64_t*)_1151 = _1190;
  *(uint64_t*)_1153 = _1192;
  _1193 = llvm_add_u64(_1159, 1);
  _1159__PHI_TEMPORARY = _1193;   /* for PHI node */
  goto _1553;

  } while (1); /* end of syntactic loop '' */
_1559:
  if ((llvm_select_bool((_558 != (((uint32_t)_1161))), 1, ((_1159 & 1) == UINT64_C(0))))) {
    goto _1566;
  } else {
    goto _1567;
  }

_1567:
  _1194 = *(void**)_530;
  _1195 = ((&((uint8_t*)_1194)[((int64_t)16)]));
  _1196 = *(uint64_t*)_1195;
  _1197 = ((&((uint8_t*)_1194)[((int64_t)8)]));
  _1198 = *(uint64_t*)_1197;
  if ((((int64_t)_1198) > ((int64_t)_1196))) {
    goto _1568;
  } else {
    _1215__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1569;
  }

_1568:
  _1199 = *(void**)_1194;
  _1200 = *(uint8_t*)(((&((uint8_t*)_1199)[((int64_t)_1196)])));
  *(uint64_t*)_1195 = (llvm_add_u64(_1196, 1));
  _1201 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1200)), 0);
  _1202 = llvm_sub_u8(32, (llvm_shl_u8(_1201, 3)));
  _1203 = (((uint32_t)(uint8_t)_1200)) << 24;
  if ((((uint8_t)_1202) > ((uint8_t)((uint8_t)16)))) {
    _1215__PHI_TEMPORARY = _1203;   /* for PHI node */
    goto _1569;
  } else {
    _1204__PHI_TEMPORARY = 16;   /* for PHI node */
    _1205__PHI_TEMPORARY = _1203;   /* for PHI node */
    goto _1570;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1570:
  _1204 = _1204__PHI_TEMPORARY;
  _1205 = _1205__PHI_TEMPORARY;
  if (((((int64_t)_1204) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1204) < ((uint64_t)(((uint64_t)(uint8_t)_1202)))))) {
    _1215__PHI_TEMPORARY = _1205;   /* for PHI node */
    goto _1569;
  } else {
    goto _1571;
  }

_1571:
  _1206 = *(uint64_t*)_1195;
  _1207 = *(uint64_t*)_1197;
  if ((((int64_t)_1207) > ((int64_t)_1206))) {
    goto _1572;
  } else {
    _1215__PHI_TEMPORARY = _1205;   /* for PHI node */
    goto _1569;
  }

_1572:
  _1208 = *(void**)_1194;
  _1209 = *(uint8_t*)(((&((uint8_t*)_1208)[((int64_t)_1206)])));
  if ((((int8_t)_1209) > ((int8_t)((uint8_t)-65)))) {
    _1215__PHI_TEMPORARY = _1205;   /* for PHI node */
    goto _1569;
  } else {
    goto _1573;
  }

_1573:
  _1210 = llvm_select_u32((((int64_t)_1206) < ((int64_t)_1207)), (((uint32_t)(uint8_t)_1209)), 0);
  _1211 = *(uint64_t*)_1195;
  *(uint64_t*)_1195 = (llvm_add_u64(_1211, 1));
  _1212 = llvm_neg_u64(_1204);
  _1213 = _1205 | (llvm_select_u32((((int64_t)_1204) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1212) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1210, (((uint32_t)_1212)))))), (llvm_select_u32((((uint64_t)_1204) > ((uint64_t)UINT64_C(31))), 0, (_1210 << (((uint32_t)_1204)))))));
  _1214 = llvm_add_u64(_1204, -8);
  _1204__PHI_TEMPORARY = _1214;   /* for PHI node */
  _1205__PHI_TEMPORARY = _1213;   /* for PHI node */
  goto _1570;

  } while (1); /* end of syntactic loop '' */
_1569:
  _1215 = _1215__PHI_TEMPORARY;
  _1216 = *(uint64_t*)_609;
  _1217 = *(uint64_t*)_611;
  _1218 = jsyn_cbe_fshl_i64(_1217, _1216, 32);
  _1219 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1215)), _1217, 32);
  *(uint64_t*)_609 = _1218;
  *(uint64_t*)_611 = _1219;
  _1220 = *(uint64_t*)_1149;
  _1221 = *(uint64_t*)_1151;
  _1222 = *(uint64_t*)_1153;
  _1223 = *(void**)_530;
  _1224 = *(uint64_t*)(((&((uint8_t*)_1223)[((int64_t)16)])));
  *(uint64_t*)_1148 = _1220;
  *(uint64_t*)_1149 = _1221;
  *(uint64_t*)_1151 = _1222;
  *(uint64_t*)_1153 = _1224;
  goto _1566;

_1566:
  switch (_1158) {
  default:
    goto _1552;
  case 167772160u:
    _1229__PHI_TEMPORARY = 0;   /* for PHI node */
    _1230__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1554;
  case 3800082944u:
    goto _1555;
  case 3800083200u:
    goto _1555;
  case 3800083712u:
    goto _1555;
  case 3800083968u:
    goto _1555;
  case 3800083456u:
    goto _1556;
  case 3800147456u:
    goto _1557;
  case 3800147712u:
    goto _1557;
  case 3800147968u:
    goto _1557;
  }

_1557:
  _1227 = llvm_add_u64(_1045, 1);
  _1229__PHI_TEMPORARY = _1044;   /* for PHI node */
  _1230__PHI_TEMPORARY = _1227;   /* for PHI node */
  goto _1554;

_1556:
  _1225 = llvm_add_u64(_1044, -1);
  _1229__PHI_TEMPORARY = _1225;   /* for PHI node */
  _1230__PHI_TEMPORARY = _1045;   /* for PHI node */
  goto _1554;

_1555:
  _1228 = llvm_add_u64(_1044, 1);
  _1229__PHI_TEMPORARY = _1228;   /* for PHI node */
  _1230__PHI_TEMPORARY = _1045;   /* for PHI node */
  goto _1554;

_1552:
  _1226 = llvm_add_u64(_1045, (((int64_t)(bool)0-(_1158 == 3800148224u))));
  _1229__PHI_TEMPORARY = _1044;   /* for PHI node */
  _1230__PHI_TEMPORARY = _1226;   /* for PHI node */
  goto _1554;

_1554:
  _1229 = _1229__PHI_TEMPORARY;
  _1230 = _1230__PHI_TEMPORARY;
  _1231 = llvm_OC_ctlz_OC_i32((_1158 ^ -1), 0);
  _1232 = llvm_OC_cttz_OC_i32(_1158, 0);
  _1233 = _1232 & 56;
  _1234 = _1043 & (((((_1231 != 1u) & (((uint32_t)(llvm_add_u32((_1231 << 3), _1233))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_1232) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_1158 & 12632256) ^ 8421504), _1233)) == 0u)))) & ((((_1158 & -33554432) != 3221225472u) & ((_1158 & -2097152) != 3766484992u)) & ((_1158 & -1048576) != 4034920448u))) & ((((uint32_t)_1158) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_1158, 293568512))) < ((uint32_t)101662656u))));
  _1043__PHI_TEMPORARY = _1234;   /* for PHI node */
  _1044__PHI_TEMPORARY = _1229;   /* for PHI node */
  _1045__PHI_TEMPORARY = _1230;   /* for PHI node */
  goto _1535;

  } while (1); /* end of syntactic loop '' */
_1545:
  _1053 = *(void**)_530;
  _1054 = ((&((uint8_t*)_1053)[((int64_t)16)]));
  _1055 = *(uint64_t*)_1054;
  _1056 = ((&((uint8_t*)_1053)[((int64_t)8)]));
  _1057 = *(uint64_t*)_1056;
  if ((((int64_t)_1057) > ((int64_t)_1055))) {
    goto _1574;
  } else {
    _1074__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1575;
  }

_1574:
  _1058 = *(void**)_1053;
  _1059 = *(uint8_t*)(((&((uint8_t*)_1058)[((int64_t)_1055)])));
  *(uint64_t*)_1054 = (llvm_add_u64(_1055, 1));
  _1060 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1059)), 0);
  _1061 = llvm_sub_u8(32, (llvm_shl_u8(_1060, 3)));
  _1062 = (((uint32_t)(uint8_t)_1059)) << 24;
  if ((((uint8_t)_1061) > ((uint8_t)((uint8_t)16)))) {
    _1074__PHI_TEMPORARY = _1062;   /* for PHI node */
    goto _1575;
  } else {
    _1063__PHI_TEMPORARY = 16;   /* for PHI node */
    _1064__PHI_TEMPORARY = _1062;   /* for PHI node */
    goto _1576;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1576:
  _1063 = _1063__PHI_TEMPORARY;
  _1064 = _1064__PHI_TEMPORARY;
  if (((((int64_t)_1063) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1063) < ((uint64_t)(((uint64_t)(uint8_t)_1061)))))) {
    _1074__PHI_TEMPORARY = _1064;   /* for PHI node */
    goto _1575;
  } else {
    goto _1577;
  }

_1577:
  _1065 = *(uint64_t*)_1054;
  _1066 = *(uint64_t*)_1056;
  if ((((int64_t)_1066) > ((int64_t)_1065))) {
    goto _1578;
  } else {
    _1074__PHI_TEMPORARY = _1064;   /* for PHI node */
    goto _1575;
  }

_1578:
  _1067 = *(void**)_1053;
  _1068 = *(uint8_t*)(((&((uint8_t*)_1067)[((int64_t)_1065)])));
  if ((((int8_t)_1068) > ((int8_t)((uint8_t)-65)))) {
    _1074__PHI_TEMPORARY = _1064;   /* for PHI node */
    goto _1575;
  } else {
    goto _1579;
  }

_1579:
  _1069 = llvm_select_u32((((int64_t)_1065) < ((int64_t)_1066)), (((uint32_t)(uint8_t)_1068)), 0);
  _1070 = *(uint64_t*)_1054;
  *(uint64_t*)_1054 = (llvm_add_u64(_1070, 1));
  _1071 = llvm_neg_u64(_1063);
  _1072 = _1064 | (llvm_select_u32((((int64_t)_1063) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1071) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1069, (((uint32_t)_1071)))))), (llvm_select_u32((((uint64_t)_1063) > ((uint64_t)UINT64_C(31))), 0, (_1069 << (((uint32_t)_1063)))))));
  _1073 = llvm_add_u64(_1063, -8);
  _1063__PHI_TEMPORARY = _1073;   /* for PHI node */
  _1064__PHI_TEMPORARY = _1072;   /* for PHI node */
  goto _1576;

  } while (1); /* end of syntactic loop '' */
_1575:
  _1074 = _1074__PHI_TEMPORARY;
  _1075 = *(uint64_t*)_609;
  _1076 = *(uint64_t*)_611;
  _1077 = jsyn_cbe_fshl_i64(_1076, _1075, 32);
  _1078 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1074)), _1076, 32);
  *(uint64_t*)_609 = _1077;
  *(uint64_t*)_611 = _1078;
  _1079 = ((&((uint8_t*)_530)[((int64_t)48)]));
  _1080 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _1081 = *(uint64_t*)_1080;
  _1082 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _1083 = *(uint64_t*)_1082;
  _1084 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _1085 = *(uint64_t*)_1084;
  _1086 = *(void**)_530;
  _1087 = *(uint64_t*)(((&((uint8_t*)_1086)[((int64_t)16)])));
  *(uint64_t*)_1079 = _1081;
  *(uint64_t*)_1080 = _1083;
  *(uint64_t*)_1082 = _1085;
  *(uint64_t*)_1084 = _1087;
  _1088 = llvm_select_u64((_1047 == UINT64_C(167772160)), 0, _1044);
  _1089 = llvm_select_u64((_1047 == UINT64_C(167772160)), 0, _1045);
  if ((_1047 == UINT64_C(218103808))) {
    goto _1580;
  } else {
    _1396__PHI_TEMPORARY = _1043;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1088;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1089;   /* for PHI node */
    goto _1541;
  }

_1580:
  _1090 = *(uint64_t*)_609;
  if (((_1090 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1581;
  } else {
    _1396__PHI_TEMPORARY = _1043;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1044;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1045;   /* for PHI node */
    goto _1541;
  }

_1581:
  _1091 = *(void**)_530;
  _1092 = ((&((uint8_t*)_1091)[((int64_t)16)]));
  _1093 = *(uint64_t*)_1092;
  _1094 = ((&((uint8_t*)_1091)[((int64_t)8)]));
  _1095 = *(uint64_t*)_1094;
  if ((((int64_t)_1095) > ((int64_t)_1093))) {
    goto _1582;
  } else {
    _1112__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1583;
  }

_1582:
  _1096 = *(void**)_1091;
  _1097 = *(uint8_t*)(((&((uint8_t*)_1096)[((int64_t)_1093)])));
  *(uint64_t*)_1092 = (llvm_add_u64(_1093, 1));
  _1098 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1097)), 0);
  _1099 = llvm_sub_u8(32, (llvm_shl_u8(_1098, 3)));
  _1100 = (((uint32_t)(uint8_t)_1097)) << 24;
  if ((((uint8_t)_1099) > ((uint8_t)((uint8_t)16)))) {
    _1112__PHI_TEMPORARY = _1100;   /* for PHI node */
    goto _1583;
  } else {
    _1101__PHI_TEMPORARY = 16;   /* for PHI node */
    _1102__PHI_TEMPORARY = _1100;   /* for PHI node */
    goto _1584;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1584:
  _1101 = _1101__PHI_TEMPORARY;
  _1102 = _1102__PHI_TEMPORARY;
  if (((((int64_t)_1101) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1101) < ((uint64_t)(((uint64_t)(uint8_t)_1099)))))) {
    _1112__PHI_TEMPORARY = _1102;   /* for PHI node */
    goto _1583;
  } else {
    goto _1585;
  }

_1585:
  _1103 = *(uint64_t*)_1092;
  _1104 = *(uint64_t*)_1094;
  if ((((int64_t)_1104) > ((int64_t)_1103))) {
    goto _1586;
  } else {
    _1112__PHI_TEMPORARY = _1102;   /* for PHI node */
    goto _1583;
  }

_1586:
  _1105 = *(void**)_1091;
  _1106 = *(uint8_t*)(((&((uint8_t*)_1105)[((int64_t)_1103)])));
  if ((((int8_t)_1106) > ((int8_t)((uint8_t)-65)))) {
    _1112__PHI_TEMPORARY = _1102;   /* for PHI node */
    goto _1583;
  } else {
    goto _1587;
  }

_1587:
  _1107 = llvm_select_u32((((int64_t)_1103) < ((int64_t)_1104)), (((uint32_t)(uint8_t)_1106)), 0);
  _1108 = *(uint64_t*)_1092;
  *(uint64_t*)_1092 = (llvm_add_u64(_1108, 1));
  _1109 = llvm_neg_u64(_1101);
  _1110 = _1102 | (llvm_select_u32((((int64_t)_1101) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1109) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1107, (((uint32_t)_1109)))))), (llvm_select_u32((((uint64_t)_1101) > ((uint64_t)UINT64_C(31))), 0, (_1107 << (((uint32_t)_1101)))))));
  _1111 = llvm_add_u64(_1101, -8);
  _1101__PHI_TEMPORARY = _1111;   /* for PHI node */
  _1102__PHI_TEMPORARY = _1110;   /* for PHI node */
  goto _1584;

  } while (1); /* end of syntactic loop '' */
_1583:
  _1112 = _1112__PHI_TEMPORARY;
  _1113 = *(uint64_t*)_609;
  _1114 = *(uint64_t*)_611;
  _1115 = jsyn_cbe_fshl_i64(_1114, _1113, 32);
  _1116 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1112)), _1114, 32);
  *(uint64_t*)_609 = _1115;
  *(uint64_t*)_611 = _1116;
  _1117 = *(uint64_t*)_1080;
  _1118 = *(uint64_t*)_1082;
  _1119 = *(uint64_t*)_1084;
  _1120 = *(void**)_530;
  _1121 = *(uint64_t*)(((&((uint8_t*)_1120)[((int64_t)16)])));
  *(uint64_t*)_1079 = _1117;
  *(uint64_t*)_1080 = _1118;
  *(uint64_t*)_1082 = _1119;
  *(uint64_t*)_1084 = _1121;
  _1396__PHI_TEMPORARY = _1043;   /* for PHI node */
  _1397__PHI_TEMPORARY = 0;   /* for PHI node */
  _1398__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1541;

  do {     /* Syntactic loop '' to make GCC happy */
_1536:
  _1235 = _1235__PHI_TEMPORARY;
  _1236 = _1236__PHI_TEMPORARY;
  _1237 = _1237__PHI_TEMPORARY;
  _1238 = *(uint64_t*)_609;
  _1239 = llvm_lshr_u64(_1238, 32);
  _1240 = ((uint32_t)_1239);
  switch ((((uint32_t)_1239))) {
  default:
    goto _1588;
  case 603979776u:
    _1396__PHI_TEMPORARY = _1235;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1236;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    goto _1541;
  case 4294967295u:
    _1396__PHI_TEMPORARY = _1235;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1236;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    goto _1541;
  }

_1588:
  _1241 = ((bool)_556&1u);
  if (_1241) {
    goto _1589;
  } else {
    goto _1590;
  }

_1589:
  switch ((((uint32_t)_1239))) {
  default:
    goto _1590;
  case 218103808u:
    goto _1591;
  case 167772160u:
    goto _1591;
  }

_1590:
  if ((_558 == _1240)) {
    goto _1592;
  } else {
    goto _1593;
  }

_1592:
  _1311 = *(uint64_t*)_609;
  if (_1241) {
    goto _1594;
  } else {
    _1313__PHI_TEMPORARY = _1311;   /* for PHI node */
    goto _1595;
  }

_1594:
  _1312 = *(uint64_t*)_611;
  if ((llvm_select_bool((_558 == (((uint32_t)(llvm_lshr_u64(_1311, 32))))), (_558 == (((uint32_t)_1312))), 0))) {
    _1313__PHI_TEMPORARY = _1312;   /* for PHI node */
    goto _1595;
  } else {
    goto _1593;
  }

_1595:
  _1313 = _1313__PHI_TEMPORARY;
  if ((_558 == (((uint32_t)(llvm_lshr_u64(_1313, 32)))))) {
    _1396__PHI_TEMPORARY = _1235;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1236;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    goto _1541;
  } else {
    goto _1593;
  }

_1593:
  if ((_1239 == UINT64_C(1543503872))) {
    goto _1596;
  } else {
    goto _1597;
  }

_1596:
  _1314 = *(uint64_t*)_611;
  switch ((((uint32_t)_1314))) {
  default:
    goto _1597;
  case 167772160u:
    goto _1598;
  case 218103808u:
    goto _1599;
  }

_1597:
  _1315 = *(void**)_530;
  _1316 = ((&((uint8_t*)_1315)[((int64_t)16)]));
  _1317 = *(uint64_t*)_1316;
  _1318 = ((&((uint8_t*)_1315)[((int64_t)8)]));
  _1319 = *(uint64_t*)_1318;
  if ((((int64_t)_1319) > ((int64_t)_1317))) {
    goto _1600;
  } else {
    _1336__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1601;
  }

_1600:
  _1320 = *(void**)_1315;
  _1321 = *(uint8_t*)(((&((uint8_t*)_1320)[((int64_t)_1317)])));
  *(uint64_t*)_1316 = (llvm_add_u64(_1317, 1));
  _1322 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1321)), 0);
  _1323 = llvm_sub_u8(32, (llvm_shl_u8(_1322, 3)));
  _1324 = (((uint32_t)(uint8_t)_1321)) << 24;
  if ((((uint8_t)_1323) > ((uint8_t)((uint8_t)16)))) {
    _1336__PHI_TEMPORARY = _1324;   /* for PHI node */
    goto _1601;
  } else {
    _1325__PHI_TEMPORARY = 16;   /* for PHI node */
    _1326__PHI_TEMPORARY = _1324;   /* for PHI node */
    goto _1602;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1602:
  _1325 = _1325__PHI_TEMPORARY;
  _1326 = _1326__PHI_TEMPORARY;
  if (((((int64_t)_1325) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1325) < ((uint64_t)(((uint64_t)(uint8_t)_1323)))))) {
    _1336__PHI_TEMPORARY = _1326;   /* for PHI node */
    goto _1601;
  } else {
    goto _1603;
  }

_1603:
  _1327 = *(uint64_t*)_1316;
  _1328 = *(uint64_t*)_1318;
  if ((((int64_t)_1328) > ((int64_t)_1327))) {
    goto _1604;
  } else {
    _1336__PHI_TEMPORARY = _1326;   /* for PHI node */
    goto _1601;
  }

_1604:
  _1329 = *(void**)_1315;
  _1330 = *(uint8_t*)(((&((uint8_t*)_1329)[((int64_t)_1327)])));
  if ((((int8_t)_1330) > ((int8_t)((uint8_t)-65)))) {
    _1336__PHI_TEMPORARY = _1326;   /* for PHI node */
    goto _1601;
  } else {
    goto _1605;
  }

_1605:
  _1331 = llvm_select_u32((((int64_t)_1327) < ((int64_t)_1328)), (((uint32_t)(uint8_t)_1330)), 0);
  _1332 = *(uint64_t*)_1316;
  *(uint64_t*)_1316 = (llvm_add_u64(_1332, 1));
  _1333 = llvm_neg_u64(_1325);
  _1334 = _1326 | (llvm_select_u32((((int64_t)_1325) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1333) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1331, (((uint32_t)_1333)))))), (llvm_select_u32((((uint64_t)_1325) > ((uint64_t)UINT64_C(31))), 0, (_1331 << (((uint32_t)_1325)))))));
  _1335 = llvm_add_u64(_1325, -8);
  _1325__PHI_TEMPORARY = _1335;   /* for PHI node */
  _1326__PHI_TEMPORARY = _1334;   /* for PHI node */
  goto _1602;

  } while (1); /* end of syntactic loop '' */
_1601:
  _1336 = _1336__PHI_TEMPORARY;
  _1337 = *(uint64_t*)_609;
  _1338 = *(uint64_t*)_611;
  _1339 = jsyn_cbe_fshl_i64(_1338, _1337, 32);
  _1340 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1336)), _1338, 32);
  *(uint64_t*)_609 = _1339;
  *(uint64_t*)_611 = _1340;
  _1341 = ((&((uint8_t*)_530)[((int64_t)48)]));
  _1342 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _1343 = *(uint64_t*)_1342;
  _1344 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _1345 = *(uint64_t*)_1344;
  _1346 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _1347 = *(uint64_t*)_1346;
  _1348 = *(void**)_530;
  _1349 = *(uint64_t*)(((&((uint8_t*)_1348)[((int64_t)16)])));
  *(uint64_t*)_1341 = _1343;
  *(uint64_t*)_1342 = _1345;
  *(uint64_t*)_1344 = _1347;
  *(uint64_t*)_1346 = _1349;
  _1350 = *(uint64_t*)_609;
  _1351 = ((uint32_t)_1350);
  if ((_1351 == 1543503872u)) {
    goto _1606;
  } else {
    _1385__PHI_TEMPORARY = _1351;   /* for PHI node */
    goto _1607;
  }

_1606:
  _1352 = *(void**)_530;
  _1353 = ((&((uint8_t*)_1352)[((int64_t)16)]));
  _1354 = *(uint64_t*)_1353;
  _1355 = ((&((uint8_t*)_1352)[((int64_t)8)]));
  _1356 = *(uint64_t*)_1355;
  if ((((int64_t)_1356) > ((int64_t)_1354))) {
    goto _1608;
  } else {
    _1373__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1609;
  }

_1608:
  _1357 = *(void**)_1352;
  _1358 = *(uint8_t*)(((&((uint8_t*)_1357)[((int64_t)_1354)])));
  *(uint64_t*)_1353 = (llvm_add_u64(_1354, 1));
  _1359 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1358)), 0);
  _1360 = llvm_sub_u8(32, (llvm_shl_u8(_1359, 3)));
  _1361 = (((uint32_t)(uint8_t)_1358)) << 24;
  if ((((uint8_t)_1360) > ((uint8_t)((uint8_t)16)))) {
    _1373__PHI_TEMPORARY = _1361;   /* for PHI node */
    goto _1609;
  } else {
    _1362__PHI_TEMPORARY = 16;   /* for PHI node */
    _1363__PHI_TEMPORARY = _1361;   /* for PHI node */
    goto _1610;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1610:
  _1362 = _1362__PHI_TEMPORARY;
  _1363 = _1363__PHI_TEMPORARY;
  if (((((int64_t)_1362) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1362) < ((uint64_t)(((uint64_t)(uint8_t)_1360)))))) {
    _1373__PHI_TEMPORARY = _1363;   /* for PHI node */
    goto _1609;
  } else {
    goto _1611;
  }

_1611:
  _1364 = *(uint64_t*)_1353;
  _1365 = *(uint64_t*)_1355;
  if ((((int64_t)_1365) > ((int64_t)_1364))) {
    goto _1612;
  } else {
    _1373__PHI_TEMPORARY = _1363;   /* for PHI node */
    goto _1609;
  }

_1612:
  _1366 = *(void**)_1352;
  _1367 = *(uint8_t*)(((&((uint8_t*)_1366)[((int64_t)_1364)])));
  if ((((int8_t)_1367) > ((int8_t)((uint8_t)-65)))) {
    _1373__PHI_TEMPORARY = _1363;   /* for PHI node */
    goto _1609;
  } else {
    goto _1613;
  }

_1613:
  _1368 = llvm_select_u32((((int64_t)_1364) < ((int64_t)_1365)), (((uint32_t)(uint8_t)_1367)), 0);
  _1369 = *(uint64_t*)_1353;
  *(uint64_t*)_1353 = (llvm_add_u64(_1369, 1));
  _1370 = llvm_neg_u64(_1362);
  _1371 = _1363 | (llvm_select_u32((((int64_t)_1362) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1370) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1368, (((uint32_t)_1370)))))), (llvm_select_u32((((uint64_t)_1362) > ((uint64_t)UINT64_C(31))), 0, (_1368 << (((uint32_t)_1362)))))));
  _1372 = llvm_add_u64(_1362, -8);
  _1362__PHI_TEMPORARY = _1372;   /* for PHI node */
  _1363__PHI_TEMPORARY = _1371;   /* for PHI node */
  goto _1610;

  } while (1); /* end of syntactic loop '' */
_1609:
  _1373 = _1373__PHI_TEMPORARY;
  _1374 = *(uint64_t*)_609;
  _1375 = *(uint64_t*)_611;
  _1376 = jsyn_cbe_fshl_i64(_1375, _1374, 32);
  _1377 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1373)), _1375, 32);
  *(uint64_t*)_609 = _1376;
  *(uint64_t*)_611 = _1377;
  _1378 = *(uint64_t*)_1342;
  _1379 = *(uint64_t*)_1344;
  _1380 = *(uint64_t*)_1346;
  _1381 = *(void**)_530;
  _1382 = *(uint64_t*)(((&((uint8_t*)_1381)[((int64_t)16)])));
  *(uint64_t*)_1341 = _1378;
  *(uint64_t*)_1342 = _1379;
  *(uint64_t*)_1344 = _1380;
  *(uint64_t*)_1346 = _1382;
  _1383 = *(uint64_t*)_609;
  _1384 = ((uint32_t)_1383);
  if ((_1384 == 4294967295u)) {
    _1396__PHI_TEMPORARY = _1235;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1236;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    goto _1541;
  } else {
    _1385__PHI_TEMPORARY = _1384;   /* for PHI node */
    goto _1607;
  }

_1607:
  _1385 = _1385__PHI_TEMPORARY;
  switch (_1385) {
  default:
    goto _1614;
  case 167772160u:
    _1390__PHI_TEMPORARY = 0;   /* for PHI node */
    _1391__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1615;
  case 3800083968u:
    goto _1616;
  case 3800083712u:
    goto _1616;
  case 3800083200u:
    goto _1616;
  case 3800082944u:
    goto _1616;
  case 3800083456u:
    goto _1617;
  case 3800147968u:
    goto _1618;
  case 3800147712u:
    goto _1618;
  case 3800147456u:
    goto _1618;
  }

_1618:
  _1388 = llvm_add_u64(_1237, 1);
  _1390__PHI_TEMPORARY = _1236;   /* for PHI node */
  _1391__PHI_TEMPORARY = _1388;   /* for PHI node */
  goto _1615;

_1617:
  _1386 = llvm_add_u64(_1236, -1);
  _1390__PHI_TEMPORARY = _1386;   /* for PHI node */
  _1391__PHI_TEMPORARY = _1237;   /* for PHI node */
  goto _1615;

_1616:
  _1389 = llvm_add_u64(_1236, 1);
  _1390__PHI_TEMPORARY = _1389;   /* for PHI node */
  _1391__PHI_TEMPORARY = _1237;   /* for PHI node */
  goto _1615;

_1614:
  _1387 = llvm_add_u64(_1237, (((int64_t)(bool)0-(_1385 == 3800148224u))));
  _1390__PHI_TEMPORARY = _1236;   /* for PHI node */
  _1391__PHI_TEMPORARY = _1387;   /* for PHI node */
  goto _1615;

_1615:
  _1390 = _1390__PHI_TEMPORARY;
  _1391 = _1391__PHI_TEMPORARY;
  _1392 = llvm_OC_ctlz_OC_i32((_1385 ^ -1), 0);
  _1393 = llvm_OC_cttz_OC_i32(_1385, 0);
  _1394 = _1393 & 56;
  _1395 = _1235 & (((((_1392 != 1u) & (((uint32_t)(llvm_add_u32((_1392 << 3), _1394))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_1393) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_1385 & 12632256) ^ 8421504), _1394)) == 0u)))) & ((((_1385 & -33554432) != 3221225472u) & ((_1385 & -2097152) != 3766484992u)) & ((_1385 & -1048576) != 4034920448u))) & ((((uint32_t)_1385) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_1385, 293568512))) < ((uint32_t)101662656u))));
  _1235__PHI_TEMPORARY = _1395;   /* for PHI node */
  _1236__PHI_TEMPORARY = _1390;   /* for PHI node */
  _1237__PHI_TEMPORARY = _1391;   /* for PHI node */
  goto _1536;

  } while (1); /* end of syntactic loop '' */
_1591:
  _1242 = *(void**)_530;
  _1243 = ((&((uint8_t*)_1242)[((int64_t)16)]));
  _1244 = *(uint64_t*)_1243;
  _1245 = ((&((uint8_t*)_1242)[((int64_t)8)]));
  _1246 = *(uint64_t*)_1245;
  if ((((int64_t)_1246) > ((int64_t)_1244))) {
    goto _1619;
  } else {
    _1263__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1620;
  }

_1619:
  _1247 = *(void**)_1242;
  _1248 = *(uint8_t*)(((&((uint8_t*)_1247)[((int64_t)_1244)])));
  *(uint64_t*)_1243 = (llvm_add_u64(_1244, 1));
  _1249 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1248)), 0);
  _1250 = llvm_sub_u8(32, (llvm_shl_u8(_1249, 3)));
  _1251 = (((uint32_t)(uint8_t)_1248)) << 24;
  if ((((uint8_t)_1250) > ((uint8_t)((uint8_t)16)))) {
    _1263__PHI_TEMPORARY = _1251;   /* for PHI node */
    goto _1620;
  } else {
    _1252__PHI_TEMPORARY = 16;   /* for PHI node */
    _1253__PHI_TEMPORARY = _1251;   /* for PHI node */
    goto _1621;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1621:
  _1252 = _1252__PHI_TEMPORARY;
  _1253 = _1253__PHI_TEMPORARY;
  if (((((int64_t)_1252) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1252) < ((uint64_t)(((uint64_t)(uint8_t)_1250)))))) {
    _1263__PHI_TEMPORARY = _1253;   /* for PHI node */
    goto _1620;
  } else {
    goto _1622;
  }

_1622:
  _1254 = *(uint64_t*)_1243;
  _1255 = *(uint64_t*)_1245;
  if ((((int64_t)_1255) > ((int64_t)_1254))) {
    goto _1623;
  } else {
    _1263__PHI_TEMPORARY = _1253;   /* for PHI node */
    goto _1620;
  }

_1623:
  _1256 = *(void**)_1242;
  _1257 = *(uint8_t*)(((&((uint8_t*)_1256)[((int64_t)_1254)])));
  if ((((int8_t)_1257) > ((int8_t)((uint8_t)-65)))) {
    _1263__PHI_TEMPORARY = _1253;   /* for PHI node */
    goto _1620;
  } else {
    goto _1624;
  }

_1624:
  _1258 = llvm_select_u32((((int64_t)_1254) < ((int64_t)_1255)), (((uint32_t)(uint8_t)_1257)), 0);
  _1259 = *(uint64_t*)_1243;
  *(uint64_t*)_1243 = (llvm_add_u64(_1259, 1));
  _1260 = llvm_neg_u64(_1252);
  _1261 = _1253 | (llvm_select_u32((((int64_t)_1252) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1260) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1258, (((uint32_t)_1260)))))), (llvm_select_u32((((uint64_t)_1252) > ((uint64_t)UINT64_C(31))), 0, (_1258 << (((uint32_t)_1252)))))));
  _1262 = llvm_add_u64(_1252, -8);
  _1252__PHI_TEMPORARY = _1262;   /* for PHI node */
  _1253__PHI_TEMPORARY = _1261;   /* for PHI node */
  goto _1621;

  } while (1); /* end of syntactic loop '' */
_1620:
  _1263 = _1263__PHI_TEMPORARY;
  _1264 = *(uint64_t*)_609;
  _1265 = *(uint64_t*)_611;
  _1266 = jsyn_cbe_fshl_i64(_1265, _1264, 32);
  _1267 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1263)), _1265, 32);
  *(uint64_t*)_609 = _1266;
  *(uint64_t*)_611 = _1267;
  _1268 = ((&((uint8_t*)_530)[((int64_t)48)]));
  _1269 = ((&((uint8_t*)_530)[((int64_t)56)]));
  _1270 = *(uint64_t*)_1269;
  _1271 = ((&((uint8_t*)_530)[((int64_t)64)]));
  _1272 = *(uint64_t*)_1271;
  _1273 = ((&((uint8_t*)_530)[((int64_t)72)]));
  _1274 = *(uint64_t*)_1273;
  _1275 = *(void**)_530;
  _1276 = *(uint64_t*)(((&((uint8_t*)_1275)[((int64_t)16)])));
  *(uint64_t*)_1268 = _1270;
  *(uint64_t*)_1269 = _1272;
  *(uint64_t*)_1271 = _1274;
  *(uint64_t*)_1273 = _1276;
  _1277 = llvm_select_u64((_1239 == UINT64_C(167772160)), 0, _1236);
  _1278 = llvm_select_u64((_1239 == UINT64_C(167772160)), 0, _1237);
  if ((_1239 == UINT64_C(218103808))) {
    goto _1625;
  } else {
    _1396__PHI_TEMPORARY = _1235;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1277;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1278;   /* for PHI node */
    goto _1541;
  }

_1625:
  _1279 = *(uint64_t*)_609;
  if (((_1279 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1626;
  } else {
    _1396__PHI_TEMPORARY = _1235;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1236;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    goto _1541;
  }

_1626:
  _1280 = *(void**)_530;
  _1281 = ((&((uint8_t*)_1280)[((int64_t)16)]));
  _1282 = *(uint64_t*)_1281;
  _1283 = ((&((uint8_t*)_1280)[((int64_t)8)]));
  _1284 = *(uint64_t*)_1283;
  if ((((int64_t)_1284) > ((int64_t)_1282))) {
    goto _1627;
  } else {
    _1301__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1628;
  }

_1627:
  _1285 = *(void**)_1280;
  _1286 = *(uint8_t*)(((&((uint8_t*)_1285)[((int64_t)_1282)])));
  *(uint64_t*)_1281 = (llvm_add_u64(_1282, 1));
  _1287 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1286)), 0);
  _1288 = llvm_sub_u8(32, (llvm_shl_u8(_1287, 3)));
  _1289 = (((uint32_t)(uint8_t)_1286)) << 24;
  if ((((uint8_t)_1288) > ((uint8_t)((uint8_t)16)))) {
    _1301__PHI_TEMPORARY = _1289;   /* for PHI node */
    goto _1628;
  } else {
    _1290__PHI_TEMPORARY = 16;   /* for PHI node */
    _1291__PHI_TEMPORARY = _1289;   /* for PHI node */
    goto _1629;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1629:
  _1290 = _1290__PHI_TEMPORARY;
  _1291 = _1291__PHI_TEMPORARY;
  if (((((int64_t)_1290) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1290) < ((uint64_t)(((uint64_t)(uint8_t)_1288)))))) {
    _1301__PHI_TEMPORARY = _1291;   /* for PHI node */
    goto _1628;
  } else {
    goto _1630;
  }

_1630:
  _1292 = *(uint64_t*)_1281;
  _1293 = *(uint64_t*)_1283;
  if ((((int64_t)_1293) > ((int64_t)_1292))) {
    goto _1631;
  } else {
    _1301__PHI_TEMPORARY = _1291;   /* for PHI node */
    goto _1628;
  }

_1631:
  _1294 = *(void**)_1280;
  _1295 = *(uint8_t*)(((&((uint8_t*)_1294)[((int64_t)_1292)])));
  if ((((int8_t)_1295) > ((int8_t)((uint8_t)-65)))) {
    _1301__PHI_TEMPORARY = _1291;   /* for PHI node */
    goto _1628;
  } else {
    goto _1632;
  }

_1632:
  _1296 = llvm_select_u32((((int64_t)_1292) < ((int64_t)_1293)), (((uint32_t)(uint8_t)_1295)), 0);
  _1297 = *(uint64_t*)_1281;
  *(uint64_t*)_1281 = (llvm_add_u64(_1297, 1));
  _1298 = llvm_neg_u64(_1290);
  _1299 = _1291 | (llvm_select_u32((((int64_t)_1290) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1298) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1296, (((uint32_t)_1298)))))), (llvm_select_u32((((uint64_t)_1290) > ((uint64_t)UINT64_C(31))), 0, (_1296 << (((uint32_t)_1290)))))));
  _1300 = llvm_add_u64(_1290, -8);
  _1290__PHI_TEMPORARY = _1300;   /* for PHI node */
  _1291__PHI_TEMPORARY = _1299;   /* for PHI node */
  goto _1629;

  } while (1); /* end of syntactic loop '' */
_1628:
  _1301 = _1301__PHI_TEMPORARY;
  _1302 = *(uint64_t*)_609;
  _1303 = *(uint64_t*)_611;
  _1304 = jsyn_cbe_fshl_i64(_1303, _1302, 32);
  _1305 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1301)), _1303, 32);
  *(uint64_t*)_609 = _1304;
  *(uint64_t*)_611 = _1305;
  _1306 = *(uint64_t*)_1269;
  _1307 = *(uint64_t*)_1271;
  _1308 = *(uint64_t*)_1273;
  _1309 = *(void**)_530;
  _1310 = *(uint64_t*)(((&((uint8_t*)_1309)[((int64_t)16)])));
  *(uint64_t*)_1268 = _1306;
  *(uint64_t*)_1269 = _1307;
  *(uint64_t*)_1271 = _1308;
  *(uint64_t*)_1273 = _1310;
  _1396__PHI_TEMPORARY = _1235;   /* for PHI node */
  _1397__PHI_TEMPORARY = 0;   /* for PHI node */
  _1398__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1541;

_1599:
  if (((_1314 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1598;
  } else {
    _1396__PHI_TEMPORARY = _1235;   /* for PHI node */
    _1397__PHI_TEMPORARY = _1236;   /* for PHI node */
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    goto _1541;
  }

_1598:
  _1396__PHI_TEMPORARY = _1235;   /* for PHI node */
  _1397__PHI_TEMPORARY = 0;   /* for PHI node */
  _1398__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1541;

_1541:
  _1396 = _1396__PHI_TEMPORARY;
  _1397 = _1397__PHI_TEMPORARY;
  _1398 = _1398__PHI_TEMPORARY;
  if (_1396) {
    goto _1633;
  } else {
    _1402__PHI_TEMPORARY = 762;   /* for PHI node */
    goto _1634;
  }

_1633:
  if ((_558 == 654311424u)) {
    _1402__PHI_TEMPORARY = 51;   /* for PHI node */
    goto _1634;
  } else {
    goto _1635;
  }

_1635:
  if ((llvm_select_bool((_1397 == UINT64_C(0)), (_1398 == UINT64_C(0)), 0))) {
    goto _1636;
  } else {
    _1402__PHI_TEMPORARY = 766;   /* for PHI node */
    goto _1634;
  }

_1636:
  switch (_558) {
  default:
    goto _1637;
  case 570425344u:
    _1402__PHI_TEMPORARY = 50;   /* for PHI node */
    goto _1634;
  case 1610612736u:
    goto _1638;
  }

_1637:
  _1399 = julia_AssertionError_26(_529, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)488)]))));
  *(void**)(((&((uint8_t*)(&_531))[((int64_t)16)]))) = ((_1399.array[0]));
  _1400 = *(void**)(((&((uint8_t*)_529)[((int64_t)16)])));
  _1401 = jsk_ijl_gc_small_alloc(_1400, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)520)])))));
  *(void**)(((&((uint8_t*)_1401)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)520)])));
  *(void**)_1401 = ((_1399.array[0]));
  *(void**)(((&((uint8_t*)(&_531))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_1401);
  __builtin_unreachable();

_1638:
  _1402__PHI_TEMPORARY = 52;   /* for PHI node */
  goto _1634;

_1634:
  _1402 = _1402__PHI_TEMPORARY;
  julia_emit_20((&_548), _529, _530, _1402, 1);
  _602__PHI_TEMPORARY = (&_548);   /* for PHI node */
  goto _1418;

}


static void julia__next_token_17(void* _1639, void* _1640, void* _1641, uint32_t _1642) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _1643 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _1644;
  void* _1645;
  void* _1646;
  struct l_array_4_uint64_t _1647;    /* Address-exposed local */
  struct l_array_4_uint64_t _1648;    /* Address-exposed local */
  struct l_array_4_uint64_t _1649;    /* Address-exposed local */
  struct l_array_4_uint64_t _1650;    /* Address-exposed local */
  struct l_array_4_uint64_t _1651;    /* Address-exposed local */
  struct l_array_4_uint64_t _1652;    /* Address-exposed local */
  struct l_array_4_uint64_t _1653;    /* Address-exposed local */
  struct l_array_4_uint64_t _1654;    /* Address-exposed local */
  struct l_array_4_uint64_t _1655;    /* Address-exposed local */
  struct l_array_4_uint64_t _1656;    /* Address-exposed local */
  struct l_array_4_uint64_t _1657;    /* Address-exposed local */
  struct l_array_4_uint64_t _1658;    /* Address-exposed local */
  struct l_array_4_uint64_t _1659;    /* Address-exposed local */
  struct l_array_4_uint64_t _1660;    /* Address-exposed local */
  struct l_array_4_uint64_t _1661;    /* Address-exposed local */
  struct l_array_4_uint64_t _1662;    /* Address-exposed local */
  struct l_array_4_uint64_t _1663;    /* Address-exposed local */
  struct l_array_4_uint64_t _1664;    /* Address-exposed local */
  struct l_array_4_uint64_t _1665;    /* Address-exposed local */
  struct l_array_4_uint64_t _1666;    /* Address-exposed local */
  struct l_array_4_uint64_t _1667;    /* Address-exposed local */
  struct l_array_4_uint64_t _1668;    /* Address-exposed local */
  struct l_array_4_uint64_t _1669;    /* Address-exposed local */
  struct l_array_4_uint64_t _1670;    /* Address-exposed local */
  struct l_array_4_uint64_t _1671;    /* Address-exposed local */
  struct l_array_4_uint64_t _1672;    /* Address-exposed local */
  struct l_array_4_uint64_t _1673;    /* Address-exposed local */
  struct l_array_4_uint64_t _1674;    /* Address-exposed local */
  struct l_array_4_uint64_t _1675;    /* Address-exposed local */
  struct l_array_4_uint64_t _1676;    /* Address-exposed local */
  struct l_array_4_uint64_t _1677;    /* Address-exposed local */
  struct l_array_4_uint64_t _1678;    /* Address-exposed local */
  struct l_array_4_uint64_t _1679;    /* Address-exposed local */
  struct l_array_4_uint64_t _1680;    /* Address-exposed local */
  struct l_array_4_uint64_t _1681;    /* Address-exposed local */
  struct l_array_4_uint64_t _1682;    /* Address-exposed local */
  struct l_array_4_uint64_t _1683;    /* Address-exposed local */
  struct l_array_4_uint64_t _1684;    /* Address-exposed local */
  struct l_array_4_uint64_t _1685;    /* Address-exposed local */
  struct l_array_4_uint64_t _1686;    /* Address-exposed local */
  void* _1687;
  void* _1687__PHI_TEMPORARY;
  void* _1688;
  void* _1689;
  uint32_t _1690;
  uint64_t _1691;
  uint32_t _1692;
  uint32_t _1693;
  uint64_t _1694;
  bool _1695;
  bool _1696;
  uint32_t _1697;
  bool _1698;
  bool _1699;
  uint32_t _1700;
  uint32_t _1701;
  uint32_t _1702;
  bool _1703;
  bool _1703__PHI_TEMPORARY;
  void* _1704;
  uint16_t _1705;
  uint16_t _1706;
  void* _1707;
  void* _1708;
  void* _1709;
  void* _1710;
  uint64_t _1711;
  uint64_t _1712;
  void* _1713;
  uint64_t _1714;
  void* _1715;
  void* _1716;
  uint8_t _1717;
  uint8_t _1717__PHI_TEMPORARY;
  void* _1718;
  uint64_t _1719;
  void* _1720;
  void* _1721;
  void* _1722;
  uint64_t _1723;
  void* _1724;
  uint64_t _1725;
  void* _1726;
  uint8_t _1727;
  uint8_t _1728;
  uint8_t _1729;
  uint32_t _1730;
  uint64_t _1731;
  uint64_t _1731__PHI_TEMPORARY;
  uint32_t _1732;
  uint32_t _1732__PHI_TEMPORARY;
  uint64_t _1733;
  uint64_t _1734;
  void* _1735;
  uint8_t _1736;
  uint32_t _1737;
  uint64_t _1738;
  uint64_t _1739;
  uint32_t _1740;
  uint64_t _1741;
  uint32_t _1742;
  uint32_t _1742__PHI_TEMPORARY;
  uint64_t _1743;
  uint64_t _1744;
  uint64_t _1745;
  uint64_t _1746;
  void* _1747;
  uint64_t _1748;
  void* _1749;
  uint64_t _1750;
  void* _1751;
  uint64_t _1752;
  void* _1753;
  uint64_t _1754;
  uint16_t _1755;
  uint16_t _1755__PHI_TEMPORARY;
  uint32_t _1756;
  uint32_t _1757;
  uint32_t _1758;
  uint32_t _1758__PHI_TEMPORARY;
  uint32_t _1759;
  uint64_t _1760;
  uint64_t _1760__PHI_TEMPORARY;
  uint64_t _1761;
  uint64_t _1761__PHI_TEMPORARY;
  uint64_t _1762;
  uint64_t _1763;
  uint32_t _1764;
  uint64_t _1765;
  uint64_t _1766;
  uint16_t _1767;
  uint16_t _1767__PHI_TEMPORARY;
  uint32_t _1768;
  uint32_t _1769;
  uint32_t _1770;
  uint32_t _1770__PHI_TEMPORARY;
  uint32_t _1771;
  uint16_t _1772;
  uint16_t _1773;
  uint16_t _1773__PHI_TEMPORARY;
  uint16_t _1774;

  _1644 = ((uint32_t)_1642);
  _1645 = memset((&_1643), 0, 24);
  *((uint64_t*)&_1643) = 4;
  _1646 = *(void**)_1640;
  *(void**)(((&((uint8_t*)(&_1643))[((int64_t)8)]))) = _1646;
  *(void**)_1640 = (&_1643);
  if ((_1644 == 4294967295u)) {
    goto _1775;
  } else {
    goto _1776;
  }

_1777:
  _1687 = _1687__PHI_TEMPORARY;
  _1688 = memcpy(_1639, _1687, 32);
  _1689 = *(void**)(((&((uint8_t*)(&_1643))[((int64_t)8)])));
  *(void**)_1640 = _1689;
  return;
_1775:
  julia_emit_20((&_1647), _1640, _1641, 752, 1);
  _1687__PHI_TEMPORARY = (&_1647);   /* for PHI node */
  goto _1777;

_1776:
  _1690 = llvm_OC_ctlz_OC_i32((_1644 ^ -1), 0);
  _1691 = ((uint64_t)(uint32_t)_1690);
  _1692 = llvm_OC_cttz_OC_i32(_1644, 0);
  _1693 = _1692 & 56;
  _1694 = ((uint64_t)(uint32_t)_1693);
  _1695 = llvm_select_bool((((uint32_t)_1692) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1644 & 12632256) ^ 8421504), _1693)) != 0u), 0);
  _1696 = ((_1690 == 1u) | (((uint64_t)(llvm_add_u64((_1691 << 3), _1694))) > ((uint64_t)UINT64_C(32)))) | _1695;
  _1697 = llvm_lshr_u32(_1644, 24);
  _1698 = (((_1644 & -33554432) == 3221225472u) | ((_1644 & -2097152) == 3766484992u)) | ((_1644 & -1048576) == 4034920448u);
  _1699 = ((((uint32_t)_1644) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_1644, 293568512))) < ((uint32_t)101662656u))) & ((_1696 | _1698) ^ 1);
  if (_1699) {
    goto _1778;
  } else {
    _1703__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1779;
  }

_1778:
  if ((((uint32_t)(llvm_add_u32(_1644, -150994944))) < ((uint32_t)67108865u))) {
    _1703__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1779;
  } else {
    goto _1780;
  }

_1780:
  switch (_1644) {
  default:
    goto _1781;
  case 3263496192u:
    _1703__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1779;
  case 536870912u:
    _1703__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1779;
  }

_1781:
  if (((((uint32_t)_1644) < ((uint32_t)3265265664u)) | _1696)) {
    _1703__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1779;
  } else {
    goto _1782;
  }

_1782:
  if (((((uint64_t)(llvm_add_u64((_1691 << 3), _1694))) > ((uint64_t)UINT64_C(32))) | _1698)) {
    goto _1783;
  } else {
    goto _1784;
  }

_1783:
  julia_throw_invalid_char_21(_1640, _1644);
  __builtin_unreachable();

_1784:
  _1700 = llvm_select_u32((((uint32_t)_1692) < ((uint32_t)32u)), (llvm_lshr_u32((_1644 & (llvm_lshr_u32(-1, _1690))), _1693)), 0);
  _1701 = (((_1700 & 127) | ((llvm_lshr_u32(_1700, 2)) & 8128)) | ((llvm_lshr_u32(_1700, 4)) & 520192)) | ((llvm_lshr_u32(_1700, 6)) & 33292288);
  if ((((uint32_t)_1701) > ((uint32_t)1114111u))) {
    _1703__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1779;
  } else {
    goto _1785;
  }

_1785:
  _1702 = jsk_utf8proc_category(_1701);
  _1703__PHI_TEMPORARY = (_1702 == 23u);   /* for PHI node */
  goto _1779;

_1779:
  _1703 = _1703__PHI_TEMPORARY;
  if ((_1703 | (_1644 == 4022058752u))) {
    goto _1786;
  } else {
    goto _1787;
  }

_1786:
  julia_lex_whitespace_27((&_1648), _1640, _1641, _1644);
  _1687__PHI_TEMPORARY = (&_1648);   /* for PHI node */
  goto _1777;

_1787:
  switch (_1644) {
  default:
    goto _1788;
  case 1526726656u:
    goto _1789;
  case 1560281088u:
    goto _1790;
  case 2063597568u:
    goto _1791;
  case 989855744u:
    goto _1792;
  case 2097152000u:
    goto _1793;
  case 671088640u:
    goto _1794;
  case 687865856u:
    goto _1795;
  case 738197504u:
    goto _1796;
  case 704643072u:
    goto _1797;
  case 1577058304u:
    goto _1798;
  case 1073741824u:
    goto _1799;
  case 1056964608u:
    goto _1800;
  case 603979776u:
    goto _1801;
  case 3800742656u:
    goto _1802;
  case 2113929216u:
    goto _1803;
  case 587202560u:
    goto _1804;
  case 1023410176u:
    goto _1805;
  case 553648128u:
    goto _1806;
  case 1040187392u:
    goto _1807;
  case 1006632960u:
    goto _1808;
  case 973078528u:
    goto _1809;
  case 2080374784u:
    goto _1810;
  case 637534208u:
    goto _1811;
  case 654311424u:
    goto _1812;
  case 3283550208u:
    goto _1813;
  case 570425344u:
    goto _1814;
  case 620756992u:
    goto _1815;
  case 788529152u:
    goto _1816;
  case 1543503872u:
    goto _1817;
  case 771751936u:
    goto _1818;
  case 721420288u:
    goto _1819;
  case 754974720u:
    goto _1820;
  case 3800601088u:
    goto _1821;
  case 1610612736u:
    goto _1822;
  }

_1789:
  julia_emit_20((&_1649), _1640, _1641, 56, 1);
  _1687__PHI_TEMPORARY = (&_1649);   /* for PHI node */
  goto _1777;

_1790:
  julia_emit_20((&_1650), _1640, _1641, 57, 1);
  _1687__PHI_TEMPORARY = (&_1650);   /* for PHI node */
  goto _1777;

_1791:
  julia_emit_20((&_1651), _1640, _1641, 58, 1);
  _1687__PHI_TEMPORARY = (&_1651);   /* for PHI node */
  goto _1777;

_1792:
  julia_emit_20((&_1652), _1640, _1641, 55, 1);
  _1687__PHI_TEMPORARY = (&_1652);   /* for PHI node */
  goto _1777;

_1793:
  julia_emit_20((&_1653), _1640, _1641, 59, 1);
  _1687__PHI_TEMPORARY = (&_1653);   /* for PHI node */
  goto _1777;

_1794:
  julia_emit_20((&_1654), _1640, _1641, 60, 1);
  _1687__PHI_TEMPORARY = (&_1654);   /* for PHI node */
  goto _1777;

_1795:
  julia_emit_20((&_1655), _1640, _1641, 61, 1);
  _1687__PHI_TEMPORARY = (&_1655);   /* for PHI node */
  goto _1777;

_1796:
  julia_emit_20((&_1656), _1640, _1641, 54, 1);
  _1687__PHI_TEMPORARY = (&_1656);   /* for PHI node */
  goto _1777;

_1797:
  julia_lex_star_28((&_1657), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1657);   /* for PHI node */
  goto _1777;

_1798:
  julia_lex_circumflex_29((&_1658), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1658);   /* for PHI node */
  goto _1777;

_1799:
  julia_emit_20((&_1659), _1640, _1641, 53, 1);
  _1687__PHI_TEMPORARY = (&_1659);   /* for PHI node */
  goto _1777;

_1800:
  julia_emit_20((&_1660), _1640, _1641, 79, 1);
  _1687__PHI_TEMPORARY = (&_1660);   /* for PHI node */
  goto _1777;

_1801:
  julia_lex_dollar_30((&_1661), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1661);   /* for PHI node */
  goto _1777;

_1802:
  julia_lex_xor_31((&_1662), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1662);   /* for PHI node */
  goto _1777;

_1803:
  julia_emit_20((&_1663), _1640, _1641, 74, 1);
  _1687__PHI_TEMPORARY = (&_1663);   /* for PHI node */
  goto _1777;

_1804:
  julia_lex_comment_32((&_1664), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1664);   /* for PHI node */
  goto _1777;

_1805:
  julia_lex_equal_33((&_1665), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1665);   /* for PHI node */
  goto _1777;

_1806:
  julia_lex_exclaim_34((&_1666), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1666);   /* for PHI node */
  goto _1777;

_1807:
  julia_lex_greater_35((&_1667), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1667);   /* for PHI node */
  goto _1777;

_1808:
  julia_lex_less_36((&_1668), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1668);   /* for PHI node */
  goto _1777;

_1809:
  julia_lex_colon_37((&_1669), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1669);   /* for PHI node */
  goto _1777;

_1810:
  julia_lex_bar_38((&_1670), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1670);   /* for PHI node */
  goto _1777;

_1811:
  julia_lex_amper_39((&_1671), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1671);   /* for PHI node */
  goto _1777;

_1812:
  _1704 = ((&((uint8_t*)_1641)[((int64_t)16)]));
  _1705 = *(uint16_t*)_1704;
  if (((_1705 != ((uint16_t)3)) & (((uint16_t)(llvm_add_u16(_1705, -43))) < ((uint16_t)((uint16_t)-9))))) {
    goto _1823;
  } else {
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  }

_1823:
  switch (_1705) {
  default:
    goto _1825;
  case ((uint16_t)252):
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  case ((uint16_t)253):
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  case ((uint16_t)706):
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  }

_1825:
  _1706 = *(uint16_t*)_1704;
  switch (_1706) {
  default:
    goto _1826;
  case ((uint16_t)707):
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  case ((uint16_t)61):
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  case ((uint16_t)57):
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  case ((uint16_t)59):
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  case ((uint16_t)709):
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  case ((uint16_t)33):
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  }

_1826:
  if ((((uint16_t)(llvm_add_u16(_1706, -53))) < ((uint16_t)((uint16_t)-10)))) {
    goto _1827;
  } else {
    _1717__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1824;
  }

_1827:
  _1707 = *(void**)(((&((uint8_t*)_1641)[((int64_t)24)])));
  _1708 = *(void**)_1707;
  _1709 = *(void**)(((&((uint8_t*)_1707)[((int64_t)8)])));
  _1710 = ((&((uint8_t*)_1707)[((int64_t)16)]));
  _1711 = *(uint64_t*)_1710;
  _1712 = llvm_add_u64(_1711, 1);
  _1713 = *(void**)(((&((uint8_t*)_1709)[((int64_t)8)])));
  _1714 = *(uint64_t*)_1709;
  if ((((int64_t)_1714) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1708)), (((uint64_t)(uintptr_t)_1713)))), 4)), 1)), _1711))))) {
    goto _1828;
  } else {
    goto _1829;
  }

_1828:
  *(void**)(((&((uint8_t*)(&_1643))[((int64_t)16)]))) = _1707;
  julia__growend_internalNOT_OC__13(_1640, _1707, 1, _1711);
  goto _1829;

_1829:
  *(uint64_t*)_1710 = _1712;
  _1715 = *(void**)_1707;
  _1716 = memcpy((((&((uint8_t*)_1715)[((int64_t)(_1711 << 4))]))), (&_j_constYY_OC_59), 16);
  _1717__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1824;

_1824:
  _1717 = _1717__PHI_TEMPORARY;
  julia_emit_20((&_1672), _1640, _1641, 709, _1717);
  _1687__PHI_TEMPORARY = (&_1672);   /* for PHI node */
  goto _1777;

_1813:
  julia_lex_division_40((&_1673), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1673);   /* for PHI node */
  goto _1777;

_1814:
  julia_lex_quote_41((&_1674), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1674);   /* for PHI node */
  goto _1777;

_1815:
  julia_lex_percent_42((&_1675), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1675);   /* for PHI node */
  goto _1777;

_1816:
  julia_lex_forwardslash_43((&_1676), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1676);   /* for PHI node */
  goto _1777;

_1817:
  julia_lex_backslash_44((&_1677), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1677);   /* for PHI node */
  goto _1777;

_1818:
  julia_lex_dot_45((&_1678), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1678);   /* for PHI node */
  goto _1777;

_1819:
  julia_lex_plus_46((&_1679), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1679);   /* for PHI node */
  goto _1777;

_1820:
  julia_lex_minus_47((&_1680), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1680);   /* for PHI node */
  goto _1777;

_1821:
  _1718 = ((&((uint8_t*)_1641)[((int64_t)32)]));
  _1719 = *(uint64_t*)_1718;
  _1720 = ((&((uint8_t*)_1641)[((int64_t)40)]));
  if (((_1719 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _1830;
  } else {
    _1755__PHI_TEMPORARY = 536;   /* for PHI node */
    goto _1831;
  }

_1830:
  _1721 = *(void**)_1641;
  _1722 = ((&((uint8_t*)_1721)[((int64_t)16)]));
  _1723 = *(uint64_t*)_1722;
  _1724 = ((&((uint8_t*)_1721)[((int64_t)8)]));
  _1725 = *(uint64_t*)_1724;
  if ((((int64_t)_1725) > ((int64_t)_1723))) {
    goto _1832;
  } else {
    _1742__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1833;
  }

_1832:
  _1726 = *(void**)_1721;
  _1727 = *(uint8_t*)(((&((uint8_t*)_1726)[((int64_t)_1723)])));
  *(uint64_t*)_1722 = (llvm_add_u64(_1723, 1));
  _1728 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1727)), 0);
  _1729 = llvm_sub_u8(32, (llvm_shl_u8(_1728, 3)));
  _1730 = (((uint32_t)(uint8_t)_1727)) << 24;
  if ((((uint8_t)_1729) > ((uint8_t)((uint8_t)16)))) {
    _1742__PHI_TEMPORARY = _1730;   /* for PHI node */
    goto _1833;
  } else {
    _1731__PHI_TEMPORARY = 16;   /* for PHI node */
    _1732__PHI_TEMPORARY = _1730;   /* for PHI node */
    goto _1834;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1834:
  _1731 = _1731__PHI_TEMPORARY;
  _1732 = _1732__PHI_TEMPORARY;
  if (((((int64_t)_1731) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1731) < ((uint64_t)(((uint64_t)(uint8_t)_1729)))))) {
    _1742__PHI_TEMPORARY = _1732;   /* for PHI node */
    goto _1833;
  } else {
    goto _1835;
  }

_1835:
  _1733 = *(uint64_t*)_1722;
  _1734 = *(uint64_t*)_1724;
  if ((((int64_t)_1734) > ((int64_t)_1733))) {
    goto _1836;
  } else {
    _1742__PHI_TEMPORARY = _1732;   /* for PHI node */
    goto _1833;
  }

_1836:
  _1735 = *(void**)_1721;
  _1736 = *(uint8_t*)(((&((uint8_t*)_1735)[((int64_t)_1733)])));
  if ((((int8_t)_1736) > ((int8_t)((uint8_t)-65)))) {
    _1742__PHI_TEMPORARY = _1732;   /* for PHI node */
    goto _1833;
  } else {
    goto _1837;
  }

_1837:
  _1737 = llvm_select_u32((((int64_t)_1733) < ((int64_t)_1734)), (((uint32_t)(uint8_t)_1736)), 0);
  _1738 = *(uint64_t*)_1722;
  *(uint64_t*)_1722 = (llvm_add_u64(_1738, 1));
  _1739 = llvm_neg_u64(_1731);
  _1740 = _1732 | (llvm_select_u32((((int64_t)_1731) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1739) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1737, (((uint32_t)_1739)))))), (llvm_select_u32((((uint64_t)_1731) > ((uint64_t)UINT64_C(31))), 0, (_1737 << (((uint32_t)_1731)))))));
  _1741 = llvm_add_u64(_1731, -8);
  _1731__PHI_TEMPORARY = _1741;   /* for PHI node */
  _1732__PHI_TEMPORARY = _1740;   /* for PHI node */
  goto _1834;

  } while (1); /* end of syntactic loop '' */
_1833:
  _1742 = _1742__PHI_TEMPORARY;
  _1743 = *(uint64_t*)_1718;
  _1744 = *(uint64_t*)_1720;
  _1745 = jsyn_cbe_fshl_i64(_1744, _1743, 32);
  _1746 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1742)), _1744, 32);
  *(uint64_t*)_1718 = _1745;
  *(uint64_t*)_1720 = _1746;
  _1747 = ((&((uint8_t*)_1641)[((int64_t)56)]));
  _1748 = *(uint64_t*)_1747;
  _1749 = ((&((uint8_t*)_1641)[((int64_t)64)]));
  _1750 = *(uint64_t*)_1749;
  _1751 = ((&((uint8_t*)_1641)[((int64_t)72)]));
  _1752 = *(uint64_t*)_1751;
  _1753 = *(void**)_1641;
  _1754 = *(uint64_t*)(((&((uint8_t*)_1753)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1641)[((int64_t)48)]))) = _1748;
  *(uint64_t*)_1747 = _1750;
  *(uint64_t*)_1749 = _1752;
  *(uint64_t*)_1751 = _1754;
  _1755__PHI_TEMPORARY = 71;   /* for PHI node */
  goto _1831;

_1831:
  _1755 = _1755__PHI_TEMPORARY;
  julia_emit_20((&_1681), _1640, _1641, _1755, 1);
  _1687__PHI_TEMPORARY = (&_1681);   /* for PHI node */
  goto _1777;

_1822:
  julia_lex_backtick_48((&_1682), _1640, _1641);
  _1687__PHI_TEMPORARY = (&_1682);   /* for PHI node */
  goto _1777;

_1788:
  if ((_1699 & (_1644 != 4036993714u))) {
    goto _1838;
  } else {
    goto _1839;
  }

_1838:
  if ((((int32_t)_1644) < ((int32_t)0u))) {
    goto _1840;
  } else {
    _1758__PHI_TEMPORARY = _1697;   /* for PHI node */
    goto _1841;
  }

_1840:
  if ((((_1690 == 1u) | (((uint64_t)(llvm_add_u64((_1691 << 3), _1694))) > ((uint64_t)UINT64_C(32)))) | (_1695 | _1698))) {
    goto _1842;
  } else {
    goto _1843;
  }

_1842:
  julia_throw_invalid_char_21(_1640, _1644);
  __builtin_unreachable();

_1843:
  _1756 = llvm_select_u32((((uint32_t)_1692) < ((uint32_t)32u)), (llvm_lshr_u32((_1644 & (llvm_lshr_u32(-1, _1690))), _1693)), 0);
  _1757 = (((_1756 & 127) | ((llvm_lshr_u32(_1756, 2)) & 8128)) | ((llvm_lshr_u32(_1756, 4)) & 520192)) | ((llvm_lshr_u32(_1756, 6)) & 33292288);
  _1758__PHI_TEMPORARY = _1757;   /* for PHI node */
  goto _1841;

_1841:
  _1758 = _1758__PHI_TEMPORARY;
  _1759 = jsk_jl_id_start_char(_1758);
  if ((_1759 == 0u)) {
    goto _1839;
  } else {
    goto _1844;
  }

_1844:
  julia_lex_identifier_22((&_1683), _1640, _1641, _1644);
  _1687__PHI_TEMPORARY = (&_1683);   /* for PHI node */
  goto _1777;

_1839:
  if ((((uint32_t)(llvm_add_u32(_1644, -956301313))) < ((uint32_t)4143972351u))) {
    _1760__PHI_TEMPORARY = 597;   /* for PHI node */
    _1761__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1845;
  } else {
    goto _1846;
  }

_1846:
  julia_lex_digit_49((&_1684), _1640, _1641, 44);
  _1687__PHI_TEMPORARY = (&_1684);   /* for PHI node */
  goto _1777;

  do {     /* Syntactic loop '' to make GCC happy */
_1845:
  _1760 = _1760__PHI_TEMPORARY;
  _1761 = _1761__PHI_TEMPORARY;
  if ((((int64_t)_1761) > ((int64_t)_1760))) {
    _1767__PHI_TEMPORARY = 751;   /* for PHI node */
    goto _1847;
  } else {
    goto _1848;
  }

_1848:
  _1762 = llvm_lshr_u64((llvm_add_u64(_1761, _1760)), 1);
  _1763 = llvm_add_u64(_1762, -1);
  _1764 = *(uint32_t*)(((&((uint32_t*)(&_j_constYY_OC_60))[((int64_t)_1763)])));
  if ((_1764 == _1644)) {
    goto _1849;
  } else {
    goto _1850;
  }

_1850:
  _1765 = llvm_select_u64((((uint32_t)_1764) < ((uint32_t)_1644)), _1760, _1763);
  _1766 = llvm_select_u64((((uint32_t)_1764) < ((uint32_t)_1644)), (llvm_add_u64(_1762, 1)), _1761);
  _1760__PHI_TEMPORARY = _1765;   /* for PHI node */
  _1761__PHI_TEMPORARY = _1766;   /* for PHI node */
  goto _1845;

  } while (1); /* end of syntactic loop '' */
_1847:
  _1767 = _1767__PHI_TEMPORARY;
  if ((_1767 == ((uint16_t)751))) {
    goto _1851;
  } else {
    goto _1852;
  }

_1852:
  julia_emit_20((&_1685), _1640, _1641, _1767, 1);
  _1687__PHI_TEMPORARY = (&_1685);   /* for PHI node */
  goto _1777;

_1851:
  if (_1699) {
    goto _1853;
  } else {
    _1773__PHI_TEMPORARY = 762;   /* for PHI node */
    goto _1854;
  }

_1853:
  switch (_1644) {
  default:
    goto _1855;
  case 3266117632u:
    _1773__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1854;
  case 3800075008u:
    _1773__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1854;
  case 3800075264u:
    _1773__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1854;
  case 3800075520u:
    _1773__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1854;
  case 3800075776u:
    _1773__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1854;
  case 3800076032u:
    _1773__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1854;
  case 3800145920u:
    _1773__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1854;
  case 3800146176u:
    _1773__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1854;
  }

_1855:
  if ((((int32_t)_1644) < ((int32_t)0u))) {
    goto _1856;
  } else {
    _1770__PHI_TEMPORARY = _1697;   /* for PHI node */
    goto _1857;
  }

_1856:
  if ((((_1690 == 1u) | (((uint64_t)(llvm_add_u64((_1691 << 3), _1694))) > ((uint64_t)UINT64_C(32)))) | (_1695 | _1698))) {
    goto _1858;
  } else {
    goto _1859;
  }

_1858:
  julia_throw_invalid_char_21(_1640, _1644);
  __builtin_unreachable();

_1859:
  _1768 = llvm_select_u32((((uint32_t)_1692) < ((uint32_t)32u)), (llvm_lshr_u32((_1644 & (llvm_lshr_u32(-1, _1690))), _1693)), 0);
  _1769 = (((_1768 & 127) | ((llvm_lshr_u32(_1768, 2)) & 8128)) | ((llvm_lshr_u32(_1768, 4)) & 520192)) | ((llvm_lshr_u32(_1768, 6)) & 33292288);
  _1770__PHI_TEMPORARY = _1769;   /* for PHI node */
  goto _1857;

_1857:
  _1770 = _1770__PHI_TEMPORARY;
  _1771 = jsk_jl_id_char(_1770);
  _1772 = llvm_select_u16((_1771 == 0u), 765, 764);
  _1773__PHI_TEMPORARY = _1772;   /* for PHI node */
  goto _1854;

_1854:
  _1773 = _1773__PHI_TEMPORARY;
  julia_emit_20((&_1686), _1640, _1641, _1773, 1);
  _1687__PHI_TEMPORARY = (&_1686);   /* for PHI node */
  goto _1777;

_1849:
  _1774 = *(uint16_t*)(((&((uint16_t*)(((&((uint8_t*)(&_j_constYY_OC_60))[((int64_t)2388)]))))[((int64_t)_1763)])));
  _1767__PHI_TEMPORARY = _1774;   /* for PHI node */
  goto _1847;

}


static struct l_array_1_void_KC_ julia_ConcurrencyViolationError_18(void* _1860, void* _1861) {
  struct l_array_1_void_KC_ _1862;

  _1862 = llvm_ctor_ptra1(((void*)/*NULL*/0));
  _1862.array[0] = _1861;
  return _1862;
}


static __noreturn void julia_throw_boundserror_19(void* _1863, void* _1864, void* _1865) {
  jsk_throw();
  __builtin_unreachable();

}


static void julia_emit_20(void* _1866, void* _1867, void* _1868, uint16_t _1869, uint8_t _1870) {
  bool _1871;
  bool _1871__PHI_TEMPORARY;
  uint8_t _1872;
  uint8_t _1872__PHI_TEMPORARY;
  void* _1873;
  uint64_t _1874;
  void* _1875;
  uint8_t _1876;
  void* _1877;
  void* _1878;
  uint64_t _1879;
  void* _1880;
  uint64_t _1881;
  void* _1882;
  uint8_t _1883;
  uint8_t _1884;
  uint8_t _1885;
  uint32_t _1886;
  uint64_t _1887;
  uint64_t _1887__PHI_TEMPORARY;
  uint32_t _1888;
  uint32_t _1888__PHI_TEMPORARY;
  uint64_t _1889;
  uint64_t _1890;
  void* _1891;
  uint8_t _1892;
  uint32_t _1893;
  uint64_t _1894;
  uint64_t _1895;
  uint32_t _1896;
  uint64_t _1897;
  uint32_t _1898;
  uint32_t _1898__PHI_TEMPORARY;
  uint64_t _1899;
  uint64_t _1900;
  uint64_t _1901;
  uint64_t _1902;
  void* _1903;
  uint64_t _1904;
  void* _1905;
  uint64_t _1906;
  void* _1907;
  uint64_t _1908;
  void* _1909;
  uint64_t _1910;
  uint8_t _1911;
  uint8_t _1911__PHI_TEMPORARY;
  uint64_t _1912;
  uint64_t _1913;

  if ((llvm_select_bool(((((uint16_t)(llvm_add_u16(_1869, -716))) < ((uint16_t)((uint16_t)-650))) | (_1869 == ((uint16_t)68))), 1, (((uint16_t)(llvm_add_u16(_1869, -69))) < ((uint16_t)((uint16_t)9)))))) {
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  } else {
    goto _1915;
  }

_1915:
  switch (_1869) {
  default:
    goto _1916;
  case ((uint16_t)79):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)236):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)237):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)234):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)232):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)252):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)253):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)75):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)76):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)526):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)527):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)534):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)705):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)706):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)707):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)708):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)710):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  case ((uint16_t)711):
    _1871__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  }

_1916:
  _1871__PHI_TEMPORARY = ((llvm_and_u16(_1869, 1020)) == ((uint16_t)712));   /* for PHI node */
  goto _1914;

_1914:
  _1871 = _1871__PHI_TEMPORARY;
  if ((llvm_select_bool(_1871, 1, ((((bool)_1870&1u)) ^ 1)))) {
    _1911__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1917;
  } else {
    _1872__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1918;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1918:
  _1872 = _1872__PHI_TEMPORARY;
  _1873 = ((&((uint8_t*)_1868)[((int64_t)32)]));
  _1874 = *(uint64_t*)_1873;
  _1875 = ((&((uint8_t*)_1868)[((int64_t)40)]));
  _1876 = julia_isopsuffix_50(_1867, (((uint32_t)(llvm_lshr_u64(_1874, 32)))));
  if ((((bool)_1876&1u))) {
    goto _1919;
  } else {
    _1911__PHI_TEMPORARY = _1872;   /* for PHI node */
    goto _1917;
  }

_1919:
  _1877 = *(void**)_1868;
  _1878 = ((&((uint8_t*)_1877)[((int64_t)16)]));
  _1879 = *(uint64_t*)_1878;
  _1880 = ((&((uint8_t*)_1877)[((int64_t)8)]));
  _1881 = *(uint64_t*)_1880;
  if ((((int64_t)_1881) > ((int64_t)_1879))) {
    goto _1920;
  } else {
    _1898__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1921;
  }

_1920:
  _1882 = *(void**)_1877;
  _1883 = *(uint8_t*)(((&((uint8_t*)_1882)[((int64_t)_1879)])));
  *(uint64_t*)_1878 = (llvm_add_u64(_1879, 1));
  _1884 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1883)), 0);
  _1885 = llvm_sub_u8(32, (llvm_shl_u8(_1884, 3)));
  _1886 = (((uint32_t)(uint8_t)_1883)) << 24;
  if ((((uint8_t)_1885) > ((uint8_t)((uint8_t)16)))) {
    _1898__PHI_TEMPORARY = _1886;   /* for PHI node */
    goto _1921;
  } else {
    _1887__PHI_TEMPORARY = 16;   /* for PHI node */
    _1888__PHI_TEMPORARY = _1886;   /* for PHI node */
    goto _1922;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1922:
  _1887 = _1887__PHI_TEMPORARY;
  _1888 = _1888__PHI_TEMPORARY;
  if (((((int64_t)_1887) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1887) < ((uint64_t)(((uint64_t)(uint8_t)_1885)))))) {
    _1898__PHI_TEMPORARY = _1888;   /* for PHI node */
    goto _1921;
  } else {
    goto _1923;
  }

_1923:
  _1889 = *(uint64_t*)_1878;
  _1890 = *(uint64_t*)_1880;
  if ((((int64_t)_1890) > ((int64_t)_1889))) {
    goto _1924;
  } else {
    _1898__PHI_TEMPORARY = _1888;   /* for PHI node */
    goto _1921;
  }

_1924:
  _1891 = *(void**)_1877;
  _1892 = *(uint8_t*)(((&((uint8_t*)_1891)[((int64_t)_1889)])));
  if ((((int8_t)_1892) > ((int8_t)((uint8_t)-65)))) {
    _1898__PHI_TEMPORARY = _1888;   /* for PHI node */
    goto _1921;
  } else {
    goto _1925;
  }

_1925:
  _1893 = llvm_select_u32((((int64_t)_1889) < ((int64_t)_1890)), (((uint32_t)(uint8_t)_1892)), 0);
  _1894 = *(uint64_t*)_1878;
  *(uint64_t*)_1878 = (llvm_add_u64(_1894, 1));
  _1895 = llvm_neg_u64(_1887);
  _1896 = _1888 | (llvm_select_u32((((int64_t)_1887) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1895) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1893, (((uint32_t)_1895)))))), (llvm_select_u32((((uint64_t)_1887) > ((uint64_t)UINT64_C(31))), 0, (_1893 << (((uint32_t)_1887)))))));
  _1897 = llvm_add_u64(_1887, -8);
  _1887__PHI_TEMPORARY = _1897;   /* for PHI node */
  _1888__PHI_TEMPORARY = _1896;   /* for PHI node */
  goto _1922;

  } while (1); /* end of syntactic loop '' */
_1921:
  _1898 = _1898__PHI_TEMPORARY;
  _1899 = *(uint64_t*)_1873;
  _1900 = *(uint64_t*)_1875;
  _1901 = jsyn_cbe_fshl_i64(_1900, _1899, 32);
  _1902 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1898)), _1900, 32);
  *(uint64_t*)_1873 = _1901;
  *(uint64_t*)_1875 = _1902;
  _1903 = ((&((uint8_t*)_1868)[((int64_t)56)]));
  _1904 = *(uint64_t*)_1903;
  _1905 = ((&((uint8_t*)_1868)[((int64_t)64)]));
  _1906 = *(uint64_t*)_1905;
  _1907 = ((&((uint8_t*)_1868)[((int64_t)72)]));
  _1908 = *(uint64_t*)_1907;
  _1909 = *(void**)_1868;
  _1910 = *(uint64_t*)(((&((uint8_t*)_1909)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1868)[((int64_t)48)]))) = _1904;
  *(uint64_t*)_1903 = _1906;
  *(uint64_t*)_1905 = _1908;
  *(uint64_t*)_1907 = _1910;
  _1872__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1918;

  } while (1); /* end of syntactic loop '' */
_1917:
  _1911 = _1911__PHI_TEMPORARY;
  _1912 = *(uint64_t*)(((&((uint8_t*)_1868)[((int64_t)8)])));
  _1913 = *(uint64_t*)(((&((uint8_t*)_1868)[((int64_t)48)])));
  *(uint16_t*)(((&((uint8_t*)_1868)[((int64_t)16)]))) = _1869;
  *(uint16_t*)_1866 = _1869;
  *(uint64_t*)(((&((uint8_t*)_1866)[((int64_t)8)]))) = _1912;
  *(uint64_t*)(((&((uint8_t*)_1866)[((int64_t)16)]))) = (llvm_add_u64(_1913, -1));
  *(uint8_t*)(((&((uint8_t*)_1866)[((int64_t)24)]))) = _1911;
}


static __noreturn void julia_throw_invalid_char_21(void* _1926, uint32_t _1927) {
  jsk_throw();
  __builtin_unreachable();

}


static void julia_lex_identifier_22(void* _1928, void* _1929, void* _1930, uint32_t _1931) {
  __PREFIXALIGN__(16) uint64_t _1932 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) uint64_t _1933 __POSTFIXALIGN__(16);    /* Address-exposed local */
  struct l_array_4_uint64_t _1934;    /* Address-exposed local */
  struct l_array_4_uint64_t _1935;    /* Address-exposed local */
  struct l_array_4_uint64_t _1936;    /* Address-exposed local */
  uint32_t _1937;
  uint32_t _1938;
  uint32_t _1939;
  uint32_t _1940;
  uint32_t _1941;
  uint32_t _1942;
  uint32_t _1943;
  uint32_t _1943__PHI_TEMPORARY;
  uint32_t _1944;
  uint64_t _1945;
  uint32_t _1946;
  bool _1947;
  bool _1947__PHI_TEMPORARY;
  uint64_t _1948;
  uint64_t _1948__PHI_TEMPORARY;
  uint64_t _1949;
  uint64_t _1949__PHI_TEMPORARY;
  uint32_t _1950;
  uint32_t _1950__PHI_TEMPORARY;
  void* _1951;
  uint64_t _1952;
  void* _1953;
  uint64_t _1954;
  uint32_t _1955;
  uint64_t _1956;
  uint32_t _1957;
  uint32_t _1958;
  bool _1959;
  uint32_t _1960;
  uint32_t _1961;
  uint32_t _1962;
  uint32_t _1963;
  uint32_t _1964;
  uint32_t _1965;
  uint32_t _1966;
  uint32_t _1966__PHI_TEMPORARY;
  uint8_t _1967;
  uint32_t _1968;
  uint64_t _1969;
  uint32_t _1970;
  uint32_t _1971;
  uint64_t _1972;
  bool _1973;
  uint32_t _1974;
  uint64_t _1975;
  uint32_t _1976;
  uint32_t _1977;
  uint64_t _1978;
  bool _1979;
  uint32_t _1980;
  uint32_t _1981;
  uint32_t _1982;
  uint32_t _1983;
  uint32_t _1983__PHI_TEMPORARY;
  uint32_t _1984;
  uint32_t _1985;
  uint32_t _1986;
  uint32_t _1987;
  uint32_t _1987__PHI_TEMPORARY;
  uint8_t _1988;
  uint32_t _1989;
  uint64_t _1990;
  uint32_t _1991;
  uint32_t _1992;
  uint64_t _1993;
  bool _1994;
  bool _1995;
  uint32_t _1996;
  uint32_t _1997;
  uint32_t _1998;
  uint32_t _1999;
  uint32_t _1999__PHI_TEMPORARY;
  uint32_t _2000;
  uint32_t _2001;
  uint32_t _2002;
  uint64_t _2003;
  uint32_t _2004;
  uint32_t _2005;
  uint64_t _2006;
  bool _2007;
  uint32_t _2008;
  uint32_t _2009;
  uint32_t _2010;
  uint32_t _2011;
  uint32_t _2012;
  uint32_t _2012__PHI_TEMPORARY;
  uint8_t _2013;
  void* _2014;
  void* _2015;
  uint64_t _2016;
  void* _2017;
  uint64_t _2018;
  void* _2019;
  uint8_t _2020;
  uint8_t _2021;
  uint8_t _2022;
  uint32_t _2023;
  uint64_t _2024;
  uint64_t _2024__PHI_TEMPORARY;
  uint32_t _2025;
  uint32_t _2025__PHI_TEMPORARY;
  uint64_t _2026;
  uint64_t _2027;
  void* _2028;
  uint8_t _2029;
  uint32_t _2030;
  uint64_t _2031;
  uint64_t _2032;
  uint32_t _2033;
  uint64_t _2034;
  uint32_t _2035;
  uint32_t _2035__PHI_TEMPORARY;
  uint64_t _2036;
  uint64_t _2037;
  uint64_t _2038;
  uint64_t _2039;
  void* _2040;
  uint64_t _2041;
  void* _2042;
  uint64_t _2043;
  void* _2044;
  uint64_t _2045;
  void* _2046;
  uint64_t _2047;
  uint64_t _2048;
  uint32_t _2049;
  uint32_t _2050;
  uint32_t _2051;
  uint32_t _2052;
  uint32_t _2053;
  uint32_t _2054;
  uint32_t _2055;
  uint32_t _2056;
  uint32_t _2056__PHI_TEMPORARY;
  uint32_t _2057;
  uint64_t _2058;
  uint64_t _2059;
  void* _2060;
  void* _2060__PHI_TEMPORARY;
  void* _2061;
  uint64_t _2062;
  uint64_t _2062__PHI_TEMPORARY;
  uint64_t _2063;
  uint64_t _2063__PHI_TEMPORARY;
  uint64_t _2064;
  uint64_t _2065;
  uint64_t _2066;
  uint64_t _2067;
  uint64_t _2068;
  uint16_t _2069;
  uint16_t _2069__PHI_TEMPORARY;
  uint16_t _2070;

  if ((((int32_t)_1931) < ((int32_t)0u))) {
    goto _2071;
  } else {
    goto _2072;
  }

_2072:
  _1937 = llvm_lshr_u32(_1931, 24);
  _1943__PHI_TEMPORARY = _1937;   /* for PHI node */
  goto _2073;

_2071:
  _1938 = llvm_OC_ctlz_OC_i32((_1931 ^ -1), 0);
  _1939 = llvm_OC_cttz_OC_i32(_1931, 1);
  _1940 = _1939 & 24;
  if ((((_1938 != 1u) & (((uint32_t)(llvm_add_u32((_1938 << 3), _1940))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_1931 & 12632256) ^ 8421504), _1940)) == 0u) & ((((_1931 & -33554432) != 3221225472u) & ((_1931 & -2097152) != 3766484992u)) & ((_1931 & -1048576) != 4034920448u))))) {
    goto _2074;
  } else {
    goto _2075;
  }

_2075:
  julia_throw_invalid_char_21(_1929, _1931);
  __builtin_unreachable();

_2074:
  _1941 = llvm_lshr_u32((_1931 & (llvm_select_u32((_1931 == 4294967295u), 0, (llvm_lshr_u32(-1, _1938))))), _1940);
  _1942 = (((_1941 & 127) | ((llvm_lshr_u32(_1941, 2)) & 8128)) | ((llvm_lshr_u32(_1941, 4)) & 520192)) | ((llvm_lshr_u32(_1941, 6)) & 33292288);
  _1943__PHI_TEMPORARY = _1942;   /* for PHI node */
  goto _2073;

_2073:
  _1943 = _1943__PHI_TEMPORARY;
  _1944 = llvm_OC_umax_OC_i32(_1943, 95);
  _1945 = ((uint64_t)(uint32_t)(llvm_select_u32((((uint32_t)_1943) < ((uint32_t)127u)), (_1944 & 31), 30)));
  _1946 = llvm_OC_bswap_OC_i32(_1931);
  *((uint32_t*)&_1932) = (((uint32_t)(bool)(((uint32_t)_1946) < ((uint32_t)128u))));
  *((uint32_t*)&_1933) = 0;
  _1947__PHI_TEMPORARY = (((uint32_t)_1946) < ((uint32_t)128u));   /* for PHI node */
  _1948__PHI_TEMPORARY = 1;   /* for PHI node */
  _1949__PHI_TEMPORARY = _1945;   /* for PHI node */
  _1950__PHI_TEMPORARY = _1931;   /* for PHI node */
  goto _2076;

  do {     /* Syntactic loop '' to make GCC happy */
_2076:
  _1947 = _1947__PHI_TEMPORARY;
  _1948 = _1948__PHI_TEMPORARY;
  _1949 = _1949__PHI_TEMPORARY;
  _1950 = _1950__PHI_TEMPORARY;
  _1951 = ((&((uint8_t*)_1930)[((int64_t)32)]));
  _1952 = *(uint64_t*)_1951;
  _1953 = ((&((uint8_t*)_1930)[((int64_t)40)]));
  _1954 = llvm_lshr_u64(_1952, 32);
  _1955 = ((uint32_t)_1954);
  _1956 = *(uint64_t*)_1953;
  _1957 = ((uint32_t)_1956);
  _1958 = llvm_OC_bswap_OC_i32(_1955);
  _1959 = llvm_select_bool(_1947, (((uint32_t)_1958) < ((uint32_t)128u)), 0);
  if (_1959) {
    goto _2077;
  } else {
    goto _2078;
  }

_2078:
  _1968 = llvm_OC_ctlz_OC_i32((_1950 ^ -1), 0);
  _1969 = ((uint64_t)(uint32_t)_1968);
  _1970 = llvm_OC_cttz_OC_i32(_1950, 0);
  _1971 = _1970 & 56;
  _1972 = ((uint64_t)(uint32_t)_1971);
  _1973 = llvm_select_bool((((uint32_t)_1970) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1950 & 12632256) ^ 8421504), _1971)) != 0u), 0);
  if ((((_1968 == 1u) | (((uint64_t)(llvm_add_u64((_1969 << 3), _1972))) > ((uint64_t)UINT64_C(32)))) | _1973)) {
    goto _2079;
  } else {
    goto _2080;
  }

_2080:
  _1974 = llvm_OC_ctlz_OC_i32((_1955 ^ -1), 0);
  _1975 = ((uint64_t)(uint32_t)_1974);
  _1976 = llvm_OC_cttz_OC_i32(_1955, 0);
  _1977 = _1976 & 56;
  _1978 = ((uint64_t)(uint32_t)_1977);
  _1979 = llvm_select_bool((((uint32_t)_1976) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1955 & 12632256) ^ 8421504), _1977)) != 0u), 0);
  if ((((_1974 == 1u) | (((uint64_t)(llvm_add_u64((_1975 << 3), _1978))) > ((uint64_t)UINT64_C(32)))) | _1979)) {
    goto _2079;
  } else {
    goto _2081;
  }

_2081:
  if ((((int32_t)_1950) < ((int32_t)0u))) {
    goto _2082;
  } else {
    goto _2083;
  }

_2083:
  _1980 = llvm_lshr_u32(_1950, 24);
  _1983__PHI_TEMPORARY = _1980;   /* for PHI node */
  goto _2084;

_2082:
  if ((((_1968 == 1u) | (((uint64_t)(llvm_add_u64((_1969 << 3), _1972))) > ((uint64_t)UINT64_C(32)))) | (_1973 | ((((_1950 & -33554432) == 3221225472u) | ((_1950 & -2097152) == 3766484992u)) | ((_1950 & -1048576) == 4034920448u))))) {
    goto _2085;
  } else {
    goto _2086;
  }

_2086:
  _1981 = llvm_select_u32((((uint32_t)_1970) < ((uint32_t)32u)), (llvm_lshr_u32((_1950 & (llvm_select_u32((_1950 == 4294967295u), 0, (llvm_lshr_u32(-1, _1968))))), _1971)), 0);
  _1982 = (((_1981 & 127) | ((llvm_lshr_u32(_1981, 2)) & 8128)) | ((llvm_lshr_u32(_1981, 4)) & 520192)) | ((llvm_lshr_u32(_1981, 6)) & 33292288);
  _1983__PHI_TEMPORARY = _1982;   /* for PHI node */
  goto _2084;

_2084:
  _1983 = _1983__PHI_TEMPORARY;
  if ((((int64_t)_1952) < ((int64_t)UINT64_C(0)))) {
    goto _2087;
  } else {
    goto _2088;
  }

_2088:
  _1984 = llvm_lshr_u32(_1955, 24);
  _1987__PHI_TEMPORARY = _1984;   /* for PHI node */
  goto _2089;

_2087:
  if ((((_1974 == 1u) | (((uint64_t)(llvm_add_u64((_1975 << 3), _1978))) > ((uint64_t)UINT64_C(32)))) | (_1979 | ((((_1955 & -33554432) == 3221225472u) | ((_1955 & -2097152) == 3766484992u)) | ((_1955 & -1048576) == 4034920448u))))) {
    goto _2090;
  } else {
    goto _2091;
  }

_2091:
  _1985 = llvm_select_u32((((uint32_t)_1976) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_1954 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _1974)))) & _1955), _1977)), 0);
  _1986 = (((_1985 & 127) | ((llvm_lshr_u32(_1985, 2)) & 8128)) | ((llvm_lshr_u32(_1985, 4)) & 520192)) | ((llvm_lshr_u32(_1985, 6)) & 33292288);
  _1987__PHI_TEMPORARY = _1986;   /* for PHI node */
  goto _2089;

_2089:
  _1987 = _1987__PHI_TEMPORARY;
  _1988 = jsk_utf8proc_grapheme_break_stateful(_1983, _1987, (&_1932));
  if ((((bool)_1988&1u))) {
    goto _2092;
  } else {
    goto _2093;
  }

_2093:
  if (((_1952 & INT64_C(-1103806595072)) == UINT64_C(16321198981218566144))) {
    goto _2094;
  } else {
    goto _2095;
  }

_2094:
  _2001 = *((uint32_t*)&_1932);
  *((uint32_t*)&_1933) = _2001;
  _2002 = llvm_OC_ctlz_OC_i32((_1957 ^ -1), 0);
  _2003 = ((uint64_t)(uint32_t)_2002);
  _2004 = llvm_OC_cttz_OC_i32(_1957, 0);
  _2005 = _2004 & 56;
  _2006 = ((uint64_t)(uint32_t)_2005);
  _2007 = llvm_select_bool((((uint32_t)_2004) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1957 & 12632256) ^ 8421504), _2005)) != 0u), 0);
  if ((((_2002 == 1u) | (((uint64_t)(llvm_add_u64((_2003 << 3), _2006))) > ((uint64_t)UINT64_C(32)))) | _2007)) {
    goto _2096;
  } else {
    goto _2097;
  }

_2097:
  _2008 = ((llvm_lshr_u32(_1955, 8)) & 13) | 8192;
  if ((((int32_t)_1957) < ((int32_t)0u))) {
    goto _2098;
  } else {
    goto _2099;
  }

_2099:
  _2009 = llvm_lshr_u32(_1957, 24);
  _2012__PHI_TEMPORARY = _2009;   /* for PHI node */
  goto _2100;

_2098:
  if ((((_2002 == 1u) | (((uint64_t)(llvm_add_u64((_2003 << 3), _2006))) > ((uint64_t)UINT64_C(32)))) | (_2007 | ((((_1957 & -33554432) == 3221225472u) | ((_1957 & -2097152) == 3766484992u)) | ((_1957 & -1048576) == 4034920448u))))) {
    goto _2101;
  } else {
    goto _2102;
  }

_2102:
  _2010 = llvm_select_u32((((uint32_t)_2004) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_1957 == 4294967295u), 0, (llvm_lshr_u32(-1, _2002)))) & _1957), _2005)), 0);
  _2011 = (((_2010 & 127) | ((llvm_lshr_u32(_2010, 2)) & 8128)) | ((llvm_lshr_u32(_2010, 4)) & 520192)) | ((llvm_lshr_u32(_2010, 6)) & 33292288);
  _2012__PHI_TEMPORARY = _2011;   /* for PHI node */
  goto _2100;

_2100:
  _2012 = _2012__PHI_TEMPORARY;
  _2013 = jsk_utf8proc_grapheme_break_stateful(_2008, _2012, (&_1933));
  if ((((bool)_2013&1u))) {
    goto _2103;
  } else {
    goto _2095;
  }

_2079:
  *((uint32_t*)&_1932) = 0;
  goto _2092;

_2092:
  if (((llvm_select_bool((_1954 == UINT64_C(553648128)), (_1957 == 1023410176u), 0)) | (_1954 == UINT64_C(4294967295)))) {
    goto _2103;
  } else {
    goto _2104;
  }

_2104:
  _1989 = llvm_OC_ctlz_OC_i32((_1955 ^ -1), 0);
  _1990 = ((uint64_t)(uint32_t)_1989);
  _1991 = llvm_OC_cttz_OC_i32(_1955, 0);
  _1992 = _1991 & 56;
  _1993 = ((uint64_t)(uint32_t)_1992);
  _1994 = llvm_select_bool((((uint32_t)_1991) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1955 & 12632256) ^ 8421504), _1992)) != 0u), 0);
  _1995 = (((_1955 & -33554432) == 3221225472u) | ((_1955 & -2097152) == 3766484992u)) | ((_1955 & -1048576) == 4034920448u);
  if ((((((_1989 == 1u) | (((uint64_t)(llvm_add_u64((_1990 << 3), _1993))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_1952) > ((uint64_t)UINT64_C(17122614315006820351))) & (_1954 != UINT64_C(3986669312))) & (((((uint64_t)_1952) < ((uint64_t)UINT64_C(17185876919829135360))) & (_1954 != UINT64_C(4001398784))) | ((((uint64_t)_1952) > ((uint64_t)UINT64_C(17622514693983698943))) & (_1954 != UINT64_C(4103061439)))))) | _1994) | _1995)) {
    goto _2103;
  } else {
    goto _2105;
  }

_2105:
  _1996 = llvm_lshr_u32(_1955, 24);
  if ((((int64_t)_1952) < ((int64_t)UINT64_C(0)))) {
    goto _2106;
  } else {
    _1999__PHI_TEMPORARY = _1996;   /* for PHI node */
    goto _2107;
  }

_2106:
  if ((((_1989 == 1u) | (((uint64_t)(llvm_add_u64((_1990 << 3), _1993))) > ((uint64_t)UINT64_C(32)))) | (_1994 | _1995))) {
    goto _2108;
  } else {
    goto _2109;
  }

_2109:
  _1997 = llvm_select_u32((((uint32_t)_1991) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _1989)) & _1955), _1992)), 0);
  _1998 = (((_1997 & 127) | ((llvm_lshr_u32(_1997, 2)) & 8128)) | ((llvm_lshr_u32(_1997, 4)) & 520192)) | ((llvm_lshr_u32(_1997, 6)) & 33292288);
  _1999__PHI_TEMPORARY = _1998;   /* for PHI node */
  goto _2107;

_2107:
  _1999 = _1999__PHI_TEMPORARY;
  _2000 = jsk_jl_id_char(_1999);
  if ((_2000 == 0u)) {
    goto _2103;
  } else {
    goto _2095;
  }

_2077:
  if ((((int64_t)_1952) < ((int64_t)UINT64_C(0)))) {
    goto _2110;
  } else {
    goto _2111;
  }

_2111:
  _1960 = llvm_lshr_u32(_1955, 24);
  _1966__PHI_TEMPORARY = _1960;   /* for PHI node */
  goto _2112;

_2110:
  _1961 = llvm_OC_ctlz_OC_i32((_1955 ^ -1), 0);
  _1962 = llvm_OC_cttz_OC_i32(_1955, 1);
  _1963 = _1962 & 24;
  if ((((_1961 != 1u) & (((uint32_t)(llvm_add_u32((_1961 << 3), _1963))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_1955 & 12632256) ^ 8421504), _1963)) == 0u) & ((((_1955 & -33554432) != 3221225472u) & ((_1955 & -2097152) != 3766484992u)) & ((_1955 & -1048576) != 4034920448u))))) {
    goto _2113;
  } else {
    goto _2114;
  }

_2113:
  _1964 = llvm_lshr_u32(((llvm_select_u32((_1954 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _1961)))) & _1955), _1963);
  _1965 = (_1964 & 127) | ((llvm_lshr_u32(_1964, 2)) & 192);
  _1966__PHI_TEMPORARY = _1965;   /* for PHI node */
  goto _2112;

_2112:
  _1966 = _1966__PHI_TEMPORARY;
  if ((llvm_select_bool((_1966 != 33u), 1, (_1957 != 1023410176u)))) {
    goto _2115;
  } else {
    goto _2103;
  }

_2115:
  _1967 = *(uint8_t*)(((&((uint8_t*)(&_j_constYY_OC_61))[((int64_t)(((uint64_t)(uint32_t)_1966)))])));
  if ((((bool)_1967&1u))) {
    goto _2095;
  } else {
    goto _2103;
  }

_2095:
  _2014 = *(void**)_1930;
  _2015 = ((&((uint8_t*)_2014)[((int64_t)16)]));
  _2016 = *(uint64_t*)_2015;
  _2017 = ((&((uint8_t*)_2014)[((int64_t)8)]));
  _2018 = *(uint64_t*)_2017;
  if ((((int64_t)_2018) > ((int64_t)_2016))) {
    goto _2116;
  } else {
    _2035__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2117;
  }

_2116:
  _2019 = *(void**)_2014;
  _2020 = *(uint8_t*)(((&((uint8_t*)_2019)[((int64_t)_2016)])));
  *(uint64_t*)_2015 = (llvm_add_u64(_2016, 1));
  _2021 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2020)), 0);
  _2022 = llvm_sub_u8(32, (llvm_shl_u8(_2021, 3)));
  _2023 = (((uint32_t)(uint8_t)_2020)) << 24;
  if ((((uint8_t)_2022) > ((uint8_t)((uint8_t)16)))) {
    _2035__PHI_TEMPORARY = _2023;   /* for PHI node */
    goto _2117;
  } else {
    _2024__PHI_TEMPORARY = 16;   /* for PHI node */
    _2025__PHI_TEMPORARY = _2023;   /* for PHI node */
    goto _2118;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2118:
  _2024 = _2024__PHI_TEMPORARY;
  _2025 = _2025__PHI_TEMPORARY;
  if (((((int64_t)_2024) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2024) < ((uint64_t)(((uint64_t)(uint8_t)_2022)))))) {
    _2035__PHI_TEMPORARY = _2025;   /* for PHI node */
    goto _2117;
  } else {
    goto _2119;
  }

_2119:
  _2026 = *(uint64_t*)_2015;
  _2027 = *(uint64_t*)_2017;
  if ((((int64_t)_2027) > ((int64_t)_2026))) {
    goto _2120;
  } else {
    _2035__PHI_TEMPORARY = _2025;   /* for PHI node */
    goto _2117;
  }

_2120:
  _2028 = *(void**)_2014;
  _2029 = *(uint8_t*)(((&((uint8_t*)_2028)[((int64_t)_2026)])));
  if ((((int8_t)_2029) > ((int8_t)((uint8_t)-65)))) {
    _2035__PHI_TEMPORARY = _2025;   /* for PHI node */
    goto _2117;
  } else {
    goto _2121;
  }

_2121:
  _2030 = llvm_select_u32((((int64_t)_2026) < ((int64_t)_2027)), (((uint32_t)(uint8_t)_2029)), 0);
  _2031 = *(uint64_t*)_2015;
  *(uint64_t*)_2015 = (llvm_add_u64(_2031, 1));
  _2032 = llvm_neg_u64(_2024);
  _2033 = _2025 | (llvm_select_u32((((int64_t)_2024) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2032) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2030, (((uint32_t)_2032)))))), (llvm_select_u32((((uint64_t)_2024) > ((uint64_t)UINT64_C(31))), 0, (_2030 << (((uint32_t)_2024)))))));
  _2034 = llvm_add_u64(_2024, -8);
  _2024__PHI_TEMPORARY = _2034;   /* for PHI node */
  _2025__PHI_TEMPORARY = _2033;   /* for PHI node */
  goto _2118;

  } while (1); /* end of syntactic loop '' */
_2117:
  _2035 = _2035__PHI_TEMPORARY;
  _2036 = *(uint64_t*)_1951;
  _2037 = *(uint64_t*)_1953;
  _2038 = jsyn_cbe_fshl_i64(_2037, _2036, 32);
  _2039 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2035)), _2037, 32);
  *(uint64_t*)_1951 = _2038;
  *(uint64_t*)_1953 = _2039;
  _2040 = ((&((uint8_t*)_1930)[((int64_t)56)]));
  _2041 = *(uint64_t*)_2040;
  _2042 = ((&((uint8_t*)_1930)[((int64_t)64)]));
  _2043 = *(uint64_t*)_2042;
  _2044 = ((&((uint8_t*)_1930)[((int64_t)72)]));
  _2045 = *(uint64_t*)_2044;
  _2046 = *(void**)_1930;
  _2047 = *(uint64_t*)(((&((uint8_t*)_2046)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1930)[((int64_t)48)]))) = _2041;
  *(uint64_t*)_2040 = _2043;
  *(uint64_t*)_2042 = _2045;
  *(uint64_t*)_2044 = _2047;
  _2048 = *(uint64_t*)_1951;
  _2049 = ((uint32_t)_2048);
  if ((((int32_t)_2049) < ((int32_t)0u))) {
    goto _2122;
  } else {
    goto _2123;
  }

_2123:
  _2050 = llvm_lshr_u32(_2049, 24);
  _2056__PHI_TEMPORARY = _2050;   /* for PHI node */
  goto _2124;

_2122:
  _2051 = llvm_OC_ctlz_OC_i32((_2049 ^ -1), 0);
  _2052 = llvm_OC_cttz_OC_i32(_2049, 1);
  _2053 = _2052 & 24;
  if ((((_2051 != 1u) & (((uint32_t)(llvm_add_u32((_2051 << 3), _2053))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_2049 & 12632256) ^ 8421504), _2053)) == 0u) & ((((_2049 & -33554432) != 3221225472u) & ((_2049 & -2097152) != 3766484992u)) & ((_2049 & -1048576) != 4034920448u))))) {
    goto _2125;
  } else {
    goto _2126;
  }

_2125:
  _2054 = llvm_lshr_u32(((llvm_select_u32((_2049 == 4294967295u), 0, (llvm_lshr_u32(-1, _2051)))) & _2049), _2053);
  _2055 = (((_2054 & 127) | ((llvm_lshr_u32(_2054, 2)) & 8128)) | ((llvm_lshr_u32(_2054, 4)) & 520192)) | ((llvm_lshr_u32(_2054, 6)) & 33292288);
  _2056__PHI_TEMPORARY = _2055;   /* for PHI node */
  goto _2124;

_2124:
  _2056 = _2056__PHI_TEMPORARY;
  _2057 = llvm_OC_umax_OC_i32(_2056, 95);
  _2058 = (_1949 << 5) | (((uint64_t)(uint32_t)(llvm_select_u32((((uint32_t)_2056) < ((uint32_t)127u)), (_2057 & 31), 30))));
  _2059 = llvm_add_u64(_1948, 1);
  _1947__PHI_TEMPORARY = _1959;   /* for PHI node */
  _1948__PHI_TEMPORARY = _2059;   /* for PHI node */
  _1949__PHI_TEMPORARY = _2058;   /* for PHI node */
  _1950__PHI_TEMPORARY = _2049;   /* for PHI node */
  goto _2076;

  } while (1); /* end of syntactic loop '' */
_2114:
  julia_throw_invalid_char_21(_1929, _1955);
  __builtin_unreachable();

_2085:
  julia_throw_invalid_char_21(_1929, _1950);
  __builtin_unreachable();

_2090:
  julia_throw_invalid_char_21(_1929, _1955);
  __builtin_unreachable();

_2108:
  julia_throw_invalid_char_21(_1929, _1955);
  __builtin_unreachable();

_2101:
  julia_throw_invalid_char_21(_1929, _1957);
  __builtin_unreachable();

_2096:
  *((uint32_t*)&_1933) = 0;
  goto _2103;

_2126:
  julia_throw_invalid_char_21(_1929, _2049);
  __builtin_unreachable();

_2103:
  if ((((int64_t)_1948) < ((int64_t)UINT64_C(11)))) {
    goto _2127;
  } else {
    goto _2128;
  }

_2129:
  _2060 = _2060__PHI_TEMPORARY;
  _2061 = memcpy(_1928, _2060, 32);
  return;
_2128:
  julia_emit_20((&_1934), _1929, _1930, 3, 1);
  _2060__PHI_TEMPORARY = (&_1934);   /* for PHI node */
  goto _2129;

_2127:
  switch (_1949) {
  default:
    _2062__PHI_TEMPORARY = 39;   /* for PHI node */
    _2063__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2130;
  case UINT64_C(6337125):
    goto _2131;
  case UINT64_C(674469):
    goto _2131;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2130:
  _2062 = _2062__PHI_TEMPORARY;
  _2063 = _2063__PHI_TEMPORARY;
  if ((((int64_t)_2063) > ((int64_t)_2062))) {
    _2069__PHI_TEMPORARY = 3;   /* for PHI node */
    goto _2132;
  } else {
    goto _2133;
  }

_2133:
  _2064 = llvm_lshr_u64((llvm_add_u64(_2063, _2062)), 1);
  _2065 = llvm_add_u64(_2064, -1);
  _2066 = *(uint64_t*)(((&((uint64_t*)(&_j_constYY_OC_62))[((int64_t)_2065)])));
  if ((_2066 == _1949)) {
    goto _2134;
  } else {
    goto _2135;
  }

_2135:
  _2067 = llvm_select_u64((((uint64_t)_2066) < ((uint64_t)_1949)), _2062, _2065);
  _2068 = llvm_select_u64((((uint64_t)_2066) < ((uint64_t)_1949)), (llvm_add_u64(_2064, 1)), _2063);
  _2062__PHI_TEMPORARY = _2067;   /* for PHI node */
  _2063__PHI_TEMPORARY = _2068;   /* for PHI node */
  goto _2130;

  } while (1); /* end of syntactic loop '' */
_2132:
  _2069 = _2069__PHI_TEMPORARY;
  julia_emit_20((&_1936), _1929, _1930, _2069, 1);
  _2060__PHI_TEMPORARY = (&_1936);   /* for PHI node */
  goto _2129;

_2131:
  julia_emit_20((&_1935), _1929, _1930, 43, 1);
  _2060__PHI_TEMPORARY = (&_1935);   /* for PHI node */
  goto _2129;

_2134:
  _2070 = *(uint16_t*)(((&((uint16_t*)(&_j_constYY_OC_63))[((int64_t)_2065)])));
  _2069__PHI_TEMPORARY = _2070;   /* for PHI node */
  goto _2132;

}


static uint8_t julia_is_operator_start_char_23(void* _2136, uint32_t _2137) {
  uint32_t _2138;
  uint64_t _2139;
  uint32_t _2140;
  uint32_t _2141;
  uint64_t _2142;
  bool _2143;
  bool _2144;
  uint32_t _2145;
  uint32_t _2146;
  uint32_t _2147;
  uint32_t _2148;
  uint32_t _2148__PHI_TEMPORARY;
  bool _2149;
  bool _2149__PHI_TEMPORARY;
  bool _2150;

  if ((_2137 == 4294967295u)) {
    _2149__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2151;
  } else {
    goto _2152;
  }

_2152:
  _2138 = llvm_OC_ctlz_OC_i32((_2137 ^ -1), 0);
  _2139 = ((uint64_t)(uint32_t)_2138);
  _2140 = llvm_OC_cttz_OC_i32(_2137, 0);
  _2141 = _2140 & 56;
  _2142 = ((uint64_t)(uint32_t)_2141);
  _2143 = llvm_select_bool((((uint32_t)_2140) < ((uint32_t)32u)), ((llvm_lshr_u32(((_2137 & 12632256) ^ 8421504), _2141)) != 0u), 0);
  _2144 = (((_2137 & -33554432) == 3221225472u) | ((_2137 & -2097152) == 3766484992u)) | ((_2137 & -1048576) == 4034920448u);
  if ((((((_2138 == 1u) | (((uint64_t)(llvm_add_u64((_2139 << 3), _2142))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_2137) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_2137, 191905856))) < ((uint32_t)4193304640u)))) | _2143) | _2144)) {
    _2149__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2151;
  } else {
    goto _2153;
  }

_2153:
  _2145 = llvm_lshr_u32(_2137, 24);
  if ((((int32_t)_2137) < ((int32_t)0u))) {
    goto _2154;
  } else {
    _2148__PHI_TEMPORARY = _2145;   /* for PHI node */
    goto _2155;
  }

_2154:
  if ((((_2138 == 1u) | (((uint64_t)(llvm_add_u64((_2139 << 3), _2142))) > ((uint64_t)UINT64_C(32)))) | (_2143 | _2144))) {
    goto _2156;
  } else {
    goto _2157;
  }

_2156:
  julia_throw_invalid_char_21(_2136, _2137);
  __builtin_unreachable();

_2157:
  _2146 = llvm_select_u32((((uint32_t)_2140) < ((uint32_t)32u)), (llvm_lshr_u32((_2137 & (llvm_lshr_u32(-1, _2138))), _2141)), 0);
  _2147 = (((_2146 & 127) | ((llvm_lshr_u32(_2146, 2)) & 8128)) | ((llvm_lshr_u32(_2146, 4)) & 520192)) | ((llvm_lshr_u32(_2146, 6)) & 33292288);
  _2148__PHI_TEMPORARY = _2147;   /* for PHI node */
  goto _2155;

_2155:
  _2148 = _2148__PHI_TEMPORARY;
  if ((((llvm_select_bool((((_2148 == 33u) | ((_2148 & -4) == 36u)) | ((_2148 & -2) == 42u)), 1, (((uint32_t)(llvm_add_u32(_2148, -45))) < ((uint32_t)3u)))) | (_2148 == 58u)) | ((_2148 & -4) == 60u))) {
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  } else {
    goto _2158;
  }

_2151:
  _2149 = _2149__PHI_TEMPORARY;
  return (((uint8_t)(bool)_2149));
_2158:
  switch (_2148) {
  default:
    goto _2159;
  case 92u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 94u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 124u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 126u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 166u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 172u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 177u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 183u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 215u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 247u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 903u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8230u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8285u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8523u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8656u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8655u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8654u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8653u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8652u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8651u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8649u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8647u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8646u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8644u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8641u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8640u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8637u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8636u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8635u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8634u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8631u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8630u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8622u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8620u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8619u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8618u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8617u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8614u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8612u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8611u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8610u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8608u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8606u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8605u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8604u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8603u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8602u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8596u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8595u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8594u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8593u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8592u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8658u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8660u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  }

_2159:
  if ((((uint32_t)(llvm_add_u32(_2148, -8666))) < ((uint32_t)4u))) {
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  } else {
    goto _2160;
  }

_2160:
  switch (_2148) {
  default:
    goto _2161;
  case 8672u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8674u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  }

_2161:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_2148, -8692))) < ((uint32_t)12u)), 1, (((uint32_t)(llvm_add_u32(_2148, -8712))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -8722))) < ((uint32_t)3u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -8727))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -8740))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -8759))) < ((uint32_t)2u)))) | ((_2148 & -2) == 8762u)), 1, (((uint32_t)(llvm_add_u32(_2148, -8765))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -8768))) < ((uint32_t)76u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -8845))) < ((uint32_t)16u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -8862))) < ((uint32_t)6u))))) {
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  } else {
    goto _2162;
  }

_2162:
  switch (_2148) {
  default:
    goto _2163;
  case 8873u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8876u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 8878u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  }

_2163:
  if ((llvm_select_bool((llvm_select_bool(((llvm_select_bool(((_2148 & -8) == 8880u), 1, (((uint32_t)(llvm_add_u32(_2148, -8891))) < ((uint32_t)3u)))) | ((_2148 & -4) == 8900u)), 1, (((uint32_t)(llvm_add_u32(_2148, -8905))) < ((uint32_t)11u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -8917))) < ((uint32_t)43u))))) {
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  } else {
    goto _2164;
  }

_2164:
  switch (_2148) {
  default:
    goto _2165;
  case 9023u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 9655u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10178u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  }

_2165:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_2148, -10183))) < ((uint32_t)3u)), 1, (((uint32_t)(llvm_add_u32(_2148, -10193))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -10197))) < ((uint32_t)3u)))) | ((_2148 & -2) == 10224u)), 1, (((uint32_t)(llvm_add_u32(_2148, -10229))) < ((uint32_t)3u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -10233))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -10496))) < ((uint32_t)25u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -10525))) < ((uint32_t)4u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -10564))) < ((uint32_t)45u))))) {
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  } else {
    goto _2166;
  }

_2166:
  switch (_2148) {
  default:
    goto _2167;
  case 10615u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10618u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10760u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10759u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10747u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10746u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10743u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10742u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10740u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10725u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10724u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10723u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10721u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10689u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10688u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10687u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10686u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10684u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10680u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10679u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10781u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  case 10783u:
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  }

_2167:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((((llvm_select_bool(((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_2148, -10786))) < ((uint32_t)13u)), 1, (((uint32_t)(llvm_add_u32(_2148, -10800))) < ((uint32_t)14u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -10816))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -10826))) < ((uint32_t)15u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -10842))) < ((uint32_t)10u)))) | ((_2148 & -2) == 10854u)), 1, (((uint32_t)(llvm_add_u32(_2148, -10858))) < ((uint32_t)112u)))) | (_2148 == 10971u)) | ((_2148 & -2) == 10986u)), 1, (((uint32_t)(llvm_add_u32(_2148, -10999))) < ((uint32_t)4u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -11056))) < ((uint32_t)21u)))), 1, (((uint32_t)(llvm_add_u32(_2148, -11079))) < ((uint32_t)6u))))) {
    _2149__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2151;
  } else {
    goto _2168;
  }

_2168:
  _2150 = (((uint32_t)(llvm_add_u32(_2148, -65513))) < ((uint32_t)4u)) | (_2148 == 129202u);
  _2149__PHI_TEMPORARY = _2150;   /* for PHI node */
  goto _2151;

}


static uint8_t julia_is_never_id_char_24(void* _2169, uint32_t _2170) {
  uint32_t _2171;
  uint64_t _2172;
  uint32_t _2173;
  uint32_t _2174;
  uint64_t _2175;
  bool _2176;
  uint32_t _2177;
  bool _2178;
  uint32_t _2179;
  uint32_t _2180;
  uint32_t _2181;
  uint32_t _2181__PHI_TEMPORARY;
  uint32_t _2182;
  uint64_t _2183;
  uint64_t _2184;
  uint64_t _2184__PHI_TEMPORARY;
  uint32_t _2185;
  uint32_t _2186;
  uint32_t _2187;
  uint32_t _2187__PHI_TEMPORARY;
  bool _2188;
  bool _2189;
  bool _2189__PHI_TEMPORARY;
  uint32_t _2190;

  _2171 = llvm_OC_ctlz_OC_i32((_2170 ^ -1), 0);
  _2172 = ((uint64_t)(uint32_t)_2171);
  _2173 = llvm_OC_cttz_OC_i32(_2170, 0);
  _2174 = _2173 & 56;
  _2175 = ((uint64_t)(uint32_t)_2174);
  _2176 = llvm_select_bool((((uint32_t)_2173) < ((uint32_t)32u)), ((llvm_lshr_u32(((_2170 & 12632256) ^ 8421504), _2174)) != 0u), 0);
  _2177 = llvm_lshr_u32(_2170, 24);
  _2178 = (((_2170 & -33554432) == 3221225472u) | ((_2170 & -2097152) == 3766484992u)) | ((_2170 & -1048576) == 4034920448u);
  if ((((((_2171 == 1u) | (((uint64_t)(llvm_add_u64((_2172 << 3), _2175))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_2170) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_2170, 191905856))) < ((uint32_t)4193304640u)))) | _2176) | _2178)) {
    _2189__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2191;
  } else {
    goto _2192;
  }

_2192:
  if ((((int32_t)_2170) < ((int32_t)0u))) {
    goto _2193;
  } else {
    _2181__PHI_TEMPORARY = _2177;   /* for PHI node */
    goto _2194;
  }

_2193:
  if ((((_2171 == 1u) | (((uint64_t)(llvm_add_u64((_2172 << 3), _2175))) > ((uint64_t)UINT64_C(32)))) | (_2176 | _2178))) {
    goto _2195;
  } else {
    goto _2196;
  }

_2195:
  julia_throw_invalid_char_21(_2169, _2170);
  __builtin_unreachable();

_2196:
  _2179 = llvm_select_u32((((uint32_t)_2173) < ((uint32_t)32u)), (llvm_lshr_u32((_2170 & (llvm_select_u32((_2170 == 4294967295u), 0, (llvm_lshr_u32(-1, _2171))))), _2174)), 0);
  _2180 = (((_2179 & 127) | ((llvm_lshr_u32(_2179, 2)) & 8128)) | ((llvm_lshr_u32(_2179, 4)) & 520192)) | ((llvm_lshr_u32(_2179, 6)) & 33292288);
  _2181__PHI_TEMPORARY = _2180;   /* for PHI node */
  goto _2194;

_2194:
  _2181 = _2181__PHI_TEMPORARY;
  if ((((uint32_t)_2181) > ((uint32_t)1114111u))) {
    _2184__PHI_TEMPORARY = 30;   /* for PHI node */
    goto _2197;
  } else {
    goto _2198;
  }

_2198:
  _2182 = jsk_utf8proc_category(_2181);
  _2183 = ((int64_t)(int32_t)_2182);
  _2184__PHI_TEMPORARY = _2183;   /* for PHI node */
  goto _2197;

_2197:
  _2184 = _2184__PHI_TEMPORARY;
  if ((((int32_t)_2170) < ((int32_t)0u))) {
    goto _2199;
  } else {
    _2187__PHI_TEMPORARY = _2177;   /* for PHI node */
    goto _2200;
  }

_2199:
  if ((((_2171 == 1u) | (((uint64_t)(llvm_add_u64((_2172 << 3), _2175))) > ((uint64_t)UINT64_C(32)))) | (_2176 | _2178))) {
    goto _2201;
  } else {
    goto _2202;
  }

_2201:
  julia_throw_invalid_char_21(_2169, _2170);
  __builtin_unreachable();

_2202:
  _2185 = llvm_select_u32((((uint32_t)_2173) < ((uint32_t)32u)), (llvm_lshr_u32((_2170 & (llvm_select_u32((_2170 == 4294967295u), 0, (llvm_lshr_u32(-1, _2171))))), _2174)), 0);
  _2186 = (((_2185 & 127) | ((llvm_lshr_u32(_2185, 2)) & 8128)) | ((llvm_lshr_u32(_2185, 4)) & 520192)) | ((llvm_lshr_u32(_2185, 6)) & 33292288);
  _2187__PHI_TEMPORARY = _2186;   /* for PHI node */
  goto _2200;

_2200:
  _2187 = _2187__PHI_TEMPORARY;
  if ((((uint64_t)(llvm_add_u64(_2184, -23))) < ((uint64_t)UINT64_C(6)))) {
    _2189__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2191;
  } else {
    goto _2203;
  }

_2204:
  _2188 = ((bool)(((llvm_lshr_u54(UINT64_C(11258999068426243), (((((uint64_t)(uint32_t)_2190))&4294967295))))&4294967295))&1u);
  _2189__PHI_TEMPORARY = _2188;   /* for PHI node */
  goto _2191;

_2191:
  _2189 = _2189__PHI_TEMPORARY;
  return (((uint8_t)(bool)_2189));
_2203:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((((uint32_t)_2187) < ((uint32_t)255u)), (((uint64_t)(llvm_add_u64(_2184, -13))) < ((uint64_t)UINT64_C(6))), 0)) | (_2187 == 96u)), 1, (((uint32_t)(llvm_add_u32(_2187, -10214))) < ((uint32_t)10u)))), 1, (((uint32_t)(llvm_add_u32(_2187, -12296))) < ((uint32_t)10u)))), 1, (((uint32_t)(llvm_add_u32(_2187, -12308))) < ((uint32_t)8u))))) {
    _2189__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2191;
  } else {
    goto _2205;
  }

_2205:
  _2190 = llvm_add_u32(_2187, -65288);
  if ((((uint32_t)_2190) < ((uint32_t)54u))) {
    goto _2204;
  } else {
    _2189__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2191;
  }

}


static __noreturn void julia__throw_argerror_25(void* _2206, void* _2207) {
  jsk_throw();
  __builtin_unreachable();

}


static struct l_array_1_void_KC_ julia_AssertionError_26(void* _2208, void* _2209) {
  struct l_array_1_void_KC_ _2210;

  _2210 = llvm_ctor_ptra1(((void*)/*NULL*/0));
  _2210.array[0] = _2209;
  return _2210;
}


static void julia_lex_whitespace_27(void* _2211, void* _2212, void* _2213, uint32_t _2214) {
  struct l_array_4_uint64_t _2215;    /* Address-exposed local */
  uint16_t _2216;
  uint16_t _2216__PHI_TEMPORARY;
  uint32_t _2217;
  uint32_t _2217__PHI_TEMPORARY;
  uint16_t _2218;
  void* _2219;
  uint64_t _2220;
  uint64_t _2221;
  void* _2222;
  uint64_t _2223;
  uint32_t _2224;
  uint64_t _2225;
  uint32_t _2226;
  uint64_t _2227;
  uint32_t _2228;
  uint32_t _2229;
  uint64_t _2230;
  bool _2231;
  bool _2232;
  uint32_t _2233;
  uint32_t _2234;
  uint32_t _2235;
  bool _2236;
  bool _2236__PHI_TEMPORARY;
  void* _2237;
  void* _2238;
  uint64_t _2239;
  void* _2240;
  uint64_t _2241;
  void* _2242;
  uint8_t _2243;
  uint8_t _2244;
  uint8_t _2245;
  uint32_t _2246;
  uint64_t _2247;
  uint64_t _2247__PHI_TEMPORARY;
  uint32_t _2248;
  uint32_t _2248__PHI_TEMPORARY;
  uint64_t _2249;
  uint64_t _2250;
  void* _2251;
  uint8_t _2252;
  uint32_t _2253;
  uint64_t _2254;
  uint64_t _2255;
  uint32_t _2256;
  uint64_t _2257;
  uint32_t _2258;
  uint32_t _2258__PHI_TEMPORARY;
  uint64_t _2259;
  uint64_t _2260;
  uint64_t _2261;
  uint64_t _2262;
  void* _2263;
  uint64_t _2264;
  void* _2265;
  uint64_t _2266;
  void* _2267;
  uint64_t _2268;
  void* _2269;
  uint64_t _2270;
  uint64_t _2271;
  uint32_t _2272;
  void* _2273;

  _2216__PHI_TEMPORARY = 1;   /* for PHI node */
  _2217__PHI_TEMPORARY = _2214;   /* for PHI node */
  goto _2274;

  do {     /* Syntactic loop '' to make GCC happy */
_2274:
  _2216 = _2216__PHI_TEMPORARY;
  _2217 = _2217__PHI_TEMPORARY;
  _2218 = llvm_select_u16((_2217 == 167772160u), 2, _2216);
  _2219 = ((&((uint8_t*)_2213)[((int64_t)32)]));
  _2220 = *(uint64_t*)_2219;
  _2221 = ((uint64_t)_2220);
  _2222 = ((&((uint8_t*)_2213)[((int64_t)40)]));
  _2223 = llvm_lshr_u64(_2221, 32);
  _2224 = ((uint32_t)_2223);
  _2225 = *(uint64_t*)_2222;
  _2226 = llvm_OC_ctlz_OC_i32((_2224 ^ -1), 0);
  _2227 = ((uint64_t)(uint32_t)_2226);
  _2228 = llvm_OC_cttz_OC_i32(_2224, 0);
  _2229 = _2228 & 56;
  _2230 = ((uint64_t)(uint32_t)_2229);
  _2231 = ((_2226 == 1u) | (((uint64_t)(llvm_add_u64((_2227 << 3), _2230))) > ((uint64_t)UINT64_C(32)))) | (llvm_select_bool((((uint32_t)_2228) < ((uint32_t)32u)), ((llvm_lshr_u32(((_2224 & 12632256) ^ 8421504), _2229)) != 0u), 0));
  _2232 = (((_2224 & -33554432) == 3221225472u) | ((_2224 & -2097152) == 3766484992u)) | ((_2224 & -1048576) == 4034920448u);
  if (((_2232 | (((((uint64_t)_2221) > ((uint64_t)UINT64_C(17122614315006820351))) & (_2223 != UINT64_C(3986669312))) & (((((uint64_t)_2221) < ((uint64_t)UINT64_C(17185876919829135360))) & (_2223 != UINT64_C(4001398784))) | ((((uint64_t)_2221) > ((uint64_t)UINT64_C(17622514693983698943))) & (_2223 != UINT64_C(4103061439)))))) | _2231)) {
    _2236__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2275;
  } else {
    goto _2276;
  }

_2276:
  if ((_2223 == UINT64_C(536870912))) {
    _2236__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2275;
  } else {
    goto _2277;
  }

_2277:
  if (((((uint64_t)_2221) < ((uint64_t)UINT64_C(648518350636318720))) & (_2223 != UINT64_C(150994944)))) {
    goto _2278;
  } else {
    goto _2279;
  }

_2279:
  if ((((uint64_t)_2221) < ((uint64_t)UINT64_C(936748722493063168)))) {
    _2236__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2275;
  } else {
    goto _2280;
  }

_2280:
  switch ((((uint32_t)_2223))) {
  default:
    goto _2281;
  case 3263496192u:
    _2236__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2275;
  case 218103808u:
    _2236__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2275;
  }

_2278:
  if ((_2223 == UINT64_C(3263496192))) {
    _2236__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2275;
  } else {
    goto _2281;
  }

_2281:
  if ((((((uint64_t)_2221) < ((uint64_t)UINT64_C(14024209243926691840))) & (_2223 != UINT64_C(3265265664))) | _2231)) {
    _2236__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2275;
  } else {
    goto _2282;
  }

_2282:
  if (((((uint64_t)(llvm_add_u64((_2227 << 3), _2230))) > ((uint64_t)UINT64_C(32))) | _2232)) {
    goto _2283;
  } else {
    goto _2284;
  }

_2284:
  _2233 = llvm_select_u32((((uint32_t)_2228) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_2223 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _2226)))) & _2224), _2229)), 0);
  _2234 = (((_2233 & 127) | ((llvm_lshr_u32(_2233, 2)) & 8128)) | ((llvm_lshr_u32(_2233, 4)) & 520192)) | ((llvm_lshr_u32(_2233, 6)) & 33292288);
  if ((((uint32_t)_2234) > ((uint32_t)1114111u))) {
    _2236__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2275;
  } else {
    goto _2285;
  }

_2285:
  _2235 = jsk_utf8proc_category(_2234);
  _2236__PHI_TEMPORARY = (_2235 == 23u);   /* for PHI node */
  goto _2275;

_2275:
  _2236 = _2236__PHI_TEMPORARY;
  if ((_2236 | (_2223 == UINT64_C(4022058752)))) {
    goto _2286;
  } else {
    goto _2287;
  }

_2286:
  if ((_2218 == ((uint16_t)2))) {
    goto _2288;
  } else {
    goto _2289;
  }

_2288:
  if ((_2223 == UINT64_C(167772160))) {
    goto _2287;
  } else {
    goto _2290;
  }

_2290:
  if ((llvm_select_bool((_2223 != UINT64_C(218103808)), 1, ((_2225 & INT64_C(4294967295)) != UINT64_C(167772160))))) {
    goto _2289;
  } else {
    goto _2287;
  }

_2289:
  _2237 = *(void**)_2213;
  _2238 = ((&((uint8_t*)_2237)[((int64_t)16)]));
  _2239 = *(uint64_t*)_2238;
  _2240 = ((&((uint8_t*)_2237)[((int64_t)8)]));
  _2241 = *(uint64_t*)_2240;
  if ((((int64_t)_2241) > ((int64_t)_2239))) {
    goto _2291;
  } else {
    _2258__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2292;
  }

_2291:
  _2242 = *(void**)_2237;
  _2243 = *(uint8_t*)(((&((uint8_t*)_2242)[((int64_t)_2239)])));
  *(uint64_t*)_2238 = (llvm_add_u64(_2239, 1));
  _2244 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2243)), 0);
  _2245 = llvm_sub_u8(32, (llvm_shl_u8(_2244, 3)));
  _2246 = (((uint32_t)(uint8_t)_2243)) << 24;
  if ((((uint8_t)_2245) > ((uint8_t)((uint8_t)16)))) {
    _2258__PHI_TEMPORARY = _2246;   /* for PHI node */
    goto _2292;
  } else {
    _2247__PHI_TEMPORARY = 16;   /* for PHI node */
    _2248__PHI_TEMPORARY = _2246;   /* for PHI node */
    goto _2293;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2293:
  _2247 = _2247__PHI_TEMPORARY;
  _2248 = _2248__PHI_TEMPORARY;
  if (((((int64_t)_2247) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2247) < ((uint64_t)(((uint64_t)(uint8_t)_2245)))))) {
    _2258__PHI_TEMPORARY = _2248;   /* for PHI node */
    goto _2292;
  } else {
    goto _2294;
  }

_2294:
  _2249 = *(uint64_t*)_2238;
  _2250 = *(uint64_t*)_2240;
  if ((((int64_t)_2250) > ((int64_t)_2249))) {
    goto _2295;
  } else {
    _2258__PHI_TEMPORARY = _2248;   /* for PHI node */
    goto _2292;
  }

_2295:
  _2251 = *(void**)_2237;
  _2252 = *(uint8_t*)(((&((uint8_t*)_2251)[((int64_t)_2249)])));
  if ((((int8_t)_2252) > ((int8_t)((uint8_t)-65)))) {
    _2258__PHI_TEMPORARY = _2248;   /* for PHI node */
    goto _2292;
  } else {
    goto _2296;
  }

_2296:
  _2253 = llvm_select_u32((((int64_t)_2249) < ((int64_t)_2250)), (((uint32_t)(uint8_t)_2252)), 0);
  _2254 = *(uint64_t*)_2238;
  *(uint64_t*)_2238 = (llvm_add_u64(_2254, 1));
  _2255 = llvm_neg_u64(_2247);
  _2256 = _2248 | (llvm_select_u32((((int64_t)_2247) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2255) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2253, (((uint32_t)_2255)))))), (llvm_select_u32((((uint64_t)_2247) > ((uint64_t)UINT64_C(31))), 0, (_2253 << (((uint32_t)_2247)))))));
  _2257 = llvm_add_u64(_2247, -8);
  _2247__PHI_TEMPORARY = _2257;   /* for PHI node */
  _2248__PHI_TEMPORARY = _2256;   /* for PHI node */
  goto _2293;

  } while (1); /* end of syntactic loop '' */
_2292:
  _2258 = _2258__PHI_TEMPORARY;
  _2259 = *(uint64_t*)_2219;
  _2260 = *(uint64_t*)_2222;
  _2261 = jsyn_cbe_fshl_i64(_2260, _2259, 32);
  _2262 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2258)), _2260, 32);
  *(uint64_t*)_2219 = _2261;
  *(uint64_t*)_2222 = _2262;
  _2263 = ((&((uint8_t*)_2213)[((int64_t)56)]));
  _2264 = *(uint64_t*)_2263;
  _2265 = ((&((uint8_t*)_2213)[((int64_t)64)]));
  _2266 = *(uint64_t*)_2265;
  _2267 = ((&((uint8_t*)_2213)[((int64_t)72)]));
  _2268 = *(uint64_t*)_2267;
  _2269 = *(void**)_2213;
  _2270 = *(uint64_t*)(((&((uint8_t*)_2269)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2213)[((int64_t)48)]))) = _2264;
  *(uint64_t*)_2263 = _2266;
  *(uint64_t*)_2265 = _2268;
  *(uint64_t*)_2267 = _2270;
  _2271 = *(uint64_t*)_2219;
  _2272 = ((uint32_t)_2271);
  _2216__PHI_TEMPORARY = _2218;   /* for PHI node */
  _2217__PHI_TEMPORARY = _2272;   /* for PHI node */
  goto _2274;

  } while (1); /* end of syntactic loop '' */
_2283:
  julia_throw_invalid_char_21(_2212, _2224);
  __builtin_unreachable();

_2287:
  julia_emit_20((&_2215), _2212, _2213, _2218, 1);
  _2273 = memcpy(_2211, (&_2215), 32);
}


static void julia_lex_star_28(void* _2297, void* _2298, void* _2299) {
  struct l_array_4_uint64_t _2300;    /* Address-exposed local */
  struct l_array_4_uint64_t _2301;    /* Address-exposed local */
  struct l_array_4_uint64_t _2302;    /* Address-exposed local */
  void* _2303;
  uint64_t _2304;
  void* _2305;
  void* _2306;
  void* _2307;
  uint64_t _2308;
  void* _2309;
  uint64_t _2310;
  void* _2311;
  uint8_t _2312;
  uint8_t _2313;
  uint8_t _2314;
  uint32_t _2315;
  uint64_t _2316;
  uint64_t _2316__PHI_TEMPORARY;
  uint32_t _2317;
  uint32_t _2317__PHI_TEMPORARY;
  uint64_t _2318;
  uint64_t _2319;
  void* _2320;
  uint8_t _2321;
  uint32_t _2322;
  uint64_t _2323;
  uint64_t _2324;
  uint32_t _2325;
  uint64_t _2326;
  uint32_t _2327;
  uint32_t _2327__PHI_TEMPORARY;
  uint64_t _2328;
  uint64_t _2329;
  uint64_t _2330;
  uint64_t _2331;
  void* _2332;
  uint64_t _2333;
  void* _2334;
  uint64_t _2335;
  void* _2336;
  uint64_t _2337;
  void* _2338;
  uint64_t _2339;
  void* _2340;
  void* _2340__PHI_TEMPORARY;
  void* _2341;
  uint64_t _2342;
  void* _2343;
  void* _2344;
  uint64_t _2345;
  void* _2346;
  uint64_t _2347;
  void* _2348;
  uint8_t _2349;
  uint8_t _2350;
  uint8_t _2351;
  uint32_t _2352;
  uint64_t _2353;
  uint64_t _2353__PHI_TEMPORARY;
  uint32_t _2354;
  uint32_t _2354__PHI_TEMPORARY;
  uint64_t _2355;
  uint64_t _2356;
  void* _2357;
  uint8_t _2358;
  uint32_t _2359;
  uint64_t _2360;
  uint64_t _2361;
  uint32_t _2362;
  uint64_t _2363;
  uint32_t _2364;
  uint32_t _2364__PHI_TEMPORARY;
  uint64_t _2365;
  uint64_t _2366;
  uint64_t _2367;
  uint64_t _2368;
  void* _2369;
  uint64_t _2370;
  void* _2371;
  uint64_t _2372;
  void* _2373;
  uint64_t _2374;
  void* _2375;
  uint64_t _2376;

  _2303 = ((&((uint8_t*)_2299)[((int64_t)32)]));
  _2304 = *(uint64_t*)_2303;
  _2305 = ((&((uint8_t*)_2299)[((int64_t)40)]));
  if (((_2304 & INT64_C(-4294967296)) == UINT64_C(3026418949592973312))) {
    goto _2377;
  } else {
    goto _2378;
  }

_2377:
  _2306 = *(void**)_2299;
  _2307 = ((&((uint8_t*)_2306)[((int64_t)16)]));
  _2308 = *(uint64_t*)_2307;
  _2309 = ((&((uint8_t*)_2306)[((int64_t)8)]));
  _2310 = *(uint64_t*)_2309;
  if ((((int64_t)_2310) > ((int64_t)_2308))) {
    goto _2379;
  } else {
    _2327__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2380;
  }

_2379:
  _2311 = *(void**)_2306;
  _2312 = *(uint8_t*)(((&((uint8_t*)_2311)[((int64_t)_2308)])));
  *(uint64_t*)_2307 = (llvm_add_u64(_2308, 1));
  _2313 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2312)), 0);
  _2314 = llvm_sub_u8(32, (llvm_shl_u8(_2313, 3)));
  _2315 = (((uint32_t)(uint8_t)_2312)) << 24;
  if ((((uint8_t)_2314) > ((uint8_t)((uint8_t)16)))) {
    _2327__PHI_TEMPORARY = _2315;   /* for PHI node */
    goto _2380;
  } else {
    _2316__PHI_TEMPORARY = 16;   /* for PHI node */
    _2317__PHI_TEMPORARY = _2315;   /* for PHI node */
    goto _2381;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2381:
  _2316 = _2316__PHI_TEMPORARY;
  _2317 = _2317__PHI_TEMPORARY;
  if (((((int64_t)_2316) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2316) < ((uint64_t)(((uint64_t)(uint8_t)_2314)))))) {
    _2327__PHI_TEMPORARY = _2317;   /* for PHI node */
    goto _2380;
  } else {
    goto _2382;
  }

_2382:
  _2318 = *(uint64_t*)_2307;
  _2319 = *(uint64_t*)_2309;
  if ((((int64_t)_2319) > ((int64_t)_2318))) {
    goto _2383;
  } else {
    _2327__PHI_TEMPORARY = _2317;   /* for PHI node */
    goto _2380;
  }

_2383:
  _2320 = *(void**)_2306;
  _2321 = *(uint8_t*)(((&((uint8_t*)_2320)[((int64_t)_2318)])));
  if ((((int8_t)_2321) > ((int8_t)((uint8_t)-65)))) {
    _2327__PHI_TEMPORARY = _2317;   /* for PHI node */
    goto _2380;
  } else {
    goto _2384;
  }

_2384:
  _2322 = llvm_select_u32((((int64_t)_2318) < ((int64_t)_2319)), (((uint32_t)(uint8_t)_2321)), 0);
  _2323 = *(uint64_t*)_2307;
  *(uint64_t*)_2307 = (llvm_add_u64(_2323, 1));
  _2324 = llvm_neg_u64(_2316);
  _2325 = _2317 | (llvm_select_u32((((int64_t)_2316) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2324) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2322, (((uint32_t)_2324)))))), (llvm_select_u32((((uint64_t)_2316) > ((uint64_t)UINT64_C(31))), 0, (_2322 << (((uint32_t)_2316)))))));
  _2326 = llvm_add_u64(_2316, -8);
  _2316__PHI_TEMPORARY = _2326;   /* for PHI node */
  _2317__PHI_TEMPORARY = _2325;   /* for PHI node */
  goto _2381;

  } while (1); /* end of syntactic loop '' */
_2380:
  _2327 = _2327__PHI_TEMPORARY;
  _2328 = *(uint64_t*)_2303;
  _2329 = *(uint64_t*)_2305;
  _2330 = jsyn_cbe_fshl_i64(_2329, _2328, 32);
  _2331 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2327)), _2329, 32);
  *(uint64_t*)_2303 = _2330;
  *(uint64_t*)_2305 = _2331;
  _2332 = ((&((uint8_t*)_2299)[((int64_t)56)]));
  _2333 = *(uint64_t*)_2332;
  _2334 = ((&((uint8_t*)_2299)[((int64_t)64)]));
  _2335 = *(uint64_t*)_2334;
  _2336 = ((&((uint8_t*)_2299)[((int64_t)72)]));
  _2337 = *(uint64_t*)_2336;
  _2338 = *(void**)_2299;
  _2339 = *(uint64_t*)(((&((uint8_t*)_2338)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2299)[((int64_t)48)]))) = _2333;
  *(uint64_t*)_2332 = _2335;
  *(uint64_t*)_2334 = _2337;
  *(uint64_t*)_2336 = _2339;
  julia_emit_20((&_2300), _2298, _2299, 67, 1);
  _2340__PHI_TEMPORARY = (&_2300);   /* for PHI node */
  goto _2385;

_2385:
  _2340 = _2340__PHI_TEMPORARY;
  _2341 = memcpy(_2297, _2340, 32);
  return;
_2378:
  _2342 = *(uint64_t*)_2303;
  if (((_2342 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2386;
  } else {
    goto _2387;
  }

_2386:
  _2343 = *(void**)_2299;
  _2344 = ((&((uint8_t*)_2343)[((int64_t)16)]));
  _2345 = *(uint64_t*)_2344;
  _2346 = ((&((uint8_t*)_2343)[((int64_t)8)]));
  _2347 = *(uint64_t*)_2346;
  if ((((int64_t)_2347) > ((int64_t)_2345))) {
    goto _2388;
  } else {
    _2364__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2389;
  }

_2388:
  _2348 = *(void**)_2343;
  _2349 = *(uint8_t*)(((&((uint8_t*)_2348)[((int64_t)_2345)])));
  *(uint64_t*)_2344 = (llvm_add_u64(_2345, 1));
  _2350 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2349)), 0);
  _2351 = llvm_sub_u8(32, (llvm_shl_u8(_2350, 3)));
  _2352 = (((uint32_t)(uint8_t)_2349)) << 24;
  if ((((uint8_t)_2351) > ((uint8_t)((uint8_t)16)))) {
    _2364__PHI_TEMPORARY = _2352;   /* for PHI node */
    goto _2389;
  } else {
    _2353__PHI_TEMPORARY = 16;   /* for PHI node */
    _2354__PHI_TEMPORARY = _2352;   /* for PHI node */
    goto _2390;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2390:
  _2353 = _2353__PHI_TEMPORARY;
  _2354 = _2354__PHI_TEMPORARY;
  if (((((int64_t)_2353) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2353) < ((uint64_t)(((uint64_t)(uint8_t)_2351)))))) {
    _2364__PHI_TEMPORARY = _2354;   /* for PHI node */
    goto _2389;
  } else {
    goto _2391;
  }

_2391:
  _2355 = *(uint64_t*)_2344;
  _2356 = *(uint64_t*)_2346;
  if ((((int64_t)_2356) > ((int64_t)_2355))) {
    goto _2392;
  } else {
    _2364__PHI_TEMPORARY = _2354;   /* for PHI node */
    goto _2389;
  }

_2392:
  _2357 = *(void**)_2343;
  _2358 = *(uint8_t*)(((&((uint8_t*)_2357)[((int64_t)_2355)])));
  if ((((int8_t)_2358) > ((int8_t)((uint8_t)-65)))) {
    _2364__PHI_TEMPORARY = _2354;   /* for PHI node */
    goto _2389;
  } else {
    goto _2393;
  }

_2393:
  _2359 = llvm_select_u32((((int64_t)_2355) < ((int64_t)_2356)), (((uint32_t)(uint8_t)_2358)), 0);
  _2360 = *(uint64_t*)_2344;
  *(uint64_t*)_2344 = (llvm_add_u64(_2360, 1));
  _2361 = llvm_neg_u64(_2353);
  _2362 = _2354 | (llvm_select_u32((((int64_t)_2353) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2361) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2359, (((uint32_t)_2361)))))), (llvm_select_u32((((uint64_t)_2353) > ((uint64_t)UINT64_C(31))), 0, (_2359 << (((uint32_t)_2353)))))));
  _2363 = llvm_add_u64(_2353, -8);
  _2353__PHI_TEMPORARY = _2363;   /* for PHI node */
  _2354__PHI_TEMPORARY = _2362;   /* for PHI node */
  goto _2390;

  } while (1); /* end of syntactic loop '' */
_2389:
  _2364 = _2364__PHI_TEMPORARY;
  _2365 = *(uint64_t*)_2303;
  _2366 = *(uint64_t*)_2305;
  _2367 = jsyn_cbe_fshl_i64(_2366, _2365, 32);
  _2368 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2364)), _2366, 32);
  *(uint64_t*)_2303 = _2367;
  *(uint64_t*)_2305 = _2368;
  _2369 = ((&((uint8_t*)_2299)[((int64_t)56)]));
  _2370 = *(uint64_t*)_2369;
  _2371 = ((&((uint8_t*)_2299)[((int64_t)64)]));
  _2372 = *(uint64_t*)_2371;
  _2373 = ((&((uint8_t*)_2299)[((int64_t)72)]));
  _2374 = *(uint64_t*)_2373;
  _2375 = *(void**)_2299;
  _2376 = *(uint64_t*)(((&((uint8_t*)_2375)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2299)[((int64_t)48)]))) = _2370;
  *(uint64_t*)_2369 = _2372;
  *(uint64_t*)_2371 = _2374;
  *(uint64_t*)_2373 = _2376;
  julia_emit_20((&_2301), _2298, _2299, 71, 1);
  _2340__PHI_TEMPORARY = (&_2301);   /* for PHI node */
  goto _2385;

_2387:
  julia_emit_20((&_2302), _2298, _2299, 592, 1);
  _2340__PHI_TEMPORARY = (&_2302);   /* for PHI node */
  goto _2385;

}


static void julia_lex_circumflex_29(void* _2394, void* _2395, void* _2396) {
  struct l_array_4_uint64_t _2397;    /* Address-exposed local */
  struct l_array_4_uint64_t _2398;    /* Address-exposed local */
  void* _2399;
  uint64_t _2400;
  void* _2401;
  void* _2402;
  void* _2403;
  uint64_t _2404;
  void* _2405;
  uint64_t _2406;
  void* _2407;
  uint8_t _2408;
  uint8_t _2409;
  uint8_t _2410;
  uint32_t _2411;
  uint64_t _2412;
  uint64_t _2412__PHI_TEMPORARY;
  uint32_t _2413;
  uint32_t _2413__PHI_TEMPORARY;
  uint64_t _2414;
  uint64_t _2415;
  void* _2416;
  uint8_t _2417;
  uint32_t _2418;
  uint64_t _2419;
  uint64_t _2420;
  uint32_t _2421;
  uint64_t _2422;
  uint32_t _2423;
  uint32_t _2423__PHI_TEMPORARY;
  uint64_t _2424;
  uint64_t _2425;
  uint64_t _2426;
  uint64_t _2427;
  void* _2428;
  uint64_t _2429;
  void* _2430;
  uint64_t _2431;
  void* _2432;
  uint64_t _2433;
  void* _2434;
  uint64_t _2435;
  void* _2436;
  void* _2436__PHI_TEMPORARY;
  void* _2437;

  _2399 = ((&((uint8_t*)_2396)[((int64_t)32)]));
  _2400 = *(uint64_t*)_2399;
  _2401 = ((&((uint8_t*)_2396)[((int64_t)40)]));
  if (((_2400 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2438;
  } else {
    goto _2439;
  }

_2438:
  _2402 = *(void**)_2396;
  _2403 = ((&((uint8_t*)_2402)[((int64_t)16)]));
  _2404 = *(uint64_t*)_2403;
  _2405 = ((&((uint8_t*)_2402)[((int64_t)8)]));
  _2406 = *(uint64_t*)_2405;
  if ((((int64_t)_2406) > ((int64_t)_2404))) {
    goto _2440;
  } else {
    _2423__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2441;
  }

_2440:
  _2407 = *(void**)_2402;
  _2408 = *(uint8_t*)(((&((uint8_t*)_2407)[((int64_t)_2404)])));
  *(uint64_t*)_2403 = (llvm_add_u64(_2404, 1));
  _2409 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2408)), 0);
  _2410 = llvm_sub_u8(32, (llvm_shl_u8(_2409, 3)));
  _2411 = (((uint32_t)(uint8_t)_2408)) << 24;
  if ((((uint8_t)_2410) > ((uint8_t)((uint8_t)16)))) {
    _2423__PHI_TEMPORARY = _2411;   /* for PHI node */
    goto _2441;
  } else {
    _2412__PHI_TEMPORARY = 16;   /* for PHI node */
    _2413__PHI_TEMPORARY = _2411;   /* for PHI node */
    goto _2442;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2442:
  _2412 = _2412__PHI_TEMPORARY;
  _2413 = _2413__PHI_TEMPORARY;
  if (((((int64_t)_2412) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2412) < ((uint64_t)(((uint64_t)(uint8_t)_2410)))))) {
    _2423__PHI_TEMPORARY = _2413;   /* for PHI node */
    goto _2441;
  } else {
    goto _2443;
  }

_2443:
  _2414 = *(uint64_t*)_2403;
  _2415 = *(uint64_t*)_2405;
  if ((((int64_t)_2415) > ((int64_t)_2414))) {
    goto _2444;
  } else {
    _2423__PHI_TEMPORARY = _2413;   /* for PHI node */
    goto _2441;
  }

_2444:
  _2416 = *(void**)_2402;
  _2417 = *(uint8_t*)(((&((uint8_t*)_2416)[((int64_t)_2414)])));
  if ((((int8_t)_2417) > ((int8_t)((uint8_t)-65)))) {
    _2423__PHI_TEMPORARY = _2413;   /* for PHI node */
    goto _2441;
  } else {
    goto _2445;
  }

_2445:
  _2418 = llvm_select_u32((((int64_t)_2414) < ((int64_t)_2415)), (((uint32_t)(uint8_t)_2417)), 0);
  _2419 = *(uint64_t*)_2403;
  *(uint64_t*)_2403 = (llvm_add_u64(_2419, 1));
  _2420 = llvm_neg_u64(_2412);
  _2421 = _2413 | (llvm_select_u32((((int64_t)_2412) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2420) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2418, (((uint32_t)_2420)))))), (llvm_select_u32((((uint64_t)_2412) > ((uint64_t)UINT64_C(31))), 0, (_2418 << (((uint32_t)_2412)))))));
  _2422 = llvm_add_u64(_2412, -8);
  _2412__PHI_TEMPORARY = _2422;   /* for PHI node */
  _2413__PHI_TEMPORARY = _2421;   /* for PHI node */
  goto _2442;

  } while (1); /* end of syntactic loop '' */
_2441:
  _2423 = _2423__PHI_TEMPORARY;
  _2424 = *(uint64_t*)_2399;
  _2425 = *(uint64_t*)_2401;
  _2426 = jsyn_cbe_fshl_i64(_2425, _2424, 32);
  _2427 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2423)), _2425, 32);
  *(uint64_t*)_2399 = _2426;
  *(uint64_t*)_2401 = _2427;
  _2428 = ((&((uint8_t*)_2396)[((int64_t)56)]));
  _2429 = *(uint64_t*)_2428;
  _2430 = ((&((uint8_t*)_2396)[((int64_t)64)]));
  _2431 = *(uint64_t*)_2430;
  _2432 = ((&((uint8_t*)_2396)[((int64_t)72)]));
  _2433 = *(uint64_t*)_2432;
  _2434 = *(void**)_2396;
  _2435 = *(uint64_t*)(((&((uint8_t*)_2434)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2396)[((int64_t)48)]))) = _2429;
  *(uint64_t*)_2428 = _2431;
  *(uint64_t*)_2430 = _2433;
  *(uint64_t*)_2432 = _2435;
  julia_emit_20((&_2397), _2395, _2396, 71, 1);
  _2436__PHI_TEMPORARY = (&_2397);   /* for PHI node */
  goto _2446;

_2446:
  _2436 = _2436__PHI_TEMPORARY;
  _2437 = memcpy(_2394, _2436, 32);
  return;
_2439:
  julia_emit_20((&_2398), _2395, _2396, 674, 1);
  _2436__PHI_TEMPORARY = (&_2398);   /* for PHI node */
  goto _2446;

}


static void julia_lex_dollar_30(void* _2447, void* _2448, void* _2449) {
  struct l_array_4_uint64_t _2450;    /* Address-exposed local */
  struct l_array_4_uint64_t _2451;    /* Address-exposed local */
  void* _2452;
  uint64_t _2453;
  void* _2454;
  void* _2455;
  void* _2456;
  uint64_t _2457;
  void* _2458;
  uint64_t _2459;
  void* _2460;
  uint8_t _2461;
  uint8_t _2462;
  uint8_t _2463;
  uint32_t _2464;
  uint64_t _2465;
  uint64_t _2465__PHI_TEMPORARY;
  uint32_t _2466;
  uint32_t _2466__PHI_TEMPORARY;
  uint64_t _2467;
  uint64_t _2468;
  void* _2469;
  uint8_t _2470;
  uint32_t _2471;
  uint64_t _2472;
  uint64_t _2473;
  uint32_t _2474;
  uint64_t _2475;
  uint32_t _2476;
  uint32_t _2476__PHI_TEMPORARY;
  uint64_t _2477;
  uint64_t _2478;
  uint64_t _2479;
  uint64_t _2480;
  void* _2481;
  uint64_t _2482;
  void* _2483;
  uint64_t _2484;
  void* _2485;
  uint64_t _2486;
  void* _2487;
  uint64_t _2488;
  void* _2489;
  void* _2489__PHI_TEMPORARY;
  void* _2490;

  _2452 = ((&((uint8_t*)_2449)[((int64_t)32)]));
  _2453 = *(uint64_t*)_2452;
  _2454 = ((&((uint8_t*)_2449)[((int64_t)40)]));
  if (((_2453 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2491;
  } else {
    goto _2492;
  }

_2491:
  _2455 = *(void**)_2449;
  _2456 = ((&((uint8_t*)_2455)[((int64_t)16)]));
  _2457 = *(uint64_t*)_2456;
  _2458 = ((&((uint8_t*)_2455)[((int64_t)8)]));
  _2459 = *(uint64_t*)_2458;
  if ((((int64_t)_2459) > ((int64_t)_2457))) {
    goto _2493;
  } else {
    _2476__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2494;
  }

_2493:
  _2460 = *(void**)_2455;
  _2461 = *(uint8_t*)(((&((uint8_t*)_2460)[((int64_t)_2457)])));
  *(uint64_t*)_2456 = (llvm_add_u64(_2457, 1));
  _2462 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2461)), 0);
  _2463 = llvm_sub_u8(32, (llvm_shl_u8(_2462, 3)));
  _2464 = (((uint32_t)(uint8_t)_2461)) << 24;
  if ((((uint8_t)_2463) > ((uint8_t)((uint8_t)16)))) {
    _2476__PHI_TEMPORARY = _2464;   /* for PHI node */
    goto _2494;
  } else {
    _2465__PHI_TEMPORARY = 16;   /* for PHI node */
    _2466__PHI_TEMPORARY = _2464;   /* for PHI node */
    goto _2495;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2495:
  _2465 = _2465__PHI_TEMPORARY;
  _2466 = _2466__PHI_TEMPORARY;
  if (((((int64_t)_2465) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2465) < ((uint64_t)(((uint64_t)(uint8_t)_2463)))))) {
    _2476__PHI_TEMPORARY = _2466;   /* for PHI node */
    goto _2494;
  } else {
    goto _2496;
  }

_2496:
  _2467 = *(uint64_t*)_2456;
  _2468 = *(uint64_t*)_2458;
  if ((((int64_t)_2468) > ((int64_t)_2467))) {
    goto _2497;
  } else {
    _2476__PHI_TEMPORARY = _2466;   /* for PHI node */
    goto _2494;
  }

_2497:
  _2469 = *(void**)_2455;
  _2470 = *(uint8_t*)(((&((uint8_t*)_2469)[((int64_t)_2467)])));
  if ((((int8_t)_2470) > ((int8_t)((uint8_t)-65)))) {
    _2476__PHI_TEMPORARY = _2466;   /* for PHI node */
    goto _2494;
  } else {
    goto _2498;
  }

_2498:
  _2471 = llvm_select_u32((((int64_t)_2467) < ((int64_t)_2468)), (((uint32_t)(uint8_t)_2470)), 0);
  _2472 = *(uint64_t*)_2456;
  *(uint64_t*)_2456 = (llvm_add_u64(_2472, 1));
  _2473 = llvm_neg_u64(_2465);
  _2474 = _2466 | (llvm_select_u32((((int64_t)_2465) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2473) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2471, (((uint32_t)_2473)))))), (llvm_select_u32((((uint64_t)_2465) > ((uint64_t)UINT64_C(31))), 0, (_2471 << (((uint32_t)_2465)))))));
  _2475 = llvm_add_u64(_2465, -8);
  _2465__PHI_TEMPORARY = _2475;   /* for PHI node */
  _2466__PHI_TEMPORARY = _2474;   /* for PHI node */
  goto _2495;

  } while (1); /* end of syntactic loop '' */
_2494:
  _2476 = _2476__PHI_TEMPORARY;
  _2477 = *(uint64_t*)_2452;
  _2478 = *(uint64_t*)_2454;
  _2479 = jsyn_cbe_fshl_i64(_2478, _2477, 32);
  _2480 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2476)), _2478, 32);
  *(uint64_t*)_2452 = _2479;
  *(uint64_t*)_2454 = _2480;
  _2481 = ((&((uint8_t*)_2449)[((int64_t)56)]));
  _2482 = *(uint64_t*)_2481;
  _2483 = ((&((uint8_t*)_2449)[((int64_t)64)]));
  _2484 = *(uint64_t*)_2483;
  _2485 = ((&((uint8_t*)_2449)[((int64_t)72)]));
  _2486 = *(uint64_t*)_2485;
  _2487 = *(void**)_2449;
  _2488 = *(uint64_t*)(((&((uint8_t*)_2487)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2449)[((int64_t)48)]))) = _2482;
  *(uint64_t*)_2481 = _2484;
  *(uint64_t*)_2483 = _2486;
  *(uint64_t*)_2485 = _2488;
  julia_emit_20((&_2450), _2448, _2449, 71, 1);
  _2489__PHI_TEMPORARY = (&_2450);   /* for PHI node */
  goto _2499;

_2499:
  _2489 = _2489__PHI_TEMPORARY;
  _2490 = memcpy(_2447, _2489, 32);
  return;
_2492:
  julia_emit_20((&_2451), _2448, _2449, 534, 1);
  _2489__PHI_TEMPORARY = (&_2451);   /* for PHI node */
  goto _2499;

}


static void julia_lex_xor_31(void* _2500, void* _2501, void* _2502) {
  struct l_array_4_uint64_t _2503;    /* Address-exposed local */
  struct l_array_4_uint64_t _2504;    /* Address-exposed local */
  void* _2505;
  uint64_t _2506;
  void* _2507;
  void* _2508;
  void* _2509;
  uint64_t _2510;
  void* _2511;
  uint64_t _2512;
  void* _2513;
  uint8_t _2514;
  uint8_t _2515;
  uint8_t _2516;
  uint32_t _2517;
  uint64_t _2518;
  uint64_t _2518__PHI_TEMPORARY;
  uint32_t _2519;
  uint32_t _2519__PHI_TEMPORARY;
  uint64_t _2520;
  uint64_t _2521;
  void* _2522;
  uint8_t _2523;
  uint32_t _2524;
  uint64_t _2525;
  uint64_t _2526;
  uint32_t _2527;
  uint64_t _2528;
  uint32_t _2529;
  uint32_t _2529__PHI_TEMPORARY;
  uint64_t _2530;
  uint64_t _2531;
  uint64_t _2532;
  uint64_t _2533;
  void* _2534;
  uint64_t _2535;
  void* _2536;
  uint64_t _2537;
  void* _2538;
  uint64_t _2539;
  void* _2540;
  uint64_t _2541;
  void* _2542;
  void* _2542__PHI_TEMPORARY;
  void* _2543;

  _2505 = ((&((uint8_t*)_2502)[((int64_t)32)]));
  _2506 = *(uint64_t*)_2505;
  _2507 = ((&((uint8_t*)_2502)[((int64_t)40)]));
  if (((_2506 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2544;
  } else {
    goto _2545;
  }

_2544:
  _2508 = *(void**)_2502;
  _2509 = ((&((uint8_t*)_2508)[((int64_t)16)]));
  _2510 = *(uint64_t*)_2509;
  _2511 = ((&((uint8_t*)_2508)[((int64_t)8)]));
  _2512 = *(uint64_t*)_2511;
  if ((((int64_t)_2512) > ((int64_t)_2510))) {
    goto _2546;
  } else {
    _2529__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2547;
  }

_2546:
  _2513 = *(void**)_2508;
  _2514 = *(uint8_t*)(((&((uint8_t*)_2513)[((int64_t)_2510)])));
  *(uint64_t*)_2509 = (llvm_add_u64(_2510, 1));
  _2515 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2514)), 0);
  _2516 = llvm_sub_u8(32, (llvm_shl_u8(_2515, 3)));
  _2517 = (((uint32_t)(uint8_t)_2514)) << 24;
  if ((((uint8_t)_2516) > ((uint8_t)((uint8_t)16)))) {
    _2529__PHI_TEMPORARY = _2517;   /* for PHI node */
    goto _2547;
  } else {
    _2518__PHI_TEMPORARY = 16;   /* for PHI node */
    _2519__PHI_TEMPORARY = _2517;   /* for PHI node */
    goto _2548;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2548:
  _2518 = _2518__PHI_TEMPORARY;
  _2519 = _2519__PHI_TEMPORARY;
  if (((((int64_t)_2518) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2518) < ((uint64_t)(((uint64_t)(uint8_t)_2516)))))) {
    _2529__PHI_TEMPORARY = _2519;   /* for PHI node */
    goto _2547;
  } else {
    goto _2549;
  }

_2549:
  _2520 = *(uint64_t*)_2509;
  _2521 = *(uint64_t*)_2511;
  if ((((int64_t)_2521) > ((int64_t)_2520))) {
    goto _2550;
  } else {
    _2529__PHI_TEMPORARY = _2519;   /* for PHI node */
    goto _2547;
  }

_2550:
  _2522 = *(void**)_2508;
  _2523 = *(uint8_t*)(((&((uint8_t*)_2522)[((int64_t)_2520)])));
  if ((((int8_t)_2523) > ((int8_t)((uint8_t)-65)))) {
    _2529__PHI_TEMPORARY = _2519;   /* for PHI node */
    goto _2547;
  } else {
    goto _2551;
  }

_2551:
  _2524 = llvm_select_u32((((int64_t)_2520) < ((int64_t)_2521)), (((uint32_t)(uint8_t)_2523)), 0);
  _2525 = *(uint64_t*)_2509;
  *(uint64_t*)_2509 = (llvm_add_u64(_2525, 1));
  _2526 = llvm_neg_u64(_2518);
  _2527 = _2519 | (llvm_select_u32((((int64_t)_2518) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2526) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2524, (((uint32_t)_2526)))))), (llvm_select_u32((((uint64_t)_2518) > ((uint64_t)UINT64_C(31))), 0, (_2524 << (((uint32_t)_2518)))))));
  _2528 = llvm_add_u64(_2518, -8);
  _2518__PHI_TEMPORARY = _2528;   /* for PHI node */
  _2519__PHI_TEMPORARY = _2527;   /* for PHI node */
  goto _2548;

  } while (1); /* end of syntactic loop '' */
_2547:
  _2529 = _2529__PHI_TEMPORARY;
  _2530 = *(uint64_t*)_2505;
  _2531 = *(uint64_t*)_2507;
  _2532 = jsyn_cbe_fshl_i64(_2531, _2530, 32);
  _2533 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2529)), _2531, 32);
  *(uint64_t*)_2505 = _2532;
  *(uint64_t*)_2507 = _2533;
  _2534 = ((&((uint8_t*)_2502)[((int64_t)56)]));
  _2535 = *(uint64_t*)_2534;
  _2536 = ((&((uint8_t*)_2502)[((int64_t)64)]));
  _2537 = *(uint64_t*)_2536;
  _2538 = ((&((uint8_t*)_2502)[((int64_t)72)]));
  _2539 = *(uint64_t*)_2538;
  _2540 = *(void**)_2502;
  _2541 = *(uint64_t*)(((&((uint8_t*)_2540)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2502)[((int64_t)48)]))) = _2535;
  *(uint64_t*)_2534 = _2537;
  *(uint64_t*)_2536 = _2539;
  *(uint64_t*)_2538 = _2541;
  julia_emit_20((&_2503), _2501, _2502, 71, 1);
  _2542__PHI_TEMPORARY = (&_2503);   /* for PHI node */
  goto _2552;

_2552:
  _2542 = _2542__PHI_TEMPORARY;
  _2543 = memcpy(_2500, _2542, 32);
  return;
_2545:
  julia_emit_20((&_2504), _2501, _2502, 552, 1);
  _2542__PHI_TEMPORARY = (&_2504);   /* for PHI node */
  goto _2552;

}


static void julia_lex_comment_32(void* _2553, void* _2554, void* _2555) {
  struct l_array_4_uint64_t _2556;    /* Address-exposed local */
  struct l_array_4_uint64_t _2557;    /* Address-exposed local */
  struct l_array_4_uint64_t _2558;    /* Address-exposed local */
  void* _2559;
  uint64_t _2560;
  void* _2561;
  bool _2562;
  bool _2562__PHI_TEMPORARY;
  uint64_t _2563;
  uint64_t _2564;
  uint32_t _2565;
  uint64_t _2566;
  uint32_t _2567;
  uint32_t _2568;
  uint32_t _2569;
  bool _2570;
  void* _2571;
  void* _2572;
  uint64_t _2573;
  void* _2574;
  uint64_t _2575;
  void* _2576;
  uint8_t _2577;
  uint8_t _2578;
  uint8_t _2579;
  uint32_t _2580;
  uint64_t _2581;
  uint64_t _2581__PHI_TEMPORARY;
  uint32_t _2582;
  uint32_t _2582__PHI_TEMPORARY;
  uint64_t _2583;
  uint64_t _2584;
  void* _2585;
  uint8_t _2586;
  uint32_t _2587;
  uint64_t _2588;
  uint64_t _2589;
  uint32_t _2590;
  uint64_t _2591;
  uint32_t _2592;
  uint32_t _2592__PHI_TEMPORARY;
  uint64_t _2593;
  uint64_t _2594;
  uint64_t _2595;
  uint64_t _2596;
  void* _2597;
  uint64_t _2598;
  void* _2599;
  uint64_t _2600;
  void* _2601;
  uint64_t _2602;
  void* _2603;
  uint64_t _2604;
  void* _2605;
  void* _2605__PHI_TEMPORARY;
  void* _2606;
  void* _2607;
  void* _2608;
  uint64_t _2609;
  void* _2610;
  uint64_t _2611;
  void* _2612;
  uint8_t _2613;
  uint8_t _2614;
  uint8_t _2615;
  uint32_t _2616;
  uint64_t _2617;
  uint64_t _2617__PHI_TEMPORARY;
  uint32_t _2618;
  uint32_t _2618__PHI_TEMPORARY;
  uint64_t _2619;
  uint64_t _2620;
  void* _2621;
  uint8_t _2622;
  uint32_t _2623;
  uint64_t _2624;
  uint64_t _2625;
  uint32_t _2626;
  uint64_t _2627;
  uint32_t _2628;
  uint32_t _2628__PHI_TEMPORARY;
  uint64_t _2629;
  uint64_t _2630;
  uint64_t _2631;
  uint64_t _2632;
  void* _2633;
  void* _2634;
  uint64_t _2635;
  void* _2636;
  uint64_t _2637;
  void* _2638;
  uint64_t _2639;
  void* _2640;
  uint64_t _2641;
  uint64_t _2642;
  uint32_t _2643;
  uint64_t _2644;
  uint64_t _2644__PHI_TEMPORARY;
  bool _2645;
  bool _2645__PHI_TEMPORARY;
  uint64_t _2646;
  uint64_t _2646__PHI_TEMPORARY;
  uint64_t _2647;
  uint64_t _2647__PHI_TEMPORARY;
  uint32_t _2648;
  uint32_t _2648__PHI_TEMPORARY;
  bool _2649;
  bool _2649__PHI_TEMPORARY;
  void* _2650;
  void* _2651;
  uint64_t _2652;
  void* _2653;
  uint64_t _2654;
  void* _2655;
  uint8_t _2656;
  uint8_t _2657;
  uint8_t _2658;
  uint32_t _2659;
  uint64_t _2660;
  uint64_t _2660__PHI_TEMPORARY;
  uint32_t _2661;
  uint32_t _2661__PHI_TEMPORARY;
  uint64_t _2662;
  uint64_t _2663;
  void* _2664;
  uint8_t _2665;
  uint32_t _2666;
  uint64_t _2667;
  uint64_t _2668;
  uint32_t _2669;
  uint64_t _2670;
  uint32_t _2671;
  uint32_t _2671__PHI_TEMPORARY;
  uint64_t _2672;
  uint64_t _2673;
  uint64_t _2674;
  uint64_t _2675;
  uint64_t _2676;
  uint64_t _2677;
  uint64_t _2678;
  void* _2679;
  uint64_t _2680;
  uint32_t _2681;
  uint64_t _2682;
  uint64_t _2683;
  uint64_t _2684;
  uint64_t _2685;
  uint64_t _2686;
  uint64_t _2686__PHI_TEMPORARY;
  uint64_t _2687;
  uint64_t _2687__PHI_TEMPORARY;
  uint32_t _2688;
  uint32_t _2689;
  uint32_t _2690;
  bool _2691;
  uint64_t _2692;
  uint64_t _2693;

  _2559 = ((&((uint8_t*)_2555)[((int64_t)32)]));
  _2560 = *(uint64_t*)_2559;
  _2561 = ((&((uint8_t*)_2555)[((int64_t)40)]));
  if (((_2560 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2694;
  } else {
    _2562__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2695;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2695:
  _2562 = _2562__PHI_TEMPORARY;
  _2563 = *(uint64_t*)_2559;
  _2564 = llvm_lshr_u64(_2563, 32);
  _2565 = ((uint32_t)_2564);
  if ((_2564 == UINT64_C(167772160))) {
    goto _2696;
  } else {
    goto _2697;
  }

_2697:
  _2566 = *(uint64_t*)_2561;
  if (((llvm_select_bool((_2564 == UINT64_C(218103808)), ((_2566 & INT64_C(4294967295)) == UINT64_C(167772160)), 0)) | (_2564 == UINT64_C(4294967295)))) {
    goto _2696;
  } else {
    goto _2698;
  }

_2698:
  _2567 = llvm_OC_ctlz_OC_i32((_2565 ^ -1), 0);
  _2568 = llvm_OC_cttz_OC_i32(_2565, 0);
  _2569 = _2568 & 56;
  _2570 = _2562 & (((((_2567 != 1u) & (((uint32_t)(llvm_add_u32((_2567 << 3), _2569))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_2568) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_2565 & 12632256) ^ 8421504), _2569)) == 0u)))) & ((((_2565 & -33554432) != 3221225472u) & ((_2565 & -2097152) != 3766484992u)) & ((_2565 & -1048576) != 4034920448u))) & (((((uint64_t)_2563) < ((uint64_t)UINT64_C(17122614315006820352))) | (_2564 == UINT64_C(3986669312))) | (((((uint64_t)_2563) > ((uint64_t)UINT64_C(17185876919829135359))) | (_2564 == UINT64_C(4001398784))) & ((((uint64_t)_2563) < ((uint64_t)UINT64_C(17622514693983698944))) | (_2564 == UINT64_C(4103061439))))));
  _2571 = *(void**)_2555;
  _2572 = ((&((uint8_t*)_2571)[((int64_t)16)]));
  _2573 = *(uint64_t*)_2572;
  _2574 = ((&((uint8_t*)_2571)[((int64_t)8)]));
  _2575 = *(uint64_t*)_2574;
  if ((((int64_t)_2575) > ((int64_t)_2573))) {
    goto _2699;
  } else {
    _2592__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2700;
  }

_2699:
  _2576 = *(void**)_2571;
  _2577 = *(uint8_t*)(((&((uint8_t*)_2576)[((int64_t)_2573)])));
  *(uint64_t*)_2572 = (llvm_add_u64(_2573, 1));
  _2578 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2577)), 0);
  _2579 = llvm_sub_u8(32, (llvm_shl_u8(_2578, 3)));
  _2580 = (((uint32_t)(uint8_t)_2577)) << 24;
  if ((((uint8_t)_2579) > ((uint8_t)((uint8_t)16)))) {
    _2592__PHI_TEMPORARY = _2580;   /* for PHI node */
    goto _2700;
  } else {
    _2581__PHI_TEMPORARY = 16;   /* for PHI node */
    _2582__PHI_TEMPORARY = _2580;   /* for PHI node */
    goto _2701;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2701:
  _2581 = _2581__PHI_TEMPORARY;
  _2582 = _2582__PHI_TEMPORARY;
  if (((((int64_t)_2581) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2581) < ((uint64_t)(((uint64_t)(uint8_t)_2579)))))) {
    _2592__PHI_TEMPORARY = _2582;   /* for PHI node */
    goto _2700;
  } else {
    goto _2702;
  }

_2702:
  _2583 = *(uint64_t*)_2572;
  _2584 = *(uint64_t*)_2574;
  if ((((int64_t)_2584) > ((int64_t)_2583))) {
    goto _2703;
  } else {
    _2592__PHI_TEMPORARY = _2582;   /* for PHI node */
    goto _2700;
  }

_2703:
  _2585 = *(void**)_2571;
  _2586 = *(uint8_t*)(((&((uint8_t*)_2585)[((int64_t)_2583)])));
  if ((((int8_t)_2586) > ((int8_t)((uint8_t)-65)))) {
    _2592__PHI_TEMPORARY = _2582;   /* for PHI node */
    goto _2700;
  } else {
    goto _2704;
  }

_2704:
  _2587 = llvm_select_u32((((int64_t)_2583) < ((int64_t)_2584)), (((uint32_t)(uint8_t)_2586)), 0);
  _2588 = *(uint64_t*)_2572;
  *(uint64_t*)_2572 = (llvm_add_u64(_2588, 1));
  _2589 = llvm_neg_u64(_2581);
  _2590 = _2582 | (llvm_select_u32((((int64_t)_2581) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2589) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2587, (((uint32_t)_2589)))))), (llvm_select_u32((((uint64_t)_2581) > ((uint64_t)UINT64_C(31))), 0, (_2587 << (((uint32_t)_2581)))))));
  _2591 = llvm_add_u64(_2581, -8);
  _2581__PHI_TEMPORARY = _2591;   /* for PHI node */
  _2582__PHI_TEMPORARY = _2590;   /* for PHI node */
  goto _2701;

  } while (1); /* end of syntactic loop '' */
_2700:
  _2592 = _2592__PHI_TEMPORARY;
  _2593 = *(uint64_t*)_2559;
  _2594 = *(uint64_t*)_2561;
  _2595 = jsyn_cbe_fshl_i64(_2594, _2593, 32);
  _2596 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2592)), _2594, 32);
  *(uint64_t*)_2559 = _2595;
  *(uint64_t*)_2561 = _2596;
  _2597 = ((&((uint8_t*)_2555)[((int64_t)56)]));
  _2598 = *(uint64_t*)_2597;
  _2599 = ((&((uint8_t*)_2555)[((int64_t)64)]));
  _2600 = *(uint64_t*)_2599;
  _2601 = ((&((uint8_t*)_2555)[((int64_t)72)]));
  _2602 = *(uint64_t*)_2601;
  _2603 = *(void**)_2555;
  _2604 = *(uint64_t*)(((&((uint8_t*)_2603)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2555)[((int64_t)48)]))) = _2598;
  *(uint64_t*)_2597 = _2600;
  *(uint64_t*)_2599 = _2602;
  *(uint64_t*)_2601 = _2604;
  _2562__PHI_TEMPORARY = _2570;   /* for PHI node */
  goto _2695;

  } while (1); /* end of syntactic loop '' */
_2696:
  julia_emit_20((&_2556), _2554, _2555, (llvm_select_u16(_2562, 0, 762)), 1);
  _2605__PHI_TEMPORARY = (&_2556);   /* for PHI node */
  goto _2705;

_2705:
  _2605 = _2605__PHI_TEMPORARY;
  _2606 = memcpy(_2553, _2605, 32);
  return;
_2694:
  _2607 = *(void**)_2555;
  _2608 = ((&((uint8_t*)_2607)[((int64_t)16)]));
  _2609 = *(uint64_t*)_2608;
  _2610 = ((&((uint8_t*)_2607)[((int64_t)8)]));
  _2611 = *(uint64_t*)_2610;
  if ((((int64_t)_2611) > ((int64_t)_2609))) {
    goto _2706;
  } else {
    _2628__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2707;
  }

_2706:
  _2612 = *(void**)_2607;
  _2613 = *(uint8_t*)(((&((uint8_t*)_2612)[((int64_t)_2609)])));
  *(uint64_t*)_2608 = (llvm_add_u64(_2609, 1));
  _2614 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2613)), 0);
  _2615 = llvm_sub_u8(32, (llvm_shl_u8(_2614, 3)));
  _2616 = (((uint32_t)(uint8_t)_2613)) << 24;
  if ((((uint8_t)_2615) > ((uint8_t)((uint8_t)16)))) {
    _2628__PHI_TEMPORARY = _2616;   /* for PHI node */
    goto _2707;
  } else {
    _2617__PHI_TEMPORARY = 16;   /* for PHI node */
    _2618__PHI_TEMPORARY = _2616;   /* for PHI node */
    goto _2708;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2708:
  _2617 = _2617__PHI_TEMPORARY;
  _2618 = _2618__PHI_TEMPORARY;
  if (((((int64_t)_2617) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2617) < ((uint64_t)(((uint64_t)(uint8_t)_2615)))))) {
    _2628__PHI_TEMPORARY = _2618;   /* for PHI node */
    goto _2707;
  } else {
    goto _2709;
  }

_2709:
  _2619 = *(uint64_t*)_2608;
  _2620 = *(uint64_t*)_2610;
  if ((((int64_t)_2620) > ((int64_t)_2619))) {
    goto _2710;
  } else {
    _2628__PHI_TEMPORARY = _2618;   /* for PHI node */
    goto _2707;
  }

_2710:
  _2621 = *(void**)_2607;
  _2622 = *(uint8_t*)(((&((uint8_t*)_2621)[((int64_t)_2619)])));
  if ((((int8_t)_2622) > ((int8_t)((uint8_t)-65)))) {
    _2628__PHI_TEMPORARY = _2618;   /* for PHI node */
    goto _2707;
  } else {
    goto _2711;
  }

_2711:
  _2623 = llvm_select_u32((((int64_t)_2619) < ((int64_t)_2620)), (((uint32_t)(uint8_t)_2622)), 0);
  _2624 = *(uint64_t*)_2608;
  *(uint64_t*)_2608 = (llvm_add_u64(_2624, 1));
  _2625 = llvm_neg_u64(_2617);
  _2626 = _2618 | (llvm_select_u32((((int64_t)_2617) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2625) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2623, (((uint32_t)_2625)))))), (llvm_select_u32((((uint64_t)_2617) > ((uint64_t)UINT64_C(31))), 0, (_2623 << (((uint32_t)_2617)))))));
  _2627 = llvm_add_u64(_2617, -8);
  _2617__PHI_TEMPORARY = _2627;   /* for PHI node */
  _2618__PHI_TEMPORARY = _2626;   /* for PHI node */
  goto _2708;

  } while (1); /* end of syntactic loop '' */
_2707:
  _2628 = _2628__PHI_TEMPORARY;
  _2629 = *(uint64_t*)_2559;
  _2630 = *(uint64_t*)_2561;
  _2631 = jsyn_cbe_fshl_i64(_2630, _2629, 32);
  _2632 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2628)), _2630, 32);
  *(uint64_t*)_2559 = _2631;
  *(uint64_t*)_2561 = _2632;
  _2633 = ((&((uint8_t*)_2555)[((int64_t)48)]));
  _2634 = ((&((uint8_t*)_2555)[((int64_t)56)]));
  _2635 = *(uint64_t*)_2634;
  _2636 = ((&((uint8_t*)_2555)[((int64_t)64)]));
  _2637 = *(uint64_t*)_2636;
  _2638 = ((&((uint8_t*)_2555)[((int64_t)72)]));
  _2639 = *(uint64_t*)_2638;
  _2640 = *(void**)_2555;
  _2641 = *(uint64_t*)(((&((uint8_t*)_2640)[((int64_t)16)])));
  *(uint64_t*)_2633 = _2635;
  *(uint64_t*)_2634 = _2637;
  *(uint64_t*)_2636 = _2639;
  *(uint64_t*)_2638 = _2641;
  _2642 = *(uint64_t*)_2559;
  _2643 = ((uint32_t)_2642);
  _2644__PHI_TEMPORARY = 1;   /* for PHI node */
  _2645__PHI_TEMPORARY = 1;   /* for PHI node */
  _2646__PHI_TEMPORARY = 0;   /* for PHI node */
  _2647__PHI_TEMPORARY = 0;   /* for PHI node */
  _2648__PHI_TEMPORARY = _2643;   /* for PHI node */
  _2649__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2712;

  do {     /* Syntactic loop '' to make GCC happy */
_2712:
  _2644 = _2644__PHI_TEMPORARY;
  _2645 = _2645__PHI_TEMPORARY;
  _2646 = _2646__PHI_TEMPORARY;
  _2647 = _2647__PHI_TEMPORARY;
  _2648 = _2648__PHI_TEMPORARY;
  _2649 = _2649__PHI_TEMPORARY;
  if ((_2648 == 4294967295u)) {
    goto _2713;
  } else {
    goto _2714;
  }

_2714:
  _2650 = *(void**)_2555;
  _2651 = ((&((uint8_t*)_2650)[((int64_t)16)]));
  _2652 = *(uint64_t*)_2651;
  _2653 = ((&((uint8_t*)_2650)[((int64_t)8)]));
  _2654 = *(uint64_t*)_2653;
  if ((((int64_t)_2654) > ((int64_t)_2652))) {
    goto _2715;
  } else {
    _2671__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2716;
  }

_2715:
  _2655 = *(void**)_2650;
  _2656 = *(uint8_t*)(((&((uint8_t*)_2655)[((int64_t)_2652)])));
  *(uint64_t*)_2651 = (llvm_add_u64(_2652, 1));
  _2657 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2656)), 0);
  _2658 = llvm_sub_u8(32, (llvm_shl_u8(_2657, 3)));
  _2659 = (((uint32_t)(uint8_t)_2656)) << 24;
  if ((((uint8_t)_2658) > ((uint8_t)((uint8_t)16)))) {
    _2671__PHI_TEMPORARY = _2659;   /* for PHI node */
    goto _2716;
  } else {
    _2660__PHI_TEMPORARY = 16;   /* for PHI node */
    _2661__PHI_TEMPORARY = _2659;   /* for PHI node */
    goto _2717;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2717:
  _2660 = _2660__PHI_TEMPORARY;
  _2661 = _2661__PHI_TEMPORARY;
  if (((((int64_t)_2660) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2660) < ((uint64_t)(((uint64_t)(uint8_t)_2658)))))) {
    _2671__PHI_TEMPORARY = _2661;   /* for PHI node */
    goto _2716;
  } else {
    goto _2718;
  }

_2718:
  _2662 = *(uint64_t*)_2651;
  _2663 = *(uint64_t*)_2653;
  if ((((int64_t)_2663) > ((int64_t)_2662))) {
    goto _2719;
  } else {
    _2671__PHI_TEMPORARY = _2661;   /* for PHI node */
    goto _2716;
  }

_2719:
  _2664 = *(void**)_2650;
  _2665 = *(uint8_t*)(((&((uint8_t*)_2664)[((int64_t)_2662)])));
  if ((((int8_t)_2665) > ((int8_t)((uint8_t)-65)))) {
    _2671__PHI_TEMPORARY = _2661;   /* for PHI node */
    goto _2716;
  } else {
    goto _2720;
  }

_2720:
  _2666 = llvm_select_u32((((int64_t)_2662) < ((int64_t)_2663)), (((uint32_t)(uint8_t)_2665)), 0);
  _2667 = *(uint64_t*)_2651;
  *(uint64_t*)_2651 = (llvm_add_u64(_2667, 1));
  _2668 = llvm_neg_u64(_2660);
  _2669 = _2661 | (llvm_select_u32((((int64_t)_2660) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2668) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2666, (((uint32_t)_2668)))))), (llvm_select_u32((((uint64_t)_2660) > ((uint64_t)UINT64_C(31))), 0, (_2666 << (((uint32_t)_2660)))))));
  _2670 = llvm_add_u64(_2660, -8);
  _2660__PHI_TEMPORARY = _2670;   /* for PHI node */
  _2661__PHI_TEMPORARY = _2669;   /* for PHI node */
  goto _2717;

  } while (1); /* end of syntactic loop '' */
_2716:
  _2671 = _2671__PHI_TEMPORARY;
  _2672 = *(uint64_t*)_2559;
  _2673 = *(uint64_t*)_2561;
  _2674 = jsyn_cbe_fshl_i64(_2673, _2672, 32);
  _2675 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2671)), _2673, 32);
  *(uint64_t*)_2559 = _2674;
  *(uint64_t*)_2561 = _2675;
  _2676 = *(uint64_t*)_2634;
  _2677 = *(uint64_t*)_2636;
  _2678 = *(uint64_t*)_2638;
  _2679 = *(void**)_2555;
  _2680 = *(uint64_t*)(((&((uint8_t*)_2679)[((int64_t)16)])));
  *(uint64_t*)_2633 = _2676;
  *(uint64_t*)_2634 = _2677;
  *(uint64_t*)_2636 = _2678;
  *(uint64_t*)_2638 = _2680;
  _2681 = *(uint32_t*)_2559;
  switch (_2681) {
  default:
    goto _2721;
  case 167772160u:
    _2686__PHI_TEMPORARY = 0;   /* for PHI node */
    _2687__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2722;
  case 3800082944u:
    goto _2723;
  case 3800083200u:
    goto _2723;
  case 3800083712u:
    goto _2723;
  case 3800083968u:
    goto _2723;
  case 3800083456u:
    goto _2724;
  case 3800147456u:
    goto _2725;
  case 3800147712u:
    goto _2725;
  case 3800147968u:
    goto _2725;
  }

_2725:
  _2684 = llvm_add_u64(_2647, 1);
  _2686__PHI_TEMPORARY = _2646;   /* for PHI node */
  _2687__PHI_TEMPORARY = _2684;   /* for PHI node */
  goto _2722;

_2724:
  _2682 = llvm_add_u64(_2646, -1);
  _2686__PHI_TEMPORARY = _2682;   /* for PHI node */
  _2687__PHI_TEMPORARY = _2647;   /* for PHI node */
  goto _2722;

_2723:
  _2685 = llvm_add_u64(_2646, 1);
  _2686__PHI_TEMPORARY = _2685;   /* for PHI node */
  _2687__PHI_TEMPORARY = _2647;   /* for PHI node */
  goto _2722;

_2721:
  _2683 = llvm_add_u64(_2647, (((int64_t)(bool)0-(_2681 == 3800148224u))));
  _2686__PHI_TEMPORARY = _2646;   /* for PHI node */
  _2687__PHI_TEMPORARY = _2683;   /* for PHI node */
  goto _2722;

_2722:
  _2686 = _2686__PHI_TEMPORARY;
  _2687 = _2687__PHI_TEMPORARY;
  _2688 = llvm_OC_ctlz_OC_i32((_2681 ^ -1), 0);
  _2689 = llvm_OC_cttz_OC_i32(_2681, 0);
  _2690 = _2689 & 56;
  _2691 = _2649 & (((((_2688 != 1u) & (((uint32_t)(llvm_add_u32((_2688 << 3), _2690))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_2689) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_2681 & 12632256) ^ 8421504), _2690)) == 0u)))) & ((((_2681 & -33554432) != 3221225472u) & ((_2681 & -2097152) != 3766484992u)) & ((_2681 & -1048576) != 4034920448u))) & ((((uint32_t)_2681) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_2681, 293568512))) < ((uint32_t)101662656u))));
  if (_2645) {
    _2644__PHI_TEMPORARY = _2644;   /* for PHI node */
    _2645__PHI_TEMPORARY = 0;   /* for PHI node */
    _2646__PHI_TEMPORARY = _2686;   /* for PHI node */
    _2647__PHI_TEMPORARY = _2687;   /* for PHI node */
    _2648__PHI_TEMPORARY = _2681;   /* for PHI node */
    _2649__PHI_TEMPORARY = _2691;   /* for PHI node */
    goto _2712;
  } else {
    goto _2726;
  }

_2726:
  if (((_2648 == 587202560u) & (_2681 == 1023410176u))) {
    goto _2727;
  } else {
    goto _2728;
  }

_2728:
  if (((_2648 == 1023410176u) & (_2681 == 587202560u))) {
    goto _2729;
  } else {
    _2644__PHI_TEMPORARY = _2644;   /* for PHI node */
    _2645__PHI_TEMPORARY = 0;   /* for PHI node */
    _2646__PHI_TEMPORARY = _2686;   /* for PHI node */
    _2647__PHI_TEMPORARY = _2687;   /* for PHI node */
    _2648__PHI_TEMPORARY = _2681;   /* for PHI node */
    _2649__PHI_TEMPORARY = _2691;   /* for PHI node */
    goto _2712;
  }

_2729:
  _2693 = llvm_add_u64(_2644, -1);
  if ((_2693 == UINT64_C(0))) {
    goto _2730;
  } else {
    _2644__PHI_TEMPORARY = _2693;   /* for PHI node */
    _2645__PHI_TEMPORARY = 1;   /* for PHI node */
    _2646__PHI_TEMPORARY = _2686;   /* for PHI node */
    _2647__PHI_TEMPORARY = _2687;   /* for PHI node */
    _2648__PHI_TEMPORARY = _2681;   /* for PHI node */
    _2649__PHI_TEMPORARY = _2691;   /* for PHI node */
    goto _2712;
  }

_2727:
  _2692 = llvm_add_u64(_2644, 1);
  _2644__PHI_TEMPORARY = _2692;   /* for PHI node */
  _2645__PHI_TEMPORARY = 1;   /* for PHI node */
  _2646__PHI_TEMPORARY = _2686;   /* for PHI node */
  _2647__PHI_TEMPORARY = _2687;   /* for PHI node */
  _2648__PHI_TEMPORARY = _2681;   /* for PHI node */
  _2649__PHI_TEMPORARY = _2691;   /* for PHI node */
  goto _2712;

  } while (1); /* end of syntactic loop '' */
_2713:
  julia_emit_20((&_2557), _2554, _2555, 753, 1);
  _2605__PHI_TEMPORARY = (&_2557);   /* for PHI node */
  goto _2705;

_2730:
  julia_emit_20((&_2558), _2554, _2555, (llvm_select_u16(_2691, (llvm_select_u16((llvm_select_bool((_2686 == UINT64_C(0)), (_2687 == UINT64_C(0)), 0)), 0, 766)), 762)), 1);
  _2605__PHI_TEMPORARY = (&_2558);   /* for PHI node */
  goto _2705;

}


static void julia_lex_equal_33(void* _2731, void* _2732, void* _2733) {
  struct l_array_4_uint64_t _2734;    /* Address-exposed local */
  struct l_array_4_uint64_t _2735;    /* Address-exposed local */
  struct l_array_4_uint64_t _2736;    /* Address-exposed local */
  struct l_array_4_uint64_t _2737;    /* Address-exposed local */
  void* _2738;
  uint64_t _2739;
  void* _2740;
  void* _2741;
  void* _2742;
  uint64_t _2743;
  void* _2744;
  uint64_t _2745;
  void* _2746;
  uint8_t _2747;
  uint8_t _2748;
  uint8_t _2749;
  uint32_t _2750;
  uint64_t _2751;
  uint64_t _2751__PHI_TEMPORARY;
  uint32_t _2752;
  uint32_t _2752__PHI_TEMPORARY;
  uint64_t _2753;
  uint64_t _2754;
  void* _2755;
  uint8_t _2756;
  uint32_t _2757;
  uint64_t _2758;
  uint64_t _2759;
  uint32_t _2760;
  uint64_t _2761;
  uint32_t _2762;
  uint32_t _2762__PHI_TEMPORARY;
  uint64_t _2763;
  uint64_t _2764;
  uint64_t _2765;
  uint64_t _2766;
  void* _2767;
  uint64_t _2768;
  void* _2769;
  uint64_t _2770;
  void* _2771;
  uint64_t _2772;
  void* _2773;
  uint64_t _2774;
  uint64_t _2775;
  void* _2776;
  void* _2777;
  uint64_t _2778;
  void* _2779;
  uint64_t _2780;
  void* _2781;
  uint8_t _2782;
  uint8_t _2783;
  uint8_t _2784;
  uint32_t _2785;
  uint64_t _2786;
  uint64_t _2786__PHI_TEMPORARY;
  uint32_t _2787;
  uint32_t _2787__PHI_TEMPORARY;
  uint64_t _2788;
  uint64_t _2789;
  void* _2790;
  uint8_t _2791;
  uint32_t _2792;
  uint64_t _2793;
  uint64_t _2794;
  uint32_t _2795;
  uint64_t _2796;
  uint32_t _2797;
  uint32_t _2797__PHI_TEMPORARY;
  uint64_t _2798;
  uint64_t _2799;
  uint64_t _2800;
  uint64_t _2801;
  void* _2802;
  uint64_t _2803;
  void* _2804;
  uint64_t _2805;
  void* _2806;
  uint64_t _2807;
  void* _2808;
  uint64_t _2809;
  void* _2810;
  void* _2810__PHI_TEMPORARY;
  void* _2811;
  uint64_t _2812;
  void* _2813;
  void* _2814;
  uint64_t _2815;
  void* _2816;
  uint64_t _2817;
  void* _2818;
  uint8_t _2819;
  uint8_t _2820;
  uint8_t _2821;
  uint32_t _2822;
  uint64_t _2823;
  uint64_t _2823__PHI_TEMPORARY;
  uint32_t _2824;
  uint32_t _2824__PHI_TEMPORARY;
  uint64_t _2825;
  uint64_t _2826;
  void* _2827;
  uint8_t _2828;
  uint32_t _2829;
  uint64_t _2830;
  uint64_t _2831;
  uint32_t _2832;
  uint64_t _2833;
  uint32_t _2834;
  uint32_t _2834__PHI_TEMPORARY;
  uint64_t _2835;
  uint64_t _2836;
  uint64_t _2837;
  uint64_t _2838;
  void* _2839;
  uint64_t _2840;
  void* _2841;
  uint64_t _2842;
  void* _2843;
  uint64_t _2844;
  void* _2845;
  uint64_t _2846;

  _2738 = ((&((uint8_t*)_2733)[((int64_t)32)]));
  _2739 = *(uint64_t*)_2738;
  _2740 = ((&((uint8_t*)_2733)[((int64_t)40)]));
  if (((_2739 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2847;
  } else {
    goto _2848;
  }

_2847:
  _2741 = *(void**)_2733;
  _2742 = ((&((uint8_t*)_2741)[((int64_t)16)]));
  _2743 = *(uint64_t*)_2742;
  _2744 = ((&((uint8_t*)_2741)[((int64_t)8)]));
  _2745 = *(uint64_t*)_2744;
  if ((((int64_t)_2745) > ((int64_t)_2743))) {
    goto _2849;
  } else {
    _2762__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2850;
  }

_2849:
  _2746 = *(void**)_2741;
  _2747 = *(uint8_t*)(((&((uint8_t*)_2746)[((int64_t)_2743)])));
  *(uint64_t*)_2742 = (llvm_add_u64(_2743, 1));
  _2748 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2747)), 0);
  _2749 = llvm_sub_u8(32, (llvm_shl_u8(_2748, 3)));
  _2750 = (((uint32_t)(uint8_t)_2747)) << 24;
  if ((((uint8_t)_2749) > ((uint8_t)((uint8_t)16)))) {
    _2762__PHI_TEMPORARY = _2750;   /* for PHI node */
    goto _2850;
  } else {
    _2751__PHI_TEMPORARY = 16;   /* for PHI node */
    _2752__PHI_TEMPORARY = _2750;   /* for PHI node */
    goto _2851;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2851:
  _2751 = _2751__PHI_TEMPORARY;
  _2752 = _2752__PHI_TEMPORARY;
  if (((((int64_t)_2751) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2751) < ((uint64_t)(((uint64_t)(uint8_t)_2749)))))) {
    _2762__PHI_TEMPORARY = _2752;   /* for PHI node */
    goto _2850;
  } else {
    goto _2852;
  }

_2852:
  _2753 = *(uint64_t*)_2742;
  _2754 = *(uint64_t*)_2744;
  if ((((int64_t)_2754) > ((int64_t)_2753))) {
    goto _2853;
  } else {
    _2762__PHI_TEMPORARY = _2752;   /* for PHI node */
    goto _2850;
  }

_2853:
  _2755 = *(void**)_2741;
  _2756 = *(uint8_t*)(((&((uint8_t*)_2755)[((int64_t)_2753)])));
  if ((((int8_t)_2756) > ((int8_t)((uint8_t)-65)))) {
    _2762__PHI_TEMPORARY = _2752;   /* for PHI node */
    goto _2850;
  } else {
    goto _2854;
  }

_2854:
  _2757 = llvm_select_u32((((int64_t)_2753) < ((int64_t)_2754)), (((uint32_t)(uint8_t)_2756)), 0);
  _2758 = *(uint64_t*)_2742;
  *(uint64_t*)_2742 = (llvm_add_u64(_2758, 1));
  _2759 = llvm_neg_u64(_2751);
  _2760 = _2752 | (llvm_select_u32((((int64_t)_2751) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2759) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2757, (((uint32_t)_2759)))))), (llvm_select_u32((((uint64_t)_2751) > ((uint64_t)UINT64_C(31))), 0, (_2757 << (((uint32_t)_2751)))))));
  _2761 = llvm_add_u64(_2751, -8);
  _2751__PHI_TEMPORARY = _2761;   /* for PHI node */
  _2752__PHI_TEMPORARY = _2760;   /* for PHI node */
  goto _2851;

  } while (1); /* end of syntactic loop '' */
_2850:
  _2762 = _2762__PHI_TEMPORARY;
  _2763 = *(uint64_t*)_2738;
  _2764 = *(uint64_t*)_2740;
  _2765 = jsyn_cbe_fshl_i64(_2764, _2763, 32);
  _2766 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2762)), _2764, 32);
  *(uint64_t*)_2738 = _2765;
  *(uint64_t*)_2740 = _2766;
  _2767 = ((&((uint8_t*)_2733)[((int64_t)56)]));
  _2768 = *(uint64_t*)_2767;
  _2769 = ((&((uint8_t*)_2733)[((int64_t)64)]));
  _2770 = *(uint64_t*)_2769;
  _2771 = ((&((uint8_t*)_2733)[((int64_t)72)]));
  _2772 = *(uint64_t*)_2771;
  _2773 = *(void**)_2733;
  _2774 = *(uint64_t*)(((&((uint8_t*)_2773)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2733)[((int64_t)48)]))) = _2768;
  *(uint64_t*)_2767 = _2770;
  *(uint64_t*)_2769 = _2772;
  *(uint64_t*)_2771 = _2774;
  _2775 = *(uint64_t*)_2738;
  if (((_2775 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2855;
  } else {
    goto _2856;
  }

_2855:
  _2776 = *(void**)_2733;
  _2777 = ((&((uint8_t*)_2776)[((int64_t)16)]));
  _2778 = *(uint64_t*)_2777;
  _2779 = ((&((uint8_t*)_2776)[((int64_t)8)]));
  _2780 = *(uint64_t*)_2779;
  if ((((int64_t)_2780) > ((int64_t)_2778))) {
    goto _2857;
  } else {
    _2797__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2858;
  }

_2857:
  _2781 = *(void**)_2776;
  _2782 = *(uint8_t*)(((&((uint8_t*)_2781)[((int64_t)_2778)])));
  *(uint64_t*)_2777 = (llvm_add_u64(_2778, 1));
  _2783 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2782)), 0);
  _2784 = llvm_sub_u8(32, (llvm_shl_u8(_2783, 3)));
  _2785 = (((uint32_t)(uint8_t)_2782)) << 24;
  if ((((uint8_t)_2784) > ((uint8_t)((uint8_t)16)))) {
    _2797__PHI_TEMPORARY = _2785;   /* for PHI node */
    goto _2858;
  } else {
    _2786__PHI_TEMPORARY = 16;   /* for PHI node */
    _2787__PHI_TEMPORARY = _2785;   /* for PHI node */
    goto _2859;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2859:
  _2786 = _2786__PHI_TEMPORARY;
  _2787 = _2787__PHI_TEMPORARY;
  if (((((int64_t)_2786) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2786) < ((uint64_t)(((uint64_t)(uint8_t)_2784)))))) {
    _2797__PHI_TEMPORARY = _2787;   /* for PHI node */
    goto _2858;
  } else {
    goto _2860;
  }

_2860:
  _2788 = *(uint64_t*)_2777;
  _2789 = *(uint64_t*)_2779;
  if ((((int64_t)_2789) > ((int64_t)_2788))) {
    goto _2861;
  } else {
    _2797__PHI_TEMPORARY = _2787;   /* for PHI node */
    goto _2858;
  }

_2861:
  _2790 = *(void**)_2776;
  _2791 = *(uint8_t*)(((&((uint8_t*)_2790)[((int64_t)_2788)])));
  if ((((int8_t)_2791) > ((int8_t)((uint8_t)-65)))) {
    _2797__PHI_TEMPORARY = _2787;   /* for PHI node */
    goto _2858;
  } else {
    goto _2862;
  }

_2862:
  _2792 = llvm_select_u32((((int64_t)_2788) < ((int64_t)_2789)), (((uint32_t)(uint8_t)_2791)), 0);
  _2793 = *(uint64_t*)_2777;
  *(uint64_t*)_2777 = (llvm_add_u64(_2793, 1));
  _2794 = llvm_neg_u64(_2786);
  _2795 = _2787 | (llvm_select_u32((((int64_t)_2786) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2794) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2792, (((uint32_t)_2794)))))), (llvm_select_u32((((uint64_t)_2786) > ((uint64_t)UINT64_C(31))), 0, (_2792 << (((uint32_t)_2786)))))));
  _2796 = llvm_add_u64(_2786, -8);
  _2786__PHI_TEMPORARY = _2796;   /* for PHI node */
  _2787__PHI_TEMPORARY = _2795;   /* for PHI node */
  goto _2859;

  } while (1); /* end of syntactic loop '' */
_2858:
  _2797 = _2797__PHI_TEMPORARY;
  _2798 = *(uint64_t*)_2738;
  _2799 = *(uint64_t*)_2740;
  _2800 = jsyn_cbe_fshl_i64(_2799, _2798, 32);
  _2801 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2797)), _2799, 32);
  *(uint64_t*)_2738 = _2800;
  *(uint64_t*)_2740 = _2801;
  _2802 = ((&((uint8_t*)_2733)[((int64_t)56)]));
  _2803 = *(uint64_t*)_2802;
  _2804 = ((&((uint8_t*)_2733)[((int64_t)64)]));
  _2805 = *(uint64_t*)_2804;
  _2806 = ((&((uint8_t*)_2733)[((int64_t)72)]));
  _2807 = *(uint64_t*)_2806;
  _2808 = *(void**)_2733;
  _2809 = *(uint64_t*)(((&((uint8_t*)_2808)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2733)[((int64_t)48)]))) = _2803;
  *(uint64_t*)_2802 = _2805;
  *(uint64_t*)_2804 = _2807;
  *(uint64_t*)_2806 = _2809;
  julia_emit_20((&_2734), _2732, _2733, 245, 1);
  _2810__PHI_TEMPORARY = (&_2734);   /* for PHI node */
  goto _2863;

_2863:
  _2810 = _2810__PHI_TEMPORARY;
  _2811 = memcpy(_2731, _2810, 32);
  return;
_2856:
  julia_emit_20((&_2735), _2732, _2733, 244, 1);
  _2810__PHI_TEMPORARY = (&_2735);   /* for PHI node */
  goto _2863;

_2848:
  _2812 = *(uint64_t*)_2738;
  if (((_2812 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _2864;
  } else {
    goto _2865;
  }

_2864:
  _2813 = *(void**)_2733;
  _2814 = ((&((uint8_t*)_2813)[((int64_t)16)]));
  _2815 = *(uint64_t*)_2814;
  _2816 = ((&((uint8_t*)_2813)[((int64_t)8)]));
  _2817 = *(uint64_t*)_2816;
  if ((((int64_t)_2817) > ((int64_t)_2815))) {
    goto _2866;
  } else {
    _2834__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2867;
  }

_2866:
  _2818 = *(void**)_2813;
  _2819 = *(uint8_t*)(((&((uint8_t*)_2818)[((int64_t)_2815)])));
  *(uint64_t*)_2814 = (llvm_add_u64(_2815, 1));
  _2820 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2819)), 0);
  _2821 = llvm_sub_u8(32, (llvm_shl_u8(_2820, 3)));
  _2822 = (((uint32_t)(uint8_t)_2819)) << 24;
  if ((((uint8_t)_2821) > ((uint8_t)((uint8_t)16)))) {
    _2834__PHI_TEMPORARY = _2822;   /* for PHI node */
    goto _2867;
  } else {
    _2823__PHI_TEMPORARY = 16;   /* for PHI node */
    _2824__PHI_TEMPORARY = _2822;   /* for PHI node */
    goto _2868;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2868:
  _2823 = _2823__PHI_TEMPORARY;
  _2824 = _2824__PHI_TEMPORARY;
  if (((((int64_t)_2823) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2823) < ((uint64_t)(((uint64_t)(uint8_t)_2821)))))) {
    _2834__PHI_TEMPORARY = _2824;   /* for PHI node */
    goto _2867;
  } else {
    goto _2869;
  }

_2869:
  _2825 = *(uint64_t*)_2814;
  _2826 = *(uint64_t*)_2816;
  if ((((int64_t)_2826) > ((int64_t)_2825))) {
    goto _2870;
  } else {
    _2834__PHI_TEMPORARY = _2824;   /* for PHI node */
    goto _2867;
  }

_2870:
  _2827 = *(void**)_2813;
  _2828 = *(uint8_t*)(((&((uint8_t*)_2827)[((int64_t)_2825)])));
  if ((((int8_t)_2828) > ((int8_t)((uint8_t)-65)))) {
    _2834__PHI_TEMPORARY = _2824;   /* for PHI node */
    goto _2867;
  } else {
    goto _2871;
  }

_2871:
  _2829 = llvm_select_u32((((int64_t)_2825) < ((int64_t)_2826)), (((uint32_t)(uint8_t)_2828)), 0);
  _2830 = *(uint64_t*)_2814;
  *(uint64_t*)_2814 = (llvm_add_u64(_2830, 1));
  _2831 = llvm_neg_u64(_2823);
  _2832 = _2824 | (llvm_select_u32((((int64_t)_2823) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2831) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2829, (((uint32_t)_2831)))))), (llvm_select_u32((((uint64_t)_2823) > ((uint64_t)UINT64_C(31))), 0, (_2829 << (((uint32_t)_2823)))))));
  _2833 = llvm_add_u64(_2823, -8);
  _2823__PHI_TEMPORARY = _2833;   /* for PHI node */
  _2824__PHI_TEMPORARY = _2832;   /* for PHI node */
  goto _2868;

  } while (1); /* end of syntactic loop '' */
_2867:
  _2834 = _2834__PHI_TEMPORARY;
  _2835 = *(uint64_t*)_2738;
  _2836 = *(uint64_t*)_2740;
  _2837 = jsyn_cbe_fshl_i64(_2836, _2835, 32);
  _2838 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2834)), _2836, 32);
  *(uint64_t*)_2738 = _2837;
  *(uint64_t*)_2740 = _2838;
  _2839 = ((&((uint8_t*)_2733)[((int64_t)56)]));
  _2840 = *(uint64_t*)_2839;
  _2841 = ((&((uint8_t*)_2733)[((int64_t)64)]));
  _2842 = *(uint64_t*)_2841;
  _2843 = ((&((uint8_t*)_2733)[((int64_t)72)]));
  _2844 = *(uint64_t*)_2843;
  _2845 = *(void**)_2733;
  _2846 = *(uint64_t*)(((&((uint8_t*)_2845)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2733)[((int64_t)48)]))) = _2840;
  *(uint64_t*)_2839 = _2842;
  *(uint64_t*)_2841 = _2844;
  *(uint64_t*)_2843 = _2846;
  julia_emit_20((&_2736), _2732, _2733, 78, 1);
  _2810__PHI_TEMPORARY = (&_2736);   /* for PHI node */
  goto _2863;

_2865:
  julia_emit_20((&_2737), _2732, _2733, 69, 1);
  _2810__PHI_TEMPORARY = (&_2737);   /* for PHI node */
  goto _2863;

}


static void julia_lex_exclaim_34(void* _2872, void* _2873, void* _2874) {
  struct l_array_4_uint64_t _2875;    /* Address-exposed local */
  struct l_array_4_uint64_t _2876;    /* Address-exposed local */
  struct l_array_4_uint64_t _2877;    /* Address-exposed local */
  void* _2878;
  uint64_t _2879;
  void* _2880;
  void* _2881;
  void* _2882;
  uint64_t _2883;
  void* _2884;
  uint64_t _2885;
  void* _2886;
  uint8_t _2887;
  uint8_t _2888;
  uint8_t _2889;
  uint32_t _2890;
  uint64_t _2891;
  uint64_t _2891__PHI_TEMPORARY;
  uint32_t _2892;
  uint32_t _2892__PHI_TEMPORARY;
  uint64_t _2893;
  uint64_t _2894;
  void* _2895;
  uint8_t _2896;
  uint32_t _2897;
  uint64_t _2898;
  uint64_t _2899;
  uint32_t _2900;
  uint64_t _2901;
  uint32_t _2902;
  uint32_t _2902__PHI_TEMPORARY;
  uint64_t _2903;
  uint64_t _2904;
  uint64_t _2905;
  uint64_t _2906;
  void* _2907;
  uint64_t _2908;
  void* _2909;
  uint64_t _2910;
  void* _2911;
  uint64_t _2912;
  void* _2913;
  uint64_t _2914;
  uint64_t _2915;
  void* _2916;
  void* _2917;
  uint64_t _2918;
  void* _2919;
  uint64_t _2920;
  void* _2921;
  uint8_t _2922;
  uint8_t _2923;
  uint8_t _2924;
  uint32_t _2925;
  uint64_t _2926;
  uint64_t _2926__PHI_TEMPORARY;
  uint32_t _2927;
  uint32_t _2927__PHI_TEMPORARY;
  uint64_t _2928;
  uint64_t _2929;
  void* _2930;
  uint8_t _2931;
  uint32_t _2932;
  uint64_t _2933;
  uint64_t _2934;
  uint32_t _2935;
  uint64_t _2936;
  uint32_t _2937;
  uint32_t _2937__PHI_TEMPORARY;
  uint64_t _2938;
  uint64_t _2939;
  uint64_t _2940;
  uint64_t _2941;
  void* _2942;
  uint64_t _2943;
  void* _2944;
  uint64_t _2945;
  void* _2946;
  uint64_t _2947;
  void* _2948;
  uint64_t _2949;
  void* _2950;
  void* _2950__PHI_TEMPORARY;
  void* _2951;

  _2878 = ((&((uint8_t*)_2874)[((int64_t)32)]));
  _2879 = *(uint64_t*)_2878;
  _2880 = ((&((uint8_t*)_2874)[((int64_t)40)]));
  if (((_2879 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2952;
  } else {
    goto _2953;
  }

_2952:
  _2881 = *(void**)_2874;
  _2882 = ((&((uint8_t*)_2881)[((int64_t)16)]));
  _2883 = *(uint64_t*)_2882;
  _2884 = ((&((uint8_t*)_2881)[((int64_t)8)]));
  _2885 = *(uint64_t*)_2884;
  if ((((int64_t)_2885) > ((int64_t)_2883))) {
    goto _2954;
  } else {
    _2902__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2955;
  }

_2954:
  _2886 = *(void**)_2881;
  _2887 = *(uint8_t*)(((&((uint8_t*)_2886)[((int64_t)_2883)])));
  *(uint64_t*)_2882 = (llvm_add_u64(_2883, 1));
  _2888 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2887)), 0);
  _2889 = llvm_sub_u8(32, (llvm_shl_u8(_2888, 3)));
  _2890 = (((uint32_t)(uint8_t)_2887)) << 24;
  if ((((uint8_t)_2889) > ((uint8_t)((uint8_t)16)))) {
    _2902__PHI_TEMPORARY = _2890;   /* for PHI node */
    goto _2955;
  } else {
    _2891__PHI_TEMPORARY = 16;   /* for PHI node */
    _2892__PHI_TEMPORARY = _2890;   /* for PHI node */
    goto _2956;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2956:
  _2891 = _2891__PHI_TEMPORARY;
  _2892 = _2892__PHI_TEMPORARY;
  if (((((int64_t)_2891) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2891) < ((uint64_t)(((uint64_t)(uint8_t)_2889)))))) {
    _2902__PHI_TEMPORARY = _2892;   /* for PHI node */
    goto _2955;
  } else {
    goto _2957;
  }

_2957:
  _2893 = *(uint64_t*)_2882;
  _2894 = *(uint64_t*)_2884;
  if ((((int64_t)_2894) > ((int64_t)_2893))) {
    goto _2958;
  } else {
    _2902__PHI_TEMPORARY = _2892;   /* for PHI node */
    goto _2955;
  }

_2958:
  _2895 = *(void**)_2881;
  _2896 = *(uint8_t*)(((&((uint8_t*)_2895)[((int64_t)_2893)])));
  if ((((int8_t)_2896) > ((int8_t)((uint8_t)-65)))) {
    _2902__PHI_TEMPORARY = _2892;   /* for PHI node */
    goto _2955;
  } else {
    goto _2959;
  }

_2959:
  _2897 = llvm_select_u32((((int64_t)_2893) < ((int64_t)_2894)), (((uint32_t)(uint8_t)_2896)), 0);
  _2898 = *(uint64_t*)_2882;
  *(uint64_t*)_2882 = (llvm_add_u64(_2898, 1));
  _2899 = llvm_neg_u64(_2891);
  _2900 = _2892 | (llvm_select_u32((((int64_t)_2891) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2899) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2897, (((uint32_t)_2899)))))), (llvm_select_u32((((uint64_t)_2891) > ((uint64_t)UINT64_C(31))), 0, (_2897 << (((uint32_t)_2891)))))));
  _2901 = llvm_add_u64(_2891, -8);
  _2891__PHI_TEMPORARY = _2901;   /* for PHI node */
  _2892__PHI_TEMPORARY = _2900;   /* for PHI node */
  goto _2956;

  } while (1); /* end of syntactic loop '' */
_2955:
  _2902 = _2902__PHI_TEMPORARY;
  _2903 = *(uint64_t*)_2878;
  _2904 = *(uint64_t*)_2880;
  _2905 = jsyn_cbe_fshl_i64(_2904, _2903, 32);
  _2906 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2902)), _2904, 32);
  *(uint64_t*)_2878 = _2905;
  *(uint64_t*)_2880 = _2906;
  _2907 = ((&((uint8_t*)_2874)[((int64_t)56)]));
  _2908 = *(uint64_t*)_2907;
  _2909 = ((&((uint8_t*)_2874)[((int64_t)64)]));
  _2910 = *(uint64_t*)_2909;
  _2911 = ((&((uint8_t*)_2874)[((int64_t)72)]));
  _2912 = *(uint64_t*)_2911;
  _2913 = *(void**)_2874;
  _2914 = *(uint64_t*)(((&((uint8_t*)_2913)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2874)[((int64_t)48)]))) = _2908;
  *(uint64_t*)_2907 = _2910;
  *(uint64_t*)_2909 = _2912;
  *(uint64_t*)_2911 = _2914;
  _2915 = *(uint64_t*)_2878;
  if (((_2915 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2960;
  } else {
    goto _2961;
  }

_2960:
  _2916 = *(void**)_2874;
  _2917 = ((&((uint8_t*)_2916)[((int64_t)16)]));
  _2918 = *(uint64_t*)_2917;
  _2919 = ((&((uint8_t*)_2916)[((int64_t)8)]));
  _2920 = *(uint64_t*)_2919;
  if ((((int64_t)_2920) > ((int64_t)_2918))) {
    goto _2962;
  } else {
    _2937__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2963;
  }

_2962:
  _2921 = *(void**)_2916;
  _2922 = *(uint8_t*)(((&((uint8_t*)_2921)[((int64_t)_2918)])));
  *(uint64_t*)_2917 = (llvm_add_u64(_2918, 1));
  _2923 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2922)), 0);
  _2924 = llvm_sub_u8(32, (llvm_shl_u8(_2923, 3)));
  _2925 = (((uint32_t)(uint8_t)_2922)) << 24;
  if ((((uint8_t)_2924) > ((uint8_t)((uint8_t)16)))) {
    _2937__PHI_TEMPORARY = _2925;   /* for PHI node */
    goto _2963;
  } else {
    _2926__PHI_TEMPORARY = 16;   /* for PHI node */
    _2927__PHI_TEMPORARY = _2925;   /* for PHI node */
    goto _2964;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2964:
  _2926 = _2926__PHI_TEMPORARY;
  _2927 = _2927__PHI_TEMPORARY;
  if (((((int64_t)_2926) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2926) < ((uint64_t)(((uint64_t)(uint8_t)_2924)))))) {
    _2937__PHI_TEMPORARY = _2927;   /* for PHI node */
    goto _2963;
  } else {
    goto _2965;
  }

_2965:
  _2928 = *(uint64_t*)_2917;
  _2929 = *(uint64_t*)_2919;
  if ((((int64_t)_2929) > ((int64_t)_2928))) {
    goto _2966;
  } else {
    _2937__PHI_TEMPORARY = _2927;   /* for PHI node */
    goto _2963;
  }

_2966:
  _2930 = *(void**)_2916;
  _2931 = *(uint8_t*)(((&((uint8_t*)_2930)[((int64_t)_2928)])));
  if ((((int8_t)_2931) > ((int8_t)((uint8_t)-65)))) {
    _2937__PHI_TEMPORARY = _2927;   /* for PHI node */
    goto _2963;
  } else {
    goto _2967;
  }

_2967:
  _2932 = llvm_select_u32((((int64_t)_2928) < ((int64_t)_2929)), (((uint32_t)(uint8_t)_2931)), 0);
  _2933 = *(uint64_t*)_2917;
  *(uint64_t*)_2917 = (llvm_add_u64(_2933, 1));
  _2934 = llvm_neg_u64(_2926);
  _2935 = _2927 | (llvm_select_u32((((int64_t)_2926) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2934) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2932, (((uint32_t)_2934)))))), (llvm_select_u32((((uint64_t)_2926) > ((uint64_t)UINT64_C(31))), 0, (_2932 << (((uint32_t)_2926)))))));
  _2936 = llvm_add_u64(_2926, -8);
  _2926__PHI_TEMPORARY = _2936;   /* for PHI node */
  _2927__PHI_TEMPORARY = _2935;   /* for PHI node */
  goto _2964;

  } while (1); /* end of syntactic loop '' */
_2963:
  _2937 = _2937__PHI_TEMPORARY;
  _2938 = *(uint64_t*)_2878;
  _2939 = *(uint64_t*)_2880;
  _2940 = jsyn_cbe_fshl_i64(_2939, _2938, 32);
  _2941 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2937)), _2939, 32);
  *(uint64_t*)_2878 = _2940;
  *(uint64_t*)_2880 = _2941;
  _2942 = ((&((uint8_t*)_2874)[((int64_t)56)]));
  _2943 = *(uint64_t*)_2942;
  _2944 = ((&((uint8_t*)_2874)[((int64_t)64)]));
  _2945 = *(uint64_t*)_2944;
  _2946 = ((&((uint8_t*)_2874)[((int64_t)72)]));
  _2947 = *(uint64_t*)_2946;
  _2948 = *(void**)_2874;
  _2949 = *(uint64_t*)(((&((uint8_t*)_2948)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2874)[((int64_t)48)]))) = _2943;
  *(uint64_t*)_2942 = _2945;
  *(uint64_t*)_2944 = _2947;
  *(uint64_t*)_2946 = _2949;
  julia_emit_20((&_2875), _2873, _2874, 249, 1);
  _2950__PHI_TEMPORARY = (&_2875);   /* for PHI node */
  goto _2968;

_2968:
  _2950 = _2950__PHI_TEMPORARY;
  _2951 = memcpy(_2872, _2950, 32);
  return;
_2961:
  julia_emit_20((&_2876), _2873, _2874, 247, 1);
  _2950__PHI_TEMPORARY = (&_2876);   /* for PHI node */
  goto _2968;

_2953:
  julia_emit_20((&_2877), _2873, _2874, 708, 1);
  _2950__PHI_TEMPORARY = (&_2877);   /* for PHI node */
  goto _2968;

}


static void julia_lex_greater_35(void* _2969, void* _2970, void* _2971) {
  struct l_array_4_uint64_t _2972;    /* Address-exposed local */
  struct l_array_4_uint64_t _2973;    /* Address-exposed local */
  struct l_array_4_uint64_t _2974;    /* Address-exposed local */
  struct l_array_4_uint64_t _2975;    /* Address-exposed local */
  struct l_array_4_uint64_t _2976;    /* Address-exposed local */
  struct l_array_4_uint64_t _2977;    /* Address-exposed local */
  struct l_array_4_uint64_t _2978;    /* Address-exposed local */
  void* _2979;
  uint64_t _2980;
  void* _2981;
  void* _2982;
  void* _2983;
  uint64_t _2984;
  void* _2985;
  uint64_t _2986;
  void* _2987;
  uint8_t _2988;
  uint8_t _2989;
  uint8_t _2990;
  uint32_t _2991;
  uint64_t _2992;
  uint64_t _2992__PHI_TEMPORARY;
  uint32_t _2993;
  uint32_t _2993__PHI_TEMPORARY;
  uint64_t _2994;
  uint64_t _2995;
  void* _2996;
  uint8_t _2997;
  uint32_t _2998;
  uint64_t _2999;
  uint64_t _3000;
  uint32_t _3001;
  uint64_t _3002;
  uint32_t _3003;
  uint32_t _3003__PHI_TEMPORARY;
  uint64_t _3004;
  uint64_t _3005;
  uint64_t _3006;
  uint64_t _3007;
  void* _3008;
  uint64_t _3009;
  void* _3010;
  uint64_t _3011;
  void* _3012;
  uint64_t _3013;
  void* _3014;
  uint64_t _3015;
  uint64_t _3016;
  void* _3017;
  void* _3018;
  uint64_t _3019;
  void* _3020;
  uint64_t _3021;
  void* _3022;
  uint8_t _3023;
  uint8_t _3024;
  uint8_t _3025;
  uint32_t _3026;
  uint64_t _3027;
  uint64_t _3027__PHI_TEMPORARY;
  uint32_t _3028;
  uint32_t _3028__PHI_TEMPORARY;
  uint64_t _3029;
  uint64_t _3030;
  void* _3031;
  uint8_t _3032;
  uint32_t _3033;
  uint64_t _3034;
  uint64_t _3035;
  uint32_t _3036;
  uint64_t _3037;
  uint32_t _3038;
  uint32_t _3038__PHI_TEMPORARY;
  uint64_t _3039;
  uint64_t _3040;
  uint64_t _3041;
  uint64_t _3042;
  void* _3043;
  uint64_t _3044;
  void* _3045;
  uint64_t _3046;
  void* _3047;
  uint64_t _3048;
  void* _3049;
  uint64_t _3050;
  uint64_t _3051;
  void* _3052;
  void* _3053;
  uint64_t _3054;
  void* _3055;
  uint64_t _3056;
  void* _3057;
  uint8_t _3058;
  uint8_t _3059;
  uint8_t _3060;
  uint32_t _3061;
  uint64_t _3062;
  uint64_t _3062__PHI_TEMPORARY;
  uint32_t _3063;
  uint32_t _3063__PHI_TEMPORARY;
  uint64_t _3064;
  uint64_t _3065;
  void* _3066;
  uint8_t _3067;
  uint32_t _3068;
  uint64_t _3069;
  uint64_t _3070;
  uint32_t _3071;
  uint64_t _3072;
  uint32_t _3073;
  uint32_t _3073__PHI_TEMPORARY;
  uint64_t _3074;
  uint64_t _3075;
  uint64_t _3076;
  uint64_t _3077;
  void* _3078;
  uint64_t _3079;
  void* _3080;
  uint64_t _3081;
  void* _3082;
  uint64_t _3083;
  void* _3084;
  uint64_t _3085;
  void* _3086;
  void* _3086__PHI_TEMPORARY;
  void* _3087;
  uint64_t _3088;
  void* _3089;
  void* _3090;
  uint64_t _3091;
  void* _3092;
  uint64_t _3093;
  void* _3094;
  uint8_t _3095;
  uint8_t _3096;
  uint8_t _3097;
  uint32_t _3098;
  uint64_t _3099;
  uint64_t _3099__PHI_TEMPORARY;
  uint32_t _3100;
  uint32_t _3100__PHI_TEMPORARY;
  uint64_t _3101;
  uint64_t _3102;
  void* _3103;
  uint8_t _3104;
  uint32_t _3105;
  uint64_t _3106;
  uint64_t _3107;
  uint32_t _3108;
  uint64_t _3109;
  uint32_t _3110;
  uint32_t _3110__PHI_TEMPORARY;
  uint64_t _3111;
  uint64_t _3112;
  uint64_t _3113;
  uint64_t _3114;
  void* _3115;
  uint64_t _3116;
  void* _3117;
  uint64_t _3118;
  void* _3119;
  uint64_t _3120;
  void* _3121;
  uint64_t _3122;
  uint64_t _3123;
  void* _3124;
  void* _3125;
  uint64_t _3126;
  void* _3127;
  uint64_t _3128;
  void* _3129;
  uint8_t _3130;
  uint8_t _3131;
  uint8_t _3132;
  uint32_t _3133;
  uint64_t _3134;
  uint64_t _3134__PHI_TEMPORARY;
  uint32_t _3135;
  uint32_t _3135__PHI_TEMPORARY;
  uint64_t _3136;
  uint64_t _3137;
  void* _3138;
  uint8_t _3139;
  uint32_t _3140;
  uint64_t _3141;
  uint64_t _3142;
  uint32_t _3143;
  uint64_t _3144;
  uint32_t _3145;
  uint32_t _3145__PHI_TEMPORARY;
  uint64_t _3146;
  uint64_t _3147;
  uint64_t _3148;
  uint64_t _3149;
  void* _3150;
  uint64_t _3151;
  void* _3152;
  uint64_t _3153;
  void* _3154;
  uint64_t _3155;
  void* _3156;
  uint64_t _3157;
  uint64_t _3158;
  void* _3159;
  void* _3160;
  uint64_t _3161;
  void* _3162;
  uint64_t _3163;
  void* _3164;
  uint8_t _3165;
  uint8_t _3166;
  uint8_t _3167;
  uint32_t _3168;
  uint64_t _3169;
  uint64_t _3169__PHI_TEMPORARY;
  uint32_t _3170;
  uint32_t _3170__PHI_TEMPORARY;
  uint64_t _3171;
  uint64_t _3172;
  void* _3173;
  uint8_t _3174;
  uint32_t _3175;
  uint64_t _3176;
  uint64_t _3177;
  uint32_t _3178;
  uint64_t _3179;
  uint32_t _3180;
  uint32_t _3180__PHI_TEMPORARY;
  uint64_t _3181;
  uint64_t _3182;
  uint64_t _3183;
  uint64_t _3184;
  void* _3185;
  uint64_t _3186;
  void* _3187;
  uint64_t _3188;
  void* _3189;
  uint64_t _3190;
  void* _3191;
  uint64_t _3192;

  _2979 = ((&((uint8_t*)_2971)[((int64_t)32)]));
  _2980 = *(uint64_t*)_2979;
  _2981 = ((&((uint8_t*)_2971)[((int64_t)40)]));
  if (((_2980 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _3193;
  } else {
    goto _3194;
  }

_3193:
  _2982 = *(void**)_2971;
  _2983 = ((&((uint8_t*)_2982)[((int64_t)16)]));
  _2984 = *(uint64_t*)_2983;
  _2985 = ((&((uint8_t*)_2982)[((int64_t)8)]));
  _2986 = *(uint64_t*)_2985;
  if ((((int64_t)_2986) > ((int64_t)_2984))) {
    goto _3195;
  } else {
    _3003__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3196;
  }

_3195:
  _2987 = *(void**)_2982;
  _2988 = *(uint8_t*)(((&((uint8_t*)_2987)[((int64_t)_2984)])));
  *(uint64_t*)_2983 = (llvm_add_u64(_2984, 1));
  _2989 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2988)), 0);
  _2990 = llvm_sub_u8(32, (llvm_shl_u8(_2989, 3)));
  _2991 = (((uint32_t)(uint8_t)_2988)) << 24;
  if ((((uint8_t)_2990) > ((uint8_t)((uint8_t)16)))) {
    _3003__PHI_TEMPORARY = _2991;   /* for PHI node */
    goto _3196;
  } else {
    _2992__PHI_TEMPORARY = 16;   /* for PHI node */
    _2993__PHI_TEMPORARY = _2991;   /* for PHI node */
    goto _3197;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3197:
  _2992 = _2992__PHI_TEMPORARY;
  _2993 = _2993__PHI_TEMPORARY;
  if (((((int64_t)_2992) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2992) < ((uint64_t)(((uint64_t)(uint8_t)_2990)))))) {
    _3003__PHI_TEMPORARY = _2993;   /* for PHI node */
    goto _3196;
  } else {
    goto _3198;
  }

_3198:
  _2994 = *(uint64_t*)_2983;
  _2995 = *(uint64_t*)_2985;
  if ((((int64_t)_2995) > ((int64_t)_2994))) {
    goto _3199;
  } else {
    _3003__PHI_TEMPORARY = _2993;   /* for PHI node */
    goto _3196;
  }

_3199:
  _2996 = *(void**)_2982;
  _2997 = *(uint8_t*)(((&((uint8_t*)_2996)[((int64_t)_2994)])));
  if ((((int8_t)_2997) > ((int8_t)((uint8_t)-65)))) {
    _3003__PHI_TEMPORARY = _2993;   /* for PHI node */
    goto _3196;
  } else {
    goto _3200;
  }

_3200:
  _2998 = llvm_select_u32((((int64_t)_2994) < ((int64_t)_2995)), (((uint32_t)(uint8_t)_2997)), 0);
  _2999 = *(uint64_t*)_2983;
  *(uint64_t*)_2983 = (llvm_add_u64(_2999, 1));
  _3000 = llvm_neg_u64(_2992);
  _3001 = _2993 | (llvm_select_u32((((int64_t)_2992) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3000) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2998, (((uint32_t)_3000)))))), (llvm_select_u32((((uint64_t)_2992) > ((uint64_t)UINT64_C(31))), 0, (_2998 << (((uint32_t)_2992)))))));
  _3002 = llvm_add_u64(_2992, -8);
  _2992__PHI_TEMPORARY = _3002;   /* for PHI node */
  _2993__PHI_TEMPORARY = _3001;   /* for PHI node */
  goto _3197;

  } while (1); /* end of syntactic loop '' */
_3196:
  _3003 = _3003__PHI_TEMPORARY;
  _3004 = *(uint64_t*)_2979;
  _3005 = *(uint64_t*)_2981;
  _3006 = jsyn_cbe_fshl_i64(_3005, _3004, 32);
  _3007 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3003)), _3005, 32);
  *(uint64_t*)_2979 = _3006;
  *(uint64_t*)_2981 = _3007;
  _3008 = ((&((uint8_t*)_2971)[((int64_t)56)]));
  _3009 = *(uint64_t*)_3008;
  _3010 = ((&((uint8_t*)_2971)[((int64_t)64)]));
  _3011 = *(uint64_t*)_3010;
  _3012 = ((&((uint8_t*)_2971)[((int64_t)72)]));
  _3013 = *(uint64_t*)_3012;
  _3014 = *(void**)_2971;
  _3015 = *(uint64_t*)(((&((uint8_t*)_3014)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2971)[((int64_t)48)]))) = _3009;
  *(uint64_t*)_3008 = _3011;
  *(uint64_t*)_3010 = _3013;
  *(uint64_t*)_3012 = _3015;
  _3016 = *(uint64_t*)_2979;
  if (((_3016 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _3201;
  } else {
    goto _3202;
  }

_3201:
  _3017 = *(void**)_2971;
  _3018 = ((&((uint8_t*)_3017)[((int64_t)16)]));
  _3019 = *(uint64_t*)_3018;
  _3020 = ((&((uint8_t*)_3017)[((int64_t)8)]));
  _3021 = *(uint64_t*)_3020;
  if ((((int64_t)_3021) > ((int64_t)_3019))) {
    goto _3203;
  } else {
    _3038__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3204;
  }

_3203:
  _3022 = *(void**)_3017;
  _3023 = *(uint8_t*)(((&((uint8_t*)_3022)[((int64_t)_3019)])));
  *(uint64_t*)_3018 = (llvm_add_u64(_3019, 1));
  _3024 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3023)), 0);
  _3025 = llvm_sub_u8(32, (llvm_shl_u8(_3024, 3)));
  _3026 = (((uint32_t)(uint8_t)_3023)) << 24;
  if ((((uint8_t)_3025) > ((uint8_t)((uint8_t)16)))) {
    _3038__PHI_TEMPORARY = _3026;   /* for PHI node */
    goto _3204;
  } else {
    _3027__PHI_TEMPORARY = 16;   /* for PHI node */
    _3028__PHI_TEMPORARY = _3026;   /* for PHI node */
    goto _3205;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3205:
  _3027 = _3027__PHI_TEMPORARY;
  _3028 = _3028__PHI_TEMPORARY;
  if (((((int64_t)_3027) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3027) < ((uint64_t)(((uint64_t)(uint8_t)_3025)))))) {
    _3038__PHI_TEMPORARY = _3028;   /* for PHI node */
    goto _3204;
  } else {
    goto _3206;
  }

_3206:
  _3029 = *(uint64_t*)_3018;
  _3030 = *(uint64_t*)_3020;
  if ((((int64_t)_3030) > ((int64_t)_3029))) {
    goto _3207;
  } else {
    _3038__PHI_TEMPORARY = _3028;   /* for PHI node */
    goto _3204;
  }

_3207:
  _3031 = *(void**)_3017;
  _3032 = *(uint8_t*)(((&((uint8_t*)_3031)[((int64_t)_3029)])));
  if ((((int8_t)_3032) > ((int8_t)((uint8_t)-65)))) {
    _3038__PHI_TEMPORARY = _3028;   /* for PHI node */
    goto _3204;
  } else {
    goto _3208;
  }

_3208:
  _3033 = llvm_select_u32((((int64_t)_3029) < ((int64_t)_3030)), (((uint32_t)(uint8_t)_3032)), 0);
  _3034 = *(uint64_t*)_3018;
  *(uint64_t*)_3018 = (llvm_add_u64(_3034, 1));
  _3035 = llvm_neg_u64(_3027);
  _3036 = _3028 | (llvm_select_u32((((int64_t)_3027) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3035) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3033, (((uint32_t)_3035)))))), (llvm_select_u32((((uint64_t)_3027) > ((uint64_t)UINT64_C(31))), 0, (_3033 << (((uint32_t)_3027)))))));
  _3037 = llvm_add_u64(_3027, -8);
  _3027__PHI_TEMPORARY = _3037;   /* for PHI node */
  _3028__PHI_TEMPORARY = _3036;   /* for PHI node */
  goto _3205;

  } while (1); /* end of syntactic loop '' */
_3204:
  _3038 = _3038__PHI_TEMPORARY;
  _3039 = *(uint64_t*)_2979;
  _3040 = *(uint64_t*)_2981;
  _3041 = jsyn_cbe_fshl_i64(_3040, _3039, 32);
  _3042 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3038)), _3040, 32);
  *(uint64_t*)_2979 = _3041;
  *(uint64_t*)_2981 = _3042;
  _3043 = ((&((uint8_t*)_2971)[((int64_t)56)]));
  _3044 = *(uint64_t*)_3043;
  _3045 = ((&((uint8_t*)_2971)[((int64_t)64)]));
  _3046 = *(uint64_t*)_3045;
  _3047 = ((&((uint8_t*)_2971)[((int64_t)72)]));
  _3048 = *(uint64_t*)_3047;
  _3049 = *(void**)_2971;
  _3050 = *(uint64_t*)(((&((uint8_t*)_3049)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2971)[((int64_t)48)]))) = _3044;
  *(uint64_t*)_3043 = _3046;
  *(uint64_t*)_3045 = _3048;
  *(uint64_t*)_3047 = _3050;
  _3051 = *(uint64_t*)_2979;
  if (((_3051 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3209;
  } else {
    goto _3210;
  }

_3209:
  _3052 = *(void**)_2971;
  _3053 = ((&((uint8_t*)_3052)[((int64_t)16)]));
  _3054 = *(uint64_t*)_3053;
  _3055 = ((&((uint8_t*)_3052)[((int64_t)8)]));
  _3056 = *(uint64_t*)_3055;
  if ((((int64_t)_3056) > ((int64_t)_3054))) {
    goto _3211;
  } else {
    _3073__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3212;
  }

_3211:
  _3057 = *(void**)_3052;
  _3058 = *(uint8_t*)(((&((uint8_t*)_3057)[((int64_t)_3054)])));
  *(uint64_t*)_3053 = (llvm_add_u64(_3054, 1));
  _3059 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3058)), 0);
  _3060 = llvm_sub_u8(32, (llvm_shl_u8(_3059, 3)));
  _3061 = (((uint32_t)(uint8_t)_3058)) << 24;
  if ((((uint8_t)_3060) > ((uint8_t)((uint8_t)16)))) {
    _3073__PHI_TEMPORARY = _3061;   /* for PHI node */
    goto _3212;
  } else {
    _3062__PHI_TEMPORARY = 16;   /* for PHI node */
    _3063__PHI_TEMPORARY = _3061;   /* for PHI node */
    goto _3213;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3213:
  _3062 = _3062__PHI_TEMPORARY;
  _3063 = _3063__PHI_TEMPORARY;
  if (((((int64_t)_3062) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3062) < ((uint64_t)(((uint64_t)(uint8_t)_3060)))))) {
    _3073__PHI_TEMPORARY = _3063;   /* for PHI node */
    goto _3212;
  } else {
    goto _3214;
  }

_3214:
  _3064 = *(uint64_t*)_3053;
  _3065 = *(uint64_t*)_3055;
  if ((((int64_t)_3065) > ((int64_t)_3064))) {
    goto _3215;
  } else {
    _3073__PHI_TEMPORARY = _3063;   /* for PHI node */
    goto _3212;
  }

_3215:
  _3066 = *(void**)_3052;
  _3067 = *(uint8_t*)(((&((uint8_t*)_3066)[((int64_t)_3064)])));
  if ((((int8_t)_3067) > ((int8_t)((uint8_t)-65)))) {
    _3073__PHI_TEMPORARY = _3063;   /* for PHI node */
    goto _3212;
  } else {
    goto _3216;
  }

_3216:
  _3068 = llvm_select_u32((((int64_t)_3064) < ((int64_t)_3065)), (((uint32_t)(uint8_t)_3067)), 0);
  _3069 = *(uint64_t*)_3053;
  *(uint64_t*)_3053 = (llvm_add_u64(_3069, 1));
  _3070 = llvm_neg_u64(_3062);
  _3071 = _3063 | (llvm_select_u32((((int64_t)_3062) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3070) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3068, (((uint32_t)_3070)))))), (llvm_select_u32((((uint64_t)_3062) > ((uint64_t)UINT64_C(31))), 0, (_3068 << (((uint32_t)_3062)))))));
  _3072 = llvm_add_u64(_3062, -8);
  _3062__PHI_TEMPORARY = _3072;   /* for PHI node */
  _3063__PHI_TEMPORARY = _3071;   /* for PHI node */
  goto _3213;

  } while (1); /* end of syntactic loop '' */
_3212:
  _3073 = _3073__PHI_TEMPORARY;
  _3074 = *(uint64_t*)_2979;
  _3075 = *(uint64_t*)_2981;
  _3076 = jsyn_cbe_fshl_i64(_3075, _3074, 32);
  _3077 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3073)), _3075, 32);
  *(uint64_t*)_2979 = _3076;
  *(uint64_t*)_2981 = _3077;
  _3078 = ((&((uint8_t*)_2971)[((int64_t)56)]));
  _3079 = *(uint64_t*)_3078;
  _3080 = ((&((uint8_t*)_2971)[((int64_t)64)]));
  _3081 = *(uint64_t*)_3080;
  _3082 = ((&((uint8_t*)_2971)[((int64_t)72)]));
  _3083 = *(uint64_t*)_3082;
  _3084 = *(void**)_2971;
  _3085 = *(uint64_t*)(((&((uint8_t*)_3084)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2971)[((int64_t)48)]))) = _3079;
  *(uint64_t*)_3078 = _3081;
  *(uint64_t*)_3080 = _3083;
  *(uint64_t*)_3082 = _3085;
  julia_emit_20((&_2972), _2970, _2971, 71, 1);
  _3086__PHI_TEMPORARY = (&_2972);   /* for PHI node */
  goto _3217;

_3217:
  _3086 = _3086__PHI_TEMPORARY;
  _3087 = memcpy(_2969, _3086, 32);
  return;
_3210:
  julia_emit_20((&_2973), _2970, _2971, 673, 1);
  _3086__PHI_TEMPORARY = (&_2973);   /* for PHI node */
  goto _3217;

_3202:
  _3088 = *(uint64_t*)_2979;
  if (((_3088 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3218;
  } else {
    goto _3219;
  }

_3218:
  _3089 = *(void**)_2971;
  _3090 = ((&((uint8_t*)_3089)[((int64_t)16)]));
  _3091 = *(uint64_t*)_3090;
  _3092 = ((&((uint8_t*)_3089)[((int64_t)8)]));
  _3093 = *(uint64_t*)_3092;
  if ((((int64_t)_3093) > ((int64_t)_3091))) {
    goto _3220;
  } else {
    _3110__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3221;
  }

_3220:
  _3094 = *(void**)_3089;
  _3095 = *(uint8_t*)(((&((uint8_t*)_3094)[((int64_t)_3091)])));
  *(uint64_t*)_3090 = (llvm_add_u64(_3091, 1));
  _3096 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3095)), 0);
  _3097 = llvm_sub_u8(32, (llvm_shl_u8(_3096, 3)));
  _3098 = (((uint32_t)(uint8_t)_3095)) << 24;
  if ((((uint8_t)_3097) > ((uint8_t)((uint8_t)16)))) {
    _3110__PHI_TEMPORARY = _3098;   /* for PHI node */
    goto _3221;
  } else {
    _3099__PHI_TEMPORARY = 16;   /* for PHI node */
    _3100__PHI_TEMPORARY = _3098;   /* for PHI node */
    goto _3222;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3222:
  _3099 = _3099__PHI_TEMPORARY;
  _3100 = _3100__PHI_TEMPORARY;
  if (((((int64_t)_3099) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3099) < ((uint64_t)(((uint64_t)(uint8_t)_3097)))))) {
    _3110__PHI_TEMPORARY = _3100;   /* for PHI node */
    goto _3221;
  } else {
    goto _3223;
  }

_3223:
  _3101 = *(uint64_t*)_3090;
  _3102 = *(uint64_t*)_3092;
  if ((((int64_t)_3102) > ((int64_t)_3101))) {
    goto _3224;
  } else {
    _3110__PHI_TEMPORARY = _3100;   /* for PHI node */
    goto _3221;
  }

_3224:
  _3103 = *(void**)_3089;
  _3104 = *(uint8_t*)(((&((uint8_t*)_3103)[((int64_t)_3101)])));
  if ((((int8_t)_3104) > ((int8_t)((uint8_t)-65)))) {
    _3110__PHI_TEMPORARY = _3100;   /* for PHI node */
    goto _3221;
  } else {
    goto _3225;
  }

_3225:
  _3105 = llvm_select_u32((((int64_t)_3101) < ((int64_t)_3102)), (((uint32_t)(uint8_t)_3104)), 0);
  _3106 = *(uint64_t*)_3090;
  *(uint64_t*)_3090 = (llvm_add_u64(_3106, 1));
  _3107 = llvm_neg_u64(_3099);
  _3108 = _3100 | (llvm_select_u32((((int64_t)_3099) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3107) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3105, (((uint32_t)_3107)))))), (llvm_select_u32((((uint64_t)_3099) > ((uint64_t)UINT64_C(31))), 0, (_3105 << (((uint32_t)_3099)))))));
  _3109 = llvm_add_u64(_3099, -8);
  _3099__PHI_TEMPORARY = _3109;   /* for PHI node */
  _3100__PHI_TEMPORARY = _3108;   /* for PHI node */
  goto _3222;

  } while (1); /* end of syntactic loop '' */
_3221:
  _3110 = _3110__PHI_TEMPORARY;
  _3111 = *(uint64_t*)_2979;
  _3112 = *(uint64_t*)_2981;
  _3113 = jsyn_cbe_fshl_i64(_3112, _3111, 32);
  _3114 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3110)), _3112, 32);
  *(uint64_t*)_2979 = _3113;
  *(uint64_t*)_2981 = _3114;
  _3115 = ((&((uint8_t*)_2971)[((int64_t)56)]));
  _3116 = *(uint64_t*)_3115;
  _3117 = ((&((uint8_t*)_2971)[((int64_t)64)]));
  _3118 = *(uint64_t*)_3117;
  _3119 = ((&((uint8_t*)_2971)[((int64_t)72)]));
  _3120 = *(uint64_t*)_3119;
  _3121 = *(void**)_2971;
  _3122 = *(uint64_t*)(((&((uint8_t*)_3121)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2971)[((int64_t)48)]))) = _3116;
  *(uint64_t*)_3115 = _3118;
  *(uint64_t*)_3117 = _3120;
  *(uint64_t*)_3119 = _3122;
  julia_emit_20((&_2974), _2970, _2971, 71, 1);
  _3086__PHI_TEMPORARY = (&_2974);   /* for PHI node */
  goto _3217;

_3219:
  julia_emit_20((&_2975), _2970, _2971, 672, 1);
  _3086__PHI_TEMPORARY = (&_2975);   /* for PHI node */
  goto _3217;

_3194:
  _3123 = *(uint64_t*)_2979;
  if (((_3123 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3226;
  } else {
    goto _3227;
  }

_3226:
  _3124 = *(void**)_2971;
  _3125 = ((&((uint8_t*)_3124)[((int64_t)16)]));
  _3126 = *(uint64_t*)_3125;
  _3127 = ((&((uint8_t*)_3124)[((int64_t)8)]));
  _3128 = *(uint64_t*)_3127;
  if ((((int64_t)_3128) > ((int64_t)_3126))) {
    goto _3228;
  } else {
    _3145__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3229;
  }

_3228:
  _3129 = *(void**)_3124;
  _3130 = *(uint8_t*)(((&((uint8_t*)_3129)[((int64_t)_3126)])));
  *(uint64_t*)_3125 = (llvm_add_u64(_3126, 1));
  _3131 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3130)), 0);
  _3132 = llvm_sub_u8(32, (llvm_shl_u8(_3131, 3)));
  _3133 = (((uint32_t)(uint8_t)_3130)) << 24;
  if ((((uint8_t)_3132) > ((uint8_t)((uint8_t)16)))) {
    _3145__PHI_TEMPORARY = _3133;   /* for PHI node */
    goto _3229;
  } else {
    _3134__PHI_TEMPORARY = 16;   /* for PHI node */
    _3135__PHI_TEMPORARY = _3133;   /* for PHI node */
    goto _3230;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3230:
  _3134 = _3134__PHI_TEMPORARY;
  _3135 = _3135__PHI_TEMPORARY;
  if (((((int64_t)_3134) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3134) < ((uint64_t)(((uint64_t)(uint8_t)_3132)))))) {
    _3145__PHI_TEMPORARY = _3135;   /* for PHI node */
    goto _3229;
  } else {
    goto _3231;
  }

_3231:
  _3136 = *(uint64_t*)_3125;
  _3137 = *(uint64_t*)_3127;
  if ((((int64_t)_3137) > ((int64_t)_3136))) {
    goto _3232;
  } else {
    _3145__PHI_TEMPORARY = _3135;   /* for PHI node */
    goto _3229;
  }

_3232:
  _3138 = *(void**)_3124;
  _3139 = *(uint8_t*)(((&((uint8_t*)_3138)[((int64_t)_3136)])));
  if ((((int8_t)_3139) > ((int8_t)((uint8_t)-65)))) {
    _3145__PHI_TEMPORARY = _3135;   /* for PHI node */
    goto _3229;
  } else {
    goto _3233;
  }

_3233:
  _3140 = llvm_select_u32((((int64_t)_3136) < ((int64_t)_3137)), (((uint32_t)(uint8_t)_3139)), 0);
  _3141 = *(uint64_t*)_3125;
  *(uint64_t*)_3125 = (llvm_add_u64(_3141, 1));
  _3142 = llvm_neg_u64(_3134);
  _3143 = _3135 | (llvm_select_u32((((int64_t)_3134) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3142) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3140, (((uint32_t)_3142)))))), (llvm_select_u32((((uint64_t)_3134) > ((uint64_t)UINT64_C(31))), 0, (_3140 << (((uint32_t)_3134)))))));
  _3144 = llvm_add_u64(_3134, -8);
  _3134__PHI_TEMPORARY = _3144;   /* for PHI node */
  _3135__PHI_TEMPORARY = _3143;   /* for PHI node */
  goto _3230;

  } while (1); /* end of syntactic loop '' */
_3229:
  _3145 = _3145__PHI_TEMPORARY;
  _3146 = *(uint64_t*)_2979;
  _3147 = *(uint64_t*)_2981;
  _3148 = jsyn_cbe_fshl_i64(_3147, _3146, 32);
  _3149 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3145)), _3147, 32);
  *(uint64_t*)_2979 = _3148;
  *(uint64_t*)_2981 = _3149;
  _3150 = ((&((uint8_t*)_2971)[((int64_t)56)]));
  _3151 = *(uint64_t*)_3150;
  _3152 = ((&((uint8_t*)_2971)[((int64_t)64)]));
  _3153 = *(uint64_t*)_3152;
  _3154 = ((&((uint8_t*)_2971)[((int64_t)72)]));
  _3155 = *(uint64_t*)_3154;
  _3156 = *(void**)_2971;
  _3157 = *(uint64_t*)(((&((uint8_t*)_3156)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2971)[((int64_t)48)]))) = _3151;
  *(uint64_t*)_3150 = _3153;
  *(uint64_t*)_3152 = _3155;
  *(uint64_t*)_3154 = _3157;
  julia_emit_20((&_2976), _2970, _2971, 240, 1);
  _3086__PHI_TEMPORARY = (&_2976);   /* for PHI node */
  goto _3217;

_3227:
  _3158 = *(uint64_t*)_2979;
  if (((_3158 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _3234;
  } else {
    goto _3235;
  }

_3234:
  _3159 = *(void**)_2971;
  _3160 = ((&((uint8_t*)_3159)[((int64_t)16)]));
  _3161 = *(uint64_t*)_3160;
  _3162 = ((&((uint8_t*)_3159)[((int64_t)8)]));
  _3163 = *(uint64_t*)_3162;
  if ((((int64_t)_3163) > ((int64_t)_3161))) {
    goto _3236;
  } else {
    _3180__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3237;
  }

_3236:
  _3164 = *(void**)_3159;
  _3165 = *(uint8_t*)(((&((uint8_t*)_3164)[((int64_t)_3161)])));
  *(uint64_t*)_3160 = (llvm_add_u64(_3161, 1));
  _3166 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3165)), 0);
  _3167 = llvm_sub_u8(32, (llvm_shl_u8(_3166, 3)));
  _3168 = (((uint32_t)(uint8_t)_3165)) << 24;
  if ((((uint8_t)_3167) > ((uint8_t)((uint8_t)16)))) {
    _3180__PHI_TEMPORARY = _3168;   /* for PHI node */
    goto _3237;
  } else {
    _3169__PHI_TEMPORARY = 16;   /* for PHI node */
    _3170__PHI_TEMPORARY = _3168;   /* for PHI node */
    goto _3238;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3238:
  _3169 = _3169__PHI_TEMPORARY;
  _3170 = _3170__PHI_TEMPORARY;
  if (((((int64_t)_3169) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3169) < ((uint64_t)(((uint64_t)(uint8_t)_3167)))))) {
    _3180__PHI_TEMPORARY = _3170;   /* for PHI node */
    goto _3237;
  } else {
    goto _3239;
  }

_3239:
  _3171 = *(uint64_t*)_3160;
  _3172 = *(uint64_t*)_3162;
  if ((((int64_t)_3172) > ((int64_t)_3171))) {
    goto _3240;
  } else {
    _3180__PHI_TEMPORARY = _3170;   /* for PHI node */
    goto _3237;
  }

_3240:
  _3173 = *(void**)_3159;
  _3174 = *(uint8_t*)(((&((uint8_t*)_3173)[((int64_t)_3171)])));
  if ((((int8_t)_3174) > ((int8_t)((uint8_t)-65)))) {
    _3180__PHI_TEMPORARY = _3170;   /* for PHI node */
    goto _3237;
  } else {
    goto _3241;
  }

_3241:
  _3175 = llvm_select_u32((((int64_t)_3171) < ((int64_t)_3172)), (((uint32_t)(uint8_t)_3174)), 0);
  _3176 = *(uint64_t*)_3160;
  *(uint64_t*)_3160 = (llvm_add_u64(_3176, 1));
  _3177 = llvm_neg_u64(_3169);
  _3178 = _3170 | (llvm_select_u32((((int64_t)_3169) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3177) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3175, (((uint32_t)_3177)))))), (llvm_select_u32((((uint64_t)_3169) > ((uint64_t)UINT64_C(31))), 0, (_3175 << (((uint32_t)_3169)))))));
  _3179 = llvm_add_u64(_3169, -8);
  _3169__PHI_TEMPORARY = _3179;   /* for PHI node */
  _3170__PHI_TEMPORARY = _3178;   /* for PHI node */
  goto _3238;

  } while (1); /* end of syntactic loop '' */
_3237:
  _3180 = _3180__PHI_TEMPORARY;
  _3181 = *(uint64_t*)_2979;
  _3182 = *(uint64_t*)_2981;
  _3183 = jsyn_cbe_fshl_i64(_3182, _3181, 32);
  _3184 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3180)), _3182, 32);
  *(uint64_t*)_2979 = _3183;
  *(uint64_t*)_2981 = _3184;
  _3185 = ((&((uint8_t*)_2971)[((int64_t)56)]));
  _3186 = *(uint64_t*)_3185;
  _3187 = ((&((uint8_t*)_2971)[((int64_t)64)]));
  _3188 = *(uint64_t*)_3187;
  _3189 = ((&((uint8_t*)_2971)[((int64_t)72)]));
  _3190 = *(uint64_t*)_3189;
  _3191 = *(void**)_2971;
  _3192 = *(uint64_t*)(((&((uint8_t*)_3191)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2971)[((int64_t)48)]))) = _3186;
  *(uint64_t*)_3185 = _3188;
  *(uint64_t*)_3187 = _3190;
  *(uint64_t*)_3189 = _3192;
  julia_emit_20((&_2977), _2970, _2971, 237, 1);
  _3086__PHI_TEMPORARY = (&_2977);   /* for PHI node */
  goto _3217;

_3235:
  julia_emit_20((&_2978), _2970, _2971, 238, 1);
  _3086__PHI_TEMPORARY = (&_2978);   /* for PHI node */
  goto _3217;

}


static void julia_lex_less_36(void* _3242, void* _3243, void* _3244) {
  struct l_array_4_uint64_t _3245;    /* Address-exposed local */
  struct l_array_4_uint64_t _3246;    /* Address-exposed local */
  struct l_array_4_uint64_t _3247;    /* Address-exposed local */
  struct l_array_4_uint64_t _3248;    /* Address-exposed local */
  struct l_array_4_uint64_t _3249;    /* Address-exposed local */
  struct l_array_4_uint64_t _3250;    /* Address-exposed local */
  struct l_array_4_uint64_t _3251;    /* Address-exposed local */
  struct l_array_4_uint64_t _3252;    /* Address-exposed local */
  struct l_array_4_uint64_t _3253;    /* Address-exposed local */
  struct l_array_4_uint64_t _3254;    /* Address-exposed local */
  void* _3255;
  uint64_t _3256;
  void* _3257;
  void* _3258;
  void* _3259;
  uint64_t _3260;
  void* _3261;
  uint64_t _3262;
  void* _3263;
  uint8_t _3264;
  uint8_t _3265;
  uint8_t _3266;
  uint32_t _3267;
  uint64_t _3268;
  uint64_t _3268__PHI_TEMPORARY;
  uint32_t _3269;
  uint32_t _3269__PHI_TEMPORARY;
  uint64_t _3270;
  uint64_t _3271;
  void* _3272;
  uint8_t _3273;
  uint32_t _3274;
  uint64_t _3275;
  uint64_t _3276;
  uint32_t _3277;
  uint64_t _3278;
  uint32_t _3279;
  uint32_t _3279__PHI_TEMPORARY;
  uint64_t _3280;
  uint64_t _3281;
  uint64_t _3282;
  uint64_t _3283;
  void* _3284;
  uint64_t _3285;
  void* _3286;
  uint64_t _3287;
  void* _3288;
  uint64_t _3289;
  void* _3290;
  uint64_t _3291;
  uint64_t _3292;
  void* _3293;
  void* _3294;
  uint64_t _3295;
  void* _3296;
  uint64_t _3297;
  void* _3298;
  uint8_t _3299;
  uint8_t _3300;
  uint8_t _3301;
  uint32_t _3302;
  uint64_t _3303;
  uint64_t _3303__PHI_TEMPORARY;
  uint32_t _3304;
  uint32_t _3304__PHI_TEMPORARY;
  uint64_t _3305;
  uint64_t _3306;
  void* _3307;
  uint8_t _3308;
  uint32_t _3309;
  uint64_t _3310;
  uint64_t _3311;
  uint32_t _3312;
  uint64_t _3313;
  uint32_t _3314;
  uint32_t _3314__PHI_TEMPORARY;
  uint64_t _3315;
  uint64_t _3316;
  uint64_t _3317;
  uint64_t _3318;
  void* _3319;
  uint64_t _3320;
  void* _3321;
  uint64_t _3322;
  void* _3323;
  uint64_t _3324;
  void* _3325;
  uint64_t _3326;
  void* _3327;
  void* _3327__PHI_TEMPORARY;
  void* _3328;
  uint64_t _3329;
  void* _3330;
  void* _3331;
  uint64_t _3332;
  void* _3333;
  uint64_t _3334;
  void* _3335;
  uint8_t _3336;
  uint8_t _3337;
  uint8_t _3338;
  uint32_t _3339;
  uint64_t _3340;
  uint64_t _3340__PHI_TEMPORARY;
  uint32_t _3341;
  uint32_t _3341__PHI_TEMPORARY;
  uint64_t _3342;
  uint64_t _3343;
  void* _3344;
  uint8_t _3345;
  uint32_t _3346;
  uint64_t _3347;
  uint64_t _3348;
  uint32_t _3349;
  uint64_t _3350;
  uint32_t _3351;
  uint32_t _3351__PHI_TEMPORARY;
  uint64_t _3352;
  uint64_t _3353;
  uint64_t _3354;
  uint64_t _3355;
  void* _3356;
  uint64_t _3357;
  void* _3358;
  uint64_t _3359;
  void* _3360;
  uint64_t _3361;
  void* _3362;
  uint64_t _3363;
  uint64_t _3364;
  void* _3365;
  void* _3366;
  uint64_t _3367;
  void* _3368;
  uint64_t _3369;
  void* _3370;
  uint8_t _3371;
  uint8_t _3372;
  uint8_t _3373;
  uint32_t _3374;
  uint64_t _3375;
  uint64_t _3375__PHI_TEMPORARY;
  uint32_t _3376;
  uint32_t _3376__PHI_TEMPORARY;
  uint64_t _3377;
  uint64_t _3378;
  void* _3379;
  uint8_t _3380;
  uint32_t _3381;
  uint64_t _3382;
  uint64_t _3383;
  uint32_t _3384;
  uint64_t _3385;
  uint32_t _3386;
  uint32_t _3386__PHI_TEMPORARY;
  uint64_t _3387;
  uint64_t _3388;
  uint64_t _3389;
  uint64_t _3390;
  void* _3391;
  uint64_t _3392;
  void* _3393;
  uint64_t _3394;
  void* _3395;
  uint64_t _3396;
  void* _3397;
  uint64_t _3398;
  uint64_t _3399;
  void* _3400;
  void* _3401;
  uint64_t _3402;
  void* _3403;
  uint64_t _3404;
  void* _3405;
  uint8_t _3406;
  uint8_t _3407;
  uint8_t _3408;
  uint32_t _3409;
  uint64_t _3410;
  uint64_t _3410__PHI_TEMPORARY;
  uint32_t _3411;
  uint32_t _3411__PHI_TEMPORARY;
  uint64_t _3412;
  uint64_t _3413;
  void* _3414;
  uint8_t _3415;
  uint32_t _3416;
  uint64_t _3417;
  uint64_t _3418;
  uint32_t _3419;
  uint64_t _3420;
  uint32_t _3421;
  uint32_t _3421__PHI_TEMPORARY;
  uint64_t _3422;
  uint64_t _3423;
  uint64_t _3424;
  uint64_t _3425;
  void* _3426;
  uint64_t _3427;
  void* _3428;
  uint64_t _3429;
  void* _3430;
  uint64_t _3431;
  void* _3432;
  uint64_t _3433;
  uint64_t _3434;
  uint64_t _3435;
  void* _3436;
  void* _3437;
  uint64_t _3438;
  void* _3439;
  uint64_t _3440;
  void* _3441;
  uint8_t _3442;
  uint8_t _3443;
  uint8_t _3444;
  uint32_t _3445;
  uint64_t _3446;
  uint64_t _3446__PHI_TEMPORARY;
  uint32_t _3447;
  uint32_t _3447__PHI_TEMPORARY;
  uint64_t _3448;
  uint64_t _3449;
  void* _3450;
  uint8_t _3451;
  uint32_t _3452;
  uint64_t _3453;
  uint64_t _3454;
  uint32_t _3455;
  uint64_t _3456;
  uint32_t _3457;
  uint32_t _3457__PHI_TEMPORARY;
  uint64_t _3458;
  uint64_t _3459;
  uint64_t _3460;
  uint64_t _3461;
  void* _3462;
  void* _3463;
  uint64_t _3464;
  void* _3465;
  uint64_t _3466;
  void* _3467;
  uint64_t _3468;
  void* _3469;
  uint64_t _3470;
  void* _3471;
  void* _3472;
  uint64_t _3473;
  void* _3474;
  uint64_t _3475;
  void* _3476;
  uint8_t _3477;
  uint8_t _3478;
  uint8_t _3479;
  uint32_t _3480;
  uint64_t _3481;
  uint64_t _3481__PHI_TEMPORARY;
  uint32_t _3482;
  uint32_t _3482__PHI_TEMPORARY;
  uint64_t _3483;
  uint64_t _3484;
  void* _3485;
  uint8_t _3486;
  uint32_t _3487;
  uint64_t _3488;
  uint64_t _3489;
  uint32_t _3490;
  uint64_t _3491;
  uint32_t _3492;
  uint32_t _3492__PHI_TEMPORARY;
  uint64_t _3493;
  uint64_t _3494;
  uint64_t _3495;
  uint64_t _3496;
  uint64_t _3497;
  uint64_t _3498;
  uint64_t _3499;
  void* _3500;
  uint64_t _3501;
  uint64_t _3502;
  void* _3503;
  void* _3504;
  uint64_t _3505;
  void* _3506;
  uint64_t _3507;
  void* _3508;
  uint8_t _3509;
  uint8_t _3510;
  uint8_t _3511;
  uint32_t _3512;
  uint64_t _3513;
  uint64_t _3513__PHI_TEMPORARY;
  uint32_t _3514;
  uint32_t _3514__PHI_TEMPORARY;
  uint64_t _3515;
  uint64_t _3516;
  void* _3517;
  uint8_t _3518;
  uint32_t _3519;
  uint64_t _3520;
  uint64_t _3521;
  uint32_t _3522;
  uint64_t _3523;
  uint32_t _3524;
  uint32_t _3524__PHI_TEMPORARY;
  uint64_t _3525;
  uint64_t _3526;
  uint64_t _3527;
  uint64_t _3528;
  uint64_t _3529;
  uint64_t _3530;
  uint64_t _3531;
  void* _3532;
  uint64_t _3533;
  uint64_t _3534;
  void* _3535;
  void* _3536;
  uint64_t _3537;
  void* _3538;
  uint64_t _3539;
  void* _3540;
  uint8_t _3541;
  uint8_t _3542;
  uint8_t _3543;
  uint32_t _3544;
  uint64_t _3545;
  uint64_t _3545__PHI_TEMPORARY;
  uint32_t _3546;
  uint32_t _3546__PHI_TEMPORARY;
  uint64_t _3547;
  uint64_t _3548;
  void* _3549;
  uint8_t _3550;
  uint32_t _3551;
  uint64_t _3552;
  uint64_t _3553;
  uint32_t _3554;
  uint64_t _3555;
  uint32_t _3556;
  uint32_t _3556__PHI_TEMPORARY;
  uint64_t _3557;
  uint64_t _3558;
  uint64_t _3559;
  uint64_t _3560;
  uint64_t _3561;
  uint64_t _3562;
  uint64_t _3563;
  void* _3564;
  uint64_t _3565;
  uint64_t _3566;
  void* _3567;
  void* _3568;
  uint64_t _3569;
  void* _3570;
  uint64_t _3571;
  void* _3572;
  uint8_t _3573;
  uint8_t _3574;
  uint8_t _3575;
  uint32_t _3576;
  uint64_t _3577;
  uint64_t _3577__PHI_TEMPORARY;
  uint32_t _3578;
  uint32_t _3578__PHI_TEMPORARY;
  uint64_t _3579;
  uint64_t _3580;
  void* _3581;
  uint8_t _3582;
  uint32_t _3583;
  uint64_t _3584;
  uint64_t _3585;
  uint32_t _3586;
  uint64_t _3587;
  uint32_t _3588;
  uint32_t _3588__PHI_TEMPORARY;
  uint64_t _3589;
  uint64_t _3590;
  uint64_t _3591;
  uint64_t _3592;
  uint64_t _3593;
  uint64_t _3594;
  uint64_t _3595;
  void* _3596;
  uint64_t _3597;

  _3255 = ((&((uint8_t*)_3244)[((int64_t)32)]));
  _3256 = *(uint64_t*)_3255;
  _3257 = ((&((uint8_t*)_3244)[((int64_t)40)]));
  if (((_3256 & INT64_C(-4294967296)) == UINT64_C(4323455642275676160))) {
    goto _3598;
  } else {
    goto _3599;
  }

_3598:
  _3258 = *(void**)_3244;
  _3259 = ((&((uint8_t*)_3258)[((int64_t)16)]));
  _3260 = *(uint64_t*)_3259;
  _3261 = ((&((uint8_t*)_3258)[((int64_t)8)]));
  _3262 = *(uint64_t*)_3261;
  if ((((int64_t)_3262) > ((int64_t)_3260))) {
    goto _3600;
  } else {
    _3279__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3601;
  }

_3600:
  _3263 = *(void**)_3258;
  _3264 = *(uint8_t*)(((&((uint8_t*)_3263)[((int64_t)_3260)])));
  *(uint64_t*)_3259 = (llvm_add_u64(_3260, 1));
  _3265 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3264)), 0);
  _3266 = llvm_sub_u8(32, (llvm_shl_u8(_3265, 3)));
  _3267 = (((uint32_t)(uint8_t)_3264)) << 24;
  if ((((uint8_t)_3266) > ((uint8_t)((uint8_t)16)))) {
    _3279__PHI_TEMPORARY = _3267;   /* for PHI node */
    goto _3601;
  } else {
    _3268__PHI_TEMPORARY = 16;   /* for PHI node */
    _3269__PHI_TEMPORARY = _3267;   /* for PHI node */
    goto _3602;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3602:
  _3268 = _3268__PHI_TEMPORARY;
  _3269 = _3269__PHI_TEMPORARY;
  if (((((int64_t)_3268) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3268) < ((uint64_t)(((uint64_t)(uint8_t)_3266)))))) {
    _3279__PHI_TEMPORARY = _3269;   /* for PHI node */
    goto _3601;
  } else {
    goto _3603;
  }

_3603:
  _3270 = *(uint64_t*)_3259;
  _3271 = *(uint64_t*)_3261;
  if ((((int64_t)_3271) > ((int64_t)_3270))) {
    goto _3604;
  } else {
    _3279__PHI_TEMPORARY = _3269;   /* for PHI node */
    goto _3601;
  }

_3604:
  _3272 = *(void**)_3258;
  _3273 = *(uint8_t*)(((&((uint8_t*)_3272)[((int64_t)_3270)])));
  if ((((int8_t)_3273) > ((int8_t)((uint8_t)-65)))) {
    _3279__PHI_TEMPORARY = _3269;   /* for PHI node */
    goto _3601;
  } else {
    goto _3605;
  }

_3605:
  _3274 = llvm_select_u32((((int64_t)_3270) < ((int64_t)_3271)), (((uint32_t)(uint8_t)_3273)), 0);
  _3275 = *(uint64_t*)_3259;
  *(uint64_t*)_3259 = (llvm_add_u64(_3275, 1));
  _3276 = llvm_neg_u64(_3268);
  _3277 = _3269 | (llvm_select_u32((((int64_t)_3268) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3276) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3274, (((uint32_t)_3276)))))), (llvm_select_u32((((uint64_t)_3268) > ((uint64_t)UINT64_C(31))), 0, (_3274 << (((uint32_t)_3268)))))));
  _3278 = llvm_add_u64(_3268, -8);
  _3268__PHI_TEMPORARY = _3278;   /* for PHI node */
  _3269__PHI_TEMPORARY = _3277;   /* for PHI node */
  goto _3602;

  } while (1); /* end of syntactic loop '' */
_3601:
  _3279 = _3279__PHI_TEMPORARY;
  _3280 = *(uint64_t*)_3255;
  _3281 = *(uint64_t*)_3257;
  _3282 = jsyn_cbe_fshl_i64(_3281, _3280, 32);
  _3283 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3279)), _3281, 32);
  *(uint64_t*)_3255 = _3282;
  *(uint64_t*)_3257 = _3283;
  _3284 = ((&((uint8_t*)_3244)[((int64_t)56)]));
  _3285 = *(uint64_t*)_3284;
  _3286 = ((&((uint8_t*)_3244)[((int64_t)64)]));
  _3287 = *(uint64_t*)_3286;
  _3288 = ((&((uint8_t*)_3244)[((int64_t)72)]));
  _3289 = *(uint64_t*)_3288;
  _3290 = *(void**)_3244;
  _3291 = *(uint64_t*)(((&((uint8_t*)_3290)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3244)[((int64_t)48)]))) = _3285;
  *(uint64_t*)_3284 = _3287;
  *(uint64_t*)_3286 = _3289;
  *(uint64_t*)_3288 = _3291;
  _3292 = *(uint64_t*)_3255;
  if (((_3292 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3606;
  } else {
    goto _3607;
  }

_3606:
  _3293 = *(void**)_3244;
  _3294 = ((&((uint8_t*)_3293)[((int64_t)16)]));
  _3295 = *(uint64_t*)_3294;
  _3296 = ((&((uint8_t*)_3293)[((int64_t)8)]));
  _3297 = *(uint64_t*)_3296;
  if ((((int64_t)_3297) > ((int64_t)_3295))) {
    goto _3608;
  } else {
    _3314__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3609;
  }

_3608:
  _3298 = *(void**)_3293;
  _3299 = *(uint8_t*)(((&((uint8_t*)_3298)[((int64_t)_3295)])));
  *(uint64_t*)_3294 = (llvm_add_u64(_3295, 1));
  _3300 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3299)), 0);
  _3301 = llvm_sub_u8(32, (llvm_shl_u8(_3300, 3)));
  _3302 = (((uint32_t)(uint8_t)_3299)) << 24;
  if ((((uint8_t)_3301) > ((uint8_t)((uint8_t)16)))) {
    _3314__PHI_TEMPORARY = _3302;   /* for PHI node */
    goto _3609;
  } else {
    _3303__PHI_TEMPORARY = 16;   /* for PHI node */
    _3304__PHI_TEMPORARY = _3302;   /* for PHI node */
    goto _3610;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3610:
  _3303 = _3303__PHI_TEMPORARY;
  _3304 = _3304__PHI_TEMPORARY;
  if (((((int64_t)_3303) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3303) < ((uint64_t)(((uint64_t)(uint8_t)_3301)))))) {
    _3314__PHI_TEMPORARY = _3304;   /* for PHI node */
    goto _3609;
  } else {
    goto _3611;
  }

_3611:
  _3305 = *(uint64_t*)_3294;
  _3306 = *(uint64_t*)_3296;
  if ((((int64_t)_3306) > ((int64_t)_3305))) {
    goto _3612;
  } else {
    _3314__PHI_TEMPORARY = _3304;   /* for PHI node */
    goto _3609;
  }

_3612:
  _3307 = *(void**)_3293;
  _3308 = *(uint8_t*)(((&((uint8_t*)_3307)[((int64_t)_3305)])));
  if ((((int8_t)_3308) > ((int8_t)((uint8_t)-65)))) {
    _3314__PHI_TEMPORARY = _3304;   /* for PHI node */
    goto _3609;
  } else {
    goto _3613;
  }

_3613:
  _3309 = llvm_select_u32((((int64_t)_3305) < ((int64_t)_3306)), (((uint32_t)(uint8_t)_3308)), 0);
  _3310 = *(uint64_t*)_3294;
  *(uint64_t*)_3294 = (llvm_add_u64(_3310, 1));
  _3311 = llvm_neg_u64(_3303);
  _3312 = _3304 | (llvm_select_u32((((int64_t)_3303) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3311) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3309, (((uint32_t)_3311)))))), (llvm_select_u32((((uint64_t)_3303) > ((uint64_t)UINT64_C(31))), 0, (_3309 << (((uint32_t)_3303)))))));
  _3313 = llvm_add_u64(_3303, -8);
  _3303__PHI_TEMPORARY = _3313;   /* for PHI node */
  _3304__PHI_TEMPORARY = _3312;   /* for PHI node */
  goto _3610;

  } while (1); /* end of syntactic loop '' */
_3609:
  _3314 = _3314__PHI_TEMPORARY;
  _3315 = *(uint64_t*)_3255;
  _3316 = *(uint64_t*)_3257;
  _3317 = jsyn_cbe_fshl_i64(_3316, _3315, 32);
  _3318 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3314)), _3316, 32);
  *(uint64_t*)_3255 = _3317;
  *(uint64_t*)_3257 = _3318;
  _3319 = ((&((uint8_t*)_3244)[((int64_t)56)]));
  _3320 = *(uint64_t*)_3319;
  _3321 = ((&((uint8_t*)_3244)[((int64_t)64)]));
  _3322 = *(uint64_t*)_3321;
  _3323 = ((&((uint8_t*)_3244)[((int64_t)72)]));
  _3324 = *(uint64_t*)_3323;
  _3325 = *(void**)_3244;
  _3326 = *(uint64_t*)(((&((uint8_t*)_3325)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3244)[((int64_t)48)]))) = _3320;
  *(uint64_t*)_3319 = _3322;
  *(uint64_t*)_3321 = _3324;
  *(uint64_t*)_3323 = _3326;
  julia_emit_20((&_3245), _3243, _3244, 71, 1);
  _3327__PHI_TEMPORARY = (&_3245);   /* for PHI node */
  goto _3614;

_3614:
  _3327 = _3327__PHI_TEMPORARY;
  _3328 = memcpy(_3242, _3327, 32);
  return;
_3607:
  julia_emit_20((&_3246), _3243, _3244, 671, 1);
  _3327__PHI_TEMPORARY = (&_3246);   /* for PHI node */
  goto _3614;

_3599:
  _3329 = *(uint64_t*)_3255;
  if (((_3329 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3615;
  } else {
    goto _3616;
  }

_3615:
  _3330 = *(void**)_3244;
  _3331 = ((&((uint8_t*)_3330)[((int64_t)16)]));
  _3332 = *(uint64_t*)_3331;
  _3333 = ((&((uint8_t*)_3330)[((int64_t)8)]));
  _3334 = *(uint64_t*)_3333;
  if ((((int64_t)_3334) > ((int64_t)_3332))) {
    goto _3617;
  } else {
    _3351__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3618;
  }

_3617:
  _3335 = *(void**)_3330;
  _3336 = *(uint8_t*)(((&((uint8_t*)_3335)[((int64_t)_3332)])));
  *(uint64_t*)_3331 = (llvm_add_u64(_3332, 1));
  _3337 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3336)), 0);
  _3338 = llvm_sub_u8(32, (llvm_shl_u8(_3337, 3)));
  _3339 = (((uint32_t)(uint8_t)_3336)) << 24;
  if ((((uint8_t)_3338) > ((uint8_t)((uint8_t)16)))) {
    _3351__PHI_TEMPORARY = _3339;   /* for PHI node */
    goto _3618;
  } else {
    _3340__PHI_TEMPORARY = 16;   /* for PHI node */
    _3341__PHI_TEMPORARY = _3339;   /* for PHI node */
    goto _3619;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3619:
  _3340 = _3340__PHI_TEMPORARY;
  _3341 = _3341__PHI_TEMPORARY;
  if (((((int64_t)_3340) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3340) < ((uint64_t)(((uint64_t)(uint8_t)_3338)))))) {
    _3351__PHI_TEMPORARY = _3341;   /* for PHI node */
    goto _3618;
  } else {
    goto _3620;
  }

_3620:
  _3342 = *(uint64_t*)_3331;
  _3343 = *(uint64_t*)_3333;
  if ((((int64_t)_3343) > ((int64_t)_3342))) {
    goto _3621;
  } else {
    _3351__PHI_TEMPORARY = _3341;   /* for PHI node */
    goto _3618;
  }

_3621:
  _3344 = *(void**)_3330;
  _3345 = *(uint8_t*)(((&((uint8_t*)_3344)[((int64_t)_3342)])));
  if ((((int8_t)_3345) > ((int8_t)((uint8_t)-65)))) {
    _3351__PHI_TEMPORARY = _3341;   /* for PHI node */
    goto _3618;
  } else {
    goto _3622;
  }

_3622:
  _3346 = llvm_select_u32((((int64_t)_3342) < ((int64_t)_3343)), (((uint32_t)(uint8_t)_3345)), 0);
  _3347 = *(uint64_t*)_3331;
  *(uint64_t*)_3331 = (llvm_add_u64(_3347, 1));
  _3348 = llvm_neg_u64(_3340);
  _3349 = _3341 | (llvm_select_u32((((int64_t)_3340) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3348) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3346, (((uint32_t)_3348)))))), (llvm_select_u32((((uint64_t)_3340) > ((uint64_t)UINT64_C(31))), 0, (_3346 << (((uint32_t)_3340)))))));
  _3350 = llvm_add_u64(_3340, -8);
  _3340__PHI_TEMPORARY = _3350;   /* for PHI node */
  _3341__PHI_TEMPORARY = _3349;   /* for PHI node */
  goto _3619;

  } while (1); /* end of syntactic loop '' */
_3618:
  _3351 = _3351__PHI_TEMPORARY;
  _3352 = *(uint64_t*)_3255;
  _3353 = *(uint64_t*)_3257;
  _3354 = jsyn_cbe_fshl_i64(_3353, _3352, 32);
  _3355 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3351)), _3353, 32);
  *(uint64_t*)_3255 = _3354;
  *(uint64_t*)_3257 = _3355;
  _3356 = ((&((uint8_t*)_3244)[((int64_t)56)]));
  _3357 = *(uint64_t*)_3356;
  _3358 = ((&((uint8_t*)_3244)[((int64_t)64)]));
  _3359 = *(uint64_t*)_3358;
  _3360 = ((&((uint8_t*)_3244)[((int64_t)72)]));
  _3361 = *(uint64_t*)_3360;
  _3362 = *(void**)_3244;
  _3363 = *(uint64_t*)(((&((uint8_t*)_3362)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3244)[((int64_t)48)]))) = _3357;
  *(uint64_t*)_3356 = _3359;
  *(uint64_t*)_3358 = _3361;
  *(uint64_t*)_3360 = _3363;
  julia_emit_20((&_3247), _3243, _3244, 242, 1);
  _3327__PHI_TEMPORARY = (&_3247);   /* for PHI node */
  goto _3614;

_3616:
  _3364 = *(uint64_t*)_3255;
  if (((_3364 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _3623;
  } else {
    goto _3624;
  }

_3623:
  _3365 = *(void**)_3244;
  _3366 = ((&((uint8_t*)_3365)[((int64_t)16)]));
  _3367 = *(uint64_t*)_3366;
  _3368 = ((&((uint8_t*)_3365)[((int64_t)8)]));
  _3369 = *(uint64_t*)_3368;
  if ((((int64_t)_3369) > ((int64_t)_3367))) {
    goto _3625;
  } else {
    _3386__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3626;
  }

_3625:
  _3370 = *(void**)_3365;
  _3371 = *(uint8_t*)(((&((uint8_t*)_3370)[((int64_t)_3367)])));
  *(uint64_t*)_3366 = (llvm_add_u64(_3367, 1));
  _3372 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3371)), 0);
  _3373 = llvm_sub_u8(32, (llvm_shl_u8(_3372, 3)));
  _3374 = (((uint32_t)(uint8_t)_3371)) << 24;
  if ((((uint8_t)_3373) > ((uint8_t)((uint8_t)16)))) {
    _3386__PHI_TEMPORARY = _3374;   /* for PHI node */
    goto _3626;
  } else {
    _3375__PHI_TEMPORARY = 16;   /* for PHI node */
    _3376__PHI_TEMPORARY = _3374;   /* for PHI node */
    goto _3627;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3627:
  _3375 = _3375__PHI_TEMPORARY;
  _3376 = _3376__PHI_TEMPORARY;
  if (((((int64_t)_3375) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3375) < ((uint64_t)(((uint64_t)(uint8_t)_3373)))))) {
    _3386__PHI_TEMPORARY = _3376;   /* for PHI node */
    goto _3626;
  } else {
    goto _3628;
  }

_3628:
  _3377 = *(uint64_t*)_3366;
  _3378 = *(uint64_t*)_3368;
  if ((((int64_t)_3378) > ((int64_t)_3377))) {
    goto _3629;
  } else {
    _3386__PHI_TEMPORARY = _3376;   /* for PHI node */
    goto _3626;
  }

_3629:
  _3379 = *(void**)_3365;
  _3380 = *(uint8_t*)(((&((uint8_t*)_3379)[((int64_t)_3377)])));
  if ((((int8_t)_3380) > ((int8_t)((uint8_t)-65)))) {
    _3386__PHI_TEMPORARY = _3376;   /* for PHI node */
    goto _3626;
  } else {
    goto _3630;
  }

_3630:
  _3381 = llvm_select_u32((((int64_t)_3377) < ((int64_t)_3378)), (((uint32_t)(uint8_t)_3380)), 0);
  _3382 = *(uint64_t*)_3366;
  *(uint64_t*)_3366 = (llvm_add_u64(_3382, 1));
  _3383 = llvm_neg_u64(_3375);
  _3384 = _3376 | (llvm_select_u32((((int64_t)_3375) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3383) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3381, (((uint32_t)_3383)))))), (llvm_select_u32((((uint64_t)_3375) > ((uint64_t)UINT64_C(31))), 0, (_3381 << (((uint32_t)_3375)))))));
  _3385 = llvm_add_u64(_3375, -8);
  _3375__PHI_TEMPORARY = _3385;   /* for PHI node */
  _3376__PHI_TEMPORARY = _3384;   /* for PHI node */
  goto _3627;

  } while (1); /* end of syntactic loop '' */
_3626:
  _3386 = _3386__PHI_TEMPORARY;
  _3387 = *(uint64_t*)_3255;
  _3388 = *(uint64_t*)_3257;
  _3389 = jsyn_cbe_fshl_i64(_3388, _3387, 32);
  _3390 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3386)), _3388, 32);
  *(uint64_t*)_3255 = _3389;
  *(uint64_t*)_3257 = _3390;
  _3391 = ((&((uint8_t*)_3244)[((int64_t)56)]));
  _3392 = *(uint64_t*)_3391;
  _3393 = ((&((uint8_t*)_3244)[((int64_t)64)]));
  _3394 = *(uint64_t*)_3393;
  _3395 = ((&((uint8_t*)_3244)[((int64_t)72)]));
  _3396 = *(uint64_t*)_3395;
  _3397 = *(void**)_3244;
  _3398 = *(uint64_t*)(((&((uint8_t*)_3397)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3244)[((int64_t)48)]))) = _3392;
  *(uint64_t*)_3391 = _3394;
  *(uint64_t*)_3393 = _3396;
  *(uint64_t*)_3395 = _3398;
  julia_emit_20((&_3248), _3243, _3244, 236, 1);
  _3327__PHI_TEMPORARY = (&_3248);   /* for PHI node */
  goto _3614;

_3624:
  _3399 = *(uint64_t*)_3255;
  if (((_3399 & INT64_C(-4294967296)) == UINT64_C(8935141660703064064))) {
    goto _3631;
  } else {
    goto _3632;
  }

_3631:
  _3400 = *(void**)_3244;
  _3401 = ((&((uint8_t*)_3400)[((int64_t)16)]));
  _3402 = *(uint64_t*)_3401;
  _3403 = ((&((uint8_t*)_3400)[((int64_t)8)]));
  _3404 = *(uint64_t*)_3403;
  if ((((int64_t)_3404) > ((int64_t)_3402))) {
    goto _3633;
  } else {
    _3421__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3634;
  }

_3633:
  _3405 = *(void**)_3400;
  _3406 = *(uint8_t*)(((&((uint8_t*)_3405)[((int64_t)_3402)])));
  *(uint64_t*)_3401 = (llvm_add_u64(_3402, 1));
  _3407 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3406)), 0);
  _3408 = llvm_sub_u8(32, (llvm_shl_u8(_3407, 3)));
  _3409 = (((uint32_t)(uint8_t)_3406)) << 24;
  if ((((uint8_t)_3408) > ((uint8_t)((uint8_t)16)))) {
    _3421__PHI_TEMPORARY = _3409;   /* for PHI node */
    goto _3634;
  } else {
    _3410__PHI_TEMPORARY = 16;   /* for PHI node */
    _3411__PHI_TEMPORARY = _3409;   /* for PHI node */
    goto _3635;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3635:
  _3410 = _3410__PHI_TEMPORARY;
  _3411 = _3411__PHI_TEMPORARY;
  if (((((int64_t)_3410) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3410) < ((uint64_t)(((uint64_t)(uint8_t)_3408)))))) {
    _3421__PHI_TEMPORARY = _3411;   /* for PHI node */
    goto _3634;
  } else {
    goto _3636;
  }

_3636:
  _3412 = *(uint64_t*)_3401;
  _3413 = *(uint64_t*)_3403;
  if ((((int64_t)_3413) > ((int64_t)_3412))) {
    goto _3637;
  } else {
    _3421__PHI_TEMPORARY = _3411;   /* for PHI node */
    goto _3634;
  }

_3637:
  _3414 = *(void**)_3400;
  _3415 = *(uint8_t*)(((&((uint8_t*)_3414)[((int64_t)_3412)])));
  if ((((int8_t)_3415) > ((int8_t)((uint8_t)-65)))) {
    _3421__PHI_TEMPORARY = _3411;   /* for PHI node */
    goto _3634;
  } else {
    goto _3638;
  }

_3638:
  _3416 = llvm_select_u32((((int64_t)_3412) < ((int64_t)_3413)), (((uint32_t)(uint8_t)_3415)), 0);
  _3417 = *(uint64_t*)_3401;
  *(uint64_t*)_3401 = (llvm_add_u64(_3417, 1));
  _3418 = llvm_neg_u64(_3410);
  _3419 = _3411 | (llvm_select_u32((((int64_t)_3410) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3418) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3416, (((uint32_t)_3418)))))), (llvm_select_u32((((uint64_t)_3410) > ((uint64_t)UINT64_C(31))), 0, (_3416 << (((uint32_t)_3410)))))));
  _3420 = llvm_add_u64(_3410, -8);
  _3410__PHI_TEMPORARY = _3420;   /* for PHI node */
  _3411__PHI_TEMPORARY = _3419;   /* for PHI node */
  goto _3635;

  } while (1); /* end of syntactic loop '' */
_3634:
  _3421 = _3421__PHI_TEMPORARY;
  _3422 = *(uint64_t*)_3255;
  _3423 = *(uint64_t*)_3257;
  _3424 = jsyn_cbe_fshl_i64(_3423, _3422, 32);
  _3425 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3421)), _3423, 32);
  *(uint64_t*)_3255 = _3424;
  *(uint64_t*)_3257 = _3425;
  _3426 = ((&((uint8_t*)_3244)[((int64_t)56)]));
  _3427 = *(uint64_t*)_3426;
  _3428 = ((&((uint8_t*)_3244)[((int64_t)64)]));
  _3429 = *(uint64_t*)_3428;
  _3430 = ((&((uint8_t*)_3244)[((int64_t)72)]));
  _3431 = *(uint64_t*)_3430;
  _3432 = *(void**)_3244;
  _3433 = *(uint64_t*)(((&((uint8_t*)_3432)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3244)[((int64_t)48)]))) = _3427;
  *(uint64_t*)_3426 = _3429;
  *(uint64_t*)_3428 = _3431;
  *(uint64_t*)_3430 = _3433;
  julia_emit_20((&_3249), _3243, _3244, 524, 1);
  _3327__PHI_TEMPORARY = (&_3249);   /* for PHI node */
  goto _3614;

_3632:
  _3434 = *(uint64_t*)_3255;
  _3435 = *(uint64_t*)_3257;
  if ((llvm_select_bool(((_3434 & INT64_C(-4294967296)) != UINT64_C(3242591731706757120)), 1, ((_3435 & INT64_C(4294967295)) != UINT64_C(754974720))))) {
    goto _3639;
  } else {
    goto _3640;
  }

_3640:
  _3436 = *(void**)_3244;
  _3437 = ((&((uint8_t*)_3436)[((int64_t)16)]));
  _3438 = *(uint64_t*)_3437;
  _3439 = ((&((uint8_t*)_3436)[((int64_t)8)]));
  _3440 = *(uint64_t*)_3439;
  if ((((int64_t)_3440) > ((int64_t)_3438))) {
    goto _3641;
  } else {
    _3457__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3642;
  }

_3641:
  _3441 = *(void**)_3436;
  _3442 = *(uint8_t*)(((&((uint8_t*)_3441)[((int64_t)_3438)])));
  *(uint64_t*)_3437 = (llvm_add_u64(_3438, 1));
  _3443 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3442)), 0);
  _3444 = llvm_sub_u8(32, (llvm_shl_u8(_3443, 3)));
  _3445 = (((uint32_t)(uint8_t)_3442)) << 24;
  if ((((uint8_t)_3444) > ((uint8_t)((uint8_t)16)))) {
    _3457__PHI_TEMPORARY = _3445;   /* for PHI node */
    goto _3642;
  } else {
    _3446__PHI_TEMPORARY = 16;   /* for PHI node */
    _3447__PHI_TEMPORARY = _3445;   /* for PHI node */
    goto _3643;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3643:
  _3446 = _3446__PHI_TEMPORARY;
  _3447 = _3447__PHI_TEMPORARY;
  if (((((int64_t)_3446) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3446) < ((uint64_t)(((uint64_t)(uint8_t)_3444)))))) {
    _3457__PHI_TEMPORARY = _3447;   /* for PHI node */
    goto _3642;
  } else {
    goto _3644;
  }

_3644:
  _3448 = *(uint64_t*)_3437;
  _3449 = *(uint64_t*)_3439;
  if ((((int64_t)_3449) > ((int64_t)_3448))) {
    goto _3645;
  } else {
    _3457__PHI_TEMPORARY = _3447;   /* for PHI node */
    goto _3642;
  }

_3645:
  _3450 = *(void**)_3436;
  _3451 = *(uint8_t*)(((&((uint8_t*)_3450)[((int64_t)_3448)])));
  if ((((int8_t)_3451) > ((int8_t)((uint8_t)-65)))) {
    _3457__PHI_TEMPORARY = _3447;   /* for PHI node */
    goto _3642;
  } else {
    goto _3646;
  }

_3646:
  _3452 = llvm_select_u32((((int64_t)_3448) < ((int64_t)_3449)), (((uint32_t)(uint8_t)_3451)), 0);
  _3453 = *(uint64_t*)_3437;
  *(uint64_t*)_3437 = (llvm_add_u64(_3453, 1));
  _3454 = llvm_neg_u64(_3446);
  _3455 = _3447 | (llvm_select_u32((((int64_t)_3446) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3454) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3452, (((uint32_t)_3454)))))), (llvm_select_u32((((uint64_t)_3446) > ((uint64_t)UINT64_C(31))), 0, (_3452 << (((uint32_t)_3446)))))));
  _3456 = llvm_add_u64(_3446, -8);
  _3446__PHI_TEMPORARY = _3456;   /* for PHI node */
  _3447__PHI_TEMPORARY = _3455;   /* for PHI node */
  goto _3643;

  } while (1); /* end of syntactic loop '' */
_3642:
  _3457 = _3457__PHI_TEMPORARY;
  _3458 = *(uint64_t*)_3255;
  _3459 = *(uint64_t*)_3257;
  _3460 = jsyn_cbe_fshl_i64(_3459, _3458, 32);
  _3461 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3457)), _3459, 32);
  *(uint64_t*)_3255 = _3460;
  *(uint64_t*)_3257 = _3461;
  _3462 = ((&((uint8_t*)_3244)[((int64_t)48)]));
  _3463 = ((&((uint8_t*)_3244)[((int64_t)56)]));
  _3464 = *(uint64_t*)_3463;
  _3465 = ((&((uint8_t*)_3244)[((int64_t)64)]));
  _3466 = *(uint64_t*)_3465;
  _3467 = ((&((uint8_t*)_3244)[((int64_t)72)]));
  _3468 = *(uint64_t*)_3467;
  _3469 = *(void**)_3244;
  _3470 = *(uint64_t*)(((&((uint8_t*)_3469)[((int64_t)16)])));
  *(uint64_t*)_3462 = _3464;
  *(uint64_t*)_3463 = _3466;
  *(uint64_t*)_3465 = _3468;
  *(uint64_t*)_3467 = _3470;
  _3471 = *(void**)_3244;
  _3472 = ((&((uint8_t*)_3471)[((int64_t)16)]));
  _3473 = *(uint64_t*)_3472;
  _3474 = ((&((uint8_t*)_3471)[((int64_t)8)]));
  _3475 = *(uint64_t*)_3474;
  if ((((int64_t)_3475) > ((int64_t)_3473))) {
    goto _3647;
  } else {
    _3492__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3648;
  }

_3647:
  _3476 = *(void**)_3471;
  _3477 = *(uint8_t*)(((&((uint8_t*)_3476)[((int64_t)_3473)])));
  *(uint64_t*)_3472 = (llvm_add_u64(_3473, 1));
  _3478 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3477)), 0);
  _3479 = llvm_sub_u8(32, (llvm_shl_u8(_3478, 3)));
  _3480 = (((uint32_t)(uint8_t)_3477)) << 24;
  if ((((uint8_t)_3479) > ((uint8_t)((uint8_t)16)))) {
    _3492__PHI_TEMPORARY = _3480;   /* for PHI node */
    goto _3648;
  } else {
    _3481__PHI_TEMPORARY = 16;   /* for PHI node */
    _3482__PHI_TEMPORARY = _3480;   /* for PHI node */
    goto _3649;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3649:
  _3481 = _3481__PHI_TEMPORARY;
  _3482 = _3482__PHI_TEMPORARY;
  if (((((int64_t)_3481) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3481) < ((uint64_t)(((uint64_t)(uint8_t)_3479)))))) {
    _3492__PHI_TEMPORARY = _3482;   /* for PHI node */
    goto _3648;
  } else {
    goto _3650;
  }

_3650:
  _3483 = *(uint64_t*)_3472;
  _3484 = *(uint64_t*)_3474;
  if ((((int64_t)_3484) > ((int64_t)_3483))) {
    goto _3651;
  } else {
    _3492__PHI_TEMPORARY = _3482;   /* for PHI node */
    goto _3648;
  }

_3651:
  _3485 = *(void**)_3471;
  _3486 = *(uint8_t*)(((&((uint8_t*)_3485)[((int64_t)_3483)])));
  if ((((int8_t)_3486) > ((int8_t)((uint8_t)-65)))) {
    _3492__PHI_TEMPORARY = _3482;   /* for PHI node */
    goto _3648;
  } else {
    goto _3652;
  }

_3652:
  _3487 = llvm_select_u32((((int64_t)_3483) < ((int64_t)_3484)), (((uint32_t)(uint8_t)_3486)), 0);
  _3488 = *(uint64_t*)_3472;
  *(uint64_t*)_3472 = (llvm_add_u64(_3488, 1));
  _3489 = llvm_neg_u64(_3481);
  _3490 = _3482 | (llvm_select_u32((((int64_t)_3481) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3489) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3487, (((uint32_t)_3489)))))), (llvm_select_u32((((uint64_t)_3481) > ((uint64_t)UINT64_C(31))), 0, (_3487 << (((uint32_t)_3481)))))));
  _3491 = llvm_add_u64(_3481, -8);
  _3481__PHI_TEMPORARY = _3491;   /* for PHI node */
  _3482__PHI_TEMPORARY = _3490;   /* for PHI node */
  goto _3649;

  } while (1); /* end of syntactic loop '' */
_3648:
  _3492 = _3492__PHI_TEMPORARY;
  _3493 = *(uint64_t*)_3255;
  _3494 = *(uint64_t*)_3257;
  _3495 = jsyn_cbe_fshl_i64(_3494, _3493, 32);
  _3496 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3492)), _3494, 32);
  *(uint64_t*)_3255 = _3495;
  *(uint64_t*)_3257 = _3496;
  _3497 = *(uint64_t*)_3463;
  _3498 = *(uint64_t*)_3465;
  _3499 = *(uint64_t*)_3467;
  _3500 = *(void**)_3244;
  _3501 = *(uint64_t*)(((&((uint8_t*)_3500)[((int64_t)16)])));
  *(uint64_t*)_3462 = _3497;
  *(uint64_t*)_3463 = _3498;
  *(uint64_t*)_3465 = _3499;
  *(uint64_t*)_3467 = _3501;
  _3502 = *(uint64_t*)_3255;
  if (((_3502 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _3653;
  } else {
    goto _3654;
  }

_3653:
  _3503 = *(void**)_3244;
  _3504 = ((&((uint8_t*)_3503)[((int64_t)16)]));
  _3505 = *(uint64_t*)_3504;
  _3506 = ((&((uint8_t*)_3503)[((int64_t)8)]));
  _3507 = *(uint64_t*)_3506;
  if ((((int64_t)_3507) > ((int64_t)_3505))) {
    goto _3655;
  } else {
    _3524__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3656;
  }

_3655:
  _3508 = *(void**)_3503;
  _3509 = *(uint8_t*)(((&((uint8_t*)_3508)[((int64_t)_3505)])));
  *(uint64_t*)_3504 = (llvm_add_u64(_3505, 1));
  _3510 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3509)), 0);
  _3511 = llvm_sub_u8(32, (llvm_shl_u8(_3510, 3)));
  _3512 = (((uint32_t)(uint8_t)_3509)) << 24;
  if ((((uint8_t)_3511) > ((uint8_t)((uint8_t)16)))) {
    _3524__PHI_TEMPORARY = _3512;   /* for PHI node */
    goto _3656;
  } else {
    _3513__PHI_TEMPORARY = 16;   /* for PHI node */
    _3514__PHI_TEMPORARY = _3512;   /* for PHI node */
    goto _3657;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3657:
  _3513 = _3513__PHI_TEMPORARY;
  _3514 = _3514__PHI_TEMPORARY;
  if (((((int64_t)_3513) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3513) < ((uint64_t)(((uint64_t)(uint8_t)_3511)))))) {
    _3524__PHI_TEMPORARY = _3514;   /* for PHI node */
    goto _3656;
  } else {
    goto _3658;
  }

_3658:
  _3515 = *(uint64_t*)_3504;
  _3516 = *(uint64_t*)_3506;
  if ((((int64_t)_3516) > ((int64_t)_3515))) {
    goto _3659;
  } else {
    _3524__PHI_TEMPORARY = _3514;   /* for PHI node */
    goto _3656;
  }

_3659:
  _3517 = *(void**)_3503;
  _3518 = *(uint8_t*)(((&((uint8_t*)_3517)[((int64_t)_3515)])));
  if ((((int8_t)_3518) > ((int8_t)((uint8_t)-65)))) {
    _3524__PHI_TEMPORARY = _3514;   /* for PHI node */
    goto _3656;
  } else {
    goto _3660;
  }

_3660:
  _3519 = llvm_select_u32((((int64_t)_3515) < ((int64_t)_3516)), (((uint32_t)(uint8_t)_3518)), 0);
  _3520 = *(uint64_t*)_3504;
  *(uint64_t*)_3504 = (llvm_add_u64(_3520, 1));
  _3521 = llvm_neg_u64(_3513);
  _3522 = _3514 | (llvm_select_u32((((int64_t)_3513) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3521) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3519, (((uint32_t)_3521)))))), (llvm_select_u32((((uint64_t)_3513) > ((uint64_t)UINT64_C(31))), 0, (_3519 << (((uint32_t)_3513)))))));
  _3523 = llvm_add_u64(_3513, -8);
  _3513__PHI_TEMPORARY = _3523;   /* for PHI node */
  _3514__PHI_TEMPORARY = _3522;   /* for PHI node */
  goto _3657;

  } while (1); /* end of syntactic loop '' */
_3656:
  _3524 = _3524__PHI_TEMPORARY;
  _3525 = *(uint64_t*)_3255;
  _3526 = *(uint64_t*)_3257;
  _3527 = jsyn_cbe_fshl_i64(_3526, _3525, 32);
  _3528 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3524)), _3526, 32);
  *(uint64_t*)_3255 = _3527;
  *(uint64_t*)_3257 = _3528;
  _3529 = *(uint64_t*)_3463;
  _3530 = *(uint64_t*)_3465;
  _3531 = *(uint64_t*)_3467;
  _3532 = *(void**)_3244;
  _3533 = *(uint64_t*)(((&((uint8_t*)_3532)[((int64_t)16)])));
  *(uint64_t*)_3462 = _3529;
  *(uint64_t*)_3463 = _3530;
  *(uint64_t*)_3465 = _3531;
  *(uint64_t*)_3467 = _3533;
  julia_emit_20((&_3250), _3243, _3244, 66, 1);
  _3327__PHI_TEMPORARY = (&_3250);   /* for PHI node */
  goto _3614;

_3654:
  _3534 = *(uint64_t*)_3255;
  if (((_3534 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _3661;
  } else {
    goto _3662;
  }

_3661:
  _3535 = *(void**)_3244;
  _3536 = ((&((uint8_t*)_3535)[((int64_t)16)]));
  _3537 = *(uint64_t*)_3536;
  _3538 = ((&((uint8_t*)_3535)[((int64_t)8)]));
  _3539 = *(uint64_t*)_3538;
  if ((((int64_t)_3539) > ((int64_t)_3537))) {
    goto _3663;
  } else {
    _3556__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3664;
  }

_3663:
  _3540 = *(void**)_3535;
  _3541 = *(uint8_t*)(((&((uint8_t*)_3540)[((int64_t)_3537)])));
  *(uint64_t*)_3536 = (llvm_add_u64(_3537, 1));
  _3542 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3541)), 0);
  _3543 = llvm_sub_u8(32, (llvm_shl_u8(_3542, 3)));
  _3544 = (((uint32_t)(uint8_t)_3541)) << 24;
  if ((((uint8_t)_3543) > ((uint8_t)((uint8_t)16)))) {
    _3556__PHI_TEMPORARY = _3544;   /* for PHI node */
    goto _3664;
  } else {
    _3545__PHI_TEMPORARY = 16;   /* for PHI node */
    _3546__PHI_TEMPORARY = _3544;   /* for PHI node */
    goto _3665;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3665:
  _3545 = _3545__PHI_TEMPORARY;
  _3546 = _3546__PHI_TEMPORARY;
  if (((((int64_t)_3545) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3545) < ((uint64_t)(((uint64_t)(uint8_t)_3543)))))) {
    _3556__PHI_TEMPORARY = _3546;   /* for PHI node */
    goto _3664;
  } else {
    goto _3666;
  }

_3666:
  _3547 = *(uint64_t*)_3536;
  _3548 = *(uint64_t*)_3538;
  if ((((int64_t)_3548) > ((int64_t)_3547))) {
    goto _3667;
  } else {
    _3556__PHI_TEMPORARY = _3546;   /* for PHI node */
    goto _3664;
  }

_3667:
  _3549 = *(void**)_3535;
  _3550 = *(uint8_t*)(((&((uint8_t*)_3549)[((int64_t)_3547)])));
  if ((((int8_t)_3550) > ((int8_t)((uint8_t)-65)))) {
    _3556__PHI_TEMPORARY = _3546;   /* for PHI node */
    goto _3664;
  } else {
    goto _3668;
  }

_3668:
  _3551 = llvm_select_u32((((int64_t)_3547) < ((int64_t)_3548)), (((uint32_t)(uint8_t)_3550)), 0);
  _3552 = *(uint64_t*)_3536;
  *(uint64_t*)_3536 = (llvm_add_u64(_3552, 1));
  _3553 = llvm_neg_u64(_3545);
  _3554 = _3546 | (llvm_select_u32((((int64_t)_3545) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3553) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3551, (((uint32_t)_3553)))))), (llvm_select_u32((((uint64_t)_3545) > ((uint64_t)UINT64_C(31))), 0, (_3551 << (((uint32_t)_3545)))))));
  _3555 = llvm_add_u64(_3545, -8);
  _3545__PHI_TEMPORARY = _3555;   /* for PHI node */
  _3546__PHI_TEMPORARY = _3554;   /* for PHI node */
  goto _3665;

  } while (1); /* end of syntactic loop '' */
_3664:
  _3556 = _3556__PHI_TEMPORARY;
  _3557 = *(uint64_t*)_3255;
  _3558 = *(uint64_t*)_3257;
  _3559 = jsyn_cbe_fshl_i64(_3558, _3557, 32);
  _3560 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3556)), _3558, 32);
  *(uint64_t*)_3255 = _3559;
  *(uint64_t*)_3257 = _3560;
  _3561 = *(uint64_t*)_3463;
  _3562 = *(uint64_t*)_3465;
  _3563 = *(uint64_t*)_3467;
  _3564 = *(void**)_3244;
  _3565 = *(uint64_t*)(((&((uint8_t*)_3564)[((int64_t)16)])));
  *(uint64_t*)_3462 = _3561;
  *(uint64_t*)_3463 = _3562;
  *(uint64_t*)_3465 = _3563;
  *(uint64_t*)_3467 = _3565;
  julia_emit_20((&_3251), _3243, _3244, 82, 1);
  _3327__PHI_TEMPORARY = (&_3251);   /* for PHI node */
  goto _3614;

_3662:
  _3566 = *(uint64_t*)_3255;
  if (((_3566 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _3669;
  } else {
    goto _3670;
  }

_3669:
  _3567 = *(void**)_3244;
  _3568 = ((&((uint8_t*)_3567)[((int64_t)16)]));
  _3569 = *(uint64_t*)_3568;
  _3570 = ((&((uint8_t*)_3567)[((int64_t)8)]));
  _3571 = *(uint64_t*)_3570;
  if ((((int64_t)_3571) > ((int64_t)_3569))) {
    goto _3671;
  } else {
    _3588__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3672;
  }

_3671:
  _3572 = *(void**)_3567;
  _3573 = *(uint8_t*)(((&((uint8_t*)_3572)[((int64_t)_3569)])));
  *(uint64_t*)_3568 = (llvm_add_u64(_3569, 1));
  _3574 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3573)), 0);
  _3575 = llvm_sub_u8(32, (llvm_shl_u8(_3574, 3)));
  _3576 = (((uint32_t)(uint8_t)_3573)) << 24;
  if ((((uint8_t)_3575) > ((uint8_t)((uint8_t)16)))) {
    _3588__PHI_TEMPORARY = _3576;   /* for PHI node */
    goto _3672;
  } else {
    _3577__PHI_TEMPORARY = 16;   /* for PHI node */
    _3578__PHI_TEMPORARY = _3576;   /* for PHI node */
    goto _3673;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3673:
  _3577 = _3577__PHI_TEMPORARY;
  _3578 = _3578__PHI_TEMPORARY;
  if (((((int64_t)_3577) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3577) < ((uint64_t)(((uint64_t)(uint8_t)_3575)))))) {
    _3588__PHI_TEMPORARY = _3578;   /* for PHI node */
    goto _3672;
  } else {
    goto _3674;
  }

_3674:
  _3579 = *(uint64_t*)_3568;
  _3580 = *(uint64_t*)_3570;
  if ((((int64_t)_3580) > ((int64_t)_3579))) {
    goto _3675;
  } else {
    _3588__PHI_TEMPORARY = _3578;   /* for PHI node */
    goto _3672;
  }

_3675:
  _3581 = *(void**)_3567;
  _3582 = *(uint8_t*)(((&((uint8_t*)_3581)[((int64_t)_3579)])));
  if ((((int8_t)_3582) > ((int8_t)((uint8_t)-65)))) {
    _3588__PHI_TEMPORARY = _3578;   /* for PHI node */
    goto _3672;
  } else {
    goto _3676;
  }

_3676:
  _3583 = llvm_select_u32((((int64_t)_3579) < ((int64_t)_3580)), (((uint32_t)(uint8_t)_3582)), 0);
  _3584 = *(uint64_t*)_3568;
  *(uint64_t*)_3568 = (llvm_add_u64(_3584, 1));
  _3585 = llvm_neg_u64(_3577);
  _3586 = _3578 | (llvm_select_u32((((int64_t)_3577) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3585) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3583, (((uint32_t)_3585)))))), (llvm_select_u32((((uint64_t)_3577) > ((uint64_t)UINT64_C(31))), 0, (_3583 << (((uint32_t)_3577)))))));
  _3587 = llvm_add_u64(_3577, -8);
  _3577__PHI_TEMPORARY = _3587;   /* for PHI node */
  _3578__PHI_TEMPORARY = _3586;   /* for PHI node */
  goto _3673;

  } while (1); /* end of syntactic loop '' */
_3672:
  _3588 = _3588__PHI_TEMPORARY;
  _3589 = *(uint64_t*)_3255;
  _3590 = *(uint64_t*)_3257;
  _3591 = jsyn_cbe_fshl_i64(_3590, _3589, 32);
  _3592 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3588)), _3590, 32);
  *(uint64_t*)_3255 = _3591;
  *(uint64_t*)_3257 = _3592;
  _3593 = *(uint64_t*)_3463;
  _3594 = *(uint64_t*)_3465;
  _3595 = *(uint64_t*)_3467;
  _3596 = *(void**)_3244;
  _3597 = *(uint64_t*)(((&((uint8_t*)_3596)[((int64_t)16)])));
  *(uint64_t*)_3462 = _3593;
  *(uint64_t*)_3463 = _3594;
  *(uint64_t*)_3465 = _3595;
  *(uint64_t*)_3467 = _3597;
  julia_emit_20((&_3252), _3243, _3244, 66, 1);
  _3327__PHI_TEMPORARY = (&_3252);   /* for PHI node */
  goto _3614;

_3670:
  julia_emit_20((&_3253), _3243, _3244, 81, 1);
  _3327__PHI_TEMPORARY = (&_3253);   /* for PHI node */
  goto _3614;

_3639:
  julia_emit_20((&_3254), _3243, _3244, 239, 1);
  _3327__PHI_TEMPORARY = (&_3254);   /* for PHI node */
  goto _3614;

}


static void julia_lex_colon_37(void* _3677, void* _3678, void* _3679) {
  struct l_array_4_uint64_t _3680;    /* Address-exposed local */
  struct l_array_4_uint64_t _3681;    /* Address-exposed local */
  struct l_array_4_uint64_t _3682;    /* Address-exposed local */
  void* _3683;
  uint64_t _3684;
  void* _3685;
  void* _3686;
  void* _3687;
  uint64_t _3688;
  void* _3689;
  uint64_t _3690;
  void* _3691;
  uint8_t _3692;
  uint8_t _3693;
  uint8_t _3694;
  uint32_t _3695;
  uint64_t _3696;
  uint64_t _3696__PHI_TEMPORARY;
  uint32_t _3697;
  uint32_t _3697__PHI_TEMPORARY;
  uint64_t _3698;
  uint64_t _3699;
  void* _3700;
  uint8_t _3701;
  uint32_t _3702;
  uint64_t _3703;
  uint64_t _3704;
  uint32_t _3705;
  uint64_t _3706;
  uint32_t _3707;
  uint32_t _3707__PHI_TEMPORARY;
  uint64_t _3708;
  uint64_t _3709;
  uint64_t _3710;
  uint64_t _3711;
  void* _3712;
  uint64_t _3713;
  void* _3714;
  uint64_t _3715;
  void* _3716;
  uint64_t _3717;
  void* _3718;
  uint64_t _3719;
  void* _3720;
  void* _3720__PHI_TEMPORARY;
  void* _3721;
  uint64_t _3722;
  void* _3723;
  void* _3724;
  uint64_t _3725;
  void* _3726;
  uint64_t _3727;
  void* _3728;
  uint8_t _3729;
  uint8_t _3730;
  uint8_t _3731;
  uint32_t _3732;
  uint64_t _3733;
  uint64_t _3733__PHI_TEMPORARY;
  uint32_t _3734;
  uint32_t _3734__PHI_TEMPORARY;
  uint64_t _3735;
  uint64_t _3736;
  void* _3737;
  uint8_t _3738;
  uint32_t _3739;
  uint64_t _3740;
  uint64_t _3741;
  uint32_t _3742;
  uint64_t _3743;
  uint32_t _3744;
  uint32_t _3744__PHI_TEMPORARY;
  uint64_t _3745;
  uint64_t _3746;
  uint64_t _3747;
  uint64_t _3748;
  void* _3749;
  uint64_t _3750;
  void* _3751;
  uint64_t _3752;
  void* _3753;
  uint64_t _3754;
  void* _3755;
  uint64_t _3756;

  _3683 = ((&((uint8_t*)_3679)[((int64_t)32)]));
  _3684 = *(uint64_t*)_3683;
  _3685 = ((&((uint8_t*)_3679)[((int64_t)40)]));
  if (((_3684 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _3757;
  } else {
    goto _3758;
  }

_3757:
  _3686 = *(void**)_3679;
  _3687 = ((&((uint8_t*)_3686)[((int64_t)16)]));
  _3688 = *(uint64_t*)_3687;
  _3689 = ((&((uint8_t*)_3686)[((int64_t)8)]));
  _3690 = *(uint64_t*)_3689;
  if ((((int64_t)_3690) > ((int64_t)_3688))) {
    goto _3759;
  } else {
    _3707__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3760;
  }

_3759:
  _3691 = *(void**)_3686;
  _3692 = *(uint8_t*)(((&((uint8_t*)_3691)[((int64_t)_3688)])));
  *(uint64_t*)_3687 = (llvm_add_u64(_3688, 1));
  _3693 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3692)), 0);
  _3694 = llvm_sub_u8(32, (llvm_shl_u8(_3693, 3)));
  _3695 = (((uint32_t)(uint8_t)_3692)) << 24;
  if ((((uint8_t)_3694) > ((uint8_t)((uint8_t)16)))) {
    _3707__PHI_TEMPORARY = _3695;   /* for PHI node */
    goto _3760;
  } else {
    _3696__PHI_TEMPORARY = 16;   /* for PHI node */
    _3697__PHI_TEMPORARY = _3695;   /* for PHI node */
    goto _3761;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3761:
  _3696 = _3696__PHI_TEMPORARY;
  _3697 = _3697__PHI_TEMPORARY;
  if (((((int64_t)_3696) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3696) < ((uint64_t)(((uint64_t)(uint8_t)_3694)))))) {
    _3707__PHI_TEMPORARY = _3697;   /* for PHI node */
    goto _3760;
  } else {
    goto _3762;
  }

_3762:
  _3698 = *(uint64_t*)_3687;
  _3699 = *(uint64_t*)_3689;
  if ((((int64_t)_3699) > ((int64_t)_3698))) {
    goto _3763;
  } else {
    _3707__PHI_TEMPORARY = _3697;   /* for PHI node */
    goto _3760;
  }

_3763:
  _3700 = *(void**)_3686;
  _3701 = *(uint8_t*)(((&((uint8_t*)_3700)[((int64_t)_3698)])));
  if ((((int8_t)_3701) > ((int8_t)((uint8_t)-65)))) {
    _3707__PHI_TEMPORARY = _3697;   /* for PHI node */
    goto _3760;
  } else {
    goto _3764;
  }

_3764:
  _3702 = llvm_select_u32((((int64_t)_3698) < ((int64_t)_3699)), (((uint32_t)(uint8_t)_3701)), 0);
  _3703 = *(uint64_t*)_3687;
  *(uint64_t*)_3687 = (llvm_add_u64(_3703, 1));
  _3704 = llvm_neg_u64(_3696);
  _3705 = _3697 | (llvm_select_u32((((int64_t)_3696) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3704) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3702, (((uint32_t)_3704)))))), (llvm_select_u32((((uint64_t)_3696) > ((uint64_t)UINT64_C(31))), 0, (_3702 << (((uint32_t)_3696)))))));
  _3706 = llvm_add_u64(_3696, -8);
  _3696__PHI_TEMPORARY = _3706;   /* for PHI node */
  _3697__PHI_TEMPORARY = _3705;   /* for PHI node */
  goto _3761;

  } while (1); /* end of syntactic loop '' */
_3760:
  _3707 = _3707__PHI_TEMPORARY;
  _3708 = *(uint64_t*)_3683;
  _3709 = *(uint64_t*)_3685;
  _3710 = jsyn_cbe_fshl_i64(_3709, _3708, 32);
  _3711 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3707)), _3709, 32);
  *(uint64_t*)_3683 = _3710;
  *(uint64_t*)_3685 = _3711;
  _3712 = ((&((uint8_t*)_3679)[((int64_t)56)]));
  _3713 = *(uint64_t*)_3712;
  _3714 = ((&((uint8_t*)_3679)[((int64_t)64)]));
  _3715 = *(uint64_t*)_3714;
  _3716 = ((&((uint8_t*)_3679)[((int64_t)72)]));
  _3717 = *(uint64_t*)_3716;
  _3718 = *(void**)_3679;
  _3719 = *(uint64_t*)(((&((uint8_t*)_3718)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3679)[((int64_t)48)]))) = _3713;
  *(uint64_t*)_3712 = _3715;
  *(uint64_t*)_3714 = _3717;
  *(uint64_t*)_3716 = _3719;
  julia_emit_20((&_3680), _3678, _3679, 705, 1);
  _3720__PHI_TEMPORARY = (&_3680);   /* for PHI node */
  goto _3765;

_3765:
  _3720 = _3720__PHI_TEMPORARY;
  _3721 = memcpy(_3677, _3720, 32);
  return;
_3758:
  _3722 = *(uint64_t*)_3683;
  if (((_3722 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3766;
  } else {
    goto _3767;
  }

_3766:
  _3723 = *(void**)_3679;
  _3724 = ((&((uint8_t*)_3723)[((int64_t)16)]));
  _3725 = *(uint64_t*)_3724;
  _3726 = ((&((uint8_t*)_3723)[((int64_t)8)]));
  _3727 = *(uint64_t*)_3726;
  if ((((int64_t)_3727) > ((int64_t)_3725))) {
    goto _3768;
  } else {
    _3744__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3769;
  }

_3768:
  _3728 = *(void**)_3723;
  _3729 = *(uint8_t*)(((&((uint8_t*)_3728)[((int64_t)_3725)])));
  *(uint64_t*)_3724 = (llvm_add_u64(_3725, 1));
  _3730 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3729)), 0);
  _3731 = llvm_sub_u8(32, (llvm_shl_u8(_3730, 3)));
  _3732 = (((uint32_t)(uint8_t)_3729)) << 24;
  if ((((uint8_t)_3731) > ((uint8_t)((uint8_t)16)))) {
    _3744__PHI_TEMPORARY = _3732;   /* for PHI node */
    goto _3769;
  } else {
    _3733__PHI_TEMPORARY = 16;   /* for PHI node */
    _3734__PHI_TEMPORARY = _3732;   /* for PHI node */
    goto _3770;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3770:
  _3733 = _3733__PHI_TEMPORARY;
  _3734 = _3734__PHI_TEMPORARY;
  if (((((int64_t)_3733) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3733) < ((uint64_t)(((uint64_t)(uint8_t)_3731)))))) {
    _3744__PHI_TEMPORARY = _3734;   /* for PHI node */
    goto _3769;
  } else {
    goto _3771;
  }

_3771:
  _3735 = *(uint64_t*)_3724;
  _3736 = *(uint64_t*)_3726;
  if ((((int64_t)_3736) > ((int64_t)_3735))) {
    goto _3772;
  } else {
    _3744__PHI_TEMPORARY = _3734;   /* for PHI node */
    goto _3769;
  }

_3772:
  _3737 = *(void**)_3723;
  _3738 = *(uint8_t*)(((&((uint8_t*)_3737)[((int64_t)_3735)])));
  if ((((int8_t)_3738) > ((int8_t)((uint8_t)-65)))) {
    _3744__PHI_TEMPORARY = _3734;   /* for PHI node */
    goto _3769;
  } else {
    goto _3773;
  }

_3773:
  _3739 = llvm_select_u32((((int64_t)_3735) < ((int64_t)_3736)), (((uint32_t)(uint8_t)_3738)), 0);
  _3740 = *(uint64_t*)_3724;
  *(uint64_t*)_3724 = (llvm_add_u64(_3740, 1));
  _3741 = llvm_neg_u64(_3733);
  _3742 = _3734 | (llvm_select_u32((((int64_t)_3733) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3741) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3739, (((uint32_t)_3741)))))), (llvm_select_u32((((uint64_t)_3733) > ((uint64_t)UINT64_C(31))), 0, (_3739 << (((uint32_t)_3733)))))));
  _3743 = llvm_add_u64(_3733, -8);
  _3733__PHI_TEMPORARY = _3743;   /* for PHI node */
  _3734__PHI_TEMPORARY = _3742;   /* for PHI node */
  goto _3770;

  } while (1); /* end of syntactic loop '' */
_3769:
  _3744 = _3744__PHI_TEMPORARY;
  _3745 = *(uint64_t*)_3683;
  _3746 = *(uint64_t*)_3685;
  _3747 = jsyn_cbe_fshl_i64(_3746, _3745, 32);
  _3748 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3744)), _3746, 32);
  *(uint64_t*)_3683 = _3747;
  *(uint64_t*)_3685 = _3748;
  _3749 = ((&((uint8_t*)_3679)[((int64_t)56)]));
  _3750 = *(uint64_t*)_3749;
  _3751 = ((&((uint8_t*)_3679)[((int64_t)64)]));
  _3752 = *(uint64_t*)_3751;
  _3753 = ((&((uint8_t*)_3679)[((int64_t)72)]));
  _3754 = *(uint64_t*)_3753;
  _3755 = *(void**)_3679;
  _3756 = *(uint64_t*)(((&((uint8_t*)_3755)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3679)[((int64_t)48)]))) = _3750;
  *(uint64_t*)_3749 = _3752;
  *(uint64_t*)_3751 = _3754;
  *(uint64_t*)_3753 = _3756;
  julia_emit_20((&_3681), _3678, _3679, 73, 1);
  _3720__PHI_TEMPORARY = (&_3681);   /* for PHI node */
  goto _3765;

_3767:
  julia_emit_20((&_3682), _3678, _3679, 526, 1);
  _3720__PHI_TEMPORARY = (&_3682);   /* for PHI node */
  goto _3765;

}


static void julia_lex_bar_38(void* _3774, void* _3775, void* _3776) {
  struct l_array_4_uint64_t _3777;    /* Address-exposed local */
  struct l_array_4_uint64_t _3778;    /* Address-exposed local */
  struct l_array_4_uint64_t _3779;    /* Address-exposed local */
  struct l_array_4_uint64_t _3780;    /* Address-exposed local */
  void* _3781;
  uint64_t _3782;
  void* _3783;
  void* _3784;
  void* _3785;
  uint64_t _3786;
  void* _3787;
  uint64_t _3788;
  void* _3789;
  uint8_t _3790;
  uint8_t _3791;
  uint8_t _3792;
  uint32_t _3793;
  uint64_t _3794;
  uint64_t _3794__PHI_TEMPORARY;
  uint32_t _3795;
  uint32_t _3795__PHI_TEMPORARY;
  uint64_t _3796;
  uint64_t _3797;
  void* _3798;
  uint8_t _3799;
  uint32_t _3800;
  uint64_t _3801;
  uint64_t _3802;
  uint32_t _3803;
  uint64_t _3804;
  uint32_t _3805;
  uint32_t _3805__PHI_TEMPORARY;
  uint64_t _3806;
  uint64_t _3807;
  uint64_t _3808;
  uint64_t _3809;
  void* _3810;
  uint64_t _3811;
  void* _3812;
  uint64_t _3813;
  void* _3814;
  uint64_t _3815;
  void* _3816;
  uint64_t _3817;
  void* _3818;
  void* _3818__PHI_TEMPORARY;
  void* _3819;
  uint64_t _3820;
  void* _3821;
  void* _3822;
  uint64_t _3823;
  void* _3824;
  uint64_t _3825;
  void* _3826;
  uint8_t _3827;
  uint8_t _3828;
  uint8_t _3829;
  uint32_t _3830;
  uint64_t _3831;
  uint64_t _3831__PHI_TEMPORARY;
  uint32_t _3832;
  uint32_t _3832__PHI_TEMPORARY;
  uint64_t _3833;
  uint64_t _3834;
  void* _3835;
  uint8_t _3836;
  uint32_t _3837;
  uint64_t _3838;
  uint64_t _3839;
  uint32_t _3840;
  uint64_t _3841;
  uint32_t _3842;
  uint32_t _3842__PHI_TEMPORARY;
  uint64_t _3843;
  uint64_t _3844;
  uint64_t _3845;
  uint64_t _3846;
  void* _3847;
  uint64_t _3848;
  void* _3849;
  uint64_t _3850;
  void* _3851;
  uint64_t _3852;
  void* _3853;
  uint64_t _3854;
  uint64_t _3855;
  void* _3856;
  void* _3857;
  uint64_t _3858;
  void* _3859;
  uint64_t _3860;
  void* _3861;
  uint8_t _3862;
  uint8_t _3863;
  uint8_t _3864;
  uint32_t _3865;
  uint64_t _3866;
  uint64_t _3866__PHI_TEMPORARY;
  uint32_t _3867;
  uint32_t _3867__PHI_TEMPORARY;
  uint64_t _3868;
  uint64_t _3869;
  void* _3870;
  uint8_t _3871;
  uint32_t _3872;
  uint64_t _3873;
  uint64_t _3874;
  uint32_t _3875;
  uint64_t _3876;
  uint32_t _3877;
  uint32_t _3877__PHI_TEMPORARY;
  uint64_t _3878;
  uint64_t _3879;
  uint64_t _3880;
  uint64_t _3881;
  void* _3882;
  uint64_t _3883;
  void* _3884;
  uint64_t _3885;
  void* _3886;
  uint64_t _3887;
  void* _3888;
  uint64_t _3889;

  _3781 = ((&((uint8_t*)_3776)[((int64_t)32)]));
  _3782 = *(uint64_t*)_3781;
  _3783 = ((&((uint8_t*)_3776)[((int64_t)40)]));
  if (((_3782 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3890;
  } else {
    goto _3891;
  }

_3890:
  _3784 = *(void**)_3776;
  _3785 = ((&((uint8_t*)_3784)[((int64_t)16)]));
  _3786 = *(uint64_t*)_3785;
  _3787 = ((&((uint8_t*)_3784)[((int64_t)8)]));
  _3788 = *(uint64_t*)_3787;
  if ((((int64_t)_3788) > ((int64_t)_3786))) {
    goto _3892;
  } else {
    _3805__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3893;
  }

_3892:
  _3789 = *(void**)_3784;
  _3790 = *(uint8_t*)(((&((uint8_t*)_3789)[((int64_t)_3786)])));
  *(uint64_t*)_3785 = (llvm_add_u64(_3786, 1));
  _3791 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3790)), 0);
  _3792 = llvm_sub_u8(32, (llvm_shl_u8(_3791, 3)));
  _3793 = (((uint32_t)(uint8_t)_3790)) << 24;
  if ((((uint8_t)_3792) > ((uint8_t)((uint8_t)16)))) {
    _3805__PHI_TEMPORARY = _3793;   /* for PHI node */
    goto _3893;
  } else {
    _3794__PHI_TEMPORARY = 16;   /* for PHI node */
    _3795__PHI_TEMPORARY = _3793;   /* for PHI node */
    goto _3894;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3894:
  _3794 = _3794__PHI_TEMPORARY;
  _3795 = _3795__PHI_TEMPORARY;
  if (((((int64_t)_3794) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3794) < ((uint64_t)(((uint64_t)(uint8_t)_3792)))))) {
    _3805__PHI_TEMPORARY = _3795;   /* for PHI node */
    goto _3893;
  } else {
    goto _3895;
  }

_3895:
  _3796 = *(uint64_t*)_3785;
  _3797 = *(uint64_t*)_3787;
  if ((((int64_t)_3797) > ((int64_t)_3796))) {
    goto _3896;
  } else {
    _3805__PHI_TEMPORARY = _3795;   /* for PHI node */
    goto _3893;
  }

_3896:
  _3798 = *(void**)_3784;
  _3799 = *(uint8_t*)(((&((uint8_t*)_3798)[((int64_t)_3796)])));
  if ((((int8_t)_3799) > ((int8_t)((uint8_t)-65)))) {
    _3805__PHI_TEMPORARY = _3795;   /* for PHI node */
    goto _3893;
  } else {
    goto _3897;
  }

_3897:
  _3800 = llvm_select_u32((((int64_t)_3796) < ((int64_t)_3797)), (((uint32_t)(uint8_t)_3799)), 0);
  _3801 = *(uint64_t*)_3785;
  *(uint64_t*)_3785 = (llvm_add_u64(_3801, 1));
  _3802 = llvm_neg_u64(_3794);
  _3803 = _3795 | (llvm_select_u32((((int64_t)_3794) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3802) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3800, (((uint32_t)_3802)))))), (llvm_select_u32((((uint64_t)_3794) > ((uint64_t)UINT64_C(31))), 0, (_3800 << (((uint32_t)_3794)))))));
  _3804 = llvm_add_u64(_3794, -8);
  _3794__PHI_TEMPORARY = _3804;   /* for PHI node */
  _3795__PHI_TEMPORARY = _3803;   /* for PHI node */
  goto _3894;

  } while (1); /* end of syntactic loop '' */
_3893:
  _3805 = _3805__PHI_TEMPORARY;
  _3806 = *(uint64_t*)_3781;
  _3807 = *(uint64_t*)_3783;
  _3808 = jsyn_cbe_fshl_i64(_3807, _3806, 32);
  _3809 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3805)), _3807, 32);
  *(uint64_t*)_3781 = _3808;
  *(uint64_t*)_3783 = _3809;
  _3810 = ((&((uint8_t*)_3776)[((int64_t)56)]));
  _3811 = *(uint64_t*)_3810;
  _3812 = ((&((uint8_t*)_3776)[((int64_t)64)]));
  _3813 = *(uint64_t*)_3812;
  _3814 = ((&((uint8_t*)_3776)[((int64_t)72)]));
  _3815 = *(uint64_t*)_3814;
  _3816 = *(void**)_3776;
  _3817 = *(uint64_t*)(((&((uint8_t*)_3816)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3776)[((int64_t)48)]))) = _3811;
  *(uint64_t*)_3810 = _3813;
  *(uint64_t*)_3812 = _3815;
  *(uint64_t*)_3814 = _3817;
  julia_emit_20((&_3777), _3775, _3776, 71, 1);
  _3818__PHI_TEMPORARY = (&_3777);   /* for PHI node */
  goto _3898;

_3898:
  _3818 = _3818__PHI_TEMPORARY;
  _3819 = memcpy(_3774, _3818, 32);
  return;
_3891:
  _3820 = *(uint64_t*)_3781;
  if (((_3820 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _3899;
  } else {
    goto _3900;
  }

_3899:
  _3821 = *(void**)_3776;
  _3822 = ((&((uint8_t*)_3821)[((int64_t)16)]));
  _3823 = *(uint64_t*)_3822;
  _3824 = ((&((uint8_t*)_3821)[((int64_t)8)]));
  _3825 = *(uint64_t*)_3824;
  if ((((int64_t)_3825) > ((int64_t)_3823))) {
    goto _3901;
  } else {
    _3842__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3902;
  }

_3901:
  _3826 = *(void**)_3821;
  _3827 = *(uint8_t*)(((&((uint8_t*)_3826)[((int64_t)_3823)])));
  *(uint64_t*)_3822 = (llvm_add_u64(_3823, 1));
  _3828 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3827)), 0);
  _3829 = llvm_sub_u8(32, (llvm_shl_u8(_3828, 3)));
  _3830 = (((uint32_t)(uint8_t)_3827)) << 24;
  if ((((uint8_t)_3829) > ((uint8_t)((uint8_t)16)))) {
    _3842__PHI_TEMPORARY = _3830;   /* for PHI node */
    goto _3902;
  } else {
    _3831__PHI_TEMPORARY = 16;   /* for PHI node */
    _3832__PHI_TEMPORARY = _3830;   /* for PHI node */
    goto _3903;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3903:
  _3831 = _3831__PHI_TEMPORARY;
  _3832 = _3832__PHI_TEMPORARY;
  if (((((int64_t)_3831) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3831) < ((uint64_t)(((uint64_t)(uint8_t)_3829)))))) {
    _3842__PHI_TEMPORARY = _3832;   /* for PHI node */
    goto _3902;
  } else {
    goto _3904;
  }

_3904:
  _3833 = *(uint64_t*)_3822;
  _3834 = *(uint64_t*)_3824;
  if ((((int64_t)_3834) > ((int64_t)_3833))) {
    goto _3905;
  } else {
    _3842__PHI_TEMPORARY = _3832;   /* for PHI node */
    goto _3902;
  }

_3905:
  _3835 = *(void**)_3821;
  _3836 = *(uint8_t*)(((&((uint8_t*)_3835)[((int64_t)_3833)])));
  if ((((int8_t)_3836) > ((int8_t)((uint8_t)-65)))) {
    _3842__PHI_TEMPORARY = _3832;   /* for PHI node */
    goto _3902;
  } else {
    goto _3906;
  }

_3906:
  _3837 = llvm_select_u32((((int64_t)_3833) < ((int64_t)_3834)), (((uint32_t)(uint8_t)_3836)), 0);
  _3838 = *(uint64_t*)_3822;
  *(uint64_t*)_3822 = (llvm_add_u64(_3838, 1));
  _3839 = llvm_neg_u64(_3831);
  _3840 = _3832 | (llvm_select_u32((((int64_t)_3831) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3839) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3837, (((uint32_t)_3839)))))), (llvm_select_u32((((uint64_t)_3831) > ((uint64_t)UINT64_C(31))), 0, (_3837 << (((uint32_t)_3831)))))));
  _3841 = llvm_add_u64(_3831, -8);
  _3831__PHI_TEMPORARY = _3841;   /* for PHI node */
  _3832__PHI_TEMPORARY = _3840;   /* for PHI node */
  goto _3903;

  } while (1); /* end of syntactic loop '' */
_3902:
  _3842 = _3842__PHI_TEMPORARY;
  _3843 = *(uint64_t*)_3781;
  _3844 = *(uint64_t*)_3783;
  _3845 = jsyn_cbe_fshl_i64(_3844, _3843, 32);
  _3846 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3842)), _3844, 32);
  *(uint64_t*)_3781 = _3845;
  *(uint64_t*)_3783 = _3846;
  _3847 = ((&((uint8_t*)_3776)[((int64_t)56)]));
  _3848 = *(uint64_t*)_3847;
  _3849 = ((&((uint8_t*)_3776)[((int64_t)64)]));
  _3850 = *(uint64_t*)_3849;
  _3851 = ((&((uint8_t*)_3776)[((int64_t)72)]));
  _3852 = *(uint64_t*)_3851;
  _3853 = *(void**)_3776;
  _3854 = *(uint64_t*)(((&((uint8_t*)_3853)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3776)[((int64_t)48)]))) = _3848;
  *(uint64_t*)_3847 = _3850;
  *(uint64_t*)_3849 = _3852;
  *(uint64_t*)_3851 = _3854;
  julia_emit_20((&_3778), _3775, _3776, 525, 1);
  _3818__PHI_TEMPORARY = (&_3778);   /* for PHI node */
  goto _3898;

_3900:
  _3855 = *(uint64_t*)_3781;
  if (((_3855 & INT64_C(-4294967296)) == UINT64_C(8935141660703064064))) {
    goto _3907;
  } else {
    goto _3908;
  }

_3907:
  _3856 = *(void**)_3776;
  _3857 = ((&((uint8_t*)_3856)[((int64_t)16)]));
  _3858 = *(uint64_t*)_3857;
  _3859 = ((&((uint8_t*)_3856)[((int64_t)8)]));
  _3860 = *(uint64_t*)_3859;
  if ((((int64_t)_3860) > ((int64_t)_3858))) {
    goto _3909;
  } else {
    _3877__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3910;
  }

_3909:
  _3861 = *(void**)_3856;
  _3862 = *(uint8_t*)(((&((uint8_t*)_3861)[((int64_t)_3858)])));
  *(uint64_t*)_3857 = (llvm_add_u64(_3858, 1));
  _3863 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3862)), 0);
  _3864 = llvm_sub_u8(32, (llvm_shl_u8(_3863, 3)));
  _3865 = (((uint32_t)(uint8_t)_3862)) << 24;
  if ((((uint8_t)_3864) > ((uint8_t)((uint8_t)16)))) {
    _3877__PHI_TEMPORARY = _3865;   /* for PHI node */
    goto _3910;
  } else {
    _3866__PHI_TEMPORARY = 16;   /* for PHI node */
    _3867__PHI_TEMPORARY = _3865;   /* for PHI node */
    goto _3911;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3911:
  _3866 = _3866__PHI_TEMPORARY;
  _3867 = _3867__PHI_TEMPORARY;
  if (((((int64_t)_3866) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3866) < ((uint64_t)(((uint64_t)(uint8_t)_3864)))))) {
    _3877__PHI_TEMPORARY = _3867;   /* for PHI node */
    goto _3910;
  } else {
    goto _3912;
  }

_3912:
  _3868 = *(uint64_t*)_3857;
  _3869 = *(uint64_t*)_3859;
  if ((((int64_t)_3869) > ((int64_t)_3868))) {
    goto _3913;
  } else {
    _3877__PHI_TEMPORARY = _3867;   /* for PHI node */
    goto _3910;
  }

_3913:
  _3870 = *(void**)_3856;
  _3871 = *(uint8_t*)(((&((uint8_t*)_3870)[((int64_t)_3868)])));
  if ((((int8_t)_3871) > ((int8_t)((uint8_t)-65)))) {
    _3877__PHI_TEMPORARY = _3867;   /* for PHI node */
    goto _3910;
  } else {
    goto _3914;
  }

_3914:
  _3872 = llvm_select_u32((((int64_t)_3868) < ((int64_t)_3869)), (((uint32_t)(uint8_t)_3871)), 0);
  _3873 = *(uint64_t*)_3857;
  *(uint64_t*)_3857 = (llvm_add_u64(_3873, 1));
  _3874 = llvm_neg_u64(_3866);
  _3875 = _3867 | (llvm_select_u32((((int64_t)_3866) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3874) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3872, (((uint32_t)_3874)))))), (llvm_select_u32((((uint64_t)_3866) > ((uint64_t)UINT64_C(31))), 0, (_3872 << (((uint32_t)_3866)))))));
  _3876 = llvm_add_u64(_3866, -8);
  _3866__PHI_TEMPORARY = _3876;   /* for PHI node */
  _3867__PHI_TEMPORARY = _3875;   /* for PHI node */
  goto _3911;

  } while (1); /* end of syntactic loop '' */
_3910:
  _3877 = _3877__PHI_TEMPORARY;
  _3878 = *(uint64_t*)_3781;
  _3879 = *(uint64_t*)_3783;
  _3880 = jsyn_cbe_fshl_i64(_3879, _3878, 32);
  _3881 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3877)), _3879, 32);
  *(uint64_t*)_3781 = _3880;
  *(uint64_t*)_3783 = _3881;
  _3882 = ((&((uint8_t*)_3776)[((int64_t)56)]));
  _3883 = *(uint64_t*)_3882;
  _3884 = ((&((uint8_t*)_3776)[((int64_t)64)]));
  _3885 = *(uint64_t*)_3884;
  _3886 = ((&((uint8_t*)_3776)[((int64_t)72)]));
  _3887 = *(uint64_t*)_3886;
  _3888 = *(void**)_3776;
  _3889 = *(uint64_t*)(((&((uint8_t*)_3888)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3776)[((int64_t)48)]))) = _3883;
  *(uint64_t*)_3882 = _3885;
  *(uint64_t*)_3884 = _3887;
  *(uint64_t*)_3886 = _3889;
  julia_emit_20((&_3779), _3775, _3776, 232, 1);
  _3818__PHI_TEMPORARY = (&_3779);   /* for PHI node */
  goto _3898;

_3908:
  julia_emit_20((&_3780), _3775, _3776, 542, 1);
  _3818__PHI_TEMPORARY = (&_3780);   /* for PHI node */
  goto _3898;

}


static void julia_lex_amper_39(void* _3915, void* _3916, void* _3917) {
  struct l_array_4_uint64_t _3918;    /* Address-exposed local */
  struct l_array_4_uint64_t _3919;    /* Address-exposed local */
  struct l_array_4_uint64_t _3920;    /* Address-exposed local */
  void* _3921;
  uint64_t _3922;
  void* _3923;
  void* _3924;
  void* _3925;
  uint64_t _3926;
  void* _3927;
  uint64_t _3928;
  void* _3929;
  uint8_t _3930;
  uint8_t _3931;
  uint8_t _3932;
  uint32_t _3933;
  uint64_t _3934;
  uint64_t _3934__PHI_TEMPORARY;
  uint32_t _3935;
  uint32_t _3935__PHI_TEMPORARY;
  uint64_t _3936;
  uint64_t _3937;
  void* _3938;
  uint8_t _3939;
  uint32_t _3940;
  uint64_t _3941;
  uint64_t _3942;
  uint32_t _3943;
  uint64_t _3944;
  uint32_t _3945;
  uint32_t _3945__PHI_TEMPORARY;
  uint64_t _3946;
  uint64_t _3947;
  uint64_t _3948;
  uint64_t _3949;
  void* _3950;
  uint64_t _3951;
  void* _3952;
  uint64_t _3953;
  void* _3954;
  uint64_t _3955;
  void* _3956;
  uint64_t _3957;
  void* _3958;
  void* _3958__PHI_TEMPORARY;
  void* _3959;
  uint64_t _3960;
  void* _3961;
  void* _3962;
  uint64_t _3963;
  void* _3964;
  uint64_t _3965;
  void* _3966;
  uint8_t _3967;
  uint8_t _3968;
  uint8_t _3969;
  uint32_t _3970;
  uint64_t _3971;
  uint64_t _3971__PHI_TEMPORARY;
  uint32_t _3972;
  uint32_t _3972__PHI_TEMPORARY;
  uint64_t _3973;
  uint64_t _3974;
  void* _3975;
  uint8_t _3976;
  uint32_t _3977;
  uint64_t _3978;
  uint64_t _3979;
  uint32_t _3980;
  uint64_t _3981;
  uint32_t _3982;
  uint32_t _3982__PHI_TEMPORARY;
  uint64_t _3983;
  uint64_t _3984;
  uint64_t _3985;
  uint64_t _3986;
  void* _3987;
  uint64_t _3988;
  void* _3989;
  uint64_t _3990;
  void* _3991;
  uint64_t _3992;
  void* _3993;
  uint64_t _3994;

  _3921 = ((&((uint8_t*)_3917)[((int64_t)32)]));
  _3922 = *(uint64_t*)_3921;
  _3923 = ((&((uint8_t*)_3917)[((int64_t)40)]));
  if (((_3922 & INT64_C(-4294967296)) == UINT64_C(2738188573441261568))) {
    goto _3995;
  } else {
    goto _3996;
  }

_3995:
  _3924 = *(void**)_3917;
  _3925 = ((&((uint8_t*)_3924)[((int64_t)16)]));
  _3926 = *(uint64_t*)_3925;
  _3927 = ((&((uint8_t*)_3924)[((int64_t)8)]));
  _3928 = *(uint64_t*)_3927;
  if ((((int64_t)_3928) > ((int64_t)_3926))) {
    goto _3997;
  } else {
    _3945__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3998;
  }

_3997:
  _3929 = *(void**)_3924;
  _3930 = *(uint8_t*)(((&((uint8_t*)_3929)[((int64_t)_3926)])));
  *(uint64_t*)_3925 = (llvm_add_u64(_3926, 1));
  _3931 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3930)), 0);
  _3932 = llvm_sub_u8(32, (llvm_shl_u8(_3931, 3)));
  _3933 = (((uint32_t)(uint8_t)_3930)) << 24;
  if ((((uint8_t)_3932) > ((uint8_t)((uint8_t)16)))) {
    _3945__PHI_TEMPORARY = _3933;   /* for PHI node */
    goto _3998;
  } else {
    _3934__PHI_TEMPORARY = 16;   /* for PHI node */
    _3935__PHI_TEMPORARY = _3933;   /* for PHI node */
    goto _3999;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3999:
  _3934 = _3934__PHI_TEMPORARY;
  _3935 = _3935__PHI_TEMPORARY;
  if (((((int64_t)_3934) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3934) < ((uint64_t)(((uint64_t)(uint8_t)_3932)))))) {
    _3945__PHI_TEMPORARY = _3935;   /* for PHI node */
    goto _3998;
  } else {
    goto _4000;
  }

_4000:
  _3936 = *(uint64_t*)_3925;
  _3937 = *(uint64_t*)_3927;
  if ((((int64_t)_3937) > ((int64_t)_3936))) {
    goto _4001;
  } else {
    _3945__PHI_TEMPORARY = _3935;   /* for PHI node */
    goto _3998;
  }

_4001:
  _3938 = *(void**)_3924;
  _3939 = *(uint8_t*)(((&((uint8_t*)_3938)[((int64_t)_3936)])));
  if ((((int8_t)_3939) > ((int8_t)((uint8_t)-65)))) {
    _3945__PHI_TEMPORARY = _3935;   /* for PHI node */
    goto _3998;
  } else {
    goto _4002;
  }

_4002:
  _3940 = llvm_select_u32((((int64_t)_3936) < ((int64_t)_3937)), (((uint32_t)(uint8_t)_3939)), 0);
  _3941 = *(uint64_t*)_3925;
  *(uint64_t*)_3925 = (llvm_add_u64(_3941, 1));
  _3942 = llvm_neg_u64(_3934);
  _3943 = _3935 | (llvm_select_u32((((int64_t)_3934) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3942) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3940, (((uint32_t)_3942)))))), (llvm_select_u32((((uint64_t)_3934) > ((uint64_t)UINT64_C(31))), 0, (_3940 << (((uint32_t)_3934)))))));
  _3944 = llvm_add_u64(_3934, -8);
  _3934__PHI_TEMPORARY = _3944;   /* for PHI node */
  _3935__PHI_TEMPORARY = _3943;   /* for PHI node */
  goto _3999;

  } while (1); /* end of syntactic loop '' */
_3998:
  _3945 = _3945__PHI_TEMPORARY;
  _3946 = *(uint64_t*)_3921;
  _3947 = *(uint64_t*)_3923;
  _3948 = jsyn_cbe_fshl_i64(_3947, _3946, 32);
  _3949 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3945)), _3947, 32);
  *(uint64_t*)_3921 = _3948;
  *(uint64_t*)_3923 = _3949;
  _3950 = ((&((uint8_t*)_3917)[((int64_t)56)]));
  _3951 = *(uint64_t*)_3950;
  _3952 = ((&((uint8_t*)_3917)[((int64_t)64)]));
  _3953 = *(uint64_t*)_3952;
  _3954 = ((&((uint8_t*)_3917)[((int64_t)72)]));
  _3955 = *(uint64_t*)_3954;
  _3956 = *(void**)_3917;
  _3957 = *(uint64_t*)(((&((uint8_t*)_3956)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3917)[((int64_t)48)]))) = _3951;
  *(uint64_t*)_3950 = _3953;
  *(uint64_t*)_3952 = _3955;
  *(uint64_t*)_3954 = _3957;
  julia_emit_20((&_3918), _3916, _3917, 234, 1);
  _3958__PHI_TEMPORARY = (&_3918);   /* for PHI node */
  goto _4003;

_4003:
  _3958 = _3958__PHI_TEMPORARY;
  _3959 = memcpy(_3915, _3958, 32);
  return;
_3996:
  _3960 = *(uint64_t*)_3921;
  if (((_3960 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4004;
  } else {
    goto _4005;
  }

_4004:
  _3961 = *(void**)_3917;
  _3962 = ((&((uint8_t*)_3961)[((int64_t)16)]));
  _3963 = *(uint64_t*)_3962;
  _3964 = ((&((uint8_t*)_3961)[((int64_t)8)]));
  _3965 = *(uint64_t*)_3964;
  if ((((int64_t)_3965) > ((int64_t)_3963))) {
    goto _4006;
  } else {
    _3982__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4007;
  }

_4006:
  _3966 = *(void**)_3961;
  _3967 = *(uint8_t*)(((&((uint8_t*)_3966)[((int64_t)_3963)])));
  *(uint64_t*)_3962 = (llvm_add_u64(_3963, 1));
  _3968 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3967)), 0);
  _3969 = llvm_sub_u8(32, (llvm_shl_u8(_3968, 3)));
  _3970 = (((uint32_t)(uint8_t)_3967)) << 24;
  if ((((uint8_t)_3969) > ((uint8_t)((uint8_t)16)))) {
    _3982__PHI_TEMPORARY = _3970;   /* for PHI node */
    goto _4007;
  } else {
    _3971__PHI_TEMPORARY = 16;   /* for PHI node */
    _3972__PHI_TEMPORARY = _3970;   /* for PHI node */
    goto _4008;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4008:
  _3971 = _3971__PHI_TEMPORARY;
  _3972 = _3972__PHI_TEMPORARY;
  if (((((int64_t)_3971) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3971) < ((uint64_t)(((uint64_t)(uint8_t)_3969)))))) {
    _3982__PHI_TEMPORARY = _3972;   /* for PHI node */
    goto _4007;
  } else {
    goto _4009;
  }

_4009:
  _3973 = *(uint64_t*)_3962;
  _3974 = *(uint64_t*)_3964;
  if ((((int64_t)_3974) > ((int64_t)_3973))) {
    goto _4010;
  } else {
    _3982__PHI_TEMPORARY = _3972;   /* for PHI node */
    goto _4007;
  }

_4010:
  _3975 = *(void**)_3961;
  _3976 = *(uint8_t*)(((&((uint8_t*)_3975)[((int64_t)_3973)])));
  if ((((int8_t)_3976) > ((int8_t)((uint8_t)-65)))) {
    _3982__PHI_TEMPORARY = _3972;   /* for PHI node */
    goto _4007;
  } else {
    goto _4011;
  }

_4011:
  _3977 = llvm_select_u32((((int64_t)_3973) < ((int64_t)_3974)), (((uint32_t)(uint8_t)_3976)), 0);
  _3978 = *(uint64_t*)_3962;
  *(uint64_t*)_3962 = (llvm_add_u64(_3978, 1));
  _3979 = llvm_neg_u64(_3971);
  _3980 = _3972 | (llvm_select_u32((((int64_t)_3971) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3979) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3977, (((uint32_t)_3979)))))), (llvm_select_u32((((uint64_t)_3971) > ((uint64_t)UINT64_C(31))), 0, (_3977 << (((uint32_t)_3971)))))));
  _3981 = llvm_add_u64(_3971, -8);
  _3971__PHI_TEMPORARY = _3981;   /* for PHI node */
  _3972__PHI_TEMPORARY = _3980;   /* for PHI node */
  goto _4008;

  } while (1); /* end of syntactic loop '' */
_4007:
  _3982 = _3982__PHI_TEMPORARY;
  _3983 = *(uint64_t*)_3921;
  _3984 = *(uint64_t*)_3923;
  _3985 = jsyn_cbe_fshl_i64(_3984, _3983, 32);
  _3986 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3982)), _3984, 32);
  *(uint64_t*)_3921 = _3985;
  *(uint64_t*)_3923 = _3986;
  _3987 = ((&((uint8_t*)_3917)[((int64_t)56)]));
  _3988 = *(uint64_t*)_3987;
  _3989 = ((&((uint8_t*)_3917)[((int64_t)64)]));
  _3990 = *(uint64_t*)_3989;
  _3991 = ((&((uint8_t*)_3917)[((int64_t)72)]));
  _3992 = *(uint64_t*)_3991;
  _3993 = *(void**)_3917;
  _3994 = *(uint64_t*)(((&((uint8_t*)_3993)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3917)[((int64_t)48)]))) = _3988;
  *(uint64_t*)_3987 = _3990;
  *(uint64_t*)_3989 = _3992;
  *(uint64_t*)_3991 = _3994;
  julia_emit_20((&_3919), _3916, _3917, 71, 1);
  _3958__PHI_TEMPORARY = (&_3919);   /* for PHI node */
  goto _4003;

_4005:
  julia_emit_20((&_3920), _3916, _3917, 600, 1);
  _3958__PHI_TEMPORARY = (&_3920);   /* for PHI node */
  goto _4003;

}


static void julia_lex_division_40(void* _4012, void* _4013, void* _4014) {
  struct l_array_4_uint64_t _4015;    /* Address-exposed local */
  struct l_array_4_uint64_t _4016;    /* Address-exposed local */
  void* _4017;
  uint64_t _4018;
  void* _4019;
  void* _4020;
  void* _4021;
  uint64_t _4022;
  void* _4023;
  uint64_t _4024;
  void* _4025;
  uint8_t _4026;
  uint8_t _4027;
  uint8_t _4028;
  uint32_t _4029;
  uint64_t _4030;
  uint64_t _4030__PHI_TEMPORARY;
  uint32_t _4031;
  uint32_t _4031__PHI_TEMPORARY;
  uint64_t _4032;
  uint64_t _4033;
  void* _4034;
  uint8_t _4035;
  uint32_t _4036;
  uint64_t _4037;
  uint64_t _4038;
  uint32_t _4039;
  uint64_t _4040;
  uint32_t _4041;
  uint32_t _4041__PHI_TEMPORARY;
  uint64_t _4042;
  uint64_t _4043;
  uint64_t _4044;
  uint64_t _4045;
  void* _4046;
  uint64_t _4047;
  void* _4048;
  uint64_t _4049;
  void* _4050;
  uint64_t _4051;
  void* _4052;
  uint64_t _4053;
  void* _4054;
  void* _4054__PHI_TEMPORARY;
  void* _4055;

  _4017 = ((&((uint8_t*)_4014)[((int64_t)32)]));
  _4018 = *(uint64_t*)_4017;
  _4019 = ((&((uint8_t*)_4014)[((int64_t)40)]));
  if (((_4018 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4056;
  } else {
    goto _4057;
  }

_4056:
  _4020 = *(void**)_4014;
  _4021 = ((&((uint8_t*)_4020)[((int64_t)16)]));
  _4022 = *(uint64_t*)_4021;
  _4023 = ((&((uint8_t*)_4020)[((int64_t)8)]));
  _4024 = *(uint64_t*)_4023;
  if ((((int64_t)_4024) > ((int64_t)_4022))) {
    goto _4058;
  } else {
    _4041__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4059;
  }

_4058:
  _4025 = *(void**)_4020;
  _4026 = *(uint8_t*)(((&((uint8_t*)_4025)[((int64_t)_4022)])));
  *(uint64_t*)_4021 = (llvm_add_u64(_4022, 1));
  _4027 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4026)), 0);
  _4028 = llvm_sub_u8(32, (llvm_shl_u8(_4027, 3)));
  _4029 = (((uint32_t)(uint8_t)_4026)) << 24;
  if ((((uint8_t)_4028) > ((uint8_t)((uint8_t)16)))) {
    _4041__PHI_TEMPORARY = _4029;   /* for PHI node */
    goto _4059;
  } else {
    _4030__PHI_TEMPORARY = 16;   /* for PHI node */
    _4031__PHI_TEMPORARY = _4029;   /* for PHI node */
    goto _4060;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4060:
  _4030 = _4030__PHI_TEMPORARY;
  _4031 = _4031__PHI_TEMPORARY;
  if (((((int64_t)_4030) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4030) < ((uint64_t)(((uint64_t)(uint8_t)_4028)))))) {
    _4041__PHI_TEMPORARY = _4031;   /* for PHI node */
    goto _4059;
  } else {
    goto _4061;
  }

_4061:
  _4032 = *(uint64_t*)_4021;
  _4033 = *(uint64_t*)_4023;
  if ((((int64_t)_4033) > ((int64_t)_4032))) {
    goto _4062;
  } else {
    _4041__PHI_TEMPORARY = _4031;   /* for PHI node */
    goto _4059;
  }

_4062:
  _4034 = *(void**)_4020;
  _4035 = *(uint8_t*)(((&((uint8_t*)_4034)[((int64_t)_4032)])));
  if ((((int8_t)_4035) > ((int8_t)((uint8_t)-65)))) {
    _4041__PHI_TEMPORARY = _4031;   /* for PHI node */
    goto _4059;
  } else {
    goto _4063;
  }

_4063:
  _4036 = llvm_select_u32((((int64_t)_4032) < ((int64_t)_4033)), (((uint32_t)(uint8_t)_4035)), 0);
  _4037 = *(uint64_t*)_4021;
  *(uint64_t*)_4021 = (llvm_add_u64(_4037, 1));
  _4038 = llvm_neg_u64(_4030);
  _4039 = _4031 | (llvm_select_u32((((int64_t)_4030) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4038) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4036, (((uint32_t)_4038)))))), (llvm_select_u32((((uint64_t)_4030) > ((uint64_t)UINT64_C(31))), 0, (_4036 << (((uint32_t)_4030)))))));
  _4040 = llvm_add_u64(_4030, -8);
  _4030__PHI_TEMPORARY = _4040;   /* for PHI node */
  _4031__PHI_TEMPORARY = _4039;   /* for PHI node */
  goto _4060;

  } while (1); /* end of syntactic loop '' */
_4059:
  _4041 = _4041__PHI_TEMPORARY;
  _4042 = *(uint64_t*)_4017;
  _4043 = *(uint64_t*)_4019;
  _4044 = jsyn_cbe_fshl_i64(_4043, _4042, 32);
  _4045 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4041)), _4043, 32);
  *(uint64_t*)_4017 = _4044;
  *(uint64_t*)_4019 = _4045;
  _4046 = ((&((uint8_t*)_4014)[((int64_t)56)]));
  _4047 = *(uint64_t*)_4046;
  _4048 = ((&((uint8_t*)_4014)[((int64_t)64)]));
  _4049 = *(uint64_t*)_4048;
  _4050 = ((&((uint8_t*)_4014)[((int64_t)72)]));
  _4051 = *(uint64_t*)_4050;
  _4052 = *(void**)_4014;
  _4053 = *(uint64_t*)(((&((uint8_t*)_4052)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4014)[((int64_t)48)]))) = _4047;
  *(uint64_t*)_4046 = _4049;
  *(uint64_t*)_4048 = _4051;
  *(uint64_t*)_4050 = _4053;
  julia_emit_20((&_4015), _4013, _4014, 71, 1);
  _4054__PHI_TEMPORARY = (&_4015);   /* for PHI node */
  goto _4064;

_4064:
  _4054 = _4054__PHI_TEMPORARY;
  _4055 = memcpy(_4012, _4054, 32);
  return;
_4057:
  julia_emit_20((&_4016), _4013, _4014, 594, 1);
  _4054__PHI_TEMPORARY = (&_4016);   /* for PHI node */
  goto _4064;

}


static void julia_lex_quote_41(void* _4065, void* _4066, void* _4067) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _4068 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _4069;
  void* _4070;
  struct l_array_4_uint64_t _4071;    /* Address-exposed local */
  struct l_array_4_uint64_t _4072;    /* Address-exposed local */
  uint16_t _4073;
  bool _4074;
  bool _4074__PHI_TEMPORARY;
  uint8_t _4075;
  void* _4076;
  uint64_t _4077;
  void* _4078;
  uint64_t _4079;
  bool _4080;
  uint8_t _4081;
  void* _4082;
  void* _4083;
  void* _4084;
  void* _4085;
  uint64_t _4086;
  uint64_t _4087;
  void* _4088;
  uint64_t _4089;
  void* _4090;
  void* _4091;
  void* _4092;
  void* _4093;
  uint64_t _4094;
  void* _4095;
  uint64_t _4096;
  void* _4097;
  uint8_t _4098;
  uint8_t _4099;
  uint8_t _4100;
  uint32_t _4101;
  uint64_t _4102;
  uint64_t _4102__PHI_TEMPORARY;
  uint32_t _4103;
  uint32_t _4103__PHI_TEMPORARY;
  uint64_t _4104;
  uint64_t _4105;
  void* _4106;
  uint8_t _4107;
  uint32_t _4108;
  uint64_t _4109;
  uint64_t _4110;
  uint32_t _4111;
  uint64_t _4112;
  uint32_t _4113;
  uint32_t _4113__PHI_TEMPORARY;
  uint64_t _4114;
  uint64_t _4115;
  uint64_t _4116;
  uint64_t _4117;
  void* _4118;
  void* _4119;
  uint64_t _4120;
  void* _4121;
  uint64_t _4122;
  void* _4123;
  uint64_t _4124;
  void* _4125;
  uint64_t _4126;
  void* _4127;
  void* _4128;
  uint64_t _4129;
  void* _4130;
  uint64_t _4131;
  void* _4132;
  uint8_t _4133;
  uint8_t _4134;
  uint8_t _4135;
  uint32_t _4136;
  uint64_t _4137;
  uint64_t _4137__PHI_TEMPORARY;
  uint32_t _4138;
  uint32_t _4138__PHI_TEMPORARY;
  uint64_t _4139;
  uint64_t _4140;
  void* _4141;
  uint8_t _4142;
  uint32_t _4143;
  uint64_t _4144;
  uint64_t _4145;
  uint32_t _4146;
  uint64_t _4147;
  uint32_t _4148;
  uint32_t _4148__PHI_TEMPORARY;
  uint64_t _4149;
  uint64_t _4150;
  uint64_t _4151;
  uint64_t _4152;
  uint64_t _4153;
  uint64_t _4154;
  uint64_t _4155;
  void* _4156;
  uint64_t _4157;
  void* _4158;
  void* _4158__PHI_TEMPORARY;
  void* _4159;
  void* _4160;

  _4069 = memset((&_4068), 0, 24);
  *((uint64_t*)&_4068) = 4;
  _4070 = *(void**)_4066;
  *(void**)(((&((uint8_t*)(&_4068))[((int64_t)8)]))) = _4070;
  *(void**)_4066 = (&_4068);
  _4073 = *(uint16_t*)(((&((uint8_t*)_4067)[((int64_t)16)])));
  if (((_4073 == ((uint16_t)3)) | (((uint16_t)(llvm_add_u16(_4073, -34))) < ((uint16_t)((uint16_t)9))))) {
    _4074__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4161;
  } else {
    goto _4162;
  }

_4162:
  switch (_4073) {
  default:
    goto _4163;
  case ((uint16_t)252):
    _4074__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4161;
  case ((uint16_t)253):
    _4074__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4161;
  case ((uint16_t)706):
    _4074__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4161;
  }

_4163:
  _4074__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _4161;

_4161:
  _4074 = _4074__PHI_TEMPORARY;
  _4075 = ((uint8_t)(bool)_4074);
  _4076 = ((&((uint8_t*)_4067)[((int64_t)32)]));
  _4077 = *(uint64_t*)_4076;
  _4078 = ((&((uint8_t*)_4067)[((int64_t)40)]));
  _4079 = *(uint64_t*)_4078;
  _4080 = llvm_select_bool(((_4077 & INT64_C(-4294967296)) == UINT64_C(2449958197289549824)), ((_4079 & INT64_C(4294967295)) == UINT64_C(570425344)), 0);
  _4081 = ((uint8_t)(bool)_4080);
  _4082 = *(void**)(((&((uint8_t*)_4067)[((int64_t)24)])));
  _4083 = *(void**)_4082;
  _4084 = *(void**)(((&((uint8_t*)_4082)[((int64_t)8)])));
  _4085 = ((&((uint8_t*)_4082)[((int64_t)16)]));
  _4086 = *(uint64_t*)_4085;
  _4087 = llvm_add_u64(_4086, 1);
  _4088 = *(void**)(((&((uint8_t*)_4084)[((int64_t)8)])));
  _4089 = *(uint64_t*)_4084;
  if ((((int64_t)_4089) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_4083)), (((uint64_t)(uintptr_t)_4088)))), 4)), 1)), _4086))))) {
    goto _4164;
  } else {
    goto _4165;
  }

_4164:
  *(void**)(((&((uint8_t*)(&_4068))[((int64_t)16)]))) = _4082;
  julia__growend_internalNOT_OC__13(_4066, _4082, 1, _4086);
  goto _4165;

_4165:
  *(uint64_t*)_4085 = _4087;
  _4090 = *(void**)_4082;
  _4091 = ((&((uint8_t*)_4090)[((int64_t)(_4086 << 4))]));
  *(uint8_t*)_4091 = _4081;
  *(uint8_t*)(((&((uint8_t*)_4091)[((int64_t)1)]))) = _4075;
  *(uint32_t*)(((&((uint8_t*)_4091)[((int64_t)4)]))) = 570425344;
  *(uint64_t*)(((&((uint8_t*)_4091)[((int64_t)8)]))) = 0;
  if (_4080) {
    goto _4166;
  } else {
    goto _4167;
  }

_4166:
  _4092 = *(void**)_4067;
  _4093 = ((&((uint8_t*)_4092)[((int64_t)16)]));
  _4094 = *(uint64_t*)_4093;
  _4095 = ((&((uint8_t*)_4092)[((int64_t)8)]));
  _4096 = *(uint64_t*)_4095;
  if ((((int64_t)_4096) > ((int64_t)_4094))) {
    goto _4168;
  } else {
    _4113__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4169;
  }

_4168:
  _4097 = *(void**)_4092;
  _4098 = *(uint8_t*)(((&((uint8_t*)_4097)[((int64_t)_4094)])));
  *(uint64_t*)_4093 = (llvm_add_u64(_4094, 1));
  _4099 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4098)), 0);
  _4100 = llvm_sub_u8(32, (llvm_shl_u8(_4099, 3)));
  _4101 = (((uint32_t)(uint8_t)_4098)) << 24;
  if ((((uint8_t)_4100) > ((uint8_t)((uint8_t)16)))) {
    _4113__PHI_TEMPORARY = _4101;   /* for PHI node */
    goto _4169;
  } else {
    _4102__PHI_TEMPORARY = 16;   /* for PHI node */
    _4103__PHI_TEMPORARY = _4101;   /* for PHI node */
    goto _4170;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4170:
  _4102 = _4102__PHI_TEMPORARY;
  _4103 = _4103__PHI_TEMPORARY;
  if (((((int64_t)_4102) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4102) < ((uint64_t)(((uint64_t)(uint8_t)_4100)))))) {
    _4113__PHI_TEMPORARY = _4103;   /* for PHI node */
    goto _4169;
  } else {
    goto _4171;
  }

_4171:
  _4104 = *(uint64_t*)_4093;
  _4105 = *(uint64_t*)_4095;
  if ((((int64_t)_4105) > ((int64_t)_4104))) {
    goto _4172;
  } else {
    _4113__PHI_TEMPORARY = _4103;   /* for PHI node */
    goto _4169;
  }

_4172:
  _4106 = *(void**)_4092;
  _4107 = *(uint8_t*)(((&((uint8_t*)_4106)[((int64_t)_4104)])));
  if ((((int8_t)_4107) > ((int8_t)((uint8_t)-65)))) {
    _4113__PHI_TEMPORARY = _4103;   /* for PHI node */
    goto _4169;
  } else {
    goto _4173;
  }

_4173:
  _4108 = llvm_select_u32((((int64_t)_4104) < ((int64_t)_4105)), (((uint32_t)(uint8_t)_4107)), 0);
  _4109 = *(uint64_t*)_4093;
  *(uint64_t*)_4093 = (llvm_add_u64(_4109, 1));
  _4110 = llvm_neg_u64(_4102);
  _4111 = _4103 | (llvm_select_u32((((int64_t)_4102) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4110) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4108, (((uint32_t)_4110)))))), (llvm_select_u32((((uint64_t)_4102) > ((uint64_t)UINT64_C(31))), 0, (_4108 << (((uint32_t)_4102)))))));
  _4112 = llvm_add_u64(_4102, -8);
  _4102__PHI_TEMPORARY = _4112;   /* for PHI node */
  _4103__PHI_TEMPORARY = _4111;   /* for PHI node */
  goto _4170;

  } while (1); /* end of syntactic loop '' */
_4169:
  _4113 = _4113__PHI_TEMPORARY;
  _4114 = *(uint64_t*)_4076;
  _4115 = *(uint64_t*)_4078;
  _4116 = jsyn_cbe_fshl_i64(_4115, _4114, 32);
  _4117 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4113)), _4115, 32);
  *(uint64_t*)_4076 = _4116;
  *(uint64_t*)_4078 = _4117;
  _4118 = ((&((uint8_t*)_4067)[((int64_t)48)]));
  _4119 = ((&((uint8_t*)_4067)[((int64_t)56)]));
  _4120 = *(uint64_t*)_4119;
  _4121 = ((&((uint8_t*)_4067)[((int64_t)64)]));
  _4122 = *(uint64_t*)_4121;
  _4123 = ((&((uint8_t*)_4067)[((int64_t)72)]));
  _4124 = *(uint64_t*)_4123;
  _4125 = *(void**)_4067;
  _4126 = *(uint64_t*)(((&((uint8_t*)_4125)[((int64_t)16)])));
  *(uint64_t*)_4118 = _4120;
  *(uint64_t*)_4119 = _4122;
  *(uint64_t*)_4121 = _4124;
  *(uint64_t*)_4123 = _4126;
  _4127 = *(void**)_4067;
  _4128 = ((&((uint8_t*)_4127)[((int64_t)16)]));
  _4129 = *(uint64_t*)_4128;
  _4130 = ((&((uint8_t*)_4127)[((int64_t)8)]));
  _4131 = *(uint64_t*)_4130;
  if ((((int64_t)_4131) > ((int64_t)_4129))) {
    goto _4174;
  } else {
    _4148__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4175;
  }

_4174:
  _4132 = *(void**)_4127;
  _4133 = *(uint8_t*)(((&((uint8_t*)_4132)[((int64_t)_4129)])));
  *(uint64_t*)_4128 = (llvm_add_u64(_4129, 1));
  _4134 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4133)), 0);
  _4135 = llvm_sub_u8(32, (llvm_shl_u8(_4134, 3)));
  _4136 = (((uint32_t)(uint8_t)_4133)) << 24;
  if ((((uint8_t)_4135) > ((uint8_t)((uint8_t)16)))) {
    _4148__PHI_TEMPORARY = _4136;   /* for PHI node */
    goto _4175;
  } else {
    _4137__PHI_TEMPORARY = 16;   /* for PHI node */
    _4138__PHI_TEMPORARY = _4136;   /* for PHI node */
    goto _4176;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4176:
  _4137 = _4137__PHI_TEMPORARY;
  _4138 = _4138__PHI_TEMPORARY;
  if (((((int64_t)_4137) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4137) < ((uint64_t)(((uint64_t)(uint8_t)_4135)))))) {
    _4148__PHI_TEMPORARY = _4138;   /* for PHI node */
    goto _4175;
  } else {
    goto _4177;
  }

_4177:
  _4139 = *(uint64_t*)_4128;
  _4140 = *(uint64_t*)_4130;
  if ((((int64_t)_4140) > ((int64_t)_4139))) {
    goto _4178;
  } else {
    _4148__PHI_TEMPORARY = _4138;   /* for PHI node */
    goto _4175;
  }

_4178:
  _4141 = *(void**)_4127;
  _4142 = *(uint8_t*)(((&((uint8_t*)_4141)[((int64_t)_4139)])));
  if ((((int8_t)_4142) > ((int8_t)((uint8_t)-65)))) {
    _4148__PHI_TEMPORARY = _4138;   /* for PHI node */
    goto _4175;
  } else {
    goto _4179;
  }

_4179:
  _4143 = llvm_select_u32((((int64_t)_4139) < ((int64_t)_4140)), (((uint32_t)(uint8_t)_4142)), 0);
  _4144 = *(uint64_t*)_4128;
  *(uint64_t*)_4128 = (llvm_add_u64(_4144, 1));
  _4145 = llvm_neg_u64(_4137);
  _4146 = _4138 | (llvm_select_u32((((int64_t)_4137) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4145) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4143, (((uint32_t)_4145)))))), (llvm_select_u32((((uint64_t)_4137) > ((uint64_t)UINT64_C(31))), 0, (_4143 << (((uint32_t)_4137)))))));
  _4147 = llvm_add_u64(_4137, -8);
  _4137__PHI_TEMPORARY = _4147;   /* for PHI node */
  _4138__PHI_TEMPORARY = _4146;   /* for PHI node */
  goto _4176;

  } while (1); /* end of syntactic loop '' */
_4175:
  _4148 = _4148__PHI_TEMPORARY;
  _4149 = *(uint64_t*)_4076;
  _4150 = *(uint64_t*)_4078;
  _4151 = jsyn_cbe_fshl_i64(_4150, _4149, 32);
  _4152 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4148)), _4150, 32);
  *(uint64_t*)_4076 = _4151;
  *(uint64_t*)_4078 = _4152;
  _4153 = *(uint64_t*)_4119;
  _4154 = *(uint64_t*)_4121;
  _4155 = *(uint64_t*)_4123;
  _4156 = *(void**)_4067;
  _4157 = *(uint64_t*)(((&((uint8_t*)_4156)[((int64_t)16)])));
  *(uint64_t*)_4118 = _4153;
  *(uint64_t*)_4119 = _4154;
  *(uint64_t*)_4121 = _4155;
  *(uint64_t*)_4123 = _4157;
  julia_emit_20((&_4071), _4066, _4067, 63, 1);
  _4158__PHI_TEMPORARY = (&_4071);   /* for PHI node */
  goto _4180;

_4180:
  _4158 = _4158__PHI_TEMPORARY;
  _4159 = memcpy(_4065, _4158, 32);
  _4160 = *(void**)(((&((uint8_t*)(&_4068))[((int64_t)8)])));
  *(void**)_4066 = _4160;
  return;
_4167:
  julia_emit_20((&_4072), _4066, _4067, 62, 1);
  _4158__PHI_TEMPORARY = (&_4072);   /* for PHI node */
  goto _4180;

}


static void julia_lex_percent_42(void* _4181, void* _4182, void* _4183) {
  struct l_array_4_uint64_t _4184;    /* Address-exposed local */
  struct l_array_4_uint64_t _4185;    /* Address-exposed local */
  void* _4186;
  uint64_t _4187;
  void* _4188;
  void* _4189;
  void* _4190;
  uint64_t _4191;
  void* _4192;
  uint64_t _4193;
  void* _4194;
  uint8_t _4195;
  uint8_t _4196;
  uint8_t _4197;
  uint32_t _4198;
  uint64_t _4199;
  uint64_t _4199__PHI_TEMPORARY;
  uint32_t _4200;
  uint32_t _4200__PHI_TEMPORARY;
  uint64_t _4201;
  uint64_t _4202;
  void* _4203;
  uint8_t _4204;
  uint32_t _4205;
  uint64_t _4206;
  uint64_t _4207;
  uint32_t _4208;
  uint64_t _4209;
  uint32_t _4210;
  uint32_t _4210__PHI_TEMPORARY;
  uint64_t _4211;
  uint64_t _4212;
  uint64_t _4213;
  uint64_t _4214;
  void* _4215;
  uint64_t _4216;
  void* _4217;
  uint64_t _4218;
  void* _4219;
  uint64_t _4220;
  void* _4221;
  uint64_t _4222;
  void* _4223;
  void* _4223__PHI_TEMPORARY;
  void* _4224;

  _4186 = ((&((uint8_t*)_4183)[((int64_t)32)]));
  _4187 = *(uint64_t*)_4186;
  _4188 = ((&((uint8_t*)_4183)[((int64_t)40)]));
  if (((_4187 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4225;
  } else {
    goto _4226;
  }

_4225:
  _4189 = *(void**)_4183;
  _4190 = ((&((uint8_t*)_4189)[((int64_t)16)]));
  _4191 = *(uint64_t*)_4190;
  _4192 = ((&((uint8_t*)_4189)[((int64_t)8)]));
  _4193 = *(uint64_t*)_4192;
  if ((((int64_t)_4193) > ((int64_t)_4191))) {
    goto _4227;
  } else {
    _4210__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4228;
  }

_4227:
  _4194 = *(void**)_4189;
  _4195 = *(uint8_t*)(((&((uint8_t*)_4194)[((int64_t)_4191)])));
  *(uint64_t*)_4190 = (llvm_add_u64(_4191, 1));
  _4196 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4195)), 0);
  _4197 = llvm_sub_u8(32, (llvm_shl_u8(_4196, 3)));
  _4198 = (((uint32_t)(uint8_t)_4195)) << 24;
  if ((((uint8_t)_4197) > ((uint8_t)((uint8_t)16)))) {
    _4210__PHI_TEMPORARY = _4198;   /* for PHI node */
    goto _4228;
  } else {
    _4199__PHI_TEMPORARY = 16;   /* for PHI node */
    _4200__PHI_TEMPORARY = _4198;   /* for PHI node */
    goto _4229;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4229:
  _4199 = _4199__PHI_TEMPORARY;
  _4200 = _4200__PHI_TEMPORARY;
  if (((((int64_t)_4199) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4199) < ((uint64_t)(((uint64_t)(uint8_t)_4197)))))) {
    _4210__PHI_TEMPORARY = _4200;   /* for PHI node */
    goto _4228;
  } else {
    goto _4230;
  }

_4230:
  _4201 = *(uint64_t*)_4190;
  _4202 = *(uint64_t*)_4192;
  if ((((int64_t)_4202) > ((int64_t)_4201))) {
    goto _4231;
  } else {
    _4210__PHI_TEMPORARY = _4200;   /* for PHI node */
    goto _4228;
  }

_4231:
  _4203 = *(void**)_4189;
  _4204 = *(uint8_t*)(((&((uint8_t*)_4203)[((int64_t)_4201)])));
  if ((((int8_t)_4204) > ((int8_t)((uint8_t)-65)))) {
    _4210__PHI_TEMPORARY = _4200;   /* for PHI node */
    goto _4228;
  } else {
    goto _4232;
  }

_4232:
  _4205 = llvm_select_u32((((int64_t)_4201) < ((int64_t)_4202)), (((uint32_t)(uint8_t)_4204)), 0);
  _4206 = *(uint64_t*)_4190;
  *(uint64_t*)_4190 = (llvm_add_u64(_4206, 1));
  _4207 = llvm_neg_u64(_4199);
  _4208 = _4200 | (llvm_select_u32((((int64_t)_4199) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4207) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4205, (((uint32_t)_4207)))))), (llvm_select_u32((((uint64_t)_4199) > ((uint64_t)UINT64_C(31))), 0, (_4205 << (((uint32_t)_4199)))))));
  _4209 = llvm_add_u64(_4199, -8);
  _4199__PHI_TEMPORARY = _4209;   /* for PHI node */
  _4200__PHI_TEMPORARY = _4208;   /* for PHI node */
  goto _4229;

  } while (1); /* end of syntactic loop '' */
_4228:
  _4210 = _4210__PHI_TEMPORARY;
  _4211 = *(uint64_t*)_4186;
  _4212 = *(uint64_t*)_4188;
  _4213 = jsyn_cbe_fshl_i64(_4212, _4211, 32);
  _4214 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4210)), _4212, 32);
  *(uint64_t*)_4186 = _4213;
  *(uint64_t*)_4188 = _4214;
  _4215 = ((&((uint8_t*)_4183)[((int64_t)56)]));
  _4216 = *(uint64_t*)_4215;
  _4217 = ((&((uint8_t*)_4183)[((int64_t)64)]));
  _4218 = *(uint64_t*)_4217;
  _4219 = ((&((uint8_t*)_4183)[((int64_t)72)]));
  _4220 = *(uint64_t*)_4219;
  _4221 = *(void**)_4183;
  _4222 = *(uint64_t*)(((&((uint8_t*)_4221)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4183)[((int64_t)48)]))) = _4216;
  *(uint64_t*)_4215 = _4218;
  *(uint64_t*)_4217 = _4220;
  *(uint64_t*)_4219 = _4222;
  julia_emit_20((&_4184), _4182, _4183, 71, 1);
  _4223__PHI_TEMPORARY = (&_4184);   /* for PHI node */
  goto _4233;

_4233:
  _4223 = _4223__PHI_TEMPORARY;
  _4224 = memcpy(_4181, _4223, 32);
  return;
_4226:
  julia_emit_20((&_4185), _4182, _4183, 595, 1);
  _4223__PHI_TEMPORARY = (&_4185);   /* for PHI node */
  goto _4233;

}


static void julia_lex_forwardslash_43(void* _4234, void* _4235, void* _4236) {
  struct l_array_4_uint64_t _4237;    /* Address-exposed local */
  struct l_array_4_uint64_t _4238;    /* Address-exposed local */
  struct l_array_4_uint64_t _4239;    /* Address-exposed local */
  struct l_array_4_uint64_t _4240;    /* Address-exposed local */
  void* _4241;
  uint64_t _4242;
  void* _4243;
  void* _4244;
  void* _4245;
  uint64_t _4246;
  void* _4247;
  uint64_t _4248;
  void* _4249;
  uint8_t _4250;
  uint8_t _4251;
  uint8_t _4252;
  uint32_t _4253;
  uint64_t _4254;
  uint64_t _4254__PHI_TEMPORARY;
  uint32_t _4255;
  uint32_t _4255__PHI_TEMPORARY;
  uint64_t _4256;
  uint64_t _4257;
  void* _4258;
  uint8_t _4259;
  uint32_t _4260;
  uint64_t _4261;
  uint64_t _4262;
  uint32_t _4263;
  uint64_t _4264;
  uint32_t _4265;
  uint32_t _4265__PHI_TEMPORARY;
  uint64_t _4266;
  uint64_t _4267;
  uint64_t _4268;
  uint64_t _4269;
  void* _4270;
  uint64_t _4271;
  void* _4272;
  uint64_t _4273;
  void* _4274;
  uint64_t _4275;
  void* _4276;
  uint64_t _4277;
  uint64_t _4278;
  void* _4279;
  void* _4280;
  uint64_t _4281;
  void* _4282;
  uint64_t _4283;
  void* _4284;
  uint8_t _4285;
  uint8_t _4286;
  uint8_t _4287;
  uint32_t _4288;
  uint64_t _4289;
  uint64_t _4289__PHI_TEMPORARY;
  uint32_t _4290;
  uint32_t _4290__PHI_TEMPORARY;
  uint64_t _4291;
  uint64_t _4292;
  void* _4293;
  uint8_t _4294;
  uint32_t _4295;
  uint64_t _4296;
  uint64_t _4297;
  uint32_t _4298;
  uint64_t _4299;
  uint32_t _4300;
  uint32_t _4300__PHI_TEMPORARY;
  uint64_t _4301;
  uint64_t _4302;
  uint64_t _4303;
  uint64_t _4304;
  void* _4305;
  uint64_t _4306;
  void* _4307;
  uint64_t _4308;
  void* _4309;
  uint64_t _4310;
  void* _4311;
  uint64_t _4312;
  void* _4313;
  void* _4313__PHI_TEMPORARY;
  void* _4314;
  uint64_t _4315;
  void* _4316;
  void* _4317;
  uint64_t _4318;
  void* _4319;
  uint64_t _4320;
  void* _4321;
  uint8_t _4322;
  uint8_t _4323;
  uint8_t _4324;
  uint32_t _4325;
  uint64_t _4326;
  uint64_t _4326__PHI_TEMPORARY;
  uint32_t _4327;
  uint32_t _4327__PHI_TEMPORARY;
  uint64_t _4328;
  uint64_t _4329;
  void* _4330;
  uint8_t _4331;
  uint32_t _4332;
  uint64_t _4333;
  uint64_t _4334;
  uint32_t _4335;
  uint64_t _4336;
  uint32_t _4337;
  uint32_t _4337__PHI_TEMPORARY;
  uint64_t _4338;
  uint64_t _4339;
  uint64_t _4340;
  uint64_t _4341;
  void* _4342;
  uint64_t _4343;
  void* _4344;
  uint64_t _4345;
  void* _4346;
  uint64_t _4347;
  void* _4348;
  uint64_t _4349;

  _4241 = ((&((uint8_t*)_4236)[((int64_t)32)]));
  _4242 = *(uint64_t*)_4241;
  _4243 = ((&((uint8_t*)_4236)[((int64_t)40)]));
  if (((_4242 & INT64_C(-4294967296)) == UINT64_C(3386706919782612992))) {
    goto _4350;
  } else {
    goto _4351;
  }

_4350:
  _4244 = *(void**)_4236;
  _4245 = ((&((uint8_t*)_4244)[((int64_t)16)]));
  _4246 = *(uint64_t*)_4245;
  _4247 = ((&((uint8_t*)_4244)[((int64_t)8)]));
  _4248 = *(uint64_t*)_4247;
  if ((((int64_t)_4248) > ((int64_t)_4246))) {
    goto _4352;
  } else {
    _4265__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4353;
  }

_4352:
  _4249 = *(void**)_4244;
  _4250 = *(uint8_t*)(((&((uint8_t*)_4249)[((int64_t)_4246)])));
  *(uint64_t*)_4245 = (llvm_add_u64(_4246, 1));
  _4251 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4250)), 0);
  _4252 = llvm_sub_u8(32, (llvm_shl_u8(_4251, 3)));
  _4253 = (((uint32_t)(uint8_t)_4250)) << 24;
  if ((((uint8_t)_4252) > ((uint8_t)((uint8_t)16)))) {
    _4265__PHI_TEMPORARY = _4253;   /* for PHI node */
    goto _4353;
  } else {
    _4254__PHI_TEMPORARY = 16;   /* for PHI node */
    _4255__PHI_TEMPORARY = _4253;   /* for PHI node */
    goto _4354;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4354:
  _4254 = _4254__PHI_TEMPORARY;
  _4255 = _4255__PHI_TEMPORARY;
  if (((((int64_t)_4254) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4254) < ((uint64_t)(((uint64_t)(uint8_t)_4252)))))) {
    _4265__PHI_TEMPORARY = _4255;   /* for PHI node */
    goto _4353;
  } else {
    goto _4355;
  }

_4355:
  _4256 = *(uint64_t*)_4245;
  _4257 = *(uint64_t*)_4247;
  if ((((int64_t)_4257) > ((int64_t)_4256))) {
    goto _4356;
  } else {
    _4265__PHI_TEMPORARY = _4255;   /* for PHI node */
    goto _4353;
  }

_4356:
  _4258 = *(void**)_4244;
  _4259 = *(uint8_t*)(((&((uint8_t*)_4258)[((int64_t)_4256)])));
  if ((((int8_t)_4259) > ((int8_t)((uint8_t)-65)))) {
    _4265__PHI_TEMPORARY = _4255;   /* for PHI node */
    goto _4353;
  } else {
    goto _4357;
  }

_4357:
  _4260 = llvm_select_u32((((int64_t)_4256) < ((int64_t)_4257)), (((uint32_t)(uint8_t)_4259)), 0);
  _4261 = *(uint64_t*)_4245;
  *(uint64_t*)_4245 = (llvm_add_u64(_4261, 1));
  _4262 = llvm_neg_u64(_4254);
  _4263 = _4255 | (llvm_select_u32((((int64_t)_4254) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4262) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4260, (((uint32_t)_4262)))))), (llvm_select_u32((((uint64_t)_4254) > ((uint64_t)UINT64_C(31))), 0, (_4260 << (((uint32_t)_4254)))))));
  _4264 = llvm_add_u64(_4254, -8);
  _4254__PHI_TEMPORARY = _4264;   /* for PHI node */
  _4255__PHI_TEMPORARY = _4263;   /* for PHI node */
  goto _4354;

  } while (1); /* end of syntactic loop '' */
_4353:
  _4265 = _4265__PHI_TEMPORARY;
  _4266 = *(uint64_t*)_4241;
  _4267 = *(uint64_t*)_4243;
  _4268 = jsyn_cbe_fshl_i64(_4267, _4266, 32);
  _4269 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4265)), _4267, 32);
  *(uint64_t*)_4241 = _4268;
  *(uint64_t*)_4243 = _4269;
  _4270 = ((&((uint8_t*)_4236)[((int64_t)56)]));
  _4271 = *(uint64_t*)_4270;
  _4272 = ((&((uint8_t*)_4236)[((int64_t)64)]));
  _4273 = *(uint64_t*)_4272;
  _4274 = ((&((uint8_t*)_4236)[((int64_t)72)]));
  _4275 = *(uint64_t*)_4274;
  _4276 = *(void**)_4236;
  _4277 = *(uint64_t*)(((&((uint8_t*)_4276)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4236)[((int64_t)48)]))) = _4271;
  *(uint64_t*)_4270 = _4273;
  *(uint64_t*)_4272 = _4275;
  *(uint64_t*)_4274 = _4277;
  _4278 = *(uint64_t*)_4241;
  if (((_4278 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4358;
  } else {
    goto _4359;
  }

_4358:
  _4279 = *(void**)_4236;
  _4280 = ((&((uint8_t*)_4279)[((int64_t)16)]));
  _4281 = *(uint64_t*)_4280;
  _4282 = ((&((uint8_t*)_4279)[((int64_t)8)]));
  _4283 = *(uint64_t*)_4282;
  if ((((int64_t)_4283) > ((int64_t)_4281))) {
    goto _4360;
  } else {
    _4300__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4361;
  }

_4360:
  _4284 = *(void**)_4279;
  _4285 = *(uint8_t*)(((&((uint8_t*)_4284)[((int64_t)_4281)])));
  *(uint64_t*)_4280 = (llvm_add_u64(_4281, 1));
  _4286 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4285)), 0);
  _4287 = llvm_sub_u8(32, (llvm_shl_u8(_4286, 3)));
  _4288 = (((uint32_t)(uint8_t)_4285)) << 24;
  if ((((uint8_t)_4287) > ((uint8_t)((uint8_t)16)))) {
    _4300__PHI_TEMPORARY = _4288;   /* for PHI node */
    goto _4361;
  } else {
    _4289__PHI_TEMPORARY = 16;   /* for PHI node */
    _4290__PHI_TEMPORARY = _4288;   /* for PHI node */
    goto _4362;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4362:
  _4289 = _4289__PHI_TEMPORARY;
  _4290 = _4290__PHI_TEMPORARY;
  if (((((int64_t)_4289) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4289) < ((uint64_t)(((uint64_t)(uint8_t)_4287)))))) {
    _4300__PHI_TEMPORARY = _4290;   /* for PHI node */
    goto _4361;
  } else {
    goto _4363;
  }

_4363:
  _4291 = *(uint64_t*)_4280;
  _4292 = *(uint64_t*)_4282;
  if ((((int64_t)_4292) > ((int64_t)_4291))) {
    goto _4364;
  } else {
    _4300__PHI_TEMPORARY = _4290;   /* for PHI node */
    goto _4361;
  }

_4364:
  _4293 = *(void**)_4279;
  _4294 = *(uint8_t*)(((&((uint8_t*)_4293)[((int64_t)_4291)])));
  if ((((int8_t)_4294) > ((int8_t)((uint8_t)-65)))) {
    _4300__PHI_TEMPORARY = _4290;   /* for PHI node */
    goto _4361;
  } else {
    goto _4365;
  }

_4365:
  _4295 = llvm_select_u32((((int64_t)_4291) < ((int64_t)_4292)), (((uint32_t)(uint8_t)_4294)), 0);
  _4296 = *(uint64_t*)_4280;
  *(uint64_t*)_4280 = (llvm_add_u64(_4296, 1));
  _4297 = llvm_neg_u64(_4289);
  _4298 = _4290 | (llvm_select_u32((((int64_t)_4289) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4297) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4295, (((uint32_t)_4297)))))), (llvm_select_u32((((uint64_t)_4289) > ((uint64_t)UINT64_C(31))), 0, (_4295 << (((uint32_t)_4289)))))));
  _4299 = llvm_add_u64(_4289, -8);
  _4289__PHI_TEMPORARY = _4299;   /* for PHI node */
  _4290__PHI_TEMPORARY = _4298;   /* for PHI node */
  goto _4362;

  } while (1); /* end of syntactic loop '' */
_4361:
  _4300 = _4300__PHI_TEMPORARY;
  _4301 = *(uint64_t*)_4241;
  _4302 = *(uint64_t*)_4243;
  _4303 = jsyn_cbe_fshl_i64(_4302, _4301, 32);
  _4304 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4300)), _4302, 32);
  *(uint64_t*)_4241 = _4303;
  *(uint64_t*)_4243 = _4304;
  _4305 = ((&((uint8_t*)_4236)[((int64_t)56)]));
  _4306 = *(uint64_t*)_4305;
  _4307 = ((&((uint8_t*)_4236)[((int64_t)64)]));
  _4308 = *(uint64_t*)_4307;
  _4309 = ((&((uint8_t*)_4236)[((int64_t)72)]));
  _4310 = *(uint64_t*)_4309;
  _4311 = *(void**)_4236;
  _4312 = *(uint64_t*)(((&((uint8_t*)_4311)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4236)[((int64_t)48)]))) = _4306;
  *(uint64_t*)_4305 = _4308;
  *(uint64_t*)_4307 = _4310;
  *(uint64_t*)_4309 = _4312;
  julia_emit_20((&_4237), _4235, _4236, 71, 1);
  _4313__PHI_TEMPORARY = (&_4237);   /* for PHI node */
  goto _4366;

_4366:
  _4313 = _4313__PHI_TEMPORARY;
  _4314 = memcpy(_4234, _4313, 32);
  return;
_4359:
  julia_emit_20((&_4238), _4235, _4236, 670, 1);
  _4313__PHI_TEMPORARY = (&_4238);   /* for PHI node */
  goto _4366;

_4351:
  _4315 = *(uint64_t*)_4241;
  if (((_4315 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4367;
  } else {
    goto _4368;
  }

_4367:
  _4316 = *(void**)_4236;
  _4317 = ((&((uint8_t*)_4316)[((int64_t)16)]));
  _4318 = *(uint64_t*)_4317;
  _4319 = ((&((uint8_t*)_4316)[((int64_t)8)]));
  _4320 = *(uint64_t*)_4319;
  if ((((int64_t)_4320) > ((int64_t)_4318))) {
    goto _4369;
  } else {
    _4337__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4370;
  }

_4369:
  _4321 = *(void**)_4316;
  _4322 = *(uint8_t*)(((&((uint8_t*)_4321)[((int64_t)_4318)])));
  *(uint64_t*)_4317 = (llvm_add_u64(_4318, 1));
  _4323 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4322)), 0);
  _4324 = llvm_sub_u8(32, (llvm_shl_u8(_4323, 3)));
  _4325 = (((uint32_t)(uint8_t)_4322)) << 24;
  if ((((uint8_t)_4324) > ((uint8_t)((uint8_t)16)))) {
    _4337__PHI_TEMPORARY = _4325;   /* for PHI node */
    goto _4370;
  } else {
    _4326__PHI_TEMPORARY = 16;   /* for PHI node */
    _4327__PHI_TEMPORARY = _4325;   /* for PHI node */
    goto _4371;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4371:
  _4326 = _4326__PHI_TEMPORARY;
  _4327 = _4327__PHI_TEMPORARY;
  if (((((int64_t)_4326) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4326) < ((uint64_t)(((uint64_t)(uint8_t)_4324)))))) {
    _4337__PHI_TEMPORARY = _4327;   /* for PHI node */
    goto _4370;
  } else {
    goto _4372;
  }

_4372:
  _4328 = *(uint64_t*)_4317;
  _4329 = *(uint64_t*)_4319;
  if ((((int64_t)_4329) > ((int64_t)_4328))) {
    goto _4373;
  } else {
    _4337__PHI_TEMPORARY = _4327;   /* for PHI node */
    goto _4370;
  }

_4373:
  _4330 = *(void**)_4316;
  _4331 = *(uint8_t*)(((&((uint8_t*)_4330)[((int64_t)_4328)])));
  if ((((int8_t)_4331) > ((int8_t)((uint8_t)-65)))) {
    _4337__PHI_TEMPORARY = _4327;   /* for PHI node */
    goto _4370;
  } else {
    goto _4374;
  }

_4374:
  _4332 = llvm_select_u32((((int64_t)_4328) < ((int64_t)_4329)), (((uint32_t)(uint8_t)_4331)), 0);
  _4333 = *(uint64_t*)_4317;
  *(uint64_t*)_4317 = (llvm_add_u64(_4333, 1));
  _4334 = llvm_neg_u64(_4326);
  _4335 = _4327 | (llvm_select_u32((((int64_t)_4326) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4334) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4332, (((uint32_t)_4334)))))), (llvm_select_u32((((uint64_t)_4326) > ((uint64_t)UINT64_C(31))), 0, (_4332 << (((uint32_t)_4326)))))));
  _4336 = llvm_add_u64(_4326, -8);
  _4326__PHI_TEMPORARY = _4336;   /* for PHI node */
  _4327__PHI_TEMPORARY = _4335;   /* for PHI node */
  goto _4371;

  } while (1); /* end of syntactic loop '' */
_4370:
  _4337 = _4337__PHI_TEMPORARY;
  _4338 = *(uint64_t*)_4241;
  _4339 = *(uint64_t*)_4243;
  _4340 = jsyn_cbe_fshl_i64(_4339, _4338, 32);
  _4341 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4337)), _4339, 32);
  *(uint64_t*)_4241 = _4340;
  *(uint64_t*)_4243 = _4341;
  _4342 = ((&((uint8_t*)_4236)[((int64_t)56)]));
  _4343 = *(uint64_t*)_4342;
  _4344 = ((&((uint8_t*)_4236)[((int64_t)64)]));
  _4345 = *(uint64_t*)_4344;
  _4346 = ((&((uint8_t*)_4236)[((int64_t)72)]));
  _4347 = *(uint64_t*)_4346;
  _4348 = *(void**)_4236;
  _4349 = *(uint64_t*)(((&((uint8_t*)_4348)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4236)[((int64_t)48)]))) = _4343;
  *(uint64_t*)_4342 = _4345;
  *(uint64_t*)_4344 = _4347;
  *(uint64_t*)_4346 = _4349;
  julia_emit_20((&_4239), _4235, _4236, 71, 1);
  _4313__PHI_TEMPORARY = (&_4239);   /* for PHI node */
  goto _4366;

_4368:
  julia_emit_20((&_4240), _4235, _4236, 593, 1);
  _4313__PHI_TEMPORARY = (&_4240);   /* for PHI node */
  goto _4366;

}


static void julia_lex_backslash_44(void* _4375, void* _4376, void* _4377) {
  struct l_array_4_uint64_t _4378;    /* Address-exposed local */
  struct l_array_4_uint64_t _4379;    /* Address-exposed local */
  void* _4380;
  uint64_t _4381;
  void* _4382;
  void* _4383;
  void* _4384;
  uint64_t _4385;
  void* _4386;
  uint64_t _4387;
  void* _4388;
  uint8_t _4389;
  uint8_t _4390;
  uint8_t _4391;
  uint32_t _4392;
  uint64_t _4393;
  uint64_t _4393__PHI_TEMPORARY;
  uint32_t _4394;
  uint32_t _4394__PHI_TEMPORARY;
  uint64_t _4395;
  uint64_t _4396;
  void* _4397;
  uint8_t _4398;
  uint32_t _4399;
  uint64_t _4400;
  uint64_t _4401;
  uint32_t _4402;
  uint64_t _4403;
  uint32_t _4404;
  uint32_t _4404__PHI_TEMPORARY;
  uint64_t _4405;
  uint64_t _4406;
  uint64_t _4407;
  uint64_t _4408;
  void* _4409;
  uint64_t _4410;
  void* _4411;
  uint64_t _4412;
  void* _4413;
  uint64_t _4414;
  void* _4415;
  uint64_t _4416;
  void* _4417;
  void* _4417__PHI_TEMPORARY;
  void* _4418;

  _4380 = ((&((uint8_t*)_4377)[((int64_t)32)]));
  _4381 = *(uint64_t*)_4380;
  _4382 = ((&((uint8_t*)_4377)[((int64_t)40)]));
  if (((_4381 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4419;
  } else {
    goto _4420;
  }

_4419:
  _4383 = *(void**)_4377;
  _4384 = ((&((uint8_t*)_4383)[((int64_t)16)]));
  _4385 = *(uint64_t*)_4384;
  _4386 = ((&((uint8_t*)_4383)[((int64_t)8)]));
  _4387 = *(uint64_t*)_4386;
  if ((((int64_t)_4387) > ((int64_t)_4385))) {
    goto _4421;
  } else {
    _4404__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4422;
  }

_4421:
  _4388 = *(void**)_4383;
  _4389 = *(uint8_t*)(((&((uint8_t*)_4388)[((int64_t)_4385)])));
  *(uint64_t*)_4384 = (llvm_add_u64(_4385, 1));
  _4390 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4389)), 0);
  _4391 = llvm_sub_u8(32, (llvm_shl_u8(_4390, 3)));
  _4392 = (((uint32_t)(uint8_t)_4389)) << 24;
  if ((((uint8_t)_4391) > ((uint8_t)((uint8_t)16)))) {
    _4404__PHI_TEMPORARY = _4392;   /* for PHI node */
    goto _4422;
  } else {
    _4393__PHI_TEMPORARY = 16;   /* for PHI node */
    _4394__PHI_TEMPORARY = _4392;   /* for PHI node */
    goto _4423;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4423:
  _4393 = _4393__PHI_TEMPORARY;
  _4394 = _4394__PHI_TEMPORARY;
  if (((((int64_t)_4393) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4393) < ((uint64_t)(((uint64_t)(uint8_t)_4391)))))) {
    _4404__PHI_TEMPORARY = _4394;   /* for PHI node */
    goto _4422;
  } else {
    goto _4424;
  }

_4424:
  _4395 = *(uint64_t*)_4384;
  _4396 = *(uint64_t*)_4386;
  if ((((int64_t)_4396) > ((int64_t)_4395))) {
    goto _4425;
  } else {
    _4404__PHI_TEMPORARY = _4394;   /* for PHI node */
    goto _4422;
  }

_4425:
  _4397 = *(void**)_4383;
  _4398 = *(uint8_t*)(((&((uint8_t*)_4397)[((int64_t)_4395)])));
  if ((((int8_t)_4398) > ((int8_t)((uint8_t)-65)))) {
    _4404__PHI_TEMPORARY = _4394;   /* for PHI node */
    goto _4422;
  } else {
    goto _4426;
  }

_4426:
  _4399 = llvm_select_u32((((int64_t)_4395) < ((int64_t)_4396)), (((uint32_t)(uint8_t)_4398)), 0);
  _4400 = *(uint64_t*)_4384;
  *(uint64_t*)_4384 = (llvm_add_u64(_4400, 1));
  _4401 = llvm_neg_u64(_4393);
  _4402 = _4394 | (llvm_select_u32((((int64_t)_4393) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4401) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4399, (((uint32_t)_4401)))))), (llvm_select_u32((((uint64_t)_4393) > ((uint64_t)UINT64_C(31))), 0, (_4399 << (((uint32_t)_4393)))))));
  _4403 = llvm_add_u64(_4393, -8);
  _4393__PHI_TEMPORARY = _4403;   /* for PHI node */
  _4394__PHI_TEMPORARY = _4402;   /* for PHI node */
  goto _4423;

  } while (1); /* end of syntactic loop '' */
_4422:
  _4404 = _4404__PHI_TEMPORARY;
  _4405 = *(uint64_t*)_4380;
  _4406 = *(uint64_t*)_4382;
  _4407 = jsyn_cbe_fshl_i64(_4406, _4405, 32);
  _4408 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4404)), _4406, 32);
  *(uint64_t*)_4380 = _4407;
  *(uint64_t*)_4382 = _4408;
  _4409 = ((&((uint8_t*)_4377)[((int64_t)56)]));
  _4410 = *(uint64_t*)_4409;
  _4411 = ((&((uint8_t*)_4377)[((int64_t)64)]));
  _4412 = *(uint64_t*)_4411;
  _4413 = ((&((uint8_t*)_4377)[((int64_t)72)]));
  _4414 = *(uint64_t*)_4413;
  _4415 = *(void**)_4377;
  _4416 = *(uint64_t*)(((&((uint8_t*)_4415)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4377)[((int64_t)48)]))) = _4410;
  *(uint64_t*)_4409 = _4412;
  *(uint64_t*)_4411 = _4414;
  *(uint64_t*)_4413 = _4416;
  julia_emit_20((&_4378), _4376, _4377, 71, 1);
  _4417__PHI_TEMPORARY = (&_4378);   /* for PHI node */
  goto _4427;

_4427:
  _4417 = _4417__PHI_TEMPORARY;
  _4418 = memcpy(_4375, _4417, 32);
  return;
_4420:
  julia_emit_20((&_4379), _4376, _4377, 599, 1);
  _4417__PHI_TEMPORARY = (&_4379);   /* for PHI node */
  goto _4427;

}


static void julia_lex_dot_45(void* _4428, void* _4429, void* _4430) {
  struct l_array_4_uint64_t _4431;    /* Address-exposed local */
  struct l_array_4_uint64_t _4432;    /* Address-exposed local */
  struct l_array_4_uint64_t _4433;    /* Address-exposed local */
  struct l_array_4_uint64_t _4434;    /* Address-exposed local */
  struct l_array_4_uint64_t _4435;    /* Address-exposed local */
  struct l_array_4_uint64_t _4436;    /* Address-exposed local */
  struct l_array_4_uint64_t _4437;    /* Address-exposed local */
  struct l_array_4_uint64_t _4438;    /* Address-exposed local */
  void* _4439;
  uint64_t _4440;
  void* _4441;
  void* _4442;
  void* _4443;
  uint64_t _4444;
  void* _4445;
  uint64_t _4446;
  void* _4447;
  uint8_t _4448;
  uint8_t _4449;
  uint8_t _4450;
  uint32_t _4451;
  uint64_t _4452;
  uint64_t _4452__PHI_TEMPORARY;
  uint32_t _4453;
  uint32_t _4453__PHI_TEMPORARY;
  uint64_t _4454;
  uint64_t _4455;
  void* _4456;
  uint8_t _4457;
  uint32_t _4458;
  uint64_t _4459;
  uint64_t _4460;
  uint32_t _4461;
  uint64_t _4462;
  uint32_t _4463;
  uint32_t _4463__PHI_TEMPORARY;
  uint64_t _4464;
  uint64_t _4465;
  uint64_t _4466;
  uint64_t _4467;
  void* _4468;
  uint64_t _4469;
  void* _4470;
  uint64_t _4471;
  void* _4472;
  uint64_t _4473;
  void* _4474;
  uint64_t _4475;
  uint64_t _4476;
  void* _4477;
  void* _4478;
  uint64_t _4479;
  void* _4480;
  uint64_t _4481;
  void* _4482;
  uint8_t _4483;
  uint8_t _4484;
  uint8_t _4485;
  uint32_t _4486;
  uint64_t _4487;
  uint64_t _4487__PHI_TEMPORARY;
  uint32_t _4488;
  uint32_t _4488__PHI_TEMPORARY;
  uint64_t _4489;
  uint64_t _4490;
  void* _4491;
  uint8_t _4492;
  uint32_t _4493;
  uint64_t _4494;
  uint64_t _4495;
  uint32_t _4496;
  uint64_t _4497;
  uint32_t _4498;
  uint32_t _4498__PHI_TEMPORARY;
  uint64_t _4499;
  uint64_t _4500;
  uint64_t _4501;
  uint64_t _4502;
  void* _4503;
  uint64_t _4504;
  void* _4505;
  uint64_t _4506;
  void* _4507;
  uint64_t _4508;
  void* _4509;
  uint64_t _4510;
  uint16_t _4511;
  void* _4512;
  void* _4512__PHI_TEMPORARY;
  void* _4513;
  uint64_t _4514;
  uint64_t _4515;
  uint8_t _4516;
  void* _4517;
  void* _4518;
  uint64_t _4519;
  void* _4520;
  uint64_t _4521;
  void* _4522;
  uint8_t _4523;
  uint8_t _4524;
  uint8_t _4525;
  uint32_t _4526;
  uint64_t _4527;
  uint64_t _4527__PHI_TEMPORARY;
  uint32_t _4528;
  uint32_t _4528__PHI_TEMPORARY;
  uint64_t _4529;
  uint64_t _4530;
  void* _4531;
  uint8_t _4532;
  uint32_t _4533;
  uint64_t _4534;
  uint64_t _4535;
  uint32_t _4536;
  uint64_t _4537;
  uint32_t _4538;
  uint32_t _4538__PHI_TEMPORARY;
  uint64_t _4539;
  uint64_t _4540;
  uint64_t _4541;
  uint64_t _4542;
  void* _4543;
  uint64_t _4544;
  void* _4545;
  uint64_t _4546;
  void* _4547;
  uint64_t _4548;
  void* _4549;
  uint64_t _4550;
  uint16_t _4551;
  uint64_t _4552;
  uint64_t _4553;
  uint16_t _4554;

  _4439 = ((&((uint8_t*)_4430)[((int64_t)32)]));
  _4440 = *(uint64_t*)_4439;
  _4441 = ((&((uint8_t*)_4430)[((int64_t)40)]));
  if (((_4440 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _4555;
  } else {
    goto _4556;
  }

_4555:
  _4442 = *(void**)_4430;
  _4443 = ((&((uint8_t*)_4442)[((int64_t)16)]));
  _4444 = *(uint64_t*)_4443;
  _4445 = ((&((uint8_t*)_4442)[((int64_t)8)]));
  _4446 = *(uint64_t*)_4445;
  if ((((int64_t)_4446) > ((int64_t)_4444))) {
    goto _4557;
  } else {
    _4463__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4558;
  }

_4557:
  _4447 = *(void**)_4442;
  _4448 = *(uint8_t*)(((&((uint8_t*)_4447)[((int64_t)_4444)])));
  *(uint64_t*)_4443 = (llvm_add_u64(_4444, 1));
  _4449 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4448)), 0);
  _4450 = llvm_sub_u8(32, (llvm_shl_u8(_4449, 3)));
  _4451 = (((uint32_t)(uint8_t)_4448)) << 24;
  if ((((uint8_t)_4450) > ((uint8_t)((uint8_t)16)))) {
    _4463__PHI_TEMPORARY = _4451;   /* for PHI node */
    goto _4558;
  } else {
    _4452__PHI_TEMPORARY = 16;   /* for PHI node */
    _4453__PHI_TEMPORARY = _4451;   /* for PHI node */
    goto _4559;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4559:
  _4452 = _4452__PHI_TEMPORARY;
  _4453 = _4453__PHI_TEMPORARY;
  if (((((int64_t)_4452) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4452) < ((uint64_t)(((uint64_t)(uint8_t)_4450)))))) {
    _4463__PHI_TEMPORARY = _4453;   /* for PHI node */
    goto _4558;
  } else {
    goto _4560;
  }

_4560:
  _4454 = *(uint64_t*)_4443;
  _4455 = *(uint64_t*)_4445;
  if ((((int64_t)_4455) > ((int64_t)_4454))) {
    goto _4561;
  } else {
    _4463__PHI_TEMPORARY = _4453;   /* for PHI node */
    goto _4558;
  }

_4561:
  _4456 = *(void**)_4442;
  _4457 = *(uint8_t*)(((&((uint8_t*)_4456)[((int64_t)_4454)])));
  if ((((int8_t)_4457) > ((int8_t)((uint8_t)-65)))) {
    _4463__PHI_TEMPORARY = _4453;   /* for PHI node */
    goto _4558;
  } else {
    goto _4562;
  }

_4562:
  _4458 = llvm_select_u32((((int64_t)_4454) < ((int64_t)_4455)), (((uint32_t)(uint8_t)_4457)), 0);
  _4459 = *(uint64_t*)_4443;
  *(uint64_t*)_4443 = (llvm_add_u64(_4459, 1));
  _4460 = llvm_neg_u64(_4452);
  _4461 = _4453 | (llvm_select_u32((((int64_t)_4452) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4460) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4458, (((uint32_t)_4460)))))), (llvm_select_u32((((uint64_t)_4452) > ((uint64_t)UINT64_C(31))), 0, (_4458 << (((uint32_t)_4452)))))));
  _4462 = llvm_add_u64(_4452, -8);
  _4452__PHI_TEMPORARY = _4462;   /* for PHI node */
  _4453__PHI_TEMPORARY = _4461;   /* for PHI node */
  goto _4559;

  } while (1); /* end of syntactic loop '' */
_4558:
  _4463 = _4463__PHI_TEMPORARY;
  _4464 = *(uint64_t*)_4439;
  _4465 = *(uint64_t*)_4441;
  _4466 = jsyn_cbe_fshl_i64(_4465, _4464, 32);
  _4467 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4463)), _4465, 32);
  *(uint64_t*)_4439 = _4466;
  *(uint64_t*)_4441 = _4467;
  _4468 = ((&((uint8_t*)_4430)[((int64_t)56)]));
  _4469 = *(uint64_t*)_4468;
  _4470 = ((&((uint8_t*)_4430)[((int64_t)64)]));
  _4471 = *(uint64_t*)_4470;
  _4472 = ((&((uint8_t*)_4430)[((int64_t)72)]));
  _4473 = *(uint64_t*)_4472;
  _4474 = *(void**)_4430;
  _4475 = *(uint64_t*)(((&((uint8_t*)_4474)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4430)[((int64_t)48)]))) = _4469;
  *(uint64_t*)_4468 = _4471;
  *(uint64_t*)_4470 = _4473;
  *(uint64_t*)_4472 = _4475;
  _4476 = *(uint64_t*)_4439;
  if (((_4476 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _4563;
  } else {
    goto _4564;
  }

_4563:
  _4477 = *(void**)_4430;
  _4478 = ((&((uint8_t*)_4477)[((int64_t)16)]));
  _4479 = *(uint64_t*)_4478;
  _4480 = ((&((uint8_t*)_4477)[((int64_t)8)]));
  _4481 = *(uint64_t*)_4480;
  if ((((int64_t)_4481) > ((int64_t)_4479))) {
    goto _4565;
  } else {
    _4498__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4566;
  }

_4565:
  _4482 = *(void**)_4477;
  _4483 = *(uint8_t*)(((&((uint8_t*)_4482)[((int64_t)_4479)])));
  *(uint64_t*)_4478 = (llvm_add_u64(_4479, 1));
  _4484 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4483)), 0);
  _4485 = llvm_sub_u8(32, (llvm_shl_u8(_4484, 3)));
  _4486 = (((uint32_t)(uint8_t)_4483)) << 24;
  if ((((uint8_t)_4485) > ((uint8_t)((uint8_t)16)))) {
    _4498__PHI_TEMPORARY = _4486;   /* for PHI node */
    goto _4566;
  } else {
    _4487__PHI_TEMPORARY = 16;   /* for PHI node */
    _4488__PHI_TEMPORARY = _4486;   /* for PHI node */
    goto _4567;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4567:
  _4487 = _4487__PHI_TEMPORARY;
  _4488 = _4488__PHI_TEMPORARY;
  if (((((int64_t)_4487) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4487) < ((uint64_t)(((uint64_t)(uint8_t)_4485)))))) {
    _4498__PHI_TEMPORARY = _4488;   /* for PHI node */
    goto _4566;
  } else {
    goto _4568;
  }

_4568:
  _4489 = *(uint64_t*)_4478;
  _4490 = *(uint64_t*)_4480;
  if ((((int64_t)_4490) > ((int64_t)_4489))) {
    goto _4569;
  } else {
    _4498__PHI_TEMPORARY = _4488;   /* for PHI node */
    goto _4566;
  }

_4569:
  _4491 = *(void**)_4477;
  _4492 = *(uint8_t*)(((&((uint8_t*)_4491)[((int64_t)_4489)])));
  if ((((int8_t)_4492) > ((int8_t)((uint8_t)-65)))) {
    _4498__PHI_TEMPORARY = _4488;   /* for PHI node */
    goto _4566;
  } else {
    goto _4570;
  }

_4570:
  _4493 = llvm_select_u32((((int64_t)_4489) < ((int64_t)_4490)), (((uint32_t)(uint8_t)_4492)), 0);
  _4494 = *(uint64_t*)_4478;
  *(uint64_t*)_4478 = (llvm_add_u64(_4494, 1));
  _4495 = llvm_neg_u64(_4487);
  _4496 = _4488 | (llvm_select_u32((((int64_t)_4487) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4495) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4493, (((uint32_t)_4495)))))), (llvm_select_u32((((uint64_t)_4487) > ((uint64_t)UINT64_C(31))), 0, (_4493 << (((uint32_t)_4487)))))));
  _4497 = llvm_add_u64(_4487, -8);
  _4487__PHI_TEMPORARY = _4497;   /* for PHI node */
  _4488__PHI_TEMPORARY = _4496;   /* for PHI node */
  goto _4567;

  } while (1); /* end of syntactic loop '' */
_4566:
  _4498 = _4498__PHI_TEMPORARY;
  _4499 = *(uint64_t*)_4439;
  _4500 = *(uint64_t*)_4441;
  _4501 = jsyn_cbe_fshl_i64(_4500, _4499, 32);
  _4502 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4498)), _4500, 32);
  *(uint64_t*)_4439 = _4501;
  *(uint64_t*)_4441 = _4502;
  _4503 = ((&((uint8_t*)_4430)[((int64_t)56)]));
  _4504 = *(uint64_t*)_4503;
  _4505 = ((&((uint8_t*)_4430)[((int64_t)64)]));
  _4506 = *(uint64_t*)_4505;
  _4507 = ((&((uint8_t*)_4430)[((int64_t)72)]));
  _4508 = *(uint64_t*)_4507;
  _4509 = *(void**)_4430;
  _4510 = *(uint64_t*)(((&((uint8_t*)_4509)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4430)[((int64_t)48)]))) = _4504;
  *(uint64_t*)_4503 = _4506;
  *(uint64_t*)_4505 = _4508;
  *(uint64_t*)_4507 = _4510;
  _4511 = *(uint16_t*)(((&((uint8_t*)_4430)[((int64_t)16)])));
  if ((_4511 == ((uint16_t)53))) {
    goto _4571;
  } else {
    goto _4572;
  }

_4573:
  _4512 = _4512__PHI_TEMPORARY;
  _4513 = memcpy(_4428, _4512, 32);
  return;
_4571:
  julia_emit_20((&_4431), _4429, _4430, 3, 1);
  _4512__PHI_TEMPORARY = (&_4431);   /* for PHI node */
  goto _4573;

_4572:
  julia_emit_20((&_4432), _4429, _4430, 68, 1);
  _4512__PHI_TEMPORARY = (&_4432);   /* for PHI node */
  goto _4573;

_4564:
  _4514 = *(uint64_t*)_4439;
  _4515 = llvm_lshr_u64(_4514, 32);
  switch ((((uint32_t)_4515))) {
  default:
    goto _4574;
  case 1056964608u:
    goto _4575;
  case 603979776u:
    goto _4575;
  case 973078528u:
    goto _4575;
  case 654311424u:
    goto _4575;
  }

_4574:
  _4516 = julia_is_operator_start_char_23(_4429, (((uint32_t)_4515)));
  if ((((bool)_4516&1u))) {
    goto _4576;
  } else {
    goto _4575;
  }

_4576:
  _4517 = *(void**)_4430;
  _4518 = ((&((uint8_t*)_4517)[((int64_t)16)]));
  _4519 = *(uint64_t*)_4518;
  _4520 = ((&((uint8_t*)_4517)[((int64_t)8)]));
  _4521 = *(uint64_t*)_4520;
  if ((((int64_t)_4521) > ((int64_t)_4519))) {
    goto _4577;
  } else {
    _4538__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4578;
  }

_4577:
  _4522 = *(void**)_4517;
  _4523 = *(uint8_t*)(((&((uint8_t*)_4522)[((int64_t)_4519)])));
  *(uint64_t*)_4518 = (llvm_add_u64(_4519, 1));
  _4524 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4523)), 0);
  _4525 = llvm_sub_u8(32, (llvm_shl_u8(_4524, 3)));
  _4526 = (((uint32_t)(uint8_t)_4523)) << 24;
  if ((((uint8_t)_4525) > ((uint8_t)((uint8_t)16)))) {
    _4538__PHI_TEMPORARY = _4526;   /* for PHI node */
    goto _4578;
  } else {
    _4527__PHI_TEMPORARY = 16;   /* for PHI node */
    _4528__PHI_TEMPORARY = _4526;   /* for PHI node */
    goto _4579;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4579:
  _4527 = _4527__PHI_TEMPORARY;
  _4528 = _4528__PHI_TEMPORARY;
  if (((((int64_t)_4527) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4527) < ((uint64_t)(((uint64_t)(uint8_t)_4525)))))) {
    _4538__PHI_TEMPORARY = _4528;   /* for PHI node */
    goto _4578;
  } else {
    goto _4580;
  }

_4580:
  _4529 = *(uint64_t*)_4518;
  _4530 = *(uint64_t*)_4520;
  if ((((int64_t)_4530) > ((int64_t)_4529))) {
    goto _4581;
  } else {
    _4538__PHI_TEMPORARY = _4528;   /* for PHI node */
    goto _4578;
  }

_4581:
  _4531 = *(void**)_4517;
  _4532 = *(uint8_t*)(((&((uint8_t*)_4531)[((int64_t)_4529)])));
  if ((((int8_t)_4532) > ((int8_t)((uint8_t)-65)))) {
    _4538__PHI_TEMPORARY = _4528;   /* for PHI node */
    goto _4578;
  } else {
    goto _4582;
  }

_4582:
  _4533 = llvm_select_u32((((int64_t)_4529) < ((int64_t)_4530)), (((uint32_t)(uint8_t)_4532)), 0);
  _4534 = *(uint64_t*)_4518;
  *(uint64_t*)_4518 = (llvm_add_u64(_4534, 1));
  _4535 = llvm_neg_u64(_4527);
  _4536 = _4528 | (llvm_select_u32((((int64_t)_4527) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4535) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4533, (((uint32_t)_4535)))))), (llvm_select_u32((((uint64_t)_4527) > ((uint64_t)UINT64_C(31))), 0, (_4533 << (((uint32_t)_4527)))))));
  _4537 = llvm_add_u64(_4527, -8);
  _4527__PHI_TEMPORARY = _4537;   /* for PHI node */
  _4528__PHI_TEMPORARY = _4536;   /* for PHI node */
  goto _4579;

  } while (1); /* end of syntactic loop '' */
_4578:
  _4538 = _4538__PHI_TEMPORARY;
  _4539 = *(uint64_t*)_4439;
  _4540 = *(uint64_t*)_4441;
  _4541 = jsyn_cbe_fshl_i64(_4540, _4539, 32);
  _4542 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4538)), _4540, 32);
  *(uint64_t*)_4439 = _4541;
  *(uint64_t*)_4441 = _4542;
  _4543 = ((&((uint8_t*)_4430)[((int64_t)56)]));
  _4544 = *(uint64_t*)_4543;
  _4545 = ((&((uint8_t*)_4430)[((int64_t)64)]));
  _4546 = *(uint64_t*)_4545;
  _4547 = ((&((uint8_t*)_4430)[((int64_t)72)]));
  _4548 = *(uint64_t*)_4547;
  _4549 = *(void**)_4430;
  _4550 = *(uint64_t*)(((&((uint8_t*)_4549)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4430)[((int64_t)48)]))) = _4544;
  *(uint64_t*)_4543 = _4546;
  *(uint64_t*)_4545 = _4548;
  *(uint64_t*)_4547 = _4550;
  julia_emit_20((&_4433), _4429, _4430, 66, 1);
  _4512__PHI_TEMPORARY = (&_4433);   /* for PHI node */
  goto _4573;

_4575:
  _4551 = *(uint16_t*)(((&((uint8_t*)_4430)[((int64_t)16)])));
  if ((_4551 == ((uint16_t)53))) {
    goto _4583;
  } else {
    goto _4584;
  }

_4583:
  julia_emit_20((&_4434), _4429, _4430, 3, 1);
  _4512__PHI_TEMPORARY = (&_4434);   /* for PHI node */
  goto _4573;

_4584:
  julia_emit_20((&_4435), _4429, _4430, 527, 1);
  _4512__PHI_TEMPORARY = (&_4435);   /* for PHI node */
  goto _4573;

_4556:
  _4552 = *(uint64_t*)_4439;
  _4553 = llvm_lshr_u64(_4552, 32);
  if ((((((uint64_t)_4552) < ((uint64_t)UINT64_C(3458764518115508224))) & (_4553 != UINT64_C(805306368))) | ((((uint64_t)_4552) > ((uint64_t)UINT64_C(4107282860161892351))) & (_4553 != UINT64_C(956301312))))) {
    goto _4585;
  } else {
    goto _4586;
  }

_4586:
  julia_lex_digit_49((&_4436), _4429, _4430, 48);
  _4512__PHI_TEMPORARY = (&_4436);   /* for PHI node */
  goto _4573;

_4585:
  _4554 = *(uint16_t*)(((&((uint8_t*)_4430)[((int64_t)16)])));
  if ((_4554 == ((uint16_t)53))) {
    goto _4587;
  } else {
    goto _4588;
  }

_4587:
  julia_emit_20((&_4437), _4429, _4430, 3, 1);
  _4512__PHI_TEMPORARY = (&_4437);   /* for PHI node */
  goto _4573;

_4588:
  julia_emit_20((&_4438), _4429, _4430, 707, 1);
  _4512__PHI_TEMPORARY = (&_4438);   /* for PHI node */
  goto _4573;

}


static void julia_lex_plus_46(void* _4589, void* _4590, void* _4591) {
  struct l_array_4_uint64_t _4592;    /* Address-exposed local */
  struct l_array_4_uint64_t _4593;    /* Address-exposed local */
  struct l_array_4_uint64_t _4594;    /* Address-exposed local */
  void* _4595;
  uint64_t _4596;
  void* _4597;
  void* _4598;
  void* _4599;
  uint64_t _4600;
  void* _4601;
  uint64_t _4602;
  void* _4603;
  uint8_t _4604;
  uint8_t _4605;
  uint8_t _4606;
  uint32_t _4607;
  uint64_t _4608;
  uint64_t _4608__PHI_TEMPORARY;
  uint32_t _4609;
  uint32_t _4609__PHI_TEMPORARY;
  uint64_t _4610;
  uint64_t _4611;
  void* _4612;
  uint8_t _4613;
  uint32_t _4614;
  uint64_t _4615;
  uint64_t _4616;
  uint32_t _4617;
  uint64_t _4618;
  uint32_t _4619;
  uint32_t _4619__PHI_TEMPORARY;
  uint64_t _4620;
  uint64_t _4621;
  uint64_t _4622;
  uint64_t _4623;
  void* _4624;
  uint64_t _4625;
  void* _4626;
  uint64_t _4627;
  void* _4628;
  uint64_t _4629;
  void* _4630;
  uint64_t _4631;
  void* _4632;
  void* _4632__PHI_TEMPORARY;
  void* _4633;
  uint64_t _4634;
  void* _4635;
  void* _4636;
  uint64_t _4637;
  void* _4638;
  uint64_t _4639;
  void* _4640;
  uint8_t _4641;
  uint8_t _4642;
  uint8_t _4643;
  uint32_t _4644;
  uint64_t _4645;
  uint64_t _4645__PHI_TEMPORARY;
  uint32_t _4646;
  uint32_t _4646__PHI_TEMPORARY;
  uint64_t _4647;
  uint64_t _4648;
  void* _4649;
  uint8_t _4650;
  uint32_t _4651;
  uint64_t _4652;
  uint64_t _4653;
  uint32_t _4654;
  uint64_t _4655;
  uint32_t _4656;
  uint32_t _4656__PHI_TEMPORARY;
  uint64_t _4657;
  uint64_t _4658;
  uint64_t _4659;
  uint64_t _4660;
  void* _4661;
  uint64_t _4662;
  void* _4663;
  uint64_t _4664;
  void* _4665;
  uint64_t _4666;
  void* _4667;
  uint64_t _4668;

  _4595 = ((&((uint8_t*)_4591)[((int64_t)32)]));
  _4596 = *(uint64_t*)_4595;
  _4597 = ((&((uint8_t*)_4591)[((int64_t)40)]));
  if (((_4596 & INT64_C(-4294967296)) == UINT64_C(3098476543630901248))) {
    goto _4669;
  } else {
    goto _4670;
  }

_4669:
  _4598 = *(void**)_4591;
  _4599 = ((&((uint8_t*)_4598)[((int64_t)16)]));
  _4600 = *(uint64_t*)_4599;
  _4601 = ((&((uint8_t*)_4598)[((int64_t)8)]));
  _4602 = *(uint64_t*)_4601;
  if ((((int64_t)_4602) > ((int64_t)_4600))) {
    goto _4671;
  } else {
    _4619__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4672;
  }

_4671:
  _4603 = *(void**)_4598;
  _4604 = *(uint8_t*)(((&((uint8_t*)_4603)[((int64_t)_4600)])));
  *(uint64_t*)_4599 = (llvm_add_u64(_4600, 1));
  _4605 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4604)), 0);
  _4606 = llvm_sub_u8(32, (llvm_shl_u8(_4605, 3)));
  _4607 = (((uint32_t)(uint8_t)_4604)) << 24;
  if ((((uint8_t)_4606) > ((uint8_t)((uint8_t)16)))) {
    _4619__PHI_TEMPORARY = _4607;   /* for PHI node */
    goto _4672;
  } else {
    _4608__PHI_TEMPORARY = 16;   /* for PHI node */
    _4609__PHI_TEMPORARY = _4607;   /* for PHI node */
    goto _4673;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4673:
  _4608 = _4608__PHI_TEMPORARY;
  _4609 = _4609__PHI_TEMPORARY;
  if (((((int64_t)_4608) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4608) < ((uint64_t)(((uint64_t)(uint8_t)_4606)))))) {
    _4619__PHI_TEMPORARY = _4609;   /* for PHI node */
    goto _4672;
  } else {
    goto _4674;
  }

_4674:
  _4610 = *(uint64_t*)_4599;
  _4611 = *(uint64_t*)_4601;
  if ((((int64_t)_4611) > ((int64_t)_4610))) {
    goto _4675;
  } else {
    _4619__PHI_TEMPORARY = _4609;   /* for PHI node */
    goto _4672;
  }

_4675:
  _4612 = *(void**)_4598;
  _4613 = *(uint8_t*)(((&((uint8_t*)_4612)[((int64_t)_4610)])));
  if ((((int8_t)_4613) > ((int8_t)((uint8_t)-65)))) {
    _4619__PHI_TEMPORARY = _4609;   /* for PHI node */
    goto _4672;
  } else {
    goto _4676;
  }

_4676:
  _4614 = llvm_select_u32((((int64_t)_4610) < ((int64_t)_4611)), (((uint32_t)(uint8_t)_4613)), 0);
  _4615 = *(uint64_t*)_4599;
  *(uint64_t*)_4599 = (llvm_add_u64(_4615, 1));
  _4616 = llvm_neg_u64(_4608);
  _4617 = _4609 | (llvm_select_u32((((int64_t)_4608) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4616) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4614, (((uint32_t)_4616)))))), (llvm_select_u32((((uint64_t)_4608) > ((uint64_t)UINT64_C(31))), 0, (_4614 << (((uint32_t)_4608)))))));
  _4618 = llvm_add_u64(_4608, -8);
  _4608__PHI_TEMPORARY = _4618;   /* for PHI node */
  _4609__PHI_TEMPORARY = _4617;   /* for PHI node */
  goto _4673;

  } while (1); /* end of syntactic loop '' */
_4672:
  _4619 = _4619__PHI_TEMPORARY;
  _4620 = *(uint64_t*)_4595;
  _4621 = *(uint64_t*)_4597;
  _4622 = jsyn_cbe_fshl_i64(_4621, _4620, 32);
  _4623 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4619)), _4621, 32);
  *(uint64_t*)_4595 = _4622;
  *(uint64_t*)_4597 = _4623;
  _4624 = ((&((uint8_t*)_4591)[((int64_t)56)]));
  _4625 = *(uint64_t*)_4624;
  _4626 = ((&((uint8_t*)_4591)[((int64_t)64)]));
  _4627 = *(uint64_t*)_4626;
  _4628 = ((&((uint8_t*)_4591)[((int64_t)72)]));
  _4629 = *(uint64_t*)_4628;
  _4630 = *(void**)_4591;
  _4631 = *(uint64_t*)(((&((uint8_t*)_4630)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4591)[((int64_t)48)]))) = _4625;
  *(uint64_t*)_4624 = _4627;
  *(uint64_t*)_4626 = _4629;
  *(uint64_t*)_4628 = _4631;
  julia_emit_20((&_4592), _4590, _4591, 537, 1);
  _4632__PHI_TEMPORARY = (&_4592);   /* for PHI node */
  goto _4677;

_4677:
  _4632 = _4632__PHI_TEMPORARY;
  _4633 = memcpy(_4589, _4632, 32);
  return;
_4670:
  _4634 = *(uint64_t*)_4595;
  if (((_4634 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4678;
  } else {
    goto _4679;
  }

_4678:
  _4635 = *(void**)_4591;
  _4636 = ((&((uint8_t*)_4635)[((int64_t)16)]));
  _4637 = *(uint64_t*)_4636;
  _4638 = ((&((uint8_t*)_4635)[((int64_t)8)]));
  _4639 = *(uint64_t*)_4638;
  if ((((int64_t)_4639) > ((int64_t)_4637))) {
    goto _4680;
  } else {
    _4656__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4681;
  }

_4680:
  _4640 = *(void**)_4635;
  _4641 = *(uint8_t*)(((&((uint8_t*)_4640)[((int64_t)_4637)])));
  *(uint64_t*)_4636 = (llvm_add_u64(_4637, 1));
  _4642 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4641)), 0);
  _4643 = llvm_sub_u8(32, (llvm_shl_u8(_4642, 3)));
  _4644 = (((uint32_t)(uint8_t)_4641)) << 24;
  if ((((uint8_t)_4643) > ((uint8_t)((uint8_t)16)))) {
    _4656__PHI_TEMPORARY = _4644;   /* for PHI node */
    goto _4681;
  } else {
    _4645__PHI_TEMPORARY = 16;   /* for PHI node */
    _4646__PHI_TEMPORARY = _4644;   /* for PHI node */
    goto _4682;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4682:
  _4645 = _4645__PHI_TEMPORARY;
  _4646 = _4646__PHI_TEMPORARY;
  if (((((int64_t)_4645) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4645) < ((uint64_t)(((uint64_t)(uint8_t)_4643)))))) {
    _4656__PHI_TEMPORARY = _4646;   /* for PHI node */
    goto _4681;
  } else {
    goto _4683;
  }

_4683:
  _4647 = *(uint64_t*)_4636;
  _4648 = *(uint64_t*)_4638;
  if ((((int64_t)_4648) > ((int64_t)_4647))) {
    goto _4684;
  } else {
    _4656__PHI_TEMPORARY = _4646;   /* for PHI node */
    goto _4681;
  }

_4684:
  _4649 = *(void**)_4635;
  _4650 = *(uint8_t*)(((&((uint8_t*)_4649)[((int64_t)_4647)])));
  if ((((int8_t)_4650) > ((int8_t)((uint8_t)-65)))) {
    _4656__PHI_TEMPORARY = _4646;   /* for PHI node */
    goto _4681;
  } else {
    goto _4685;
  }

_4685:
  _4651 = llvm_select_u32((((int64_t)_4647) < ((int64_t)_4648)), (((uint32_t)(uint8_t)_4650)), 0);
  _4652 = *(uint64_t*)_4636;
  *(uint64_t*)_4636 = (llvm_add_u64(_4652, 1));
  _4653 = llvm_neg_u64(_4645);
  _4654 = _4646 | (llvm_select_u32((((int64_t)_4645) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4653) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4651, (((uint32_t)_4653)))))), (llvm_select_u32((((uint64_t)_4645) > ((uint64_t)UINT64_C(31))), 0, (_4651 << (((uint32_t)_4645)))))));
  _4655 = llvm_add_u64(_4645, -8);
  _4645__PHI_TEMPORARY = _4655;   /* for PHI node */
  _4646__PHI_TEMPORARY = _4654;   /* for PHI node */
  goto _4682;

  } while (1); /* end of syntactic loop '' */
_4681:
  _4656 = _4656__PHI_TEMPORARY;
  _4657 = *(uint64_t*)_4595;
  _4658 = *(uint64_t*)_4597;
  _4659 = jsyn_cbe_fshl_i64(_4658, _4657, 32);
  _4660 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4656)), _4658, 32);
  *(uint64_t*)_4595 = _4659;
  *(uint64_t*)_4597 = _4660;
  _4661 = ((&((uint8_t*)_4591)[((int64_t)56)]));
  _4662 = *(uint64_t*)_4661;
  _4663 = ((&((uint8_t*)_4591)[((int64_t)64)]));
  _4664 = *(uint64_t*)_4663;
  _4665 = ((&((uint8_t*)_4591)[((int64_t)72)]));
  _4666 = *(uint64_t*)_4665;
  _4667 = *(void**)_4591;
  _4668 = *(uint64_t*)(((&((uint8_t*)_4667)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4591)[((int64_t)48)]))) = _4662;
  *(uint64_t*)_4661 = _4664;
  *(uint64_t*)_4663 = _4666;
  *(uint64_t*)_4665 = _4668;
  julia_emit_20((&_4593), _4590, _4591, 71, 1);
  _4632__PHI_TEMPORARY = (&_4593);   /* for PHI node */
  goto _4677;

_4679:
  julia_emit_20((&_4594), _4590, _4591, 535, 1);
  _4632__PHI_TEMPORARY = (&_4594);   /* for PHI node */
  goto _4677;

}


static void julia_lex_minus_47(void* _4686, void* _4687, void* _4688) {
  struct l_array_4_uint64_t _4689;    /* Address-exposed local */
  struct l_array_4_uint64_t _4690;    /* Address-exposed local */
  struct l_array_4_uint64_t _4691;    /* Address-exposed local */
  struct l_array_4_uint64_t _4692;    /* Address-exposed local */
  struct l_array_4_uint64_t _4693;    /* Address-exposed local */
  void* _4694;
  uint64_t _4695;
  void* _4696;
  void* _4697;
  void* _4698;
  uint64_t _4699;
  void* _4700;
  uint64_t _4701;
  void* _4702;
  uint8_t _4703;
  uint8_t _4704;
  uint8_t _4705;
  uint32_t _4706;
  uint64_t _4707;
  uint64_t _4707__PHI_TEMPORARY;
  uint32_t _4708;
  uint32_t _4708__PHI_TEMPORARY;
  uint64_t _4709;
  uint64_t _4710;
  void* _4711;
  uint8_t _4712;
  uint32_t _4713;
  uint64_t _4714;
  uint64_t _4715;
  uint32_t _4716;
  uint64_t _4717;
  uint32_t _4718;
  uint32_t _4718__PHI_TEMPORARY;
  uint64_t _4719;
  uint64_t _4720;
  uint64_t _4721;
  uint64_t _4722;
  void* _4723;
  uint64_t _4724;
  void* _4725;
  uint64_t _4726;
  void* _4727;
  uint64_t _4728;
  void* _4729;
  uint64_t _4730;
  uint64_t _4731;
  void* _4732;
  void* _4733;
  uint64_t _4734;
  void* _4735;
  uint64_t _4736;
  void* _4737;
  uint8_t _4738;
  uint8_t _4739;
  uint8_t _4740;
  uint32_t _4741;
  uint64_t _4742;
  uint64_t _4742__PHI_TEMPORARY;
  uint32_t _4743;
  uint32_t _4743__PHI_TEMPORARY;
  uint64_t _4744;
  uint64_t _4745;
  void* _4746;
  uint8_t _4747;
  uint32_t _4748;
  uint64_t _4749;
  uint64_t _4750;
  uint32_t _4751;
  uint64_t _4752;
  uint32_t _4753;
  uint32_t _4753__PHI_TEMPORARY;
  uint64_t _4754;
  uint64_t _4755;
  uint64_t _4756;
  uint64_t _4757;
  void* _4758;
  uint64_t _4759;
  void* _4760;
  uint64_t _4761;
  void* _4762;
  uint64_t _4763;
  void* _4764;
  uint64_t _4765;
  void* _4766;
  void* _4766__PHI_TEMPORARY;
  void* _4767;
  uint16_t _4768;
  uint64_t _4769;
  void* _4770;
  void* _4771;
  uint64_t _4772;
  void* _4773;
  uint64_t _4774;
  void* _4775;
  uint8_t _4776;
  uint8_t _4777;
  uint8_t _4778;
  uint32_t _4779;
  uint64_t _4780;
  uint64_t _4780__PHI_TEMPORARY;
  uint32_t _4781;
  uint32_t _4781__PHI_TEMPORARY;
  uint64_t _4782;
  uint64_t _4783;
  void* _4784;
  uint8_t _4785;
  uint32_t _4786;
  uint64_t _4787;
  uint64_t _4788;
  uint32_t _4789;
  uint64_t _4790;
  uint32_t _4791;
  uint32_t _4791__PHI_TEMPORARY;
  uint64_t _4792;
  uint64_t _4793;
  uint64_t _4794;
  uint64_t _4795;
  void* _4796;
  uint64_t _4797;
  void* _4798;
  uint64_t _4799;
  void* _4800;
  uint64_t _4801;
  void* _4802;
  uint64_t _4803;
  uint64_t _4804;
  void* _4805;
  void* _4806;
  uint64_t _4807;
  void* _4808;
  uint64_t _4809;
  void* _4810;
  uint8_t _4811;
  uint8_t _4812;
  uint8_t _4813;
  uint32_t _4814;
  uint64_t _4815;
  uint64_t _4815__PHI_TEMPORARY;
  uint32_t _4816;
  uint32_t _4816__PHI_TEMPORARY;
  uint64_t _4817;
  uint64_t _4818;
  void* _4819;
  uint8_t _4820;
  uint32_t _4821;
  uint64_t _4822;
  uint64_t _4823;
  uint32_t _4824;
  uint64_t _4825;
  uint32_t _4826;
  uint32_t _4826__PHI_TEMPORARY;
  uint64_t _4827;
  uint64_t _4828;
  uint64_t _4829;
  uint64_t _4830;
  void* _4831;
  uint64_t _4832;
  void* _4833;
  uint64_t _4834;
  void* _4835;
  uint64_t _4836;
  void* _4837;
  uint64_t _4838;

  _4694 = ((&((uint8_t*)_4688)[((int64_t)32)]));
  _4695 = *(uint64_t*)_4694;
  _4696 = ((&((uint8_t*)_4688)[((int64_t)40)]));
  if (((_4695 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _4839;
  } else {
    goto _4840;
  }

_4839:
  _4697 = *(void**)_4688;
  _4698 = ((&((uint8_t*)_4697)[((int64_t)16)]));
  _4699 = *(uint64_t*)_4698;
  _4700 = ((&((uint8_t*)_4697)[((int64_t)8)]));
  _4701 = *(uint64_t*)_4700;
  if ((((int64_t)_4701) > ((int64_t)_4699))) {
    goto _4841;
  } else {
    _4718__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4842;
  }

_4841:
  _4702 = *(void**)_4697;
  _4703 = *(uint8_t*)(((&((uint8_t*)_4702)[((int64_t)_4699)])));
  *(uint64_t*)_4698 = (llvm_add_u64(_4699, 1));
  _4704 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4703)), 0);
  _4705 = llvm_sub_u8(32, (llvm_shl_u8(_4704, 3)));
  _4706 = (((uint32_t)(uint8_t)_4703)) << 24;
  if ((((uint8_t)_4705) > ((uint8_t)((uint8_t)16)))) {
    _4718__PHI_TEMPORARY = _4706;   /* for PHI node */
    goto _4842;
  } else {
    _4707__PHI_TEMPORARY = 16;   /* for PHI node */
    _4708__PHI_TEMPORARY = _4706;   /* for PHI node */
    goto _4843;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4843:
  _4707 = _4707__PHI_TEMPORARY;
  _4708 = _4708__PHI_TEMPORARY;
  if (((((int64_t)_4707) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4707) < ((uint64_t)(((uint64_t)(uint8_t)_4705)))))) {
    _4718__PHI_TEMPORARY = _4708;   /* for PHI node */
    goto _4842;
  } else {
    goto _4844;
  }

_4844:
  _4709 = *(uint64_t*)_4698;
  _4710 = *(uint64_t*)_4700;
  if ((((int64_t)_4710) > ((int64_t)_4709))) {
    goto _4845;
  } else {
    _4718__PHI_TEMPORARY = _4708;   /* for PHI node */
    goto _4842;
  }

_4845:
  _4711 = *(void**)_4697;
  _4712 = *(uint8_t*)(((&((uint8_t*)_4711)[((int64_t)_4709)])));
  if ((((int8_t)_4712) > ((int8_t)((uint8_t)-65)))) {
    _4718__PHI_TEMPORARY = _4708;   /* for PHI node */
    goto _4842;
  } else {
    goto _4846;
  }

_4846:
  _4713 = llvm_select_u32((((int64_t)_4709) < ((int64_t)_4710)), (((uint32_t)(uint8_t)_4712)), 0);
  _4714 = *(uint64_t*)_4698;
  *(uint64_t*)_4698 = (llvm_add_u64(_4714, 1));
  _4715 = llvm_neg_u64(_4707);
  _4716 = _4708 | (llvm_select_u32((((int64_t)_4707) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4715) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4713, (((uint32_t)_4715)))))), (llvm_select_u32((((uint64_t)_4707) > ((uint64_t)UINT64_C(31))), 0, (_4713 << (((uint32_t)_4707)))))));
  _4717 = llvm_add_u64(_4707, -8);
  _4707__PHI_TEMPORARY = _4717;   /* for PHI node */
  _4708__PHI_TEMPORARY = _4716;   /* for PHI node */
  goto _4843;

  } while (1); /* end of syntactic loop '' */
_4842:
  _4718 = _4718__PHI_TEMPORARY;
  _4719 = *(uint64_t*)_4694;
  _4720 = *(uint64_t*)_4696;
  _4721 = jsyn_cbe_fshl_i64(_4720, _4719, 32);
  _4722 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4718)), _4720, 32);
  *(uint64_t*)_4694 = _4721;
  *(uint64_t*)_4696 = _4722;
  _4723 = ((&((uint8_t*)_4688)[((int64_t)56)]));
  _4724 = *(uint64_t*)_4723;
  _4725 = ((&((uint8_t*)_4688)[((int64_t)64)]));
  _4726 = *(uint64_t*)_4725;
  _4727 = ((&((uint8_t*)_4688)[((int64_t)72)]));
  _4728 = *(uint64_t*)_4727;
  _4729 = *(void**)_4688;
  _4730 = *(uint64_t*)(((&((uint8_t*)_4729)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4688)[((int64_t)48)]))) = _4724;
  *(uint64_t*)_4723 = _4726;
  *(uint64_t*)_4725 = _4728;
  *(uint64_t*)_4727 = _4730;
  _4731 = *(uint64_t*)_4694;
  if (((_4731 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _4847;
  } else {
    goto _4848;
  }

_4847:
  _4732 = *(void**)_4688;
  _4733 = ((&((uint8_t*)_4732)[((int64_t)16)]));
  _4734 = *(uint64_t*)_4733;
  _4735 = ((&((uint8_t*)_4732)[((int64_t)8)]));
  _4736 = *(uint64_t*)_4735;
  if ((((int64_t)_4736) > ((int64_t)_4734))) {
    goto _4849;
  } else {
    _4753__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4850;
  }

_4849:
  _4737 = *(void**)_4732;
  _4738 = *(uint8_t*)(((&((uint8_t*)_4737)[((int64_t)_4734)])));
  *(uint64_t*)_4733 = (llvm_add_u64(_4734, 1));
  _4739 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4738)), 0);
  _4740 = llvm_sub_u8(32, (llvm_shl_u8(_4739, 3)));
  _4741 = (((uint32_t)(uint8_t)_4738)) << 24;
  if ((((uint8_t)_4740) > ((uint8_t)((uint8_t)16)))) {
    _4753__PHI_TEMPORARY = _4741;   /* for PHI node */
    goto _4850;
  } else {
    _4742__PHI_TEMPORARY = 16;   /* for PHI node */
    _4743__PHI_TEMPORARY = _4741;   /* for PHI node */
    goto _4851;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4851:
  _4742 = _4742__PHI_TEMPORARY;
  _4743 = _4743__PHI_TEMPORARY;
  if (((((int64_t)_4742) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4742) < ((uint64_t)(((uint64_t)(uint8_t)_4740)))))) {
    _4753__PHI_TEMPORARY = _4743;   /* for PHI node */
    goto _4850;
  } else {
    goto _4852;
  }

_4852:
  _4744 = *(uint64_t*)_4733;
  _4745 = *(uint64_t*)_4735;
  if ((((int64_t)_4745) > ((int64_t)_4744))) {
    goto _4853;
  } else {
    _4753__PHI_TEMPORARY = _4743;   /* for PHI node */
    goto _4850;
  }

_4853:
  _4746 = *(void**)_4732;
  _4747 = *(uint8_t*)(((&((uint8_t*)_4746)[((int64_t)_4744)])));
  if ((((int8_t)_4747) > ((int8_t)((uint8_t)-65)))) {
    _4753__PHI_TEMPORARY = _4743;   /* for PHI node */
    goto _4850;
  } else {
    goto _4854;
  }

_4854:
  _4748 = llvm_select_u32((((int64_t)_4744) < ((int64_t)_4745)), (((uint32_t)(uint8_t)_4747)), 0);
  _4749 = *(uint64_t*)_4733;
  *(uint64_t*)_4733 = (llvm_add_u64(_4749, 1));
  _4750 = llvm_neg_u64(_4742);
  _4751 = _4743 | (llvm_select_u32((((int64_t)_4742) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4750) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4748, (((uint32_t)_4750)))))), (llvm_select_u32((((uint64_t)_4742) > ((uint64_t)UINT64_C(31))), 0, (_4748 << (((uint32_t)_4742)))))));
  _4752 = llvm_add_u64(_4742, -8);
  _4742__PHI_TEMPORARY = _4752;   /* for PHI node */
  _4743__PHI_TEMPORARY = _4751;   /* for PHI node */
  goto _4851;

  } while (1); /* end of syntactic loop '' */
_4850:
  _4753 = _4753__PHI_TEMPORARY;
  _4754 = *(uint64_t*)_4694;
  _4755 = *(uint64_t*)_4696;
  _4756 = jsyn_cbe_fshl_i64(_4755, _4754, 32);
  _4757 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4753)), _4755, 32);
  *(uint64_t*)_4694 = _4756;
  *(uint64_t*)_4696 = _4757;
  _4758 = ((&((uint8_t*)_4688)[((int64_t)56)]));
  _4759 = *(uint64_t*)_4758;
  _4760 = ((&((uint8_t*)_4688)[((int64_t)64)]));
  _4761 = *(uint64_t*)_4760;
  _4762 = ((&((uint8_t*)_4688)[((int64_t)72)]));
  _4763 = *(uint64_t*)_4762;
  _4764 = *(void**)_4688;
  _4765 = *(uint64_t*)(((&((uint8_t*)_4764)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4688)[((int64_t)48)]))) = _4759;
  *(uint64_t*)_4758 = _4761;
  *(uint64_t*)_4760 = _4763;
  *(uint64_t*)_4762 = _4765;
  julia_emit_20((&_4689), _4687, _4688, 80, 1);
  _4766__PHI_TEMPORARY = (&_4689);   /* for PHI node */
  goto _4855;

_4855:
  _4766 = _4766__PHI_TEMPORARY;
  _4767 = memcpy(_4686, _4766, 32);
  return;
_4848:
  julia_emit_20((&_4690), _4687, _4688, 66, 1);
  _4766__PHI_TEMPORARY = (&_4690);   /* for PHI node */
  goto _4855;

_4840:
  _4768 = *(uint16_t*)(((&((uint8_t*)_4688)[((int64_t)16)])));
  if ((_4768 == ((uint16_t)707))) {
    goto _4856;
  } else {
    goto _4857;
  }

_4857:
  _4769 = *(uint64_t*)_4694;
  if (((_4769 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _4858;
  } else {
    goto _4856;
  }

_4858:
  _4770 = *(void**)_4688;
  _4771 = ((&((uint8_t*)_4770)[((int64_t)16)]));
  _4772 = *(uint64_t*)_4771;
  _4773 = ((&((uint8_t*)_4770)[((int64_t)8)]));
  _4774 = *(uint64_t*)_4773;
  if ((((int64_t)_4774) > ((int64_t)_4772))) {
    goto _4859;
  } else {
    _4791__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4860;
  }

_4859:
  _4775 = *(void**)_4770;
  _4776 = *(uint8_t*)(((&((uint8_t*)_4775)[((int64_t)_4772)])));
  *(uint64_t*)_4771 = (llvm_add_u64(_4772, 1));
  _4777 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4776)), 0);
  _4778 = llvm_sub_u8(32, (llvm_shl_u8(_4777, 3)));
  _4779 = (((uint32_t)(uint8_t)_4776)) << 24;
  if ((((uint8_t)_4778) > ((uint8_t)((uint8_t)16)))) {
    _4791__PHI_TEMPORARY = _4779;   /* for PHI node */
    goto _4860;
  } else {
    _4780__PHI_TEMPORARY = 16;   /* for PHI node */
    _4781__PHI_TEMPORARY = _4779;   /* for PHI node */
    goto _4861;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4861:
  _4780 = _4780__PHI_TEMPORARY;
  _4781 = _4781__PHI_TEMPORARY;
  if (((((int64_t)_4780) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4780) < ((uint64_t)(((uint64_t)(uint8_t)_4778)))))) {
    _4791__PHI_TEMPORARY = _4781;   /* for PHI node */
    goto _4860;
  } else {
    goto _4862;
  }

_4862:
  _4782 = *(uint64_t*)_4771;
  _4783 = *(uint64_t*)_4773;
  if ((((int64_t)_4783) > ((int64_t)_4782))) {
    goto _4863;
  } else {
    _4791__PHI_TEMPORARY = _4781;   /* for PHI node */
    goto _4860;
  }

_4863:
  _4784 = *(void**)_4770;
  _4785 = *(uint8_t*)(((&((uint8_t*)_4784)[((int64_t)_4782)])));
  if ((((int8_t)_4785) > ((int8_t)((uint8_t)-65)))) {
    _4791__PHI_TEMPORARY = _4781;   /* for PHI node */
    goto _4860;
  } else {
    goto _4864;
  }

_4864:
  _4786 = llvm_select_u32((((int64_t)_4782) < ((int64_t)_4783)), (((uint32_t)(uint8_t)_4785)), 0);
  _4787 = *(uint64_t*)_4771;
  *(uint64_t*)_4771 = (llvm_add_u64(_4787, 1));
  _4788 = llvm_neg_u64(_4780);
  _4789 = _4781 | (llvm_select_u32((((int64_t)_4780) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4788) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4786, (((uint32_t)_4788)))))), (llvm_select_u32((((uint64_t)_4780) > ((uint64_t)UINT64_C(31))), 0, (_4786 << (((uint32_t)_4780)))))));
  _4790 = llvm_add_u64(_4780, -8);
  _4780__PHI_TEMPORARY = _4790;   /* for PHI node */
  _4781__PHI_TEMPORARY = _4789;   /* for PHI node */
  goto _4861;

  } while (1); /* end of syntactic loop '' */
_4860:
  _4791 = _4791__PHI_TEMPORARY;
  _4792 = *(uint64_t*)_4694;
  _4793 = *(uint64_t*)_4696;
  _4794 = jsyn_cbe_fshl_i64(_4793, _4792, 32);
  _4795 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4791)), _4793, 32);
  *(uint64_t*)_4694 = _4794;
  *(uint64_t*)_4696 = _4795;
  _4796 = ((&((uint8_t*)_4688)[((int64_t)56)]));
  _4797 = *(uint64_t*)_4796;
  _4798 = ((&((uint8_t*)_4688)[((int64_t)64)]));
  _4799 = *(uint64_t*)_4798;
  _4800 = ((&((uint8_t*)_4688)[((int64_t)72)]));
  _4801 = *(uint64_t*)_4800;
  _4802 = *(void**)_4688;
  _4803 = *(uint64_t*)(((&((uint8_t*)_4802)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4688)[((int64_t)48)]))) = _4797;
  *(uint64_t*)_4796 = _4799;
  *(uint64_t*)_4798 = _4801;
  *(uint64_t*)_4800 = _4803;
  julia_emit_20((&_4691), _4687, _4688, 711, 1);
  _4766__PHI_TEMPORARY = (&_4691);   /* for PHI node */
  goto _4855;

_4856:
  _4804 = *(uint64_t*)_4694;
  if (((_4804 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4865;
  } else {
    goto _4866;
  }

_4865:
  _4805 = *(void**)_4688;
  _4806 = ((&((uint8_t*)_4805)[((int64_t)16)]));
  _4807 = *(uint64_t*)_4806;
  _4808 = ((&((uint8_t*)_4805)[((int64_t)8)]));
  _4809 = *(uint64_t*)_4808;
  if ((((int64_t)_4809) > ((int64_t)_4807))) {
    goto _4867;
  } else {
    _4826__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4868;
  }

_4867:
  _4810 = *(void**)_4805;
  _4811 = *(uint8_t*)(((&((uint8_t*)_4810)[((int64_t)_4807)])));
  *(uint64_t*)_4806 = (llvm_add_u64(_4807, 1));
  _4812 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4811)), 0);
  _4813 = llvm_sub_u8(32, (llvm_shl_u8(_4812, 3)));
  _4814 = (((uint32_t)(uint8_t)_4811)) << 24;
  if ((((uint8_t)_4813) > ((uint8_t)((uint8_t)16)))) {
    _4826__PHI_TEMPORARY = _4814;   /* for PHI node */
    goto _4868;
  } else {
    _4815__PHI_TEMPORARY = 16;   /* for PHI node */
    _4816__PHI_TEMPORARY = _4814;   /* for PHI node */
    goto _4869;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4869:
  _4815 = _4815__PHI_TEMPORARY;
  _4816 = _4816__PHI_TEMPORARY;
  if (((((int64_t)_4815) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4815) < ((uint64_t)(((uint64_t)(uint8_t)_4813)))))) {
    _4826__PHI_TEMPORARY = _4816;   /* for PHI node */
    goto _4868;
  } else {
    goto _4870;
  }

_4870:
  _4817 = *(uint64_t*)_4806;
  _4818 = *(uint64_t*)_4808;
  if ((((int64_t)_4818) > ((int64_t)_4817))) {
    goto _4871;
  } else {
    _4826__PHI_TEMPORARY = _4816;   /* for PHI node */
    goto _4868;
  }

_4871:
  _4819 = *(void**)_4805;
  _4820 = *(uint8_t*)(((&((uint8_t*)_4819)[((int64_t)_4817)])));
  if ((((int8_t)_4820) > ((int8_t)((uint8_t)-65)))) {
    _4826__PHI_TEMPORARY = _4816;   /* for PHI node */
    goto _4868;
  } else {
    goto _4872;
  }

_4872:
  _4821 = llvm_select_u32((((int64_t)_4817) < ((int64_t)_4818)), (((uint32_t)(uint8_t)_4820)), 0);
  _4822 = *(uint64_t*)_4806;
  *(uint64_t*)_4806 = (llvm_add_u64(_4822, 1));
  _4823 = llvm_neg_u64(_4815);
  _4824 = _4816 | (llvm_select_u32((((int64_t)_4815) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4823) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4821, (((uint32_t)_4823)))))), (llvm_select_u32((((uint64_t)_4815) > ((uint64_t)UINT64_C(31))), 0, (_4821 << (((uint32_t)_4815)))))));
  _4825 = llvm_add_u64(_4815, -8);
  _4815__PHI_TEMPORARY = _4825;   /* for PHI node */
  _4816__PHI_TEMPORARY = _4824;   /* for PHI node */
  goto _4869;

  } while (1); /* end of syntactic loop '' */
_4868:
  _4826 = _4826__PHI_TEMPORARY;
  _4827 = *(uint64_t*)_4694;
  _4828 = *(uint64_t*)_4696;
  _4829 = jsyn_cbe_fshl_i64(_4828, _4827, 32);
  _4830 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4826)), _4828, 32);
  *(uint64_t*)_4694 = _4829;
  *(uint64_t*)_4696 = _4830;
  _4831 = ((&((uint8_t*)_4688)[((int64_t)56)]));
  _4832 = *(uint64_t*)_4831;
  _4833 = ((&((uint8_t*)_4688)[((int64_t)64)]));
  _4834 = *(uint64_t*)_4833;
  _4835 = ((&((uint8_t*)_4688)[((int64_t)72)]));
  _4836 = *(uint64_t*)_4835;
  _4837 = *(void**)_4688;
  _4838 = *(uint64_t*)(((&((uint8_t*)_4837)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4688)[((int64_t)48)]))) = _4832;
  *(uint64_t*)_4831 = _4834;
  *(uint64_t*)_4833 = _4836;
  *(uint64_t*)_4835 = _4838;
  julia_emit_20((&_4692), _4687, _4688, 71, 1);
  _4766__PHI_TEMPORARY = (&_4692);   /* for PHI node */
  goto _4855;

_4866:
  julia_emit_20((&_4693), _4687, _4688, 536, 1);
  _4766__PHI_TEMPORARY = (&_4693);   /* for PHI node */
  goto _4855;

}


static void julia_lex_backtick_48(void* _4873, void* _4874, void* _4875) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _4876 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _4877;
  void* _4878;
  struct l_array_4_uint64_t _4879;    /* Address-exposed local */
  struct l_array_4_uint64_t _4880;    /* Address-exposed local */
  void* _4881;
  uint64_t _4882;
  void* _4883;
  uint64_t _4884;
  bool _4885;
  uint8_t _4886;
  void* _4887;
  void* _4888;
  void* _4889;
  void* _4890;
  uint64_t _4891;
  uint64_t _4892;
  void* _4893;
  uint64_t _4894;
  void* _4895;
  void* _4896;
  void* _4897;
  void* _4898;
  uint64_t _4899;
  void* _4900;
  uint64_t _4901;
  void* _4902;
  uint8_t _4903;
  uint8_t _4904;
  uint8_t _4905;
  uint32_t _4906;
  uint64_t _4907;
  uint64_t _4907__PHI_TEMPORARY;
  uint32_t _4908;
  uint32_t _4908__PHI_TEMPORARY;
  uint64_t _4909;
  uint64_t _4910;
  void* _4911;
  uint8_t _4912;
  uint32_t _4913;
  uint64_t _4914;
  uint64_t _4915;
  uint32_t _4916;
  uint64_t _4917;
  uint32_t _4918;
  uint32_t _4918__PHI_TEMPORARY;
  uint64_t _4919;
  uint64_t _4920;
  uint64_t _4921;
  uint64_t _4922;
  void* _4923;
  void* _4924;
  uint64_t _4925;
  void* _4926;
  uint64_t _4927;
  void* _4928;
  uint64_t _4929;
  void* _4930;
  uint64_t _4931;
  void* _4932;
  void* _4933;
  uint64_t _4934;
  void* _4935;
  uint64_t _4936;
  void* _4937;
  uint8_t _4938;
  uint8_t _4939;
  uint8_t _4940;
  uint32_t _4941;
  uint64_t _4942;
  uint64_t _4942__PHI_TEMPORARY;
  uint32_t _4943;
  uint32_t _4943__PHI_TEMPORARY;
  uint64_t _4944;
  uint64_t _4945;
  void* _4946;
  uint8_t _4947;
  uint32_t _4948;
  uint64_t _4949;
  uint64_t _4950;
  uint32_t _4951;
  uint64_t _4952;
  uint32_t _4953;
  uint32_t _4953__PHI_TEMPORARY;
  uint64_t _4954;
  uint64_t _4955;
  uint64_t _4956;
  uint64_t _4957;
  uint64_t _4958;
  uint64_t _4959;
  uint64_t _4960;
  void* _4961;
  uint64_t _4962;
  void* _4963;
  void* _4963__PHI_TEMPORARY;
  void* _4964;
  void* _4965;

  _4877 = memset((&_4876), 0, 24);
  *((uint64_t*)&_4876) = 4;
  _4878 = *(void**)_4874;
  *(void**)(((&((uint8_t*)(&_4876))[((int64_t)8)]))) = _4878;
  *(void**)_4874 = (&_4876);
  _4881 = ((&((uint8_t*)_4875)[((int64_t)32)]));
  _4882 = *(uint64_t*)_4881;
  _4883 = ((&((uint8_t*)_4875)[((int64_t)40)]));
  _4884 = *(uint64_t*)_4883;
  _4885 = llvm_select_bool(((_4882 & INT64_C(-4294967296)) == UINT64_C(6917529027641081856)), ((_4884 & INT64_C(4294967295)) == UINT64_C(1610612736)), 0);
  _4886 = ((uint8_t)(bool)_4885);
  _4887 = *(void**)(((&((uint8_t*)_4875)[((int64_t)24)])));
  _4888 = *(void**)_4887;
  _4889 = *(void**)(((&((uint8_t*)_4887)[((int64_t)8)])));
  _4890 = ((&((uint8_t*)_4887)[((int64_t)16)]));
  _4891 = *(uint64_t*)_4890;
  _4892 = llvm_add_u64(_4891, 1);
  _4893 = *(void**)(((&((uint8_t*)_4889)[((int64_t)8)])));
  _4894 = *(uint64_t*)_4889;
  if ((((int64_t)_4894) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_4888)), (((uint64_t)(uintptr_t)_4893)))), 4)), 1)), _4891))))) {
    goto _4966;
  } else {
    goto _4967;
  }

_4966:
  *(void**)(((&((uint8_t*)(&_4876))[((int64_t)16)]))) = _4887;
  julia__growend_internalNOT_OC__13(_4874, _4887, 1, _4891);
  goto _4967;

_4967:
  *(uint64_t*)_4890 = _4892;
  _4895 = *(void**)_4887;
  _4896 = ((&((uint8_t*)_4895)[((int64_t)(_4891 << 4))]));
  *(uint8_t*)_4896 = _4886;
  *(uint8_t*)(((&((uint8_t*)_4896)[((int64_t)1)]))) = 1;
  *(uint32_t*)(((&((uint8_t*)_4896)[((int64_t)4)]))) = 1610612736u;
  *(uint64_t*)(((&((uint8_t*)_4896)[((int64_t)8)]))) = 0;
  if (_4885) {
    goto _4968;
  } else {
    goto _4969;
  }

_4968:
  _4897 = *(void**)_4875;
  _4898 = ((&((uint8_t*)_4897)[((int64_t)16)]));
  _4899 = *(uint64_t*)_4898;
  _4900 = ((&((uint8_t*)_4897)[((int64_t)8)]));
  _4901 = *(uint64_t*)_4900;
  if ((((int64_t)_4901) > ((int64_t)_4899))) {
    goto _4970;
  } else {
    _4918__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4971;
  }

_4970:
  _4902 = *(void**)_4897;
  _4903 = *(uint8_t*)(((&((uint8_t*)_4902)[((int64_t)_4899)])));
  *(uint64_t*)_4898 = (llvm_add_u64(_4899, 1));
  _4904 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4903)), 0);
  _4905 = llvm_sub_u8(32, (llvm_shl_u8(_4904, 3)));
  _4906 = (((uint32_t)(uint8_t)_4903)) << 24;
  if ((((uint8_t)_4905) > ((uint8_t)((uint8_t)16)))) {
    _4918__PHI_TEMPORARY = _4906;   /* for PHI node */
    goto _4971;
  } else {
    _4907__PHI_TEMPORARY = 16;   /* for PHI node */
    _4908__PHI_TEMPORARY = _4906;   /* for PHI node */
    goto _4972;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4972:
  _4907 = _4907__PHI_TEMPORARY;
  _4908 = _4908__PHI_TEMPORARY;
  if (((((int64_t)_4907) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4907) < ((uint64_t)(((uint64_t)(uint8_t)_4905)))))) {
    _4918__PHI_TEMPORARY = _4908;   /* for PHI node */
    goto _4971;
  } else {
    goto _4973;
  }

_4973:
  _4909 = *(uint64_t*)_4898;
  _4910 = *(uint64_t*)_4900;
  if ((((int64_t)_4910) > ((int64_t)_4909))) {
    goto _4974;
  } else {
    _4918__PHI_TEMPORARY = _4908;   /* for PHI node */
    goto _4971;
  }

_4974:
  _4911 = *(void**)_4897;
  _4912 = *(uint8_t*)(((&((uint8_t*)_4911)[((int64_t)_4909)])));
  if ((((int8_t)_4912) > ((int8_t)((uint8_t)-65)))) {
    _4918__PHI_TEMPORARY = _4908;   /* for PHI node */
    goto _4971;
  } else {
    goto _4975;
  }

_4975:
  _4913 = llvm_select_u32((((int64_t)_4909) < ((int64_t)_4910)), (((uint32_t)(uint8_t)_4912)), 0);
  _4914 = *(uint64_t*)_4898;
  *(uint64_t*)_4898 = (llvm_add_u64(_4914, 1));
  _4915 = llvm_neg_u64(_4907);
  _4916 = _4908 | (llvm_select_u32((((int64_t)_4907) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4915) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4913, (((uint32_t)_4915)))))), (llvm_select_u32((((uint64_t)_4907) > ((uint64_t)UINT64_C(31))), 0, (_4913 << (((uint32_t)_4907)))))));
  _4917 = llvm_add_u64(_4907, -8);
  _4907__PHI_TEMPORARY = _4917;   /* for PHI node */
  _4908__PHI_TEMPORARY = _4916;   /* for PHI node */
  goto _4972;

  } while (1); /* end of syntactic loop '' */
_4971:
  _4918 = _4918__PHI_TEMPORARY;
  _4919 = *(uint64_t*)_4881;
  _4920 = *(uint64_t*)_4883;
  _4921 = jsyn_cbe_fshl_i64(_4920, _4919, 32);
  _4922 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4918)), _4920, 32);
  *(uint64_t*)_4881 = _4921;
  *(uint64_t*)_4883 = _4922;
  _4923 = ((&((uint8_t*)_4875)[((int64_t)48)]));
  _4924 = ((&((uint8_t*)_4875)[((int64_t)56)]));
  _4925 = *(uint64_t*)_4924;
  _4926 = ((&((uint8_t*)_4875)[((int64_t)64)]));
  _4927 = *(uint64_t*)_4926;
  _4928 = ((&((uint8_t*)_4875)[((int64_t)72)]));
  _4929 = *(uint64_t*)_4928;
  _4930 = *(void**)_4875;
  _4931 = *(uint64_t*)(((&((uint8_t*)_4930)[((int64_t)16)])));
  *(uint64_t*)_4923 = _4925;
  *(uint64_t*)_4924 = _4927;
  *(uint64_t*)_4926 = _4929;
  *(uint64_t*)_4928 = _4931;
  _4932 = *(void**)_4875;
  _4933 = ((&((uint8_t*)_4932)[((int64_t)16)]));
  _4934 = *(uint64_t*)_4933;
  _4935 = ((&((uint8_t*)_4932)[((int64_t)8)]));
  _4936 = *(uint64_t*)_4935;
  if ((((int64_t)_4936) > ((int64_t)_4934))) {
    goto _4976;
  } else {
    _4953__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4977;
  }

_4976:
  _4937 = *(void**)_4932;
  _4938 = *(uint8_t*)(((&((uint8_t*)_4937)[((int64_t)_4934)])));
  *(uint64_t*)_4933 = (llvm_add_u64(_4934, 1));
  _4939 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4938)), 0);
  _4940 = llvm_sub_u8(32, (llvm_shl_u8(_4939, 3)));
  _4941 = (((uint32_t)(uint8_t)_4938)) << 24;
  if ((((uint8_t)_4940) > ((uint8_t)((uint8_t)16)))) {
    _4953__PHI_TEMPORARY = _4941;   /* for PHI node */
    goto _4977;
  } else {
    _4942__PHI_TEMPORARY = 16;   /* for PHI node */
    _4943__PHI_TEMPORARY = _4941;   /* for PHI node */
    goto _4978;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4978:
  _4942 = _4942__PHI_TEMPORARY;
  _4943 = _4943__PHI_TEMPORARY;
  if (((((int64_t)_4942) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4942) < ((uint64_t)(((uint64_t)(uint8_t)_4940)))))) {
    _4953__PHI_TEMPORARY = _4943;   /* for PHI node */
    goto _4977;
  } else {
    goto _4979;
  }

_4979:
  _4944 = *(uint64_t*)_4933;
  _4945 = *(uint64_t*)_4935;
  if ((((int64_t)_4945) > ((int64_t)_4944))) {
    goto _4980;
  } else {
    _4953__PHI_TEMPORARY = _4943;   /* for PHI node */
    goto _4977;
  }

_4980:
  _4946 = *(void**)_4932;
  _4947 = *(uint8_t*)(((&((uint8_t*)_4946)[((int64_t)_4944)])));
  if ((((int8_t)_4947) > ((int8_t)((uint8_t)-65)))) {
    _4953__PHI_TEMPORARY = _4943;   /* for PHI node */
    goto _4977;
  } else {
    goto _4981;
  }

_4981:
  _4948 = llvm_select_u32((((int64_t)_4944) < ((int64_t)_4945)), (((uint32_t)(uint8_t)_4947)), 0);
  _4949 = *(uint64_t*)_4933;
  *(uint64_t*)_4933 = (llvm_add_u64(_4949, 1));
  _4950 = llvm_neg_u64(_4942);
  _4951 = _4943 | (llvm_select_u32((((int64_t)_4942) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4950) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4948, (((uint32_t)_4950)))))), (llvm_select_u32((((uint64_t)_4942) > ((uint64_t)UINT64_C(31))), 0, (_4948 << (((uint32_t)_4942)))))));
  _4952 = llvm_add_u64(_4942, -8);
  _4942__PHI_TEMPORARY = _4952;   /* for PHI node */
  _4943__PHI_TEMPORARY = _4951;   /* for PHI node */
  goto _4978;

  } while (1); /* end of syntactic loop '' */
_4977:
  _4953 = _4953__PHI_TEMPORARY;
  _4954 = *(uint64_t*)_4881;
  _4955 = *(uint64_t*)_4883;
  _4956 = jsyn_cbe_fshl_i64(_4955, _4954, 32);
  _4957 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4953)), _4955, 32);
  *(uint64_t*)_4881 = _4956;
  *(uint64_t*)_4883 = _4957;
  _4958 = *(uint64_t*)_4924;
  _4959 = *(uint64_t*)_4926;
  _4960 = *(uint64_t*)_4928;
  _4961 = *(void**)_4875;
  _4962 = *(uint64_t*)(((&((uint8_t*)_4961)[((int64_t)16)])));
  *(uint64_t*)_4923 = _4958;
  *(uint64_t*)_4924 = _4959;
  *(uint64_t*)_4926 = _4960;
  *(uint64_t*)_4928 = _4962;
  julia_emit_20((&_4879), _4874, _4875, 65, 1);
  _4963__PHI_TEMPORARY = (&_4879);   /* for PHI node */
  goto _4982;

_4982:
  _4963 = _4963__PHI_TEMPORARY;
  _4964 = memcpy(_4873, _4963, 32);
  _4965 = *(void**)(((&((uint8_t*)(&_4876))[((int64_t)8)])));
  *(void**)_4874 = _4965;
  return;
_4969:
  julia_emit_20((&_4880), _4874, _4875, 64, 1);
  _4963__PHI_TEMPORARY = (&_4880);   /* for PHI node */
  goto _4982;

}


static void julia_lex_digit_49(void* _4983, void* _4984, void* _4985, uint16_t _4986) {
  struct l_array_4_uint64_t _4987;    /* Address-exposed local */
  struct l_array_4_uint64_t _4988;    /* Address-exposed local */
  struct l_array_4_uint64_t _4989;    /* Address-exposed local */
  struct l_array_4_uint64_t _4990;    /* Address-exposed local */
  struct l_array_4_uint64_t _4991;    /* Address-exposed local */
  struct l_array_4_uint64_t _4992;    /* Address-exposed local */
  struct l_array_4_uint64_t _4993;    /* Address-exposed local */
  struct l_array_4_uint64_t _4994;    /* Address-exposed local */
  struct l_array_4_uint64_t _4995;    /* Address-exposed local */
  struct l_array_4_uint64_t _4996;    /* Address-exposed local */
  struct l_array_4_uint64_t _4997;    /* Address-exposed local */
  struct l_array_4_uint64_t _4998;    /* Address-exposed local */
  struct l_array_4_uint64_t _4999;    /* Address-exposed local */
  struct l_array_4_uint64_t _5000;    /* Address-exposed local */
  uint8_t _5001;
  void* _5002;
  uint64_t _5003;
  void* _5004;
  uint64_t _5005;
  uint64_t _5006;
  uint32_t _5007;
  void* _5008;
  void* _5008__PHI_TEMPORARY;
  void* _5009;
  void* _5010;
  void* _5011;
  uint64_t _5012;
  void* _5013;
  uint64_t _5014;
  void* _5015;
  uint8_t _5016;
  uint8_t _5017;
  uint8_t _5018;
  uint32_t _5019;
  uint64_t _5020;
  uint64_t _5020__PHI_TEMPORARY;
  uint32_t _5021;
  uint32_t _5021__PHI_TEMPORARY;
  uint64_t _5022;
  uint64_t _5023;
  void* _5024;
  uint8_t _5025;
  uint32_t _5026;
  uint64_t _5027;
  uint64_t _5028;
  uint32_t _5029;
  uint64_t _5030;
  uint32_t _5031;
  uint32_t _5031__PHI_TEMPORARY;
  uint64_t _5032;
  uint64_t _5033;
  uint64_t _5034;
  uint64_t _5035;
  void* _5036;
  uint64_t _5037;
  void* _5038;
  uint64_t _5039;
  void* _5040;
  uint64_t _5041;
  void* _5042;
  uint64_t _5043;
  uint8_t _5044;
  void* _5045;
  void* _5046;
  uint64_t _5047;
  void* _5048;
  uint64_t _5049;
  void* _5050;
  uint8_t _5051;
  uint8_t _5052;
  uint8_t _5053;
  uint32_t _5054;
  uint64_t _5055;
  uint64_t _5055__PHI_TEMPORARY;
  uint32_t _5056;
  uint32_t _5056__PHI_TEMPORARY;
  uint64_t _5057;
  uint64_t _5058;
  void* _5059;
  uint8_t _5060;
  uint32_t _5061;
  uint64_t _5062;
  uint64_t _5063;
  uint32_t _5064;
  uint64_t _5065;
  uint32_t _5066;
  uint32_t _5066__PHI_TEMPORARY;
  uint64_t _5067;
  uint64_t _5068;
  uint64_t _5069;
  uint64_t _5070;
  void* _5071;
  uint64_t _5072;
  void* _5073;
  uint64_t _5074;
  void* _5075;
  uint64_t _5076;
  void* _5077;
  uint64_t _5078;
  void* _5079;
  void* _5080;
  uint64_t _5081;
  void* _5082;
  uint64_t _5083;
  void* _5084;
  uint8_t _5085;
  uint8_t _5086;
  uint8_t _5087;
  uint32_t _5088;
  uint64_t _5089;
  uint64_t _5089__PHI_TEMPORARY;
  uint32_t _5090;
  uint32_t _5090__PHI_TEMPORARY;
  uint64_t _5091;
  uint64_t _5092;
  void* _5093;
  uint8_t _5094;
  uint32_t _5095;
  uint64_t _5096;
  uint64_t _5097;
  uint32_t _5098;
  uint64_t _5099;
  uint32_t _5100;
  uint32_t _5100__PHI_TEMPORARY;
  uint64_t _5101;
  uint64_t _5102;
  uint64_t _5103;
  uint64_t _5104;
  void* _5105;
  void* _5106;
  uint64_t _5107;
  void* _5108;
  uint64_t _5109;
  void* _5110;
  uint64_t _5111;
  void* _5112;
  uint64_t _5113;
  uint64_t _5114;
  void* _5115;
  void* _5116;
  uint64_t _5117;
  void* _5118;
  uint64_t _5119;
  void* _5120;
  uint8_t _5121;
  uint8_t _5122;
  uint8_t _5123;
  uint32_t _5124;
  uint64_t _5125;
  uint64_t _5125__PHI_TEMPORARY;
  uint32_t _5126;
  uint32_t _5126__PHI_TEMPORARY;
  uint64_t _5127;
  uint64_t _5128;
  void* _5129;
  uint8_t _5130;
  uint32_t _5131;
  uint64_t _5132;
  uint64_t _5133;
  uint32_t _5134;
  uint64_t _5135;
  uint32_t _5136;
  uint32_t _5136__PHI_TEMPORARY;
  uint64_t _5137;
  uint64_t _5138;
  uint64_t _5139;
  uint64_t _5140;
  uint64_t _5141;
  uint64_t _5142;
  uint64_t _5143;
  void* _5144;
  uint64_t _5145;
  uint8_t _5146;
  uint64_t _5147;
  uint64_t _5148;
  uint32_t _5149;
  uint64_t _5150;
  uint32_t _5151;
  uint16_t _5152;
  void* _5153;
  void* _5154;
  uint64_t _5155;
  void* _5156;
  uint64_t _5157;
  void* _5158;
  uint8_t _5159;
  uint8_t _5160;
  uint8_t _5161;
  uint32_t _5162;
  uint64_t _5163;
  uint64_t _5163__PHI_TEMPORARY;
  uint32_t _5164;
  uint32_t _5164__PHI_TEMPORARY;
  uint64_t _5165;
  uint64_t _5166;
  void* _5167;
  uint8_t _5168;
  uint32_t _5169;
  uint64_t _5170;
  uint64_t _5171;
  uint32_t _5172;
  uint64_t _5173;
  uint32_t _5174;
  uint32_t _5174__PHI_TEMPORARY;
  uint64_t _5175;
  uint64_t _5176;
  uint64_t _5177;
  uint64_t _5178;
  uint64_t _5179;
  uint64_t _5180;
  uint64_t _5181;
  void* _5182;
  uint64_t _5183;
  uint64_t _5184;
  void* _5185;
  void* _5186;
  uint64_t _5187;
  void* _5188;
  uint64_t _5189;
  void* _5190;
  uint8_t _5191;
  uint8_t _5192;
  uint8_t _5193;
  uint32_t _5194;
  uint64_t _5195;
  uint64_t _5195__PHI_TEMPORARY;
  uint32_t _5196;
  uint32_t _5196__PHI_TEMPORARY;
  uint64_t _5197;
  uint64_t _5198;
  void* _5199;
  uint8_t _5200;
  uint32_t _5201;
  uint64_t _5202;
  uint64_t _5203;
  uint32_t _5204;
  uint64_t _5205;
  uint32_t _5206;
  uint32_t _5206__PHI_TEMPORARY;
  bool _5207;
  bool _5207__PHI_TEMPORARY;
  uint64_t _5208;
  uint64_t _5209;
  uint64_t _5210;
  uint64_t _5211;
  uint64_t _5212;
  uint64_t _5213;
  uint64_t _5214;
  void* _5215;
  uint64_t _5216;
  bool _5217;
  bool _5217__PHI_TEMPORARY;
  uint64_t _5218;
  uint64_t _5219;
  void* _5220;
  void* _5221;
  uint64_t _5222;
  void* _5223;
  uint64_t _5224;
  void* _5225;
  uint8_t _5226;
  uint8_t _5227;
  uint8_t _5228;
  uint32_t _5229;
  uint64_t _5230;
  uint64_t _5230__PHI_TEMPORARY;
  uint32_t _5231;
  uint32_t _5231__PHI_TEMPORARY;
  uint64_t _5232;
  uint64_t _5233;
  void* _5234;
  uint8_t _5235;
  uint32_t _5236;
  uint64_t _5237;
  uint64_t _5238;
  uint32_t _5239;
  uint64_t _5240;
  uint64_t _5241;
  uint64_t _5242;
  uint32_t _5243;
  uint8_t _5244;
  void* _5245;
  void* _5246;
  uint64_t _5247;
  void* _5248;
  uint64_t _5249;
  void* _5250;
  uint8_t _5251;
  uint8_t _5252;
  uint8_t _5253;
  uint32_t _5254;
  uint64_t _5255;
  uint64_t _5255__PHI_TEMPORARY;
  uint32_t _5256;
  uint32_t _5256__PHI_TEMPORARY;
  uint64_t _5257;
  uint64_t _5258;
  void* _5259;
  uint8_t _5260;
  uint32_t _5261;
  uint64_t _5262;
  uint64_t _5263;
  uint32_t _5264;
  uint64_t _5265;
  uint32_t _5266;
  uint32_t _5266__PHI_TEMPORARY;
  uint64_t _5267;
  uint64_t _5268;
  uint64_t _5269;
  uint64_t _5270;
  uint64_t _5271;
  uint64_t _5272;
  uint64_t _5273;
  void* _5274;
  uint64_t _5275;
  uint8_t _5276;
  void* _5277;
  void* _5278;
  uint64_t _5279;
  void* _5280;
  uint64_t _5281;
  void* _5282;
  uint8_t _5283;
  uint8_t _5284;
  uint8_t _5285;
  uint32_t _5286;
  uint64_t _5287;
  uint64_t _5287__PHI_TEMPORARY;
  uint32_t _5288;
  uint32_t _5288__PHI_TEMPORARY;
  uint64_t _5289;
  uint64_t _5290;
  void* _5291;
  uint8_t _5292;
  uint32_t _5293;
  uint64_t _5294;
  uint64_t _5295;
  uint32_t _5296;
  uint64_t _5297;
  uint32_t _5298;
  uint32_t _5298__PHI_TEMPORARY;
  uint64_t _5299;
  uint64_t _5300;
  uint64_t _5301;
  uint64_t _5302;
  uint64_t _5303;
  uint64_t _5304;
  uint64_t _5305;
  void* _5306;
  uint64_t _5307;
  uint32_t _5308;
  uint64_t _5309;
  uint32_t _5310;
  uint32_t _5311;
  uint64_t _5312;
  bool _5313;
  bool _5314;
  uint32_t _5315;
  uint32_t _5316;
  uint32_t _5317;
  uint32_t _5318;
  uint32_t _5318__PHI_TEMPORARY;
  uint32_t _5319;
  uint16_t _5320;
  void* _5321;
  void* _5322;
  uint64_t _5323;
  void* _5324;
  uint64_t _5325;
  void* _5326;
  uint8_t _5327;
  uint8_t _5328;
  uint8_t _5329;
  uint32_t _5330;
  uint64_t _5331;
  uint64_t _5331__PHI_TEMPORARY;
  uint32_t _5332;
  uint32_t _5332__PHI_TEMPORARY;
  uint64_t _5333;
  uint64_t _5334;
  void* _5335;
  uint8_t _5336;
  uint32_t _5337;
  uint64_t _5338;
  uint64_t _5339;
  uint32_t _5340;
  uint64_t _5341;
  uint32_t _5342;
  uint32_t _5342__PHI_TEMPORARY;
  uint64_t _5343;
  uint64_t _5344;
  uint64_t _5345;
  uint64_t _5346;
  void* _5347;
  void* _5348;
  uint64_t _5349;
  void* _5350;
  uint64_t _5351;
  void* _5352;
  uint64_t _5353;
  void* _5354;
  uint64_t _5355;
  uint64_t _5356;
  void* _5357;
  void* _5358;
  uint64_t _5359;
  void* _5360;
  uint64_t _5361;
  void* _5362;
  uint8_t _5363;
  uint8_t _5364;
  uint8_t _5365;
  uint32_t _5366;
  uint64_t _5367;
  uint64_t _5367__PHI_TEMPORARY;
  uint32_t _5368;
  uint32_t _5368__PHI_TEMPORARY;
  uint64_t _5369;
  uint64_t _5370;
  void* _5371;
  uint8_t _5372;
  uint32_t _5373;
  uint64_t _5374;
  uint64_t _5375;
  uint32_t _5376;
  uint64_t _5377;
  uint32_t _5378;
  uint32_t _5378__PHI_TEMPORARY;
  bool _5379;
  bool _5379__PHI_TEMPORARY;
  uint64_t _5380;
  uint64_t _5381;
  uint64_t _5382;
  uint64_t _5383;
  uint64_t _5384;
  uint64_t _5385;
  uint64_t _5386;
  void* _5387;
  uint64_t _5388;
  bool _5389;
  bool _5389__PHI_TEMPORARY;
  uint64_t _5390;
  uint64_t _5391;
  void* _5392;
  void* _5393;
  uint64_t _5394;
  void* _5395;
  uint64_t _5396;
  void* _5397;
  uint8_t _5398;
  uint8_t _5399;
  uint8_t _5400;
  uint32_t _5401;
  uint64_t _5402;
  uint64_t _5402__PHI_TEMPORARY;
  uint32_t _5403;
  uint32_t _5403__PHI_TEMPORARY;
  uint64_t _5404;
  uint64_t _5405;
  void* _5406;
  uint8_t _5407;
  uint32_t _5408;
  uint64_t _5409;
  uint64_t _5410;
  uint32_t _5411;
  uint64_t _5412;
  uint64_t _5413;
  uint64_t _5414;
  uint32_t _5415;
  uint8_t _5416;
  uint64_t _5417;
  void* _5418;
  void* _5419;
  uint64_t _5420;
  void* _5421;
  uint64_t _5422;
  void* _5423;
  uint8_t _5424;
  uint8_t _5425;
  uint8_t _5426;
  uint32_t _5427;
  uint64_t _5428;
  uint64_t _5428__PHI_TEMPORARY;
  uint32_t _5429;
  uint32_t _5429__PHI_TEMPORARY;
  uint64_t _5430;
  uint64_t _5431;
  void* _5432;
  uint8_t _5433;
  uint32_t _5434;
  uint64_t _5435;
  uint64_t _5436;
  uint32_t _5437;
  uint64_t _5438;
  uint32_t _5439;
  uint32_t _5439__PHI_TEMPORARY;
  uint64_t _5440;
  uint64_t _5441;
  uint64_t _5442;
  uint64_t _5443;
  uint64_t _5444;
  uint64_t _5445;
  uint64_t _5446;
  void* _5447;
  uint64_t _5448;
  void* _5449;
  uint64_t _5450;
  void* _5451;
  uint64_t _5452;
  uint64_t _5453;
  void* _5454;
  void* _5455;
  uint64_t _5456;
  void* _5457;
  uint64_t _5458;
  void* _5459;
  uint8_t _5460;
  uint8_t _5461;
  uint8_t _5462;
  uint32_t _5463;
  uint64_t _5464;
  uint64_t _5464__PHI_TEMPORARY;
  uint32_t _5465;
  uint32_t _5465__PHI_TEMPORARY;
  uint64_t _5466;
  uint64_t _5467;
  void* _5468;
  uint8_t _5469;
  uint32_t _5470;
  uint64_t _5471;
  uint64_t _5472;
  uint32_t _5473;
  uint64_t _5474;
  uint32_t _5475;
  uint32_t _5475__PHI_TEMPORARY;
  uint64_t _5476;
  uint64_t _5477;
  uint64_t _5478;
  uint64_t _5479;
  uint64_t _5480;
  void* _5481;
  uint64_t _5482;
  void* _5483;
  uint64_t _5484;
  void* _5485;
  uint64_t _5486;
  uint8_t _5487;
  uint64_t _5488;
  bool _5489;
  uint64_t _5490;
  bool _5491;
  void* _5492;
  void* _5493;
  uint64_t _5494;
  void* _5495;
  uint64_t _5496;
  void* _5497;
  uint8_t _5498;
  uint8_t _5499;
  uint8_t _5500;
  uint32_t _5501;
  uint64_t _5502;
  uint64_t _5502__PHI_TEMPORARY;
  uint32_t _5503;
  uint32_t _5503__PHI_TEMPORARY;
  uint64_t _5504;
  uint64_t _5505;
  void* _5506;
  uint8_t _5507;
  uint32_t _5508;
  uint64_t _5509;
  uint64_t _5510;
  uint32_t _5511;
  uint64_t _5512;
  uint32_t _5513;
  uint32_t _5513__PHI_TEMPORARY;
  uint64_t _5514;
  uint64_t _5515;
  uint64_t _5516;
  uint64_t _5517;
  uint64_t _5518;
  uint64_t _5519;
  uint64_t _5520;
  void* _5521;
  uint64_t _5522;
  uint8_t _5523;
  bool _5524;
  bool _5525;
  bool _5525__PHI_TEMPORARY;
  bool _5526;
  bool _5526__PHI_TEMPORARY;
  uint64_t _5527;
  void* _5528;
  void* _5529;
  uint64_t _5530;
  void* _5531;
  uint64_t _5532;
  void* _5533;
  uint8_t _5534;
  uint8_t _5535;
  uint8_t _5536;
  uint32_t _5537;
  uint64_t _5538;
  uint64_t _5538__PHI_TEMPORARY;
  uint32_t _5539;
  uint32_t _5539__PHI_TEMPORARY;
  uint64_t _5540;
  uint64_t _5541;
  void* _5542;
  uint8_t _5543;
  uint32_t _5544;
  uint64_t _5545;
  uint64_t _5546;
  uint32_t _5547;
  uint64_t _5548;
  uint32_t _5549;
  uint32_t _5549__PHI_TEMPORARY;
  uint64_t _5550;
  uint64_t _5551;
  uint64_t _5552;
  uint64_t _5553;
  uint64_t _5554;
  uint64_t _5555;
  uint64_t _5556;
  void* _5557;
  uint64_t _5558;
  uint64_t _5559;
  void* _5560;
  void* _5561;
  uint64_t _5562;
  void* _5563;
  uint64_t _5564;
  void* _5565;
  uint8_t _5566;
  uint8_t _5567;
  uint8_t _5568;
  uint32_t _5569;
  uint64_t _5570;
  uint64_t _5570__PHI_TEMPORARY;
  uint32_t _5571;
  uint32_t _5571__PHI_TEMPORARY;
  uint64_t _5572;
  uint64_t _5573;
  void* _5574;
  uint8_t _5575;
  uint32_t _5576;
  uint64_t _5577;
  uint64_t _5578;
  uint32_t _5579;
  uint64_t _5580;
  uint32_t _5581;
  uint32_t _5581__PHI_TEMPORARY;
  uint64_t _5582;
  uint64_t _5583;
  uint64_t _5584;
  uint64_t _5585;
  uint64_t _5586;
  uint64_t _5587;
  uint64_t _5588;
  void* _5589;
  uint64_t _5590;
  uint8_t _5591;
  uint16_t _5592;
  uint16_t _5592__PHI_TEMPORARY;
  bool _5593;
  void* _5594;
  void* _5595;
  uint64_t _5596;
  void* _5597;
  uint64_t _5598;
  void* _5599;
  uint8_t _5600;
  uint8_t _5601;
  uint8_t _5602;
  uint32_t _5603;
  uint64_t _5604;
  uint64_t _5604__PHI_TEMPORARY;
  uint32_t _5605;
  uint32_t _5605__PHI_TEMPORARY;
  uint64_t _5606;
  uint64_t _5607;
  void* _5608;
  uint8_t _5609;
  uint32_t _5610;
  uint64_t _5611;
  uint64_t _5612;
  uint32_t _5613;
  uint64_t _5614;
  uint32_t _5615;
  uint32_t _5615__PHI_TEMPORARY;
  uint64_t _5616;
  uint64_t _5617;
  uint64_t _5618;
  uint64_t _5619;
  uint64_t _5620;
  void* _5621;
  uint64_t _5622;
  void* _5623;
  uint64_t _5624;
  void* _5625;
  uint64_t _5626;
  uint8_t _5627;
  bool _5628;
  void* _5629;
  void* _5630;
  uint64_t _5631;
  void* _5632;
  uint64_t _5633;
  void* _5634;
  uint8_t _5635;
  uint8_t _5636;
  uint8_t _5637;
  uint32_t _5638;
  uint64_t _5639;
  uint64_t _5639__PHI_TEMPORARY;
  uint32_t _5640;
  uint32_t _5640__PHI_TEMPORARY;
  uint64_t _5641;
  uint64_t _5642;
  void* _5643;
  uint8_t _5644;
  uint32_t _5645;
  uint64_t _5646;
  uint64_t _5647;
  uint32_t _5648;
  uint64_t _5649;
  uint32_t _5650;
  uint32_t _5650__PHI_TEMPORARY;
  uint64_t _5651;
  uint64_t _5652;
  uint64_t _5653;
  uint64_t _5654;
  uint64_t _5655;
  void* _5656;
  uint64_t _5657;
  void* _5658;
  uint64_t _5659;
  void* _5660;
  uint64_t _5661;
  uint8_t _5662;
  bool _5663;
  bool _5664;
  bool _5664__PHI_TEMPORARY;
  bool _5665;
  bool _5665__PHI_TEMPORARY;
  bool _5666;
  bool _5666__PHI_TEMPORARY;
  uint16_t _5667;
  uint16_t _5667__PHI_TEMPORARY;
  uint64_t _5668;
  uint64_t _5669;
  uint32_t _5670;
  uint32_t _5671;
  uint64_t _5672;
  uint32_t _5673;
  uint32_t _5674;
  uint64_t _5675;
  bool _5676;
  bool _5677;
  uint32_t _5678;
  uint32_t _5679;
  uint32_t _5680;
  uint32_t _5681;
  uint32_t _5681__PHI_TEMPORARY;
  uint32_t _5682;
  uint64_t _5683;
  uint8_t _5684;
  void* _5685;
  void* _5686;
  uint64_t _5687;
  void* _5688;
  uint64_t _5689;
  void* _5690;
  uint8_t _5691;
  uint8_t _5692;
  uint8_t _5693;
  uint32_t _5694;
  uint64_t _5695;
  uint64_t _5695__PHI_TEMPORARY;
  uint32_t _5696;
  uint32_t _5696__PHI_TEMPORARY;
  uint64_t _5697;
  uint64_t _5698;
  void* _5699;
  uint8_t _5700;
  uint32_t _5701;
  uint64_t _5702;
  uint64_t _5703;
  uint32_t _5704;
  uint64_t _5705;
  uint32_t _5706;
  uint32_t _5706__PHI_TEMPORARY;
  uint64_t _5707;
  uint64_t _5708;
  uint64_t _5709;
  uint64_t _5710;
  uint64_t _5711;
  void* _5712;
  uint64_t _5713;
  void* _5714;
  uint64_t _5715;
  void* _5716;
  uint64_t _5717;
  uint16_t _5718;
  uint16_t _5718__PHI_TEMPORARY;

  _5001 = julia_accept_number_51(_4984, _4985);
  _5002 = ((&((uint8_t*)_4985)[((int64_t)32)]));
  _5003 = *(uint64_t*)_5002;
  _5004 = ((&((uint8_t*)_4985)[((int64_t)40)]));
  _5005 = llvm_lshr_u64(_5003, 32);
  _5006 = *(uint64_t*)_5004;
  _5007 = ((uint32_t)_5006);
  switch ((((uint32_t)_5005))) {
  default:
    goto _5719;
  case 771751936u:
    goto _5720;
  case 1694498816u:
    goto _5721;
  case 1711276032u:
    goto _5721;
  case 1157627904u:
    goto _5721;
  }

_5720:
  if ((_5007 == 771751936u)) {
    goto _5722;
  } else {
    goto _5723;
  }

_5724:
  _5008 = _5008__PHI_TEMPORARY;
  _5009 = memcpy(_4983, _5008, 32);
  return;
_5722:
  julia_emit_20((&_4987), _4984, _4985, _4986, 1);
  _5008__PHI_TEMPORARY = (&_4987);   /* for PHI node */
  goto _5724;

_5723:
  if ((_4986 == ((uint16_t)48))) {
    goto _5725;
  } else {
    goto _5726;
  }

_5725:
  _5010 = *(void**)_4985;
  _5011 = ((&((uint8_t*)_5010)[((int64_t)16)]));
  _5012 = *(uint64_t*)_5011;
  _5013 = ((&((uint8_t*)_5010)[((int64_t)8)]));
  _5014 = *(uint64_t*)_5013;
  if ((((int64_t)_5014) > ((int64_t)_5012))) {
    goto _5727;
  } else {
    _5031__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5728;
  }

_5727:
  _5015 = *(void**)_5010;
  _5016 = *(uint8_t*)(((&((uint8_t*)_5015)[((int64_t)_5012)])));
  *(uint64_t*)_5011 = (llvm_add_u64(_5012, 1));
  _5017 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5016)), 0);
  _5018 = llvm_sub_u8(32, (llvm_shl_u8(_5017, 3)));
  _5019 = (((uint32_t)(uint8_t)_5016)) << 24;
  if ((((uint8_t)_5018) > ((uint8_t)((uint8_t)16)))) {
    _5031__PHI_TEMPORARY = _5019;   /* for PHI node */
    goto _5728;
  } else {
    _5020__PHI_TEMPORARY = 16;   /* for PHI node */
    _5021__PHI_TEMPORARY = _5019;   /* for PHI node */
    goto _5729;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5729:
  _5020 = _5020__PHI_TEMPORARY;
  _5021 = _5021__PHI_TEMPORARY;
  if (((((int64_t)_5020) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5020) < ((uint64_t)(((uint64_t)(uint8_t)_5018)))))) {
    _5031__PHI_TEMPORARY = _5021;   /* for PHI node */
    goto _5728;
  } else {
    goto _5730;
  }

_5730:
  _5022 = *(uint64_t*)_5011;
  _5023 = *(uint64_t*)_5013;
  if ((((int64_t)_5023) > ((int64_t)_5022))) {
    goto _5731;
  } else {
    _5031__PHI_TEMPORARY = _5021;   /* for PHI node */
    goto _5728;
  }

_5731:
  _5024 = *(void**)_5010;
  _5025 = *(uint8_t*)(((&((uint8_t*)_5024)[((int64_t)_5022)])));
  if ((((int8_t)_5025) > ((int8_t)((uint8_t)-65)))) {
    _5031__PHI_TEMPORARY = _5021;   /* for PHI node */
    goto _5728;
  } else {
    goto _5732;
  }

_5732:
  _5026 = llvm_select_u32((((int64_t)_5022) < ((int64_t)_5023)), (((uint32_t)(uint8_t)_5025)), 0);
  _5027 = *(uint64_t*)_5011;
  *(uint64_t*)_5011 = (llvm_add_u64(_5027, 1));
  _5028 = llvm_neg_u64(_5020);
  _5029 = _5021 | (llvm_select_u32((((int64_t)_5020) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5028) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5026, (((uint32_t)_5028)))))), (llvm_select_u32((((uint64_t)_5020) > ((uint64_t)UINT64_C(31))), 0, (_5026 << (((uint32_t)_5020)))))));
  _5030 = llvm_add_u64(_5020, -8);
  _5020__PHI_TEMPORARY = _5030;   /* for PHI node */
  _5021__PHI_TEMPORARY = _5029;   /* for PHI node */
  goto _5729;

  } while (1); /* end of syntactic loop '' */
_5728:
  _5031 = _5031__PHI_TEMPORARY;
  _5032 = *(uint64_t*)_5002;
  _5033 = *(uint64_t*)_5004;
  _5034 = jsyn_cbe_fshl_i64(_5033, _5032, 32);
  _5035 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5031)), _5033, 32);
  *(uint64_t*)_5002 = _5034;
  *(uint64_t*)_5004 = _5035;
  _5036 = ((&((uint8_t*)_4985)[((int64_t)56)]));
  _5037 = *(uint64_t*)_5036;
  _5038 = ((&((uint8_t*)_4985)[((int64_t)64)]));
  _5039 = *(uint64_t*)_5038;
  _5040 = ((&((uint8_t*)_4985)[((int64_t)72)]));
  _5041 = *(uint64_t*)_5040;
  _5042 = *(void**)_4985;
  _5043 = *(uint64_t*)(((&((uint8_t*)_5042)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4985)[((int64_t)48)]))) = _5037;
  *(uint64_t*)_5036 = _5039;
  *(uint64_t*)_5038 = _5041;
  *(uint64_t*)_5040 = _5043;
  julia_emit_20((&_4988), _4984, _4985, 754, 1);
  _5008__PHI_TEMPORARY = (&_4988);   /* for PHI node */
  goto _5724;

_5726:
  switch (_5007) {
  default:
    goto _5733;
  case 1056964608u:
    goto _5734;
  case 603979776u:
    goto _5734;
  case 973078528u:
    goto _5734;
  case 654311424u:
    goto _5734;
  }

_5733:
  _5044 = julia_is_operator_start_char_23(_4984, _5007);
  if ((((bool)_5044&1u))) {
    goto _5735;
  } else {
    goto _5734;
  }

_5735:
  _5045 = *(void**)_4985;
  _5046 = ((&((uint8_t*)_5045)[((int64_t)16)]));
  _5047 = *(uint64_t*)_5046;
  _5048 = ((&((uint8_t*)_5045)[((int64_t)8)]));
  _5049 = *(uint64_t*)_5048;
  if ((((int64_t)_5049) > ((int64_t)_5047))) {
    goto _5736;
  } else {
    _5066__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5737;
  }

_5736:
  _5050 = *(void**)_5045;
  _5051 = *(uint8_t*)(((&((uint8_t*)_5050)[((int64_t)_5047)])));
  *(uint64_t*)_5046 = (llvm_add_u64(_5047, 1));
  _5052 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5051)), 0);
  _5053 = llvm_sub_u8(32, (llvm_shl_u8(_5052, 3)));
  _5054 = (((uint32_t)(uint8_t)_5051)) << 24;
  if ((((uint8_t)_5053) > ((uint8_t)((uint8_t)16)))) {
    _5066__PHI_TEMPORARY = _5054;   /* for PHI node */
    goto _5737;
  } else {
    _5055__PHI_TEMPORARY = 16;   /* for PHI node */
    _5056__PHI_TEMPORARY = _5054;   /* for PHI node */
    goto _5738;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5738:
  _5055 = _5055__PHI_TEMPORARY;
  _5056 = _5056__PHI_TEMPORARY;
  if (((((int64_t)_5055) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5055) < ((uint64_t)(((uint64_t)(uint8_t)_5053)))))) {
    _5066__PHI_TEMPORARY = _5056;   /* for PHI node */
    goto _5737;
  } else {
    goto _5739;
  }

_5739:
  _5057 = *(uint64_t*)_5046;
  _5058 = *(uint64_t*)_5048;
  if ((((int64_t)_5058) > ((int64_t)_5057))) {
    goto _5740;
  } else {
    _5066__PHI_TEMPORARY = _5056;   /* for PHI node */
    goto _5737;
  }

_5740:
  _5059 = *(void**)_5045;
  _5060 = *(uint8_t*)(((&((uint8_t*)_5059)[((int64_t)_5057)])));
  if ((((int8_t)_5060) > ((int8_t)((uint8_t)-65)))) {
    _5066__PHI_TEMPORARY = _5056;   /* for PHI node */
    goto _5737;
  } else {
    goto _5741;
  }

_5741:
  _5061 = llvm_select_u32((((int64_t)_5057) < ((int64_t)_5058)), (((uint32_t)(uint8_t)_5060)), 0);
  _5062 = *(uint64_t*)_5046;
  *(uint64_t*)_5046 = (llvm_add_u64(_5062, 1));
  _5063 = llvm_neg_u64(_5055);
  _5064 = _5056 | (llvm_select_u32((((int64_t)_5055) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5063) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5061, (((uint32_t)_5063)))))), (llvm_select_u32((((uint64_t)_5055) > ((uint64_t)UINT64_C(31))), 0, (_5061 << (((uint32_t)_5055)))))));
  _5065 = llvm_add_u64(_5055, -8);
  _5055__PHI_TEMPORARY = _5065;   /* for PHI node */
  _5056__PHI_TEMPORARY = _5064;   /* for PHI node */
  goto _5738;

  } while (1); /* end of syntactic loop '' */
_5737:
  _5066 = _5066__PHI_TEMPORARY;
  _5067 = *(uint64_t*)_5002;
  _5068 = *(uint64_t*)_5004;
  _5069 = jsyn_cbe_fshl_i64(_5068, _5067, 32);
  _5070 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5066)), _5068, 32);
  *(uint64_t*)_5002 = _5069;
  *(uint64_t*)_5004 = _5070;
  _5071 = ((&((uint8_t*)_4985)[((int64_t)56)]));
  _5072 = *(uint64_t*)_5071;
  _5073 = ((&((uint8_t*)_4985)[((int64_t)64)]));
  _5074 = *(uint64_t*)_5073;
  _5075 = ((&((uint8_t*)_4985)[((int64_t)72)]));
  _5076 = *(uint64_t*)_5075;
  _5077 = *(void**)_4985;
  _5078 = *(uint64_t*)(((&((uint8_t*)_5077)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4985)[((int64_t)48)]))) = _5072;
  *(uint64_t*)_5071 = _5074;
  *(uint64_t*)_5073 = _5076;
  *(uint64_t*)_5075 = _5078;
  julia_emit_20((&_4989), _4984, _4985, 756, 1);
  _5008__PHI_TEMPORARY = (&_4989);   /* for PHI node */
  goto _5724;

_5734:
  _5079 = *(void**)_4985;
  _5080 = ((&((uint8_t*)_5079)[((int64_t)16)]));
  _5081 = *(uint64_t*)_5080;
  _5082 = ((&((uint8_t*)_5079)[((int64_t)8)]));
  _5083 = *(uint64_t*)_5082;
  if ((((int64_t)_5083) > ((int64_t)_5081))) {
    goto _5742;
  } else {
    _5100__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5743;
  }

_5742:
  _5084 = *(void**)_5079;
  _5085 = *(uint8_t*)(((&((uint8_t*)_5084)[((int64_t)_5081)])));
  *(uint64_t*)_5080 = (llvm_add_u64(_5081, 1));
  _5086 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5085)), 0);
  _5087 = llvm_sub_u8(32, (llvm_shl_u8(_5086, 3)));
  _5088 = (((uint32_t)(uint8_t)_5085)) << 24;
  if ((((uint8_t)_5087) > ((uint8_t)((uint8_t)16)))) {
    _5100__PHI_TEMPORARY = _5088;   /* for PHI node */
    goto _5743;
  } else {
    _5089__PHI_TEMPORARY = 16;   /* for PHI node */
    _5090__PHI_TEMPORARY = _5088;   /* for PHI node */
    goto _5744;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5744:
  _5089 = _5089__PHI_TEMPORARY;
  _5090 = _5090__PHI_TEMPORARY;
  if (((((int64_t)_5089) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5089) < ((uint64_t)(((uint64_t)(uint8_t)_5087)))))) {
    _5100__PHI_TEMPORARY = _5090;   /* for PHI node */
    goto _5743;
  } else {
    goto _5745;
  }

_5745:
  _5091 = *(uint64_t*)_5080;
  _5092 = *(uint64_t*)_5082;
  if ((((int64_t)_5092) > ((int64_t)_5091))) {
    goto _5746;
  } else {
    _5100__PHI_TEMPORARY = _5090;   /* for PHI node */
    goto _5743;
  }

_5746:
  _5093 = *(void**)_5079;
  _5094 = *(uint8_t*)(((&((uint8_t*)_5093)[((int64_t)_5091)])));
  if ((((int8_t)_5094) > ((int8_t)((uint8_t)-65)))) {
    _5100__PHI_TEMPORARY = _5090;   /* for PHI node */
    goto _5743;
  } else {
    goto _5747;
  }

_5747:
  _5095 = llvm_select_u32((((int64_t)_5091) < ((int64_t)_5092)), (((uint32_t)(uint8_t)_5094)), 0);
  _5096 = *(uint64_t*)_5080;
  *(uint64_t*)_5080 = (llvm_add_u64(_5096, 1));
  _5097 = llvm_neg_u64(_5089);
  _5098 = _5090 | (llvm_select_u32((((int64_t)_5089) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5097) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5095, (((uint32_t)_5097)))))), (llvm_select_u32((((uint64_t)_5089) > ((uint64_t)UINT64_C(31))), 0, (_5095 << (((uint32_t)_5089)))))));
  _5099 = llvm_add_u64(_5089, -8);
  _5089__PHI_TEMPORARY = _5099;   /* for PHI node */
  _5090__PHI_TEMPORARY = _5098;   /* for PHI node */
  goto _5744;

  } while (1); /* end of syntactic loop '' */
_5743:
  _5100 = _5100__PHI_TEMPORARY;
  _5101 = *(uint64_t*)_5002;
  _5102 = *(uint64_t*)_5004;
  _5103 = jsyn_cbe_fshl_i64(_5102, _5101, 32);
  _5104 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5100)), _5102, 32);
  *(uint64_t*)_5002 = _5103;
  *(uint64_t*)_5004 = _5104;
  _5105 = ((&((uint8_t*)_4985)[((int64_t)48)]));
  _5106 = ((&((uint8_t*)_4985)[((int64_t)56)]));
  _5107 = *(uint64_t*)_5106;
  _5108 = ((&((uint8_t*)_4985)[((int64_t)64)]));
  _5109 = *(uint64_t*)_5108;
  _5110 = ((&((uint8_t*)_4985)[((int64_t)72)]));
  _5111 = *(uint64_t*)_5110;
  _5112 = *(void**)_4985;
  _5113 = *(uint64_t*)(((&((uint8_t*)_5112)[((int64_t)16)])));
  *(uint64_t*)_5105 = _5107;
  *(uint64_t*)_5106 = _5109;
  *(uint64_t*)_5108 = _5111;
  *(uint64_t*)_5110 = _5113;
  _5114 = *(uint64_t*)_5002;
  if (((_5114 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920))) {
    goto _5748;
  } else {
    goto _5749;
  }

_5748:
  _5115 = *(void**)_4985;
  _5116 = ((&((uint8_t*)_5115)[((int64_t)16)]));
  _5117 = *(uint64_t*)_5116;
  _5118 = ((&((uint8_t*)_5115)[((int64_t)8)]));
  _5119 = *(uint64_t*)_5118;
  if ((((int64_t)_5119) > ((int64_t)_5117))) {
    goto _5750;
  } else {
    _5136__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5751;
  }

_5750:
  _5120 = *(void**)_5115;
  _5121 = *(uint8_t*)(((&((uint8_t*)_5120)[((int64_t)_5117)])));
  *(uint64_t*)_5116 = (llvm_add_u64(_5117, 1));
  _5122 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5121)), 0);
  _5123 = llvm_sub_u8(32, (llvm_shl_u8(_5122, 3)));
  _5124 = (((uint32_t)(uint8_t)_5121)) << 24;
  if ((((uint8_t)_5123) > ((uint8_t)((uint8_t)16)))) {
    _5136__PHI_TEMPORARY = _5124;   /* for PHI node */
    goto _5751;
  } else {
    _5125__PHI_TEMPORARY = 16;   /* for PHI node */
    _5126__PHI_TEMPORARY = _5124;   /* for PHI node */
    goto _5752;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5752:
  _5125 = _5125__PHI_TEMPORARY;
  _5126 = _5126__PHI_TEMPORARY;
  if (((((int64_t)_5125) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5125) < ((uint64_t)(((uint64_t)(uint8_t)_5123)))))) {
    _5136__PHI_TEMPORARY = _5126;   /* for PHI node */
    goto _5751;
  } else {
    goto _5753;
  }

_5753:
  _5127 = *(uint64_t*)_5116;
  _5128 = *(uint64_t*)_5118;
  if ((((int64_t)_5128) > ((int64_t)_5127))) {
    goto _5754;
  } else {
    _5136__PHI_TEMPORARY = _5126;   /* for PHI node */
    goto _5751;
  }

_5754:
  _5129 = *(void**)_5115;
  _5130 = *(uint8_t*)(((&((uint8_t*)_5129)[((int64_t)_5127)])));
  if ((((int8_t)_5130) > ((int8_t)((uint8_t)-65)))) {
    _5136__PHI_TEMPORARY = _5126;   /* for PHI node */
    goto _5751;
  } else {
    goto _5755;
  }

_5755:
  _5131 = llvm_select_u32((((int64_t)_5127) < ((int64_t)_5128)), (((uint32_t)(uint8_t)_5130)), 0);
  _5132 = *(uint64_t*)_5116;
  *(uint64_t*)_5116 = (llvm_add_u64(_5132, 1));
  _5133 = llvm_neg_u64(_5125);
  _5134 = _5126 | (llvm_select_u32((((int64_t)_5125) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5133) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5131, (((uint32_t)_5133)))))), (llvm_select_u32((((uint64_t)_5125) > ((uint64_t)UINT64_C(31))), 0, (_5131 << (((uint32_t)_5125)))))));
  _5135 = llvm_add_u64(_5125, -8);
  _5125__PHI_TEMPORARY = _5135;   /* for PHI node */
  _5126__PHI_TEMPORARY = _5134;   /* for PHI node */
  goto _5752;

  } while (1); /* end of syntactic loop '' */
_5751:
  _5136 = _5136__PHI_TEMPORARY;
  _5137 = *(uint64_t*)_5002;
  _5138 = *(uint64_t*)_5004;
  _5139 = jsyn_cbe_fshl_i64(_5138, _5137, 32);
  _5140 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5136)), _5138, 32);
  *(uint64_t*)_5002 = _5139;
  *(uint64_t*)_5004 = _5140;
  _5141 = *(uint64_t*)_5106;
  _5142 = *(uint64_t*)_5108;
  _5143 = *(uint64_t*)_5110;
  _5144 = *(void**)_4985;
  _5145 = *(uint64_t*)(((&((uint8_t*)_5144)[((int64_t)16)])));
  *(uint64_t*)_5105 = _5141;
  *(uint64_t*)_5106 = _5142;
  *(uint64_t*)_5108 = _5143;
  *(uint64_t*)_5110 = _5145;
  julia_emit_20((&_4990), _4984, _4985, 754, 1);
  _5008__PHI_TEMPORARY = (&_4990);   /* for PHI node */
  goto _5724;

_5749:
  _5146 = julia_accept_number_51(_4984, _4985);
  _5147 = *(uint64_t*)_5002;
  _5148 = llvm_lshr_u64(_5147, 32);
  _5149 = ((uint32_t)_5148);
  _5150 = *(uint64_t*)_5004;
  _5151 = ((uint32_t)_5150);
  switch ((((uint32_t)_5148))) {
  default:
    goto _5756;
  case 1694498816u:
    goto _5757;
  case 1711276032u:
    goto _5757;
  case 1157627904u:
    goto _5757;
  }

_5757:
  if (((((uint32_t)(llvm_add_u32(_5151, -805306368))) < ((uint32_t)150994945u)) | (_5151 == 721420288u))) {
    goto _5758;
  } else {
    goto _5759;
  }

_5759:
  switch (_5151) {
  default:
    goto _5756;
  case 3800601088u:
    goto _5758;
  case 754974720u:
    goto _5758;
  }

_5758:
  _5152 = llvm_select_u16((_5148 == UINT64_C(1711276032)), 49, 48);
  _5153 = *(void**)_4985;
  _5154 = ((&((uint8_t*)_5153)[((int64_t)16)]));
  _5155 = *(uint64_t*)_5154;
  _5156 = ((&((uint8_t*)_5153)[((int64_t)8)]));
  _5157 = *(uint64_t*)_5156;
  if ((((int64_t)_5157) > ((int64_t)_5155))) {
    goto _5760;
  } else {
    _5174__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5761;
  }

_5760:
  _5158 = *(void**)_5153;
  _5159 = *(uint8_t*)(((&((uint8_t*)_5158)[((int64_t)_5155)])));
  *(uint64_t*)_5154 = (llvm_add_u64(_5155, 1));
  _5160 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5159)), 0);
  _5161 = llvm_sub_u8(32, (llvm_shl_u8(_5160, 3)));
  _5162 = (((uint32_t)(uint8_t)_5159)) << 24;
  if ((((uint8_t)_5161) > ((uint8_t)((uint8_t)16)))) {
    _5174__PHI_TEMPORARY = _5162;   /* for PHI node */
    goto _5761;
  } else {
    _5163__PHI_TEMPORARY = 16;   /* for PHI node */
    _5164__PHI_TEMPORARY = _5162;   /* for PHI node */
    goto _5762;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5762:
  _5163 = _5163__PHI_TEMPORARY;
  _5164 = _5164__PHI_TEMPORARY;
  if (((((int64_t)_5163) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5163) < ((uint64_t)(((uint64_t)(uint8_t)_5161)))))) {
    _5174__PHI_TEMPORARY = _5164;   /* for PHI node */
    goto _5761;
  } else {
    goto _5763;
  }

_5763:
  _5165 = *(uint64_t*)_5154;
  _5166 = *(uint64_t*)_5156;
  if ((((int64_t)_5166) > ((int64_t)_5165))) {
    goto _5764;
  } else {
    _5174__PHI_TEMPORARY = _5164;   /* for PHI node */
    goto _5761;
  }

_5764:
  _5167 = *(void**)_5153;
  _5168 = *(uint8_t*)(((&((uint8_t*)_5167)[((int64_t)_5165)])));
  if ((((int8_t)_5168) > ((int8_t)((uint8_t)-65)))) {
    _5174__PHI_TEMPORARY = _5164;   /* for PHI node */
    goto _5761;
  } else {
    goto _5765;
  }

_5765:
  _5169 = llvm_select_u32((((int64_t)_5165) < ((int64_t)_5166)), (((uint32_t)(uint8_t)_5168)), 0);
  _5170 = *(uint64_t*)_5154;
  *(uint64_t*)_5154 = (llvm_add_u64(_5170, 1));
  _5171 = llvm_neg_u64(_5163);
  _5172 = _5164 | (llvm_select_u32((((int64_t)_5163) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5171) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5169, (((uint32_t)_5171)))))), (llvm_select_u32((((uint64_t)_5163) > ((uint64_t)UINT64_C(31))), 0, (_5169 << (((uint32_t)_5163)))))));
  _5173 = llvm_add_u64(_5163, -8);
  _5163__PHI_TEMPORARY = _5173;   /* for PHI node */
  _5164__PHI_TEMPORARY = _5172;   /* for PHI node */
  goto _5762;

  } while (1); /* end of syntactic loop '' */
_5761:
  _5174 = _5174__PHI_TEMPORARY;
  _5175 = *(uint64_t*)_5002;
  _5176 = *(uint64_t*)_5004;
  _5177 = jsyn_cbe_fshl_i64(_5176, _5175, 32);
  _5178 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5174)), _5176, 32);
  *(uint64_t*)_5002 = _5177;
  *(uint64_t*)_5004 = _5178;
  _5179 = *(uint64_t*)_5106;
  _5180 = *(uint64_t*)_5108;
  _5181 = *(uint64_t*)_5110;
  _5182 = *(void**)_4985;
  _5183 = *(uint64_t*)(((&((uint8_t*)_5182)[((int64_t)16)])));
  *(uint64_t*)_5105 = _5179;
  *(uint64_t*)_5106 = _5180;
  *(uint64_t*)_5108 = _5181;
  *(uint64_t*)_5110 = _5183;
  _5184 = *(uint64_t*)_5002;
  switch ((((uint32_t)(llvm_lshr_u64(_5184, 32))))) {
  default:
    _5217__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5766;
  case 721420288u:
    goto _5767;
  case 3800601088u:
    goto _5767;
  case 754974720u:
    goto _5767;
  }

_5767:
  _5185 = *(void**)_4985;
  _5186 = ((&((uint8_t*)_5185)[((int64_t)16)]));
  _5187 = *(uint64_t*)_5186;
  _5188 = ((&((uint8_t*)_5185)[((int64_t)8)]));
  _5189 = *(uint64_t*)_5188;
  if ((((int64_t)_5189) > ((int64_t)_5187))) {
    goto _5768;
  } else {
    _5206__PHI_TEMPORARY = -1;   /* for PHI node */
    _5207__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5769;
  }

_5768:
  _5190 = *(void**)_5185;
  _5191 = *(uint8_t*)(((&((uint8_t*)_5190)[((int64_t)_5187)])));
  *(uint64_t*)_5186 = (llvm_add_u64(_5187, 1));
  _5192 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5191)), 0);
  _5193 = llvm_sub_u8(32, (llvm_shl_u8(_5192, 3)));
  _5194 = (((uint32_t)(uint8_t)_5191)) << 24;
  if ((((uint8_t)_5193) > ((uint8_t)((uint8_t)16)))) {
    _5206__PHI_TEMPORARY = _5194;   /* for PHI node */
    _5207__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5769;
  } else {
    _5195__PHI_TEMPORARY = 16;   /* for PHI node */
    _5196__PHI_TEMPORARY = _5194;   /* for PHI node */
    goto _5770;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5770:
  _5195 = _5195__PHI_TEMPORARY;
  _5196 = _5196__PHI_TEMPORARY;
  if (((((int64_t)_5195) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5195) < ((uint64_t)(((uint64_t)(uint8_t)_5193)))))) {
    _5206__PHI_TEMPORARY = _5196;   /* for PHI node */
    _5207__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5769;
  } else {
    goto _5771;
  }

_5771:
  _5197 = *(uint64_t*)_5186;
  _5198 = *(uint64_t*)_5188;
  if ((((int64_t)_5198) > ((int64_t)_5197))) {
    goto _5772;
  } else {
    _5206__PHI_TEMPORARY = _5196;   /* for PHI node */
    _5207__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5769;
  }

_5772:
  _5199 = *(void**)_5185;
  _5200 = *(uint8_t*)(((&((uint8_t*)_5199)[((int64_t)_5197)])));
  if ((((int8_t)_5200) > ((int8_t)((uint8_t)-65)))) {
    _5206__PHI_TEMPORARY = _5196;   /* for PHI node */
    _5207__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5769;
  } else {
    goto _5773;
  }

_5773:
  _5201 = llvm_select_u32((((int64_t)_5197) < ((int64_t)_5198)), (((uint32_t)(uint8_t)_5200)), 0);
  _5202 = *(uint64_t*)_5186;
  *(uint64_t*)_5186 = (llvm_add_u64(_5202, 1));
  _5203 = llvm_neg_u64(_5195);
  _5204 = _5196 | (llvm_select_u32((((int64_t)_5195) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5203) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5201, (((uint32_t)_5203)))))), (llvm_select_u32((((uint64_t)_5195) > ((uint64_t)UINT64_C(31))), 0, (_5201 << (((uint32_t)_5195)))))));
  _5205 = llvm_add_u64(_5195, -8);
  _5195__PHI_TEMPORARY = _5205;   /* for PHI node */
  _5196__PHI_TEMPORARY = _5204;   /* for PHI node */
  goto _5770;

  } while (1); /* end of syntactic loop '' */
_5769:
  _5206 = _5206__PHI_TEMPORARY;
  _5207 = _5207__PHI_TEMPORARY;
  _5208 = *(uint64_t*)_5002;
  _5209 = *(uint64_t*)_5004;
  _5210 = jsyn_cbe_fshl_i64(_5209, _5208, 32);
  _5211 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5206)), _5209, 32);
  *(uint64_t*)_5002 = _5210;
  *(uint64_t*)_5004 = _5211;
  _5212 = *(uint64_t*)_5106;
  _5213 = *(uint64_t*)_5108;
  _5214 = *(uint64_t*)_5110;
  _5215 = *(void**)_4985;
  _5216 = *(uint64_t*)(((&((uint8_t*)_5215)[((int64_t)16)])));
  *(uint64_t*)_5105 = _5212;
  *(uint64_t*)_5106 = _5213;
  *(uint64_t*)_5108 = _5214;
  *(uint64_t*)_5110 = _5216;
  _5217__PHI_TEMPORARY = _5207;   /* for PHI node */
  goto _5766;

_5766:
  _5217 = _5217__PHI_TEMPORARY;
  _5218 = *(uint64_t*)_5002;
  _5219 = llvm_lshr_u64(_5218, 32);
  if ((((((uint64_t)_5218) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5219 != UINT64_C(805306368))) | ((((uint64_t)_5218) > ((uint64_t)UINT64_C(4107282860161892351))) & (_5219 != UINT64_C(956301312))))) {
    goto _5774;
  } else {
    goto _5775;
  }

_5775:
  _5220 = *(void**)_4985;
  _5221 = ((&((uint8_t*)_5220)[((int64_t)16)]));
  _5222 = *(uint64_t*)_5221;
  _5223 = ((&((uint8_t*)_5220)[((int64_t)8)]));
  _5224 = *(uint64_t*)_5223;
  if ((((int64_t)_5224) > ((int64_t)_5222))) {
    goto _5776;
  } else {
    _5206__PHI_TEMPORARY = -1;   /* for PHI node */
    _5207__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5769;
  }

_5776:
  _5225 = *(void**)_5220;
  _5226 = *(uint8_t*)(((&((uint8_t*)_5225)[((int64_t)_5222)])));
  *(uint64_t*)_5221 = (llvm_add_u64(_5222, 1));
  _5227 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5226)), 0);
  _5228 = llvm_sub_u8(32, (llvm_shl_u8(_5227, 3)));
  _5229 = (((uint32_t)(uint8_t)_5226)) << 24;
  if ((((uint8_t)_5228) > ((uint8_t)((uint8_t)16)))) {
    _5206__PHI_TEMPORARY = _5229;   /* for PHI node */
    _5207__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5769;
  } else {
    _5230__PHI_TEMPORARY = 16;   /* for PHI node */
    _5231__PHI_TEMPORARY = _5229;   /* for PHI node */
    goto _5777;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5777:
  _5230 = _5230__PHI_TEMPORARY;
  _5231 = _5231__PHI_TEMPORARY;
  if (((((int64_t)_5230) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5230) < ((uint64_t)(((uint64_t)(uint8_t)_5228)))))) {
    _5206__PHI_TEMPORARY = _5231;   /* for PHI node */
    _5207__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5769;
  } else {
    goto _5778;
  }

_5778:
  _5232 = *(uint64_t*)_5221;
  _5233 = *(uint64_t*)_5223;
  if ((((int64_t)_5233) > ((int64_t)_5232))) {
    goto _5779;
  } else {
    _5206__PHI_TEMPORARY = _5231;   /* for PHI node */
    _5207__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5769;
  }

_5779:
  _5234 = *(void**)_5220;
  _5235 = *(uint8_t*)(((&((uint8_t*)_5234)[((int64_t)_5232)])));
  if ((((int8_t)_5235) > ((int8_t)((uint8_t)-65)))) {
    _5206__PHI_TEMPORARY = _5231;   /* for PHI node */
    _5207__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5769;
  } else {
    goto _5780;
  }

_5780:
  _5236 = llvm_select_u32((((int64_t)_5232) < ((int64_t)_5233)), (((uint32_t)(uint8_t)_5235)), 0);
  _5237 = *(uint64_t*)_5221;
  *(uint64_t*)_5221 = (llvm_add_u64(_5237, 1));
  _5238 = llvm_neg_u64(_5230);
  _5239 = _5231 | (llvm_select_u32((((int64_t)_5230) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5238) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5236, (((uint32_t)_5238)))))), (llvm_select_u32((((uint64_t)_5230) > ((uint64_t)UINT64_C(31))), 0, (_5236 << (((uint32_t)_5230)))))));
  _5240 = llvm_add_u64(_5230, -8);
  _5230__PHI_TEMPORARY = _5240;   /* for PHI node */
  _5231__PHI_TEMPORARY = _5239;   /* for PHI node */
  goto _5777;

  } while (1); /* end of syntactic loop '' */
_5774:
  if (_5217) {
    goto _5781;
  } else {
    goto _5782;
  }

_5782:
  _5241 = *(uint64_t*)_5002;
  _5242 = *(uint64_t*)_5004;
  _5243 = ((uint32_t)_5242);
  if (((_5241 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5783;
  } else {
    _5718__PHI_TEMPORARY = _5152;   /* for PHI node */
    goto _5784;
  }

_5783:
  switch (_5243) {
  default:
    goto _5785;
  case 1056964608u:
    goto _5786;
  case 603979776u:
    goto _5786;
  case 973078528u:
    goto _5786;
  case 654311424u:
    goto _5786;
  }

_5785:
  _5244 = julia_is_operator_start_char_23(_4984, _5243);
  if ((((bool)_5244&1u))) {
    _5718__PHI_TEMPORARY = _5152;   /* for PHI node */
    goto _5784;
  } else {
    goto _5786;
  }

_5786:
  _5245 = *(void**)_4985;
  _5246 = ((&((uint8_t*)_5245)[((int64_t)16)]));
  _5247 = *(uint64_t*)_5246;
  _5248 = ((&((uint8_t*)_5245)[((int64_t)8)]));
  _5249 = *(uint64_t*)_5248;
  if ((((int64_t)_5249) > ((int64_t)_5247))) {
    goto _5787;
  } else {
    _5266__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5788;
  }

_5787:
  _5250 = *(void**)_5245;
  _5251 = *(uint8_t*)(((&((uint8_t*)_5250)[((int64_t)_5247)])));
  *(uint64_t*)_5246 = (llvm_add_u64(_5247, 1));
  _5252 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5251)), 0);
  _5253 = llvm_sub_u8(32, (llvm_shl_u8(_5252, 3)));
  _5254 = (((uint32_t)(uint8_t)_5251)) << 24;
  if ((((uint8_t)_5253) > ((uint8_t)((uint8_t)16)))) {
    _5266__PHI_TEMPORARY = _5254;   /* for PHI node */
    goto _5788;
  } else {
    _5255__PHI_TEMPORARY = 16;   /* for PHI node */
    _5256__PHI_TEMPORARY = _5254;   /* for PHI node */
    goto _5789;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5789:
  _5255 = _5255__PHI_TEMPORARY;
  _5256 = _5256__PHI_TEMPORARY;
  if (((((int64_t)_5255) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5255) < ((uint64_t)(((uint64_t)(uint8_t)_5253)))))) {
    _5266__PHI_TEMPORARY = _5256;   /* for PHI node */
    goto _5788;
  } else {
    goto _5790;
  }

_5790:
  _5257 = *(uint64_t*)_5246;
  _5258 = *(uint64_t*)_5248;
  if ((((int64_t)_5258) > ((int64_t)_5257))) {
    goto _5791;
  } else {
    _5266__PHI_TEMPORARY = _5256;   /* for PHI node */
    goto _5788;
  }

_5791:
  _5259 = *(void**)_5245;
  _5260 = *(uint8_t*)(((&((uint8_t*)_5259)[((int64_t)_5257)])));
  if ((((int8_t)_5260) > ((int8_t)((uint8_t)-65)))) {
    _5266__PHI_TEMPORARY = _5256;   /* for PHI node */
    goto _5788;
  } else {
    goto _5792;
  }

_5792:
  _5261 = llvm_select_u32((((int64_t)_5257) < ((int64_t)_5258)), (((uint32_t)(uint8_t)_5260)), 0);
  _5262 = *(uint64_t*)_5246;
  *(uint64_t*)_5246 = (llvm_add_u64(_5262, 1));
  _5263 = llvm_neg_u64(_5255);
  _5264 = _5256 | (llvm_select_u32((((int64_t)_5255) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5263) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5261, (((uint32_t)_5263)))))), (llvm_select_u32((((uint64_t)_5255) > ((uint64_t)UINT64_C(31))), 0, (_5261 << (((uint32_t)_5255)))))));
  _5265 = llvm_add_u64(_5255, -8);
  _5255__PHI_TEMPORARY = _5265;   /* for PHI node */
  _5256__PHI_TEMPORARY = _5264;   /* for PHI node */
  goto _5789;

  } while (1); /* end of syntactic loop '' */
_5788:
  _5266 = _5266__PHI_TEMPORARY;
  _5267 = *(uint64_t*)_5002;
  _5268 = *(uint64_t*)_5004;
  _5269 = jsyn_cbe_fshl_i64(_5268, _5267, 32);
  _5270 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5266)), _5268, 32);
  *(uint64_t*)_5002 = _5269;
  *(uint64_t*)_5004 = _5270;
  _5271 = *(uint64_t*)_5106;
  _5272 = *(uint64_t*)_5108;
  _5273 = *(uint64_t*)_5110;
  _5274 = *(void**)_4985;
  _5275 = *(uint64_t*)(((&((uint8_t*)_5274)[((int64_t)16)])));
  *(uint64_t*)_5105 = _5271;
  *(uint64_t*)_5106 = _5272;
  *(uint64_t*)_5108 = _5273;
  *(uint64_t*)_5110 = _5275;
  julia_emit_20((&_4991), _4984, _4985, 754, 1);
  _5008__PHI_TEMPORARY = (&_4991);   /* for PHI node */
  goto _5724;

_5781:
  julia_emit_20((&_4993), _4984, _4985, 754, 1);
  _5008__PHI_TEMPORARY = (&_4993);   /* for PHI node */
  goto _5724;

_5756:
  if ((llvm_select_bool((_5148 != UINT64_C(771751936)), 1, (_5151 == 771751936u)))) {
    goto _5793;
  } else {
    goto _5794;
  }

_5794:
  switch (_5151) {
  default:
    goto _5795;
  case 1056964608u:
    goto _5796;
  case 603979776u:
    goto _5796;
  case 973078528u:
    goto _5796;
  case 654311424u:
    goto _5796;
  }

_5795:
  _5276 = julia_is_operator_start_char_23(_4984, _5151);
  if ((((bool)_5276&1u))) {
    goto _5793;
  } else {
    goto _5796;
  }

_5796:
  _5277 = *(void**)_4985;
  _5278 = ((&((uint8_t*)_5277)[((int64_t)16)]));
  _5279 = *(uint64_t*)_5278;
  _5280 = ((&((uint8_t*)_5277)[((int64_t)8)]));
  _5281 = *(uint64_t*)_5280;
  if ((((int64_t)_5281) > ((int64_t)_5279))) {
    goto _5797;
  } else {
    _5298__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5798;
  }

_5797:
  _5282 = *(void**)_5277;
  _5283 = *(uint8_t*)(((&((uint8_t*)_5282)[((int64_t)_5279)])));
  *(uint64_t*)_5278 = (llvm_add_u64(_5279, 1));
  _5284 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5283)), 0);
  _5285 = llvm_sub_u8(32, (llvm_shl_u8(_5284, 3)));
  _5286 = (((uint32_t)(uint8_t)_5283)) << 24;
  if ((((uint8_t)_5285) > ((uint8_t)((uint8_t)16)))) {
    _5298__PHI_TEMPORARY = _5286;   /* for PHI node */
    goto _5798;
  } else {
    _5287__PHI_TEMPORARY = 16;   /* for PHI node */
    _5288__PHI_TEMPORARY = _5286;   /* for PHI node */
    goto _5799;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5799:
  _5287 = _5287__PHI_TEMPORARY;
  _5288 = _5288__PHI_TEMPORARY;
  if (((((int64_t)_5287) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5287) < ((uint64_t)(((uint64_t)(uint8_t)_5285)))))) {
    _5298__PHI_TEMPORARY = _5288;   /* for PHI node */
    goto _5798;
  } else {
    goto _5800;
  }

_5800:
  _5289 = *(uint64_t*)_5278;
  _5290 = *(uint64_t*)_5280;
  if ((((int64_t)_5290) > ((int64_t)_5289))) {
    goto _5801;
  } else {
    _5298__PHI_TEMPORARY = _5288;   /* for PHI node */
    goto _5798;
  }

_5801:
  _5291 = *(void**)_5277;
  _5292 = *(uint8_t*)(((&((uint8_t*)_5291)[((int64_t)_5289)])));
  if ((((int8_t)_5292) > ((int8_t)((uint8_t)-65)))) {
    _5298__PHI_TEMPORARY = _5288;   /* for PHI node */
    goto _5798;
  } else {
    goto _5802;
  }

_5802:
  _5293 = llvm_select_u32((((int64_t)_5289) < ((int64_t)_5290)), (((uint32_t)(uint8_t)_5292)), 0);
  _5294 = *(uint64_t*)_5278;
  *(uint64_t*)_5278 = (llvm_add_u64(_5294, 1));
  _5295 = llvm_neg_u64(_5287);
  _5296 = _5288 | (llvm_select_u32((((int64_t)_5287) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5295) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5293, (((uint32_t)_5295)))))), (llvm_select_u32((((uint64_t)_5287) > ((uint64_t)UINT64_C(31))), 0, (_5293 << (((uint32_t)_5287)))))));
  _5297 = llvm_add_u64(_5287, -8);
  _5287__PHI_TEMPORARY = _5297;   /* for PHI node */
  _5288__PHI_TEMPORARY = _5296;   /* for PHI node */
  goto _5799;

  } while (1); /* end of syntactic loop '' */
_5798:
  _5298 = _5298__PHI_TEMPORARY;
  _5299 = *(uint64_t*)_5002;
  _5300 = *(uint64_t*)_5004;
  _5301 = jsyn_cbe_fshl_i64(_5300, _5299, 32);
  _5302 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5298)), _5300, 32);
  *(uint64_t*)_5002 = _5301;
  *(uint64_t*)_5004 = _5302;
  _5303 = *(uint64_t*)_5106;
  _5304 = *(uint64_t*)_5108;
  _5305 = *(uint64_t*)_5110;
  _5306 = *(void**)_4985;
  _5307 = *(uint64_t*)(((&((uint8_t*)_5306)[((int64_t)16)])));
  *(uint64_t*)_5105 = _5303;
  *(uint64_t*)_5106 = _5304;
  *(uint64_t*)_5108 = _5305;
  *(uint64_t*)_5110 = _5307;
  julia_emit_20((&_4994), _4984, _4985, 754, 1);
  _5008__PHI_TEMPORARY = (&_4994);   /* for PHI node */
  goto _5724;

_5793:
  if (((_5148 == UINT64_C(4294967295)) | (((bool)_5146&1u)))) {
    _5718__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _5784;
  } else {
    goto _5803;
  }

_5803:
  _5308 = llvm_OC_ctlz_OC_i32((_5149 ^ -1), 0);
  _5309 = ((uint64_t)(uint32_t)_5308);
  _5310 = llvm_OC_cttz_OC_i32(_5149, 0);
  _5311 = _5310 & 56;
  _5312 = ((uint64_t)(uint32_t)_5311);
  _5313 = llvm_select_bool((((uint32_t)_5310) < ((uint32_t)32u)), ((llvm_lshr_u32(((_5149 & 12632256) ^ 8421504), _5311)) != 0u), 0);
  _5314 = (((_5149 & -33554432) == 3221225472u) | ((_5149 & -2097152) == 3766484992u)) | ((_5149 & -1048576) == 4034920448u);
  if (((((((_5308 == 1u) | (((uint64_t)(llvm_add_u64((_5309 << 3), _5312))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_5147) > ((uint64_t)UINT64_C(17122614315006820351))) & (_5148 != UINT64_C(3986669312))) & (((((uint64_t)_5147) < ((uint64_t)UINT64_C(17185876919829135360))) & (_5148 != UINT64_C(4001398784))) | ((((uint64_t)_5147) > ((uint64_t)UINT64_C(17622514693983698943))) & (_5148 != UINT64_C(4103061439)))))) | (_5148 == UINT64_C(4036993714))) | _5313) | _5314)) {
    goto _5804;
  } else {
    goto _5805;
  }

_5805:
  _5315 = llvm_lshr_u32(_5149, 24);
  if ((((int64_t)_5147) < ((int64_t)UINT64_C(0)))) {
    goto _5806;
  } else {
    _5318__PHI_TEMPORARY = _5315;   /* for PHI node */
    goto _5807;
  }

_5806:
  if ((((_5308 == 1u) | (((uint64_t)(llvm_add_u64((_5309 << 3), _5312))) > ((uint64_t)UINT64_C(32)))) | (_5313 | _5314))) {
    goto _5808;
  } else {
    goto _5809;
  }

_5808:
  julia_throw_invalid_char_21(_4984, _5149);
  __builtin_unreachable();

_5809:
  _5316 = llvm_select_u32((((uint32_t)_5310) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _5308)) & _5149), _5311)), 0);
  _5317 = (((_5316 & 127) | ((llvm_lshr_u32(_5316, 2)) & 8128)) | ((llvm_lshr_u32(_5316, 4)) & 520192)) | ((llvm_lshr_u32(_5316, 6)) & 33292288);
  _5318__PHI_TEMPORARY = _5317;   /* for PHI node */
  goto _5807;

_5807:
  _5318 = _5318__PHI_TEMPORARY;
  _5319 = jsk_jl_id_start_char(_5318);
  if ((_5319 == 0u)) {
    goto _5804;
  } else {
    goto _5810;
  }

_5804:
  switch ((((uint32_t)_5148))) {
  default:
    _5718__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _5784;
  case 671088640u:
    goto _5810;
  case 1526726656u:
    goto _5810;
  case 2063597568u:
    goto _5810;
  case 1073741824u:
    goto _5810;
  case 1610612736u:
    goto _5810;
  case 570425344u:
    goto _5810;
  }

_5810:
  julia_emit_20((&_4995), _4984, _4985, 757, 1);
  _5008__PHI_TEMPORARY = (&_4995);   /* for PHI node */
  goto _5724;

_5721:
  if (((((uint32_t)(llvm_add_u32(_5007, -805306368))) < ((uint32_t)150994945u)) | (_5007 == 721420288u))) {
    goto _5811;
  } else {
    goto _5812;
  }

_5812:
  switch (_5007) {
  default:
    goto _5719;
  case 3800601088u:
    goto _5811;
  case 754974720u:
    goto _5811;
  }

_5811:
  _5320 = llvm_select_u16((_5005 == UINT64_C(1711276032)), 49, 48);
  _5321 = *(void**)_4985;
  _5322 = ((&((uint8_t*)_5321)[((int64_t)16)]));
  _5323 = *(uint64_t*)_5322;
  _5324 = ((&((uint8_t*)_5321)[((int64_t)8)]));
  _5325 = *(uint64_t*)_5324;
  if ((((int64_t)_5325) > ((int64_t)_5323))) {
    goto _5813;
  } else {
    _5342__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5814;
  }

_5813:
  _5326 = *(void**)_5321;
  _5327 = *(uint8_t*)(((&((uint8_t*)_5326)[((int64_t)_5323)])));
  *(uint64_t*)_5322 = (llvm_add_u64(_5323, 1));
  _5328 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5327)), 0);
  _5329 = llvm_sub_u8(32, (llvm_shl_u8(_5328, 3)));
  _5330 = (((uint32_t)(uint8_t)_5327)) << 24;
  if ((((uint8_t)_5329) > ((uint8_t)((uint8_t)16)))) {
    _5342__PHI_TEMPORARY = _5330;   /* for PHI node */
    goto _5814;
  } else {
    _5331__PHI_TEMPORARY = 16;   /* for PHI node */
    _5332__PHI_TEMPORARY = _5330;   /* for PHI node */
    goto _5815;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5815:
  _5331 = _5331__PHI_TEMPORARY;
  _5332 = _5332__PHI_TEMPORARY;
  if (((((int64_t)_5331) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5331) < ((uint64_t)(((uint64_t)(uint8_t)_5329)))))) {
    _5342__PHI_TEMPORARY = _5332;   /* for PHI node */
    goto _5814;
  } else {
    goto _5816;
  }

_5816:
  _5333 = *(uint64_t*)_5322;
  _5334 = *(uint64_t*)_5324;
  if ((((int64_t)_5334) > ((int64_t)_5333))) {
    goto _5817;
  } else {
    _5342__PHI_TEMPORARY = _5332;   /* for PHI node */
    goto _5814;
  }

_5817:
  _5335 = *(void**)_5321;
  _5336 = *(uint8_t*)(((&((uint8_t*)_5335)[((int64_t)_5333)])));
  if ((((int8_t)_5336) > ((int8_t)((uint8_t)-65)))) {
    _5342__PHI_TEMPORARY = _5332;   /* for PHI node */
    goto _5814;
  } else {
    goto _5818;
  }

_5818:
  _5337 = llvm_select_u32((((int64_t)_5333) < ((int64_t)_5334)), (((uint32_t)(uint8_t)_5336)), 0);
  _5338 = *(uint64_t*)_5322;
  *(uint64_t*)_5322 = (llvm_add_u64(_5338, 1));
  _5339 = llvm_neg_u64(_5331);
  _5340 = _5332 | (llvm_select_u32((((int64_t)_5331) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5339) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5337, (((uint32_t)_5339)))))), (llvm_select_u32((((uint64_t)_5331) > ((uint64_t)UINT64_C(31))), 0, (_5337 << (((uint32_t)_5331)))))));
  _5341 = llvm_add_u64(_5331, -8);
  _5331__PHI_TEMPORARY = _5341;   /* for PHI node */
  _5332__PHI_TEMPORARY = _5340;   /* for PHI node */
  goto _5815;

  } while (1); /* end of syntactic loop '' */
_5814:
  _5342 = _5342__PHI_TEMPORARY;
  _5343 = *(uint64_t*)_5002;
  _5344 = *(uint64_t*)_5004;
  _5345 = jsyn_cbe_fshl_i64(_5344, _5343, 32);
  _5346 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5342)), _5344, 32);
  *(uint64_t*)_5002 = _5345;
  *(uint64_t*)_5004 = _5346;
  _5347 = ((&((uint8_t*)_4985)[((int64_t)48)]));
  _5348 = ((&((uint8_t*)_4985)[((int64_t)56)]));
  _5349 = *(uint64_t*)_5348;
  _5350 = ((&((uint8_t*)_4985)[((int64_t)64)]));
  _5351 = *(uint64_t*)_5350;
  _5352 = ((&((uint8_t*)_4985)[((int64_t)72)]));
  _5353 = *(uint64_t*)_5352;
  _5354 = *(void**)_4985;
  _5355 = *(uint64_t*)(((&((uint8_t*)_5354)[((int64_t)16)])));
  *(uint64_t*)_5347 = _5349;
  *(uint64_t*)_5348 = _5351;
  *(uint64_t*)_5350 = _5353;
  *(uint64_t*)_5352 = _5355;
  _5356 = *(uint64_t*)_5002;
  switch ((((uint32_t)(llvm_lshr_u64(_5356, 32))))) {
  default:
    _5389__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5819;
  case 721420288u:
    goto _5820;
  case 3800601088u:
    goto _5820;
  case 754974720u:
    goto _5820;
  }

_5820:
  _5357 = *(void**)_4985;
  _5358 = ((&((uint8_t*)_5357)[((int64_t)16)]));
  _5359 = *(uint64_t*)_5358;
  _5360 = ((&((uint8_t*)_5357)[((int64_t)8)]));
  _5361 = *(uint64_t*)_5360;
  if ((((int64_t)_5361) > ((int64_t)_5359))) {
    goto _5821;
  } else {
    _5378__PHI_TEMPORARY = -1;   /* for PHI node */
    _5379__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5822;
  }

_5821:
  _5362 = *(void**)_5357;
  _5363 = *(uint8_t*)(((&((uint8_t*)_5362)[((int64_t)_5359)])));
  *(uint64_t*)_5358 = (llvm_add_u64(_5359, 1));
  _5364 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5363)), 0);
  _5365 = llvm_sub_u8(32, (llvm_shl_u8(_5364, 3)));
  _5366 = (((uint32_t)(uint8_t)_5363)) << 24;
  if ((((uint8_t)_5365) > ((uint8_t)((uint8_t)16)))) {
    _5378__PHI_TEMPORARY = _5366;   /* for PHI node */
    _5379__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5822;
  } else {
    _5367__PHI_TEMPORARY = 16;   /* for PHI node */
    _5368__PHI_TEMPORARY = _5366;   /* for PHI node */
    goto _5823;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5823:
  _5367 = _5367__PHI_TEMPORARY;
  _5368 = _5368__PHI_TEMPORARY;
  if (((((int64_t)_5367) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5367) < ((uint64_t)(((uint64_t)(uint8_t)_5365)))))) {
    _5378__PHI_TEMPORARY = _5368;   /* for PHI node */
    _5379__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5822;
  } else {
    goto _5824;
  }

_5824:
  _5369 = *(uint64_t*)_5358;
  _5370 = *(uint64_t*)_5360;
  if ((((int64_t)_5370) > ((int64_t)_5369))) {
    goto _5825;
  } else {
    _5378__PHI_TEMPORARY = _5368;   /* for PHI node */
    _5379__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5822;
  }

_5825:
  _5371 = *(void**)_5357;
  _5372 = *(uint8_t*)(((&((uint8_t*)_5371)[((int64_t)_5369)])));
  if ((((int8_t)_5372) > ((int8_t)((uint8_t)-65)))) {
    _5378__PHI_TEMPORARY = _5368;   /* for PHI node */
    _5379__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5822;
  } else {
    goto _5826;
  }

_5826:
  _5373 = llvm_select_u32((((int64_t)_5369) < ((int64_t)_5370)), (((uint32_t)(uint8_t)_5372)), 0);
  _5374 = *(uint64_t*)_5358;
  *(uint64_t*)_5358 = (llvm_add_u64(_5374, 1));
  _5375 = llvm_neg_u64(_5367);
  _5376 = _5368 | (llvm_select_u32((((int64_t)_5367) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5375) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5373, (((uint32_t)_5375)))))), (llvm_select_u32((((uint64_t)_5367) > ((uint64_t)UINT64_C(31))), 0, (_5373 << (((uint32_t)_5367)))))));
  _5377 = llvm_add_u64(_5367, -8);
  _5367__PHI_TEMPORARY = _5377;   /* for PHI node */
  _5368__PHI_TEMPORARY = _5376;   /* for PHI node */
  goto _5823;

  } while (1); /* end of syntactic loop '' */
_5822:
  _5378 = _5378__PHI_TEMPORARY;
  _5379 = _5379__PHI_TEMPORARY;
  _5380 = *(uint64_t*)_5002;
  _5381 = *(uint64_t*)_5004;
  _5382 = jsyn_cbe_fshl_i64(_5381, _5380, 32);
  _5383 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5378)), _5381, 32);
  *(uint64_t*)_5002 = _5382;
  *(uint64_t*)_5004 = _5383;
  _5384 = *(uint64_t*)_5348;
  _5385 = *(uint64_t*)_5350;
  _5386 = *(uint64_t*)_5352;
  _5387 = *(void**)_4985;
  _5388 = *(uint64_t*)(((&((uint8_t*)_5387)[((int64_t)16)])));
  *(uint64_t*)_5347 = _5384;
  *(uint64_t*)_5348 = _5385;
  *(uint64_t*)_5350 = _5386;
  *(uint64_t*)_5352 = _5388;
  _5389__PHI_TEMPORARY = _5379;   /* for PHI node */
  goto _5819;

_5819:
  _5389 = _5389__PHI_TEMPORARY;
  _5390 = *(uint64_t*)_5002;
  _5391 = llvm_lshr_u64(_5390, 32);
  if ((((((uint64_t)_5390) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5391 != UINT64_C(805306368))) | ((((uint64_t)_5390) > ((uint64_t)UINT64_C(4107282860161892351))) & (_5391 != UINT64_C(956301312))))) {
    goto _5827;
  } else {
    goto _5828;
  }

_5828:
  _5392 = *(void**)_4985;
  _5393 = ((&((uint8_t*)_5392)[((int64_t)16)]));
  _5394 = *(uint64_t*)_5393;
  _5395 = ((&((uint8_t*)_5392)[((int64_t)8)]));
  _5396 = *(uint64_t*)_5395;
  if ((((int64_t)_5396) > ((int64_t)_5394))) {
    goto _5829;
  } else {
    _5378__PHI_TEMPORARY = -1;   /* for PHI node */
    _5379__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5822;
  }

_5829:
  _5397 = *(void**)_5392;
  _5398 = *(uint8_t*)(((&((uint8_t*)_5397)[((int64_t)_5394)])));
  *(uint64_t*)_5393 = (llvm_add_u64(_5394, 1));
  _5399 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5398)), 0);
  _5400 = llvm_sub_u8(32, (llvm_shl_u8(_5399, 3)));
  _5401 = (((uint32_t)(uint8_t)_5398)) << 24;
  if ((((uint8_t)_5400) > ((uint8_t)((uint8_t)16)))) {
    _5378__PHI_TEMPORARY = _5401;   /* for PHI node */
    _5379__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5822;
  } else {
    _5402__PHI_TEMPORARY = 16;   /* for PHI node */
    _5403__PHI_TEMPORARY = _5401;   /* for PHI node */
    goto _5830;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5830:
  _5402 = _5402__PHI_TEMPORARY;
  _5403 = _5403__PHI_TEMPORARY;
  if (((((int64_t)_5402) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5402) < ((uint64_t)(((uint64_t)(uint8_t)_5400)))))) {
    _5378__PHI_TEMPORARY = _5403;   /* for PHI node */
    _5379__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5822;
  } else {
    goto _5831;
  }

_5831:
  _5404 = *(uint64_t*)_5393;
  _5405 = *(uint64_t*)_5395;
  if ((((int64_t)_5405) > ((int64_t)_5404))) {
    goto _5832;
  } else {
    _5378__PHI_TEMPORARY = _5403;   /* for PHI node */
    _5379__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5822;
  }

_5832:
  _5406 = *(void**)_5392;
  _5407 = *(uint8_t*)(((&((uint8_t*)_5406)[((int64_t)_5404)])));
  if ((((int8_t)_5407) > ((int8_t)((uint8_t)-65)))) {
    _5378__PHI_TEMPORARY = _5403;   /* for PHI node */
    _5379__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5822;
  } else {
    goto _5833;
  }

_5833:
  _5408 = llvm_select_u32((((int64_t)_5404) < ((int64_t)_5405)), (((uint32_t)(uint8_t)_5407)), 0);
  _5409 = *(uint64_t*)_5393;
  *(uint64_t*)_5393 = (llvm_add_u64(_5409, 1));
  _5410 = llvm_neg_u64(_5402);
  _5411 = _5403 | (llvm_select_u32((((int64_t)_5402) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5410) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5408, (((uint32_t)_5410)))))), (llvm_select_u32((((uint64_t)_5402) > ((uint64_t)UINT64_C(31))), 0, (_5408 << (((uint32_t)_5402)))))));
  _5412 = llvm_add_u64(_5402, -8);
  _5402__PHI_TEMPORARY = _5412;   /* for PHI node */
  _5403__PHI_TEMPORARY = _5411;   /* for PHI node */
  goto _5830;

  } while (1); /* end of syntactic loop '' */
_5827:
  if (_5389) {
    goto _5834;
  } else {
    goto _5835;
  }

_5835:
  _5413 = *(uint64_t*)_5002;
  _5414 = *(uint64_t*)_5004;
  _5415 = ((uint32_t)_5414);
  if (((_5413 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5836;
  } else {
    _5718__PHI_TEMPORARY = _5320;   /* for PHI node */
    goto _5784;
  }

_5836:
  switch (_5415) {
  default:
    goto _5837;
  case 1056964608u:
    goto _5838;
  case 603979776u:
    goto _5838;
  case 973078528u:
    goto _5838;
  case 654311424u:
    goto _5838;
  }

_5837:
  _5416 = julia_is_operator_start_char_23(_4984, _5415);
  if ((((bool)_5416&1u))) {
    _5718__PHI_TEMPORARY = _5320;   /* for PHI node */
    goto _5784;
  } else {
    goto _5838;
  }

_5838:
  _5417 = *(uint64_t*)_5002;
  if (((_5417 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5839;
  } else {
    goto _5840;
  }

_5839:
  _5418 = *(void**)_4985;
  _5419 = ((&((uint8_t*)_5418)[((int64_t)16)]));
  _5420 = *(uint64_t*)_5419;
  _5421 = ((&((uint8_t*)_5418)[((int64_t)8)]));
  _5422 = *(uint64_t*)_5421;
  if ((((int64_t)_5422) > ((int64_t)_5420))) {
    goto _5841;
  } else {
    _5439__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5842;
  }

_5841:
  _5423 = *(void**)_5418;
  _5424 = *(uint8_t*)(((&((uint8_t*)_5423)[((int64_t)_5420)])));
  *(uint64_t*)_5419 = (llvm_add_u64(_5420, 1));
  _5425 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5424)), 0);
  _5426 = llvm_sub_u8(32, (llvm_shl_u8(_5425, 3)));
  _5427 = (((uint32_t)(uint8_t)_5424)) << 24;
  if ((((uint8_t)_5426) > ((uint8_t)((uint8_t)16)))) {
    _5439__PHI_TEMPORARY = _5427;   /* for PHI node */
    goto _5842;
  } else {
    _5428__PHI_TEMPORARY = 16;   /* for PHI node */
    _5429__PHI_TEMPORARY = _5427;   /* for PHI node */
    goto _5843;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5843:
  _5428 = _5428__PHI_TEMPORARY;
  _5429 = _5429__PHI_TEMPORARY;
  if (((((int64_t)_5428) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5428) < ((uint64_t)(((uint64_t)(uint8_t)_5426)))))) {
    _5439__PHI_TEMPORARY = _5429;   /* for PHI node */
    goto _5842;
  } else {
    goto _5844;
  }

_5844:
  _5430 = *(uint64_t*)_5419;
  _5431 = *(uint64_t*)_5421;
  if ((((int64_t)_5431) > ((int64_t)_5430))) {
    goto _5845;
  } else {
    _5439__PHI_TEMPORARY = _5429;   /* for PHI node */
    goto _5842;
  }

_5845:
  _5432 = *(void**)_5418;
  _5433 = *(uint8_t*)(((&((uint8_t*)_5432)[((int64_t)_5430)])));
  if ((((int8_t)_5433) > ((int8_t)((uint8_t)-65)))) {
    _5439__PHI_TEMPORARY = _5429;   /* for PHI node */
    goto _5842;
  } else {
    goto _5846;
  }

_5846:
  _5434 = llvm_select_u32((((int64_t)_5430) < ((int64_t)_5431)), (((uint32_t)(uint8_t)_5433)), 0);
  _5435 = *(uint64_t*)_5419;
  *(uint64_t*)_5419 = (llvm_add_u64(_5435, 1));
  _5436 = llvm_neg_u64(_5428);
  _5437 = _5429 | (llvm_select_u32((((int64_t)_5428) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5436) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5434, (((uint32_t)_5436)))))), (llvm_select_u32((((uint64_t)_5428) > ((uint64_t)UINT64_C(31))), 0, (_5434 << (((uint32_t)_5428)))))));
  _5438 = llvm_add_u64(_5428, -8);
  _5428__PHI_TEMPORARY = _5438;   /* for PHI node */
  _5429__PHI_TEMPORARY = _5437;   /* for PHI node */
  goto _5843;

  } while (1); /* end of syntactic loop '' */
_5842:
  _5439 = _5439__PHI_TEMPORARY;
  _5440 = *(uint64_t*)_5002;
  _5441 = *(uint64_t*)_5004;
  _5442 = jsyn_cbe_fshl_i64(_5441, _5440, 32);
  _5443 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5439)), _5441, 32);
  *(uint64_t*)_5002 = _5442;
  *(uint64_t*)_5004 = _5443;
  _5444 = *(uint64_t*)_5348;
  _5445 = *(uint64_t*)_5350;
  _5446 = *(uint64_t*)_5352;
  _5447 = *(void**)_4985;
  _5448 = *(uint64_t*)(((&((uint8_t*)_5447)[((int64_t)16)])));
  *(uint64_t*)_5347 = _5444;
  *(uint64_t*)_5348 = _5445;
  *(uint64_t*)_5350 = _5446;
  *(uint64_t*)_5352 = _5448;
  goto _5840;

_5840:
  julia_emit_20((&_4996), _4984, _4985, 754, 1);
  _5008__PHI_TEMPORARY = (&_4996);   /* for PHI node */
  goto _5724;

_5834:
  julia_emit_20((&_4997), _4984, _4985, 754, 1);
  _5008__PHI_TEMPORARY = (&_4997);   /* for PHI node */
  goto _5724;

_5719:
  _5449 = ((&((uint8_t*)_4985)[((int64_t)48)]));
  _5450 = *(uint64_t*)_5449;
  _5451 = ((&((uint8_t*)_4985)[((int64_t)56)]));
  _5452 = *(uint64_t*)(((&((uint8_t*)_4985)[((int64_t)8)])));
  if (((llvm_sub_u64(_5450, _5452)) == UINT64_C(1))) {
    goto _5847;
  } else {
    _5718__PHI_TEMPORARY = _4986;   /* for PHI node */
    goto _5784;
  }

_5847:
  _5453 = *(uint64_t*)_5002;
  if (((_5453 & INT64_C(4294967295)) == UINT64_C(805306368))) {
    goto _5848;
  } else {
    _5718__PHI_TEMPORARY = _4986;   /* for PHI node */
    goto _5784;
  }

_5848:
  switch ((((uint32_t)_5005))) {
  default:
    _5664__PHI_TEMPORARY = 1;   /* for PHI node */
    _5666__PHI_TEMPORARY = 0;   /* for PHI node */
    _5667__PHI_TEMPORARY = _4986;   /* for PHI node */
    goto _5849;
  case 2013265920u:
    goto _5850;
  case 1644167168u:
    goto _5851;
  case 1862270976u:
    goto _5852;
  }

_5850:
  _5454 = *(void**)_4985;
  _5455 = ((&((uint8_t*)_5454)[((int64_t)16)]));
  _5456 = *(uint64_t*)_5455;
  _5457 = ((&((uint8_t*)_5454)[((int64_t)8)]));
  _5458 = *(uint64_t*)_5457;
  if ((((int64_t)_5458) > ((int64_t)_5456))) {
    goto _5853;
  } else {
    _5475__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5854;
  }

_5853:
  _5459 = *(void**)_5454;
  _5460 = *(uint8_t*)(((&((uint8_t*)_5459)[((int64_t)_5456)])));
  *(uint64_t*)_5455 = (llvm_add_u64(_5456, 1));
  _5461 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5460)), 0);
  _5462 = llvm_sub_u8(32, (llvm_shl_u8(_5461, 3)));
  _5463 = (((uint32_t)(uint8_t)_5460)) << 24;
  if ((((uint8_t)_5462) > ((uint8_t)((uint8_t)16)))) {
    _5475__PHI_TEMPORARY = _5463;   /* for PHI node */
    goto _5854;
  } else {
    _5464__PHI_TEMPORARY = 16;   /* for PHI node */
    _5465__PHI_TEMPORARY = _5463;   /* for PHI node */
    goto _5855;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5855:
  _5464 = _5464__PHI_TEMPORARY;
  _5465 = _5465__PHI_TEMPORARY;
  if (((((int64_t)_5464) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5464) < ((uint64_t)(((uint64_t)(uint8_t)_5462)))))) {
    _5475__PHI_TEMPORARY = _5465;   /* for PHI node */
    goto _5854;
  } else {
    goto _5856;
  }

_5856:
  _5466 = *(uint64_t*)_5455;
  _5467 = *(uint64_t*)_5457;
  if ((((int64_t)_5467) > ((int64_t)_5466))) {
    goto _5857;
  } else {
    _5475__PHI_TEMPORARY = _5465;   /* for PHI node */
    goto _5854;
  }

_5857:
  _5468 = *(void**)_5454;
  _5469 = *(uint8_t*)(((&((uint8_t*)_5468)[((int64_t)_5466)])));
  if ((((int8_t)_5469) > ((int8_t)((uint8_t)-65)))) {
    _5475__PHI_TEMPORARY = _5465;   /* for PHI node */
    goto _5854;
  } else {
    goto _5858;
  }

_5858:
  _5470 = llvm_select_u32((((int64_t)_5466) < ((int64_t)_5467)), (((uint32_t)(uint8_t)_5469)), 0);
  _5471 = *(uint64_t*)_5455;
  *(uint64_t*)_5455 = (llvm_add_u64(_5471, 1));
  _5472 = llvm_neg_u64(_5464);
  _5473 = _5465 | (llvm_select_u32((((int64_t)_5464) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5472) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5470, (((uint32_t)_5472)))))), (llvm_select_u32((((uint64_t)_5464) > ((uint64_t)UINT64_C(31))), 0, (_5470 << (((uint32_t)_5464)))))));
  _5474 = llvm_add_u64(_5464, -8);
  _5464__PHI_TEMPORARY = _5474;   /* for PHI node */
  _5465__PHI_TEMPORARY = _5473;   /* for PHI node */
  goto _5855;

  } while (1); /* end of syntactic loop '' */
_5854:
  _5475 = _5475__PHI_TEMPORARY;
  _5476 = *(uint64_t*)_5002;
  _5477 = *(uint64_t*)_5004;
  _5478 = jsyn_cbe_fshl_i64(_5477, _5476, 32);
  _5479 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5475)), _5477, 32);
  *(uint64_t*)_5002 = _5478;
  *(uint64_t*)_5004 = _5479;
  _5480 = *(uint64_t*)_5451;
  _5481 = ((&((uint8_t*)_4985)[((int64_t)64)]));
  _5482 = *(uint64_t*)_5481;
  _5483 = ((&((uint8_t*)_4985)[((int64_t)72)]));
  _5484 = *(uint64_t*)_5483;
  _5485 = *(void**)_4985;
  _5486 = *(uint64_t*)(((&((uint8_t*)_5485)[((int64_t)16)])));
  *(uint64_t*)_5449 = _5480;
  *(uint64_t*)_5451 = _5482;
  *(uint64_t*)_5481 = _5484;
  *(uint64_t*)_5483 = _5486;
  _5487 = julia_accept_number_52(_4984, _4985);
  _5488 = *(uint64_t*)_5002;
  _5489 = ((bool)_5487&1u);
  if (((_5488 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5859;
  } else {
    _5525__PHI_TEMPORARY = _5489;   /* for PHI node */
    _5526__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5860;
  }

_5859:
  _5490 = *(uint64_t*)_5004;
  _5491 = ((bool)_5487&1u);
  if (((_5490 & INT64_C(4294967295)) == UINT64_C(771751936))) {
    _5525__PHI_TEMPORARY = _5491;   /* for PHI node */
    _5526__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5860;
  } else {
    goto _5861;
  }

_5861:
  _5492 = *(void**)_4985;
  _5493 = ((&((uint8_t*)_5492)[((int64_t)16)]));
  _5494 = *(uint64_t*)_5493;
  _5495 = ((&((uint8_t*)_5492)[((int64_t)8)]));
  _5496 = *(uint64_t*)_5495;
  if ((((int64_t)_5496) > ((int64_t)_5494))) {
    goto _5862;
  } else {
    _5513__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5863;
  }

_5862:
  _5497 = *(void**)_5492;
  _5498 = *(uint8_t*)(((&((uint8_t*)_5497)[((int64_t)_5494)])));
  *(uint64_t*)_5493 = (llvm_add_u64(_5494, 1));
  _5499 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5498)), 0);
  _5500 = llvm_sub_u8(32, (llvm_shl_u8(_5499, 3)));
  _5501 = (((uint32_t)(uint8_t)_5498)) << 24;
  if ((((uint8_t)_5500) > ((uint8_t)((uint8_t)16)))) {
    _5513__PHI_TEMPORARY = _5501;   /* for PHI node */
    goto _5863;
  } else {
    _5502__PHI_TEMPORARY = 16;   /* for PHI node */
    _5503__PHI_TEMPORARY = _5501;   /* for PHI node */
    goto _5864;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5864:
  _5502 = _5502__PHI_TEMPORARY;
  _5503 = _5503__PHI_TEMPORARY;
  if (((((int64_t)_5502) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5502) < ((uint64_t)(((uint64_t)(uint8_t)_5500)))))) {
    _5513__PHI_TEMPORARY = _5503;   /* for PHI node */
    goto _5863;
  } else {
    goto _5865;
  }

_5865:
  _5504 = *(uint64_t*)_5493;
  _5505 = *(uint64_t*)_5495;
  if ((((int64_t)_5505) > ((int64_t)_5504))) {
    goto _5866;
  } else {
    _5513__PHI_TEMPORARY = _5503;   /* for PHI node */
    goto _5863;
  }

_5866:
  _5506 = *(void**)_5492;
  _5507 = *(uint8_t*)(((&((uint8_t*)_5506)[((int64_t)_5504)])));
  if ((((int8_t)_5507) > ((int8_t)((uint8_t)-65)))) {
    _5513__PHI_TEMPORARY = _5503;   /* for PHI node */
    goto _5863;
  } else {
    goto _5867;
  }

_5867:
  _5508 = llvm_select_u32((((int64_t)_5504) < ((int64_t)_5505)), (((uint32_t)(uint8_t)_5507)), 0);
  _5509 = *(uint64_t*)_5493;
  *(uint64_t*)_5493 = (llvm_add_u64(_5509, 1));
  _5510 = llvm_neg_u64(_5502);
  _5511 = _5503 | (llvm_select_u32((((int64_t)_5502) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5510) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5508, (((uint32_t)_5510)))))), (llvm_select_u32((((uint64_t)_5502) > ((uint64_t)UINT64_C(31))), 0, (_5508 << (((uint32_t)_5502)))))));
  _5512 = llvm_add_u64(_5502, -8);
  _5502__PHI_TEMPORARY = _5512;   /* for PHI node */
  _5503__PHI_TEMPORARY = _5511;   /* for PHI node */
  goto _5864;

  } while (1); /* end of syntactic loop '' */
_5863:
  _5513 = _5513__PHI_TEMPORARY;
  _5514 = *(uint64_t*)_5002;
  _5515 = *(uint64_t*)_5004;
  _5516 = jsyn_cbe_fshl_i64(_5515, _5514, 32);
  _5517 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5513)), _5515, 32);
  *(uint64_t*)_5002 = _5516;
  *(uint64_t*)_5004 = _5517;
  _5518 = *(uint64_t*)_5451;
  _5519 = *(uint64_t*)_5481;
  _5520 = *(uint64_t*)_5483;
  _5521 = *(void**)_4985;
  _5522 = *(uint64_t*)(((&((uint8_t*)_5521)[((int64_t)16)])));
  *(uint64_t*)_5449 = _5518;
  *(uint64_t*)_5451 = _5519;
  *(uint64_t*)_5481 = _5520;
  *(uint64_t*)_5483 = _5522;
  _5523 = julia_accept_number_52(_4984, _4985);
  _5524 = ((bool)(llvm_or_u8(_5487, _5523))&1u);
  _5525__PHI_TEMPORARY = _5524;   /* for PHI node */
  _5526__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _5860;

_5860:
  _5525 = _5525__PHI_TEMPORARY;
  _5526 = _5526__PHI_TEMPORARY;
  _5527 = *(uint64_t*)_5002;
  if (((_5527 & INT64_C(-2305843013508661248)) == UINT64_C(5764607523034234880))) {
    goto _5868;
  } else {
    goto _5869;
  }

_5868:
  _5528 = *(void**)_4985;
  _5529 = ((&((uint8_t*)_5528)[((int64_t)16)]));
  _5530 = *(uint64_t*)_5529;
  _5531 = ((&((uint8_t*)_5528)[((int64_t)8)]));
  _5532 = *(uint64_t*)_5531;
  if ((((int64_t)_5532) > ((int64_t)_5530))) {
    goto _5870;
  } else {
    _5549__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5871;
  }

_5870:
  _5533 = *(void**)_5528;
  _5534 = *(uint8_t*)(((&((uint8_t*)_5533)[((int64_t)_5530)])));
  *(uint64_t*)_5529 = (llvm_add_u64(_5530, 1));
  _5535 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5534)), 0);
  _5536 = llvm_sub_u8(32, (llvm_shl_u8(_5535, 3)));
  _5537 = (((uint32_t)(uint8_t)_5534)) << 24;
  if ((((uint8_t)_5536) > ((uint8_t)((uint8_t)16)))) {
    _5549__PHI_TEMPORARY = _5537;   /* for PHI node */
    goto _5871;
  } else {
    _5538__PHI_TEMPORARY = 16;   /* for PHI node */
    _5539__PHI_TEMPORARY = _5537;   /* for PHI node */
    goto _5872;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5872:
  _5538 = _5538__PHI_TEMPORARY;
  _5539 = _5539__PHI_TEMPORARY;
  if (((((int64_t)_5538) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5538) < ((uint64_t)(((uint64_t)(uint8_t)_5536)))))) {
    _5549__PHI_TEMPORARY = _5539;   /* for PHI node */
    goto _5871;
  } else {
    goto _5873;
  }

_5873:
  _5540 = *(uint64_t*)_5529;
  _5541 = *(uint64_t*)_5531;
  if ((((int64_t)_5541) > ((int64_t)_5540))) {
    goto _5874;
  } else {
    _5549__PHI_TEMPORARY = _5539;   /* for PHI node */
    goto _5871;
  }

_5874:
  _5542 = *(void**)_5528;
  _5543 = *(uint8_t*)(((&((uint8_t*)_5542)[((int64_t)_5540)])));
  if ((((int8_t)_5543) > ((int8_t)((uint8_t)-65)))) {
    _5549__PHI_TEMPORARY = _5539;   /* for PHI node */
    goto _5871;
  } else {
    goto _5875;
  }

_5875:
  _5544 = llvm_select_u32((((int64_t)_5540) < ((int64_t)_5541)), (((uint32_t)(uint8_t)_5543)), 0);
  _5545 = *(uint64_t*)_5529;
  *(uint64_t*)_5529 = (llvm_add_u64(_5545, 1));
  _5546 = llvm_neg_u64(_5538);
  _5547 = _5539 | (llvm_select_u32((((int64_t)_5538) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5546) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5544, (((uint32_t)_5546)))))), (llvm_select_u32((((uint64_t)_5538) > ((uint64_t)UINT64_C(31))), 0, (_5544 << (((uint32_t)_5538)))))));
  _5548 = llvm_add_u64(_5538, -8);
  _5538__PHI_TEMPORARY = _5548;   /* for PHI node */
  _5539__PHI_TEMPORARY = _5547;   /* for PHI node */
  goto _5872;

  } while (1); /* end of syntactic loop '' */
_5871:
  _5549 = _5549__PHI_TEMPORARY;
  _5550 = *(uint64_t*)_5002;
  _5551 = *(uint64_t*)_5004;
  _5552 = jsyn_cbe_fshl_i64(_5551, _5550, 32);
  _5553 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5549)), _5551, 32);
  *(uint64_t*)_5002 = _5552;
  *(uint64_t*)_5004 = _5553;
  _5554 = *(uint64_t*)_5451;
  _5555 = *(uint64_t*)_5481;
  _5556 = *(uint64_t*)_5483;
  _5557 = *(void**)_4985;
  _5558 = *(uint64_t*)(((&((uint8_t*)_5557)[((int64_t)16)])));
  *(uint64_t*)_5449 = _5554;
  *(uint64_t*)_5451 = _5555;
  *(uint64_t*)_5481 = _5556;
  *(uint64_t*)_5483 = _5558;
  _5559 = *(uint64_t*)_5002;
  switch ((((uint32_t)(llvm_lshr_u64(_5559, 32))))) {
  default:
    goto _5876;
  case 721420288u:
    goto _5877;
  case 3800601088u:
    goto _5877;
  case 754974720u:
    goto _5877;
  }

_5877:
  _5560 = *(void**)_4985;
  _5561 = ((&((uint8_t*)_5560)[((int64_t)16)]));
  _5562 = *(uint64_t*)_5561;
  _5563 = ((&((uint8_t*)_5560)[((int64_t)8)]));
  _5564 = *(uint64_t*)_5563;
  if ((((int64_t)_5564) > ((int64_t)_5562))) {
    goto _5878;
  } else {
    _5581__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5879;
  }

_5878:
  _5565 = *(void**)_5560;
  _5566 = *(uint8_t*)(((&((uint8_t*)_5565)[((int64_t)_5562)])));
  *(uint64_t*)_5561 = (llvm_add_u64(_5562, 1));
  _5567 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5566)), 0);
  _5568 = llvm_sub_u8(32, (llvm_shl_u8(_5567, 3)));
  _5569 = (((uint32_t)(uint8_t)_5566)) << 24;
  if ((((uint8_t)_5568) > ((uint8_t)((uint8_t)16)))) {
    _5581__PHI_TEMPORARY = _5569;   /* for PHI node */
    goto _5879;
  } else {
    _5570__PHI_TEMPORARY = 16;   /* for PHI node */
    _5571__PHI_TEMPORARY = _5569;   /* for PHI node */
    goto _5880;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5880:
  _5570 = _5570__PHI_TEMPORARY;
  _5571 = _5571__PHI_TEMPORARY;
  if (((((int64_t)_5570) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5570) < ((uint64_t)(((uint64_t)(uint8_t)_5568)))))) {
    _5581__PHI_TEMPORARY = _5571;   /* for PHI node */
    goto _5879;
  } else {
    goto _5881;
  }

_5881:
  _5572 = *(uint64_t*)_5561;
  _5573 = *(uint64_t*)_5563;
  if ((((int64_t)_5573) > ((int64_t)_5572))) {
    goto _5882;
  } else {
    _5581__PHI_TEMPORARY = _5571;   /* for PHI node */
    goto _5879;
  }

_5882:
  _5574 = *(void**)_5560;
  _5575 = *(uint8_t*)(((&((uint8_t*)_5574)[((int64_t)_5572)])));
  if ((((int8_t)_5575) > ((int8_t)((uint8_t)-65)))) {
    _5581__PHI_TEMPORARY = _5571;   /* for PHI node */
    goto _5879;
  } else {
    goto _5883;
  }

_5883:
  _5576 = llvm_select_u32((((int64_t)_5572) < ((int64_t)_5573)), (((uint32_t)(uint8_t)_5575)), 0);
  _5577 = *(uint64_t*)_5561;
  *(uint64_t*)_5561 = (llvm_add_u64(_5577, 1));
  _5578 = llvm_neg_u64(_5570);
  _5579 = _5571 | (llvm_select_u32((((int64_t)_5570) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5578) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5576, (((uint32_t)_5578)))))), (llvm_select_u32((((uint64_t)_5570) > ((uint64_t)UINT64_C(31))), 0, (_5576 << (((uint32_t)_5570)))))));
  _5580 = llvm_add_u64(_5570, -8);
  _5570__PHI_TEMPORARY = _5580;   /* for PHI node */
  _5571__PHI_TEMPORARY = _5579;   /* for PHI node */
  goto _5880;

  } while (1); /* end of syntactic loop '' */
_5879:
  _5581 = _5581__PHI_TEMPORARY;
  _5582 = *(uint64_t*)_5002;
  _5583 = *(uint64_t*)_5004;
  _5584 = jsyn_cbe_fshl_i64(_5583, _5582, 32);
  _5585 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5581)), _5583, 32);
  *(uint64_t*)_5002 = _5584;
  *(uint64_t*)_5004 = _5585;
  _5586 = *(uint64_t*)_5451;
  _5587 = *(uint64_t*)_5481;
  _5588 = *(uint64_t*)_5483;
  _5589 = *(void**)_4985;
  _5590 = *(uint64_t*)(((&((uint8_t*)_5589)[((int64_t)16)])));
  *(uint64_t*)_5449 = _5586;
  *(uint64_t*)_5451 = _5587;
  *(uint64_t*)_5481 = _5588;
  *(uint64_t*)_5483 = _5590;
  goto _5876;

_5876:
  _5591 = julia_accept_number_51(_4984, _4985);
  if ((llvm_select_bool((((bool)_5591&1u)), _5525, 0))) {
    _5592__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _5884;
  } else {
    goto _5885;
  }

_5885:
  julia_emit_20((&_4998), _4984, _4985, 754, 1);
  _5008__PHI_TEMPORARY = (&_4998);   /* for PHI node */
  goto _5724;

_5869:
  if (_5526) {
    _5592__PHI_TEMPORARY = 46;   /* for PHI node */
    goto _5884;
  } else {
    goto _5886;
  }

_5886:
  julia_emit_20((&_5000), _4984, _4985, 755, 1);
  _5008__PHI_TEMPORARY = (&_5000);   /* for PHI node */
  goto _5724;

_5884:
  _5592 = _5592__PHI_TEMPORARY;
  _5593 = _5526 ^ 1;
  _5664__PHI_TEMPORARY = _5593;   /* for PHI node */
  _5665__PHI_TEMPORARY = _5525;   /* for PHI node */
  _5666__PHI_TEMPORARY = 1;   /* for PHI node */
  _5667__PHI_TEMPORARY = _5592;   /* for PHI node */
  goto _5849;

_5851:
  _5594 = *(void**)_4985;
  _5595 = ((&((uint8_t*)_5594)[((int64_t)16)]));
  _5596 = *(uint64_t*)_5595;
  _5597 = ((&((uint8_t*)_5594)[((int64_t)8)]));
  _5598 = *(uint64_t*)_5597;
  if ((((int64_t)_5598) > ((int64_t)_5596))) {
    goto _5887;
  } else {
    _5615__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5888;
  }

_5887:
  _5599 = *(void**)_5594;
  _5600 = *(uint8_t*)(((&((uint8_t*)_5599)[((int64_t)_5596)])));
  *(uint64_t*)_5595 = (llvm_add_u64(_5596, 1));
  _5601 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5600)), 0);
  _5602 = llvm_sub_u8(32, (llvm_shl_u8(_5601, 3)));
  _5603 = (((uint32_t)(uint8_t)_5600)) << 24;
  if ((((uint8_t)_5602) > ((uint8_t)((uint8_t)16)))) {
    _5615__PHI_TEMPORARY = _5603;   /* for PHI node */
    goto _5888;
  } else {
    _5604__PHI_TEMPORARY = 16;   /* for PHI node */
    _5605__PHI_TEMPORARY = _5603;   /* for PHI node */
    goto _5889;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5889:
  _5604 = _5604__PHI_TEMPORARY;
  _5605 = _5605__PHI_TEMPORARY;
  if (((((int64_t)_5604) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5604) < ((uint64_t)(((uint64_t)(uint8_t)_5602)))))) {
    _5615__PHI_TEMPORARY = _5605;   /* for PHI node */
    goto _5888;
  } else {
    goto _5890;
  }

_5890:
  _5606 = *(uint64_t*)_5595;
  _5607 = *(uint64_t*)_5597;
  if ((((int64_t)_5607) > ((int64_t)_5606))) {
    goto _5891;
  } else {
    _5615__PHI_TEMPORARY = _5605;   /* for PHI node */
    goto _5888;
  }

_5891:
  _5608 = *(void**)_5594;
  _5609 = *(uint8_t*)(((&((uint8_t*)_5608)[((int64_t)_5606)])));
  if ((((int8_t)_5609) > ((int8_t)((uint8_t)-65)))) {
    _5615__PHI_TEMPORARY = _5605;   /* for PHI node */
    goto _5888;
  } else {
    goto _5892;
  }

_5892:
  _5610 = llvm_select_u32((((int64_t)_5606) < ((int64_t)_5607)), (((uint32_t)(uint8_t)_5609)), 0);
  _5611 = *(uint64_t*)_5595;
  *(uint64_t*)_5595 = (llvm_add_u64(_5611, 1));
  _5612 = llvm_neg_u64(_5604);
  _5613 = _5605 | (llvm_select_u32((((int64_t)_5604) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5612) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5610, (((uint32_t)_5612)))))), (llvm_select_u32((((uint64_t)_5604) > ((uint64_t)UINT64_C(31))), 0, (_5610 << (((uint32_t)_5604)))))));
  _5614 = llvm_add_u64(_5604, -8);
  _5604__PHI_TEMPORARY = _5614;   /* for PHI node */
  _5605__PHI_TEMPORARY = _5613;   /* for PHI node */
  goto _5889;

  } while (1); /* end of syntactic loop '' */
_5888:
  _5615 = _5615__PHI_TEMPORARY;
  _5616 = *(uint64_t*)_5002;
  _5617 = *(uint64_t*)_5004;
  _5618 = jsyn_cbe_fshl_i64(_5617, _5616, 32);
  _5619 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5615)), _5617, 32);
  *(uint64_t*)_5002 = _5618;
  *(uint64_t*)_5004 = _5619;
  _5620 = *(uint64_t*)_5451;
  _5621 = ((&((uint8_t*)_4985)[((int64_t)64)]));
  _5622 = *(uint64_t*)_5621;
  _5623 = ((&((uint8_t*)_4985)[((int64_t)72)]));
  _5624 = *(uint64_t*)_5623;
  _5625 = *(void**)_4985;
  _5626 = *(uint64_t*)(((&((uint8_t*)_5625)[((int64_t)16)])));
  *(uint64_t*)_5449 = _5620;
  *(uint64_t*)_5451 = _5622;
  *(uint64_t*)_5621 = _5624;
  *(uint64_t*)_5623 = _5626;
  _5627 = julia_accept_number_53(_4984, _4985);
  _5628 = ((bool)_5627&1u);
  _5664__PHI_TEMPORARY = 0;   /* for PHI node */
  _5665__PHI_TEMPORARY = _5628;   /* for PHI node */
  _5666__PHI_TEMPORARY = 1;   /* for PHI node */
  _5667__PHI_TEMPORARY = 45;   /* for PHI node */
  goto _5849;

_5852:
  _5629 = *(void**)_4985;
  _5630 = ((&((uint8_t*)_5629)[((int64_t)16)]));
  _5631 = *(uint64_t*)_5630;
  _5632 = ((&((uint8_t*)_5629)[((int64_t)8)]));
  _5633 = *(uint64_t*)_5632;
  if ((((int64_t)_5633) > ((int64_t)_5631))) {
    goto _5893;
  } else {
    _5650__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5894;
  }

_5893:
  _5634 = *(void**)_5629;
  _5635 = *(uint8_t*)(((&((uint8_t*)_5634)[((int64_t)_5631)])));
  *(uint64_t*)_5630 = (llvm_add_u64(_5631, 1));
  _5636 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5635)), 0);
  _5637 = llvm_sub_u8(32, (llvm_shl_u8(_5636, 3)));
  _5638 = (((uint32_t)(uint8_t)_5635)) << 24;
  if ((((uint8_t)_5637) > ((uint8_t)((uint8_t)16)))) {
    _5650__PHI_TEMPORARY = _5638;   /* for PHI node */
    goto _5894;
  } else {
    _5639__PHI_TEMPORARY = 16;   /* for PHI node */
    _5640__PHI_TEMPORARY = _5638;   /* for PHI node */
    goto _5895;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5895:
  _5639 = _5639__PHI_TEMPORARY;
  _5640 = _5640__PHI_TEMPORARY;
  if (((((int64_t)_5639) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5639) < ((uint64_t)(((uint64_t)(uint8_t)_5637)))))) {
    _5650__PHI_TEMPORARY = _5640;   /* for PHI node */
    goto _5894;
  } else {
    goto _5896;
  }

_5896:
  _5641 = *(uint64_t*)_5630;
  _5642 = *(uint64_t*)_5632;
  if ((((int64_t)_5642) > ((int64_t)_5641))) {
    goto _5897;
  } else {
    _5650__PHI_TEMPORARY = _5640;   /* for PHI node */
    goto _5894;
  }

_5897:
  _5643 = *(void**)_5629;
  _5644 = *(uint8_t*)(((&((uint8_t*)_5643)[((int64_t)_5641)])));
  if ((((int8_t)_5644) > ((int8_t)((uint8_t)-65)))) {
    _5650__PHI_TEMPORARY = _5640;   /* for PHI node */
    goto _5894;
  } else {
    goto _5898;
  }

_5898:
  _5645 = llvm_select_u32((((int64_t)_5641) < ((int64_t)_5642)), (((uint32_t)(uint8_t)_5644)), 0);
  _5646 = *(uint64_t*)_5630;
  *(uint64_t*)_5630 = (llvm_add_u64(_5646, 1));
  _5647 = llvm_neg_u64(_5639);
  _5648 = _5640 | (llvm_select_u32((((int64_t)_5639) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5647) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5645, (((uint32_t)_5647)))))), (llvm_select_u32((((uint64_t)_5639) > ((uint64_t)UINT64_C(31))), 0, (_5645 << (((uint32_t)_5639)))))));
  _5649 = llvm_add_u64(_5639, -8);
  _5639__PHI_TEMPORARY = _5649;   /* for PHI node */
  _5640__PHI_TEMPORARY = _5648;   /* for PHI node */
  goto _5895;

  } while (1); /* end of syntactic loop '' */
_5894:
  _5650 = _5650__PHI_TEMPORARY;
  _5651 = *(uint64_t*)_5002;
  _5652 = *(uint64_t*)_5004;
  _5653 = jsyn_cbe_fshl_i64(_5652, _5651, 32);
  _5654 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5650)), _5652, 32);
  *(uint64_t*)_5002 = _5653;
  *(uint64_t*)_5004 = _5654;
  _5655 = *(uint64_t*)_5451;
  _5656 = ((&((uint8_t*)_4985)[((int64_t)64)]));
  _5657 = *(uint64_t*)_5656;
  _5658 = ((&((uint8_t*)_4985)[((int64_t)72)]));
  _5659 = *(uint64_t*)_5658;
  _5660 = *(void**)_4985;
  _5661 = *(uint64_t*)(((&((uint8_t*)_5660)[((int64_t)16)])));
  *(uint64_t*)_5449 = _5655;
  *(uint64_t*)_5451 = _5657;
  *(uint64_t*)_5656 = _5659;
  *(uint64_t*)_5658 = _5661;
  _5662 = julia_accept_number_54(_4984, _4985);
  _5663 = ((bool)_5662&1u);
  _5664__PHI_TEMPORARY = 0;   /* for PHI node */
  _5665__PHI_TEMPORARY = _5663;   /* for PHI node */
  _5666__PHI_TEMPORARY = 1;   /* for PHI node */
  _5667__PHI_TEMPORARY = 47;   /* for PHI node */
  goto _5849;

_5849:
  _5664 = _5664__PHI_TEMPORARY;
  _5665 = _5665__PHI_TEMPORARY;
  _5666 = _5666__PHI_TEMPORARY;
  _5667 = _5667__PHI_TEMPORARY;
  if (_5664) {
    _5718__PHI_TEMPORARY = _5667;   /* for PHI node */
    goto _5784;
  } else {
    goto _5899;
  }

_5899:
  _5668 = *(uint64_t*)_5002;
  _5669 = llvm_lshr_u64(_5668, 32);
  _5670 = ((uint32_t)_5669);
  if (_5666) {
    goto _5900;
  } else {
    goto _5901;
  }

_5902:
  if ((((((uint64_t)_5668) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5669 != UINT64_C(805306368))) | ((((uint64_t)_5668) > ((uint64_t)UINT64_C(4107282860161892351))) & (_5669 != UINT64_C(956301312))))) {
    goto _5903;
  } else {
    goto _5904;
  }

_5903:
  if ((_5669 == UINT64_C(4294967295))) {
    _5718__PHI_TEMPORARY = _5667;   /* for PHI node */
    goto _5784;
  } else {
    goto _5905;
  }

_5905:
  _5671 = llvm_OC_ctlz_OC_i32((_5670 ^ -1), 0);
  _5672 = ((uint64_t)(uint32_t)_5671);
  _5673 = llvm_OC_cttz_OC_i32(_5670, 0);
  _5674 = _5673 & 56;
  _5675 = ((uint64_t)(uint32_t)_5674);
  _5676 = llvm_select_bool((((uint32_t)_5673) < ((uint32_t)32u)), ((llvm_lshr_u32(((_5670 & 12632256) ^ 8421504), _5674)) != 0u), 0);
  _5677 = (((_5670 & -33554432) == 3221225472u) | ((_5670 & -2097152) == 3766484992u)) | ((_5670 & -1048576) == 4034920448u);
  if ((llvm_select_bool((((((_5671 == 1u) | (((uint64_t)(llvm_add_u64((_5672 << 3), _5675))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_5668) > ((uint64_t)UINT64_C(17122614315006820351))) & (_5669 != UINT64_C(3986669312))) & (((((uint64_t)_5668) < ((uint64_t)UINT64_C(17185876919829135360))) & (_5669 != UINT64_C(4001398784))) | ((((uint64_t)_5668) > ((uint64_t)UINT64_C(17622514693983698943))) & (_5669 != UINT64_C(4103061439)))))) | _5676) | _5677), 1, (_5669 == UINT64_C(4036993714))))) {
    _5718__PHI_TEMPORARY = _5667;   /* for PHI node */
    goto _5784;
  } else {
    goto _5906;
  }

_5906:
  _5678 = llvm_lshr_u32(_5670, 24);
  if ((((int64_t)_5668) < ((int64_t)UINT64_C(0)))) {
    goto _5907;
  } else {
    _5681__PHI_TEMPORARY = _5678;   /* for PHI node */
    goto _5908;
  }

_5907:
  if ((((_5671 == 1u) | (((uint64_t)(llvm_add_u64((_5672 << 3), _5675))) > ((uint64_t)UINT64_C(32)))) | (_5676 | _5677))) {
    goto _5909;
  } else {
    goto _5910;
  }

_5909:
  julia_throw_invalid_char_21(_4984, _5670);
  __builtin_unreachable();

_5910:
  _5679 = llvm_select_u32((((uint32_t)_5673) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _5671)) & _5670), _5674)), 0);
  _5680 = (((_5679 & 127) | ((llvm_lshr_u32(_5679, 2)) & 8128)) | ((llvm_lshr_u32(_5679, 4)) & 520192)) | ((llvm_lshr_u32(_5679, 6)) & 33292288);
  _5681__PHI_TEMPORARY = _5680;   /* for PHI node */
  goto _5908;

_5908:
  _5681 = _5681__PHI_TEMPORARY;
  _5682 = jsk_jl_id_start_char(_5681);
  if ((_5682 == 0u)) {
    _5718__PHI_TEMPORARY = _5667;   /* for PHI node */
    goto _5784;
  } else {
    goto _5904;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5904:
  _5683 = *(uint64_t*)_5002;
  _5684 = julia_YY_OC_lex_digitYY_OC_YY_OC_0_55(_4984, (((uint32_t)(llvm_lshr_u64(_5683, 32)))));
  if ((((bool)_5684&1u))) {
    goto _5911;
  } else {
    goto _5912;
  }

_5911:
  _5685 = *(void**)_4985;
  _5686 = ((&((uint8_t*)_5685)[((int64_t)16)]));
  _5687 = *(uint64_t*)_5686;
  _5688 = ((&((uint8_t*)_5685)[((int64_t)8)]));
  _5689 = *(uint64_t*)_5688;
  if ((((int64_t)_5689) > ((int64_t)_5687))) {
    goto _5913;
  } else {
    _5706__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5914;
  }

_5913:
  _5690 = *(void**)_5685;
  _5691 = *(uint8_t*)(((&((uint8_t*)_5690)[((int64_t)_5687)])));
  *(uint64_t*)_5686 = (llvm_add_u64(_5687, 1));
  _5692 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5691)), 0);
  _5693 = llvm_sub_u8(32, (llvm_shl_u8(_5692, 3)));
  _5694 = (((uint32_t)(uint8_t)_5691)) << 24;
  if ((((uint8_t)_5693) > ((uint8_t)((uint8_t)16)))) {
    _5706__PHI_TEMPORARY = _5694;   /* for PHI node */
    goto _5914;
  } else {
    _5695__PHI_TEMPORARY = 16;   /* for PHI node */
    _5696__PHI_TEMPORARY = _5694;   /* for PHI node */
    goto _5915;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5915:
  _5695 = _5695__PHI_TEMPORARY;
  _5696 = _5696__PHI_TEMPORARY;
  if (((((int64_t)_5695) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5695) < ((uint64_t)(((uint64_t)(uint8_t)_5693)))))) {
    _5706__PHI_TEMPORARY = _5696;   /* for PHI node */
    goto _5914;
  } else {
    goto _5916;
  }

_5916:
  _5697 = *(uint64_t*)_5686;
  _5698 = *(uint64_t*)_5688;
  if ((((int64_t)_5698) > ((int64_t)_5697))) {
    goto _5917;
  } else {
    _5706__PHI_TEMPORARY = _5696;   /* for PHI node */
    goto _5914;
  }

_5917:
  _5699 = *(void**)_5685;
  _5700 = *(uint8_t*)(((&((uint8_t*)_5699)[((int64_t)_5697)])));
  if ((((int8_t)_5700) > ((int8_t)((uint8_t)-65)))) {
    _5706__PHI_TEMPORARY = _5696;   /* for PHI node */
    goto _5914;
  } else {
    goto _5918;
  }

_5918:
  _5701 = llvm_select_u32((((int64_t)_5697) < ((int64_t)_5698)), (((uint32_t)(uint8_t)_5700)), 0);
  _5702 = *(uint64_t*)_5686;
  *(uint64_t*)_5686 = (llvm_add_u64(_5702, 1));
  _5703 = llvm_neg_u64(_5695);
  _5704 = _5696 | (llvm_select_u32((((int64_t)_5695) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5703) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5701, (((uint32_t)_5703)))))), (llvm_select_u32((((uint64_t)_5695) > ((uint64_t)UINT64_C(31))), 0, (_5701 << (((uint32_t)_5695)))))));
  _5705 = llvm_add_u64(_5695, -8);
  _5695__PHI_TEMPORARY = _5705;   /* for PHI node */
  _5696__PHI_TEMPORARY = _5704;   /* for PHI node */
  goto _5915;

  } while (1); /* end of syntactic loop '' */
_5914:
  _5706 = _5706__PHI_TEMPORARY;
  _5707 = *(uint64_t*)_5002;
  _5708 = *(uint64_t*)_5004;
  _5709 = jsyn_cbe_fshl_i64(_5708, _5707, 32);
  _5710 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5706)), _5708, 32);
  *(uint64_t*)_5002 = _5709;
  *(uint64_t*)_5004 = _5710;
  _5711 = *(uint64_t*)_5451;
  _5712 = ((&((uint8_t*)_4985)[((int64_t)64)]));
  _5713 = *(uint64_t*)_5712;
  _5714 = ((&((uint8_t*)_4985)[((int64_t)72)]));
  _5715 = *(uint64_t*)_5714;
  _5716 = *(void**)_4985;
  _5717 = *(uint64_t*)(((&((uint8_t*)_5716)[((int64_t)16)])));
  *(uint64_t*)_5449 = _5711;
  *(uint64_t*)_5451 = _5713;
  *(uint64_t*)_5712 = _5715;
  *(uint64_t*)_5714 = _5717;
  goto _5904;

  } while (1); /* end of syntactic loop '' */
_5912:
  julia_emit_20((&_4999), _4984, _4985, 754, 1);
  _5008__PHI_TEMPORARY = (&_4999);   /* for PHI node */
  goto _5724;

_5784:
  _5718 = _5718__PHI_TEMPORARY;
  julia_emit_20((&_4992), _4984, _4985, _5718, 1);
  _5008__PHI_TEMPORARY = (&_4992);   /* for PHI node */
  goto _5724;

_5901:
  jsk_ijl_undefined_var_error((((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)616)]))), (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)648)]))));
  __builtin_unreachable();

_5900:
  if (_5665) {
    goto _5902;
  } else {
    goto _5904;
  }

}


static uint8_t julia_isopsuffix_50(void* _5919, uint32_t _5920) {
  bool _5921;
  bool _5921__PHI_TEMPORARY;
  uint32_t _5922;
  uint64_t _5923;
  uint32_t _5924;
  uint32_t _5925;
  uint64_t _5926;
  bool _5927;
  bool _5928;
  uint32_t _5929;
  uint32_t _5930;
  uint32_t _5931;
  uint32_t _5932;
  uint32_t _5932__PHI_TEMPORARY;
  uint32_t _5933;
  uint32_t _5934;
  uint32_t _5935;

  if ((_5920 == 4294967295u)) {
    _5921__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5936;
  } else {
    goto _5937;
  }

_5938:
  if ((((bool)(((uint32_t)(llvm_lshr_u32(1122337, _5934))))&1u))) {
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  } else {
    goto _5939;
  }

_5940:
  if ((((bool)(llvm_lshr_u64(INT64_C(137438953535), (((uint64_t)(uint32_t)_5935))))&1u))) {
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  } else {
    goto _5939;
  }

_5936:
  _5921 = _5921__PHI_TEMPORARY;
  return (((uint8_t)(bool)_5921));
_5937:
  _5922 = llvm_OC_ctlz_OC_i32((_5920 ^ -1), 0);
  _5923 = ((uint64_t)(uint32_t)_5922);
  _5924 = llvm_OC_cttz_OC_i32(_5920, 0);
  _5925 = _5924 & 56;
  _5926 = ((uint64_t)(uint32_t)_5925);
  _5927 = llvm_select_bool((((uint32_t)_5924) < ((uint32_t)32u)), ((llvm_lshr_u32(((_5920 & 12632256) ^ 8421504), _5925)) != 0u), 0);
  _5928 = (((_5920 & -33554432) == 3221225472u) | ((_5920 & -2097152) == 3766484992u)) | ((_5920 & -1048576) == 4034920448u);
  if ((((((_5922 == 1u) | (((uint64_t)(llvm_add_u64((_5923 << 3), _5926))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_5920) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_5920, 191905856))) < ((uint32_t)4193304640u)))) | _5927) | _5928)) {
    _5921__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5936;
  } else {
    goto _5941;
  }

_5941:
  _5929 = llvm_lshr_u32(_5920, 24);
  if ((((int32_t)_5920) < ((int32_t)0u))) {
    goto _5942;
  } else {
    _5932__PHI_TEMPORARY = _5929;   /* for PHI node */
    goto _5943;
  }

_5942:
  if ((((_5922 == 1u) | (((uint64_t)(llvm_add_u64((_5923 << 3), _5926))) > ((uint64_t)UINT64_C(32)))) | (_5927 | _5928))) {
    goto _5944;
  } else {
    goto _5945;
  }

_5944:
  julia_throw_invalid_char_21(_5919, _5920);
  __builtin_unreachable();

_5945:
  _5930 = llvm_select_u32((((uint32_t)_5924) < ((uint32_t)32u)), (llvm_lshr_u32((_5920 & (llvm_lshr_u32(-1, _5922))), _5925)), 0);
  _5931 = (((_5930 & 127) | ((llvm_lshr_u32(_5930, 2)) & 8128)) | ((llvm_lshr_u32(_5930, 4)) & 520192)) | ((llvm_lshr_u32(_5930, 6)) & 33292288);
  _5932__PHI_TEMPORARY = _5931;   /* for PHI node */
  goto _5943;

_5943:
  _5932 = _5932__PHI_TEMPORARY;
  if ((((uint32_t)(llvm_add_u32(_5932, -161))) < ((uint32_t)1113951u))) {
    goto _5946;
  } else {
    _5921__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5936;
  }

_5946:
  _5933 = jsk_utf8proc_category(_5932);
  if (((((uint32_t)(llvm_add_u32(_5933, -6))) < ((uint32_t)3u)) | ((_5932 & 2097150) == 178u))) {
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  } else {
    goto _5947;
  }

_5947:
  switch (_5932) {
  default:
    goto _5948;
  case 185u:
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  case 688u:
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  }

_5948:
  if ((llvm_select_bool((llvm_select_bool(((_5932 & 2097150) == 690u), 1, (((uint32_t)(llvm_add_u32(_5932, -695))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_5932, -737))) < ((uint32_t)3u))))) {
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  } else {
    goto _5949;
  }

_5949:
  switch (_5932) {
  default:
    goto _5950;
  case 7468u:
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  case 7470u:
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  }

_5950:
  if ((llvm_select_bool(((llvm_select_bool(((llvm_select_bool(((llvm_select_bool((llvm_select_bool(((llvm_select_bool(((_5932 & 2097150) == 7472u), 1, (((uint32_t)(llvm_add_u32(_5932, -7475))) < ((uint32_t)8u)))) | (_5932 == 7484u)), 1, (((uint32_t)(llvm_add_u32(_5932, -7486))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_5932, -7495))) < ((uint32_t)3u)))) | (_5932 == 7501u)), 1, (((uint32_t)(llvm_add_u32(_5932, -7503))) < ((uint32_t)2u)))) | (_5932 == 7506u)), 1, (((uint32_t)(llvm_add_u32(_5932, -7510))) < ((uint32_t)3u)))) | (_5932 == 7515u)), 1, (((uint32_t)(llvm_add_u32(_5932, -7517))) < ((uint32_t)14u))))) {
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  } else {
    goto _5951;
  }

_5951:
  switch (_5932) {
  default:
    goto _5952;
  case 7580u:
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  case 7584u:
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  }

_5952:
  if ((((uint32_t)(llvm_add_u32(_5932, -7589))) < ((uint32_t)2u))) {
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  } else {
    goto _5953;
  }

_5953:
  _5934 = llvm_add_u32(_5932, -7595);
  if ((((uint32_t)_5934) < ((uint32_t)21u))) {
    goto _5938;
  } else {
    goto _5954;
  }

_5954:
  _5935 = llvm_add_u32(_5932, -8242);
  if ((((uint32_t)_5935) < ((uint32_t)38u))) {
    goto _5940;
  } else {
    goto _5939;
  }

_5939:
  if (((llvm_select_bool(((llvm_select_bool(((_5932 & 2097150) == 8304u), 1, (((uint32_t)(llvm_add_u32(_5932, -8308))) < ((uint32_t)27u)))) | ((_5932 & 2097148) == 8336u)), 1, (((uint32_t)(llvm_add_u32(_5932, -8341))) < ((uint32_t)8u)))) | ((_5932 & 2097150) == 11388u))) {
    _5921__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5936;
  } else {
    goto _5955;
  }

_5955:
  _5921__PHI_TEMPORARY = (((uint32_t)(llvm_add_u32(_5932, -42779))) < ((uint32_t)3u));   /* for PHI node */
  goto _5936;

}


static uint8_t julia_accept_number_51(void* _5956, void* _5957) {
  uint8_t _5958;
  uint8_t _5958__PHI_TEMPORARY;
  void* _5959;
  uint64_t _5960;
  void* _5961;
  uint64_t _5962;
  uint64_t _5963;
  void* _5964;
  void* _5965;
  uint64_t _5966;
  void* _5967;
  uint64_t _5968;
  void* _5969;
  uint8_t _5970;
  uint8_t _5971;
  uint8_t _5972;
  uint32_t _5973;
  uint64_t _5974;
  uint64_t _5974__PHI_TEMPORARY;
  uint32_t _5975;
  uint32_t _5975__PHI_TEMPORARY;
  uint64_t _5976;
  uint64_t _5977;
  void* _5978;
  uint8_t _5979;
  uint32_t _5980;
  uint64_t _5981;
  uint64_t _5982;
  uint32_t _5983;
  uint64_t _5984;
  uint32_t _5985;
  uint32_t _5985__PHI_TEMPORARY;
  uint64_t _5986;
  uint64_t _5987;
  uint64_t _5988;
  uint64_t _5989;
  void* _5990;
  uint64_t _5991;
  void* _5992;
  uint64_t _5993;
  void* _5994;
  uint64_t _5995;
  void* _5996;
  uint64_t _5997;

  _5958__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _5998;

  do {     /* Syntactic loop '' to make GCC happy */
_5998:
  _5958 = _5958__PHI_TEMPORARY;
  _5959 = ((&((uint8_t*)_5957)[((int64_t)32)]));
  _5960 = *(uint64_t*)_5959;
  _5961 = ((&((uint8_t*)_5957)[((int64_t)40)]));
  _5962 = llvm_lshr_u64(_5960, 32);
  if ((_5962 == UINT64_C(1593835520))) {
    goto _5999;
  } else {
    goto _6000;
  }

_5999:
  _5963 = *(uint64_t*)_5961;
  if ((((uint32_t)(llvm_add_u32((((uint32_t)_5963)), -805306368))) < ((uint32_t)150994945u))) {
    goto _6000;
  } else {
    goto _6001;
  }

_6000:
  if (((((((uint64_t)_5960) > ((uint64_t)UINT64_C(3458764518115508223))) | (_5962 == UINT64_C(805306368))) & ((((uint64_t)_5960) < ((uint64_t)UINT64_C(4107282860161892352))) | (_5962 == UINT64_C(956301312)))) | (_5962 == UINT64_C(1593835520)))) {
    goto _6002;
  } else {
    goto _6001;
  }

_6002:
  _5964 = *(void**)_5957;
  _5965 = ((&((uint8_t*)_5964)[((int64_t)16)]));
  _5966 = *(uint64_t*)_5965;
  _5967 = ((&((uint8_t*)_5964)[((int64_t)8)]));
  _5968 = *(uint64_t*)_5967;
  if ((((int64_t)_5968) > ((int64_t)_5966))) {
    goto _6003;
  } else {
    _5985__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _6004;
  }

_6003:
  _5969 = *(void**)_5964;
  _5970 = *(uint8_t*)(((&((uint8_t*)_5969)[((int64_t)_5966)])));
  *(uint64_t*)_5965 = (llvm_add_u64(_5966, 1));
  _5971 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5970)), 0);
  _5972 = llvm_sub_u8(32, (llvm_shl_u8(_5971, 3)));
  _5973 = (((uint32_t)(uint8_t)_5970)) << 24;
  if ((((uint8_t)_5972) > ((uint8_t)((uint8_t)16)))) {
    _5985__PHI_TEMPORARY = _5973;   /* for PHI node */
    goto _6004;
  } else {
    _5974__PHI_TEMPORARY = 16;   /* for PHI node */
    _5975__PHI_TEMPORARY = _5973;   /* for PHI node */
    goto _6005;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_6005:
  _5974 = _5974__PHI_TEMPORARY;
  _5975 = _5975__PHI_TEMPORARY;
  if (((((int64_t)_5974) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5974) < ((uint64_t)(((uint64_t)(uint8_t)_5972)))))) {
    _5985__PHI_TEMPORARY = _5975;   /* for PHI node */
    goto _6004;
  } else {
    goto _6006;
  }

_6006:
  _5976 = *(uint64_t*)_5965;
  _5977 = *(uint64_t*)_5967;
  if ((((int64_t)_5977) > ((int64_t)_5976))) {
    goto _6007;
  } else {
    _5985__PHI_TEMPORARY = _5975;   /* for PHI node */
    goto _6004;
  }

_6007:
  _5978 = *(void**)_5964;
  _5979 = *(uint8_t*)(((&((uint8_t*)_5978)[((int64_t)_5976)])));
  if ((((int8_t)_5979) > ((int8_t)((uint8_t)-65)))) {
    _5985__PHI_TEMPORARY = _5975;   /* for PHI node */
    goto _6004;
  } else {
    goto _6008;
  }

_6008:
  _5980 = llvm_select_u32((((int64_t)_5976) < ((int64_t)_5977)), (((uint32_t)(uint8_t)_5979)), 0);
  _5981 = *(uint64_t*)_5965;
  *(uint64_t*)_5965 = (llvm_add_u64(_5981, 1));
  _5982 = llvm_neg_u64(_5974);
  _5983 = _5975 | (llvm_select_u32((((int64_t)_5974) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5982) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5980, (((uint32_t)_5982)))))), (llvm_select_u32((((uint64_t)_5974) > ((uint64_t)UINT64_C(31))), 0, (_5980 << (((uint32_t)_5974)))))));
  _5984 = llvm_add_u64(_5974, -8);
  _5974__PHI_TEMPORARY = _5984;   /* for PHI node */
  _5975__PHI_TEMPORARY = _5983;   /* for PHI node */
  goto _6005;

  } while (1); /* end of syntactic loop '' */
_6004:
  _5985 = _5985__PHI_TEMPORARY;
  _5986 = *(uint64_t*)_5959;
  _5987 = *(uint64_t*)_5961;
  _5988 = jsyn_cbe_fshl_i64(_5987, _5986, 32);
  _5989 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5985)), _5987, 32);
  *(uint64_t*)_5959 = _5988;
  *(uint64_t*)_5961 = _5989;
  _5990 = ((&((uint8_t*)_5957)[((int64_t)56)]));
  _5991 = *(uint64_t*)_5990;
  _5992 = ((&((uint8_t*)_5957)[((int64_t)64)]));
  _5993 = *(uint64_t*)_5992;
  _5994 = ((&((uint8_t*)_5957)[((int64_t)72)]));
  _5995 = *(uint64_t*)_5994;
  _5996 = *(void**)_5957;
  _5997 = *(uint64_t*)(((&((uint8_t*)_5996)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5957)[((int64_t)48)]))) = _5991;
  *(uint64_t*)_5990 = _5993;
  *(uint64_t*)_5992 = _5995;
  *(uint64_t*)_5994 = _5997;
  _5958__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _5998;

  } while (1); /* end of syntactic loop '' */
_6001:
  return _5958;
}


static uint8_t julia_accept_number_52(void* _6009, void* _6010) {
  uint8_t _6011;
  uint8_t _6011__PHI_TEMPORARY;
  void* _6012;
  uint64_t _6013;
  uint64_t _6014;
  void* _6015;
  uint64_t _6016;
  uint64_t _6017;
  uint32_t _6018;
  void* _6019;
  void* _6020;
  uint64_t _6021;
  void* _6022;
  uint64_t _6023;
  void* _6024;
  uint8_t _6025;
  uint8_t _6026;
  uint8_t _6027;
  uint32_t _6028;
  uint64_t _6029;
  uint64_t _6029__PHI_TEMPORARY;
  uint32_t _6030;
  uint32_t _6030__PHI_TEMPORARY;
  uint64_t _6031;
  uint64_t _6032;
  void* _6033;
  uint8_t _6034;
  uint32_t _6035;
  uint64_t _6036;
  uint64_t _6037;
  uint32_t _6038;
  uint64_t _6039;
  uint32_t _6040;
  uint32_t _6040__PHI_TEMPORARY;
  uint64_t _6041;
  uint64_t _6042;
  uint64_t _6043;
  uint64_t _6044;
  void* _6045;
  uint64_t _6046;
  void* _6047;
  uint64_t _6048;
  void* _6049;
  uint64_t _6050;
  void* _6051;
  uint64_t _6052;

  _6011__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _6053;

  do {     /* Syntactic loop '' to make GCC happy */
_6053:
  _6011 = _6011__PHI_TEMPORARY;
  _6012 = ((&((uint8_t*)_6010)[((int64_t)32)]));
  _6013 = *(uint64_t*)_6012;
  _6014 = ((uint64_t)_6013);
  _6015 = ((&((uint8_t*)_6010)[((int64_t)40)]));
  _6016 = llvm_lshr_u64(_6014, 32);
  _6017 = *(uint64_t*)_6015;
  _6018 = ((uint32_t)_6017);
  if ((llvm_select_bool((llvm_select_bool((_6016 != UINT64_C(1593835520)), 1, ((((uint32_t)(llvm_add_u32(_6018, -805306368))) < ((uint32_t)150994945u)) | (((uint32_t)(llvm_add_u32(_6018, 2667577344u))) < ((uint32_t)83886081u))))), 1, (((uint32_t)(llvm_add_u32(_6018, 3204448256u))) < ((uint32_t)83886081u))))) {
    goto _6054;
  } else {
    goto _6055;
  }

_6054:
  if ((((((uint64_t)_6014) > ((uint64_t)UINT64_C(3458764518115508223))) | (_6016 == UINT64_C(805306368))) & ((((uint64_t)_6014) < ((uint64_t)UINT64_C(4107282860161892352))) | (_6016 == UINT64_C(956301312))))) {
    goto _6056;
  } else {
    goto _6057;
  }

_6057:
  if (((((uint64_t)_6014) < ((uint64_t)UINT64_C(6989586625973977088))) & (_6016 != UINT64_C(1627389952)))) {
    goto _6058;
  } else {
    goto _6059;
  }

_6059:
  if (((((uint64_t)_6014) < ((uint64_t)UINT64_C(7349874591868649472))) | (_6016 == UINT64_C(1711276032)))) {
    goto _6056;
  } else {
    goto _6058;
  }

_6058:
  if (((((uint64_t)_6014) < ((uint64_t)UINT64_C(4683743616760283136))) & (_6016 != UINT64_C(1090519040)))) {
    goto _6060;
  } else {
    goto _6061;
  }

_6061:
  if ((((uint64_t)_6014) < ((uint64_t)UINT64_C(5044031582654955520)))) {
    goto _6056;
  } else {
    goto _6062;
  }

_6062:
  switch ((((uint32_t)_6016))) {
  default:
    goto _6055;
  case 1593835520u:
    goto _6056;
  case 1174405120u:
    goto _6056;
  }

_6060:
  if ((_6016 != UINT64_C(1593835520))) {
    goto _6055;
  } else {
    goto _6056;
  }

_6056:
  _6019 = *(void**)_6010;
  _6020 = ((&((uint8_t*)_6019)[((int64_t)16)]));
  _6021 = *(uint64_t*)_6020;
  _6022 = ((&((uint8_t*)_6019)[((int64_t)8)]));
  _6023 = *(uint64_t*)_6022;
  if ((((int64_t)_6023) > ((int64_t)_6021))) {
    goto _6063;
  } else {
    _6040__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _6064;
  }

_6063:
  _6024 = *(void**)_6019;
  _6025 = *(uint8_t*)(((&((uint8_t*)_6024)[((int64_t)_6021)])));
  *(uint64_t*)_6020 = (llvm_add_u64(_6021, 1));
  _6026 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_6025)), 0);
  _6027 = llvm_sub_u8(32, (llvm_shl_u8(_6026, 3)));
  _6028 = (((uint32_t)(uint8_t)_6025)) << 24;
  if ((((uint8_t)_6027) > ((uint8_t)((uint8_t)16)))) {
    _6040__PHI_TEMPORARY = _6028;   /* for PHI node */
    goto _6064;
  } else {
    _6029__PHI_TEMPORARY = 16;   /* for PHI node */
    _6030__PHI_TEMPORARY = _6028;   /* for PHI node */
    goto _6065;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_6065:
  _6029 = _6029__PHI_TEMPORARY;
  _6030 = _6030__PHI_TEMPORARY;
  if (((((int64_t)_6029) < ((int64_t)UINT64_C(0))) | (((uint64_t)_6029) < ((uint64_t)(((uint64_t)(uint8_t)_6027)))))) {
    _6040__PHI_TEMPORARY = _6030;   /* for PHI node */
    goto _6064;
  } else {
    goto _6066;
  }

_6066:
  _6031 = *(uint64_t*)_6020;
  _6032 = *(uint64_t*)_6022;
  if ((((int64_t)_6032) > ((int64_t)_6031))) {
    goto _6067;
  } else {
    _6040__PHI_TEMPORARY = _6030;   /* for PHI node */
    goto _6064;
  }

_6067:
  _6033 = *(void**)_6019;
  _6034 = *(uint8_t*)(((&((uint8_t*)_6033)[((int64_t)_6031)])));
  if ((((int8_t)_6034) > ((int8_t)((uint8_t)-65)))) {
    _6040__PHI_TEMPORARY = _6030;   /* for PHI node */
    goto _6064;
  } else {
    goto _6068;
  }

_6068:
  _6035 = llvm_select_u32((((int64_t)_6031) < ((int64_t)_6032)), (((uint32_t)(uint8_t)_6034)), 0);
  _6036 = *(uint64_t*)_6020;
  *(uint64_t*)_6020 = (llvm_add_u64(_6036, 1));
  _6037 = llvm_neg_u64(_6029);
  _6038 = _6030 | (llvm_select_u32((((int64_t)_6029) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_6037) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_6035, (((uint32_t)_6037)))))), (llvm_select_u32((((uint64_t)_6029) > ((uint64_t)UINT64_C(31))), 0, (_6035 << (((uint32_t)_6029)))))));
  _6039 = llvm_add_u64(_6029, -8);
  _6029__PHI_TEMPORARY = _6039;   /* for PHI node */
  _6030__PHI_TEMPORARY = _6038;   /* for PHI node */
  goto _6065;

  } while (1); /* end of syntactic loop '' */
_6064:
  _6040 = _6040__PHI_TEMPORARY;
  _6041 = *(uint64_t*)_6012;
  _6042 = *(uint64_t*)_6015;
  _6043 = jsyn_cbe_fshl_i64(_6042, _6041, 32);
  _6044 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_6040)), _6042, 32);
  *(uint64_t*)_6012 = _6043;
  *(uint64_t*)_6015 = _6044;
  _6045 = ((&((uint8_t*)_6010)[((int64_t)56)]));
  _6046 = *(uint64_t*)_6045;
  _6047 = ((&((uint8_t*)_6010)[((int64_t)64)]));
  _6048 = *(uint64_t*)_6047;
  _6049 = ((&((uint8_t*)_6010)[((int64_t)72)]));
  _6050 = *(uint64_t*)_6049;
  _6051 = *(void**)_6010;
  _6052 = *(uint64_t*)(((&((uint8_t*)_6051)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_6010)[((int64_t)48)]))) = _6046;
  *(uint64_t*)_6045 = _6048;
  *(uint64_t*)_6047 = _6050;
  *(uint64_t*)_6049 = _6052;
  _6011__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _6053;

  } while (1); /* end of syntactic loop '' */
_6055:
  return _6011;
}


static uint8_t julia_accept_number_53(void* _6069, void* _6070) {
  uint8_t _6071;
  uint8_t _6071__PHI_TEMPORARY;
  void* _6072;
  uint64_t _6073;
  void* _6074;
  uint64_t _6075;
  void* _6076;
  void* _6077;
  uint64_t _6078;
  void* _6079;
  uint64_t _6080;
  void* _6081;
  uint8_t _6082;
  uint8_t _6083;
  uint8_t _6084;
  uint32_t _6085;
  uint64_t _6086;
  uint64_t _6086__PHI_TEMPORARY;
  uint32_t _6087;
  uint32_t _6087__PHI_TEMPORARY;
  uint64_t _6088;
  uint64_t _6089;
  void* _6090;
  uint8_t _6091;
  uint32_t _6092;
  uint64_t _6093;
  uint64_t _6094;
  uint32_t _6095;
  uint64_t _6096;
  uint32_t _6097;
  uint32_t _6097__PHI_TEMPORARY;
  uint64_t _6098;
  uint64_t _6099;
  uint64_t _6100;
  uint64_t _6101;
  void* _6102;
  uint64_t _6103;
  void* _6104;
  uint64_t _6105;
  void* _6106;
  uint64_t _6107;
  void* _6108;
  uint64_t _6109;

  _6071__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _6110;

  do {     /* Syntactic loop '' to make GCC happy */
_6110:
  _6071 = _6071__PHI_TEMPORARY;
  _6072 = ((&((uint8_t*)_6070)[((int64_t)32)]));
  _6073 = *(uint64_t*)_6072;
  _6074 = ((&((uint8_t*)_6070)[((int64_t)40)]));
  if (((_6073 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920))) {
    goto _6111;
  } else {
    goto _6112;
  }

_6111:
  _6075 = *(uint64_t*)_6074;
  if (((_6075 & INT64_C(4278190079)) == UINT64_C(805306368))) {
    goto _6112;
  } else {
    goto _6113;
  }

_6112:
  if ((((_6073 & INT64_C(-72057598332895232)) == UINT64_C(3458764513820540928)) | ((_6073 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920)))) {
    goto _6114;
  } else {
    goto _6113;
  }

_6114:
  _6076 = *(void**)_6070;
  _6077 = ((&((uint8_t*)_6076)[((int64_t)16)]));
  _6078 = *(uint64_t*)_6077;
  _6079 = ((&((uint8_t*)_6076)[((int64_t)8)]));
  _6080 = *(uint64_t*)_6079;
  if ((((int64_t)_6080) > ((int64_t)_6078))) {
    goto _6115;
  } else {
    _6097__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _6116;
  }

_6115:
  _6081 = *(void**)_6076;
  _6082 = *(uint8_t*)(((&((uint8_t*)_6081)[((int64_t)_6078)])));
  *(uint64_t*)_6077 = (llvm_add_u64(_6078, 1));
  _6083 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_6082)), 0);
  _6084 = llvm_sub_u8(32, (llvm_shl_u8(_6083, 3)));
  _6085 = (((uint32_t)(uint8_t)_6082)) << 24;
  if ((((uint8_t)_6084) > ((uint8_t)((uint8_t)16)))) {
    _6097__PHI_TEMPORARY = _6085;   /* for PHI node */
    goto _6116;
  } else {
    _6086__PHI_TEMPORARY = 16;   /* for PHI node */
    _6087__PHI_TEMPORARY = _6085;   /* for PHI node */
    goto _6117;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_6117:
  _6086 = _6086__PHI_TEMPORARY;
  _6087 = _6087__PHI_TEMPORARY;
  if (((((int64_t)_6086) < ((int64_t)UINT64_C(0))) | (((uint64_t)_6086) < ((uint64_t)(((uint64_t)(uint8_t)_6084)))))) {
    _6097__PHI_TEMPORARY = _6087;   /* for PHI node */
    goto _6116;
  } else {
    goto _6118;
  }

_6118:
  _6088 = *(uint64_t*)_6077;
  _6089 = *(uint64_t*)_6079;
  if ((((int64_t)_6089) > ((int64_t)_6088))) {
    goto _6119;
  } else {
    _6097__PHI_TEMPORARY = _6087;   /* for PHI node */
    goto _6116;
  }

_6119:
  _6090 = *(void**)_6076;
  _6091 = *(uint8_t*)(((&((uint8_t*)_6090)[((int64_t)_6088)])));
  if ((((int8_t)_6091) > ((int8_t)((uint8_t)-65)))) {
    _6097__PHI_TEMPORARY = _6087;   /* for PHI node */
    goto _6116;
  } else {
    goto _6120;
  }

_6120:
  _6092 = llvm_select_u32((((int64_t)_6088) < ((int64_t)_6089)), (((uint32_t)(uint8_t)_6091)), 0);
  _6093 = *(uint64_t*)_6077;
  *(uint64_t*)_6077 = (llvm_add_u64(_6093, 1));
  _6094 = llvm_neg_u64(_6086);
  _6095 = _6087 | (llvm_select_u32((((int64_t)_6086) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_6094) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_6092, (((uint32_t)_6094)))))), (llvm_select_u32((((uint64_t)_6086) > ((uint64_t)UINT64_C(31))), 0, (_6092 << (((uint32_t)_6086)))))));
  _6096 = llvm_add_u64(_6086, -8);
  _6086__PHI_TEMPORARY = _6096;   /* for PHI node */
  _6087__PHI_TEMPORARY = _6095;   /* for PHI node */
  goto _6117;

  } while (1); /* end of syntactic loop '' */
_6116:
  _6097 = _6097__PHI_TEMPORARY;
  _6098 = *(uint64_t*)_6072;
  _6099 = *(uint64_t*)_6074;
  _6100 = jsyn_cbe_fshl_i64(_6099, _6098, 32);
  _6101 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_6097)), _6099, 32);
  *(uint64_t*)_6072 = _6100;
  *(uint64_t*)_6074 = _6101;
  _6102 = ((&((uint8_t*)_6070)[((int64_t)56)]));
  _6103 = *(uint64_t*)_6102;
  _6104 = ((&((uint8_t*)_6070)[((int64_t)64)]));
  _6105 = *(uint64_t*)_6104;
  _6106 = ((&((uint8_t*)_6070)[((int64_t)72)]));
  _6107 = *(uint64_t*)_6106;
  _6108 = *(void**)_6070;
  _6109 = *(uint64_t*)(((&((uint8_t*)_6108)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_6070)[((int64_t)48)]))) = _6103;
  *(uint64_t*)_6102 = _6105;
  *(uint64_t*)_6104 = _6107;
  *(uint64_t*)_6106 = _6109;
  _6071__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _6110;

  } while (1); /* end of syntactic loop '' */
_6113:
  return _6071;
}


static uint8_t julia_accept_number_54(void* _6121, void* _6122) {
  uint8_t _6123;
  uint8_t _6123__PHI_TEMPORARY;
  void* _6124;
  uint64_t _6125;
  uint64_t _6126;
  void* _6127;
  uint64_t _6128;
  uint64_t _6129;
  void* _6130;
  void* _6131;
  uint64_t _6132;
  void* _6133;
  uint64_t _6134;
  void* _6135;
  uint8_t _6136;
  uint8_t _6137;
  uint8_t _6138;
  uint32_t _6139;
  uint64_t _6140;
  uint64_t _6140__PHI_TEMPORARY;
  uint32_t _6141;
  uint32_t _6141__PHI_TEMPORARY;
  uint64_t _6142;
  uint64_t _6143;
  void* _6144;
  uint8_t _6145;
  uint32_t _6146;
  uint64_t _6147;
  uint64_t _6148;
  uint32_t _6149;
  uint64_t _6150;
  uint32_t _6151;
  uint32_t _6151__PHI_TEMPORARY;
  uint64_t _6152;
  uint64_t _6153;
  uint64_t _6154;
  uint64_t _6155;
  void* _6156;
  uint64_t _6157;
  void* _6158;
  uint64_t _6159;
  void* _6160;
  uint64_t _6161;
  void* _6162;
  uint64_t _6163;

  _6123__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _6164;

  do {     /* Syntactic loop '' to make GCC happy */
_6164:
  _6123 = _6123__PHI_TEMPORARY;
  _6124 = ((&((uint8_t*)_6122)[((int64_t)32)]));
  _6125 = *(uint64_t*)_6124;
  _6126 = ((uint64_t)_6125);
  _6127 = ((&((uint8_t*)_6122)[((int64_t)40)]));
  _6128 = llvm_lshr_u64(_6126, 32);
  if ((_6128 == UINT64_C(1593835520))) {
    goto _6165;
  } else {
    goto _6166;
  }

_6165:
  _6129 = *(uint64_t*)_6127;
  if ((((uint32_t)(llvm_add_u32((((uint32_t)_6129)), -805306368))) < ((uint32_t)117440513u))) {
    goto _6166;
  } else {
    goto _6167;
  }

_6166:
  if (((((uint64_t)_6126) < ((uint64_t)UINT64_C(3458764518115508224))) & (_6128 != UINT64_C(805306368)))) {
    goto _6168;
  } else {
    goto _6169;
  }

_6169:
  if ((((uint64_t)_6126) < ((uint64_t)UINT64_C(3963167672086036480)))) {
    goto _6170;
  } else {
    goto _6171;
  }

_6171:
  switch ((((uint32_t)_6128))) {
  default:
    goto _6167;
  case 1593835520u:
    goto _6170;
  case 922746880u:
    goto _6170;
  }

_6168:
  if ((_6128 == UINT64_C(1593835520))) {
    goto _6170;
  } else {
    goto _6167;
  }

_6170:
  _6130 = *(void**)_6122;
  _6131 = ((&((uint8_t*)_6130)[((int64_t)16)]));
  _6132 = *(uint64_t*)_6131;
  _6133 = ((&((uint8_t*)_6130)[((int64_t)8)]));
  _6134 = *(uint64_t*)_6133;
  if ((((int64_t)_6134) > ((int64_t)_6132))) {
    goto _6172;
  } else {
    _6151__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _6173;
  }

_6172:
  _6135 = *(void**)_6130;
  _6136 = *(uint8_t*)(((&((uint8_t*)_6135)[((int64_t)_6132)])));
  *(uint64_t*)_6131 = (llvm_add_u64(_6132, 1));
  _6137 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_6136)), 0);
  _6138 = llvm_sub_u8(32, (llvm_shl_u8(_6137, 3)));
  _6139 = (((uint32_t)(uint8_t)_6136)) << 24;
  if ((((uint8_t)_6138) > ((uint8_t)((uint8_t)16)))) {
    _6151__PHI_TEMPORARY = _6139;   /* for PHI node */
    goto _6173;
  } else {
    _6140__PHI_TEMPORARY = 16;   /* for PHI node */
    _6141__PHI_TEMPORARY = _6139;   /* for PHI node */
    goto _6174;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_6174:
  _6140 = _6140__PHI_TEMPORARY;
  _6141 = _6141__PHI_TEMPORARY;
  if (((((int64_t)_6140) < ((int64_t)UINT64_C(0))) | (((uint64_t)_6140) < ((uint64_t)(((uint64_t)(uint8_t)_6138)))))) {
    _6151__PHI_TEMPORARY = _6141;   /* for PHI node */
    goto _6173;
  } else {
    goto _6175;
  }

_6175:
  _6142 = *(uint64_t*)_6131;
  _6143 = *(uint64_t*)_6133;
  if ((((int64_t)_6143) > ((int64_t)_6142))) {
    goto _6176;
  } else {
    _6151__PHI_TEMPORARY = _6141;   /* for PHI node */
    goto _6173;
  }

_6176:
  _6144 = *(void**)_6130;
  _6145 = *(uint8_t*)(((&((uint8_t*)_6144)[((int64_t)_6142)])));
  if ((((int8_t)_6145) > ((int8_t)((uint8_t)-65)))) {
    _6151__PHI_TEMPORARY = _6141;   /* for PHI node */
    goto _6173;
  } else {
    goto _6177;
  }

_6177:
  _6146 = llvm_select_u32((((int64_t)_6142) < ((int64_t)_6143)), (((uint32_t)(uint8_t)_6145)), 0);
  _6147 = *(uint64_t*)_6131;
  *(uint64_t*)_6131 = (llvm_add_u64(_6147, 1));
  _6148 = llvm_neg_u64(_6140);
  _6149 = _6141 | (llvm_select_u32((((int64_t)_6140) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_6148) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_6146, (((uint32_t)_6148)))))), (llvm_select_u32((((uint64_t)_6140) > ((uint64_t)UINT64_C(31))), 0, (_6146 << (((uint32_t)_6140)))))));
  _6150 = llvm_add_u64(_6140, -8);
  _6140__PHI_TEMPORARY = _6150;   /* for PHI node */
  _6141__PHI_TEMPORARY = _6149;   /* for PHI node */
  goto _6174;

  } while (1); /* end of syntactic loop '' */
_6173:
  _6151 = _6151__PHI_TEMPORARY;
  _6152 = *(uint64_t*)_6124;
  _6153 = *(uint64_t*)_6127;
  _6154 = jsyn_cbe_fshl_i64(_6153, _6152, 32);
  _6155 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_6151)), _6153, 32);
  *(uint64_t*)_6124 = _6154;
  *(uint64_t*)_6127 = _6155;
  _6156 = ((&((uint8_t*)_6122)[((int64_t)56)]));
  _6157 = *(uint64_t*)_6156;
  _6158 = ((&((uint8_t*)_6122)[((int64_t)64)]));
  _6159 = *(uint64_t*)_6158;
  _6160 = ((&((uint8_t*)_6122)[((int64_t)72)]));
  _6161 = *(uint64_t*)_6160;
  _6162 = *(void**)_6122;
  _6163 = *(uint64_t*)(((&((uint8_t*)_6162)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_6122)[((int64_t)48)]))) = _6157;
  *(uint64_t*)_6156 = _6159;
  *(uint64_t*)_6158 = _6161;
  *(uint64_t*)_6160 = _6163;
  _6123__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _6164;

  } while (1); /* end of syntactic loop '' */
_6167:
  return _6123;
}


static uint8_t julia_YY_OC_lex_digitYY_OC_YY_OC_0_55(void* _6178, uint32_t _6179) {
  uint8_t _6180;
  uint8_t _6180__PHI_TEMPORARY;
  uint32_t _6181;
  uint64_t _6182;
  uint32_t _6183;
  uint32_t _6184;
  uint64_t _6185;
  bool _6186;
  bool _6187;
  uint32_t _6188;
  uint32_t _6189;
  uint32_t _6190;
  uint32_t _6191;
  uint32_t _6191__PHI_TEMPORARY;
  uint32_t _6192;
  uint8_t _6193;

  if ((((uint32_t)(llvm_add_u32(_6179, -805306368))) < ((uint32_t)150994945u))) {
    _6180__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _6194;
  } else {
    goto _6195;
  }

_6194:
  _6180 = _6180__PHI_TEMPORARY;
  return _6180;
_6195:
  if ((_6179 == 4294967295u)) {
    _6180__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _6194;
  } else {
    goto _6196;
  }

_6196:
  _6181 = llvm_OC_ctlz_OC_i32((_6179 ^ -1), 0);
  _6182 = ((uint64_t)(uint32_t)_6181);
  _6183 = llvm_OC_cttz_OC_i32(_6179, 0);
  _6184 = _6183 & 56;
  _6185 = ((uint64_t)(uint32_t)_6184);
  _6186 = llvm_select_bool((((uint32_t)_6183) < ((uint32_t)32u)), ((llvm_lshr_u32(((_6179 & 12632256) ^ 8421504), _6184)) != 0u), 0);
  _6187 = (((_6179 & -33554432) == 3221225472u) | ((_6179 & -2097152) == 3766484992u)) | ((_6179 & -1048576) == 4034920448u);
  if (((((((uint32_t)_6179) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_6179, 293568512))) < ((uint32_t)101662656u))) & (((((_6181 == 1u) | (((uint64_t)(llvm_add_u64((_6182 << 3), _6185))) > ((uint64_t)UINT64_C(32)))) | _6186) | _6187) ^ 1)) & (_6179 != 4036993714u))) {
    goto _6197;
  } else {
    _6180__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _6194;
  }

_6197:
  _6188 = llvm_lshr_u32(_6179, 24);
  if ((((int32_t)_6179) < ((int32_t)0u))) {
    goto _6198;
  } else {
    _6191__PHI_TEMPORARY = _6188;   /* for PHI node */
    goto _6199;
  }

_6198:
  if ((((_6181 == 1u) | (((uint64_t)(llvm_add_u64((_6182 << 3), _6185))) > ((uint64_t)UINT64_C(32)))) | (_6186 | _6187))) {
    goto _6200;
  } else {
    goto _6201;
  }

_6200:
  julia_throw_invalid_char_21(_6178, _6179);
  __builtin_unreachable();

_6201:
  _6189 = llvm_select_u32((((uint32_t)_6183) < ((uint32_t)32u)), (llvm_lshr_u32((_6179 & (llvm_lshr_u32(-1, _6181))), _6184)), 0);
  _6190 = (((_6189 & 127) | ((llvm_lshr_u32(_6189, 2)) & 8128)) | ((llvm_lshr_u32(_6189, 4)) & 520192)) | ((llvm_lshr_u32(_6189, 6)) & 33292288);
  _6191__PHI_TEMPORARY = _6190;   /* for PHI node */
  goto _6199;

_6199:
  _6191 = _6191__PHI_TEMPORARY;
  _6192 = jsk_jl_id_start_char(_6191);
  _6193 = ((uint8_t)(bool)(_6192 != 0u));
  _6180__PHI_TEMPORARY = _6193;   /* for PHI node */
  goto _6194;

}

#undef bool
#undef __noreturn
#undef __forceinline
#undef __ATTRIBUTELIST__
#undef __PREFIXALIGN__
#undef __POSTFIXALIGN__
#undef __HIDDEN__
