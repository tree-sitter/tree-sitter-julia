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
static __noreturn void julia_throw_code_point_err_12(void* _354, uint32_t _355) __ATTRIBUTELIST__((noinline));
static void julia__growend_internalNOT_OC__13(void* _356, void* _357, int64_t _358, int64_t _359);
static uint32_t julia_escape_len_14(void* _427, void* _428, int64_t _429, uint8_t _430, uint8_t _431);
static uint32_t julia_var_identifier_15(void* _497, void* _498, int64_t _499);
static void julia_lex_string_chunk_16(void* _530, void* _531, void* _532);
static void julia__next_token_17(void* _1641, void* _1642, void* _1643, uint32_t _1644);
static struct l_array_1_void_KC_ julia_ConcurrencyViolationError_18(void* _1862, void* _1863);
static __noreturn void julia_throw_boundserror_19(void* _1865, void* _1866, void* _1867) __ATTRIBUTELIST__((noinline));
static void julia_emit_20(void* _1868, void* _1869, void* _1870, uint16_t _1871, uint8_t _1872);
static __noreturn void julia_throw_invalid_char_21(void* _1928, uint32_t _1929) __ATTRIBUTELIST__((noinline));
static void julia_lex_identifier_22(void* _1930, void* _1931, void* _1932, uint32_t _1933);
static uint8_t julia_is_operator_start_char_23(void* _2138, uint32_t _2139);
static uint8_t julia_is_never_id_char_24(void* _2171, uint32_t _2172);
static __noreturn void julia__throw_argerror_25(void* _2208, void* _2209) __ATTRIBUTELIST__((noinline));
static struct l_array_1_void_KC_ julia_AssertionError_26(void* _2210, void* _2211);
static void julia_lex_whitespace_27(void* _2213, void* _2214, void* _2215, uint32_t _2216);
static void julia_lex_star_28(void* _2299, void* _2300, void* _2301);
static void julia_lex_circumflex_29(void* _2396, void* _2397, void* _2398);
static void julia_lex_dollar_30(void* _2449, void* _2450, void* _2451);
static void julia_lex_xor_31(void* _2502, void* _2503, void* _2504);
static void julia_lex_comment_32(void* _2555, void* _2556, void* _2557);
static void julia_lex_equal_33(void* _2733, void* _2734, void* _2735);
static void julia_lex_exclaim_34(void* _2874, void* _2875, void* _2876);
static void julia_lex_greater_35(void* _2971, void* _2972, void* _2973);
static void julia_lex_less_36(void* _3244, void* _3245, void* _3246);
static void julia_lex_colon_37(void* _3679, void* _3680, void* _3681);
static void julia_lex_bar_38(void* _3776, void* _3777, void* _3778);
static void julia_lex_amper_39(void* _3917, void* _3918, void* _3919);
static void julia_lex_division_40(void* _4014, void* _4015, void* _4016);
static void julia_lex_quote_41(void* _4067, void* _4068, void* _4069);
static void julia_lex_percent_42(void* _4183, void* _4184, void* _4185);
static void julia_lex_forwardslash_43(void* _4236, void* _4237, void* _4238);
static void julia_lex_backslash_44(void* _4377, void* _4378, void* _4379);
static void julia_lex_dot_45(void* _4430, void* _4431, void* _4432);
static void julia_lex_plus_46(void* _4591, void* _4592, void* _4593);
static void julia_lex_minus_47(void* _4688, void* _4689, void* _4690);
static void julia_lex_backtick_48(void* _4875, void* _4876, void* _4877);
static void julia_lex_digit_49(void* _4985, void* _4986, void* _4987, uint16_t _4988);
static uint8_t julia_isopsuffix_50(void* _5921, uint32_t _5922);
static uint8_t julia_accept_number_51(void* _5958, void* _5959);
static uint8_t julia_accept_number_52(void* _6011, void* _6012);
static uint8_t julia_accept_number_53(void* _6071, void* _6072);
static uint8_t julia_accept_number_54(void* _6123, void* _6124);
static uint8_t julia_YY_OC_lex_digitYY_OC_YY_OC_0_55(void* _6180, uint32_t _6181);
uint32_t jsk_jl_id_char(uint32_t _6204);
uint32_t jsk_jl_id_start_char(uint32_t _6205);
uint32_t jsk_utf8proc_category(uint32_t _6206);
uint64_t jsyn_cbe_fshl_i64(uint64_t _6207, uint64_t _6208, uint64_t _6209) __ATTRIBUTELIST__((nothrow));
uint8_t jsk_utf8proc_grapheme_break_stateful(uint32_t _6210, uint32_t _6211, void* _6212);
void* jsk_jl_alloc_genericmemory_unchecked(void* _6213, uint64_t _6214, void* _6215) __ATTRIBUTELIST__((nothrow));
void* jsk_ijl_gc_small_alloc(void* _6216, uint32_t _6217, uint32_t _6218, uint64_t _6219) __ATTRIBUTELIST__((nothrow, alloc_size(2)));
__noreturn void jsk_ijl_bounds_error_int(void* _6220, uint64_t _6221);
void jsk_ijl_gc_queue_root(void* _6222);
__noreturn void jsk_ijl_throw(void* _6223);
__noreturn void jsk_ijl_undefined_var_error(void* _6224, void* _6225);
__noreturn void jsk_jl_argument_error(void* _6226);
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
  uint16_t _342;
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
  switch (_338) {
  default:
    goto _352;
  case ((uint16_t)60):
    _340__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _347;
  case ((uint16_t)69):
    _340__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _347;
  case ((uint16_t)56):
    _340__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _347;
  }

_352:
  _342 = *((uint16_t*)&_334);
  switch (_342) {
  default:
    goto _353;
  case ((uint16_t)3):
    _340__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _347;
  case ((uint16_t)53):
    _340__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _347;
  case ((uint16_t)534):
    _340__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _347;
  }

_353:
  _340__PHI_TEMPORARY = (((uint16_t)(llvm_add_u16(_342, -34))) < ((uint16_t)((uint16_t)9)));   /* for PHI node */
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


static __noreturn void julia_throw_code_point_err_12(void* _354, uint32_t _355) {
  jsk_throw();
  __builtin_unreachable();

}


static void julia__growend_internalNOT_OC__13(void* _356, void* _357, int64_t _358, int64_t _359) {
  __PREFIXALIGN__(16) struct l_array_4_uint64_t _360 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _361;
  void* _362;
  void* _363;
  void* _364;
  void* _365;
  void* _366;
  uint64_t _367;
  void* _368;
  void* _369;
  uint64_t _370;
  uint64_t _371;
  uint64_t _372;
  uint64_t _373;
  uint64_t _374;
  uint64_t _374__PHI_TEMPORARY;
  void* _375;
  void* _375__PHI_TEMPORARY;
  void* _376;
  void* _377;
  uint64_t _378;
  uint64_t _379;
  uint64_t _380;
  void* _381;
  void* _382;
  void* _383;
  void* _384;
  struct l_array_1_void_KC_ _385;
  void* _386;
  void* _387;
  uint64_t _388;
  uint64_t _389;
  void* _390;
  struct l_array_1_void_KC_ _391;
  void* _392;
  void* _393;
  uint64_t _394;
  void* _395;
  void* _396;
  uint64_t _397;
  void* _398;
  void* _399;
  void* _400;
  uint64_t _401;
  uint64_t _402;
  uint64_t _403;
  void* _404;
  void* _405;

  _361 = memset((&_360), 0, 32);
  *((uint64_t*)&_360) = 8;
  _362 = *(void**)_356;
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)8)]))) = _362;
  *(void**)_356 = (&_360);
  _363 = ((&((uint8_t*)_356)[((int64_t)16)]));
  _364 = *(void**)_357;
  _365 = ((&((uint8_t*)_357)[((int64_t)8)]));
  _366 = *(void**)_365;
  _367 = llvm_add_u64(_359, _358);
  _368 = ((&((uint8_t*)_366)[((int64_t)8)]));
  _369 = *(void**)_368;
  _370 = llvm_sub_u64((((uint64_t)(uintptr_t)_364)), (((uint64_t)(uintptr_t)_369)));
  _371 = llvm_lshr_u64(_370, 4);
  _372 = llvm_add_u64(_371, _367);
  _373 = *(uint64_t*)_366;
  if ((((int64_t)_373) < ((int64_t)(llvm_add_u64(_371, _359))))) {
    goto _406;
  } else {
    goto _407;
  }

_408:
  _374 = _374__PHI_TEMPORARY;
  _375 = _375__PHI_TEMPORARY;
  _376 = *(void**)(((&((uint8_t*)_375)[((int64_t)8)])));
  _377 = ((&((uint8_t*)_376)[((int64_t)_374)]));
  if ((_359 == UINT64_C(0))) {
    goto _409;
  } else {
    goto _410;
  }

_410:
  _378 = llvm_add_u64(_359, -1);
  _379 = *(uint64_t*)_375;
  _380 = _378 << 4;
  if ((llvm_select_bool((((uint64_t)(llvm_add_u64(_378, _379))) < ((uint64_t)(_379 << 1))), (((uint64_t)(llvm_sub_u64((((uint64_t)(uintptr_t)(((&((uint8_t*)_377)[((int64_t)_380)]))))), (((uint64_t)(uintptr_t)_376))))) < ((uint64_t)(_379 << 4))), 0))) {
    goto _411;
  } else {
    goto _412;
  }

_413:
  _381 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)336)])));
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)24)]))) = _366;
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)16)]))) = _375;
  julia_throw_inexacterror_10(_356, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)104)]))), _381, _401);
  __builtin_unreachable();

_414:
  _382 = memmove(_377, _364, _401);
  goto _409;

_409:
  _383 = *(void**)_357;
  _384 = *(void**)_365;
  if (((_364 == _383) & (_366 == _384))) {
    goto _415;
  } else {
    goto _416;
  }

_416:
  _385 = julia_ConcurrencyViolationError_18(_356, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)296)]))));
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)16)]))) = ((_385.array[0]));
  _386 = *(void**)(((&((uint8_t*)_356)[((int64_t)16)])));
  _387 = jsk_ijl_gc_small_alloc(_386, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])))));
  *(void**)(((&((uint8_t*)_387)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])));
  *(void**)_387 = ((_385.array[0]));
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_387);
  __builtin_unreachable();

_415:
  *(void**)_357 = _377;
  *(void**)(((&((uint8_t*)_357)[((int64_t)8)]))) = _375;
  _388 = *(volatile uint64_t*)(((&((uint8_t*)_357)[((int64_t)-8)])));
  if (((_388 & 3) == UINT64_C(3))) {
    goto _417;
  } else {
    goto _418;
  }

_417:
  _389 = *(volatile uint64_t*)(((&((uint8_t*)_375)[((int64_t)-8)])));
  if ((((_388 & 12) == UINT64_C(4)) | ((_389 & 1) == UINT64_C(0)))) {
    goto _419;
  } else {
    goto _418;
  }

_419:
  jsk_ijl_gc_queue_root(_357);
  goto _418;

_418:
  _390 = *(void**)(((&((uint8_t*)(&_360))[((int64_t)8)])));
  *(void**)_356 = _390;
  return;
_406:
  _391 = julia_ConcurrencyViolationError_18(_356, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)360)]))));
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)16)]))) = ((_391.array[0]));
  _392 = *(void**)(((&((uint8_t*)_356)[((int64_t)16)])));
  _393 = jsk_ijl_gc_small_alloc(_392, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])))));
  *(void**)(((&((uint8_t*)_393)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])));
  *(void**)_393 = ((_391.array[0]));
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_393);
  __builtin_unreachable();

_407:
  if ((((int64_t)(llvm_sdiv_u64((llvm_mul_u64(_367, 5)), 4))) < ((int64_t)_371))) {
    goto _420;
  } else {
    goto _421;
  }

_420:
  _394 = (llvm_sdiv_u64(_367, 8)) << 4;
  _374__PHI_TEMPORARY = _394;   /* for PHI node */
  _375__PHI_TEMPORARY = _366;   /* for PHI node */
  goto _408;

_412:
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)16)]))) = _375;
  _395 = *(void**)(((&((uint8_t*)_356)[((int64_t)16)])));
  _396 = jsk_ijl_gc_small_alloc(_395, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])))));
  *(void**)(((&((uint8_t*)_396)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])));
  *(void**)_396 = _377;
  *(void**)(((&((uint8_t*)_396)[((int64_t)8)]))) = _375;
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_bounds_error_int(_396, _359);
  __builtin_unreachable();

_411:
  _397 = *(uint64_t*)_366;
  _398 = *(void**)_368;
  if ((llvm_select_bool((((uint64_t)(llvm_add_u64(_378, _397))) < ((uint64_t)(_397 << 1))), (((uint64_t)(llvm_sub_u64((((uint64_t)(uintptr_t)(((&((uint8_t*)_364)[((int64_t)_380)]))))), (((uint64_t)(uintptr_t)_398))))) < ((uint64_t)(_397 << 4))), 0))) {
    goto _422;
  } else {
    goto _423;
  }

_423:
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)24)]))) = _366;
  _399 = *(void**)(((&((uint8_t*)_356)[((int64_t)16)])));
  _400 = jsk_ijl_gc_small_alloc(_399, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])))));
  *(void**)(((&((uint8_t*)_400)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])));
  *(void**)_400 = _364;
  *(void**)(((&((uint8_t*)_400)[((int64_t)8)]))) = _366;
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)24)]))) = ((void*)/*NULL*/0);
  jsk_ijl_bounds_error_int(_400, _359);
  __builtin_unreachable();

_422:
  _401 = _359 << 4;
  if ((((int64_t)_401) > ((int64_t)UINT64_C(18446744073709551615)))) {
    goto _414;
  } else {
    goto _413;
  }

_421:
  _402 = llvm_OC_ctlz_OC_i64(_373, 0);
  _403 = llvm_OC_smax_OC_i64(_372, (llvm_add_u64(_373, (llvm_add_u64((3 << (llvm_lshr_u64((llvm_mul_u64((llvm_sub_u64(64, _402)), 7)), 3))), (llvm_sdiv_u64(_373, 8)))))));
  if ((_403 == UINT64_C(0))) {
    _374__PHI_TEMPORARY = _370;   /* for PHI node */
    _375__PHI_TEMPORARY = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)136)])));   /* for PHI node */
    goto _408;
  } else {
    goto _424;
  }

_424:
  if ((((uint64_t)_403) < ((uint64_t)UINT64_C(576460752303423488)))) {
    goto _425;
  } else {
    goto _426;
  }

_426:
  jsk_jl_argument_error((&_j_str_invalidSP_OC_GenericMemorySP_OC_sizDOT_OC_DOT_OC_DOT_OC_YY_OC_58));
  __builtin_unreachable();

_425:
  _404 = *(void**)_363;
  *(void**)(((&((uint8_t*)(&_360))[((int64_t)24)]))) = _366;
  _405 = jsk_jl_alloc_genericmemory_unchecked(_404, (_403 << 4), (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)424)]))));
  *(uint64_t*)_405 = _403;
  _374__PHI_TEMPORARY = _370;   /* for PHI node */
  _375__PHI_TEMPORARY = _405;   /* for PHI node */
  goto _408;

}


static uint32_t julia_escape_len_14(void* _427, void* _428, int64_t _429, uint8_t _430, uint8_t _431) {
  uint8_t _432;
  uint8_t _433;
  uint32_t _434;
  uint32_t _435;
  uint32_t _435__PHI_TEMPORARY;
  uint32_t _436;
  uint32_t _437;
  uint32_t _437__PHI_TEMPORARY;
  uint64_t _438;
  uint64_t _438__PHI_TEMPORARY;
  uint64_t _439;
  uint64_t _439__PHI_TEMPORARY;
  uint64_t _440;
  uint64_t _441;
  uint8_t _442;
  uint32_t _443;
  uint8_t _444;
  uint64_t _445;
  uint64_t _445__PHI_TEMPORARY;
  uint64_t _446;
  uint8_t _447;
  uint64_t _448;
  uint32_t _449;
  uint32_t _449__PHI_TEMPORARY;
  uint64_t _450;
  uint64_t _450__PHI_TEMPORARY;
  uint64_t _451;
  uint64_t _451__PHI_TEMPORARY;
  uint64_t _452;
  uint64_t _453;
  uint8_t _454;
  uint8_t _455;
  uint8_t _456;
  uint8_t _457;
  uint8_t _458;
  uint8_t _458__PHI_TEMPORARY;
  uint32_t _459;
  bool _460;
  bool _461;
  bool _461__PHI_TEMPORARY;
  uint64_t _462;
  uint64_t _462__PHI_TEMPORARY;
  uint64_t _463;
  uint32_t _464;
  void* _465;

  if ((((int64_t)_429) < ((int64_t)UINT64_C(1)))) {
    _435__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _466;
  } else {
    goto _467;
  }

_467:
  _432 = *(uint8_t*)_428;
  if ((_432 == ((uint8_t)92))) {
    goto _468;
  } else {
    _435__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _466;
  }

_468:
  if ((_429 == UINT64_C(1))) {
    _435__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _466;
  } else {
    goto _469;
  }

_469:
  _433 = *(uint8_t*)(((&((uint8_t*)_428)[((int64_t)1)])));
  if ((((bool)_430&1u))) {
    goto _470;
  } else {
    goto _471;
  }

_470:
  _434 = llvm_select_u32((llvm_select_bool((_433 != ((uint8_t)92)), (_433 != _431), 0)), 0, 2);
  _435__PHI_TEMPORARY = _434;   /* for PHI node */
  goto _466;

_466:
  _435 = _435__PHI_TEMPORARY;
  return _435;
_471:
  switch (_433) {
  default:
    goto _472;
  case ((uint8_t)120):
    goto _473;
  case ((uint8_t)117):
    goto _473;
  case ((uint8_t)85):
    goto _473;
  }

_472:
  if (((llvm_and_u8(_433, -8)) == ((uint8_t)48))) {
    goto _474;
  } else {
    goto _475;
  }

_474:
  _436 = ((uint32_t)(uint8_t)(llvm_add_u8(_433, -48)));
  _437__PHI_TEMPORARY = _436;   /* for PHI node */
  _438__PHI_TEMPORARY = 1;   /* for PHI node */
  _439__PHI_TEMPORARY = 2;   /* for PHI node */
  goto _476;

  do {     /* Syntactic loop '' to make GCC happy */
_476:
  _437 = _437__PHI_TEMPORARY;
  _438 = _438__PHI_TEMPORARY;
  _439 = _439__PHI_TEMPORARY;
  _440 = llvm_add_u64(_438, 1);
  if ((((int64_t)_440) > ((int64_t)UINT64_C(3)))) {
    goto _477;
  } else {
    goto _478;
  }

_478:
  _441 = llvm_add_u64(_439, 1);
  if ((((int64_t)_441) > ((int64_t)_429))) {
    goto _477;
  } else {
    goto _479;
  }

_479:
  _442 = *(uint8_t*)(((&((uint8_t*)_428)[((int64_t)_439)])));
  if (((llvm_and_u8(_442, -8)) == ((uint8_t)48))) {
    goto _480;
  } else {
    goto _477;
  }

_480:
  _443 = (_437 << 3) | (((uint32_t)(uint8_t)(llvm_add_u8(_442, -48))));
  _437__PHI_TEMPORARY = _443;   /* for PHI node */
  _438__PHI_TEMPORARY = _440;   /* for PHI node */
  _439__PHI_TEMPORARY = _441;   /* for PHI node */
  goto _476;

  } while (1); /* end of syntactic loop '' */
_477:
  _461__PHI_TEMPORARY = (((uint32_t)_437) < ((uint32_t)256u));   /* for PHI node */
  _462__PHI_TEMPORARY = _439;   /* for PHI node */
  goto _481;

_475:
  if (((_433 != ((uint8_t)13)) | (_429 == UINT64_C(2)))) {
    goto _482;
  } else {
    goto _483;
  }

_483:
  _444 = *(uint8_t*)(((&((uint8_t*)_428)[((int64_t)2)])));
  if ((_444 == ((uint8_t)10))) {
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 3;   /* for PHI node */
    goto _481;
  } else {
    goto _482;
  }

_482:
  switch (_433) {
  default:
    _445__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _484;
  case ((uint8_t)118):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)116):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)114):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)110):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)102):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)101):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)98):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)97):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)92):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)39):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)36):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)34):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)96):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  case ((uint8_t)10):
    _461__PHI_TEMPORARY = 1;   /* for PHI node */
    _462__PHI_TEMPORARY = 2;   /* for PHI node */
    goto _481;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_484:
  _445 = _445__PHI_TEMPORARY;
  _446 = llvm_add_u64(_445, 1);
  if ((((int64_t)_446) > ((int64_t)_429))) {
    _461__PHI_TEMPORARY = 0;   /* for PHI node */
    _462__PHI_TEMPORARY = _445;   /* for PHI node */
    goto _481;
  } else {
    goto _485;
  }

_485:
  _447 = *(uint8_t*)(((&((uint8_t*)_428)[((int64_t)_445)])));
  if ((((int8_t)_447) > ((int8_t)((uint8_t)-65)))) {
    _461__PHI_TEMPORARY = 0;   /* for PHI node */
    _462__PHI_TEMPORARY = _445;   /* for PHI node */
    goto _481;
  } else {
    _445__PHI_TEMPORARY = _446;   /* for PHI node */
    goto _484;
  }

  } while (1); /* end of syntactic loop '' */
_473:
  _448 = llvm_select_u64((_433 == ((uint8_t)120)), 2, (llvm_select_u64((_433 == ((uint8_t)117)), 4, 8)));
  _449__PHI_TEMPORARY = 0;   /* for PHI node */
  _450__PHI_TEMPORARY = 0;   /* for PHI node */
  _451__PHI_TEMPORARY = 2;   /* for PHI node */
  goto _486;

  do {     /* Syntactic loop '' to make GCC happy */
_486:
  _449 = _449__PHI_TEMPORARY;
  _450 = _450__PHI_TEMPORARY;
  _451 = _451__PHI_TEMPORARY;
  _452 = llvm_add_u64(_450, 1);
  if ((((int64_t)_452) > ((int64_t)_448))) {
    goto _487;
  } else {
    goto _488;
  }

_488:
  _453 = llvm_add_u64(_451, 1);
  if ((((int64_t)_453) > ((int64_t)_429))) {
    goto _487;
  } else {
    goto _489;
  }

_489:
  _454 = *(uint8_t*)(((&((uint8_t*)_428)[((int64_t)_451)])));
  if ((((uint8_t)(llvm_add_u8(_454, -58))) < ((uint8_t)((uint8_t)-10)))) {
    goto _490;
  } else {
    goto _491;
  }

_491:
  _455 = llvm_add_u8(_454, -48);
  _458__PHI_TEMPORARY = _455;   /* for PHI node */
  goto _492;

_490:
  if ((((uint8_t)(llvm_add_u8(_454, 153u))) < ((uint8_t)((uint8_t)-6)))) {
    goto _493;
  } else {
    goto _494;
  }

_494:
  _456 = llvm_add_u8(_454, 169u);
  _458__PHI_TEMPORARY = _456;   /* for PHI node */
  goto _492;

_493:
  _457 = llvm_select_u8((((uint8_t)(llvm_add_u8(_454, 185u))) < ((uint8_t)((uint8_t)-6))), -1, (llvm_add_u8(_454, -55)));
  _458__PHI_TEMPORARY = _457;   /* for PHI node */
  goto _492;

_492:
  _458 = _458__PHI_TEMPORARY;
  if ((_458 == ((uint8_t)-1))) {
    goto _487;
  } else {
    goto _495;
  }

_495:
  _459 = llvm_add_u32((_449 << 4), (((uint32_t)(uint8_t)_458)));
  _449__PHI_TEMPORARY = _459;   /* for PHI node */
  _450__PHI_TEMPORARY = _452;   /* for PHI node */
  _451__PHI_TEMPORARY = _453;   /* for PHI node */
  goto _486;

  } while (1); /* end of syntactic loop '' */
_487:
  _460 = llvm_select_bool((((int64_t)_452) > ((int64_t)UINT64_C(1))), (((uint32_t)_449) < ((uint32_t)1114112u)), 0);
  _461__PHI_TEMPORARY = _460;   /* for PHI node */
  _462__PHI_TEMPORARY = _451;   /* for PHI node */
  goto _481;

_481:
  _461 = _461__PHI_TEMPORARY;
  _462 = _462__PHI_TEMPORARY;
  _463 = llvm_select_u64(_461, _462, (llvm_neg_u64(_462)));
  _464 = ((uint32_t)_463);
  if ((((uint64_t)(llvm_add_u64(_463, INT64_C(-2147483648)))) < ((uint64_t)UINT64_C(18446744069414584320)))) {
    goto _496;
  } else {
    _435__PHI_TEMPORARY = _464;   /* for PHI node */
    goto _466;
  }

_496:
  _465 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)256)])));
  julia_throw_inexacterror_10(_427, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _465, _463);
  __builtin_unreachable();

}


static uint32_t julia_var_identifier_15(void* _497, void* _498, int64_t _499) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _500 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _501;
  void* _502;
  struct l_array_4_uint64_t _503;    /* Address-exposed local */
  struct l_array_4_uint64_t _504;    /* Address-exposed local */
  struct l_array_4_uint64_t _505;    /* Address-exposed local */
  struct l_array_4_uint64_t _506;    /* Address-exposed local */
  void* _507;
  void* _508;
  void* _509;
  uint16_t _510;
  uint64_t _511;
  uint16_t _512;
  uint64_t _513;
  uint16_t _514;
  void* _515;
  void* _515__PHI_TEMPORARY;
  uint16_t _516;
  uint64_t _517;
  uint64_t _518;
  uint32_t _519;
  void* _520;
  uint32_t _521;
  uint32_t _521__PHI_TEMPORARY;
  void* _522;

  _501 = memset((&_500), 0, 24);
  *((uint64_t*)&_500) = 4;
  _502 = *(void**)_497;
  *(void**)(((&((uint8_t*)(&_500))[((int64_t)8)]))) = _502;
  *(void**)_497 = (&_500);
  _507 = *(void**)(((&((uint8_t*)_497)[((int64_t)16)])));
  _508 = jsk_ijl_gc_small_alloc(_507, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])))));
  *(void**)(((&((uint8_t*)_508)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])));
  *(void**)_508 = _498;
  *(uint64_t*)(((&((uint8_t*)_508)[((int64_t)8)]))) = _499;
  *(uint64_t*)(((&((uint8_t*)_508)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_500))[((int64_t)16)]))) = _508;
  _509 = julia_Lexer_7(_497, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _508);
  *(void**)(((&((uint8_t*)(&_500))[((int64_t)16)]))) = _509;
  julia_next_token_8((&_503), _497, _509, 1);
  _510 = *((uint16_t*)&_503);
  _511 = *(uint64_t*)(((&((uint8_t*)(&_503))[((int64_t)16)])));
  if ((llvm_select_bool((_510 != ((uint16_t)42)), 1, (_511 != UINT64_C(2))))) {
    _521__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _523;
  } else {
    goto _524;
  }

_524:
  julia_next_token_8((&_504), _497, _509, 1);
  _512 = *((uint16_t*)&_504);
  _513 = *(uint64_t*)(((&((uint8_t*)(&_504))[((int64_t)8)])));
  if ((llvm_select_bool((_512 != ((uint16_t)62)), 1, (_513 != UINT64_C(3))))) {
    _521__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _523;
  } else {
    goto _525;
  }

_525:
  julia_next_token_8((&_505), _497, _509, 1);
  _514 = *((uint16_t*)&_505);
  if ((_514 == ((uint16_t)50))) {
    goto _526;
  } else {
    _515__PHI_TEMPORARY = (&_505);   /* for PHI node */
    goto _527;
  }

_526:
  julia_next_token_8((&_506), _497, _509, 1);
  _515__PHI_TEMPORARY = (&_506);   /* for PHI node */
  goto _527;

_527:
  _515 = _515__PHI_TEMPORARY;
  _516 = *(uint16_t*)_515;
  if ((_516 == ((uint16_t)62))) {
    goto _528;
  } else {
    _521__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _523;
  }

_528:
  _517 = *(uint64_t*)(((&((uint8_t*)_515)[((int64_t)16)])));
  _518 = llvm_add_u64(_517, 1);
  _519 = ((uint32_t)_518);
  if ((((uint64_t)(llvm_add_u64(_517, INT64_C(-2147483647)))) < ((uint64_t)UINT64_C(18446744069414584320)))) {
    goto _529;
  } else {
    _521__PHI_TEMPORARY = _519;   /* for PHI node */
    goto _523;
  }

_529:
  _520 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)256)])));
  *(void**)(((&((uint8_t*)(&_500))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  julia_throw_inexacterror_10(_497, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _520, _518);
  __builtin_unreachable();

_523:
  _521 = _521__PHI_TEMPORARY;
  _522 = *(void**)(((&((uint8_t*)(&_500))[((int64_t)8)])));
  *(void**)_497 = _522;
  return _521;
}


static void julia_lex_string_chunk_16(void* _530, void* _531, void* _532) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _533 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _534;
  void* _535;
  struct l_array_4_uint64_t _536;    /* Address-exposed local */
  struct l_array_1_uint64_t _537;    /* Address-exposed local */
  struct l_array_4_uint64_t _538;    /* Address-exposed local */
  struct l_array_1_uint64_t _539;    /* Address-exposed local */
  struct l_array_4_uint64_t _540;    /* Address-exposed local */
  struct l_array_4_uint64_t _541;    /* Address-exposed local */
  struct l_array_1_uint64_t _542;    /* Address-exposed local */
  struct l_array_4_uint64_t _543;    /* Address-exposed local */
  struct l_array_4_uint64_t _544;    /* Address-exposed local */
  struct l_array_4_uint64_t _545;    /* Address-exposed local */
  struct l_array_4_uint64_t _546;    /* Address-exposed local */
  struct l_array_4_uint64_t _547;    /* Address-exposed local */
  struct l_array_4_uint64_t _548;    /* Address-exposed local */
  struct l_array_4_uint64_t _549;    /* Address-exposed local */
  struct l_array_4_uint64_t _550;    /* Address-exposed local */
  struct l_array_4_uint64_t _551;    /* Address-exposed local */
  struct l_array_1_uint64_t _552;    /* Address-exposed local */
  void* _553;
  void* _554;
  uint64_t _555;
  void* _556;
  void* _557;
  uint8_t _558;
  uint8_t _559;
  uint32_t _560;
  uint64_t _561;
  void* _562;
  void* _563;
  uint64_t _564;
  void* _565;
  uint64_t _566;
  void* _567;
  uint8_t _568;
  uint8_t _569;
  uint8_t _570;
  uint32_t _571;
  uint64_t _572;
  uint64_t _572__PHI_TEMPORARY;
  uint32_t _573;
  uint32_t _573__PHI_TEMPORARY;
  uint64_t _574;
  uint64_t _575;
  void* _576;
  uint8_t _577;
  uint32_t _578;
  uint64_t _579;
  uint64_t _580;
  uint32_t _581;
  uint64_t _582;
  uint32_t _583;
  uint32_t _583__PHI_TEMPORARY;
  void* _584;
  uint64_t _585;
  void* _586;
  uint64_t _587;
  uint64_t _588;
  uint64_t _589;
  void* _590;
  uint64_t _591;
  void* _592;
  uint64_t _593;
  void* _594;
  uint64_t _595;
  void* _596;
  uint64_t _597;
  uint64_t _598;
  uint32_t _599;
  void* _600;
  uint64_t _601;
  void* _602;
  void* _603;
  void* _604;
  void* _604__PHI_TEMPORARY;
  void* _605;
  void* _606;
  void* _607;
  uint64_t _608;
  void* _609;
  void* _610;
  void* _611;
  uint64_t _612;
  void* _613;
  uint64_t _614;
  uint32_t _615;
  void* _616;
  uint16_t _617;
  uint64_t _618;
  uint64_t _619;
  uint32_t _620;
  void* _621;
  void* _622;
  uint64_t _623;
  void* _624;
  uint64_t _625;
  void* _626;
  uint8_t _627;
  uint8_t _628;
  uint8_t _629;
  uint32_t _630;
  uint64_t _631;
  uint64_t _631__PHI_TEMPORARY;
  uint32_t _632;
  uint32_t _632__PHI_TEMPORARY;
  uint64_t _633;
  uint64_t _634;
  void* _635;
  uint8_t _636;
  uint32_t _637;
  uint64_t _638;
  uint64_t _639;
  uint32_t _640;
  uint64_t _641;
  uint32_t _642;
  uint32_t _642__PHI_TEMPORARY;
  uint64_t _643;
  uint64_t _644;
  uint64_t _645;
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
  uint64_t _656;
  void* _657;
  void* _658;
  uint32_t _659;
  uint64_t _660;
  uint32_t _661;
  uint32_t _662;
  uint64_t _663;
  bool _664;
  bool _665;
  uint32_t _666;
  uint32_t _667;
  uint32_t _668;
  uint32_t _669;
  uint32_t _669__PHI_TEMPORARY;
  uint32_t _670;
  void* _671;
  void* _672;
  uint64_t _673;
  void* _674;
  uint64_t _675;
  void* _676;
  uint8_t _677;
  uint8_t _678;
  uint8_t _679;
  uint32_t _680;
  uint64_t _681;
  uint64_t _681__PHI_TEMPORARY;
  uint32_t _682;
  uint32_t _682__PHI_TEMPORARY;
  uint64_t _683;
  uint64_t _684;
  void* _685;
  uint8_t _686;
  uint32_t _687;
  uint64_t _688;
  uint64_t _689;
  uint32_t _690;
  uint64_t _691;
  uint32_t _692;
  uint32_t _692__PHI_TEMPORARY;
  uint64_t _693;
  uint64_t _694;
  uint64_t _695;
  uint64_t _696;
  void* _697;
  uint64_t _698;
  void* _699;
  uint64_t _700;
  void* _701;
  uint64_t _702;
  void* _703;
  uint64_t _704;
  uint64_t _705;
  uint8_t _706;
  bool _707;
  uint8_t _708;
  bool _709;
  bool _710;
  bool _710__PHI_TEMPORARY;
  void* _711;
  void* _712;
  uint64_t _713;
  void* _714;
  uint64_t _715;
  void* _716;
  uint8_t _717;
  uint8_t _718;
  uint8_t _719;
  uint32_t _720;
  uint64_t _721;
  uint64_t _721__PHI_TEMPORARY;
  uint32_t _722;
  uint32_t _722__PHI_TEMPORARY;
  uint64_t _723;
  uint64_t _724;
  void* _725;
  uint8_t _726;
  uint32_t _727;
  uint64_t _728;
  uint64_t _729;
  uint32_t _730;
  uint64_t _731;
  uint32_t _732;
  uint32_t _732__PHI_TEMPORARY;
  uint64_t _733;
  uint64_t _734;
  uint64_t _735;
  uint64_t _736;
  void* _737;
  uint64_t _738;
  void* _739;
  uint64_t _740;
  void* _741;
  uint64_t _742;
  void* _743;
  uint64_t _744;
  uint32_t _745;
  uint32_t _745__PHI_TEMPORARY;
  bool _746;
  void* _747;
  void* _748;
  uint64_t _749;
  void* _750;
  uint64_t _751;
  void* _752;
  uint8_t _753;
  uint8_t _754;
  uint8_t _755;
  uint32_t _756;
  uint64_t _757;
  uint64_t _757__PHI_TEMPORARY;
  uint32_t _758;
  uint32_t _758__PHI_TEMPORARY;
  uint64_t _759;
  uint64_t _760;
  void* _761;
  uint8_t _762;
  uint32_t _763;
  uint64_t _764;
  uint64_t _765;
  uint32_t _766;
  uint64_t _767;
  uint32_t _768;
  uint32_t _768__PHI_TEMPORARY;
  uint64_t _769;
  uint64_t _770;
  uint64_t _771;
  uint64_t _772;
  void* _773;
  uint64_t _774;
  void* _775;
  uint64_t _776;
  void* _777;
  uint64_t _778;
  void* _779;
  uint64_t _780;
  uint64_t _781;
  uint32_t _782;
  void* _783;
  void* _784;
  uint64_t _785;
  void* _786;
  uint64_t _787;
  void* _788;
  uint8_t _789;
  uint8_t _790;
  uint8_t _791;
  uint32_t _792;
  uint64_t _793;
  uint64_t _793__PHI_TEMPORARY;
  uint32_t _794;
  uint32_t _794__PHI_TEMPORARY;
  uint64_t _795;
  uint64_t _796;
  void* _797;
  uint8_t _798;
  uint32_t _799;
  uint64_t _800;
  uint64_t _801;
  uint32_t _802;
  uint64_t _803;
  uint32_t _804;
  uint32_t _804__PHI_TEMPORARY;
  uint64_t _805;
  uint64_t _806;
  uint64_t _807;
  uint64_t _808;
  void* _809;
  void* _810;
  uint64_t _811;
  void* _812;
  uint64_t _813;
  void* _814;
  uint64_t _815;
  void* _816;
  uint64_t _817;
  void* _818;
  void* _819;
  uint64_t _820;
  void* _821;
  uint64_t _822;
  void* _823;
  uint8_t _824;
  uint8_t _825;
  uint8_t _826;
  uint32_t _827;
  uint64_t _828;
  uint64_t _828__PHI_TEMPORARY;
  uint32_t _829;
  uint32_t _829__PHI_TEMPORARY;
  uint64_t _830;
  uint64_t _831;
  void* _832;
  uint8_t _833;
  uint32_t _834;
  uint64_t _835;
  uint64_t _836;
  uint32_t _837;
  uint64_t _838;
  uint32_t _839;
  uint32_t _839__PHI_TEMPORARY;
  uint64_t _840;
  uint64_t _841;
  uint64_t _842;
  uint64_t _843;
  uint64_t _844;
  uint64_t _845;
  uint64_t _846;
  void* _847;
  uint64_t _848;
  uint64_t _849;
  void* _850;
  void* _851;
  uint64_t _852;
  void* _853;
  uint64_t _854;
  void* _855;
  uint8_t _856;
  uint8_t _857;
  uint8_t _858;
  uint32_t _859;
  uint64_t _860;
  uint64_t _860__PHI_TEMPORARY;
  uint32_t _861;
  uint32_t _861__PHI_TEMPORARY;
  uint64_t _862;
  uint64_t _863;
  void* _864;
  uint8_t _865;
  uint32_t _866;
  uint64_t _867;
  uint64_t _868;
  uint32_t _869;
  uint64_t _870;
  uint32_t _871;
  uint32_t _871__PHI_TEMPORARY;
  uint64_t _872;
  uint64_t _873;
  uint64_t _874;
  uint64_t _875;
  uint64_t _876;
  uint64_t _877;
  uint64_t _878;
  void* _879;
  uint64_t _880;
  uint64_t _881;
  void* _882;
  void* _883;
  uint64_t _884;
  void* _885;
  uint64_t _886;
  void* _887;
  uint8_t _888;
  uint8_t _889;
  uint8_t _890;
  uint32_t _891;
  uint64_t _892;
  uint64_t _892__PHI_TEMPORARY;
  uint32_t _893;
  uint32_t _893__PHI_TEMPORARY;
  uint64_t _894;
  uint64_t _895;
  void* _896;
  uint8_t _897;
  uint32_t _898;
  uint64_t _899;
  uint64_t _900;
  uint32_t _901;
  uint64_t _902;
  bool _903;
  uint64_t _904;
  uint64_t _905;
  uint64_t _906;
  uint64_t _906__PHI_TEMPORARY;
  uint16_t _907;
  uint64_t _908;
  void* _909;
  void* _910;
  uint64_t _911;
  void* _912;
  uint64_t _913;
  void* _914;
  uint8_t _915;
  uint8_t _916;
  uint8_t _917;
  uint32_t _918;
  uint64_t _919;
  uint64_t _919__PHI_TEMPORARY;
  uint32_t _920;
  uint32_t _920__PHI_TEMPORARY;
  uint64_t _921;
  uint64_t _922;
  void* _923;
  uint8_t _924;
  uint32_t _925;
  uint64_t _926;
  uint64_t _927;
  uint32_t _928;
  uint64_t _929;
  uint32_t _930;
  uint32_t _930__PHI_TEMPORARY;
  uint64_t _931;
  uint64_t _932;
  uint64_t _933;
  uint64_t _934;
  void* _935;
  uint64_t _936;
  void* _937;
  uint64_t _938;
  void* _939;
  uint64_t _940;
  void* _941;
  uint64_t _942;
  void* _943;
  void* _944;
  uint64_t _945;
  uint64_t _946;
  uint64_t _947;
  uint64_t _947__PHI_TEMPORARY;
  void* _948;
  void* _949;
  uint64_t _950;
  void* _951;
  uint64_t _952;
  void* _953;
  uint8_t _954;
  uint8_t _955;
  uint8_t _956;
  uint32_t _957;
  uint64_t _958;
  uint64_t _958__PHI_TEMPORARY;
  uint32_t _959;
  uint32_t _959__PHI_TEMPORARY;
  uint64_t _960;
  uint64_t _961;
  void* _962;
  uint8_t _963;
  uint32_t _964;
  uint64_t _965;
  uint64_t _966;
  uint32_t _967;
  uint64_t _968;
  uint32_t _969;
  uint32_t _969__PHI_TEMPORARY;
  uint64_t _970;
  uint64_t _971;
  uint64_t _972;
  uint64_t _973;
  void* _974;
  void* _975;
  uint64_t _976;
  void* _977;
  uint64_t _978;
  void* _979;
  uint64_t _980;
  void* _981;
  uint64_t _982;
  void* _983;
  void* _984;
  uint64_t _985;
  void* _986;
  uint64_t _987;
  void* _988;
  uint8_t _989;
  uint8_t _990;
  uint8_t _991;
  uint32_t _992;
  uint64_t _993;
  uint64_t _993__PHI_TEMPORARY;
  uint32_t _994;
  uint32_t _994__PHI_TEMPORARY;
  uint64_t _995;
  uint64_t _996;
  void* _997;
  uint8_t _998;
  uint32_t _999;
  uint64_t _1000;
  uint64_t _1001;
  uint32_t _1002;
  uint64_t _1003;
  uint32_t _1004;
  uint32_t _1004__PHI_TEMPORARY;
  uint64_t _1005;
  uint64_t _1006;
  uint64_t _1007;
  uint64_t _1008;
  uint64_t _1009;
  uint64_t _1010;
  uint64_t _1011;
  void* _1012;
  uint64_t _1013;
  void* _1014;
  void* _1015;
  uint64_t _1016;
  void* _1017;
  uint64_t _1018;
  void* _1019;
  uint8_t _1020;
  uint8_t _1021;
  uint8_t _1022;
  uint32_t _1023;
  uint64_t _1024;
  uint64_t _1024__PHI_TEMPORARY;
  uint32_t _1025;
  uint32_t _1025__PHI_TEMPORARY;
  uint64_t _1026;
  uint64_t _1027;
  void* _1028;
  uint8_t _1029;
  uint32_t _1030;
  uint64_t _1031;
  uint64_t _1032;
  uint32_t _1033;
  uint64_t _1034;
  uint32_t _1035;
  uint32_t _1035__PHI_TEMPORARY;
  uint64_t _1036;
  uint64_t _1037;
  uint64_t _1038;
  uint64_t _1039;
  uint64_t _1040;
  uint64_t _1041;
  uint64_t _1042;
  void* _1043;
  uint64_t _1044;
  bool _1045;
  bool _1045__PHI_TEMPORARY;
  uint64_t _1046;
  uint64_t _1046__PHI_TEMPORARY;
  uint64_t _1047;
  uint64_t _1047__PHI_TEMPORARY;
  uint64_t _1048;
  uint64_t _1049;
  uint32_t _1050;
  bool _1051;
  uint64_t _1052;
  uint32_t _1053;
  uint32_t _1054;
  uint32_t _1054__PHI_TEMPORARY;
  void* _1055;
  void* _1056;
  uint64_t _1057;
  void* _1058;
  uint64_t _1059;
  void* _1060;
  uint8_t _1061;
  uint8_t _1062;
  uint8_t _1063;
  uint32_t _1064;
  uint64_t _1065;
  uint64_t _1065__PHI_TEMPORARY;
  uint32_t _1066;
  uint32_t _1066__PHI_TEMPORARY;
  uint64_t _1067;
  uint64_t _1068;
  void* _1069;
  uint8_t _1070;
  uint32_t _1071;
  uint64_t _1072;
  uint64_t _1073;
  uint32_t _1074;
  uint64_t _1075;
  uint32_t _1076;
  uint32_t _1076__PHI_TEMPORARY;
  uint64_t _1077;
  uint64_t _1078;
  uint64_t _1079;
  uint64_t _1080;
  void* _1081;
  void* _1082;
  uint64_t _1083;
  void* _1084;
  uint64_t _1085;
  void* _1086;
  uint64_t _1087;
  void* _1088;
  uint64_t _1089;
  uint64_t _1090;
  uint64_t _1091;
  uint64_t _1092;
  void* _1093;
  void* _1094;
  uint64_t _1095;
  void* _1096;
  uint64_t _1097;
  void* _1098;
  uint8_t _1099;
  uint8_t _1100;
  uint8_t _1101;
  uint32_t _1102;
  uint64_t _1103;
  uint64_t _1103__PHI_TEMPORARY;
  uint32_t _1104;
  uint32_t _1104__PHI_TEMPORARY;
  uint64_t _1105;
  uint64_t _1106;
  void* _1107;
  uint8_t _1108;
  uint32_t _1109;
  uint64_t _1110;
  uint64_t _1111;
  uint32_t _1112;
  uint64_t _1113;
  uint32_t _1114;
  uint32_t _1114__PHI_TEMPORARY;
  uint64_t _1115;
  uint64_t _1116;
  uint64_t _1117;
  uint64_t _1118;
  uint64_t _1119;
  uint64_t _1120;
  uint64_t _1121;
  void* _1122;
  uint64_t _1123;
  void* _1124;
  void* _1125;
  uint64_t _1126;
  void* _1127;
  uint64_t _1128;
  void* _1129;
  uint8_t _1130;
  uint8_t _1131;
  uint8_t _1132;
  uint32_t _1133;
  uint64_t _1134;
  uint64_t _1134__PHI_TEMPORARY;
  uint32_t _1135;
  uint32_t _1135__PHI_TEMPORARY;
  uint64_t _1136;
  uint64_t _1137;
  void* _1138;
  uint8_t _1139;
  uint32_t _1140;
  uint64_t _1141;
  uint64_t _1142;
  uint32_t _1143;
  uint64_t _1144;
  uint32_t _1145;
  uint32_t _1145__PHI_TEMPORARY;
  uint64_t _1146;
  uint64_t _1147;
  uint64_t _1148;
  uint64_t _1149;
  void* _1150;
  void* _1151;
  uint64_t _1152;
  void* _1153;
  uint64_t _1154;
  void* _1155;
  uint64_t _1156;
  void* _1157;
  uint64_t _1158;
  uint64_t _1159;
  uint32_t _1160;
  uint64_t _1161;
  uint64_t _1161__PHI_TEMPORARY;
  uint64_t _1162;
  uint64_t _1163;
  void* _1164;
  void* _1165;
  uint64_t _1166;
  void* _1167;
  uint64_t _1168;
  void* _1169;
  uint8_t _1170;
  uint8_t _1171;
  uint8_t _1172;
  uint32_t _1173;
  uint64_t _1174;
  uint64_t _1174__PHI_TEMPORARY;
  uint32_t _1175;
  uint32_t _1175__PHI_TEMPORARY;
  uint64_t _1176;
  uint64_t _1177;
  void* _1178;
  uint8_t _1179;
  uint32_t _1180;
  uint64_t _1181;
  uint64_t _1182;
  uint32_t _1183;
  uint64_t _1184;
  uint32_t _1185;
  uint32_t _1185__PHI_TEMPORARY;
  uint64_t _1186;
  uint64_t _1187;
  uint64_t _1188;
  uint64_t _1189;
  uint64_t _1190;
  uint64_t _1191;
  uint64_t _1192;
  void* _1193;
  uint64_t _1194;
  uint64_t _1195;
  void* _1196;
  void* _1197;
  uint64_t _1198;
  void* _1199;
  uint64_t _1200;
  void* _1201;
  uint8_t _1202;
  uint8_t _1203;
  uint8_t _1204;
  uint32_t _1205;
  uint64_t _1206;
  uint64_t _1206__PHI_TEMPORARY;
  uint32_t _1207;
  uint32_t _1207__PHI_TEMPORARY;
  uint64_t _1208;
  uint64_t _1209;
  void* _1210;
  uint8_t _1211;
  uint32_t _1212;
  uint64_t _1213;
  uint64_t _1214;
  uint32_t _1215;
  uint64_t _1216;
  uint32_t _1217;
  uint32_t _1217__PHI_TEMPORARY;
  uint64_t _1218;
  uint64_t _1219;
  uint64_t _1220;
  uint64_t _1221;
  uint64_t _1222;
  uint64_t _1223;
  uint64_t _1224;
  void* _1225;
  uint64_t _1226;
  uint64_t _1227;
  uint64_t _1228;
  uint64_t _1229;
  uint64_t _1230;
  uint64_t _1231;
  uint64_t _1231__PHI_TEMPORARY;
  uint64_t _1232;
  uint64_t _1232__PHI_TEMPORARY;
  uint32_t _1233;
  uint32_t _1234;
  uint32_t _1235;
  bool _1236;
  bool _1237;
  bool _1237__PHI_TEMPORARY;
  uint64_t _1238;
  uint64_t _1238__PHI_TEMPORARY;
  uint64_t _1239;
  uint64_t _1239__PHI_TEMPORARY;
  uint64_t _1240;
  uint64_t _1241;
  uint32_t _1242;
  bool _1243;
  void* _1244;
  void* _1245;
  uint64_t _1246;
  void* _1247;
  uint64_t _1248;
  void* _1249;
  uint8_t _1250;
  uint8_t _1251;
  uint8_t _1252;
  uint32_t _1253;
  uint64_t _1254;
  uint64_t _1254__PHI_TEMPORARY;
  uint32_t _1255;
  uint32_t _1255__PHI_TEMPORARY;
  uint64_t _1256;
  uint64_t _1257;
  void* _1258;
  uint8_t _1259;
  uint32_t _1260;
  uint64_t _1261;
  uint64_t _1262;
  uint32_t _1263;
  uint64_t _1264;
  uint32_t _1265;
  uint32_t _1265__PHI_TEMPORARY;
  uint64_t _1266;
  uint64_t _1267;
  uint64_t _1268;
  uint64_t _1269;
  void* _1270;
  void* _1271;
  uint64_t _1272;
  void* _1273;
  uint64_t _1274;
  void* _1275;
  uint64_t _1276;
  void* _1277;
  uint64_t _1278;
  uint64_t _1279;
  uint64_t _1280;
  uint64_t _1281;
  void* _1282;
  void* _1283;
  uint64_t _1284;
  void* _1285;
  uint64_t _1286;
  void* _1287;
  uint8_t _1288;
  uint8_t _1289;
  uint8_t _1290;
  uint32_t _1291;
  uint64_t _1292;
  uint64_t _1292__PHI_TEMPORARY;
  uint32_t _1293;
  uint32_t _1293__PHI_TEMPORARY;
  uint64_t _1294;
  uint64_t _1295;
  void* _1296;
  uint8_t _1297;
  uint32_t _1298;
  uint64_t _1299;
  uint64_t _1300;
  uint32_t _1301;
  uint64_t _1302;
  uint32_t _1303;
  uint32_t _1303__PHI_TEMPORARY;
  uint64_t _1304;
  uint64_t _1305;
  uint64_t _1306;
  uint64_t _1307;
  uint64_t _1308;
  uint64_t _1309;
  uint64_t _1310;
  void* _1311;
  uint64_t _1312;
  uint64_t _1313;
  uint64_t _1314;
  uint64_t _1315;
  uint64_t _1315__PHI_TEMPORARY;
  uint64_t _1316;
  void* _1317;
  void* _1318;
  uint64_t _1319;
  void* _1320;
  uint64_t _1321;
  void* _1322;
  uint8_t _1323;
  uint8_t _1324;
  uint8_t _1325;
  uint32_t _1326;
  uint64_t _1327;
  uint64_t _1327__PHI_TEMPORARY;
  uint32_t _1328;
  uint32_t _1328__PHI_TEMPORARY;
  uint64_t _1329;
  uint64_t _1330;
  void* _1331;
  uint8_t _1332;
  uint32_t _1333;
  uint64_t _1334;
  uint64_t _1335;
  uint32_t _1336;
  uint64_t _1337;
  uint32_t _1338;
  uint32_t _1338__PHI_TEMPORARY;
  uint64_t _1339;
  uint64_t _1340;
  uint64_t _1341;
  uint64_t _1342;
  void* _1343;
  void* _1344;
  uint64_t _1345;
  void* _1346;
  uint64_t _1347;
  void* _1348;
  uint64_t _1349;
  void* _1350;
  uint64_t _1351;
  uint64_t _1352;
  uint32_t _1353;
  void* _1354;
  void* _1355;
  uint64_t _1356;
  void* _1357;
  uint64_t _1358;
  void* _1359;
  uint8_t _1360;
  uint8_t _1361;
  uint8_t _1362;
  uint32_t _1363;
  uint64_t _1364;
  uint64_t _1364__PHI_TEMPORARY;
  uint32_t _1365;
  uint32_t _1365__PHI_TEMPORARY;
  uint64_t _1366;
  uint64_t _1367;
  void* _1368;
  uint8_t _1369;
  uint32_t _1370;
  uint64_t _1371;
  uint64_t _1372;
  uint32_t _1373;
  uint64_t _1374;
  uint32_t _1375;
  uint32_t _1375__PHI_TEMPORARY;
  uint64_t _1376;
  uint64_t _1377;
  uint64_t _1378;
  uint64_t _1379;
  uint64_t _1380;
  uint64_t _1381;
  uint64_t _1382;
  void* _1383;
  uint64_t _1384;
  uint64_t _1385;
  uint32_t _1386;
  uint32_t _1387;
  uint32_t _1387__PHI_TEMPORARY;
  uint64_t _1388;
  uint64_t _1389;
  uint64_t _1390;
  uint64_t _1391;
  uint64_t _1392;
  uint64_t _1392__PHI_TEMPORARY;
  uint64_t _1393;
  uint64_t _1393__PHI_TEMPORARY;
  uint32_t _1394;
  uint32_t _1395;
  uint32_t _1396;
  bool _1397;
  bool _1398;
  bool _1398__PHI_TEMPORARY;
  uint64_t _1399;
  uint64_t _1399__PHI_TEMPORARY;
  uint64_t _1400;
  uint64_t _1400__PHI_TEMPORARY;
  struct l_array_1_void_KC_ _1401;
  void* _1402;
  void* _1403;
  uint16_t _1404;
  uint16_t _1404__PHI_TEMPORARY;

  _534 = memset((&_533), 0, 24);
  *((uint64_t*)&_533) = 4;
  _535 = *(void**)_531;
  *(void**)(((&((uint8_t*)(&_533))[((int64_t)8)]))) = _535;
  *(void**)_531 = (&_533);
  _553 = ((&((uint8_t*)_532)[((int64_t)24)]));
  _554 = *(void**)_553;
  _555 = *(uint64_t*)(((&((uint8_t*)_554)[((int64_t)16)])));
  if ((_555 == UINT64_C(0))) {
    goto _1405;
  } else {
    goto _1406;
  }

_1405:
  *((uint64_t*)&_552) = _555;
  *(void**)(((&((uint8_t*)(&_533))[((int64_t)16)]))) = _554;
  julia_throw_boundserror_19(_531, _554, (&_552));
  __builtin_unreachable();

_1406:
  _556 = *(void**)_554;
  _557 = ((&((uint8_t*)_556)[((int64_t)(_555 << 4))]));
  _558 = *(uint8_t*)(((&((uint8_t*)_557)[((int64_t)-16)])));
  _559 = *(uint8_t*)(((&((uint8_t*)_557)[((int64_t)-15)])));
  _560 = *(uint32_t*)(((&((uint8_t*)_557)[((int64_t)-12)])));
  _561 = *(uint64_t*)(((&((uint8_t*)_557)[((int64_t)-8)])));
  if ((((int64_t)_561) < ((int64_t)UINT64_C(1)))) {
    goto _1407;
  } else {
    goto _1408;
  }

_1408:
  _562 = *(void**)_532;
  _563 = ((&((uint8_t*)_562)[((int64_t)16)]));
  _564 = *(uint64_t*)_563;
  _565 = ((&((uint8_t*)_562)[((int64_t)8)]));
  _566 = *(uint64_t*)_565;
  if ((((int64_t)_566) > ((int64_t)_564))) {
    goto _1409;
  } else {
    _583__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1410;
  }

_1409:
  _567 = *(void**)_562;
  _568 = *(uint8_t*)(((&((uint8_t*)_567)[((int64_t)_564)])));
  *(uint64_t*)_563 = (llvm_add_u64(_564, 1));
  _569 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_568)), 0);
  _570 = llvm_sub_u8(32, (llvm_shl_u8(_569, 3)));
  _571 = (((uint32_t)(uint8_t)_568)) << 24;
  if ((((uint8_t)_570) > ((uint8_t)((uint8_t)16)))) {
    _583__PHI_TEMPORARY = _571;   /* for PHI node */
    goto _1410;
  } else {
    _572__PHI_TEMPORARY = 16;   /* for PHI node */
    _573__PHI_TEMPORARY = _571;   /* for PHI node */
    goto _1411;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1411:
  _572 = _572__PHI_TEMPORARY;
  _573 = _573__PHI_TEMPORARY;
  if (((((int64_t)_572) < ((int64_t)UINT64_C(0))) | (((uint64_t)_572) < ((uint64_t)(((uint64_t)(uint8_t)_570)))))) {
    _583__PHI_TEMPORARY = _573;   /* for PHI node */
    goto _1410;
  } else {
    goto _1412;
  }

_1412:
  _574 = *(uint64_t*)_563;
  _575 = *(uint64_t*)_565;
  if ((((int64_t)_575) > ((int64_t)_574))) {
    goto _1413;
  } else {
    _583__PHI_TEMPORARY = _573;   /* for PHI node */
    goto _1410;
  }

_1413:
  _576 = *(void**)_562;
  _577 = *(uint8_t*)(((&((uint8_t*)_576)[((int64_t)_574)])));
  if ((((int8_t)_577) > ((int8_t)((uint8_t)-65)))) {
    _583__PHI_TEMPORARY = _573;   /* for PHI node */
    goto _1410;
  } else {
    goto _1414;
  }

_1414:
  _578 = llvm_select_u32((((int64_t)_574) < ((int64_t)_575)), (((uint32_t)(uint8_t)_577)), 0);
  _579 = *(uint64_t*)_563;
  *(uint64_t*)_563 = (llvm_add_u64(_579, 1));
  _580 = llvm_neg_u64(_572);
  _581 = _573 | (llvm_select_u32((((int64_t)_572) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_580) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_578, (((uint32_t)_580)))))), (llvm_select_u32((((uint64_t)_572) > ((uint64_t)UINT64_C(31))), 0, (_578 << (((uint32_t)_572)))))));
  _582 = llvm_add_u64(_572, -8);
  _572__PHI_TEMPORARY = _582;   /* for PHI node */
  _573__PHI_TEMPORARY = _581;   /* for PHI node */
  goto _1411;

  } while (1); /* end of syntactic loop '' */
_1410:
  _583 = _583__PHI_TEMPORARY;
  _584 = ((&((uint8_t*)_532)[((int64_t)32)]));
  _585 = *(uint64_t*)_584;
  _586 = ((&((uint8_t*)_532)[((int64_t)40)]));
  _587 = *(uint64_t*)_586;
  _588 = jsyn_cbe_fshl_i64(_587, _585, 32);
  _589 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_583)), _587, 32);
  *(uint64_t*)_584 = _588;
  *(uint64_t*)_586 = _589;
  _590 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _591 = *(uint64_t*)_590;
  _592 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _593 = *(uint64_t*)_592;
  _594 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _595 = *(uint64_t*)_594;
  _596 = *(void**)_532;
  _597 = *(uint64_t*)(((&((uint8_t*)_596)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_532)[((int64_t)48)]))) = _591;
  *(uint64_t*)_590 = _593;
  *(uint64_t*)_592 = _595;
  *(uint64_t*)_594 = _597;
  _598 = *(uint64_t*)_584;
  _599 = ((uint32_t)_598);
  switch (_599) {
  default:
    goto _1415;
  case 671088640u:
    goto _1416;
  case 687865856u:
    goto _1417;
  }

_1416:
  _600 = *(void**)_553;
  _601 = *(uint64_t*)(((&((uint8_t*)_600)[((int64_t)16)])));
  if ((_601 == UINT64_C(0))) {
    goto _1418;
  } else {
    goto _1419;
  }

_1418:
  *((uint64_t*)&_537) = _601;
  *(void**)(((&((uint8_t*)(&_533))[((int64_t)16)]))) = _600;
  julia_throw_boundserror_19(_531, _600, (&_537));
  __builtin_unreachable();

_1419:
  _602 = *(void**)_600;
  _603 = ((&((uint8_t*)_602)[((int64_t)(_601 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_603)[((int64_t)-16)]))) = _558;
  *(uint8_t*)(((&((uint8_t*)_603)[((int64_t)-15)]))) = _559;
  *(uint32_t*)(((&((uint8_t*)_603)[((int64_t)-12)]))) = _560;
  *(uint64_t*)(((&((uint8_t*)_603)[((int64_t)-8)]))) = (llvm_add_u64(_561, 1));
  julia_emit_20((&_536), _531, _532, 60, 1);
  _604__PHI_TEMPORARY = (&_536);   /* for PHI node */
  goto _1420;

_1420:
  _604 = _604__PHI_TEMPORARY;
  _605 = memcpy(_530, _604, 32);
  _606 = *(void**)(((&((uint8_t*)(&_533))[((int64_t)8)])));
  *(void**)_531 = _606;
  return;
_1417:
  _607 = *(void**)_553;
  _608 = *(uint64_t*)(((&((uint8_t*)_607)[((int64_t)16)])));
  if ((_608 == UINT64_C(0))) {
    goto _1421;
  } else {
    goto _1422;
  }

_1421:
  *((uint64_t*)&_539) = _608;
  *(void**)(((&((uint8_t*)(&_533))[((int64_t)16)]))) = _607;
  julia_throw_boundserror_19(_531, _607, (&_539));
  __builtin_unreachable();

_1422:
  _609 = *(void**)_607;
  _610 = ((&((uint8_t*)_609)[((int64_t)(_608 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_610)[((int64_t)-16)]))) = _558;
  *(uint8_t*)(((&((uint8_t*)_610)[((int64_t)-15)]))) = _559;
  *(uint32_t*)(((&((uint8_t*)_610)[((int64_t)-12)]))) = _560;
  *(uint64_t*)(((&((uint8_t*)_610)[((int64_t)-8)]))) = (llvm_add_u64(_561, -1));
  julia_emit_20((&_538), _531, _532, 61, 1);
  _604__PHI_TEMPORARY = (&_538);   /* for PHI node */
  goto _1420;

_1415:
  julia__next_token_17((&_540), _531, _532, _599);
  _604__PHI_TEMPORARY = (&_540);   /* for PHI node */
  goto _1420;

_1407:
  _611 = ((&((uint8_t*)_532)[((int64_t)32)]));
  _612 = *(uint64_t*)_611;
  _613 = ((&((uint8_t*)_532)[((int64_t)40)]));
  _614 = llvm_lshr_u64(_612, 32);
  _615 = ((uint32_t)_614);
  _616 = ((&((uint8_t*)_532)[((int64_t)16)]));
  _617 = *(uint16_t*)_616;
  switch (_617) {
  default:
    _745__PHI_TEMPORARY = _615;   /* for PHI node */
    goto _1423;
  case ((uint16_t)534):
    goto _1424;
  case ((uint16_t)3):
    goto _1425;
  }

_1424:
  _618 = *(uint64_t*)_611;
  _619 = llvm_lshr_u64(_618, 32);
  _620 = ((uint32_t)_619);
  switch (_620) {
  default:
    goto _1426;
  case 671088640u:
    goto _1427;
  case 4294967295u:
    _745__PHI_TEMPORARY = _620;   /* for PHI node */
    goto _1423;
  }

_1427:
  _621 = *(void**)_532;
  _622 = ((&((uint8_t*)_621)[((int64_t)16)]));
  _623 = *(uint64_t*)_622;
  _624 = ((&((uint8_t*)_621)[((int64_t)8)]));
  _625 = *(uint64_t*)_624;
  if ((((int64_t)_625) > ((int64_t)_623))) {
    goto _1428;
  } else {
    _642__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1429;
  }

_1428:
  _626 = *(void**)_621;
  _627 = *(uint8_t*)(((&((uint8_t*)_626)[((int64_t)_623)])));
  *(uint64_t*)_622 = (llvm_add_u64(_623, 1));
  _628 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_627)), 0);
  _629 = llvm_sub_u8(32, (llvm_shl_u8(_628, 3)));
  _630 = (((uint32_t)(uint8_t)_627)) << 24;
  if ((((uint8_t)_629) > ((uint8_t)((uint8_t)16)))) {
    _642__PHI_TEMPORARY = _630;   /* for PHI node */
    goto _1429;
  } else {
    _631__PHI_TEMPORARY = 16;   /* for PHI node */
    _632__PHI_TEMPORARY = _630;   /* for PHI node */
    goto _1430;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1430:
  _631 = _631__PHI_TEMPORARY;
  _632 = _632__PHI_TEMPORARY;
  if (((((int64_t)_631) < ((int64_t)UINT64_C(0))) | (((uint64_t)_631) < ((uint64_t)(((uint64_t)(uint8_t)_629)))))) {
    _642__PHI_TEMPORARY = _632;   /* for PHI node */
    goto _1429;
  } else {
    goto _1431;
  }

_1431:
  _633 = *(uint64_t*)_622;
  _634 = *(uint64_t*)_624;
  if ((((int64_t)_634) > ((int64_t)_633))) {
    goto _1432;
  } else {
    _642__PHI_TEMPORARY = _632;   /* for PHI node */
    goto _1429;
  }

_1432:
  _635 = *(void**)_621;
  _636 = *(uint8_t*)(((&((uint8_t*)_635)[((int64_t)_633)])));
  if ((((int8_t)_636) > ((int8_t)((uint8_t)-65)))) {
    _642__PHI_TEMPORARY = _632;   /* for PHI node */
    goto _1429;
  } else {
    goto _1433;
  }

_1433:
  _637 = llvm_select_u32((((int64_t)_633) < ((int64_t)_634)), (((uint32_t)(uint8_t)_636)), 0);
  _638 = *(uint64_t*)_622;
  *(uint64_t*)_622 = (llvm_add_u64(_638, 1));
  _639 = llvm_neg_u64(_631);
  _640 = _632 | (llvm_select_u32((((int64_t)_631) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_639) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_637, (((uint32_t)_639)))))), (llvm_select_u32((((uint64_t)_631) > ((uint64_t)UINT64_C(31))), 0, (_637 << (((uint32_t)_631)))))));
  _641 = llvm_add_u64(_631, -8);
  _631__PHI_TEMPORARY = _641;   /* for PHI node */
  _632__PHI_TEMPORARY = _640;   /* for PHI node */
  goto _1430;

  } while (1); /* end of syntactic loop '' */
_1429:
  _642 = _642__PHI_TEMPORARY;
  _643 = *(uint64_t*)_611;
  _644 = *(uint64_t*)_613;
  _645 = jsyn_cbe_fshl_i64(_644, _643, 32);
  _646 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_642)), _644, 32);
  *(uint64_t*)_611 = _645;
  *(uint64_t*)_613 = _646;
  _647 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _648 = *(uint64_t*)_647;
  _649 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _650 = *(uint64_t*)_649;
  _651 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _652 = *(uint64_t*)_651;
  _653 = *(void**)_532;
  _654 = *(uint64_t*)(((&((uint8_t*)_653)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_532)[((int64_t)48)]))) = _648;
  *(uint64_t*)_647 = _650;
  *(uint64_t*)_649 = _652;
  *(uint64_t*)_651 = _654;
  _655 = *(void**)_553;
  _656 = *(uint64_t*)(((&((uint8_t*)_655)[((int64_t)16)])));
  if ((_656 == UINT64_C(0))) {
    goto _1434;
  } else {
    goto _1435;
  }

_1434:
  *((uint64_t*)&_542) = _656;
  *(void**)(((&((uint8_t*)(&_533))[((int64_t)16)]))) = _655;
  julia_throw_boundserror_19(_531, _655, (&_542));
  __builtin_unreachable();

_1435:
  _657 = *(void**)_655;
  _658 = ((&((uint8_t*)_657)[((int64_t)(_656 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_658)[((int64_t)-16)]))) = _558;
  *(uint8_t*)(((&((uint8_t*)_658)[((int64_t)-15)]))) = _559;
  *(uint32_t*)(((&((uint8_t*)_658)[((int64_t)-12)]))) = _560;
  *(uint64_t*)(((&((uint8_t*)_658)[((int64_t)-8)]))) = (llvm_add_u64(_561, 1));
  julia_emit_20((&_541), _531, _532, 60, 1);
  _604__PHI_TEMPORARY = (&_541);   /* for PHI node */
  goto _1420;

_1426:
  _659 = llvm_OC_ctlz_OC_i32((_620 ^ -1), 0);
  _660 = ((uint64_t)(uint32_t)_659);
  _661 = llvm_OC_cttz_OC_i32(_620, 0);
  _662 = _661 & 56;
  _663 = ((uint64_t)(uint32_t)_662);
  _664 = llvm_select_bool((((uint32_t)_661) < ((uint32_t)32u)), ((llvm_lshr_u32(((_620 & 12632256) ^ 8421504), _662)) != 0u), 0);
  _665 = (((_620 & -33554432) == 3221225472u) | ((_620 & -2097152) == 3766484992u)) | ((_620 & -1048576) == 4034920448u);
  if (((((((_659 == 1u) | (((uint64_t)(llvm_add_u64((_660 << 3), _663))) > ((uint64_t)UINT64_C(32)))) | ((((uint64_t)_618) > ((uint64_t)UINT64_C(17122614319301787647))) & (((uint32_t)(llvm_add_u32(_620, 191905856))) < ((uint32_t)4193304640u)))) | (_619 == UINT64_C(4036993714))) | _664) | _665)) {
    _745__PHI_TEMPORARY = _620;   /* for PHI node */
    goto _1423;
  } else {
    goto _1436;
  }

_1436:
  _666 = llvm_lshr_u32(_620, 24);
  if ((((int64_t)_618) < ((int64_t)UINT64_C(0)))) {
    goto _1437;
  } else {
    _669__PHI_TEMPORARY = _666;   /* for PHI node */
    goto _1438;
  }

_1437:
  if ((((_659 == 1u) | (((uint64_t)(llvm_add_u64((_660 << 3), _663))) > ((uint64_t)UINT64_C(32)))) | (_664 | _665))) {
    goto _1439;
  } else {
    goto _1440;
  }

_1439:
  julia_throw_invalid_char_21(_531, _620);
  __builtin_unreachable();

_1440:
  _667 = llvm_select_u32((((uint32_t)_661) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _659)) & _620), _662)), 0);
  _668 = (((_667 & 127) | ((llvm_lshr_u32(_667, 2)) & 8128)) | ((llvm_lshr_u32(_667, 4)) & 520192)) | ((llvm_lshr_u32(_667, 6)) & 33292288);
  _669__PHI_TEMPORARY = _668;   /* for PHI node */
  goto _1438;

_1438:
  _669 = _669__PHI_TEMPORARY;
  _670 = jsk_jl_id_start_char(_669);
  if ((_670 == 0u)) {
    _745__PHI_TEMPORARY = _620;   /* for PHI node */
    goto _1423;
  } else {
    goto _1441;
  }

_1441:
  _671 = *(void**)_532;
  _672 = ((&((uint8_t*)_671)[((int64_t)16)]));
  _673 = *(uint64_t*)_672;
  _674 = ((&((uint8_t*)_671)[((int64_t)8)]));
  _675 = *(uint64_t*)_674;
  if ((((int64_t)_675) > ((int64_t)_673))) {
    goto _1442;
  } else {
    _692__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1443;
  }

_1442:
  _676 = *(void**)_671;
  _677 = *(uint8_t*)(((&((uint8_t*)_676)[((int64_t)_673)])));
  *(uint64_t*)_672 = (llvm_add_u64(_673, 1));
  _678 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_677)), 0);
  _679 = llvm_sub_u8(32, (llvm_shl_u8(_678, 3)));
  _680 = (((uint32_t)(uint8_t)_677)) << 24;
  if ((((uint8_t)_679) > ((uint8_t)((uint8_t)16)))) {
    _692__PHI_TEMPORARY = _680;   /* for PHI node */
    goto _1443;
  } else {
    _681__PHI_TEMPORARY = 16;   /* for PHI node */
    _682__PHI_TEMPORARY = _680;   /* for PHI node */
    goto _1444;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1444:
  _681 = _681__PHI_TEMPORARY;
  _682 = _682__PHI_TEMPORARY;
  if (((((int64_t)_681) < ((int64_t)UINT64_C(0))) | (((uint64_t)_681) < ((uint64_t)(((uint64_t)(uint8_t)_679)))))) {
    _692__PHI_TEMPORARY = _682;   /* for PHI node */
    goto _1443;
  } else {
    goto _1445;
  }

_1445:
  _683 = *(uint64_t*)_672;
  _684 = *(uint64_t*)_674;
  if ((((int64_t)_684) > ((int64_t)_683))) {
    goto _1446;
  } else {
    _692__PHI_TEMPORARY = _682;   /* for PHI node */
    goto _1443;
  }

_1446:
  _685 = *(void**)_671;
  _686 = *(uint8_t*)(((&((uint8_t*)_685)[((int64_t)_683)])));
  if ((((int8_t)_686) > ((int8_t)((uint8_t)-65)))) {
    _692__PHI_TEMPORARY = _682;   /* for PHI node */
    goto _1443;
  } else {
    goto _1447;
  }

_1447:
  _687 = llvm_select_u32((((int64_t)_683) < ((int64_t)_684)), (((uint32_t)(uint8_t)_686)), 0);
  _688 = *(uint64_t*)_672;
  *(uint64_t*)_672 = (llvm_add_u64(_688, 1));
  _689 = llvm_neg_u64(_681);
  _690 = _682 | (llvm_select_u32((((int64_t)_681) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_689) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_687, (((uint32_t)_689)))))), (llvm_select_u32((((uint64_t)_681) > ((uint64_t)UINT64_C(31))), 0, (_687 << (((uint32_t)_681)))))));
  _691 = llvm_add_u64(_681, -8);
  _681__PHI_TEMPORARY = _691;   /* for PHI node */
  _682__PHI_TEMPORARY = _690;   /* for PHI node */
  goto _1444;

  } while (1); /* end of syntactic loop '' */
_1443:
  _692 = _692__PHI_TEMPORARY;
  _693 = *(uint64_t*)_611;
  _694 = *(uint64_t*)_613;
  _695 = jsyn_cbe_fshl_i64(_694, _693, 32);
  _696 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_692)), _694, 32);
  *(uint64_t*)_611 = _695;
  *(uint64_t*)_613 = _696;
  _697 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _698 = *(uint64_t*)_697;
  _699 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _700 = *(uint64_t*)_699;
  _701 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _702 = *(uint64_t*)_701;
  _703 = *(void**)_532;
  _704 = *(uint64_t*)(((&((uint8_t*)_703)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_532)[((int64_t)48)]))) = _698;
  *(uint64_t*)_697 = _700;
  *(uint64_t*)_699 = _702;
  *(uint64_t*)_701 = _704;
  _705 = *(uint64_t*)_611;
  julia_lex_identifier_22((&_543), _531, _532, (((uint32_t)_705)));
  _604__PHI_TEMPORARY = (&_543);   /* for PHI node */
  goto _1420;

_1425:
  if ((_614 == UINT64_C(4294967295))) {
    _745__PHI_TEMPORARY = _615;   /* for PHI node */
    goto _1423;
  } else {
    goto _1448;
  }

_1448:
  _706 = julia_is_operator_start_char_23(_531, _615);
  _707 = ((bool)_706&1u);
  if ((((bool)_706&1u))) {
    _710__PHI_TEMPORARY = _707;   /* for PHI node */
    goto _1449;
  } else {
    goto _1450;
  }

_1450:
  _708 = julia_is_never_id_char_24(_531, _615);
  _709 = ((bool)_708&1u);
  _710__PHI_TEMPORARY = _709;   /* for PHI node */
  goto _1449;

_1449:
  _710 = _710__PHI_TEMPORARY;
  if (_710) {
    _745__PHI_TEMPORARY = _615;   /* for PHI node */
    goto _1423;
  } else {
    goto _1451;
  }

_1451:
  _711 = *(void**)_532;
  _712 = ((&((uint8_t*)_711)[((int64_t)16)]));
  _713 = *(uint64_t*)_712;
  _714 = ((&((uint8_t*)_711)[((int64_t)8)]));
  _715 = *(uint64_t*)_714;
  if ((((int64_t)_715) > ((int64_t)_713))) {
    goto _1452;
  } else {
    _732__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1453;
  }

_1452:
  _716 = *(void**)_711;
  _717 = *(uint8_t*)(((&((uint8_t*)_716)[((int64_t)_713)])));
  *(uint64_t*)_712 = (llvm_add_u64(_713, 1));
  _718 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_717)), 0);
  _719 = llvm_sub_u8(32, (llvm_shl_u8(_718, 3)));
  _720 = (((uint32_t)(uint8_t)_717)) << 24;
  if ((((uint8_t)_719) > ((uint8_t)((uint8_t)16)))) {
    _732__PHI_TEMPORARY = _720;   /* for PHI node */
    goto _1453;
  } else {
    _721__PHI_TEMPORARY = 16;   /* for PHI node */
    _722__PHI_TEMPORARY = _720;   /* for PHI node */
    goto _1454;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1454:
  _721 = _721__PHI_TEMPORARY;
  _722 = _722__PHI_TEMPORARY;
  if (((((int64_t)_721) < ((int64_t)UINT64_C(0))) | (((uint64_t)_721) < ((uint64_t)(((uint64_t)(uint8_t)_719)))))) {
    _732__PHI_TEMPORARY = _722;   /* for PHI node */
    goto _1453;
  } else {
    goto _1455;
  }

_1455:
  _723 = *(uint64_t*)_712;
  _724 = *(uint64_t*)_714;
  if ((((int64_t)_724) > ((int64_t)_723))) {
    goto _1456;
  } else {
    _732__PHI_TEMPORARY = _722;   /* for PHI node */
    goto _1453;
  }

_1456:
  _725 = *(void**)_711;
  _726 = *(uint8_t*)(((&((uint8_t*)_725)[((int64_t)_723)])));
  if ((((int8_t)_726) > ((int8_t)((uint8_t)-65)))) {
    _732__PHI_TEMPORARY = _722;   /* for PHI node */
    goto _1453;
  } else {
    goto _1457;
  }

_1457:
  _727 = llvm_select_u32((((int64_t)_723) < ((int64_t)_724)), (((uint32_t)(uint8_t)_726)), 0);
  _728 = *(uint64_t*)_712;
  *(uint64_t*)_712 = (llvm_add_u64(_728, 1));
  _729 = llvm_neg_u64(_721);
  _730 = _722 | (llvm_select_u32((((int64_t)_721) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_729) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_727, (((uint32_t)_729)))))), (llvm_select_u32((((uint64_t)_721) > ((uint64_t)UINT64_C(31))), 0, (_727 << (((uint32_t)_721)))))));
  _731 = llvm_add_u64(_721, -8);
  _721__PHI_TEMPORARY = _731;   /* for PHI node */
  _722__PHI_TEMPORARY = _730;   /* for PHI node */
  goto _1454;

  } while (1); /* end of syntactic loop '' */
_1453:
  _732 = _732__PHI_TEMPORARY;
  _733 = *(uint64_t*)_611;
  _734 = *(uint64_t*)_613;
  _735 = jsyn_cbe_fshl_i64(_734, _733, 32);
  _736 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_732)), _734, 32);
  *(uint64_t*)_611 = _735;
  *(uint64_t*)_613 = _736;
  _737 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _738 = *(uint64_t*)_737;
  _739 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _740 = *(uint64_t*)_739;
  _741 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _742 = *(uint64_t*)_741;
  _743 = *(void**)_532;
  _744 = *(uint64_t*)(((&((uint8_t*)_743)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_532)[((int64_t)48)]))) = _738;
  *(uint64_t*)_737 = _740;
  *(uint64_t*)_739 = _742;
  *(uint64_t*)_741 = _744;
  julia_emit_20((&_551), _531, _532, 758, 1);
  _604__PHI_TEMPORARY = (&_551);   /* for PHI node */
  goto _1420;

_1423:
  _745 = _745__PHI_TEMPORARY;
  if ((_745 == 4294967295u)) {
    goto _1458;
  } else {
    goto _1459;
  }

_1458:
  julia_emit_20((&_544), _531, _532, 752, 1);
  _604__PHI_TEMPORARY = (&_544);   /* for PHI node */
  goto _1420;

_1459:
  _746 = ((bool)_559&1u);
  if (((_745 != 603979776u) | _746)) {
    goto _1460;
  } else {
    goto _1461;
  }

_1461:
  _747 = *(void**)_532;
  _748 = ((&((uint8_t*)_747)[((int64_t)16)]));
  _749 = *(uint64_t*)_748;
  _750 = ((&((uint8_t*)_747)[((int64_t)8)]));
  _751 = *(uint64_t*)_750;
  if ((((int64_t)_751) > ((int64_t)_749))) {
    goto _1462;
  } else {
    _768__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1463;
  }

_1462:
  _752 = *(void**)_747;
  _753 = *(uint8_t*)(((&((uint8_t*)_752)[((int64_t)_749)])));
  *(uint64_t*)_748 = (llvm_add_u64(_749, 1));
  _754 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_753)), 0);
  _755 = llvm_sub_u8(32, (llvm_shl_u8(_754, 3)));
  _756 = (((uint32_t)(uint8_t)_753)) << 24;
  if ((((uint8_t)_755) > ((uint8_t)((uint8_t)16)))) {
    _768__PHI_TEMPORARY = _756;   /* for PHI node */
    goto _1463;
  } else {
    _757__PHI_TEMPORARY = 16;   /* for PHI node */
    _758__PHI_TEMPORARY = _756;   /* for PHI node */
    goto _1464;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1464:
  _757 = _757__PHI_TEMPORARY;
  _758 = _758__PHI_TEMPORARY;
  if (((((int64_t)_757) < ((int64_t)UINT64_C(0))) | (((uint64_t)_757) < ((uint64_t)(((uint64_t)(uint8_t)_755)))))) {
    _768__PHI_TEMPORARY = _758;   /* for PHI node */
    goto _1463;
  } else {
    goto _1465;
  }

_1465:
  _759 = *(uint64_t*)_748;
  _760 = *(uint64_t*)_750;
  if ((((int64_t)_760) > ((int64_t)_759))) {
    goto _1466;
  } else {
    _768__PHI_TEMPORARY = _758;   /* for PHI node */
    goto _1463;
  }

_1466:
  _761 = *(void**)_747;
  _762 = *(uint8_t*)(((&((uint8_t*)_761)[((int64_t)_759)])));
  if ((((int8_t)_762) > ((int8_t)((uint8_t)-65)))) {
    _768__PHI_TEMPORARY = _758;   /* for PHI node */
    goto _1463;
  } else {
    goto _1467;
  }

_1467:
  _763 = llvm_select_u32((((int64_t)_759) < ((int64_t)_760)), (((uint32_t)(uint8_t)_762)), 0);
  _764 = *(uint64_t*)_748;
  *(uint64_t*)_748 = (llvm_add_u64(_764, 1));
  _765 = llvm_neg_u64(_757);
  _766 = _758 | (llvm_select_u32((((int64_t)_757) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_765) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_763, (((uint32_t)_765)))))), (llvm_select_u32((((uint64_t)_757) > ((uint64_t)UINT64_C(31))), 0, (_763 << (((uint32_t)_757)))))));
  _767 = llvm_add_u64(_757, -8);
  _757__PHI_TEMPORARY = _767;   /* for PHI node */
  _758__PHI_TEMPORARY = _766;   /* for PHI node */
  goto _1464;

  } while (1); /* end of syntactic loop '' */
_1463:
  _768 = _768__PHI_TEMPORARY;
  _769 = *(uint64_t*)_611;
  _770 = *(uint64_t*)_613;
  _771 = jsyn_cbe_fshl_i64(_770, _769, 32);
  _772 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_768)), _770, 32);
  *(uint64_t*)_611 = _771;
  *(uint64_t*)_613 = _772;
  _773 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _774 = *(uint64_t*)_773;
  _775 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _776 = *(uint64_t*)_775;
  _777 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _778 = *(uint64_t*)_777;
  _779 = *(void**)_532;
  _780 = *(uint64_t*)(((&((uint8_t*)_779)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_532)[((int64_t)48)]))) = _774;
  *(uint64_t*)_773 = _776;
  *(uint64_t*)_775 = _778;
  *(uint64_t*)_777 = _780;
  julia_emit_20((&_545), _531, _532, 534, 1);
  _604__PHI_TEMPORARY = (&_545);   /* for PHI node */
  goto _1420;

_1460:
  if (((_745 != 1543503872u) | _746)) {
    goto _1468;
  } else {
    goto _1469;
  }

_1469:
  _781 = *(uint64_t*)_613;
  _782 = ((uint32_t)_781);
  switch (_782) {
  default:
    goto _1468;
  case 218103808u:
    goto _1470;
  case 167772160u:
    goto _1470;
  }

_1470:
  _783 = *(void**)_532;
  _784 = ((&((uint8_t*)_783)[((int64_t)16)]));
  _785 = *(uint64_t*)_784;
  _786 = ((&((uint8_t*)_783)[((int64_t)8)]));
  _787 = *(uint64_t*)_786;
  if ((((int64_t)_787) > ((int64_t)_785))) {
    goto _1471;
  } else {
    _804__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1472;
  }

_1471:
  _788 = *(void**)_783;
  _789 = *(uint8_t*)(((&((uint8_t*)_788)[((int64_t)_785)])));
  *(uint64_t*)_784 = (llvm_add_u64(_785, 1));
  _790 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_789)), 0);
  _791 = llvm_sub_u8(32, (llvm_shl_u8(_790, 3)));
  _792 = (((uint32_t)(uint8_t)_789)) << 24;
  if ((((uint8_t)_791) > ((uint8_t)((uint8_t)16)))) {
    _804__PHI_TEMPORARY = _792;   /* for PHI node */
    goto _1472;
  } else {
    _793__PHI_TEMPORARY = 16;   /* for PHI node */
    _794__PHI_TEMPORARY = _792;   /* for PHI node */
    goto _1473;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1473:
  _793 = _793__PHI_TEMPORARY;
  _794 = _794__PHI_TEMPORARY;
  if (((((int64_t)_793) < ((int64_t)UINT64_C(0))) | (((uint64_t)_793) < ((uint64_t)(((uint64_t)(uint8_t)_791)))))) {
    _804__PHI_TEMPORARY = _794;   /* for PHI node */
    goto _1472;
  } else {
    goto _1474;
  }

_1474:
  _795 = *(uint64_t*)_784;
  _796 = *(uint64_t*)_786;
  if ((((int64_t)_796) > ((int64_t)_795))) {
    goto _1475;
  } else {
    _804__PHI_TEMPORARY = _794;   /* for PHI node */
    goto _1472;
  }

_1475:
  _797 = *(void**)_783;
  _798 = *(uint8_t*)(((&((uint8_t*)_797)[((int64_t)_795)])));
  if ((((int8_t)_798) > ((int8_t)((uint8_t)-65)))) {
    _804__PHI_TEMPORARY = _794;   /* for PHI node */
    goto _1472;
  } else {
    goto _1476;
  }

_1476:
  _799 = llvm_select_u32((((int64_t)_795) < ((int64_t)_796)), (((uint32_t)(uint8_t)_798)), 0);
  _800 = *(uint64_t*)_784;
  *(uint64_t*)_784 = (llvm_add_u64(_800, 1));
  _801 = llvm_neg_u64(_793);
  _802 = _794 | (llvm_select_u32((((int64_t)_793) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_801) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_799, (((uint32_t)_801)))))), (llvm_select_u32((((uint64_t)_793) > ((uint64_t)UINT64_C(31))), 0, (_799 << (((uint32_t)_793)))))));
  _803 = llvm_add_u64(_793, -8);
  _793__PHI_TEMPORARY = _803;   /* for PHI node */
  _794__PHI_TEMPORARY = _802;   /* for PHI node */
  goto _1473;

  } while (1); /* end of syntactic loop '' */
_1472:
  _804 = _804__PHI_TEMPORARY;
  _805 = *(uint64_t*)_611;
  _806 = *(uint64_t*)_613;
  _807 = jsyn_cbe_fshl_i64(_806, _805, 32);
  _808 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_804)), _806, 32);
  *(uint64_t*)_611 = _807;
  *(uint64_t*)_613 = _808;
  _809 = ((&((uint8_t*)_532)[((int64_t)48)]));
  _810 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _811 = *(uint64_t*)_810;
  _812 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _813 = *(uint64_t*)_812;
  _814 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _815 = *(uint64_t*)_814;
  _816 = *(void**)_532;
  _817 = *(uint64_t*)(((&((uint8_t*)_816)[((int64_t)16)])));
  *(uint64_t*)_809 = _811;
  *(uint64_t*)_810 = _813;
  *(uint64_t*)_812 = _815;
  *(uint64_t*)_814 = _817;
  _818 = *(void**)_532;
  _819 = ((&((uint8_t*)_818)[((int64_t)16)]));
  _820 = *(uint64_t*)_819;
  _821 = ((&((uint8_t*)_818)[((int64_t)8)]));
  _822 = *(uint64_t*)_821;
  if ((((int64_t)_822) > ((int64_t)_820))) {
    goto _1477;
  } else {
    _839__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1478;
  }

_1477:
  _823 = *(void**)_818;
  _824 = *(uint8_t*)(((&((uint8_t*)_823)[((int64_t)_820)])));
  *(uint64_t*)_819 = (llvm_add_u64(_820, 1));
  _825 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_824)), 0);
  _826 = llvm_sub_u8(32, (llvm_shl_u8(_825, 3)));
  _827 = (((uint32_t)(uint8_t)_824)) << 24;
  if ((((uint8_t)_826) > ((uint8_t)((uint8_t)16)))) {
    _839__PHI_TEMPORARY = _827;   /* for PHI node */
    goto _1478;
  } else {
    _828__PHI_TEMPORARY = 16;   /* for PHI node */
    _829__PHI_TEMPORARY = _827;   /* for PHI node */
    goto _1479;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1479:
  _828 = _828__PHI_TEMPORARY;
  _829 = _829__PHI_TEMPORARY;
  if (((((int64_t)_828) < ((int64_t)UINT64_C(0))) | (((uint64_t)_828) < ((uint64_t)(((uint64_t)(uint8_t)_826)))))) {
    _839__PHI_TEMPORARY = _829;   /* for PHI node */
    goto _1478;
  } else {
    goto _1480;
  }

_1480:
  _830 = *(uint64_t*)_819;
  _831 = *(uint64_t*)_821;
  if ((((int64_t)_831) > ((int64_t)_830))) {
    goto _1481;
  } else {
    _839__PHI_TEMPORARY = _829;   /* for PHI node */
    goto _1478;
  }

_1481:
  _832 = *(void**)_818;
  _833 = *(uint8_t*)(((&((uint8_t*)_832)[((int64_t)_830)])));
  if ((((int8_t)_833) > ((int8_t)((uint8_t)-65)))) {
    _839__PHI_TEMPORARY = _829;   /* for PHI node */
    goto _1478;
  } else {
    goto _1482;
  }

_1482:
  _834 = llvm_select_u32((((int64_t)_830) < ((int64_t)_831)), (((uint32_t)(uint8_t)_833)), 0);
  _835 = *(uint64_t*)_819;
  *(uint64_t*)_819 = (llvm_add_u64(_835, 1));
  _836 = llvm_neg_u64(_828);
  _837 = _829 | (llvm_select_u32((((int64_t)_828) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_836) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_834, (((uint32_t)_836)))))), (llvm_select_u32((((uint64_t)_828) > ((uint64_t)UINT64_C(31))), 0, (_834 << (((uint32_t)_828)))))));
  _838 = llvm_add_u64(_828, -8);
  _828__PHI_TEMPORARY = _838;   /* for PHI node */
  _829__PHI_TEMPORARY = _837;   /* for PHI node */
  goto _1479;

  } while (1); /* end of syntactic loop '' */
_1478:
  _839 = _839__PHI_TEMPORARY;
  _840 = *(uint64_t*)_611;
  _841 = *(uint64_t*)_613;
  _842 = jsyn_cbe_fshl_i64(_841, _840, 32);
  _843 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_839)), _841, 32);
  *(uint64_t*)_611 = _842;
  *(uint64_t*)_613 = _843;
  _844 = *(uint64_t*)_810;
  _845 = *(uint64_t*)_812;
  _846 = *(uint64_t*)_814;
  _847 = *(void**)_532;
  _848 = *(uint64_t*)(((&((uint8_t*)_847)[((int64_t)16)])));
  *(uint64_t*)_809 = _844;
  *(uint64_t*)_810 = _845;
  *(uint64_t*)_812 = _846;
  *(uint64_t*)_814 = _848;
  if ((_782 == 218103808u)) {
    goto _1483;
  } else {
    goto _1484;
  }

_1483:
  _849 = *(uint64_t*)_611;
  if (((_849 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1485;
  } else {
    goto _1484;
  }

_1485:
  _850 = *(void**)_532;
  _851 = ((&((uint8_t*)_850)[((int64_t)16)]));
  _852 = *(uint64_t*)_851;
  _853 = ((&((uint8_t*)_850)[((int64_t)8)]));
  _854 = *(uint64_t*)_853;
  if ((((int64_t)_854) > ((int64_t)_852))) {
    goto _1486;
  } else {
    _871__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1487;
  }

_1486:
  _855 = *(void**)_850;
  _856 = *(uint8_t*)(((&((uint8_t*)_855)[((int64_t)_852)])));
  *(uint64_t*)_851 = (llvm_add_u64(_852, 1));
  _857 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_856)), 0);
  _858 = llvm_sub_u8(32, (llvm_shl_u8(_857, 3)));
  _859 = (((uint32_t)(uint8_t)_856)) << 24;
  if ((((uint8_t)_858) > ((uint8_t)((uint8_t)16)))) {
    _871__PHI_TEMPORARY = _859;   /* for PHI node */
    goto _1487;
  } else {
    _860__PHI_TEMPORARY = 16;   /* for PHI node */
    _861__PHI_TEMPORARY = _859;   /* for PHI node */
    goto _1488;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1488:
  _860 = _860__PHI_TEMPORARY;
  _861 = _861__PHI_TEMPORARY;
  if (((((int64_t)_860) < ((int64_t)UINT64_C(0))) | (((uint64_t)_860) < ((uint64_t)(((uint64_t)(uint8_t)_858)))))) {
    _871__PHI_TEMPORARY = _861;   /* for PHI node */
    goto _1487;
  } else {
    goto _1489;
  }

_1489:
  _862 = *(uint64_t*)_851;
  _863 = *(uint64_t*)_853;
  if ((((int64_t)_863) > ((int64_t)_862))) {
    goto _1490;
  } else {
    _871__PHI_TEMPORARY = _861;   /* for PHI node */
    goto _1487;
  }

_1490:
  _864 = *(void**)_850;
  _865 = *(uint8_t*)(((&((uint8_t*)_864)[((int64_t)_862)])));
  if ((((int8_t)_865) > ((int8_t)((uint8_t)-65)))) {
    _871__PHI_TEMPORARY = _861;   /* for PHI node */
    goto _1487;
  } else {
    goto _1491;
  }

_1491:
  _866 = llvm_select_u32((((int64_t)_862) < ((int64_t)_863)), (((uint32_t)(uint8_t)_865)), 0);
  _867 = *(uint64_t*)_851;
  *(uint64_t*)_851 = (llvm_add_u64(_867, 1));
  _868 = llvm_neg_u64(_860);
  _869 = _861 | (llvm_select_u32((((int64_t)_860) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_868) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_866, (((uint32_t)_868)))))), (llvm_select_u32((((uint64_t)_860) > ((uint64_t)UINT64_C(31))), 0, (_866 << (((uint32_t)_860)))))));
  _870 = llvm_add_u64(_860, -8);
  _860__PHI_TEMPORARY = _870;   /* for PHI node */
  _861__PHI_TEMPORARY = _869;   /* for PHI node */
  goto _1488;

  } while (1); /* end of syntactic loop '' */
_1487:
  _871 = _871__PHI_TEMPORARY;
  _872 = *(uint64_t*)_611;
  _873 = *(uint64_t*)_613;
  _874 = jsyn_cbe_fshl_i64(_873, _872, 32);
  _875 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_871)), _873, 32);
  *(uint64_t*)_611 = _874;
  *(uint64_t*)_613 = _875;
  _876 = *(uint64_t*)_810;
  _877 = *(uint64_t*)_812;
  _878 = *(uint64_t*)_814;
  _879 = *(void**)_532;
  _880 = *(uint64_t*)(((&((uint8_t*)_879)[((int64_t)16)])));
  *(uint64_t*)_809 = _876;
  *(uint64_t*)_810 = _877;
  *(uint64_t*)_812 = _878;
  *(uint64_t*)_814 = _880;
  goto _1484;

_1484:
  _881 = *(uint64_t*)_611;
  switch ((((uint32_t)(llvm_lshr_u64(_881, 32))))) {
  default:
    goto _1492;
  case 536870912u:
    goto _1493;
  case 150994944u:
    goto _1493;
  }

_1492:
  julia_emit_20((&_546), _531, _532, 1, 1);
  _604__PHI_TEMPORARY = (&_546);   /* for PHI node */
  goto _1420;

_1493:
  _882 = *(void**)_532;
  _883 = ((&((uint8_t*)_882)[((int64_t)16)]));
  _884 = *(uint64_t*)_883;
  _885 = ((&((uint8_t*)_882)[((int64_t)8)]));
  _886 = *(uint64_t*)_885;
  if ((((int64_t)_886) > ((int64_t)_884))) {
    goto _1494;
  } else {
    _871__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1487;
  }

_1494:
  _887 = *(void**)_882;
  _888 = *(uint8_t*)(((&((uint8_t*)_887)[((int64_t)_884)])));
  *(uint64_t*)_883 = (llvm_add_u64(_884, 1));
  _889 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_888)), 0);
  _890 = llvm_sub_u8(32, (llvm_shl_u8(_889, 3)));
  _891 = (((uint32_t)(uint8_t)_888)) << 24;
  if ((((uint8_t)_890) > ((uint8_t)((uint8_t)16)))) {
    _871__PHI_TEMPORARY = _891;   /* for PHI node */
    goto _1487;
  } else {
    _892__PHI_TEMPORARY = 16;   /* for PHI node */
    _893__PHI_TEMPORARY = _891;   /* for PHI node */
    goto _1495;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1495:
  _892 = _892__PHI_TEMPORARY;
  _893 = _893__PHI_TEMPORARY;
  if (((((int64_t)_892) < ((int64_t)UINT64_C(0))) | (((uint64_t)_892) < ((uint64_t)(((uint64_t)(uint8_t)_890)))))) {
    _871__PHI_TEMPORARY = _893;   /* for PHI node */
    goto _1487;
  } else {
    goto _1496;
  }

_1496:
  _894 = *(uint64_t*)_883;
  _895 = *(uint64_t*)_885;
  if ((((int64_t)_895) > ((int64_t)_894))) {
    goto _1497;
  } else {
    _871__PHI_TEMPORARY = _893;   /* for PHI node */
    goto _1487;
  }

_1497:
  _896 = *(void**)_882;
  _897 = *(uint8_t*)(((&((uint8_t*)_896)[((int64_t)_894)])));
  if ((((int8_t)_897) > ((int8_t)((uint8_t)-65)))) {
    _871__PHI_TEMPORARY = _893;   /* for PHI node */
    goto _1487;
  } else {
    goto _1498;
  }

_1498:
  _898 = llvm_select_u32((((int64_t)_894) < ((int64_t)_895)), (((uint32_t)(uint8_t)_897)), 0);
  _899 = *(uint64_t*)_883;
  *(uint64_t*)_883 = (llvm_add_u64(_899, 1));
  _900 = llvm_neg_u64(_892);
  _901 = _893 | (llvm_select_u32((((int64_t)_892) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_900) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_898, (((uint32_t)_900)))))), (llvm_select_u32((((uint64_t)_892) > ((uint64_t)UINT64_C(31))), 0, (_898 << (((uint32_t)_892)))))));
  _902 = llvm_add_u64(_892, -8);
  _892__PHI_TEMPORARY = _902;   /* for PHI node */
  _893__PHI_TEMPORARY = _901;   /* for PHI node */
  goto _1495;

  } while (1); /* end of syntactic loop '' */
_1468:
  if ((_745 == _560)) {
    goto _1499;
  } else {
    goto _1500;
  }

_1499:
  _903 = ((bool)_558&1u);
  _904 = *(uint64_t*)_611;
  if (_903) {
    goto _1501;
  } else {
    _906__PHI_TEMPORARY = _904;   /* for PHI node */
    goto _1502;
  }

_1501:
  _905 = *(uint64_t*)_613;
  if ((llvm_select_bool((_560 == (((uint32_t)(llvm_lshr_u64(_904, 32))))), (_560 == (((uint32_t)_905))), 0))) {
    _906__PHI_TEMPORARY = _905;   /* for PHI node */
    goto _1502;
  } else {
    goto _1500;
  }

_1502:
  _906 = _906__PHI_TEMPORARY;
  if ((_560 == (((uint32_t)(llvm_lshr_u64(_906, 32)))))) {
    goto _1503;
  } else {
    goto _1500;
  }

_1503:
  _907 = *(uint16_t*)_616;
  if ((llvm_select_bool((_560 == 654311424u), (_907 == ((uint16_t)709)), 0))) {
    goto _1504;
  } else {
    goto _1505;
  }

_1504:
  _908 = *(uint64_t*)_613;
  if (((_908 & INT64_C(4294967295)) == UINT64_C(654311424))) {
    goto _1506;
  } else {
    goto _1505;
  }

_1506:
  _909 = *(void**)_532;
  _910 = ((&((uint8_t*)_909)[((int64_t)16)]));
  _911 = *(uint64_t*)_910;
  _912 = ((&((uint8_t*)_909)[((int64_t)8)]));
  _913 = *(uint64_t*)_912;
  if ((((int64_t)_913) > ((int64_t)_911))) {
    goto _1507;
  } else {
    _930__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1508;
  }

_1507:
  _914 = *(void**)_909;
  _915 = *(uint8_t*)(((&((uint8_t*)_914)[((int64_t)_911)])));
  *(uint64_t*)_910 = (llvm_add_u64(_911, 1));
  _916 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_915)), 0);
  _917 = llvm_sub_u8(32, (llvm_shl_u8(_916, 3)));
  _918 = (((uint32_t)(uint8_t)_915)) << 24;
  if ((((uint8_t)_917) > ((uint8_t)((uint8_t)16)))) {
    _930__PHI_TEMPORARY = _918;   /* for PHI node */
    goto _1508;
  } else {
    _919__PHI_TEMPORARY = 16;   /* for PHI node */
    _920__PHI_TEMPORARY = _918;   /* for PHI node */
    goto _1509;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1509:
  _919 = _919__PHI_TEMPORARY;
  _920 = _920__PHI_TEMPORARY;
  if (((((int64_t)_919) < ((int64_t)UINT64_C(0))) | (((uint64_t)_919) < ((uint64_t)(((uint64_t)(uint8_t)_917)))))) {
    _930__PHI_TEMPORARY = _920;   /* for PHI node */
    goto _1508;
  } else {
    goto _1510;
  }

_1510:
  _921 = *(uint64_t*)_910;
  _922 = *(uint64_t*)_912;
  if ((((int64_t)_922) > ((int64_t)_921))) {
    goto _1511;
  } else {
    _930__PHI_TEMPORARY = _920;   /* for PHI node */
    goto _1508;
  }

_1511:
  _923 = *(void**)_909;
  _924 = *(uint8_t*)(((&((uint8_t*)_923)[((int64_t)_921)])));
  if ((((int8_t)_924) > ((int8_t)((uint8_t)-65)))) {
    _930__PHI_TEMPORARY = _920;   /* for PHI node */
    goto _1508;
  } else {
    goto _1512;
  }

_1512:
  _925 = llvm_select_u32((((int64_t)_921) < ((int64_t)_922)), (((uint32_t)(uint8_t)_924)), 0);
  _926 = *(uint64_t*)_910;
  *(uint64_t*)_910 = (llvm_add_u64(_926, 1));
  _927 = llvm_neg_u64(_919);
  _928 = _920 | (llvm_select_u32((((int64_t)_919) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_927) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_925, (((uint32_t)_927)))))), (llvm_select_u32((((uint64_t)_919) > ((uint64_t)UINT64_C(31))), 0, (_925 << (((uint32_t)_919)))))));
  _929 = llvm_add_u64(_919, -8);
  _919__PHI_TEMPORARY = _929;   /* for PHI node */
  _920__PHI_TEMPORARY = _928;   /* for PHI node */
  goto _1509;

  } while (1); /* end of syntactic loop '' */
_1508:
  _930 = _930__PHI_TEMPORARY;
  _931 = *(uint64_t*)_611;
  _932 = *(uint64_t*)_613;
  _933 = jsyn_cbe_fshl_i64(_932, _931, 32);
  _934 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_930)), _932, 32);
  *(uint64_t*)_611 = _933;
  *(uint64_t*)_613 = _934;
  _935 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _936 = *(uint64_t*)_935;
  _937 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _938 = *(uint64_t*)_937;
  _939 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _940 = *(uint64_t*)_939;
  _941 = *(void**)_532;
  _942 = *(uint64_t*)(((&((uint8_t*)_941)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_532)[((int64_t)48)]))) = _936;
  *(uint64_t*)_935 = _938;
  *(uint64_t*)_937 = _940;
  *(uint64_t*)_939 = _942;
  julia_emit_20((&_547), _531, _532, 51, 1);
  _604__PHI_TEMPORARY = (&_547);   /* for PHI node */
  goto _1420;

_1505:
  _943 = *(void**)_553;
  _944 = ((&((uint8_t*)_943)[((int64_t)16)]));
  _945 = *(uint64_t*)_944;
  if ((_945 == UINT64_C(0))) {
    goto _1513;
  } else {
    goto _1514;
  }

_1513:
  julia__throw_argerror_25(_531, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)456)]))));
  __builtin_unreachable();

_1514:
  _946 = llvm_add_u64(_945, -1);
  _947__PHI_TEMPORARY = _945;   /* for PHI node */
  goto _1515;

  do {     /* Syntactic loop '' to make GCC happy */
_1515:
  _947 = _947__PHI_TEMPORARY;
  if ((_947 == _945)) {
    goto _1516;
  } else {
    _947__PHI_TEMPORARY = (llvm_add_u64(_947, 1));   /* for PHI node */
    goto _1515;
  }

  } while (1); /* end of syntactic loop '' */
_1516:
  *(uint64_t*)_944 = _946;
  _948 = *(void**)_532;
  _949 = ((&((uint8_t*)_948)[((int64_t)16)]));
  _950 = *(uint64_t*)_949;
  _951 = ((&((uint8_t*)_948)[((int64_t)8)]));
  _952 = *(uint64_t*)_951;
  if ((((int64_t)_952) > ((int64_t)_950))) {
    goto _1517;
  } else {
    _969__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1518;
  }

_1517:
  _953 = *(void**)_948;
  _954 = *(uint8_t*)(((&((uint8_t*)_953)[((int64_t)_950)])));
  *(uint64_t*)_949 = (llvm_add_u64(_950, 1));
  _955 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_954)), 0);
  _956 = llvm_sub_u8(32, (llvm_shl_u8(_955, 3)));
  _957 = (((uint32_t)(uint8_t)_954)) << 24;
  if ((((uint8_t)_956) > ((uint8_t)((uint8_t)16)))) {
    _969__PHI_TEMPORARY = _957;   /* for PHI node */
    goto _1518;
  } else {
    _958__PHI_TEMPORARY = 16;   /* for PHI node */
    _959__PHI_TEMPORARY = _957;   /* for PHI node */
    goto _1519;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1519:
  _958 = _958__PHI_TEMPORARY;
  _959 = _959__PHI_TEMPORARY;
  if (((((int64_t)_958) < ((int64_t)UINT64_C(0))) | (((uint64_t)_958) < ((uint64_t)(((uint64_t)(uint8_t)_956)))))) {
    _969__PHI_TEMPORARY = _959;   /* for PHI node */
    goto _1518;
  } else {
    goto _1520;
  }

_1520:
  _960 = *(uint64_t*)_949;
  _961 = *(uint64_t*)_951;
  if ((((int64_t)_961) > ((int64_t)_960))) {
    goto _1521;
  } else {
    _969__PHI_TEMPORARY = _959;   /* for PHI node */
    goto _1518;
  }

_1521:
  _962 = *(void**)_948;
  _963 = *(uint8_t*)(((&((uint8_t*)_962)[((int64_t)_960)])));
  if ((((int8_t)_963) > ((int8_t)((uint8_t)-65)))) {
    _969__PHI_TEMPORARY = _959;   /* for PHI node */
    goto _1518;
  } else {
    goto _1522;
  }

_1522:
  _964 = llvm_select_u32((((int64_t)_960) < ((int64_t)_961)), (((uint32_t)(uint8_t)_963)), 0);
  _965 = *(uint64_t*)_949;
  *(uint64_t*)_949 = (llvm_add_u64(_965, 1));
  _966 = llvm_neg_u64(_958);
  _967 = _959 | (llvm_select_u32((((int64_t)_958) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_966) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_964, (((uint32_t)_966)))))), (llvm_select_u32((((uint64_t)_958) > ((uint64_t)UINT64_C(31))), 0, (_964 << (((uint32_t)_958)))))));
  _968 = llvm_add_u64(_958, -8);
  _958__PHI_TEMPORARY = _968;   /* for PHI node */
  _959__PHI_TEMPORARY = _967;   /* for PHI node */
  goto _1519;

  } while (1); /* end of syntactic loop '' */
_1518:
  _969 = _969__PHI_TEMPORARY;
  _970 = *(uint64_t*)_611;
  _971 = *(uint64_t*)_613;
  _972 = jsyn_cbe_fshl_i64(_971, _970, 32);
  _973 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_969)), _971, 32);
  *(uint64_t*)_611 = _972;
  *(uint64_t*)_613 = _973;
  _974 = ((&((uint8_t*)_532)[((int64_t)48)]));
  _975 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _976 = *(uint64_t*)_975;
  _977 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _978 = *(uint64_t*)_977;
  _979 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _980 = *(uint64_t*)_979;
  _981 = *(void**)_532;
  _982 = *(uint64_t*)(((&((uint8_t*)_981)[((int64_t)16)])));
  *(uint64_t*)_974 = _976;
  *(uint64_t*)_975 = _978;
  *(uint64_t*)_977 = _980;
  *(uint64_t*)_979 = _982;
  if (_903) {
    goto _1523;
  } else {
    goto _1524;
  }

_1523:
  _983 = *(void**)_532;
  _984 = ((&((uint8_t*)_983)[((int64_t)16)]));
  _985 = *(uint64_t*)_984;
  _986 = ((&((uint8_t*)_983)[((int64_t)8)]));
  _987 = *(uint64_t*)_986;
  if ((((int64_t)_987) > ((int64_t)_985))) {
    goto _1525;
  } else {
    _1004__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1526;
  }

_1525:
  _988 = *(void**)_983;
  _989 = *(uint8_t*)(((&((uint8_t*)_988)[((int64_t)_985)])));
  *(uint64_t*)_984 = (llvm_add_u64(_985, 1));
  _990 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_989)), 0);
  _991 = llvm_sub_u8(32, (llvm_shl_u8(_990, 3)));
  _992 = (((uint32_t)(uint8_t)_989)) << 24;
  if ((((uint8_t)_991) > ((uint8_t)((uint8_t)16)))) {
    _1004__PHI_TEMPORARY = _992;   /* for PHI node */
    goto _1526;
  } else {
    _993__PHI_TEMPORARY = 16;   /* for PHI node */
    _994__PHI_TEMPORARY = _992;   /* for PHI node */
    goto _1527;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1527:
  _993 = _993__PHI_TEMPORARY;
  _994 = _994__PHI_TEMPORARY;
  if (((((int64_t)_993) < ((int64_t)UINT64_C(0))) | (((uint64_t)_993) < ((uint64_t)(((uint64_t)(uint8_t)_991)))))) {
    _1004__PHI_TEMPORARY = _994;   /* for PHI node */
    goto _1526;
  } else {
    goto _1528;
  }

_1528:
  _995 = *(uint64_t*)_984;
  _996 = *(uint64_t*)_986;
  if ((((int64_t)_996) > ((int64_t)_995))) {
    goto _1529;
  } else {
    _1004__PHI_TEMPORARY = _994;   /* for PHI node */
    goto _1526;
  }

_1529:
  _997 = *(void**)_983;
  _998 = *(uint8_t*)(((&((uint8_t*)_997)[((int64_t)_995)])));
  if ((((int8_t)_998) > ((int8_t)((uint8_t)-65)))) {
    _1004__PHI_TEMPORARY = _994;   /* for PHI node */
    goto _1526;
  } else {
    goto _1530;
  }

_1530:
  _999 = llvm_select_u32((((int64_t)_995) < ((int64_t)_996)), (((uint32_t)(uint8_t)_998)), 0);
  _1000 = *(uint64_t*)_984;
  *(uint64_t*)_984 = (llvm_add_u64(_1000, 1));
  _1001 = llvm_neg_u64(_993);
  _1002 = _994 | (llvm_select_u32((((int64_t)_993) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1001) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_999, (((uint32_t)_1001)))))), (llvm_select_u32((((uint64_t)_993) > ((uint64_t)UINT64_C(31))), 0, (_999 << (((uint32_t)_993)))))));
  _1003 = llvm_add_u64(_993, -8);
  _993__PHI_TEMPORARY = _1003;   /* for PHI node */
  _994__PHI_TEMPORARY = _1002;   /* for PHI node */
  goto _1527;

  } while (1); /* end of syntactic loop '' */
_1526:
  _1004 = _1004__PHI_TEMPORARY;
  _1005 = *(uint64_t*)_611;
  _1006 = *(uint64_t*)_613;
  _1007 = jsyn_cbe_fshl_i64(_1006, _1005, 32);
  _1008 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1004)), _1006, 32);
  *(uint64_t*)_611 = _1007;
  *(uint64_t*)_613 = _1008;
  _1009 = *(uint64_t*)_975;
  _1010 = *(uint64_t*)_977;
  _1011 = *(uint64_t*)_979;
  _1012 = *(void**)_532;
  _1013 = *(uint64_t*)(((&((uint8_t*)_1012)[((int64_t)16)])));
  *(uint64_t*)_974 = _1009;
  *(uint64_t*)_975 = _1010;
  *(uint64_t*)_977 = _1011;
  *(uint64_t*)_979 = _1013;
  _1014 = *(void**)_532;
  _1015 = ((&((uint8_t*)_1014)[((int64_t)16)]));
  _1016 = *(uint64_t*)_1015;
  _1017 = ((&((uint8_t*)_1014)[((int64_t)8)]));
  _1018 = *(uint64_t*)_1017;
  if ((((int64_t)_1018) > ((int64_t)_1016))) {
    goto _1531;
  } else {
    _1035__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1532;
  }

_1531:
  _1019 = *(void**)_1014;
  _1020 = *(uint8_t*)(((&((uint8_t*)_1019)[((int64_t)_1016)])));
  *(uint64_t*)_1015 = (llvm_add_u64(_1016, 1));
  _1021 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1020)), 0);
  _1022 = llvm_sub_u8(32, (llvm_shl_u8(_1021, 3)));
  _1023 = (((uint32_t)(uint8_t)_1020)) << 24;
  if ((((uint8_t)_1022) > ((uint8_t)((uint8_t)16)))) {
    _1035__PHI_TEMPORARY = _1023;   /* for PHI node */
    goto _1532;
  } else {
    _1024__PHI_TEMPORARY = 16;   /* for PHI node */
    _1025__PHI_TEMPORARY = _1023;   /* for PHI node */
    goto _1533;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1533:
  _1024 = _1024__PHI_TEMPORARY;
  _1025 = _1025__PHI_TEMPORARY;
  if (((((int64_t)_1024) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1024) < ((uint64_t)(((uint64_t)(uint8_t)_1022)))))) {
    _1035__PHI_TEMPORARY = _1025;   /* for PHI node */
    goto _1532;
  } else {
    goto _1534;
  }

_1534:
  _1026 = *(uint64_t*)_1015;
  _1027 = *(uint64_t*)_1017;
  if ((((int64_t)_1027) > ((int64_t)_1026))) {
    goto _1535;
  } else {
    _1035__PHI_TEMPORARY = _1025;   /* for PHI node */
    goto _1532;
  }

_1535:
  _1028 = *(void**)_1014;
  _1029 = *(uint8_t*)(((&((uint8_t*)_1028)[((int64_t)_1026)])));
  if ((((int8_t)_1029) > ((int8_t)((uint8_t)-65)))) {
    _1035__PHI_TEMPORARY = _1025;   /* for PHI node */
    goto _1532;
  } else {
    goto _1536;
  }

_1536:
  _1030 = llvm_select_u32((((int64_t)_1026) < ((int64_t)_1027)), (((uint32_t)(uint8_t)_1029)), 0);
  _1031 = *(uint64_t*)_1015;
  *(uint64_t*)_1015 = (llvm_add_u64(_1031, 1));
  _1032 = llvm_neg_u64(_1024);
  _1033 = _1025 | (llvm_select_u32((((int64_t)_1024) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1032) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1030, (((uint32_t)_1032)))))), (llvm_select_u32((((uint64_t)_1024) > ((uint64_t)UINT64_C(31))), 0, (_1030 << (((uint32_t)_1024)))))));
  _1034 = llvm_add_u64(_1024, -8);
  _1024__PHI_TEMPORARY = _1034;   /* for PHI node */
  _1025__PHI_TEMPORARY = _1033;   /* for PHI node */
  goto _1533;

  } while (1); /* end of syntactic loop '' */
_1532:
  _1035 = _1035__PHI_TEMPORARY;
  _1036 = *(uint64_t*)_611;
  _1037 = *(uint64_t*)_613;
  _1038 = jsyn_cbe_fshl_i64(_1037, _1036, 32);
  _1039 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1035)), _1037, 32);
  *(uint64_t*)_611 = _1038;
  *(uint64_t*)_613 = _1039;
  _1040 = *(uint64_t*)_975;
  _1041 = *(uint64_t*)_977;
  _1042 = *(uint64_t*)_979;
  _1043 = *(void**)_532;
  _1044 = *(uint64_t*)(((&((uint8_t*)_1043)[((int64_t)16)])));
  *(uint64_t*)_974 = _1040;
  *(uint64_t*)_975 = _1041;
  *(uint64_t*)_977 = _1042;
  *(uint64_t*)_979 = _1044;
  julia_emit_20((&_548), _531, _532, (llvm_select_u16((_560 == 570425344u), 63, 65)), 1);
  _604__PHI_TEMPORARY = (&_548);   /* for PHI node */
  goto _1420;

_1524:
  julia_emit_20((&_549), _531, _532, (llvm_select_u16((_560 == 570425344u), 62, (llvm_select_u16((_560 == 1610612736u), 64, 709)))), 0);
  _604__PHI_TEMPORARY = (&_549);   /* for PHI node */
  goto _1420;

_1500:
  if (_746) {
    _1045__PHI_TEMPORARY = 1;   /* for PHI node */
    _1046__PHI_TEMPORARY = 0;   /* for PHI node */
    _1047__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1537;
  } else {
    _1237__PHI_TEMPORARY = 1;   /* for PHI node */
    _1238__PHI_TEMPORARY = 0;   /* for PHI node */
    _1239__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1538;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1537:
  _1045 = _1045__PHI_TEMPORARY;
  _1046 = _1046__PHI_TEMPORARY;
  _1047 = _1047__PHI_TEMPORARY;
  _1048 = *(uint64_t*)_611;
  _1049 = llvm_lshr_u64(_1048, 32);
  _1050 = ((uint32_t)_1049);
  _1051 = ((bool)_558&1u);
  if (_1051) {
    goto _1539;
  } else {
    _1054__PHI_TEMPORARY = _1050;   /* for PHI node */
    goto _1540;
  }

_1539:
  _1052 = *(uint64_t*)_613;
  if ((llvm_select_bool((_560 == _1050), (_560 == (((uint32_t)_1052))), 0))) {
    goto _1541;
  } else {
    goto _1542;
  }

_1542:
  if ((_1049 == UINT64_C(4294967295))) {
    _1398__PHI_TEMPORARY = _1045;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1046;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1047;   /* for PHI node */
    goto _1543;
  } else {
    goto _1544;
  }

_1541:
  _1053 = ((uint32_t)(llvm_lshr_u64(_1052, 32)));
  _1054__PHI_TEMPORARY = _1053;   /* for PHI node */
  goto _1540;

_1540:
  _1054 = _1054__PHI_TEMPORARY;
  if ((llvm_select_bool((_560 == _1054), 1, (_1049 == UINT64_C(4294967295))))) {
    _1398__PHI_TEMPORARY = _1045;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1046;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1047;   /* for PHI node */
    goto _1543;
  } else {
    goto _1544;
  }

_1544:
  if (_1051) {
    goto _1545;
  } else {
    goto _1546;
  }

_1545:
  switch ((((uint32_t)_1049))) {
  default:
    goto _1546;
  case 218103808u:
    goto _1547;
  case 167772160u:
    goto _1547;
  }

_1546:
  _1124 = *(void**)_532;
  _1125 = ((&((uint8_t*)_1124)[((int64_t)16)]));
  _1126 = *(uint64_t*)_1125;
  _1127 = ((&((uint8_t*)_1124)[((int64_t)8)]));
  _1128 = *(uint64_t*)_1127;
  if ((((int64_t)_1128) > ((int64_t)_1126))) {
    goto _1548;
  } else {
    _1145__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1549;
  }

_1548:
  _1129 = *(void**)_1124;
  _1130 = *(uint8_t*)(((&((uint8_t*)_1129)[((int64_t)_1126)])));
  *(uint64_t*)_1125 = (llvm_add_u64(_1126, 1));
  _1131 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1130)), 0);
  _1132 = llvm_sub_u8(32, (llvm_shl_u8(_1131, 3)));
  _1133 = (((uint32_t)(uint8_t)_1130)) << 24;
  if ((((uint8_t)_1132) > ((uint8_t)((uint8_t)16)))) {
    _1145__PHI_TEMPORARY = _1133;   /* for PHI node */
    goto _1549;
  } else {
    _1134__PHI_TEMPORARY = 16;   /* for PHI node */
    _1135__PHI_TEMPORARY = _1133;   /* for PHI node */
    goto _1550;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1550:
  _1134 = _1134__PHI_TEMPORARY;
  _1135 = _1135__PHI_TEMPORARY;
  if (((((int64_t)_1134) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1134) < ((uint64_t)(((uint64_t)(uint8_t)_1132)))))) {
    _1145__PHI_TEMPORARY = _1135;   /* for PHI node */
    goto _1549;
  } else {
    goto _1551;
  }

_1551:
  _1136 = *(uint64_t*)_1125;
  _1137 = *(uint64_t*)_1127;
  if ((((int64_t)_1137) > ((int64_t)_1136))) {
    goto _1552;
  } else {
    _1145__PHI_TEMPORARY = _1135;   /* for PHI node */
    goto _1549;
  }

_1552:
  _1138 = *(void**)_1124;
  _1139 = *(uint8_t*)(((&((uint8_t*)_1138)[((int64_t)_1136)])));
  if ((((int8_t)_1139) > ((int8_t)((uint8_t)-65)))) {
    _1145__PHI_TEMPORARY = _1135;   /* for PHI node */
    goto _1549;
  } else {
    goto _1553;
  }

_1553:
  _1140 = llvm_select_u32((((int64_t)_1136) < ((int64_t)_1137)), (((uint32_t)(uint8_t)_1139)), 0);
  _1141 = *(uint64_t*)_1125;
  *(uint64_t*)_1125 = (llvm_add_u64(_1141, 1));
  _1142 = llvm_neg_u64(_1134);
  _1143 = _1135 | (llvm_select_u32((((int64_t)_1134) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1142) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1140, (((uint32_t)_1142)))))), (llvm_select_u32((((uint64_t)_1134) > ((uint64_t)UINT64_C(31))), 0, (_1140 << (((uint32_t)_1134)))))));
  _1144 = llvm_add_u64(_1134, -8);
  _1134__PHI_TEMPORARY = _1144;   /* for PHI node */
  _1135__PHI_TEMPORARY = _1143;   /* for PHI node */
  goto _1550;

  } while (1); /* end of syntactic loop '' */
_1549:
  _1145 = _1145__PHI_TEMPORARY;
  _1146 = *(uint64_t*)_611;
  _1147 = *(uint64_t*)_613;
  _1148 = jsyn_cbe_fshl_i64(_1147, _1146, 32);
  _1149 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1145)), _1147, 32);
  *(uint64_t*)_611 = _1148;
  *(uint64_t*)_613 = _1149;
  _1150 = ((&((uint8_t*)_532)[((int64_t)48)]));
  _1151 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _1152 = *(uint64_t*)_1151;
  _1153 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _1154 = *(uint64_t*)_1153;
  _1155 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _1156 = *(uint64_t*)_1155;
  _1157 = *(void**)_532;
  _1158 = *(uint64_t*)(((&((uint8_t*)_1157)[((int64_t)16)])));
  *(uint64_t*)_1150 = _1152;
  *(uint64_t*)_1151 = _1154;
  *(uint64_t*)_1153 = _1156;
  *(uint64_t*)_1155 = _1158;
  _1159 = *(uint64_t*)_611;
  _1160 = ((uint32_t)_1159);
  switch (_1160) {
  default:
    goto _1554;
  case 1543503872u:
    _1161__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1555;
  case 167772160u:
    _1231__PHI_TEMPORARY = 0;   /* for PHI node */
    _1232__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1556;
  case 3800082944u:
    goto _1557;
  case 3800083200u:
    goto _1557;
  case 3800083712u:
    goto _1557;
  case 3800083968u:
    goto _1557;
  case 3800083456u:
    goto _1558;
  case 3800147456u:
    goto _1559;
  case 3800147712u:
    goto _1559;
  case 3800147968u:
    goto _1559;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1555:
  _1161 = _1161__PHI_TEMPORARY;
  _1162 = *(uint64_t*)_611;
  _1163 = llvm_lshr_u64(_1162, 32);
  if ((_1163 == UINT64_C(1543503872))) {
    goto _1560;
  } else {
    goto _1561;
  }

_1560:
  _1164 = *(void**)_532;
  _1165 = ((&((uint8_t*)_1164)[((int64_t)16)]));
  _1166 = *(uint64_t*)_1165;
  _1167 = ((&((uint8_t*)_1164)[((int64_t)8)]));
  _1168 = *(uint64_t*)_1167;
  if ((((int64_t)_1168) > ((int64_t)_1166))) {
    goto _1562;
  } else {
    _1185__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1563;
  }

_1562:
  _1169 = *(void**)_1164;
  _1170 = *(uint8_t*)(((&((uint8_t*)_1169)[((int64_t)_1166)])));
  *(uint64_t*)_1165 = (llvm_add_u64(_1166, 1));
  _1171 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1170)), 0);
  _1172 = llvm_sub_u8(32, (llvm_shl_u8(_1171, 3)));
  _1173 = (((uint32_t)(uint8_t)_1170)) << 24;
  if ((((uint8_t)_1172) > ((uint8_t)((uint8_t)16)))) {
    _1185__PHI_TEMPORARY = _1173;   /* for PHI node */
    goto _1563;
  } else {
    _1174__PHI_TEMPORARY = 16;   /* for PHI node */
    _1175__PHI_TEMPORARY = _1173;   /* for PHI node */
    goto _1564;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1564:
  _1174 = _1174__PHI_TEMPORARY;
  _1175 = _1175__PHI_TEMPORARY;
  if (((((int64_t)_1174) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1174) < ((uint64_t)(((uint64_t)(uint8_t)_1172)))))) {
    _1185__PHI_TEMPORARY = _1175;   /* for PHI node */
    goto _1563;
  } else {
    goto _1565;
  }

_1565:
  _1176 = *(uint64_t*)_1165;
  _1177 = *(uint64_t*)_1167;
  if ((((int64_t)_1177) > ((int64_t)_1176))) {
    goto _1566;
  } else {
    _1185__PHI_TEMPORARY = _1175;   /* for PHI node */
    goto _1563;
  }

_1566:
  _1178 = *(void**)_1164;
  _1179 = *(uint8_t*)(((&((uint8_t*)_1178)[((int64_t)_1176)])));
  if ((((int8_t)_1179) > ((int8_t)((uint8_t)-65)))) {
    _1185__PHI_TEMPORARY = _1175;   /* for PHI node */
    goto _1563;
  } else {
    goto _1567;
  }

_1567:
  _1180 = llvm_select_u32((((int64_t)_1176) < ((int64_t)_1177)), (((uint32_t)(uint8_t)_1179)), 0);
  _1181 = *(uint64_t*)_1165;
  *(uint64_t*)_1165 = (llvm_add_u64(_1181, 1));
  _1182 = llvm_neg_u64(_1174);
  _1183 = _1175 | (llvm_select_u32((((int64_t)_1174) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1182) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1180, (((uint32_t)_1182)))))), (llvm_select_u32((((uint64_t)_1174) > ((uint64_t)UINT64_C(31))), 0, (_1180 << (((uint32_t)_1174)))))));
  _1184 = llvm_add_u64(_1174, -8);
  _1174__PHI_TEMPORARY = _1184;   /* for PHI node */
  _1175__PHI_TEMPORARY = _1183;   /* for PHI node */
  goto _1564;

  } while (1); /* end of syntactic loop '' */
_1563:
  _1185 = _1185__PHI_TEMPORARY;
  _1186 = *(uint64_t*)_611;
  _1187 = *(uint64_t*)_613;
  _1188 = jsyn_cbe_fshl_i64(_1187, _1186, 32);
  _1189 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1185)), _1187, 32);
  *(uint64_t*)_611 = _1188;
  *(uint64_t*)_613 = _1189;
  _1190 = *(uint64_t*)_1151;
  _1191 = *(uint64_t*)_1153;
  _1192 = *(uint64_t*)_1155;
  _1193 = *(void**)_532;
  _1194 = *(uint64_t*)(((&((uint8_t*)_1193)[((int64_t)16)])));
  *(uint64_t*)_1150 = _1190;
  *(uint64_t*)_1151 = _1191;
  *(uint64_t*)_1153 = _1192;
  *(uint64_t*)_1155 = _1194;
  _1195 = llvm_add_u64(_1161, 1);
  _1161__PHI_TEMPORARY = _1195;   /* for PHI node */
  goto _1555;

  } while (1); /* end of syntactic loop '' */
_1561:
  if ((llvm_select_bool((_560 != (((uint32_t)_1163))), 1, ((_1161 & 1) == UINT64_C(0))))) {
    goto _1568;
  } else {
    goto _1569;
  }

_1569:
  _1196 = *(void**)_532;
  _1197 = ((&((uint8_t*)_1196)[((int64_t)16)]));
  _1198 = *(uint64_t*)_1197;
  _1199 = ((&((uint8_t*)_1196)[((int64_t)8)]));
  _1200 = *(uint64_t*)_1199;
  if ((((int64_t)_1200) > ((int64_t)_1198))) {
    goto _1570;
  } else {
    _1217__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1571;
  }

_1570:
  _1201 = *(void**)_1196;
  _1202 = *(uint8_t*)(((&((uint8_t*)_1201)[((int64_t)_1198)])));
  *(uint64_t*)_1197 = (llvm_add_u64(_1198, 1));
  _1203 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1202)), 0);
  _1204 = llvm_sub_u8(32, (llvm_shl_u8(_1203, 3)));
  _1205 = (((uint32_t)(uint8_t)_1202)) << 24;
  if ((((uint8_t)_1204) > ((uint8_t)((uint8_t)16)))) {
    _1217__PHI_TEMPORARY = _1205;   /* for PHI node */
    goto _1571;
  } else {
    _1206__PHI_TEMPORARY = 16;   /* for PHI node */
    _1207__PHI_TEMPORARY = _1205;   /* for PHI node */
    goto _1572;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1572:
  _1206 = _1206__PHI_TEMPORARY;
  _1207 = _1207__PHI_TEMPORARY;
  if (((((int64_t)_1206) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1206) < ((uint64_t)(((uint64_t)(uint8_t)_1204)))))) {
    _1217__PHI_TEMPORARY = _1207;   /* for PHI node */
    goto _1571;
  } else {
    goto _1573;
  }

_1573:
  _1208 = *(uint64_t*)_1197;
  _1209 = *(uint64_t*)_1199;
  if ((((int64_t)_1209) > ((int64_t)_1208))) {
    goto _1574;
  } else {
    _1217__PHI_TEMPORARY = _1207;   /* for PHI node */
    goto _1571;
  }

_1574:
  _1210 = *(void**)_1196;
  _1211 = *(uint8_t*)(((&((uint8_t*)_1210)[((int64_t)_1208)])));
  if ((((int8_t)_1211) > ((int8_t)((uint8_t)-65)))) {
    _1217__PHI_TEMPORARY = _1207;   /* for PHI node */
    goto _1571;
  } else {
    goto _1575;
  }

_1575:
  _1212 = llvm_select_u32((((int64_t)_1208) < ((int64_t)_1209)), (((uint32_t)(uint8_t)_1211)), 0);
  _1213 = *(uint64_t*)_1197;
  *(uint64_t*)_1197 = (llvm_add_u64(_1213, 1));
  _1214 = llvm_neg_u64(_1206);
  _1215 = _1207 | (llvm_select_u32((((int64_t)_1206) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1214) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1212, (((uint32_t)_1214)))))), (llvm_select_u32((((uint64_t)_1206) > ((uint64_t)UINT64_C(31))), 0, (_1212 << (((uint32_t)_1206)))))));
  _1216 = llvm_add_u64(_1206, -8);
  _1206__PHI_TEMPORARY = _1216;   /* for PHI node */
  _1207__PHI_TEMPORARY = _1215;   /* for PHI node */
  goto _1572;

  } while (1); /* end of syntactic loop '' */
_1571:
  _1217 = _1217__PHI_TEMPORARY;
  _1218 = *(uint64_t*)_611;
  _1219 = *(uint64_t*)_613;
  _1220 = jsyn_cbe_fshl_i64(_1219, _1218, 32);
  _1221 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1217)), _1219, 32);
  *(uint64_t*)_611 = _1220;
  *(uint64_t*)_613 = _1221;
  _1222 = *(uint64_t*)_1151;
  _1223 = *(uint64_t*)_1153;
  _1224 = *(uint64_t*)_1155;
  _1225 = *(void**)_532;
  _1226 = *(uint64_t*)(((&((uint8_t*)_1225)[((int64_t)16)])));
  *(uint64_t*)_1150 = _1222;
  *(uint64_t*)_1151 = _1223;
  *(uint64_t*)_1153 = _1224;
  *(uint64_t*)_1155 = _1226;
  goto _1568;

_1568:
  switch (_1160) {
  default:
    goto _1554;
  case 167772160u:
    _1231__PHI_TEMPORARY = 0;   /* for PHI node */
    _1232__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1556;
  case 3800082944u:
    goto _1557;
  case 3800083200u:
    goto _1557;
  case 3800083712u:
    goto _1557;
  case 3800083968u:
    goto _1557;
  case 3800083456u:
    goto _1558;
  case 3800147456u:
    goto _1559;
  case 3800147712u:
    goto _1559;
  case 3800147968u:
    goto _1559;
  }

_1559:
  _1229 = llvm_add_u64(_1047, 1);
  _1231__PHI_TEMPORARY = _1046;   /* for PHI node */
  _1232__PHI_TEMPORARY = _1229;   /* for PHI node */
  goto _1556;

_1558:
  _1227 = llvm_add_u64(_1046, -1);
  _1231__PHI_TEMPORARY = _1227;   /* for PHI node */
  _1232__PHI_TEMPORARY = _1047;   /* for PHI node */
  goto _1556;

_1557:
  _1230 = llvm_add_u64(_1046, 1);
  _1231__PHI_TEMPORARY = _1230;   /* for PHI node */
  _1232__PHI_TEMPORARY = _1047;   /* for PHI node */
  goto _1556;

_1554:
  _1228 = llvm_add_u64(_1047, (((int64_t)(bool)0-(_1160 == 3800148224u))));
  _1231__PHI_TEMPORARY = _1046;   /* for PHI node */
  _1232__PHI_TEMPORARY = _1228;   /* for PHI node */
  goto _1556;

_1556:
  _1231 = _1231__PHI_TEMPORARY;
  _1232 = _1232__PHI_TEMPORARY;
  _1233 = llvm_OC_ctlz_OC_i32((_1160 ^ -1), 0);
  _1234 = llvm_OC_cttz_OC_i32(_1160, 0);
  _1235 = _1234 & 56;
  _1236 = _1045 & (((((_1233 != 1u) & (((uint32_t)(llvm_add_u32((_1233 << 3), _1235))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_1234) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_1160 & 12632256) ^ 8421504), _1235)) == 0u)))) & ((((_1160 & -33554432) != 3221225472u) & ((_1160 & -2097152) != 3766484992u)) & ((_1160 & -1048576) != 4034920448u))) & ((((uint32_t)_1160) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_1160, 293568512))) < ((uint32_t)101662656u))));
  _1045__PHI_TEMPORARY = _1236;   /* for PHI node */
  _1046__PHI_TEMPORARY = _1231;   /* for PHI node */
  _1047__PHI_TEMPORARY = _1232;   /* for PHI node */
  goto _1537;

  } while (1); /* end of syntactic loop '' */
_1547:
  _1055 = *(void**)_532;
  _1056 = ((&((uint8_t*)_1055)[((int64_t)16)]));
  _1057 = *(uint64_t*)_1056;
  _1058 = ((&((uint8_t*)_1055)[((int64_t)8)]));
  _1059 = *(uint64_t*)_1058;
  if ((((int64_t)_1059) > ((int64_t)_1057))) {
    goto _1576;
  } else {
    _1076__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1577;
  }

_1576:
  _1060 = *(void**)_1055;
  _1061 = *(uint8_t*)(((&((uint8_t*)_1060)[((int64_t)_1057)])));
  *(uint64_t*)_1056 = (llvm_add_u64(_1057, 1));
  _1062 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1061)), 0);
  _1063 = llvm_sub_u8(32, (llvm_shl_u8(_1062, 3)));
  _1064 = (((uint32_t)(uint8_t)_1061)) << 24;
  if ((((uint8_t)_1063) > ((uint8_t)((uint8_t)16)))) {
    _1076__PHI_TEMPORARY = _1064;   /* for PHI node */
    goto _1577;
  } else {
    _1065__PHI_TEMPORARY = 16;   /* for PHI node */
    _1066__PHI_TEMPORARY = _1064;   /* for PHI node */
    goto _1578;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1578:
  _1065 = _1065__PHI_TEMPORARY;
  _1066 = _1066__PHI_TEMPORARY;
  if (((((int64_t)_1065) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1065) < ((uint64_t)(((uint64_t)(uint8_t)_1063)))))) {
    _1076__PHI_TEMPORARY = _1066;   /* for PHI node */
    goto _1577;
  } else {
    goto _1579;
  }

_1579:
  _1067 = *(uint64_t*)_1056;
  _1068 = *(uint64_t*)_1058;
  if ((((int64_t)_1068) > ((int64_t)_1067))) {
    goto _1580;
  } else {
    _1076__PHI_TEMPORARY = _1066;   /* for PHI node */
    goto _1577;
  }

_1580:
  _1069 = *(void**)_1055;
  _1070 = *(uint8_t*)(((&((uint8_t*)_1069)[((int64_t)_1067)])));
  if ((((int8_t)_1070) > ((int8_t)((uint8_t)-65)))) {
    _1076__PHI_TEMPORARY = _1066;   /* for PHI node */
    goto _1577;
  } else {
    goto _1581;
  }

_1581:
  _1071 = llvm_select_u32((((int64_t)_1067) < ((int64_t)_1068)), (((uint32_t)(uint8_t)_1070)), 0);
  _1072 = *(uint64_t*)_1056;
  *(uint64_t*)_1056 = (llvm_add_u64(_1072, 1));
  _1073 = llvm_neg_u64(_1065);
  _1074 = _1066 | (llvm_select_u32((((int64_t)_1065) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1073) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1071, (((uint32_t)_1073)))))), (llvm_select_u32((((uint64_t)_1065) > ((uint64_t)UINT64_C(31))), 0, (_1071 << (((uint32_t)_1065)))))));
  _1075 = llvm_add_u64(_1065, -8);
  _1065__PHI_TEMPORARY = _1075;   /* for PHI node */
  _1066__PHI_TEMPORARY = _1074;   /* for PHI node */
  goto _1578;

  } while (1); /* end of syntactic loop '' */
_1577:
  _1076 = _1076__PHI_TEMPORARY;
  _1077 = *(uint64_t*)_611;
  _1078 = *(uint64_t*)_613;
  _1079 = jsyn_cbe_fshl_i64(_1078, _1077, 32);
  _1080 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1076)), _1078, 32);
  *(uint64_t*)_611 = _1079;
  *(uint64_t*)_613 = _1080;
  _1081 = ((&((uint8_t*)_532)[((int64_t)48)]));
  _1082 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _1083 = *(uint64_t*)_1082;
  _1084 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _1085 = *(uint64_t*)_1084;
  _1086 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _1087 = *(uint64_t*)_1086;
  _1088 = *(void**)_532;
  _1089 = *(uint64_t*)(((&((uint8_t*)_1088)[((int64_t)16)])));
  *(uint64_t*)_1081 = _1083;
  *(uint64_t*)_1082 = _1085;
  *(uint64_t*)_1084 = _1087;
  *(uint64_t*)_1086 = _1089;
  _1090 = llvm_select_u64((_1049 == UINT64_C(167772160)), 0, _1046);
  _1091 = llvm_select_u64((_1049 == UINT64_C(167772160)), 0, _1047);
  if ((_1049 == UINT64_C(218103808))) {
    goto _1582;
  } else {
    _1398__PHI_TEMPORARY = _1045;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1090;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1091;   /* for PHI node */
    goto _1543;
  }

_1582:
  _1092 = *(uint64_t*)_611;
  if (((_1092 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1583;
  } else {
    _1398__PHI_TEMPORARY = _1045;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1046;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1047;   /* for PHI node */
    goto _1543;
  }

_1583:
  _1093 = *(void**)_532;
  _1094 = ((&((uint8_t*)_1093)[((int64_t)16)]));
  _1095 = *(uint64_t*)_1094;
  _1096 = ((&((uint8_t*)_1093)[((int64_t)8)]));
  _1097 = *(uint64_t*)_1096;
  if ((((int64_t)_1097) > ((int64_t)_1095))) {
    goto _1584;
  } else {
    _1114__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1585;
  }

_1584:
  _1098 = *(void**)_1093;
  _1099 = *(uint8_t*)(((&((uint8_t*)_1098)[((int64_t)_1095)])));
  *(uint64_t*)_1094 = (llvm_add_u64(_1095, 1));
  _1100 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1099)), 0);
  _1101 = llvm_sub_u8(32, (llvm_shl_u8(_1100, 3)));
  _1102 = (((uint32_t)(uint8_t)_1099)) << 24;
  if ((((uint8_t)_1101) > ((uint8_t)((uint8_t)16)))) {
    _1114__PHI_TEMPORARY = _1102;   /* for PHI node */
    goto _1585;
  } else {
    _1103__PHI_TEMPORARY = 16;   /* for PHI node */
    _1104__PHI_TEMPORARY = _1102;   /* for PHI node */
    goto _1586;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1586:
  _1103 = _1103__PHI_TEMPORARY;
  _1104 = _1104__PHI_TEMPORARY;
  if (((((int64_t)_1103) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1103) < ((uint64_t)(((uint64_t)(uint8_t)_1101)))))) {
    _1114__PHI_TEMPORARY = _1104;   /* for PHI node */
    goto _1585;
  } else {
    goto _1587;
  }

_1587:
  _1105 = *(uint64_t*)_1094;
  _1106 = *(uint64_t*)_1096;
  if ((((int64_t)_1106) > ((int64_t)_1105))) {
    goto _1588;
  } else {
    _1114__PHI_TEMPORARY = _1104;   /* for PHI node */
    goto _1585;
  }

_1588:
  _1107 = *(void**)_1093;
  _1108 = *(uint8_t*)(((&((uint8_t*)_1107)[((int64_t)_1105)])));
  if ((((int8_t)_1108) > ((int8_t)((uint8_t)-65)))) {
    _1114__PHI_TEMPORARY = _1104;   /* for PHI node */
    goto _1585;
  } else {
    goto _1589;
  }

_1589:
  _1109 = llvm_select_u32((((int64_t)_1105) < ((int64_t)_1106)), (((uint32_t)(uint8_t)_1108)), 0);
  _1110 = *(uint64_t*)_1094;
  *(uint64_t*)_1094 = (llvm_add_u64(_1110, 1));
  _1111 = llvm_neg_u64(_1103);
  _1112 = _1104 | (llvm_select_u32((((int64_t)_1103) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1111) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1109, (((uint32_t)_1111)))))), (llvm_select_u32((((uint64_t)_1103) > ((uint64_t)UINT64_C(31))), 0, (_1109 << (((uint32_t)_1103)))))));
  _1113 = llvm_add_u64(_1103, -8);
  _1103__PHI_TEMPORARY = _1113;   /* for PHI node */
  _1104__PHI_TEMPORARY = _1112;   /* for PHI node */
  goto _1586;

  } while (1); /* end of syntactic loop '' */
_1585:
  _1114 = _1114__PHI_TEMPORARY;
  _1115 = *(uint64_t*)_611;
  _1116 = *(uint64_t*)_613;
  _1117 = jsyn_cbe_fshl_i64(_1116, _1115, 32);
  _1118 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1114)), _1116, 32);
  *(uint64_t*)_611 = _1117;
  *(uint64_t*)_613 = _1118;
  _1119 = *(uint64_t*)_1082;
  _1120 = *(uint64_t*)_1084;
  _1121 = *(uint64_t*)_1086;
  _1122 = *(void**)_532;
  _1123 = *(uint64_t*)(((&((uint8_t*)_1122)[((int64_t)16)])));
  *(uint64_t*)_1081 = _1119;
  *(uint64_t*)_1082 = _1120;
  *(uint64_t*)_1084 = _1121;
  *(uint64_t*)_1086 = _1123;
  _1398__PHI_TEMPORARY = _1045;   /* for PHI node */
  _1399__PHI_TEMPORARY = 0;   /* for PHI node */
  _1400__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1543;

  do {     /* Syntactic loop '' to make GCC happy */
_1538:
  _1237 = _1237__PHI_TEMPORARY;
  _1238 = _1238__PHI_TEMPORARY;
  _1239 = _1239__PHI_TEMPORARY;
  _1240 = *(uint64_t*)_611;
  _1241 = llvm_lshr_u64(_1240, 32);
  _1242 = ((uint32_t)_1241);
  switch ((((uint32_t)_1241))) {
  default:
    goto _1590;
  case 603979776u:
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1238;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1239;   /* for PHI node */
    goto _1543;
  case 4294967295u:
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1238;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1239;   /* for PHI node */
    goto _1543;
  }

_1590:
  _1243 = ((bool)_558&1u);
  if (_1243) {
    goto _1591;
  } else {
    goto _1592;
  }

_1591:
  switch ((((uint32_t)_1241))) {
  default:
    goto _1592;
  case 218103808u:
    goto _1593;
  case 167772160u:
    goto _1593;
  }

_1592:
  if ((_560 == _1242)) {
    goto _1594;
  } else {
    goto _1595;
  }

_1594:
  _1313 = *(uint64_t*)_611;
  if (_1243) {
    goto _1596;
  } else {
    _1315__PHI_TEMPORARY = _1313;   /* for PHI node */
    goto _1597;
  }

_1596:
  _1314 = *(uint64_t*)_613;
  if ((llvm_select_bool((_560 == (((uint32_t)(llvm_lshr_u64(_1313, 32))))), (_560 == (((uint32_t)_1314))), 0))) {
    _1315__PHI_TEMPORARY = _1314;   /* for PHI node */
    goto _1597;
  } else {
    goto _1595;
  }

_1597:
  _1315 = _1315__PHI_TEMPORARY;
  if ((_560 == (((uint32_t)(llvm_lshr_u64(_1315, 32)))))) {
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1238;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1239;   /* for PHI node */
    goto _1543;
  } else {
    goto _1595;
  }

_1595:
  if ((_1241 == UINT64_C(1543503872))) {
    goto _1598;
  } else {
    goto _1599;
  }

_1598:
  _1316 = *(uint64_t*)_613;
  switch ((((uint32_t)_1316))) {
  default:
    goto _1599;
  case 167772160u:
    goto _1600;
  case 218103808u:
    goto _1601;
  }

_1599:
  _1317 = *(void**)_532;
  _1318 = ((&((uint8_t*)_1317)[((int64_t)16)]));
  _1319 = *(uint64_t*)_1318;
  _1320 = ((&((uint8_t*)_1317)[((int64_t)8)]));
  _1321 = *(uint64_t*)_1320;
  if ((((int64_t)_1321) > ((int64_t)_1319))) {
    goto _1602;
  } else {
    _1338__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1603;
  }

_1602:
  _1322 = *(void**)_1317;
  _1323 = *(uint8_t*)(((&((uint8_t*)_1322)[((int64_t)_1319)])));
  *(uint64_t*)_1318 = (llvm_add_u64(_1319, 1));
  _1324 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1323)), 0);
  _1325 = llvm_sub_u8(32, (llvm_shl_u8(_1324, 3)));
  _1326 = (((uint32_t)(uint8_t)_1323)) << 24;
  if ((((uint8_t)_1325) > ((uint8_t)((uint8_t)16)))) {
    _1338__PHI_TEMPORARY = _1326;   /* for PHI node */
    goto _1603;
  } else {
    _1327__PHI_TEMPORARY = 16;   /* for PHI node */
    _1328__PHI_TEMPORARY = _1326;   /* for PHI node */
    goto _1604;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1604:
  _1327 = _1327__PHI_TEMPORARY;
  _1328 = _1328__PHI_TEMPORARY;
  if (((((int64_t)_1327) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1327) < ((uint64_t)(((uint64_t)(uint8_t)_1325)))))) {
    _1338__PHI_TEMPORARY = _1328;   /* for PHI node */
    goto _1603;
  } else {
    goto _1605;
  }

_1605:
  _1329 = *(uint64_t*)_1318;
  _1330 = *(uint64_t*)_1320;
  if ((((int64_t)_1330) > ((int64_t)_1329))) {
    goto _1606;
  } else {
    _1338__PHI_TEMPORARY = _1328;   /* for PHI node */
    goto _1603;
  }

_1606:
  _1331 = *(void**)_1317;
  _1332 = *(uint8_t*)(((&((uint8_t*)_1331)[((int64_t)_1329)])));
  if ((((int8_t)_1332) > ((int8_t)((uint8_t)-65)))) {
    _1338__PHI_TEMPORARY = _1328;   /* for PHI node */
    goto _1603;
  } else {
    goto _1607;
  }

_1607:
  _1333 = llvm_select_u32((((int64_t)_1329) < ((int64_t)_1330)), (((uint32_t)(uint8_t)_1332)), 0);
  _1334 = *(uint64_t*)_1318;
  *(uint64_t*)_1318 = (llvm_add_u64(_1334, 1));
  _1335 = llvm_neg_u64(_1327);
  _1336 = _1328 | (llvm_select_u32((((int64_t)_1327) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1335) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1333, (((uint32_t)_1335)))))), (llvm_select_u32((((uint64_t)_1327) > ((uint64_t)UINT64_C(31))), 0, (_1333 << (((uint32_t)_1327)))))));
  _1337 = llvm_add_u64(_1327, -8);
  _1327__PHI_TEMPORARY = _1337;   /* for PHI node */
  _1328__PHI_TEMPORARY = _1336;   /* for PHI node */
  goto _1604;

  } while (1); /* end of syntactic loop '' */
_1603:
  _1338 = _1338__PHI_TEMPORARY;
  _1339 = *(uint64_t*)_611;
  _1340 = *(uint64_t*)_613;
  _1341 = jsyn_cbe_fshl_i64(_1340, _1339, 32);
  _1342 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1338)), _1340, 32);
  *(uint64_t*)_611 = _1341;
  *(uint64_t*)_613 = _1342;
  _1343 = ((&((uint8_t*)_532)[((int64_t)48)]));
  _1344 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _1345 = *(uint64_t*)_1344;
  _1346 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _1347 = *(uint64_t*)_1346;
  _1348 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _1349 = *(uint64_t*)_1348;
  _1350 = *(void**)_532;
  _1351 = *(uint64_t*)(((&((uint8_t*)_1350)[((int64_t)16)])));
  *(uint64_t*)_1343 = _1345;
  *(uint64_t*)_1344 = _1347;
  *(uint64_t*)_1346 = _1349;
  *(uint64_t*)_1348 = _1351;
  _1352 = *(uint64_t*)_611;
  _1353 = ((uint32_t)_1352);
  if ((_1353 == 1543503872u)) {
    goto _1608;
  } else {
    _1387__PHI_TEMPORARY = _1353;   /* for PHI node */
    goto _1609;
  }

_1608:
  _1354 = *(void**)_532;
  _1355 = ((&((uint8_t*)_1354)[((int64_t)16)]));
  _1356 = *(uint64_t*)_1355;
  _1357 = ((&((uint8_t*)_1354)[((int64_t)8)]));
  _1358 = *(uint64_t*)_1357;
  if ((((int64_t)_1358) > ((int64_t)_1356))) {
    goto _1610;
  } else {
    _1375__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1611;
  }

_1610:
  _1359 = *(void**)_1354;
  _1360 = *(uint8_t*)(((&((uint8_t*)_1359)[((int64_t)_1356)])));
  *(uint64_t*)_1355 = (llvm_add_u64(_1356, 1));
  _1361 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1360)), 0);
  _1362 = llvm_sub_u8(32, (llvm_shl_u8(_1361, 3)));
  _1363 = (((uint32_t)(uint8_t)_1360)) << 24;
  if ((((uint8_t)_1362) > ((uint8_t)((uint8_t)16)))) {
    _1375__PHI_TEMPORARY = _1363;   /* for PHI node */
    goto _1611;
  } else {
    _1364__PHI_TEMPORARY = 16;   /* for PHI node */
    _1365__PHI_TEMPORARY = _1363;   /* for PHI node */
    goto _1612;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1612:
  _1364 = _1364__PHI_TEMPORARY;
  _1365 = _1365__PHI_TEMPORARY;
  if (((((int64_t)_1364) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1364) < ((uint64_t)(((uint64_t)(uint8_t)_1362)))))) {
    _1375__PHI_TEMPORARY = _1365;   /* for PHI node */
    goto _1611;
  } else {
    goto _1613;
  }

_1613:
  _1366 = *(uint64_t*)_1355;
  _1367 = *(uint64_t*)_1357;
  if ((((int64_t)_1367) > ((int64_t)_1366))) {
    goto _1614;
  } else {
    _1375__PHI_TEMPORARY = _1365;   /* for PHI node */
    goto _1611;
  }

_1614:
  _1368 = *(void**)_1354;
  _1369 = *(uint8_t*)(((&((uint8_t*)_1368)[((int64_t)_1366)])));
  if ((((int8_t)_1369) > ((int8_t)((uint8_t)-65)))) {
    _1375__PHI_TEMPORARY = _1365;   /* for PHI node */
    goto _1611;
  } else {
    goto _1615;
  }

_1615:
  _1370 = llvm_select_u32((((int64_t)_1366) < ((int64_t)_1367)), (((uint32_t)(uint8_t)_1369)), 0);
  _1371 = *(uint64_t*)_1355;
  *(uint64_t*)_1355 = (llvm_add_u64(_1371, 1));
  _1372 = llvm_neg_u64(_1364);
  _1373 = _1365 | (llvm_select_u32((((int64_t)_1364) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1372) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1370, (((uint32_t)_1372)))))), (llvm_select_u32((((uint64_t)_1364) > ((uint64_t)UINT64_C(31))), 0, (_1370 << (((uint32_t)_1364)))))));
  _1374 = llvm_add_u64(_1364, -8);
  _1364__PHI_TEMPORARY = _1374;   /* for PHI node */
  _1365__PHI_TEMPORARY = _1373;   /* for PHI node */
  goto _1612;

  } while (1); /* end of syntactic loop '' */
_1611:
  _1375 = _1375__PHI_TEMPORARY;
  _1376 = *(uint64_t*)_611;
  _1377 = *(uint64_t*)_613;
  _1378 = jsyn_cbe_fshl_i64(_1377, _1376, 32);
  _1379 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1375)), _1377, 32);
  *(uint64_t*)_611 = _1378;
  *(uint64_t*)_613 = _1379;
  _1380 = *(uint64_t*)_1344;
  _1381 = *(uint64_t*)_1346;
  _1382 = *(uint64_t*)_1348;
  _1383 = *(void**)_532;
  _1384 = *(uint64_t*)(((&((uint8_t*)_1383)[((int64_t)16)])));
  *(uint64_t*)_1343 = _1380;
  *(uint64_t*)_1344 = _1381;
  *(uint64_t*)_1346 = _1382;
  *(uint64_t*)_1348 = _1384;
  _1385 = *(uint64_t*)_611;
  _1386 = ((uint32_t)_1385);
  if ((_1386 == 4294967295u)) {
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1238;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1239;   /* for PHI node */
    goto _1543;
  } else {
    _1387__PHI_TEMPORARY = _1386;   /* for PHI node */
    goto _1609;
  }

_1609:
  _1387 = _1387__PHI_TEMPORARY;
  switch (_1387) {
  default:
    goto _1616;
  case 167772160u:
    _1392__PHI_TEMPORARY = 0;   /* for PHI node */
    _1393__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1617;
  case 3800083968u:
    goto _1618;
  case 3800083712u:
    goto _1618;
  case 3800083200u:
    goto _1618;
  case 3800082944u:
    goto _1618;
  case 3800083456u:
    goto _1619;
  case 3800147968u:
    goto _1620;
  case 3800147712u:
    goto _1620;
  case 3800147456u:
    goto _1620;
  }

_1620:
  _1390 = llvm_add_u64(_1239, 1);
  _1392__PHI_TEMPORARY = _1238;   /* for PHI node */
  _1393__PHI_TEMPORARY = _1390;   /* for PHI node */
  goto _1617;

_1619:
  _1388 = llvm_add_u64(_1238, -1);
  _1392__PHI_TEMPORARY = _1388;   /* for PHI node */
  _1393__PHI_TEMPORARY = _1239;   /* for PHI node */
  goto _1617;

_1618:
  _1391 = llvm_add_u64(_1238, 1);
  _1392__PHI_TEMPORARY = _1391;   /* for PHI node */
  _1393__PHI_TEMPORARY = _1239;   /* for PHI node */
  goto _1617;

_1616:
  _1389 = llvm_add_u64(_1239, (((int64_t)(bool)0-(_1387 == 3800148224u))));
  _1392__PHI_TEMPORARY = _1238;   /* for PHI node */
  _1393__PHI_TEMPORARY = _1389;   /* for PHI node */
  goto _1617;

_1617:
  _1392 = _1392__PHI_TEMPORARY;
  _1393 = _1393__PHI_TEMPORARY;
  _1394 = llvm_OC_ctlz_OC_i32((_1387 ^ -1), 0);
  _1395 = llvm_OC_cttz_OC_i32(_1387, 0);
  _1396 = _1395 & 56;
  _1397 = _1237 & (((((_1394 != 1u) & (((uint32_t)(llvm_add_u32((_1394 << 3), _1396))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_1395) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_1387 & 12632256) ^ 8421504), _1396)) == 0u)))) & ((((_1387 & -33554432) != 3221225472u) & ((_1387 & -2097152) != 3766484992u)) & ((_1387 & -1048576) != 4034920448u))) & ((((uint32_t)_1387) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_1387, 293568512))) < ((uint32_t)101662656u))));
  _1237__PHI_TEMPORARY = _1397;   /* for PHI node */
  _1238__PHI_TEMPORARY = _1392;   /* for PHI node */
  _1239__PHI_TEMPORARY = _1393;   /* for PHI node */
  goto _1538;

  } while (1); /* end of syntactic loop '' */
_1593:
  _1244 = *(void**)_532;
  _1245 = ((&((uint8_t*)_1244)[((int64_t)16)]));
  _1246 = *(uint64_t*)_1245;
  _1247 = ((&((uint8_t*)_1244)[((int64_t)8)]));
  _1248 = *(uint64_t*)_1247;
  if ((((int64_t)_1248) > ((int64_t)_1246))) {
    goto _1621;
  } else {
    _1265__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1622;
  }

_1621:
  _1249 = *(void**)_1244;
  _1250 = *(uint8_t*)(((&((uint8_t*)_1249)[((int64_t)_1246)])));
  *(uint64_t*)_1245 = (llvm_add_u64(_1246, 1));
  _1251 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1250)), 0);
  _1252 = llvm_sub_u8(32, (llvm_shl_u8(_1251, 3)));
  _1253 = (((uint32_t)(uint8_t)_1250)) << 24;
  if ((((uint8_t)_1252) > ((uint8_t)((uint8_t)16)))) {
    _1265__PHI_TEMPORARY = _1253;   /* for PHI node */
    goto _1622;
  } else {
    _1254__PHI_TEMPORARY = 16;   /* for PHI node */
    _1255__PHI_TEMPORARY = _1253;   /* for PHI node */
    goto _1623;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1623:
  _1254 = _1254__PHI_TEMPORARY;
  _1255 = _1255__PHI_TEMPORARY;
  if (((((int64_t)_1254) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1254) < ((uint64_t)(((uint64_t)(uint8_t)_1252)))))) {
    _1265__PHI_TEMPORARY = _1255;   /* for PHI node */
    goto _1622;
  } else {
    goto _1624;
  }

_1624:
  _1256 = *(uint64_t*)_1245;
  _1257 = *(uint64_t*)_1247;
  if ((((int64_t)_1257) > ((int64_t)_1256))) {
    goto _1625;
  } else {
    _1265__PHI_TEMPORARY = _1255;   /* for PHI node */
    goto _1622;
  }

_1625:
  _1258 = *(void**)_1244;
  _1259 = *(uint8_t*)(((&((uint8_t*)_1258)[((int64_t)_1256)])));
  if ((((int8_t)_1259) > ((int8_t)((uint8_t)-65)))) {
    _1265__PHI_TEMPORARY = _1255;   /* for PHI node */
    goto _1622;
  } else {
    goto _1626;
  }

_1626:
  _1260 = llvm_select_u32((((int64_t)_1256) < ((int64_t)_1257)), (((uint32_t)(uint8_t)_1259)), 0);
  _1261 = *(uint64_t*)_1245;
  *(uint64_t*)_1245 = (llvm_add_u64(_1261, 1));
  _1262 = llvm_neg_u64(_1254);
  _1263 = _1255 | (llvm_select_u32((((int64_t)_1254) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1262) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1260, (((uint32_t)_1262)))))), (llvm_select_u32((((uint64_t)_1254) > ((uint64_t)UINT64_C(31))), 0, (_1260 << (((uint32_t)_1254)))))));
  _1264 = llvm_add_u64(_1254, -8);
  _1254__PHI_TEMPORARY = _1264;   /* for PHI node */
  _1255__PHI_TEMPORARY = _1263;   /* for PHI node */
  goto _1623;

  } while (1); /* end of syntactic loop '' */
_1622:
  _1265 = _1265__PHI_TEMPORARY;
  _1266 = *(uint64_t*)_611;
  _1267 = *(uint64_t*)_613;
  _1268 = jsyn_cbe_fshl_i64(_1267, _1266, 32);
  _1269 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1265)), _1267, 32);
  *(uint64_t*)_611 = _1268;
  *(uint64_t*)_613 = _1269;
  _1270 = ((&((uint8_t*)_532)[((int64_t)48)]));
  _1271 = ((&((uint8_t*)_532)[((int64_t)56)]));
  _1272 = *(uint64_t*)_1271;
  _1273 = ((&((uint8_t*)_532)[((int64_t)64)]));
  _1274 = *(uint64_t*)_1273;
  _1275 = ((&((uint8_t*)_532)[((int64_t)72)]));
  _1276 = *(uint64_t*)_1275;
  _1277 = *(void**)_532;
  _1278 = *(uint64_t*)(((&((uint8_t*)_1277)[((int64_t)16)])));
  *(uint64_t*)_1270 = _1272;
  *(uint64_t*)_1271 = _1274;
  *(uint64_t*)_1273 = _1276;
  *(uint64_t*)_1275 = _1278;
  _1279 = llvm_select_u64((_1241 == UINT64_C(167772160)), 0, _1238);
  _1280 = llvm_select_u64((_1241 == UINT64_C(167772160)), 0, _1239);
  if ((_1241 == UINT64_C(218103808))) {
    goto _1627;
  } else {
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1279;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1280;   /* for PHI node */
    goto _1543;
  }

_1627:
  _1281 = *(uint64_t*)_611;
  if (((_1281 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1628;
  } else {
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1238;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1239;   /* for PHI node */
    goto _1543;
  }

_1628:
  _1282 = *(void**)_532;
  _1283 = ((&((uint8_t*)_1282)[((int64_t)16)]));
  _1284 = *(uint64_t*)_1283;
  _1285 = ((&((uint8_t*)_1282)[((int64_t)8)]));
  _1286 = *(uint64_t*)_1285;
  if ((((int64_t)_1286) > ((int64_t)_1284))) {
    goto _1629;
  } else {
    _1303__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1630;
  }

_1629:
  _1287 = *(void**)_1282;
  _1288 = *(uint8_t*)(((&((uint8_t*)_1287)[((int64_t)_1284)])));
  *(uint64_t*)_1283 = (llvm_add_u64(_1284, 1));
  _1289 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1288)), 0);
  _1290 = llvm_sub_u8(32, (llvm_shl_u8(_1289, 3)));
  _1291 = (((uint32_t)(uint8_t)_1288)) << 24;
  if ((((uint8_t)_1290) > ((uint8_t)((uint8_t)16)))) {
    _1303__PHI_TEMPORARY = _1291;   /* for PHI node */
    goto _1630;
  } else {
    _1292__PHI_TEMPORARY = 16;   /* for PHI node */
    _1293__PHI_TEMPORARY = _1291;   /* for PHI node */
    goto _1631;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1631:
  _1292 = _1292__PHI_TEMPORARY;
  _1293 = _1293__PHI_TEMPORARY;
  if (((((int64_t)_1292) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1292) < ((uint64_t)(((uint64_t)(uint8_t)_1290)))))) {
    _1303__PHI_TEMPORARY = _1293;   /* for PHI node */
    goto _1630;
  } else {
    goto _1632;
  }

_1632:
  _1294 = *(uint64_t*)_1283;
  _1295 = *(uint64_t*)_1285;
  if ((((int64_t)_1295) > ((int64_t)_1294))) {
    goto _1633;
  } else {
    _1303__PHI_TEMPORARY = _1293;   /* for PHI node */
    goto _1630;
  }

_1633:
  _1296 = *(void**)_1282;
  _1297 = *(uint8_t*)(((&((uint8_t*)_1296)[((int64_t)_1294)])));
  if ((((int8_t)_1297) > ((int8_t)((uint8_t)-65)))) {
    _1303__PHI_TEMPORARY = _1293;   /* for PHI node */
    goto _1630;
  } else {
    goto _1634;
  }

_1634:
  _1298 = llvm_select_u32((((int64_t)_1294) < ((int64_t)_1295)), (((uint32_t)(uint8_t)_1297)), 0);
  _1299 = *(uint64_t*)_1283;
  *(uint64_t*)_1283 = (llvm_add_u64(_1299, 1));
  _1300 = llvm_neg_u64(_1292);
  _1301 = _1293 | (llvm_select_u32((((int64_t)_1292) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1300) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1298, (((uint32_t)_1300)))))), (llvm_select_u32((((uint64_t)_1292) > ((uint64_t)UINT64_C(31))), 0, (_1298 << (((uint32_t)_1292)))))));
  _1302 = llvm_add_u64(_1292, -8);
  _1292__PHI_TEMPORARY = _1302;   /* for PHI node */
  _1293__PHI_TEMPORARY = _1301;   /* for PHI node */
  goto _1631;

  } while (1); /* end of syntactic loop '' */
_1630:
  _1303 = _1303__PHI_TEMPORARY;
  _1304 = *(uint64_t*)_611;
  _1305 = *(uint64_t*)_613;
  _1306 = jsyn_cbe_fshl_i64(_1305, _1304, 32);
  _1307 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1303)), _1305, 32);
  *(uint64_t*)_611 = _1306;
  *(uint64_t*)_613 = _1307;
  _1308 = *(uint64_t*)_1271;
  _1309 = *(uint64_t*)_1273;
  _1310 = *(uint64_t*)_1275;
  _1311 = *(void**)_532;
  _1312 = *(uint64_t*)(((&((uint8_t*)_1311)[((int64_t)16)])));
  *(uint64_t*)_1270 = _1308;
  *(uint64_t*)_1271 = _1309;
  *(uint64_t*)_1273 = _1310;
  *(uint64_t*)_1275 = _1312;
  _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
  _1399__PHI_TEMPORARY = 0;   /* for PHI node */
  _1400__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1543;

_1601:
  if (((_1316 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1600;
  } else {
    _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
    _1399__PHI_TEMPORARY = _1238;   /* for PHI node */
    _1400__PHI_TEMPORARY = _1239;   /* for PHI node */
    goto _1543;
  }

_1600:
  _1398__PHI_TEMPORARY = _1237;   /* for PHI node */
  _1399__PHI_TEMPORARY = 0;   /* for PHI node */
  _1400__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1543;

_1543:
  _1398 = _1398__PHI_TEMPORARY;
  _1399 = _1399__PHI_TEMPORARY;
  _1400 = _1400__PHI_TEMPORARY;
  if (_1398) {
    goto _1635;
  } else {
    _1404__PHI_TEMPORARY = 762;   /* for PHI node */
    goto _1636;
  }

_1635:
  if ((_560 == 654311424u)) {
    _1404__PHI_TEMPORARY = 51;   /* for PHI node */
    goto _1636;
  } else {
    goto _1637;
  }

_1637:
  if ((llvm_select_bool((_1399 == UINT64_C(0)), (_1400 == UINT64_C(0)), 0))) {
    goto _1638;
  } else {
    _1404__PHI_TEMPORARY = 766;   /* for PHI node */
    goto _1636;
  }

_1638:
  switch (_560) {
  default:
    goto _1639;
  case 570425344u:
    _1404__PHI_TEMPORARY = 50;   /* for PHI node */
    goto _1636;
  case 1610612736u:
    goto _1640;
  }

_1639:
  _1401 = julia_AssertionError_26(_531, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)488)]))));
  *(void**)(((&((uint8_t*)(&_533))[((int64_t)16)]))) = ((_1401.array[0]));
  _1402 = *(void**)(((&((uint8_t*)_531)[((int64_t)16)])));
  _1403 = jsk_ijl_gc_small_alloc(_1402, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)520)])))));
  *(void**)(((&((uint8_t*)_1403)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)520)])));
  *(void**)_1403 = ((_1401.array[0]));
  *(void**)(((&((uint8_t*)(&_533))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_1403);
  __builtin_unreachable();

_1640:
  _1404__PHI_TEMPORARY = 52;   /* for PHI node */
  goto _1636;

_1636:
  _1404 = _1404__PHI_TEMPORARY;
  julia_emit_20((&_550), _531, _532, _1404, 1);
  _604__PHI_TEMPORARY = (&_550);   /* for PHI node */
  goto _1420;

}


static void julia__next_token_17(void* _1641, void* _1642, void* _1643, uint32_t _1644) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _1645 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _1646;
  void* _1647;
  void* _1648;
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
  struct l_array_4_uint64_t _1687;    /* Address-exposed local */
  struct l_array_4_uint64_t _1688;    /* Address-exposed local */
  void* _1689;
  void* _1689__PHI_TEMPORARY;
  void* _1690;
  void* _1691;
  uint32_t _1692;
  uint64_t _1693;
  uint32_t _1694;
  uint32_t _1695;
  uint64_t _1696;
  bool _1697;
  bool _1698;
  uint32_t _1699;
  bool _1700;
  bool _1701;
  uint32_t _1702;
  uint32_t _1703;
  uint32_t _1704;
  bool _1705;
  bool _1705__PHI_TEMPORARY;
  void* _1706;
  uint16_t _1707;
  uint16_t _1708;
  void* _1709;
  void* _1710;
  void* _1711;
  void* _1712;
  uint64_t _1713;
  uint64_t _1714;
  void* _1715;
  uint64_t _1716;
  void* _1717;
  void* _1718;
  uint8_t _1719;
  uint8_t _1719__PHI_TEMPORARY;
  void* _1720;
  uint64_t _1721;
  void* _1722;
  void* _1723;
  void* _1724;
  uint64_t _1725;
  void* _1726;
  uint64_t _1727;
  void* _1728;
  uint8_t _1729;
  uint8_t _1730;
  uint8_t _1731;
  uint32_t _1732;
  uint64_t _1733;
  uint64_t _1733__PHI_TEMPORARY;
  uint32_t _1734;
  uint32_t _1734__PHI_TEMPORARY;
  uint64_t _1735;
  uint64_t _1736;
  void* _1737;
  uint8_t _1738;
  uint32_t _1739;
  uint64_t _1740;
  uint64_t _1741;
  uint32_t _1742;
  uint64_t _1743;
  uint32_t _1744;
  uint32_t _1744__PHI_TEMPORARY;
  uint64_t _1745;
  uint64_t _1746;
  uint64_t _1747;
  uint64_t _1748;
  void* _1749;
  uint64_t _1750;
  void* _1751;
  uint64_t _1752;
  void* _1753;
  uint64_t _1754;
  void* _1755;
  uint64_t _1756;
  uint16_t _1757;
  uint16_t _1757__PHI_TEMPORARY;
  uint32_t _1758;
  uint32_t _1759;
  uint32_t _1760;
  uint32_t _1760__PHI_TEMPORARY;
  uint32_t _1761;
  uint64_t _1762;
  uint64_t _1762__PHI_TEMPORARY;
  uint64_t _1763;
  uint64_t _1763__PHI_TEMPORARY;
  uint64_t _1764;
  uint64_t _1765;
  uint32_t _1766;
  uint64_t _1767;
  uint64_t _1768;
  uint16_t _1769;
  uint16_t _1769__PHI_TEMPORARY;
  uint32_t _1770;
  uint32_t _1771;
  uint32_t _1772;
  uint32_t _1772__PHI_TEMPORARY;
  uint32_t _1773;
  uint16_t _1774;
  uint16_t _1775;
  uint16_t _1775__PHI_TEMPORARY;
  uint16_t _1776;

  _1646 = ((uint32_t)_1644);
  _1647 = memset((&_1645), 0, 24);
  *((uint64_t*)&_1645) = 4;
  _1648 = *(void**)_1642;
  *(void**)(((&((uint8_t*)(&_1645))[((int64_t)8)]))) = _1648;
  *(void**)_1642 = (&_1645);
  if ((_1646 == 4294967295u)) {
    goto _1777;
  } else {
    goto _1778;
  }

_1779:
  _1689 = _1689__PHI_TEMPORARY;
  _1690 = memcpy(_1641, _1689, 32);
  _1691 = *(void**)(((&((uint8_t*)(&_1645))[((int64_t)8)])));
  *(void**)_1642 = _1691;
  return;
_1777:
  julia_emit_20((&_1649), _1642, _1643, 752, 1);
  _1689__PHI_TEMPORARY = (&_1649);   /* for PHI node */
  goto _1779;

_1778:
  _1692 = llvm_OC_ctlz_OC_i32((_1646 ^ -1), 0);
  _1693 = ((uint64_t)(uint32_t)_1692);
  _1694 = llvm_OC_cttz_OC_i32(_1646, 0);
  _1695 = _1694 & 56;
  _1696 = ((uint64_t)(uint32_t)_1695);
  _1697 = llvm_select_bool((((uint32_t)_1694) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1646 & 12632256) ^ 8421504), _1695)) != 0u), 0);
  _1698 = ((_1692 == 1u) | (((uint64_t)(llvm_add_u64((_1693 << 3), _1696))) > ((uint64_t)UINT64_C(32)))) | _1697;
  _1699 = llvm_lshr_u32(_1646, 24);
  _1700 = (((_1646 & -33554432) == 3221225472u) | ((_1646 & -2097152) == 3766484992u)) | ((_1646 & -1048576) == 4034920448u);
  _1701 = ((((uint32_t)_1646) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_1646, 293568512))) < ((uint32_t)101662656u))) & ((_1698 | _1700) ^ 1);
  if (_1701) {
    goto _1780;
  } else {
    _1705__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1781;
  }

_1780:
  if ((((uint32_t)(llvm_add_u32(_1646, -150994944))) < ((uint32_t)67108865u))) {
    _1705__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1781;
  } else {
    goto _1782;
  }

_1782:
  switch (_1646) {
  default:
    goto _1783;
  case 3263496192u:
    _1705__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1781;
  case 536870912u:
    _1705__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1781;
  }

_1783:
  if (((((uint32_t)_1646) < ((uint32_t)3265265664u)) | _1698)) {
    _1705__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1781;
  } else {
    goto _1784;
  }

_1784:
  if (((((uint64_t)(llvm_add_u64((_1693 << 3), _1696))) > ((uint64_t)UINT64_C(32))) | _1700)) {
    goto _1785;
  } else {
    goto _1786;
  }

_1785:
  julia_throw_invalid_char_21(_1642, _1646);
  __builtin_unreachable();

_1786:
  _1702 = llvm_select_u32((((uint32_t)_1694) < ((uint32_t)32u)), (llvm_lshr_u32((_1646 & (llvm_lshr_u32(-1, _1692))), _1695)), 0);
  _1703 = (((_1702 & 127) | ((llvm_lshr_u32(_1702, 2)) & 8128)) | ((llvm_lshr_u32(_1702, 4)) & 520192)) | ((llvm_lshr_u32(_1702, 6)) & 33292288);
  if ((((uint32_t)_1703) > ((uint32_t)1114111u))) {
    _1705__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1781;
  } else {
    goto _1787;
  }

_1787:
  _1704 = jsk_utf8proc_category(_1703);
  _1705__PHI_TEMPORARY = (_1704 == 23u);   /* for PHI node */
  goto _1781;

_1781:
  _1705 = _1705__PHI_TEMPORARY;
  if ((_1705 | (_1646 == 4022058752u))) {
    goto _1788;
  } else {
    goto _1789;
  }

_1788:
  julia_lex_whitespace_27((&_1650), _1642, _1643, _1646);
  _1689__PHI_TEMPORARY = (&_1650);   /* for PHI node */
  goto _1779;

_1789:
  switch (_1646) {
  default:
    goto _1790;
  case 1526726656u:
    goto _1791;
  case 1560281088u:
    goto _1792;
  case 2063597568u:
    goto _1793;
  case 989855744u:
    goto _1794;
  case 2097152000u:
    goto _1795;
  case 671088640u:
    goto _1796;
  case 687865856u:
    goto _1797;
  case 738197504u:
    goto _1798;
  case 704643072u:
    goto _1799;
  case 1577058304u:
    goto _1800;
  case 1073741824u:
    goto _1801;
  case 1056964608u:
    goto _1802;
  case 603979776u:
    goto _1803;
  case 3800742656u:
    goto _1804;
  case 2113929216u:
    goto _1805;
  case 587202560u:
    goto _1806;
  case 1023410176u:
    goto _1807;
  case 553648128u:
    goto _1808;
  case 1040187392u:
    goto _1809;
  case 1006632960u:
    goto _1810;
  case 973078528u:
    goto _1811;
  case 2080374784u:
    goto _1812;
  case 637534208u:
    goto _1813;
  case 654311424u:
    goto _1814;
  case 3283550208u:
    goto _1815;
  case 570425344u:
    goto _1816;
  case 620756992u:
    goto _1817;
  case 788529152u:
    goto _1818;
  case 1543503872u:
    goto _1819;
  case 771751936u:
    goto _1820;
  case 721420288u:
    goto _1821;
  case 754974720u:
    goto _1822;
  case 3800601088u:
    goto _1823;
  case 1610612736u:
    goto _1824;
  }

_1791:
  julia_emit_20((&_1651), _1642, _1643, 56, 1);
  _1689__PHI_TEMPORARY = (&_1651);   /* for PHI node */
  goto _1779;

_1792:
  julia_emit_20((&_1652), _1642, _1643, 57, 1);
  _1689__PHI_TEMPORARY = (&_1652);   /* for PHI node */
  goto _1779;

_1793:
  julia_emit_20((&_1653), _1642, _1643, 58, 1);
  _1689__PHI_TEMPORARY = (&_1653);   /* for PHI node */
  goto _1779;

_1794:
  julia_emit_20((&_1654), _1642, _1643, 55, 1);
  _1689__PHI_TEMPORARY = (&_1654);   /* for PHI node */
  goto _1779;

_1795:
  julia_emit_20((&_1655), _1642, _1643, 59, 1);
  _1689__PHI_TEMPORARY = (&_1655);   /* for PHI node */
  goto _1779;

_1796:
  julia_emit_20((&_1656), _1642, _1643, 60, 1);
  _1689__PHI_TEMPORARY = (&_1656);   /* for PHI node */
  goto _1779;

_1797:
  julia_emit_20((&_1657), _1642, _1643, 61, 1);
  _1689__PHI_TEMPORARY = (&_1657);   /* for PHI node */
  goto _1779;

_1798:
  julia_emit_20((&_1658), _1642, _1643, 54, 1);
  _1689__PHI_TEMPORARY = (&_1658);   /* for PHI node */
  goto _1779;

_1799:
  julia_lex_star_28((&_1659), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1659);   /* for PHI node */
  goto _1779;

_1800:
  julia_lex_circumflex_29((&_1660), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1660);   /* for PHI node */
  goto _1779;

_1801:
  julia_emit_20((&_1661), _1642, _1643, 53, 1);
  _1689__PHI_TEMPORARY = (&_1661);   /* for PHI node */
  goto _1779;

_1802:
  julia_emit_20((&_1662), _1642, _1643, 79, 1);
  _1689__PHI_TEMPORARY = (&_1662);   /* for PHI node */
  goto _1779;

_1803:
  julia_lex_dollar_30((&_1663), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1663);   /* for PHI node */
  goto _1779;

_1804:
  julia_lex_xor_31((&_1664), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1664);   /* for PHI node */
  goto _1779;

_1805:
  julia_emit_20((&_1665), _1642, _1643, 74, 1);
  _1689__PHI_TEMPORARY = (&_1665);   /* for PHI node */
  goto _1779;

_1806:
  julia_lex_comment_32((&_1666), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1666);   /* for PHI node */
  goto _1779;

_1807:
  julia_lex_equal_33((&_1667), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1667);   /* for PHI node */
  goto _1779;

_1808:
  julia_lex_exclaim_34((&_1668), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1668);   /* for PHI node */
  goto _1779;

_1809:
  julia_lex_greater_35((&_1669), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1669);   /* for PHI node */
  goto _1779;

_1810:
  julia_lex_less_36((&_1670), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1670);   /* for PHI node */
  goto _1779;

_1811:
  julia_lex_colon_37((&_1671), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1671);   /* for PHI node */
  goto _1779;

_1812:
  julia_lex_bar_38((&_1672), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1672);   /* for PHI node */
  goto _1779;

_1813:
  julia_lex_amper_39((&_1673), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1673);   /* for PHI node */
  goto _1779;

_1814:
  _1706 = ((&((uint8_t*)_1643)[((int64_t)16)]));
  _1707 = *(uint16_t*)_1706;
  if (((_1707 != ((uint16_t)3)) & (((uint16_t)(llvm_add_u16(_1707, -43))) < ((uint16_t)((uint16_t)-9))))) {
    goto _1825;
  } else {
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  }

_1825:
  switch (_1707) {
  default:
    goto _1827;
  case ((uint16_t)252):
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  case ((uint16_t)253):
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  case ((uint16_t)706):
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  }

_1827:
  _1708 = *(uint16_t*)_1706;
  switch (_1708) {
  default:
    goto _1828;
  case ((uint16_t)707):
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  case ((uint16_t)61):
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  case ((uint16_t)57):
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  case ((uint16_t)59):
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  case ((uint16_t)709):
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  case ((uint16_t)33):
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  }

_1828:
  if ((((uint16_t)(llvm_add_u16(_1708, -53))) < ((uint16_t)((uint16_t)-10)))) {
    goto _1829;
  } else {
    _1719__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1826;
  }

_1829:
  _1709 = *(void**)(((&((uint8_t*)_1643)[((int64_t)24)])));
  _1710 = *(void**)_1709;
  _1711 = *(void**)(((&((uint8_t*)_1709)[((int64_t)8)])));
  _1712 = ((&((uint8_t*)_1709)[((int64_t)16)]));
  _1713 = *(uint64_t*)_1712;
  _1714 = llvm_add_u64(_1713, 1);
  _1715 = *(void**)(((&((uint8_t*)_1711)[((int64_t)8)])));
  _1716 = *(uint64_t*)_1711;
  if ((((int64_t)_1716) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1710)), (((uint64_t)(uintptr_t)_1715)))), 4)), 1)), _1713))))) {
    goto _1830;
  } else {
    goto _1831;
  }

_1830:
  *(void**)(((&((uint8_t*)(&_1645))[((int64_t)16)]))) = _1709;
  julia__growend_internalNOT_OC__13(_1642, _1709, 1, _1713);
  goto _1831;

_1831:
  *(uint64_t*)_1712 = _1714;
  _1717 = *(void**)_1709;
  _1718 = memcpy((((&((uint8_t*)_1717)[((int64_t)(_1713 << 4))]))), (&_j_constYY_OC_59), 16);
  _1719__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1826;

_1826:
  _1719 = _1719__PHI_TEMPORARY;
  julia_emit_20((&_1674), _1642, _1643, 709, _1719);
  _1689__PHI_TEMPORARY = (&_1674);   /* for PHI node */
  goto _1779;

_1815:
  julia_lex_division_40((&_1675), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1675);   /* for PHI node */
  goto _1779;

_1816:
  julia_lex_quote_41((&_1676), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1676);   /* for PHI node */
  goto _1779;

_1817:
  julia_lex_percent_42((&_1677), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1677);   /* for PHI node */
  goto _1779;

_1818:
  julia_lex_forwardslash_43((&_1678), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1678);   /* for PHI node */
  goto _1779;

_1819:
  julia_lex_backslash_44((&_1679), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1679);   /* for PHI node */
  goto _1779;

_1820:
  julia_lex_dot_45((&_1680), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1680);   /* for PHI node */
  goto _1779;

_1821:
  julia_lex_plus_46((&_1681), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1681);   /* for PHI node */
  goto _1779;

_1822:
  julia_lex_minus_47((&_1682), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1682);   /* for PHI node */
  goto _1779;

_1823:
  _1720 = ((&((uint8_t*)_1643)[((int64_t)32)]));
  _1721 = *(uint64_t*)_1720;
  _1722 = ((&((uint8_t*)_1643)[((int64_t)40)]));
  if (((_1721 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _1832;
  } else {
    _1757__PHI_TEMPORARY = 536;   /* for PHI node */
    goto _1833;
  }

_1832:
  _1723 = *(void**)_1643;
  _1724 = ((&((uint8_t*)_1723)[((int64_t)16)]));
  _1725 = *(uint64_t*)_1724;
  _1726 = ((&((uint8_t*)_1723)[((int64_t)8)]));
  _1727 = *(uint64_t*)_1726;
  if ((((int64_t)_1727) > ((int64_t)_1725))) {
    goto _1834;
  } else {
    _1744__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1835;
  }

_1834:
  _1728 = *(void**)_1723;
  _1729 = *(uint8_t*)(((&((uint8_t*)_1728)[((int64_t)_1725)])));
  *(uint64_t*)_1724 = (llvm_add_u64(_1725, 1));
  _1730 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1729)), 0);
  _1731 = llvm_sub_u8(32, (llvm_shl_u8(_1730, 3)));
  _1732 = (((uint32_t)(uint8_t)_1729)) << 24;
  if ((((uint8_t)_1731) > ((uint8_t)((uint8_t)16)))) {
    _1744__PHI_TEMPORARY = _1732;   /* for PHI node */
    goto _1835;
  } else {
    _1733__PHI_TEMPORARY = 16;   /* for PHI node */
    _1734__PHI_TEMPORARY = _1732;   /* for PHI node */
    goto _1836;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1836:
  _1733 = _1733__PHI_TEMPORARY;
  _1734 = _1734__PHI_TEMPORARY;
  if (((((int64_t)_1733) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1733) < ((uint64_t)(((uint64_t)(uint8_t)_1731)))))) {
    _1744__PHI_TEMPORARY = _1734;   /* for PHI node */
    goto _1835;
  } else {
    goto _1837;
  }

_1837:
  _1735 = *(uint64_t*)_1724;
  _1736 = *(uint64_t*)_1726;
  if ((((int64_t)_1736) > ((int64_t)_1735))) {
    goto _1838;
  } else {
    _1744__PHI_TEMPORARY = _1734;   /* for PHI node */
    goto _1835;
  }

_1838:
  _1737 = *(void**)_1723;
  _1738 = *(uint8_t*)(((&((uint8_t*)_1737)[((int64_t)_1735)])));
  if ((((int8_t)_1738) > ((int8_t)((uint8_t)-65)))) {
    _1744__PHI_TEMPORARY = _1734;   /* for PHI node */
    goto _1835;
  } else {
    goto _1839;
  }

_1839:
  _1739 = llvm_select_u32((((int64_t)_1735) < ((int64_t)_1736)), (((uint32_t)(uint8_t)_1738)), 0);
  _1740 = *(uint64_t*)_1724;
  *(uint64_t*)_1724 = (llvm_add_u64(_1740, 1));
  _1741 = llvm_neg_u64(_1733);
  _1742 = _1734 | (llvm_select_u32((((int64_t)_1733) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1741) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1739, (((uint32_t)_1741)))))), (llvm_select_u32((((uint64_t)_1733) > ((uint64_t)UINT64_C(31))), 0, (_1739 << (((uint32_t)_1733)))))));
  _1743 = llvm_add_u64(_1733, -8);
  _1733__PHI_TEMPORARY = _1743;   /* for PHI node */
  _1734__PHI_TEMPORARY = _1742;   /* for PHI node */
  goto _1836;

  } while (1); /* end of syntactic loop '' */
_1835:
  _1744 = _1744__PHI_TEMPORARY;
  _1745 = *(uint64_t*)_1720;
  _1746 = *(uint64_t*)_1722;
  _1747 = jsyn_cbe_fshl_i64(_1746, _1745, 32);
  _1748 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1744)), _1746, 32);
  *(uint64_t*)_1720 = _1747;
  *(uint64_t*)_1722 = _1748;
  _1749 = ((&((uint8_t*)_1643)[((int64_t)56)]));
  _1750 = *(uint64_t*)_1749;
  _1751 = ((&((uint8_t*)_1643)[((int64_t)64)]));
  _1752 = *(uint64_t*)_1751;
  _1753 = ((&((uint8_t*)_1643)[((int64_t)72)]));
  _1754 = *(uint64_t*)_1753;
  _1755 = *(void**)_1643;
  _1756 = *(uint64_t*)(((&((uint8_t*)_1755)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1643)[((int64_t)48)]))) = _1750;
  *(uint64_t*)_1749 = _1752;
  *(uint64_t*)_1751 = _1754;
  *(uint64_t*)_1753 = _1756;
  _1757__PHI_TEMPORARY = 71;   /* for PHI node */
  goto _1833;

_1833:
  _1757 = _1757__PHI_TEMPORARY;
  julia_emit_20((&_1683), _1642, _1643, _1757, 1);
  _1689__PHI_TEMPORARY = (&_1683);   /* for PHI node */
  goto _1779;

_1824:
  julia_lex_backtick_48((&_1684), _1642, _1643);
  _1689__PHI_TEMPORARY = (&_1684);   /* for PHI node */
  goto _1779;

_1790:
  if ((_1701 & (_1646 != 4036993714u))) {
    goto _1840;
  } else {
    goto _1841;
  }

_1840:
  if ((((int32_t)_1646) < ((int32_t)0u))) {
    goto _1842;
  } else {
    _1760__PHI_TEMPORARY = _1699;   /* for PHI node */
    goto _1843;
  }

_1842:
  if ((((_1692 == 1u) | (((uint64_t)(llvm_add_u64((_1693 << 3), _1696))) > ((uint64_t)UINT64_C(32)))) | (_1697 | _1700))) {
    goto _1844;
  } else {
    goto _1845;
  }

_1844:
  julia_throw_invalid_char_21(_1642, _1646);
  __builtin_unreachable();

_1845:
  _1758 = llvm_select_u32((((uint32_t)_1694) < ((uint32_t)32u)), (llvm_lshr_u32((_1646 & (llvm_lshr_u32(-1, _1692))), _1695)), 0);
  _1759 = (((_1758 & 127) | ((llvm_lshr_u32(_1758, 2)) & 8128)) | ((llvm_lshr_u32(_1758, 4)) & 520192)) | ((llvm_lshr_u32(_1758, 6)) & 33292288);
  _1760__PHI_TEMPORARY = _1759;   /* for PHI node */
  goto _1843;

_1843:
  _1760 = _1760__PHI_TEMPORARY;
  _1761 = jsk_jl_id_start_char(_1760);
  if ((_1761 == 0u)) {
    goto _1841;
  } else {
    goto _1846;
  }

_1846:
  julia_lex_identifier_22((&_1685), _1642, _1643, _1646);
  _1689__PHI_TEMPORARY = (&_1685);   /* for PHI node */
  goto _1779;

_1841:
  if ((((uint32_t)(llvm_add_u32(_1646, -956301313))) < ((uint32_t)4143972351u))) {
    _1762__PHI_TEMPORARY = 597;   /* for PHI node */
    _1763__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1847;
  } else {
    goto _1848;
  }

_1848:
  julia_lex_digit_49((&_1686), _1642, _1643, 44);
  _1689__PHI_TEMPORARY = (&_1686);   /* for PHI node */
  goto _1779;

  do {     /* Syntactic loop '' to make GCC happy */
_1847:
  _1762 = _1762__PHI_TEMPORARY;
  _1763 = _1763__PHI_TEMPORARY;
  if ((((int64_t)_1763) > ((int64_t)_1762))) {
    _1769__PHI_TEMPORARY = 751;   /* for PHI node */
    goto _1849;
  } else {
    goto _1850;
  }

_1850:
  _1764 = llvm_lshr_u64((llvm_add_u64(_1763, _1762)), 1);
  _1765 = llvm_add_u64(_1764, -1);
  _1766 = *(uint32_t*)(((&((uint32_t*)(&_j_constYY_OC_60))[((int64_t)_1765)])));
  if ((_1766 == _1646)) {
    goto _1851;
  } else {
    goto _1852;
  }

_1852:
  _1767 = llvm_select_u64((((uint32_t)_1766) < ((uint32_t)_1646)), _1762, _1765);
  _1768 = llvm_select_u64((((uint32_t)_1766) < ((uint32_t)_1646)), (llvm_add_u64(_1764, 1)), _1763);
  _1762__PHI_TEMPORARY = _1767;   /* for PHI node */
  _1763__PHI_TEMPORARY = _1768;   /* for PHI node */
  goto _1847;

  } while (1); /* end of syntactic loop '' */
_1849:
  _1769 = _1769__PHI_TEMPORARY;
  if ((_1769 == ((uint16_t)751))) {
    goto _1853;
  } else {
    goto _1854;
  }

_1854:
  julia_emit_20((&_1687), _1642, _1643, _1769, 1);
  _1689__PHI_TEMPORARY = (&_1687);   /* for PHI node */
  goto _1779;

_1853:
  if (_1701) {
    goto _1855;
  } else {
    _1775__PHI_TEMPORARY = 762;   /* for PHI node */
    goto _1856;
  }

_1855:
  switch (_1646) {
  default:
    goto _1857;
  case 3266117632u:
    _1775__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1856;
  case 3800075008u:
    _1775__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1856;
  case 3800075264u:
    _1775__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1856;
  case 3800075520u:
    _1775__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1856;
  case 3800075776u:
    _1775__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1856;
  case 3800076032u:
    _1775__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1856;
  case 3800145920u:
    _1775__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1856;
  case 3800146176u:
    _1775__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1856;
  }

_1857:
  if ((((int32_t)_1646) < ((int32_t)0u))) {
    goto _1858;
  } else {
    _1772__PHI_TEMPORARY = _1699;   /* for PHI node */
    goto _1859;
  }

_1858:
  if ((((_1692 == 1u) | (((uint64_t)(llvm_add_u64((_1693 << 3), _1696))) > ((uint64_t)UINT64_C(32)))) | (_1697 | _1700))) {
    goto _1860;
  } else {
    goto _1861;
  }

_1860:
  julia_throw_invalid_char_21(_1642, _1646);
  __builtin_unreachable();

_1861:
  _1770 = llvm_select_u32((((uint32_t)_1694) < ((uint32_t)32u)), (llvm_lshr_u32((_1646 & (llvm_lshr_u32(-1, _1692))), _1695)), 0);
  _1771 = (((_1770 & 127) | ((llvm_lshr_u32(_1770, 2)) & 8128)) | ((llvm_lshr_u32(_1770, 4)) & 520192)) | ((llvm_lshr_u32(_1770, 6)) & 33292288);
  _1772__PHI_TEMPORARY = _1771;   /* for PHI node */
  goto _1859;

_1859:
  _1772 = _1772__PHI_TEMPORARY;
  _1773 = jsk_jl_id_char(_1772);
  _1774 = llvm_select_u16((_1773 == 0u), 765, 764);
  _1775__PHI_TEMPORARY = _1774;   /* for PHI node */
  goto _1856;

_1856:
  _1775 = _1775__PHI_TEMPORARY;
  julia_emit_20((&_1688), _1642, _1643, _1775, 1);
  _1689__PHI_TEMPORARY = (&_1688);   /* for PHI node */
  goto _1779;

_1851:
  _1776 = *(uint16_t*)(((&((uint16_t*)(((&((uint8_t*)(&_j_constYY_OC_60))[((int64_t)2388)]))))[((int64_t)_1765)])));
  _1769__PHI_TEMPORARY = _1776;   /* for PHI node */
  goto _1849;

}


static struct l_array_1_void_KC_ julia_ConcurrencyViolationError_18(void* _1862, void* _1863) {
  struct l_array_1_void_KC_ _1864;

  _1864 = llvm_ctor_ptra1(((void*)/*NULL*/0));
  _1864.array[0] = _1863;
  return _1864;
}


static __noreturn void julia_throw_boundserror_19(void* _1865, void* _1866, void* _1867) {
  jsk_throw();
  __builtin_unreachable();

}


static void julia_emit_20(void* _1868, void* _1869, void* _1870, uint16_t _1871, uint8_t _1872) {
  bool _1873;
  bool _1873__PHI_TEMPORARY;
  uint8_t _1874;
  uint8_t _1874__PHI_TEMPORARY;
  void* _1875;
  uint64_t _1876;
  void* _1877;
  uint8_t _1878;
  void* _1879;
  void* _1880;
  uint64_t _1881;
  void* _1882;
  uint64_t _1883;
  void* _1884;
  uint8_t _1885;
  uint8_t _1886;
  uint8_t _1887;
  uint32_t _1888;
  uint64_t _1889;
  uint64_t _1889__PHI_TEMPORARY;
  uint32_t _1890;
  uint32_t _1890__PHI_TEMPORARY;
  uint64_t _1891;
  uint64_t _1892;
  void* _1893;
  uint8_t _1894;
  uint32_t _1895;
  uint64_t _1896;
  uint64_t _1897;
  uint32_t _1898;
  uint64_t _1899;
  uint32_t _1900;
  uint32_t _1900__PHI_TEMPORARY;
  uint64_t _1901;
  uint64_t _1902;
  uint64_t _1903;
  uint64_t _1904;
  void* _1905;
  uint64_t _1906;
  void* _1907;
  uint64_t _1908;
  void* _1909;
  uint64_t _1910;
  void* _1911;
  uint64_t _1912;
  uint8_t _1913;
  uint8_t _1913__PHI_TEMPORARY;
  uint64_t _1914;
  uint64_t _1915;

  if ((llvm_select_bool(((((uint16_t)(llvm_add_u16(_1871, -716))) < ((uint16_t)((uint16_t)-650))) | (_1871 == ((uint16_t)68))), 1, (((uint16_t)(llvm_add_u16(_1871, -69))) < ((uint16_t)((uint16_t)9)))))) {
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  } else {
    goto _1917;
  }

_1917:
  switch (_1871) {
  default:
    goto _1918;
  case ((uint16_t)79):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)236):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)237):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)234):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)232):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)252):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)253):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)75):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)76):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)526):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)527):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)534):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)705):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)706):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)707):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)708):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)710):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  case ((uint16_t)711):
    _1873__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1916;
  }

_1918:
  _1873__PHI_TEMPORARY = ((llvm_and_u16(_1871, 1020)) == ((uint16_t)712));   /* for PHI node */
  goto _1916;

_1916:
  _1873 = _1873__PHI_TEMPORARY;
  if ((llvm_select_bool(_1873, 1, ((((bool)_1872&1u)) ^ 1)))) {
    _1913__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1919;
  } else {
    _1874__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1920;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1920:
  _1874 = _1874__PHI_TEMPORARY;
  _1875 = ((&((uint8_t*)_1870)[((int64_t)32)]));
  _1876 = *(uint64_t*)_1875;
  _1877 = ((&((uint8_t*)_1870)[((int64_t)40)]));
  _1878 = julia_isopsuffix_50(_1869, (((uint32_t)(llvm_lshr_u64(_1876, 32)))));
  if ((((bool)_1878&1u))) {
    goto _1921;
  } else {
    _1913__PHI_TEMPORARY = _1874;   /* for PHI node */
    goto _1919;
  }

_1921:
  _1879 = *(void**)_1870;
  _1880 = ((&((uint8_t*)_1879)[((int64_t)16)]));
  _1881 = *(uint64_t*)_1880;
  _1882 = ((&((uint8_t*)_1879)[((int64_t)8)]));
  _1883 = *(uint64_t*)_1882;
  if ((((int64_t)_1883) > ((int64_t)_1881))) {
    goto _1922;
  } else {
    _1900__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1923;
  }

_1922:
  _1884 = *(void**)_1879;
  _1885 = *(uint8_t*)(((&((uint8_t*)_1884)[((int64_t)_1881)])));
  *(uint64_t*)_1880 = (llvm_add_u64(_1881, 1));
  _1886 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1885)), 0);
  _1887 = llvm_sub_u8(32, (llvm_shl_u8(_1886, 3)));
  _1888 = (((uint32_t)(uint8_t)_1885)) << 24;
  if ((((uint8_t)_1887) > ((uint8_t)((uint8_t)16)))) {
    _1900__PHI_TEMPORARY = _1888;   /* for PHI node */
    goto _1923;
  } else {
    _1889__PHI_TEMPORARY = 16;   /* for PHI node */
    _1890__PHI_TEMPORARY = _1888;   /* for PHI node */
    goto _1924;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1924:
  _1889 = _1889__PHI_TEMPORARY;
  _1890 = _1890__PHI_TEMPORARY;
  if (((((int64_t)_1889) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1889) < ((uint64_t)(((uint64_t)(uint8_t)_1887)))))) {
    _1900__PHI_TEMPORARY = _1890;   /* for PHI node */
    goto _1923;
  } else {
    goto _1925;
  }

_1925:
  _1891 = *(uint64_t*)_1880;
  _1892 = *(uint64_t*)_1882;
  if ((((int64_t)_1892) > ((int64_t)_1891))) {
    goto _1926;
  } else {
    _1900__PHI_TEMPORARY = _1890;   /* for PHI node */
    goto _1923;
  }

_1926:
  _1893 = *(void**)_1879;
  _1894 = *(uint8_t*)(((&((uint8_t*)_1893)[((int64_t)_1891)])));
  if ((((int8_t)_1894) > ((int8_t)((uint8_t)-65)))) {
    _1900__PHI_TEMPORARY = _1890;   /* for PHI node */
    goto _1923;
  } else {
    goto _1927;
  }

_1927:
  _1895 = llvm_select_u32((((int64_t)_1891) < ((int64_t)_1892)), (((uint32_t)(uint8_t)_1894)), 0);
  _1896 = *(uint64_t*)_1880;
  *(uint64_t*)_1880 = (llvm_add_u64(_1896, 1));
  _1897 = llvm_neg_u64(_1889);
  _1898 = _1890 | (llvm_select_u32((((int64_t)_1889) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1897) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1895, (((uint32_t)_1897)))))), (llvm_select_u32((((uint64_t)_1889) > ((uint64_t)UINT64_C(31))), 0, (_1895 << (((uint32_t)_1889)))))));
  _1899 = llvm_add_u64(_1889, -8);
  _1889__PHI_TEMPORARY = _1899;   /* for PHI node */
  _1890__PHI_TEMPORARY = _1898;   /* for PHI node */
  goto _1924;

  } while (1); /* end of syntactic loop '' */
_1923:
  _1900 = _1900__PHI_TEMPORARY;
  _1901 = *(uint64_t*)_1875;
  _1902 = *(uint64_t*)_1877;
  _1903 = jsyn_cbe_fshl_i64(_1902, _1901, 32);
  _1904 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1900)), _1902, 32);
  *(uint64_t*)_1875 = _1903;
  *(uint64_t*)_1877 = _1904;
  _1905 = ((&((uint8_t*)_1870)[((int64_t)56)]));
  _1906 = *(uint64_t*)_1905;
  _1907 = ((&((uint8_t*)_1870)[((int64_t)64)]));
  _1908 = *(uint64_t*)_1907;
  _1909 = ((&((uint8_t*)_1870)[((int64_t)72)]));
  _1910 = *(uint64_t*)_1909;
  _1911 = *(void**)_1870;
  _1912 = *(uint64_t*)(((&((uint8_t*)_1911)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1870)[((int64_t)48)]))) = _1906;
  *(uint64_t*)_1905 = _1908;
  *(uint64_t*)_1907 = _1910;
  *(uint64_t*)_1909 = _1912;
  _1874__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1920;

  } while (1); /* end of syntactic loop '' */
_1919:
  _1913 = _1913__PHI_TEMPORARY;
  _1914 = *(uint64_t*)(((&((uint8_t*)_1870)[((int64_t)8)])));
  _1915 = *(uint64_t*)(((&((uint8_t*)_1870)[((int64_t)48)])));
  *(uint16_t*)(((&((uint8_t*)_1870)[((int64_t)16)]))) = _1871;
  *(uint16_t*)_1868 = _1871;
  *(uint64_t*)(((&((uint8_t*)_1868)[((int64_t)8)]))) = _1914;
  *(uint64_t*)(((&((uint8_t*)_1868)[((int64_t)16)]))) = (llvm_add_u64(_1915, -1));
  *(uint8_t*)(((&((uint8_t*)_1868)[((int64_t)24)]))) = _1913;
}


static __noreturn void julia_throw_invalid_char_21(void* _1928, uint32_t _1929) {
  jsk_throw();
  __builtin_unreachable();

}


static void julia_lex_identifier_22(void* _1930, void* _1931, void* _1932, uint32_t _1933) {
  __PREFIXALIGN__(16) uint64_t _1934 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) uint64_t _1935 __POSTFIXALIGN__(16);    /* Address-exposed local */
  struct l_array_4_uint64_t _1936;    /* Address-exposed local */
  struct l_array_4_uint64_t _1937;    /* Address-exposed local */
  struct l_array_4_uint64_t _1938;    /* Address-exposed local */
  uint32_t _1939;
  uint32_t _1940;
  uint32_t _1941;
  uint32_t _1942;
  uint32_t _1943;
  uint32_t _1944;
  uint32_t _1945;
  uint32_t _1945__PHI_TEMPORARY;
  uint32_t _1946;
  uint64_t _1947;
  uint32_t _1948;
  bool _1949;
  bool _1949__PHI_TEMPORARY;
  uint64_t _1950;
  uint64_t _1950__PHI_TEMPORARY;
  uint64_t _1951;
  uint64_t _1951__PHI_TEMPORARY;
  uint32_t _1952;
  uint32_t _1952__PHI_TEMPORARY;
  void* _1953;
  uint64_t _1954;
  void* _1955;
  uint64_t _1956;
  uint32_t _1957;
  uint64_t _1958;
  uint32_t _1959;
  uint32_t _1960;
  bool _1961;
  uint32_t _1962;
  uint32_t _1963;
  uint32_t _1964;
  uint32_t _1965;
  uint32_t _1966;
  uint32_t _1967;
  uint32_t _1968;
  uint32_t _1968__PHI_TEMPORARY;
  uint8_t _1969;
  uint32_t _1970;
  uint64_t _1971;
  uint32_t _1972;
  uint32_t _1973;
  uint64_t _1974;
  bool _1975;
  uint32_t _1976;
  uint64_t _1977;
  uint32_t _1978;
  uint32_t _1979;
  uint64_t _1980;
  bool _1981;
  uint32_t _1982;
  uint32_t _1983;
  uint32_t _1984;
  uint32_t _1985;
  uint32_t _1985__PHI_TEMPORARY;
  uint32_t _1986;
  uint32_t _1987;
  uint32_t _1988;
  uint32_t _1989;
  uint32_t _1989__PHI_TEMPORARY;
  uint8_t _1990;
  uint32_t _1991;
  uint64_t _1992;
  uint32_t _1993;
  uint32_t _1994;
  uint64_t _1995;
  bool _1996;
  bool _1997;
  uint32_t _1998;
  uint32_t _1999;
  uint32_t _2000;
  uint32_t _2001;
  uint32_t _2001__PHI_TEMPORARY;
  uint32_t _2002;
  uint32_t _2003;
  uint32_t _2004;
  uint64_t _2005;
  uint32_t _2006;
  uint32_t _2007;
  uint64_t _2008;
  bool _2009;
  uint32_t _2010;
  uint32_t _2011;
  uint32_t _2012;
  uint32_t _2013;
  uint32_t _2014;
  uint32_t _2014__PHI_TEMPORARY;
  uint8_t _2015;
  void* _2016;
  void* _2017;
  uint64_t _2018;
  void* _2019;
  uint64_t _2020;
  void* _2021;
  uint8_t _2022;
  uint8_t _2023;
  uint8_t _2024;
  uint32_t _2025;
  uint64_t _2026;
  uint64_t _2026__PHI_TEMPORARY;
  uint32_t _2027;
  uint32_t _2027__PHI_TEMPORARY;
  uint64_t _2028;
  uint64_t _2029;
  void* _2030;
  uint8_t _2031;
  uint32_t _2032;
  uint64_t _2033;
  uint64_t _2034;
  uint32_t _2035;
  uint64_t _2036;
  uint32_t _2037;
  uint32_t _2037__PHI_TEMPORARY;
  uint64_t _2038;
  uint64_t _2039;
  uint64_t _2040;
  uint64_t _2041;
  void* _2042;
  uint64_t _2043;
  void* _2044;
  uint64_t _2045;
  void* _2046;
  uint64_t _2047;
  void* _2048;
  uint64_t _2049;
  uint64_t _2050;
  uint32_t _2051;
  uint32_t _2052;
  uint32_t _2053;
  uint32_t _2054;
  uint32_t _2055;
  uint32_t _2056;
  uint32_t _2057;
  uint32_t _2058;
  uint32_t _2058__PHI_TEMPORARY;
  uint32_t _2059;
  uint64_t _2060;
  uint64_t _2061;
  void* _2062;
  void* _2062__PHI_TEMPORARY;
  void* _2063;
  uint64_t _2064;
  uint64_t _2064__PHI_TEMPORARY;
  uint64_t _2065;
  uint64_t _2065__PHI_TEMPORARY;
  uint64_t _2066;
  uint64_t _2067;
  uint64_t _2068;
  uint64_t _2069;
  uint64_t _2070;
  uint16_t _2071;
  uint16_t _2071__PHI_TEMPORARY;
  uint16_t _2072;

  if ((((int32_t)_1933) < ((int32_t)0u))) {
    goto _2073;
  } else {
    goto _2074;
  }

_2074:
  _1939 = llvm_lshr_u32(_1933, 24);
  _1945__PHI_TEMPORARY = _1939;   /* for PHI node */
  goto _2075;

_2073:
  _1940 = llvm_OC_ctlz_OC_i32((_1933 ^ -1), 0);
  _1941 = llvm_OC_cttz_OC_i32(_1933, 1);
  _1942 = _1941 & 24;
  if ((((_1940 != 1u) & (((uint32_t)(llvm_add_u32((_1940 << 3), _1942))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_1933 & 12632256) ^ 8421504), _1942)) == 0u) & ((((_1933 & -33554432) != 3221225472u) & ((_1933 & -2097152) != 3766484992u)) & ((_1933 & -1048576) != 4034920448u))))) {
    goto _2076;
  } else {
    goto _2077;
  }

_2077:
  julia_throw_invalid_char_21(_1931, _1933);
  __builtin_unreachable();

_2076:
  _1943 = llvm_lshr_u32((_1933 & (llvm_select_u32((_1933 == 4294967295u), 0, (llvm_lshr_u32(-1, _1940))))), _1942);
  _1944 = (((_1943 & 127) | ((llvm_lshr_u32(_1943, 2)) & 8128)) | ((llvm_lshr_u32(_1943, 4)) & 520192)) | ((llvm_lshr_u32(_1943, 6)) & 33292288);
  _1945__PHI_TEMPORARY = _1944;   /* for PHI node */
  goto _2075;

_2075:
  _1945 = _1945__PHI_TEMPORARY;
  _1946 = llvm_OC_umax_OC_i32(_1945, 95);
  _1947 = ((uint64_t)(uint32_t)(llvm_select_u32((((uint32_t)_1945) < ((uint32_t)127u)), (_1946 & 31), 30)));
  _1948 = llvm_OC_bswap_OC_i32(_1933);
  *((uint32_t*)&_1934) = (((uint32_t)(bool)(((uint32_t)_1948) < ((uint32_t)128u))));
  *((uint32_t*)&_1935) = 0;
  _1949__PHI_TEMPORARY = (((uint32_t)_1948) < ((uint32_t)128u));   /* for PHI node */
  _1950__PHI_TEMPORARY = 1;   /* for PHI node */
  _1951__PHI_TEMPORARY = _1947;   /* for PHI node */
  _1952__PHI_TEMPORARY = _1933;   /* for PHI node */
  goto _2078;

  do {     /* Syntactic loop '' to make GCC happy */
_2078:
  _1949 = _1949__PHI_TEMPORARY;
  _1950 = _1950__PHI_TEMPORARY;
  _1951 = _1951__PHI_TEMPORARY;
  _1952 = _1952__PHI_TEMPORARY;
  _1953 = ((&((uint8_t*)_1932)[((int64_t)32)]));
  _1954 = *(uint64_t*)_1953;
  _1955 = ((&((uint8_t*)_1932)[((int64_t)40)]));
  _1956 = llvm_lshr_u64(_1954, 32);
  _1957 = ((uint32_t)_1956);
  _1958 = *(uint64_t*)_1955;
  _1959 = ((uint32_t)_1958);
  _1960 = llvm_OC_bswap_OC_i32(_1957);
  _1961 = llvm_select_bool(_1949, (((uint32_t)_1960) < ((uint32_t)128u)), 0);
  if (_1961) {
    goto _2079;
  } else {
    goto _2080;
  }

_2080:
  _1970 = llvm_OC_ctlz_OC_i32((_1952 ^ -1), 0);
  _1971 = ((uint64_t)(uint32_t)_1970);
  _1972 = llvm_OC_cttz_OC_i32(_1952, 0);
  _1973 = _1972 & 56;
  _1974 = ((uint64_t)(uint32_t)_1973);
  _1975 = llvm_select_bool((((uint32_t)_1972) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1952 & 12632256) ^ 8421504), _1973)) != 0u), 0);
  if ((((_1970 == 1u) | (((uint64_t)(llvm_add_u64((_1971 << 3), _1974))) > ((uint64_t)UINT64_C(32)))) | _1975)) {
    goto _2081;
  } else {
    goto _2082;
  }

_2082:
  _1976 = llvm_OC_ctlz_OC_i32((_1957 ^ -1), 0);
  _1977 = ((uint64_t)(uint32_t)_1976);
  _1978 = llvm_OC_cttz_OC_i32(_1957, 0);
  _1979 = _1978 & 56;
  _1980 = ((uint64_t)(uint32_t)_1979);
  _1981 = llvm_select_bool((((uint32_t)_1978) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1957 & 12632256) ^ 8421504), _1979)) != 0u), 0);
  if ((((_1976 == 1u) | (((uint64_t)(llvm_add_u64((_1977 << 3), _1980))) > ((uint64_t)UINT64_C(32)))) | _1981)) {
    goto _2081;
  } else {
    goto _2083;
  }

_2083:
  if ((((int32_t)_1952) < ((int32_t)0u))) {
    goto _2084;
  } else {
    goto _2085;
  }

_2085:
  _1982 = llvm_lshr_u32(_1952, 24);
  _1985__PHI_TEMPORARY = _1982;   /* for PHI node */
  goto _2086;

_2084:
  if ((((_1970 == 1u) | (((uint64_t)(llvm_add_u64((_1971 << 3), _1974))) > ((uint64_t)UINT64_C(32)))) | (_1975 | ((((_1952 & -33554432) == 3221225472u) | ((_1952 & -2097152) == 3766484992u)) | ((_1952 & -1048576) == 4034920448u))))) {
    goto _2087;
  } else {
    goto _2088;
  }

_2088:
  _1983 = llvm_select_u32((((uint32_t)_1972) < ((uint32_t)32u)), (llvm_lshr_u32((_1952 & (llvm_select_u32((_1952 == 4294967295u), 0, (llvm_lshr_u32(-1, _1970))))), _1973)), 0);
  _1984 = (((_1983 & 127) | ((llvm_lshr_u32(_1983, 2)) & 8128)) | ((llvm_lshr_u32(_1983, 4)) & 520192)) | ((llvm_lshr_u32(_1983, 6)) & 33292288);
  _1985__PHI_TEMPORARY = _1984;   /* for PHI node */
  goto _2086;

_2086:
  _1985 = _1985__PHI_TEMPORARY;
  if ((((int64_t)_1954) < ((int64_t)UINT64_C(0)))) {
    goto _2089;
  } else {
    goto _2090;
  }

_2090:
  _1986 = llvm_lshr_u32(_1957, 24);
  _1989__PHI_TEMPORARY = _1986;   /* for PHI node */
  goto _2091;

_2089:
  if ((((_1976 == 1u) | (((uint64_t)(llvm_add_u64((_1977 << 3), _1980))) > ((uint64_t)UINT64_C(32)))) | (_1981 | ((((_1957 & -33554432) == 3221225472u) | ((_1957 & -2097152) == 3766484992u)) | ((_1957 & -1048576) == 4034920448u))))) {
    goto _2092;
  } else {
    goto _2093;
  }

_2093:
  _1987 = llvm_select_u32((((uint32_t)_1978) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_1956 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _1976)))) & _1957), _1979)), 0);
  _1988 = (((_1987 & 127) | ((llvm_lshr_u32(_1987, 2)) & 8128)) | ((llvm_lshr_u32(_1987, 4)) & 520192)) | ((llvm_lshr_u32(_1987, 6)) & 33292288);
  _1989__PHI_TEMPORARY = _1988;   /* for PHI node */
  goto _2091;

_2091:
  _1989 = _1989__PHI_TEMPORARY;
  _1990 = jsk_utf8proc_grapheme_break_stateful(_1985, _1989, (&_1934));
  if ((((bool)_1990&1u))) {
    goto _2094;
  } else {
    goto _2095;
  }

_2095:
  if (((_1954 & INT64_C(-1103806595072)) == UINT64_C(16321198981218566144))) {
    goto _2096;
  } else {
    goto _2097;
  }

_2096:
  _2003 = *((uint32_t*)&_1934);
  *((uint32_t*)&_1935) = _2003;
  _2004 = llvm_OC_ctlz_OC_i32((_1959 ^ -1), 0);
  _2005 = ((uint64_t)(uint32_t)_2004);
  _2006 = llvm_OC_cttz_OC_i32(_1959, 0);
  _2007 = _2006 & 56;
  _2008 = ((uint64_t)(uint32_t)_2007);
  _2009 = llvm_select_bool((((uint32_t)_2006) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1959 & 12632256) ^ 8421504), _2007)) != 0u), 0);
  if ((((_2004 == 1u) | (((uint64_t)(llvm_add_u64((_2005 << 3), _2008))) > ((uint64_t)UINT64_C(32)))) | _2009)) {
    goto _2098;
  } else {
    goto _2099;
  }

_2099:
  _2010 = ((llvm_lshr_u32(_1957, 8)) & 13) | 8192;
  if ((((int32_t)_1959) < ((int32_t)0u))) {
    goto _2100;
  } else {
    goto _2101;
  }

_2101:
  _2011 = llvm_lshr_u32(_1959, 24);
  _2014__PHI_TEMPORARY = _2011;   /* for PHI node */
  goto _2102;

_2100:
  if ((((_2004 == 1u) | (((uint64_t)(llvm_add_u64((_2005 << 3), _2008))) > ((uint64_t)UINT64_C(32)))) | (_2009 | ((((_1959 & -33554432) == 3221225472u) | ((_1959 & -2097152) == 3766484992u)) | ((_1959 & -1048576) == 4034920448u))))) {
    goto _2103;
  } else {
    goto _2104;
  }

_2104:
  _2012 = llvm_select_u32((((uint32_t)_2006) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_1959 == 4294967295u), 0, (llvm_lshr_u32(-1, _2004)))) & _1959), _2007)), 0);
  _2013 = (((_2012 & 127) | ((llvm_lshr_u32(_2012, 2)) & 8128)) | ((llvm_lshr_u32(_2012, 4)) & 520192)) | ((llvm_lshr_u32(_2012, 6)) & 33292288);
  _2014__PHI_TEMPORARY = _2013;   /* for PHI node */
  goto _2102;

_2102:
  _2014 = _2014__PHI_TEMPORARY;
  _2015 = jsk_utf8proc_grapheme_break_stateful(_2010, _2014, (&_1935));
  if ((((bool)_2015&1u))) {
    goto _2105;
  } else {
    goto _2097;
  }

_2081:
  *((uint32_t*)&_1934) = 0;
  goto _2094;

_2094:
  if (((llvm_select_bool((_1956 == UINT64_C(553648128)), (_1959 == 1023410176u), 0)) | (_1956 == UINT64_C(4294967295)))) {
    goto _2105;
  } else {
    goto _2106;
  }

_2106:
  _1991 = llvm_OC_ctlz_OC_i32((_1957 ^ -1), 0);
  _1992 = ((uint64_t)(uint32_t)_1991);
  _1993 = llvm_OC_cttz_OC_i32(_1957, 0);
  _1994 = _1993 & 56;
  _1995 = ((uint64_t)(uint32_t)_1994);
  _1996 = llvm_select_bool((((uint32_t)_1993) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1957 & 12632256) ^ 8421504), _1994)) != 0u), 0);
  _1997 = (((_1957 & -33554432) == 3221225472u) | ((_1957 & -2097152) == 3766484992u)) | ((_1957 & -1048576) == 4034920448u);
  if ((((((_1991 == 1u) | (((uint64_t)(llvm_add_u64((_1992 << 3), _1995))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_1954) > ((uint64_t)UINT64_C(17122614315006820351))) & (_1956 != UINT64_C(3986669312))) & (((((uint64_t)_1954) < ((uint64_t)UINT64_C(17185876919829135360))) & (_1956 != UINT64_C(4001398784))) | ((((uint64_t)_1954) > ((uint64_t)UINT64_C(17622514693983698943))) & (_1956 != UINT64_C(4103061439)))))) | _1996) | _1997)) {
    goto _2105;
  } else {
    goto _2107;
  }

_2107:
  _1998 = llvm_lshr_u32(_1957, 24);
  if ((((int64_t)_1954) < ((int64_t)UINT64_C(0)))) {
    goto _2108;
  } else {
    _2001__PHI_TEMPORARY = _1998;   /* for PHI node */
    goto _2109;
  }

_2108:
  if ((((_1991 == 1u) | (((uint64_t)(llvm_add_u64((_1992 << 3), _1995))) > ((uint64_t)UINT64_C(32)))) | (_1996 | _1997))) {
    goto _2110;
  } else {
    goto _2111;
  }

_2111:
  _1999 = llvm_select_u32((((uint32_t)_1993) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _1991)) & _1957), _1994)), 0);
  _2000 = (((_1999 & 127) | ((llvm_lshr_u32(_1999, 2)) & 8128)) | ((llvm_lshr_u32(_1999, 4)) & 520192)) | ((llvm_lshr_u32(_1999, 6)) & 33292288);
  _2001__PHI_TEMPORARY = _2000;   /* for PHI node */
  goto _2109;

_2109:
  _2001 = _2001__PHI_TEMPORARY;
  _2002 = jsk_jl_id_char(_2001);
  if ((_2002 == 0u)) {
    goto _2105;
  } else {
    goto _2097;
  }

_2079:
  if ((((int64_t)_1954) < ((int64_t)UINT64_C(0)))) {
    goto _2112;
  } else {
    goto _2113;
  }

_2113:
  _1962 = llvm_lshr_u32(_1957, 24);
  _1968__PHI_TEMPORARY = _1962;   /* for PHI node */
  goto _2114;

_2112:
  _1963 = llvm_OC_ctlz_OC_i32((_1957 ^ -1), 0);
  _1964 = llvm_OC_cttz_OC_i32(_1957, 1);
  _1965 = _1964 & 24;
  if ((((_1963 != 1u) & (((uint32_t)(llvm_add_u32((_1963 << 3), _1965))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_1957 & 12632256) ^ 8421504), _1965)) == 0u) & ((((_1957 & -33554432) != 3221225472u) & ((_1957 & -2097152) != 3766484992u)) & ((_1957 & -1048576) != 4034920448u))))) {
    goto _2115;
  } else {
    goto _2116;
  }

_2115:
  _1966 = llvm_lshr_u32(((llvm_select_u32((_1956 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _1963)))) & _1957), _1965);
  _1967 = (_1966 & 127) | ((llvm_lshr_u32(_1966, 2)) & 192);
  _1968__PHI_TEMPORARY = _1967;   /* for PHI node */
  goto _2114;

_2114:
  _1968 = _1968__PHI_TEMPORARY;
  if ((llvm_select_bool((_1968 != 33u), 1, (_1959 != 1023410176u)))) {
    goto _2117;
  } else {
    goto _2105;
  }

_2117:
  _1969 = *(uint8_t*)(((&((uint8_t*)(&_j_constYY_OC_61))[((int64_t)(((uint64_t)(uint32_t)_1968)))])));
  if ((((bool)_1969&1u))) {
    goto _2097;
  } else {
    goto _2105;
  }

_2097:
  _2016 = *(void**)_1932;
  _2017 = ((&((uint8_t*)_2016)[((int64_t)16)]));
  _2018 = *(uint64_t*)_2017;
  _2019 = ((&((uint8_t*)_2016)[((int64_t)8)]));
  _2020 = *(uint64_t*)_2019;
  if ((((int64_t)_2020) > ((int64_t)_2018))) {
    goto _2118;
  } else {
    _2037__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2119;
  }

_2118:
  _2021 = *(void**)_2016;
  _2022 = *(uint8_t*)(((&((uint8_t*)_2021)[((int64_t)_2018)])));
  *(uint64_t*)_2017 = (llvm_add_u64(_2018, 1));
  _2023 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2022)), 0);
  _2024 = llvm_sub_u8(32, (llvm_shl_u8(_2023, 3)));
  _2025 = (((uint32_t)(uint8_t)_2022)) << 24;
  if ((((uint8_t)_2024) > ((uint8_t)((uint8_t)16)))) {
    _2037__PHI_TEMPORARY = _2025;   /* for PHI node */
    goto _2119;
  } else {
    _2026__PHI_TEMPORARY = 16;   /* for PHI node */
    _2027__PHI_TEMPORARY = _2025;   /* for PHI node */
    goto _2120;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2120:
  _2026 = _2026__PHI_TEMPORARY;
  _2027 = _2027__PHI_TEMPORARY;
  if (((((int64_t)_2026) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2026) < ((uint64_t)(((uint64_t)(uint8_t)_2024)))))) {
    _2037__PHI_TEMPORARY = _2027;   /* for PHI node */
    goto _2119;
  } else {
    goto _2121;
  }

_2121:
  _2028 = *(uint64_t*)_2017;
  _2029 = *(uint64_t*)_2019;
  if ((((int64_t)_2029) > ((int64_t)_2028))) {
    goto _2122;
  } else {
    _2037__PHI_TEMPORARY = _2027;   /* for PHI node */
    goto _2119;
  }

_2122:
  _2030 = *(void**)_2016;
  _2031 = *(uint8_t*)(((&((uint8_t*)_2030)[((int64_t)_2028)])));
  if ((((int8_t)_2031) > ((int8_t)((uint8_t)-65)))) {
    _2037__PHI_TEMPORARY = _2027;   /* for PHI node */
    goto _2119;
  } else {
    goto _2123;
  }

_2123:
  _2032 = llvm_select_u32((((int64_t)_2028) < ((int64_t)_2029)), (((uint32_t)(uint8_t)_2031)), 0);
  _2033 = *(uint64_t*)_2017;
  *(uint64_t*)_2017 = (llvm_add_u64(_2033, 1));
  _2034 = llvm_neg_u64(_2026);
  _2035 = _2027 | (llvm_select_u32((((int64_t)_2026) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2034) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2032, (((uint32_t)_2034)))))), (llvm_select_u32((((uint64_t)_2026) > ((uint64_t)UINT64_C(31))), 0, (_2032 << (((uint32_t)_2026)))))));
  _2036 = llvm_add_u64(_2026, -8);
  _2026__PHI_TEMPORARY = _2036;   /* for PHI node */
  _2027__PHI_TEMPORARY = _2035;   /* for PHI node */
  goto _2120;

  } while (1); /* end of syntactic loop '' */
_2119:
  _2037 = _2037__PHI_TEMPORARY;
  _2038 = *(uint64_t*)_1953;
  _2039 = *(uint64_t*)_1955;
  _2040 = jsyn_cbe_fshl_i64(_2039, _2038, 32);
  _2041 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2037)), _2039, 32);
  *(uint64_t*)_1953 = _2040;
  *(uint64_t*)_1955 = _2041;
  _2042 = ((&((uint8_t*)_1932)[((int64_t)56)]));
  _2043 = *(uint64_t*)_2042;
  _2044 = ((&((uint8_t*)_1932)[((int64_t)64)]));
  _2045 = *(uint64_t*)_2044;
  _2046 = ((&((uint8_t*)_1932)[((int64_t)72)]));
  _2047 = *(uint64_t*)_2046;
  _2048 = *(void**)_1932;
  _2049 = *(uint64_t*)(((&((uint8_t*)_2048)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1932)[((int64_t)48)]))) = _2043;
  *(uint64_t*)_2042 = _2045;
  *(uint64_t*)_2044 = _2047;
  *(uint64_t*)_2046 = _2049;
  _2050 = *(uint64_t*)_1953;
  _2051 = ((uint32_t)_2050);
  if ((((int32_t)_2051) < ((int32_t)0u))) {
    goto _2124;
  } else {
    goto _2125;
  }

_2125:
  _2052 = llvm_lshr_u32(_2051, 24);
  _2058__PHI_TEMPORARY = _2052;   /* for PHI node */
  goto _2126;

_2124:
  _2053 = llvm_OC_ctlz_OC_i32((_2051 ^ -1), 0);
  _2054 = llvm_OC_cttz_OC_i32(_2051, 1);
  _2055 = _2054 & 24;
  if ((((_2053 != 1u) & (((uint32_t)(llvm_add_u32((_2053 << 3), _2055))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_2051 & 12632256) ^ 8421504), _2055)) == 0u) & ((((_2051 & -33554432) != 3221225472u) & ((_2051 & -2097152) != 3766484992u)) & ((_2051 & -1048576) != 4034920448u))))) {
    goto _2127;
  } else {
    goto _2128;
  }

_2127:
  _2056 = llvm_lshr_u32(((llvm_select_u32((_2051 == 4294967295u), 0, (llvm_lshr_u32(-1, _2053)))) & _2051), _2055);
  _2057 = (((_2056 & 127) | ((llvm_lshr_u32(_2056, 2)) & 8128)) | ((llvm_lshr_u32(_2056, 4)) & 520192)) | ((llvm_lshr_u32(_2056, 6)) & 33292288);
  _2058__PHI_TEMPORARY = _2057;   /* for PHI node */
  goto _2126;

_2126:
  _2058 = _2058__PHI_TEMPORARY;
  _2059 = llvm_OC_umax_OC_i32(_2058, 95);
  _2060 = (_1951 << 5) | (((uint64_t)(uint32_t)(llvm_select_u32((((uint32_t)_2058) < ((uint32_t)127u)), (_2059 & 31), 30))));
  _2061 = llvm_add_u64(_1950, 1);
  _1949__PHI_TEMPORARY = _1961;   /* for PHI node */
  _1950__PHI_TEMPORARY = _2061;   /* for PHI node */
  _1951__PHI_TEMPORARY = _2060;   /* for PHI node */
  _1952__PHI_TEMPORARY = _2051;   /* for PHI node */
  goto _2078;

  } while (1); /* end of syntactic loop '' */
_2116:
  julia_throw_invalid_char_21(_1931, _1957);
  __builtin_unreachable();

_2087:
  julia_throw_invalid_char_21(_1931, _1952);
  __builtin_unreachable();

_2092:
  julia_throw_invalid_char_21(_1931, _1957);
  __builtin_unreachable();

_2110:
  julia_throw_invalid_char_21(_1931, _1957);
  __builtin_unreachable();

_2103:
  julia_throw_invalid_char_21(_1931, _1959);
  __builtin_unreachable();

_2098:
  *((uint32_t*)&_1935) = 0;
  goto _2105;

_2128:
  julia_throw_invalid_char_21(_1931, _2051);
  __builtin_unreachable();

_2105:
  if ((((int64_t)_1950) < ((int64_t)UINT64_C(11)))) {
    goto _2129;
  } else {
    goto _2130;
  }

_2131:
  _2062 = _2062__PHI_TEMPORARY;
  _2063 = memcpy(_1930, _2062, 32);
  return;
_2130:
  julia_emit_20((&_1936), _1931, _1932, 3, 1);
  _2062__PHI_TEMPORARY = (&_1936);   /* for PHI node */
  goto _2131;

_2129:
  switch (_1951) {
  default:
    _2064__PHI_TEMPORARY = 39;   /* for PHI node */
    _2065__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2132;
  case UINT64_C(6337125):
    goto _2133;
  case UINT64_C(674469):
    goto _2133;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2132:
  _2064 = _2064__PHI_TEMPORARY;
  _2065 = _2065__PHI_TEMPORARY;
  if ((((int64_t)_2065) > ((int64_t)_2064))) {
    _2071__PHI_TEMPORARY = 3;   /* for PHI node */
    goto _2134;
  } else {
    goto _2135;
  }

_2135:
  _2066 = llvm_lshr_u64((llvm_add_u64(_2065, _2064)), 1);
  _2067 = llvm_add_u64(_2066, -1);
  _2068 = *(uint64_t*)(((&((uint64_t*)(&_j_constYY_OC_62))[((int64_t)_2067)])));
  if ((_2068 == _1951)) {
    goto _2136;
  } else {
    goto _2137;
  }

_2137:
  _2069 = llvm_select_u64((((uint64_t)_2068) < ((uint64_t)_1951)), _2064, _2067);
  _2070 = llvm_select_u64((((uint64_t)_2068) < ((uint64_t)_1951)), (llvm_add_u64(_2066, 1)), _2065);
  _2064__PHI_TEMPORARY = _2069;   /* for PHI node */
  _2065__PHI_TEMPORARY = _2070;   /* for PHI node */
  goto _2132;

  } while (1); /* end of syntactic loop '' */
_2134:
  _2071 = _2071__PHI_TEMPORARY;
  julia_emit_20((&_1938), _1931, _1932, _2071, 1);
  _2062__PHI_TEMPORARY = (&_1938);   /* for PHI node */
  goto _2131;

_2133:
  julia_emit_20((&_1937), _1931, _1932, 43, 1);
  _2062__PHI_TEMPORARY = (&_1937);   /* for PHI node */
  goto _2131;

_2136:
  _2072 = *(uint16_t*)(((&((uint16_t*)(&_j_constYY_OC_63))[((int64_t)_2067)])));
  _2071__PHI_TEMPORARY = _2072;   /* for PHI node */
  goto _2134;

}


static uint8_t julia_is_operator_start_char_23(void* _2138, uint32_t _2139) {
  uint32_t _2140;
  uint64_t _2141;
  uint32_t _2142;
  uint32_t _2143;
  uint64_t _2144;
  bool _2145;
  bool _2146;
  uint32_t _2147;
  uint32_t _2148;
  uint32_t _2149;
  uint32_t _2150;
  uint32_t _2150__PHI_TEMPORARY;
  bool _2151;
  bool _2151__PHI_TEMPORARY;
  bool _2152;

  if ((_2139 == 4294967295u)) {
    _2151__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2153;
  } else {
    goto _2154;
  }

_2154:
  _2140 = llvm_OC_ctlz_OC_i32((_2139 ^ -1), 0);
  _2141 = ((uint64_t)(uint32_t)_2140);
  _2142 = llvm_OC_cttz_OC_i32(_2139, 0);
  _2143 = _2142 & 56;
  _2144 = ((uint64_t)(uint32_t)_2143);
  _2145 = llvm_select_bool((((uint32_t)_2142) < ((uint32_t)32u)), ((llvm_lshr_u32(((_2139 & 12632256) ^ 8421504), _2143)) != 0u), 0);
  _2146 = (((_2139 & -33554432) == 3221225472u) | ((_2139 & -2097152) == 3766484992u)) | ((_2139 & -1048576) == 4034920448u);
  if ((((((_2140 == 1u) | (((uint64_t)(llvm_add_u64((_2141 << 3), _2144))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_2139) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_2139, 191905856))) < ((uint32_t)4193304640u)))) | _2145) | _2146)) {
    _2151__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2153;
  } else {
    goto _2155;
  }

_2155:
  _2147 = llvm_lshr_u32(_2139, 24);
  if ((((int32_t)_2139) < ((int32_t)0u))) {
    goto _2156;
  } else {
    _2150__PHI_TEMPORARY = _2147;   /* for PHI node */
    goto _2157;
  }

_2156:
  if ((((_2140 == 1u) | (((uint64_t)(llvm_add_u64((_2141 << 3), _2144))) > ((uint64_t)UINT64_C(32)))) | (_2145 | _2146))) {
    goto _2158;
  } else {
    goto _2159;
  }

_2158:
  julia_throw_invalid_char_21(_2138, _2139);
  __builtin_unreachable();

_2159:
  _2148 = llvm_select_u32((((uint32_t)_2142) < ((uint32_t)32u)), (llvm_lshr_u32((_2139 & (llvm_lshr_u32(-1, _2140))), _2143)), 0);
  _2149 = (((_2148 & 127) | ((llvm_lshr_u32(_2148, 2)) & 8128)) | ((llvm_lshr_u32(_2148, 4)) & 520192)) | ((llvm_lshr_u32(_2148, 6)) & 33292288);
  _2150__PHI_TEMPORARY = _2149;   /* for PHI node */
  goto _2157;

_2157:
  _2150 = _2150__PHI_TEMPORARY;
  if ((((llvm_select_bool((((_2150 == 33u) | ((_2150 & -4) == 36u)) | ((_2150 & -2) == 42u)), 1, (((uint32_t)(llvm_add_u32(_2150, -45))) < ((uint32_t)3u)))) | (_2150 == 58u)) | ((_2150 & -4) == 60u))) {
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  } else {
    goto _2160;
  }

_2153:
  _2151 = _2151__PHI_TEMPORARY;
  return (((uint8_t)(bool)_2151));
_2160:
  switch (_2150) {
  default:
    goto _2161;
  case 92u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 94u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 124u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 126u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 166u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 172u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 177u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 183u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 215u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 247u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 903u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8230u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8285u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8523u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8656u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8655u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8654u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8653u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8652u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8651u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8649u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8647u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8646u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8644u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8641u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8640u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8637u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8636u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8635u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8634u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8631u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8630u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8622u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8620u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8619u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8618u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8617u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8614u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8612u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8611u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8610u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8608u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8606u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8605u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8604u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8603u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8602u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8596u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8595u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8594u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8593u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8592u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8658u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8660u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  }

_2161:
  if ((((uint32_t)(llvm_add_u32(_2150, -8666))) < ((uint32_t)4u))) {
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  } else {
    goto _2162;
  }

_2162:
  switch (_2150) {
  default:
    goto _2163;
  case 8672u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8674u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  }

_2163:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_2150, -8692))) < ((uint32_t)12u)), 1, (((uint32_t)(llvm_add_u32(_2150, -8712))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -8722))) < ((uint32_t)3u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -8727))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -8740))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -8759))) < ((uint32_t)2u)))) | ((_2150 & -2) == 8762u)), 1, (((uint32_t)(llvm_add_u32(_2150, -8765))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -8768))) < ((uint32_t)76u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -8845))) < ((uint32_t)16u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -8862))) < ((uint32_t)6u))))) {
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  } else {
    goto _2164;
  }

_2164:
  switch (_2150) {
  default:
    goto _2165;
  case 8873u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8876u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 8878u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  }

_2165:
  if ((llvm_select_bool((llvm_select_bool(((llvm_select_bool(((_2150 & -8) == 8880u), 1, (((uint32_t)(llvm_add_u32(_2150, -8891))) < ((uint32_t)3u)))) | ((_2150 & -4) == 8900u)), 1, (((uint32_t)(llvm_add_u32(_2150, -8905))) < ((uint32_t)11u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -8917))) < ((uint32_t)43u))))) {
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  } else {
    goto _2166;
  }

_2166:
  switch (_2150) {
  default:
    goto _2167;
  case 9023u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 9655u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10178u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  }

_2167:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_2150, -10183))) < ((uint32_t)3u)), 1, (((uint32_t)(llvm_add_u32(_2150, -10193))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -10197))) < ((uint32_t)3u)))) | ((_2150 & -2) == 10224u)), 1, (((uint32_t)(llvm_add_u32(_2150, -10229))) < ((uint32_t)3u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -10233))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -10496))) < ((uint32_t)25u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -10525))) < ((uint32_t)4u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -10564))) < ((uint32_t)45u))))) {
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  } else {
    goto _2168;
  }

_2168:
  switch (_2150) {
  default:
    goto _2169;
  case 10615u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10618u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10760u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10759u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10747u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10746u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10743u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10742u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10740u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10725u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10724u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10723u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10721u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10689u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10688u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10687u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10686u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10684u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10680u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10679u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10781u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  case 10783u:
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  }

_2169:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((((llvm_select_bool(((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_2150, -10786))) < ((uint32_t)13u)), 1, (((uint32_t)(llvm_add_u32(_2150, -10800))) < ((uint32_t)14u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -10816))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -10826))) < ((uint32_t)15u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -10842))) < ((uint32_t)10u)))) | ((_2150 & -2) == 10854u)), 1, (((uint32_t)(llvm_add_u32(_2150, -10858))) < ((uint32_t)112u)))) | (_2150 == 10971u)) | ((_2150 & -2) == 10986u)), 1, (((uint32_t)(llvm_add_u32(_2150, -10999))) < ((uint32_t)4u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -11056))) < ((uint32_t)21u)))), 1, (((uint32_t)(llvm_add_u32(_2150, -11079))) < ((uint32_t)6u))))) {
    _2151__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2153;
  } else {
    goto _2170;
  }

_2170:
  _2152 = (((uint32_t)(llvm_add_u32(_2150, -65513))) < ((uint32_t)4u)) | (_2150 == 129202u);
  _2151__PHI_TEMPORARY = _2152;   /* for PHI node */
  goto _2153;

}


static uint8_t julia_is_never_id_char_24(void* _2171, uint32_t _2172) {
  uint32_t _2173;
  uint64_t _2174;
  uint32_t _2175;
  uint32_t _2176;
  uint64_t _2177;
  bool _2178;
  uint32_t _2179;
  bool _2180;
  uint32_t _2181;
  uint32_t _2182;
  uint32_t _2183;
  uint32_t _2183__PHI_TEMPORARY;
  uint32_t _2184;
  uint64_t _2185;
  uint64_t _2186;
  uint64_t _2186__PHI_TEMPORARY;
  uint32_t _2187;
  uint32_t _2188;
  uint32_t _2189;
  uint32_t _2189__PHI_TEMPORARY;
  bool _2190;
  bool _2191;
  bool _2191__PHI_TEMPORARY;
  uint32_t _2192;

  _2173 = llvm_OC_ctlz_OC_i32((_2172 ^ -1), 0);
  _2174 = ((uint64_t)(uint32_t)_2173);
  _2175 = llvm_OC_cttz_OC_i32(_2172, 0);
  _2176 = _2175 & 56;
  _2177 = ((uint64_t)(uint32_t)_2176);
  _2178 = llvm_select_bool((((uint32_t)_2175) < ((uint32_t)32u)), ((llvm_lshr_u32(((_2172 & 12632256) ^ 8421504), _2176)) != 0u), 0);
  _2179 = llvm_lshr_u32(_2172, 24);
  _2180 = (((_2172 & -33554432) == 3221225472u) | ((_2172 & -2097152) == 3766484992u)) | ((_2172 & -1048576) == 4034920448u);
  if ((((((_2173 == 1u) | (((uint64_t)(llvm_add_u64((_2174 << 3), _2177))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_2172) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_2172, 191905856))) < ((uint32_t)4193304640u)))) | _2178) | _2180)) {
    _2191__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2193;
  } else {
    goto _2194;
  }

_2194:
  if ((((int32_t)_2172) < ((int32_t)0u))) {
    goto _2195;
  } else {
    _2183__PHI_TEMPORARY = _2179;   /* for PHI node */
    goto _2196;
  }

_2195:
  if ((((_2173 == 1u) | (((uint64_t)(llvm_add_u64((_2174 << 3), _2177))) > ((uint64_t)UINT64_C(32)))) | (_2178 | _2180))) {
    goto _2197;
  } else {
    goto _2198;
  }

_2197:
  julia_throw_invalid_char_21(_2171, _2172);
  __builtin_unreachable();

_2198:
  _2181 = llvm_select_u32((((uint32_t)_2175) < ((uint32_t)32u)), (llvm_lshr_u32((_2172 & (llvm_select_u32((_2172 == 4294967295u), 0, (llvm_lshr_u32(-1, _2173))))), _2176)), 0);
  _2182 = (((_2181 & 127) | ((llvm_lshr_u32(_2181, 2)) & 8128)) | ((llvm_lshr_u32(_2181, 4)) & 520192)) | ((llvm_lshr_u32(_2181, 6)) & 33292288);
  _2183__PHI_TEMPORARY = _2182;   /* for PHI node */
  goto _2196;

_2196:
  _2183 = _2183__PHI_TEMPORARY;
  if ((((uint32_t)_2183) > ((uint32_t)1114111u))) {
    _2186__PHI_TEMPORARY = 30;   /* for PHI node */
    goto _2199;
  } else {
    goto _2200;
  }

_2200:
  _2184 = jsk_utf8proc_category(_2183);
  _2185 = ((int64_t)(int32_t)_2184);
  _2186__PHI_TEMPORARY = _2185;   /* for PHI node */
  goto _2199;

_2199:
  _2186 = _2186__PHI_TEMPORARY;
  if ((((int32_t)_2172) < ((int32_t)0u))) {
    goto _2201;
  } else {
    _2189__PHI_TEMPORARY = _2179;   /* for PHI node */
    goto _2202;
  }

_2201:
  if ((((_2173 == 1u) | (((uint64_t)(llvm_add_u64((_2174 << 3), _2177))) > ((uint64_t)UINT64_C(32)))) | (_2178 | _2180))) {
    goto _2203;
  } else {
    goto _2204;
  }

_2203:
  julia_throw_invalid_char_21(_2171, _2172);
  __builtin_unreachable();

_2204:
  _2187 = llvm_select_u32((((uint32_t)_2175) < ((uint32_t)32u)), (llvm_lshr_u32((_2172 & (llvm_select_u32((_2172 == 4294967295u), 0, (llvm_lshr_u32(-1, _2173))))), _2176)), 0);
  _2188 = (((_2187 & 127) | ((llvm_lshr_u32(_2187, 2)) & 8128)) | ((llvm_lshr_u32(_2187, 4)) & 520192)) | ((llvm_lshr_u32(_2187, 6)) & 33292288);
  _2189__PHI_TEMPORARY = _2188;   /* for PHI node */
  goto _2202;

_2202:
  _2189 = _2189__PHI_TEMPORARY;
  if ((((uint64_t)(llvm_add_u64(_2186, -23))) < ((uint64_t)UINT64_C(6)))) {
    _2191__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2193;
  } else {
    goto _2205;
  }

_2206:
  _2190 = ((bool)(((llvm_lshr_u54(UINT64_C(11258999068426243), (((((uint64_t)(uint32_t)_2192))&4294967295))))&4294967295))&1u);
  _2191__PHI_TEMPORARY = _2190;   /* for PHI node */
  goto _2193;

_2193:
  _2191 = _2191__PHI_TEMPORARY;
  return (((uint8_t)(bool)_2191));
_2205:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((((uint32_t)_2189) < ((uint32_t)255u)), (((uint64_t)(llvm_add_u64(_2186, -13))) < ((uint64_t)UINT64_C(6))), 0)) | (_2189 == 96u)), 1, (((uint32_t)(llvm_add_u32(_2189, -10214))) < ((uint32_t)10u)))), 1, (((uint32_t)(llvm_add_u32(_2189, -12296))) < ((uint32_t)10u)))), 1, (((uint32_t)(llvm_add_u32(_2189, -12308))) < ((uint32_t)8u))))) {
    _2191__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2193;
  } else {
    goto _2207;
  }

_2207:
  _2192 = llvm_add_u32(_2189, -65288);
  if ((((uint32_t)_2192) < ((uint32_t)54u))) {
    goto _2206;
  } else {
    _2191__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2193;
  }

}


static __noreturn void julia__throw_argerror_25(void* _2208, void* _2209) {
  jsk_throw();
  __builtin_unreachable();

}


static struct l_array_1_void_KC_ julia_AssertionError_26(void* _2210, void* _2211) {
  struct l_array_1_void_KC_ _2212;

  _2212 = llvm_ctor_ptra1(((void*)/*NULL*/0));
  _2212.array[0] = _2211;
  return _2212;
}


static void julia_lex_whitespace_27(void* _2213, void* _2214, void* _2215, uint32_t _2216) {
  struct l_array_4_uint64_t _2217;    /* Address-exposed local */
  uint16_t _2218;
  uint16_t _2218__PHI_TEMPORARY;
  uint32_t _2219;
  uint32_t _2219__PHI_TEMPORARY;
  uint16_t _2220;
  void* _2221;
  uint64_t _2222;
  uint64_t _2223;
  void* _2224;
  uint64_t _2225;
  uint32_t _2226;
  uint64_t _2227;
  uint32_t _2228;
  uint64_t _2229;
  uint32_t _2230;
  uint32_t _2231;
  uint64_t _2232;
  bool _2233;
  bool _2234;
  uint32_t _2235;
  uint32_t _2236;
  uint32_t _2237;
  bool _2238;
  bool _2238__PHI_TEMPORARY;
  void* _2239;
  void* _2240;
  uint64_t _2241;
  void* _2242;
  uint64_t _2243;
  void* _2244;
  uint8_t _2245;
  uint8_t _2246;
  uint8_t _2247;
  uint32_t _2248;
  uint64_t _2249;
  uint64_t _2249__PHI_TEMPORARY;
  uint32_t _2250;
  uint32_t _2250__PHI_TEMPORARY;
  uint64_t _2251;
  uint64_t _2252;
  void* _2253;
  uint8_t _2254;
  uint32_t _2255;
  uint64_t _2256;
  uint64_t _2257;
  uint32_t _2258;
  uint64_t _2259;
  uint32_t _2260;
  uint32_t _2260__PHI_TEMPORARY;
  uint64_t _2261;
  uint64_t _2262;
  uint64_t _2263;
  uint64_t _2264;
  void* _2265;
  uint64_t _2266;
  void* _2267;
  uint64_t _2268;
  void* _2269;
  uint64_t _2270;
  void* _2271;
  uint64_t _2272;
  uint64_t _2273;
  uint32_t _2274;
  void* _2275;

  _2218__PHI_TEMPORARY = 1;   /* for PHI node */
  _2219__PHI_TEMPORARY = _2216;   /* for PHI node */
  goto _2276;

  do {     /* Syntactic loop '' to make GCC happy */
_2276:
  _2218 = _2218__PHI_TEMPORARY;
  _2219 = _2219__PHI_TEMPORARY;
  _2220 = llvm_select_u16((_2219 == 167772160u), 2, _2218);
  _2221 = ((&((uint8_t*)_2215)[((int64_t)32)]));
  _2222 = *(uint64_t*)_2221;
  _2223 = ((uint64_t)_2222);
  _2224 = ((&((uint8_t*)_2215)[((int64_t)40)]));
  _2225 = llvm_lshr_u64(_2223, 32);
  _2226 = ((uint32_t)_2225);
  _2227 = *(uint64_t*)_2224;
  _2228 = llvm_OC_ctlz_OC_i32((_2226 ^ -1), 0);
  _2229 = ((uint64_t)(uint32_t)_2228);
  _2230 = llvm_OC_cttz_OC_i32(_2226, 0);
  _2231 = _2230 & 56;
  _2232 = ((uint64_t)(uint32_t)_2231);
  _2233 = ((_2228 == 1u) | (((uint64_t)(llvm_add_u64((_2229 << 3), _2232))) > ((uint64_t)UINT64_C(32)))) | (llvm_select_bool((((uint32_t)_2230) < ((uint32_t)32u)), ((llvm_lshr_u32(((_2226 & 12632256) ^ 8421504), _2231)) != 0u), 0));
  _2234 = (((_2226 & -33554432) == 3221225472u) | ((_2226 & -2097152) == 3766484992u)) | ((_2226 & -1048576) == 4034920448u);
  if (((_2234 | (((((uint64_t)_2223) > ((uint64_t)UINT64_C(17122614315006820351))) & (_2225 != UINT64_C(3986669312))) & (((((uint64_t)_2223) < ((uint64_t)UINT64_C(17185876919829135360))) & (_2225 != UINT64_C(4001398784))) | ((((uint64_t)_2223) > ((uint64_t)UINT64_C(17622514693983698943))) & (_2225 != UINT64_C(4103061439)))))) | _2233)) {
    _2238__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2277;
  } else {
    goto _2278;
  }

_2278:
  if ((_2225 == UINT64_C(536870912))) {
    _2238__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2277;
  } else {
    goto _2279;
  }

_2279:
  if (((((uint64_t)_2223) < ((uint64_t)UINT64_C(648518350636318720))) & (_2225 != UINT64_C(150994944)))) {
    goto _2280;
  } else {
    goto _2281;
  }

_2281:
  if ((((uint64_t)_2223) < ((uint64_t)UINT64_C(936748722493063168)))) {
    _2238__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2277;
  } else {
    goto _2282;
  }

_2282:
  switch ((((uint32_t)_2225))) {
  default:
    goto _2283;
  case 3263496192u:
    _2238__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2277;
  case 218103808u:
    _2238__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2277;
  }

_2280:
  if ((_2225 == UINT64_C(3263496192))) {
    _2238__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2277;
  } else {
    goto _2283;
  }

_2283:
  if ((((((uint64_t)_2223) < ((uint64_t)UINT64_C(14024209243926691840))) & (_2225 != UINT64_C(3265265664))) | _2233)) {
    _2238__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2277;
  } else {
    goto _2284;
  }

_2284:
  if (((((uint64_t)(llvm_add_u64((_2229 << 3), _2232))) > ((uint64_t)UINT64_C(32))) | _2234)) {
    goto _2285;
  } else {
    goto _2286;
  }

_2286:
  _2235 = llvm_select_u32((((uint32_t)_2230) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_2225 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _2228)))) & _2226), _2231)), 0);
  _2236 = (((_2235 & 127) | ((llvm_lshr_u32(_2235, 2)) & 8128)) | ((llvm_lshr_u32(_2235, 4)) & 520192)) | ((llvm_lshr_u32(_2235, 6)) & 33292288);
  if ((((uint32_t)_2236) > ((uint32_t)1114111u))) {
    _2238__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2277;
  } else {
    goto _2287;
  }

_2287:
  _2237 = jsk_utf8proc_category(_2236);
  _2238__PHI_TEMPORARY = (_2237 == 23u);   /* for PHI node */
  goto _2277;

_2277:
  _2238 = _2238__PHI_TEMPORARY;
  if ((_2238 | (_2225 == UINT64_C(4022058752)))) {
    goto _2288;
  } else {
    goto _2289;
  }

_2288:
  if ((_2220 == ((uint16_t)2))) {
    goto _2290;
  } else {
    goto _2291;
  }

_2290:
  if ((_2225 == UINT64_C(167772160))) {
    goto _2289;
  } else {
    goto _2292;
  }

_2292:
  if ((llvm_select_bool((_2225 != UINT64_C(218103808)), 1, ((_2227 & INT64_C(4294967295)) != UINT64_C(167772160))))) {
    goto _2291;
  } else {
    goto _2289;
  }

_2291:
  _2239 = *(void**)_2215;
  _2240 = ((&((uint8_t*)_2239)[((int64_t)16)]));
  _2241 = *(uint64_t*)_2240;
  _2242 = ((&((uint8_t*)_2239)[((int64_t)8)]));
  _2243 = *(uint64_t*)_2242;
  if ((((int64_t)_2243) > ((int64_t)_2241))) {
    goto _2293;
  } else {
    _2260__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2294;
  }

_2293:
  _2244 = *(void**)_2239;
  _2245 = *(uint8_t*)(((&((uint8_t*)_2244)[((int64_t)_2241)])));
  *(uint64_t*)_2240 = (llvm_add_u64(_2241, 1));
  _2246 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2245)), 0);
  _2247 = llvm_sub_u8(32, (llvm_shl_u8(_2246, 3)));
  _2248 = (((uint32_t)(uint8_t)_2245)) << 24;
  if ((((uint8_t)_2247) > ((uint8_t)((uint8_t)16)))) {
    _2260__PHI_TEMPORARY = _2248;   /* for PHI node */
    goto _2294;
  } else {
    _2249__PHI_TEMPORARY = 16;   /* for PHI node */
    _2250__PHI_TEMPORARY = _2248;   /* for PHI node */
    goto _2295;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2295:
  _2249 = _2249__PHI_TEMPORARY;
  _2250 = _2250__PHI_TEMPORARY;
  if (((((int64_t)_2249) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2249) < ((uint64_t)(((uint64_t)(uint8_t)_2247)))))) {
    _2260__PHI_TEMPORARY = _2250;   /* for PHI node */
    goto _2294;
  } else {
    goto _2296;
  }

_2296:
  _2251 = *(uint64_t*)_2240;
  _2252 = *(uint64_t*)_2242;
  if ((((int64_t)_2252) > ((int64_t)_2251))) {
    goto _2297;
  } else {
    _2260__PHI_TEMPORARY = _2250;   /* for PHI node */
    goto _2294;
  }

_2297:
  _2253 = *(void**)_2239;
  _2254 = *(uint8_t*)(((&((uint8_t*)_2253)[((int64_t)_2251)])));
  if ((((int8_t)_2254) > ((int8_t)((uint8_t)-65)))) {
    _2260__PHI_TEMPORARY = _2250;   /* for PHI node */
    goto _2294;
  } else {
    goto _2298;
  }

_2298:
  _2255 = llvm_select_u32((((int64_t)_2251) < ((int64_t)_2252)), (((uint32_t)(uint8_t)_2254)), 0);
  _2256 = *(uint64_t*)_2240;
  *(uint64_t*)_2240 = (llvm_add_u64(_2256, 1));
  _2257 = llvm_neg_u64(_2249);
  _2258 = _2250 | (llvm_select_u32((((int64_t)_2249) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2257) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2255, (((uint32_t)_2257)))))), (llvm_select_u32((((uint64_t)_2249) > ((uint64_t)UINT64_C(31))), 0, (_2255 << (((uint32_t)_2249)))))));
  _2259 = llvm_add_u64(_2249, -8);
  _2249__PHI_TEMPORARY = _2259;   /* for PHI node */
  _2250__PHI_TEMPORARY = _2258;   /* for PHI node */
  goto _2295;

  } while (1); /* end of syntactic loop '' */
_2294:
  _2260 = _2260__PHI_TEMPORARY;
  _2261 = *(uint64_t*)_2221;
  _2262 = *(uint64_t*)_2224;
  _2263 = jsyn_cbe_fshl_i64(_2262, _2261, 32);
  _2264 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2260)), _2262, 32);
  *(uint64_t*)_2221 = _2263;
  *(uint64_t*)_2224 = _2264;
  _2265 = ((&((uint8_t*)_2215)[((int64_t)56)]));
  _2266 = *(uint64_t*)_2265;
  _2267 = ((&((uint8_t*)_2215)[((int64_t)64)]));
  _2268 = *(uint64_t*)_2267;
  _2269 = ((&((uint8_t*)_2215)[((int64_t)72)]));
  _2270 = *(uint64_t*)_2269;
  _2271 = *(void**)_2215;
  _2272 = *(uint64_t*)(((&((uint8_t*)_2271)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2215)[((int64_t)48)]))) = _2266;
  *(uint64_t*)_2265 = _2268;
  *(uint64_t*)_2267 = _2270;
  *(uint64_t*)_2269 = _2272;
  _2273 = *(uint64_t*)_2221;
  _2274 = ((uint32_t)_2273);
  _2218__PHI_TEMPORARY = _2220;   /* for PHI node */
  _2219__PHI_TEMPORARY = _2274;   /* for PHI node */
  goto _2276;

  } while (1); /* end of syntactic loop '' */
_2285:
  julia_throw_invalid_char_21(_2214, _2226);
  __builtin_unreachable();

_2289:
  julia_emit_20((&_2217), _2214, _2215, _2220, 1);
  _2275 = memcpy(_2213, (&_2217), 32);
}


static void julia_lex_star_28(void* _2299, void* _2300, void* _2301) {
  struct l_array_4_uint64_t _2302;    /* Address-exposed local */
  struct l_array_4_uint64_t _2303;    /* Address-exposed local */
  struct l_array_4_uint64_t _2304;    /* Address-exposed local */
  void* _2305;
  uint64_t _2306;
  void* _2307;
  void* _2308;
  void* _2309;
  uint64_t _2310;
  void* _2311;
  uint64_t _2312;
  void* _2313;
  uint8_t _2314;
  uint8_t _2315;
  uint8_t _2316;
  uint32_t _2317;
  uint64_t _2318;
  uint64_t _2318__PHI_TEMPORARY;
  uint32_t _2319;
  uint32_t _2319__PHI_TEMPORARY;
  uint64_t _2320;
  uint64_t _2321;
  void* _2322;
  uint8_t _2323;
  uint32_t _2324;
  uint64_t _2325;
  uint64_t _2326;
  uint32_t _2327;
  uint64_t _2328;
  uint32_t _2329;
  uint32_t _2329__PHI_TEMPORARY;
  uint64_t _2330;
  uint64_t _2331;
  uint64_t _2332;
  uint64_t _2333;
  void* _2334;
  uint64_t _2335;
  void* _2336;
  uint64_t _2337;
  void* _2338;
  uint64_t _2339;
  void* _2340;
  uint64_t _2341;
  void* _2342;
  void* _2342__PHI_TEMPORARY;
  void* _2343;
  uint64_t _2344;
  void* _2345;
  void* _2346;
  uint64_t _2347;
  void* _2348;
  uint64_t _2349;
  void* _2350;
  uint8_t _2351;
  uint8_t _2352;
  uint8_t _2353;
  uint32_t _2354;
  uint64_t _2355;
  uint64_t _2355__PHI_TEMPORARY;
  uint32_t _2356;
  uint32_t _2356__PHI_TEMPORARY;
  uint64_t _2357;
  uint64_t _2358;
  void* _2359;
  uint8_t _2360;
  uint32_t _2361;
  uint64_t _2362;
  uint64_t _2363;
  uint32_t _2364;
  uint64_t _2365;
  uint32_t _2366;
  uint32_t _2366__PHI_TEMPORARY;
  uint64_t _2367;
  uint64_t _2368;
  uint64_t _2369;
  uint64_t _2370;
  void* _2371;
  uint64_t _2372;
  void* _2373;
  uint64_t _2374;
  void* _2375;
  uint64_t _2376;
  void* _2377;
  uint64_t _2378;

  _2305 = ((&((uint8_t*)_2301)[((int64_t)32)]));
  _2306 = *(uint64_t*)_2305;
  _2307 = ((&((uint8_t*)_2301)[((int64_t)40)]));
  if (((_2306 & INT64_C(-4294967296)) == UINT64_C(3026418949592973312))) {
    goto _2379;
  } else {
    goto _2380;
  }

_2379:
  _2308 = *(void**)_2301;
  _2309 = ((&((uint8_t*)_2308)[((int64_t)16)]));
  _2310 = *(uint64_t*)_2309;
  _2311 = ((&((uint8_t*)_2308)[((int64_t)8)]));
  _2312 = *(uint64_t*)_2311;
  if ((((int64_t)_2312) > ((int64_t)_2310))) {
    goto _2381;
  } else {
    _2329__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2382;
  }

_2381:
  _2313 = *(void**)_2308;
  _2314 = *(uint8_t*)(((&((uint8_t*)_2313)[((int64_t)_2310)])));
  *(uint64_t*)_2309 = (llvm_add_u64(_2310, 1));
  _2315 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2314)), 0);
  _2316 = llvm_sub_u8(32, (llvm_shl_u8(_2315, 3)));
  _2317 = (((uint32_t)(uint8_t)_2314)) << 24;
  if ((((uint8_t)_2316) > ((uint8_t)((uint8_t)16)))) {
    _2329__PHI_TEMPORARY = _2317;   /* for PHI node */
    goto _2382;
  } else {
    _2318__PHI_TEMPORARY = 16;   /* for PHI node */
    _2319__PHI_TEMPORARY = _2317;   /* for PHI node */
    goto _2383;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2383:
  _2318 = _2318__PHI_TEMPORARY;
  _2319 = _2319__PHI_TEMPORARY;
  if (((((int64_t)_2318) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2318) < ((uint64_t)(((uint64_t)(uint8_t)_2316)))))) {
    _2329__PHI_TEMPORARY = _2319;   /* for PHI node */
    goto _2382;
  } else {
    goto _2384;
  }

_2384:
  _2320 = *(uint64_t*)_2309;
  _2321 = *(uint64_t*)_2311;
  if ((((int64_t)_2321) > ((int64_t)_2320))) {
    goto _2385;
  } else {
    _2329__PHI_TEMPORARY = _2319;   /* for PHI node */
    goto _2382;
  }

_2385:
  _2322 = *(void**)_2308;
  _2323 = *(uint8_t*)(((&((uint8_t*)_2322)[((int64_t)_2320)])));
  if ((((int8_t)_2323) > ((int8_t)((uint8_t)-65)))) {
    _2329__PHI_TEMPORARY = _2319;   /* for PHI node */
    goto _2382;
  } else {
    goto _2386;
  }

_2386:
  _2324 = llvm_select_u32((((int64_t)_2320) < ((int64_t)_2321)), (((uint32_t)(uint8_t)_2323)), 0);
  _2325 = *(uint64_t*)_2309;
  *(uint64_t*)_2309 = (llvm_add_u64(_2325, 1));
  _2326 = llvm_neg_u64(_2318);
  _2327 = _2319 | (llvm_select_u32((((int64_t)_2318) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2326) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2324, (((uint32_t)_2326)))))), (llvm_select_u32((((uint64_t)_2318) > ((uint64_t)UINT64_C(31))), 0, (_2324 << (((uint32_t)_2318)))))));
  _2328 = llvm_add_u64(_2318, -8);
  _2318__PHI_TEMPORARY = _2328;   /* for PHI node */
  _2319__PHI_TEMPORARY = _2327;   /* for PHI node */
  goto _2383;

  } while (1); /* end of syntactic loop '' */
_2382:
  _2329 = _2329__PHI_TEMPORARY;
  _2330 = *(uint64_t*)_2305;
  _2331 = *(uint64_t*)_2307;
  _2332 = jsyn_cbe_fshl_i64(_2331, _2330, 32);
  _2333 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2329)), _2331, 32);
  *(uint64_t*)_2305 = _2332;
  *(uint64_t*)_2307 = _2333;
  _2334 = ((&((uint8_t*)_2301)[((int64_t)56)]));
  _2335 = *(uint64_t*)_2334;
  _2336 = ((&((uint8_t*)_2301)[((int64_t)64)]));
  _2337 = *(uint64_t*)_2336;
  _2338 = ((&((uint8_t*)_2301)[((int64_t)72)]));
  _2339 = *(uint64_t*)_2338;
  _2340 = *(void**)_2301;
  _2341 = *(uint64_t*)(((&((uint8_t*)_2340)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2301)[((int64_t)48)]))) = _2335;
  *(uint64_t*)_2334 = _2337;
  *(uint64_t*)_2336 = _2339;
  *(uint64_t*)_2338 = _2341;
  julia_emit_20((&_2302), _2300, _2301, 67, 1);
  _2342__PHI_TEMPORARY = (&_2302);   /* for PHI node */
  goto _2387;

_2387:
  _2342 = _2342__PHI_TEMPORARY;
  _2343 = memcpy(_2299, _2342, 32);
  return;
_2380:
  _2344 = *(uint64_t*)_2305;
  if (((_2344 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2388;
  } else {
    goto _2389;
  }

_2388:
  _2345 = *(void**)_2301;
  _2346 = ((&((uint8_t*)_2345)[((int64_t)16)]));
  _2347 = *(uint64_t*)_2346;
  _2348 = ((&((uint8_t*)_2345)[((int64_t)8)]));
  _2349 = *(uint64_t*)_2348;
  if ((((int64_t)_2349) > ((int64_t)_2347))) {
    goto _2390;
  } else {
    _2366__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2391;
  }

_2390:
  _2350 = *(void**)_2345;
  _2351 = *(uint8_t*)(((&((uint8_t*)_2350)[((int64_t)_2347)])));
  *(uint64_t*)_2346 = (llvm_add_u64(_2347, 1));
  _2352 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2351)), 0);
  _2353 = llvm_sub_u8(32, (llvm_shl_u8(_2352, 3)));
  _2354 = (((uint32_t)(uint8_t)_2351)) << 24;
  if ((((uint8_t)_2353) > ((uint8_t)((uint8_t)16)))) {
    _2366__PHI_TEMPORARY = _2354;   /* for PHI node */
    goto _2391;
  } else {
    _2355__PHI_TEMPORARY = 16;   /* for PHI node */
    _2356__PHI_TEMPORARY = _2354;   /* for PHI node */
    goto _2392;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2392:
  _2355 = _2355__PHI_TEMPORARY;
  _2356 = _2356__PHI_TEMPORARY;
  if (((((int64_t)_2355) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2355) < ((uint64_t)(((uint64_t)(uint8_t)_2353)))))) {
    _2366__PHI_TEMPORARY = _2356;   /* for PHI node */
    goto _2391;
  } else {
    goto _2393;
  }

_2393:
  _2357 = *(uint64_t*)_2346;
  _2358 = *(uint64_t*)_2348;
  if ((((int64_t)_2358) > ((int64_t)_2357))) {
    goto _2394;
  } else {
    _2366__PHI_TEMPORARY = _2356;   /* for PHI node */
    goto _2391;
  }

_2394:
  _2359 = *(void**)_2345;
  _2360 = *(uint8_t*)(((&((uint8_t*)_2359)[((int64_t)_2357)])));
  if ((((int8_t)_2360) > ((int8_t)((uint8_t)-65)))) {
    _2366__PHI_TEMPORARY = _2356;   /* for PHI node */
    goto _2391;
  } else {
    goto _2395;
  }

_2395:
  _2361 = llvm_select_u32((((int64_t)_2357) < ((int64_t)_2358)), (((uint32_t)(uint8_t)_2360)), 0);
  _2362 = *(uint64_t*)_2346;
  *(uint64_t*)_2346 = (llvm_add_u64(_2362, 1));
  _2363 = llvm_neg_u64(_2355);
  _2364 = _2356 | (llvm_select_u32((((int64_t)_2355) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2363) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2361, (((uint32_t)_2363)))))), (llvm_select_u32((((uint64_t)_2355) > ((uint64_t)UINT64_C(31))), 0, (_2361 << (((uint32_t)_2355)))))));
  _2365 = llvm_add_u64(_2355, -8);
  _2355__PHI_TEMPORARY = _2365;   /* for PHI node */
  _2356__PHI_TEMPORARY = _2364;   /* for PHI node */
  goto _2392;

  } while (1); /* end of syntactic loop '' */
_2391:
  _2366 = _2366__PHI_TEMPORARY;
  _2367 = *(uint64_t*)_2305;
  _2368 = *(uint64_t*)_2307;
  _2369 = jsyn_cbe_fshl_i64(_2368, _2367, 32);
  _2370 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2366)), _2368, 32);
  *(uint64_t*)_2305 = _2369;
  *(uint64_t*)_2307 = _2370;
  _2371 = ((&((uint8_t*)_2301)[((int64_t)56)]));
  _2372 = *(uint64_t*)_2371;
  _2373 = ((&((uint8_t*)_2301)[((int64_t)64)]));
  _2374 = *(uint64_t*)_2373;
  _2375 = ((&((uint8_t*)_2301)[((int64_t)72)]));
  _2376 = *(uint64_t*)_2375;
  _2377 = *(void**)_2301;
  _2378 = *(uint64_t*)(((&((uint8_t*)_2377)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2301)[((int64_t)48)]))) = _2372;
  *(uint64_t*)_2371 = _2374;
  *(uint64_t*)_2373 = _2376;
  *(uint64_t*)_2375 = _2378;
  julia_emit_20((&_2303), _2300, _2301, 71, 1);
  _2342__PHI_TEMPORARY = (&_2303);   /* for PHI node */
  goto _2387;

_2389:
  julia_emit_20((&_2304), _2300, _2301, 592, 1);
  _2342__PHI_TEMPORARY = (&_2304);   /* for PHI node */
  goto _2387;

}


static void julia_lex_circumflex_29(void* _2396, void* _2397, void* _2398) {
  struct l_array_4_uint64_t _2399;    /* Address-exposed local */
  struct l_array_4_uint64_t _2400;    /* Address-exposed local */
  void* _2401;
  uint64_t _2402;
  void* _2403;
  void* _2404;
  void* _2405;
  uint64_t _2406;
  void* _2407;
  uint64_t _2408;
  void* _2409;
  uint8_t _2410;
  uint8_t _2411;
  uint8_t _2412;
  uint32_t _2413;
  uint64_t _2414;
  uint64_t _2414__PHI_TEMPORARY;
  uint32_t _2415;
  uint32_t _2415__PHI_TEMPORARY;
  uint64_t _2416;
  uint64_t _2417;
  void* _2418;
  uint8_t _2419;
  uint32_t _2420;
  uint64_t _2421;
  uint64_t _2422;
  uint32_t _2423;
  uint64_t _2424;
  uint32_t _2425;
  uint32_t _2425__PHI_TEMPORARY;
  uint64_t _2426;
  uint64_t _2427;
  uint64_t _2428;
  uint64_t _2429;
  void* _2430;
  uint64_t _2431;
  void* _2432;
  uint64_t _2433;
  void* _2434;
  uint64_t _2435;
  void* _2436;
  uint64_t _2437;
  void* _2438;
  void* _2438__PHI_TEMPORARY;
  void* _2439;

  _2401 = ((&((uint8_t*)_2398)[((int64_t)32)]));
  _2402 = *(uint64_t*)_2401;
  _2403 = ((&((uint8_t*)_2398)[((int64_t)40)]));
  if (((_2402 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2440;
  } else {
    goto _2441;
  }

_2440:
  _2404 = *(void**)_2398;
  _2405 = ((&((uint8_t*)_2404)[((int64_t)16)]));
  _2406 = *(uint64_t*)_2405;
  _2407 = ((&((uint8_t*)_2404)[((int64_t)8)]));
  _2408 = *(uint64_t*)_2407;
  if ((((int64_t)_2408) > ((int64_t)_2406))) {
    goto _2442;
  } else {
    _2425__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2443;
  }

_2442:
  _2409 = *(void**)_2404;
  _2410 = *(uint8_t*)(((&((uint8_t*)_2409)[((int64_t)_2406)])));
  *(uint64_t*)_2405 = (llvm_add_u64(_2406, 1));
  _2411 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2410)), 0);
  _2412 = llvm_sub_u8(32, (llvm_shl_u8(_2411, 3)));
  _2413 = (((uint32_t)(uint8_t)_2410)) << 24;
  if ((((uint8_t)_2412) > ((uint8_t)((uint8_t)16)))) {
    _2425__PHI_TEMPORARY = _2413;   /* for PHI node */
    goto _2443;
  } else {
    _2414__PHI_TEMPORARY = 16;   /* for PHI node */
    _2415__PHI_TEMPORARY = _2413;   /* for PHI node */
    goto _2444;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2444:
  _2414 = _2414__PHI_TEMPORARY;
  _2415 = _2415__PHI_TEMPORARY;
  if (((((int64_t)_2414) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2414) < ((uint64_t)(((uint64_t)(uint8_t)_2412)))))) {
    _2425__PHI_TEMPORARY = _2415;   /* for PHI node */
    goto _2443;
  } else {
    goto _2445;
  }

_2445:
  _2416 = *(uint64_t*)_2405;
  _2417 = *(uint64_t*)_2407;
  if ((((int64_t)_2417) > ((int64_t)_2416))) {
    goto _2446;
  } else {
    _2425__PHI_TEMPORARY = _2415;   /* for PHI node */
    goto _2443;
  }

_2446:
  _2418 = *(void**)_2404;
  _2419 = *(uint8_t*)(((&((uint8_t*)_2418)[((int64_t)_2416)])));
  if ((((int8_t)_2419) > ((int8_t)((uint8_t)-65)))) {
    _2425__PHI_TEMPORARY = _2415;   /* for PHI node */
    goto _2443;
  } else {
    goto _2447;
  }

_2447:
  _2420 = llvm_select_u32((((int64_t)_2416) < ((int64_t)_2417)), (((uint32_t)(uint8_t)_2419)), 0);
  _2421 = *(uint64_t*)_2405;
  *(uint64_t*)_2405 = (llvm_add_u64(_2421, 1));
  _2422 = llvm_neg_u64(_2414);
  _2423 = _2415 | (llvm_select_u32((((int64_t)_2414) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2422) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2420, (((uint32_t)_2422)))))), (llvm_select_u32((((uint64_t)_2414) > ((uint64_t)UINT64_C(31))), 0, (_2420 << (((uint32_t)_2414)))))));
  _2424 = llvm_add_u64(_2414, -8);
  _2414__PHI_TEMPORARY = _2424;   /* for PHI node */
  _2415__PHI_TEMPORARY = _2423;   /* for PHI node */
  goto _2444;

  } while (1); /* end of syntactic loop '' */
_2443:
  _2425 = _2425__PHI_TEMPORARY;
  _2426 = *(uint64_t*)_2401;
  _2427 = *(uint64_t*)_2403;
  _2428 = jsyn_cbe_fshl_i64(_2427, _2426, 32);
  _2429 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2425)), _2427, 32);
  *(uint64_t*)_2401 = _2428;
  *(uint64_t*)_2403 = _2429;
  _2430 = ((&((uint8_t*)_2398)[((int64_t)56)]));
  _2431 = *(uint64_t*)_2430;
  _2432 = ((&((uint8_t*)_2398)[((int64_t)64)]));
  _2433 = *(uint64_t*)_2432;
  _2434 = ((&((uint8_t*)_2398)[((int64_t)72)]));
  _2435 = *(uint64_t*)_2434;
  _2436 = *(void**)_2398;
  _2437 = *(uint64_t*)(((&((uint8_t*)_2436)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2398)[((int64_t)48)]))) = _2431;
  *(uint64_t*)_2430 = _2433;
  *(uint64_t*)_2432 = _2435;
  *(uint64_t*)_2434 = _2437;
  julia_emit_20((&_2399), _2397, _2398, 71, 1);
  _2438__PHI_TEMPORARY = (&_2399);   /* for PHI node */
  goto _2448;

_2448:
  _2438 = _2438__PHI_TEMPORARY;
  _2439 = memcpy(_2396, _2438, 32);
  return;
_2441:
  julia_emit_20((&_2400), _2397, _2398, 674, 1);
  _2438__PHI_TEMPORARY = (&_2400);   /* for PHI node */
  goto _2448;

}


static void julia_lex_dollar_30(void* _2449, void* _2450, void* _2451) {
  struct l_array_4_uint64_t _2452;    /* Address-exposed local */
  struct l_array_4_uint64_t _2453;    /* Address-exposed local */
  void* _2454;
  uint64_t _2455;
  void* _2456;
  void* _2457;
  void* _2458;
  uint64_t _2459;
  void* _2460;
  uint64_t _2461;
  void* _2462;
  uint8_t _2463;
  uint8_t _2464;
  uint8_t _2465;
  uint32_t _2466;
  uint64_t _2467;
  uint64_t _2467__PHI_TEMPORARY;
  uint32_t _2468;
  uint32_t _2468__PHI_TEMPORARY;
  uint64_t _2469;
  uint64_t _2470;
  void* _2471;
  uint8_t _2472;
  uint32_t _2473;
  uint64_t _2474;
  uint64_t _2475;
  uint32_t _2476;
  uint64_t _2477;
  uint32_t _2478;
  uint32_t _2478__PHI_TEMPORARY;
  uint64_t _2479;
  uint64_t _2480;
  uint64_t _2481;
  uint64_t _2482;
  void* _2483;
  uint64_t _2484;
  void* _2485;
  uint64_t _2486;
  void* _2487;
  uint64_t _2488;
  void* _2489;
  uint64_t _2490;
  void* _2491;
  void* _2491__PHI_TEMPORARY;
  void* _2492;

  _2454 = ((&((uint8_t*)_2451)[((int64_t)32)]));
  _2455 = *(uint64_t*)_2454;
  _2456 = ((&((uint8_t*)_2451)[((int64_t)40)]));
  if (((_2455 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2493;
  } else {
    goto _2494;
  }

_2493:
  _2457 = *(void**)_2451;
  _2458 = ((&((uint8_t*)_2457)[((int64_t)16)]));
  _2459 = *(uint64_t*)_2458;
  _2460 = ((&((uint8_t*)_2457)[((int64_t)8)]));
  _2461 = *(uint64_t*)_2460;
  if ((((int64_t)_2461) > ((int64_t)_2459))) {
    goto _2495;
  } else {
    _2478__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2496;
  }

_2495:
  _2462 = *(void**)_2457;
  _2463 = *(uint8_t*)(((&((uint8_t*)_2462)[((int64_t)_2459)])));
  *(uint64_t*)_2458 = (llvm_add_u64(_2459, 1));
  _2464 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2463)), 0);
  _2465 = llvm_sub_u8(32, (llvm_shl_u8(_2464, 3)));
  _2466 = (((uint32_t)(uint8_t)_2463)) << 24;
  if ((((uint8_t)_2465) > ((uint8_t)((uint8_t)16)))) {
    _2478__PHI_TEMPORARY = _2466;   /* for PHI node */
    goto _2496;
  } else {
    _2467__PHI_TEMPORARY = 16;   /* for PHI node */
    _2468__PHI_TEMPORARY = _2466;   /* for PHI node */
    goto _2497;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2497:
  _2467 = _2467__PHI_TEMPORARY;
  _2468 = _2468__PHI_TEMPORARY;
  if (((((int64_t)_2467) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2467) < ((uint64_t)(((uint64_t)(uint8_t)_2465)))))) {
    _2478__PHI_TEMPORARY = _2468;   /* for PHI node */
    goto _2496;
  } else {
    goto _2498;
  }

_2498:
  _2469 = *(uint64_t*)_2458;
  _2470 = *(uint64_t*)_2460;
  if ((((int64_t)_2470) > ((int64_t)_2469))) {
    goto _2499;
  } else {
    _2478__PHI_TEMPORARY = _2468;   /* for PHI node */
    goto _2496;
  }

_2499:
  _2471 = *(void**)_2457;
  _2472 = *(uint8_t*)(((&((uint8_t*)_2471)[((int64_t)_2469)])));
  if ((((int8_t)_2472) > ((int8_t)((uint8_t)-65)))) {
    _2478__PHI_TEMPORARY = _2468;   /* for PHI node */
    goto _2496;
  } else {
    goto _2500;
  }

_2500:
  _2473 = llvm_select_u32((((int64_t)_2469) < ((int64_t)_2470)), (((uint32_t)(uint8_t)_2472)), 0);
  _2474 = *(uint64_t*)_2458;
  *(uint64_t*)_2458 = (llvm_add_u64(_2474, 1));
  _2475 = llvm_neg_u64(_2467);
  _2476 = _2468 | (llvm_select_u32((((int64_t)_2467) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2475) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2473, (((uint32_t)_2475)))))), (llvm_select_u32((((uint64_t)_2467) > ((uint64_t)UINT64_C(31))), 0, (_2473 << (((uint32_t)_2467)))))));
  _2477 = llvm_add_u64(_2467, -8);
  _2467__PHI_TEMPORARY = _2477;   /* for PHI node */
  _2468__PHI_TEMPORARY = _2476;   /* for PHI node */
  goto _2497;

  } while (1); /* end of syntactic loop '' */
_2496:
  _2478 = _2478__PHI_TEMPORARY;
  _2479 = *(uint64_t*)_2454;
  _2480 = *(uint64_t*)_2456;
  _2481 = jsyn_cbe_fshl_i64(_2480, _2479, 32);
  _2482 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2478)), _2480, 32);
  *(uint64_t*)_2454 = _2481;
  *(uint64_t*)_2456 = _2482;
  _2483 = ((&((uint8_t*)_2451)[((int64_t)56)]));
  _2484 = *(uint64_t*)_2483;
  _2485 = ((&((uint8_t*)_2451)[((int64_t)64)]));
  _2486 = *(uint64_t*)_2485;
  _2487 = ((&((uint8_t*)_2451)[((int64_t)72)]));
  _2488 = *(uint64_t*)_2487;
  _2489 = *(void**)_2451;
  _2490 = *(uint64_t*)(((&((uint8_t*)_2489)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2451)[((int64_t)48)]))) = _2484;
  *(uint64_t*)_2483 = _2486;
  *(uint64_t*)_2485 = _2488;
  *(uint64_t*)_2487 = _2490;
  julia_emit_20((&_2452), _2450, _2451, 71, 1);
  _2491__PHI_TEMPORARY = (&_2452);   /* for PHI node */
  goto _2501;

_2501:
  _2491 = _2491__PHI_TEMPORARY;
  _2492 = memcpy(_2449, _2491, 32);
  return;
_2494:
  julia_emit_20((&_2453), _2450, _2451, 534, 1);
  _2491__PHI_TEMPORARY = (&_2453);   /* for PHI node */
  goto _2501;

}


static void julia_lex_xor_31(void* _2502, void* _2503, void* _2504) {
  struct l_array_4_uint64_t _2505;    /* Address-exposed local */
  struct l_array_4_uint64_t _2506;    /* Address-exposed local */
  void* _2507;
  uint64_t _2508;
  void* _2509;
  void* _2510;
  void* _2511;
  uint64_t _2512;
  void* _2513;
  uint64_t _2514;
  void* _2515;
  uint8_t _2516;
  uint8_t _2517;
  uint8_t _2518;
  uint32_t _2519;
  uint64_t _2520;
  uint64_t _2520__PHI_TEMPORARY;
  uint32_t _2521;
  uint32_t _2521__PHI_TEMPORARY;
  uint64_t _2522;
  uint64_t _2523;
  void* _2524;
  uint8_t _2525;
  uint32_t _2526;
  uint64_t _2527;
  uint64_t _2528;
  uint32_t _2529;
  uint64_t _2530;
  uint32_t _2531;
  uint32_t _2531__PHI_TEMPORARY;
  uint64_t _2532;
  uint64_t _2533;
  uint64_t _2534;
  uint64_t _2535;
  void* _2536;
  uint64_t _2537;
  void* _2538;
  uint64_t _2539;
  void* _2540;
  uint64_t _2541;
  void* _2542;
  uint64_t _2543;
  void* _2544;
  void* _2544__PHI_TEMPORARY;
  void* _2545;

  _2507 = ((&((uint8_t*)_2504)[((int64_t)32)]));
  _2508 = *(uint64_t*)_2507;
  _2509 = ((&((uint8_t*)_2504)[((int64_t)40)]));
  if (((_2508 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2546;
  } else {
    goto _2547;
  }

_2546:
  _2510 = *(void**)_2504;
  _2511 = ((&((uint8_t*)_2510)[((int64_t)16)]));
  _2512 = *(uint64_t*)_2511;
  _2513 = ((&((uint8_t*)_2510)[((int64_t)8)]));
  _2514 = *(uint64_t*)_2513;
  if ((((int64_t)_2514) > ((int64_t)_2512))) {
    goto _2548;
  } else {
    _2531__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2549;
  }

_2548:
  _2515 = *(void**)_2510;
  _2516 = *(uint8_t*)(((&((uint8_t*)_2515)[((int64_t)_2512)])));
  *(uint64_t*)_2511 = (llvm_add_u64(_2512, 1));
  _2517 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2516)), 0);
  _2518 = llvm_sub_u8(32, (llvm_shl_u8(_2517, 3)));
  _2519 = (((uint32_t)(uint8_t)_2516)) << 24;
  if ((((uint8_t)_2518) > ((uint8_t)((uint8_t)16)))) {
    _2531__PHI_TEMPORARY = _2519;   /* for PHI node */
    goto _2549;
  } else {
    _2520__PHI_TEMPORARY = 16;   /* for PHI node */
    _2521__PHI_TEMPORARY = _2519;   /* for PHI node */
    goto _2550;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2550:
  _2520 = _2520__PHI_TEMPORARY;
  _2521 = _2521__PHI_TEMPORARY;
  if (((((int64_t)_2520) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2520) < ((uint64_t)(((uint64_t)(uint8_t)_2518)))))) {
    _2531__PHI_TEMPORARY = _2521;   /* for PHI node */
    goto _2549;
  } else {
    goto _2551;
  }

_2551:
  _2522 = *(uint64_t*)_2511;
  _2523 = *(uint64_t*)_2513;
  if ((((int64_t)_2523) > ((int64_t)_2522))) {
    goto _2552;
  } else {
    _2531__PHI_TEMPORARY = _2521;   /* for PHI node */
    goto _2549;
  }

_2552:
  _2524 = *(void**)_2510;
  _2525 = *(uint8_t*)(((&((uint8_t*)_2524)[((int64_t)_2522)])));
  if ((((int8_t)_2525) > ((int8_t)((uint8_t)-65)))) {
    _2531__PHI_TEMPORARY = _2521;   /* for PHI node */
    goto _2549;
  } else {
    goto _2553;
  }

_2553:
  _2526 = llvm_select_u32((((int64_t)_2522) < ((int64_t)_2523)), (((uint32_t)(uint8_t)_2525)), 0);
  _2527 = *(uint64_t*)_2511;
  *(uint64_t*)_2511 = (llvm_add_u64(_2527, 1));
  _2528 = llvm_neg_u64(_2520);
  _2529 = _2521 | (llvm_select_u32((((int64_t)_2520) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2528) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2526, (((uint32_t)_2528)))))), (llvm_select_u32((((uint64_t)_2520) > ((uint64_t)UINT64_C(31))), 0, (_2526 << (((uint32_t)_2520)))))));
  _2530 = llvm_add_u64(_2520, -8);
  _2520__PHI_TEMPORARY = _2530;   /* for PHI node */
  _2521__PHI_TEMPORARY = _2529;   /* for PHI node */
  goto _2550;

  } while (1); /* end of syntactic loop '' */
_2549:
  _2531 = _2531__PHI_TEMPORARY;
  _2532 = *(uint64_t*)_2507;
  _2533 = *(uint64_t*)_2509;
  _2534 = jsyn_cbe_fshl_i64(_2533, _2532, 32);
  _2535 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2531)), _2533, 32);
  *(uint64_t*)_2507 = _2534;
  *(uint64_t*)_2509 = _2535;
  _2536 = ((&((uint8_t*)_2504)[((int64_t)56)]));
  _2537 = *(uint64_t*)_2536;
  _2538 = ((&((uint8_t*)_2504)[((int64_t)64)]));
  _2539 = *(uint64_t*)_2538;
  _2540 = ((&((uint8_t*)_2504)[((int64_t)72)]));
  _2541 = *(uint64_t*)_2540;
  _2542 = *(void**)_2504;
  _2543 = *(uint64_t*)(((&((uint8_t*)_2542)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2504)[((int64_t)48)]))) = _2537;
  *(uint64_t*)_2536 = _2539;
  *(uint64_t*)_2538 = _2541;
  *(uint64_t*)_2540 = _2543;
  julia_emit_20((&_2505), _2503, _2504, 71, 1);
  _2544__PHI_TEMPORARY = (&_2505);   /* for PHI node */
  goto _2554;

_2554:
  _2544 = _2544__PHI_TEMPORARY;
  _2545 = memcpy(_2502, _2544, 32);
  return;
_2547:
  julia_emit_20((&_2506), _2503, _2504, 552, 1);
  _2544__PHI_TEMPORARY = (&_2506);   /* for PHI node */
  goto _2554;

}


static void julia_lex_comment_32(void* _2555, void* _2556, void* _2557) {
  struct l_array_4_uint64_t _2558;    /* Address-exposed local */
  struct l_array_4_uint64_t _2559;    /* Address-exposed local */
  struct l_array_4_uint64_t _2560;    /* Address-exposed local */
  void* _2561;
  uint64_t _2562;
  void* _2563;
  bool _2564;
  bool _2564__PHI_TEMPORARY;
  uint64_t _2565;
  uint64_t _2566;
  uint32_t _2567;
  uint64_t _2568;
  uint32_t _2569;
  uint32_t _2570;
  uint32_t _2571;
  bool _2572;
  void* _2573;
  void* _2574;
  uint64_t _2575;
  void* _2576;
  uint64_t _2577;
  void* _2578;
  uint8_t _2579;
  uint8_t _2580;
  uint8_t _2581;
  uint32_t _2582;
  uint64_t _2583;
  uint64_t _2583__PHI_TEMPORARY;
  uint32_t _2584;
  uint32_t _2584__PHI_TEMPORARY;
  uint64_t _2585;
  uint64_t _2586;
  void* _2587;
  uint8_t _2588;
  uint32_t _2589;
  uint64_t _2590;
  uint64_t _2591;
  uint32_t _2592;
  uint64_t _2593;
  uint32_t _2594;
  uint32_t _2594__PHI_TEMPORARY;
  uint64_t _2595;
  uint64_t _2596;
  uint64_t _2597;
  uint64_t _2598;
  void* _2599;
  uint64_t _2600;
  void* _2601;
  uint64_t _2602;
  void* _2603;
  uint64_t _2604;
  void* _2605;
  uint64_t _2606;
  void* _2607;
  void* _2607__PHI_TEMPORARY;
  void* _2608;
  void* _2609;
  void* _2610;
  uint64_t _2611;
  void* _2612;
  uint64_t _2613;
  void* _2614;
  uint8_t _2615;
  uint8_t _2616;
  uint8_t _2617;
  uint32_t _2618;
  uint64_t _2619;
  uint64_t _2619__PHI_TEMPORARY;
  uint32_t _2620;
  uint32_t _2620__PHI_TEMPORARY;
  uint64_t _2621;
  uint64_t _2622;
  void* _2623;
  uint8_t _2624;
  uint32_t _2625;
  uint64_t _2626;
  uint64_t _2627;
  uint32_t _2628;
  uint64_t _2629;
  uint32_t _2630;
  uint32_t _2630__PHI_TEMPORARY;
  uint64_t _2631;
  uint64_t _2632;
  uint64_t _2633;
  uint64_t _2634;
  void* _2635;
  void* _2636;
  uint64_t _2637;
  void* _2638;
  uint64_t _2639;
  void* _2640;
  uint64_t _2641;
  void* _2642;
  uint64_t _2643;
  uint64_t _2644;
  uint32_t _2645;
  uint64_t _2646;
  uint64_t _2646__PHI_TEMPORARY;
  bool _2647;
  bool _2647__PHI_TEMPORARY;
  uint64_t _2648;
  uint64_t _2648__PHI_TEMPORARY;
  uint64_t _2649;
  uint64_t _2649__PHI_TEMPORARY;
  uint32_t _2650;
  uint32_t _2650__PHI_TEMPORARY;
  bool _2651;
  bool _2651__PHI_TEMPORARY;
  void* _2652;
  void* _2653;
  uint64_t _2654;
  void* _2655;
  uint64_t _2656;
  void* _2657;
  uint8_t _2658;
  uint8_t _2659;
  uint8_t _2660;
  uint32_t _2661;
  uint64_t _2662;
  uint64_t _2662__PHI_TEMPORARY;
  uint32_t _2663;
  uint32_t _2663__PHI_TEMPORARY;
  uint64_t _2664;
  uint64_t _2665;
  void* _2666;
  uint8_t _2667;
  uint32_t _2668;
  uint64_t _2669;
  uint64_t _2670;
  uint32_t _2671;
  uint64_t _2672;
  uint32_t _2673;
  uint32_t _2673__PHI_TEMPORARY;
  uint64_t _2674;
  uint64_t _2675;
  uint64_t _2676;
  uint64_t _2677;
  uint64_t _2678;
  uint64_t _2679;
  uint64_t _2680;
  void* _2681;
  uint64_t _2682;
  uint32_t _2683;
  uint64_t _2684;
  uint64_t _2685;
  uint64_t _2686;
  uint64_t _2687;
  uint64_t _2688;
  uint64_t _2688__PHI_TEMPORARY;
  uint64_t _2689;
  uint64_t _2689__PHI_TEMPORARY;
  uint32_t _2690;
  uint32_t _2691;
  uint32_t _2692;
  bool _2693;
  uint64_t _2694;
  uint64_t _2695;

  _2561 = ((&((uint8_t*)_2557)[((int64_t)32)]));
  _2562 = *(uint64_t*)_2561;
  _2563 = ((&((uint8_t*)_2557)[((int64_t)40)]));
  if (((_2562 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2696;
  } else {
    _2564__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2697;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2697:
  _2564 = _2564__PHI_TEMPORARY;
  _2565 = *(uint64_t*)_2561;
  _2566 = llvm_lshr_u64(_2565, 32);
  _2567 = ((uint32_t)_2566);
  if ((_2566 == UINT64_C(167772160))) {
    goto _2698;
  } else {
    goto _2699;
  }

_2699:
  _2568 = *(uint64_t*)_2563;
  if (((llvm_select_bool((_2566 == UINT64_C(218103808)), ((_2568 & INT64_C(4294967295)) == UINT64_C(167772160)), 0)) | (_2566 == UINT64_C(4294967295)))) {
    goto _2698;
  } else {
    goto _2700;
  }

_2700:
  _2569 = llvm_OC_ctlz_OC_i32((_2567 ^ -1), 0);
  _2570 = llvm_OC_cttz_OC_i32(_2567, 0);
  _2571 = _2570 & 56;
  _2572 = _2564 & (((((_2569 != 1u) & (((uint32_t)(llvm_add_u32((_2569 << 3), _2571))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_2570) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_2567 & 12632256) ^ 8421504), _2571)) == 0u)))) & ((((_2567 & -33554432) != 3221225472u) & ((_2567 & -2097152) != 3766484992u)) & ((_2567 & -1048576) != 4034920448u))) & (((((uint64_t)_2565) < ((uint64_t)UINT64_C(17122614315006820352))) | (_2566 == UINT64_C(3986669312))) | (((((uint64_t)_2565) > ((uint64_t)UINT64_C(17185876919829135359))) | (_2566 == UINT64_C(4001398784))) & ((((uint64_t)_2565) < ((uint64_t)UINT64_C(17622514693983698944))) | (_2566 == UINT64_C(4103061439))))));
  _2573 = *(void**)_2557;
  _2574 = ((&((uint8_t*)_2573)[((int64_t)16)]));
  _2575 = *(uint64_t*)_2574;
  _2576 = ((&((uint8_t*)_2573)[((int64_t)8)]));
  _2577 = *(uint64_t*)_2576;
  if ((((int64_t)_2577) > ((int64_t)_2575))) {
    goto _2701;
  } else {
    _2594__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2702;
  }

_2701:
  _2578 = *(void**)_2573;
  _2579 = *(uint8_t*)(((&((uint8_t*)_2578)[((int64_t)_2575)])));
  *(uint64_t*)_2574 = (llvm_add_u64(_2575, 1));
  _2580 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2579)), 0);
  _2581 = llvm_sub_u8(32, (llvm_shl_u8(_2580, 3)));
  _2582 = (((uint32_t)(uint8_t)_2579)) << 24;
  if ((((uint8_t)_2581) > ((uint8_t)((uint8_t)16)))) {
    _2594__PHI_TEMPORARY = _2582;   /* for PHI node */
    goto _2702;
  } else {
    _2583__PHI_TEMPORARY = 16;   /* for PHI node */
    _2584__PHI_TEMPORARY = _2582;   /* for PHI node */
    goto _2703;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2703:
  _2583 = _2583__PHI_TEMPORARY;
  _2584 = _2584__PHI_TEMPORARY;
  if (((((int64_t)_2583) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2583) < ((uint64_t)(((uint64_t)(uint8_t)_2581)))))) {
    _2594__PHI_TEMPORARY = _2584;   /* for PHI node */
    goto _2702;
  } else {
    goto _2704;
  }

_2704:
  _2585 = *(uint64_t*)_2574;
  _2586 = *(uint64_t*)_2576;
  if ((((int64_t)_2586) > ((int64_t)_2585))) {
    goto _2705;
  } else {
    _2594__PHI_TEMPORARY = _2584;   /* for PHI node */
    goto _2702;
  }

_2705:
  _2587 = *(void**)_2573;
  _2588 = *(uint8_t*)(((&((uint8_t*)_2587)[((int64_t)_2585)])));
  if ((((int8_t)_2588) > ((int8_t)((uint8_t)-65)))) {
    _2594__PHI_TEMPORARY = _2584;   /* for PHI node */
    goto _2702;
  } else {
    goto _2706;
  }

_2706:
  _2589 = llvm_select_u32((((int64_t)_2585) < ((int64_t)_2586)), (((uint32_t)(uint8_t)_2588)), 0);
  _2590 = *(uint64_t*)_2574;
  *(uint64_t*)_2574 = (llvm_add_u64(_2590, 1));
  _2591 = llvm_neg_u64(_2583);
  _2592 = _2584 | (llvm_select_u32((((int64_t)_2583) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2591) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2589, (((uint32_t)_2591)))))), (llvm_select_u32((((uint64_t)_2583) > ((uint64_t)UINT64_C(31))), 0, (_2589 << (((uint32_t)_2583)))))));
  _2593 = llvm_add_u64(_2583, -8);
  _2583__PHI_TEMPORARY = _2593;   /* for PHI node */
  _2584__PHI_TEMPORARY = _2592;   /* for PHI node */
  goto _2703;

  } while (1); /* end of syntactic loop '' */
_2702:
  _2594 = _2594__PHI_TEMPORARY;
  _2595 = *(uint64_t*)_2561;
  _2596 = *(uint64_t*)_2563;
  _2597 = jsyn_cbe_fshl_i64(_2596, _2595, 32);
  _2598 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2594)), _2596, 32);
  *(uint64_t*)_2561 = _2597;
  *(uint64_t*)_2563 = _2598;
  _2599 = ((&((uint8_t*)_2557)[((int64_t)56)]));
  _2600 = *(uint64_t*)_2599;
  _2601 = ((&((uint8_t*)_2557)[((int64_t)64)]));
  _2602 = *(uint64_t*)_2601;
  _2603 = ((&((uint8_t*)_2557)[((int64_t)72)]));
  _2604 = *(uint64_t*)_2603;
  _2605 = *(void**)_2557;
  _2606 = *(uint64_t*)(((&((uint8_t*)_2605)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2557)[((int64_t)48)]))) = _2600;
  *(uint64_t*)_2599 = _2602;
  *(uint64_t*)_2601 = _2604;
  *(uint64_t*)_2603 = _2606;
  _2564__PHI_TEMPORARY = _2572;   /* for PHI node */
  goto _2697;

  } while (1); /* end of syntactic loop '' */
_2698:
  julia_emit_20((&_2558), _2556, _2557, (llvm_select_u16(_2564, 0, 762)), 1);
  _2607__PHI_TEMPORARY = (&_2558);   /* for PHI node */
  goto _2707;

_2707:
  _2607 = _2607__PHI_TEMPORARY;
  _2608 = memcpy(_2555, _2607, 32);
  return;
_2696:
  _2609 = *(void**)_2557;
  _2610 = ((&((uint8_t*)_2609)[((int64_t)16)]));
  _2611 = *(uint64_t*)_2610;
  _2612 = ((&((uint8_t*)_2609)[((int64_t)8)]));
  _2613 = *(uint64_t*)_2612;
  if ((((int64_t)_2613) > ((int64_t)_2611))) {
    goto _2708;
  } else {
    _2630__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2709;
  }

_2708:
  _2614 = *(void**)_2609;
  _2615 = *(uint8_t*)(((&((uint8_t*)_2614)[((int64_t)_2611)])));
  *(uint64_t*)_2610 = (llvm_add_u64(_2611, 1));
  _2616 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2615)), 0);
  _2617 = llvm_sub_u8(32, (llvm_shl_u8(_2616, 3)));
  _2618 = (((uint32_t)(uint8_t)_2615)) << 24;
  if ((((uint8_t)_2617) > ((uint8_t)((uint8_t)16)))) {
    _2630__PHI_TEMPORARY = _2618;   /* for PHI node */
    goto _2709;
  } else {
    _2619__PHI_TEMPORARY = 16;   /* for PHI node */
    _2620__PHI_TEMPORARY = _2618;   /* for PHI node */
    goto _2710;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2710:
  _2619 = _2619__PHI_TEMPORARY;
  _2620 = _2620__PHI_TEMPORARY;
  if (((((int64_t)_2619) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2619) < ((uint64_t)(((uint64_t)(uint8_t)_2617)))))) {
    _2630__PHI_TEMPORARY = _2620;   /* for PHI node */
    goto _2709;
  } else {
    goto _2711;
  }

_2711:
  _2621 = *(uint64_t*)_2610;
  _2622 = *(uint64_t*)_2612;
  if ((((int64_t)_2622) > ((int64_t)_2621))) {
    goto _2712;
  } else {
    _2630__PHI_TEMPORARY = _2620;   /* for PHI node */
    goto _2709;
  }

_2712:
  _2623 = *(void**)_2609;
  _2624 = *(uint8_t*)(((&((uint8_t*)_2623)[((int64_t)_2621)])));
  if ((((int8_t)_2624) > ((int8_t)((uint8_t)-65)))) {
    _2630__PHI_TEMPORARY = _2620;   /* for PHI node */
    goto _2709;
  } else {
    goto _2713;
  }

_2713:
  _2625 = llvm_select_u32((((int64_t)_2621) < ((int64_t)_2622)), (((uint32_t)(uint8_t)_2624)), 0);
  _2626 = *(uint64_t*)_2610;
  *(uint64_t*)_2610 = (llvm_add_u64(_2626, 1));
  _2627 = llvm_neg_u64(_2619);
  _2628 = _2620 | (llvm_select_u32((((int64_t)_2619) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2627) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2625, (((uint32_t)_2627)))))), (llvm_select_u32((((uint64_t)_2619) > ((uint64_t)UINT64_C(31))), 0, (_2625 << (((uint32_t)_2619)))))));
  _2629 = llvm_add_u64(_2619, -8);
  _2619__PHI_TEMPORARY = _2629;   /* for PHI node */
  _2620__PHI_TEMPORARY = _2628;   /* for PHI node */
  goto _2710;

  } while (1); /* end of syntactic loop '' */
_2709:
  _2630 = _2630__PHI_TEMPORARY;
  _2631 = *(uint64_t*)_2561;
  _2632 = *(uint64_t*)_2563;
  _2633 = jsyn_cbe_fshl_i64(_2632, _2631, 32);
  _2634 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2630)), _2632, 32);
  *(uint64_t*)_2561 = _2633;
  *(uint64_t*)_2563 = _2634;
  _2635 = ((&((uint8_t*)_2557)[((int64_t)48)]));
  _2636 = ((&((uint8_t*)_2557)[((int64_t)56)]));
  _2637 = *(uint64_t*)_2636;
  _2638 = ((&((uint8_t*)_2557)[((int64_t)64)]));
  _2639 = *(uint64_t*)_2638;
  _2640 = ((&((uint8_t*)_2557)[((int64_t)72)]));
  _2641 = *(uint64_t*)_2640;
  _2642 = *(void**)_2557;
  _2643 = *(uint64_t*)(((&((uint8_t*)_2642)[((int64_t)16)])));
  *(uint64_t*)_2635 = _2637;
  *(uint64_t*)_2636 = _2639;
  *(uint64_t*)_2638 = _2641;
  *(uint64_t*)_2640 = _2643;
  _2644 = *(uint64_t*)_2561;
  _2645 = ((uint32_t)_2644);
  _2646__PHI_TEMPORARY = 1;   /* for PHI node */
  _2647__PHI_TEMPORARY = 1;   /* for PHI node */
  _2648__PHI_TEMPORARY = 0;   /* for PHI node */
  _2649__PHI_TEMPORARY = 0;   /* for PHI node */
  _2650__PHI_TEMPORARY = _2645;   /* for PHI node */
  _2651__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2714;

  do {     /* Syntactic loop '' to make GCC happy */
_2714:
  _2646 = _2646__PHI_TEMPORARY;
  _2647 = _2647__PHI_TEMPORARY;
  _2648 = _2648__PHI_TEMPORARY;
  _2649 = _2649__PHI_TEMPORARY;
  _2650 = _2650__PHI_TEMPORARY;
  _2651 = _2651__PHI_TEMPORARY;
  if ((_2650 == 4294967295u)) {
    goto _2715;
  } else {
    goto _2716;
  }

_2716:
  _2652 = *(void**)_2557;
  _2653 = ((&((uint8_t*)_2652)[((int64_t)16)]));
  _2654 = *(uint64_t*)_2653;
  _2655 = ((&((uint8_t*)_2652)[((int64_t)8)]));
  _2656 = *(uint64_t*)_2655;
  if ((((int64_t)_2656) > ((int64_t)_2654))) {
    goto _2717;
  } else {
    _2673__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2718;
  }

_2717:
  _2657 = *(void**)_2652;
  _2658 = *(uint8_t*)(((&((uint8_t*)_2657)[((int64_t)_2654)])));
  *(uint64_t*)_2653 = (llvm_add_u64(_2654, 1));
  _2659 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2658)), 0);
  _2660 = llvm_sub_u8(32, (llvm_shl_u8(_2659, 3)));
  _2661 = (((uint32_t)(uint8_t)_2658)) << 24;
  if ((((uint8_t)_2660) > ((uint8_t)((uint8_t)16)))) {
    _2673__PHI_TEMPORARY = _2661;   /* for PHI node */
    goto _2718;
  } else {
    _2662__PHI_TEMPORARY = 16;   /* for PHI node */
    _2663__PHI_TEMPORARY = _2661;   /* for PHI node */
    goto _2719;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2719:
  _2662 = _2662__PHI_TEMPORARY;
  _2663 = _2663__PHI_TEMPORARY;
  if (((((int64_t)_2662) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2662) < ((uint64_t)(((uint64_t)(uint8_t)_2660)))))) {
    _2673__PHI_TEMPORARY = _2663;   /* for PHI node */
    goto _2718;
  } else {
    goto _2720;
  }

_2720:
  _2664 = *(uint64_t*)_2653;
  _2665 = *(uint64_t*)_2655;
  if ((((int64_t)_2665) > ((int64_t)_2664))) {
    goto _2721;
  } else {
    _2673__PHI_TEMPORARY = _2663;   /* for PHI node */
    goto _2718;
  }

_2721:
  _2666 = *(void**)_2652;
  _2667 = *(uint8_t*)(((&((uint8_t*)_2666)[((int64_t)_2664)])));
  if ((((int8_t)_2667) > ((int8_t)((uint8_t)-65)))) {
    _2673__PHI_TEMPORARY = _2663;   /* for PHI node */
    goto _2718;
  } else {
    goto _2722;
  }

_2722:
  _2668 = llvm_select_u32((((int64_t)_2664) < ((int64_t)_2665)), (((uint32_t)(uint8_t)_2667)), 0);
  _2669 = *(uint64_t*)_2653;
  *(uint64_t*)_2653 = (llvm_add_u64(_2669, 1));
  _2670 = llvm_neg_u64(_2662);
  _2671 = _2663 | (llvm_select_u32((((int64_t)_2662) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2670) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2668, (((uint32_t)_2670)))))), (llvm_select_u32((((uint64_t)_2662) > ((uint64_t)UINT64_C(31))), 0, (_2668 << (((uint32_t)_2662)))))));
  _2672 = llvm_add_u64(_2662, -8);
  _2662__PHI_TEMPORARY = _2672;   /* for PHI node */
  _2663__PHI_TEMPORARY = _2671;   /* for PHI node */
  goto _2719;

  } while (1); /* end of syntactic loop '' */
_2718:
  _2673 = _2673__PHI_TEMPORARY;
  _2674 = *(uint64_t*)_2561;
  _2675 = *(uint64_t*)_2563;
  _2676 = jsyn_cbe_fshl_i64(_2675, _2674, 32);
  _2677 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2673)), _2675, 32);
  *(uint64_t*)_2561 = _2676;
  *(uint64_t*)_2563 = _2677;
  _2678 = *(uint64_t*)_2636;
  _2679 = *(uint64_t*)_2638;
  _2680 = *(uint64_t*)_2640;
  _2681 = *(void**)_2557;
  _2682 = *(uint64_t*)(((&((uint8_t*)_2681)[((int64_t)16)])));
  *(uint64_t*)_2635 = _2678;
  *(uint64_t*)_2636 = _2679;
  *(uint64_t*)_2638 = _2680;
  *(uint64_t*)_2640 = _2682;
  _2683 = *(uint32_t*)_2561;
  switch (_2683) {
  default:
    goto _2723;
  case 167772160u:
    _2688__PHI_TEMPORARY = 0;   /* for PHI node */
    _2689__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2724;
  case 3800082944u:
    goto _2725;
  case 3800083200u:
    goto _2725;
  case 3800083712u:
    goto _2725;
  case 3800083968u:
    goto _2725;
  case 3800083456u:
    goto _2726;
  case 3800147456u:
    goto _2727;
  case 3800147712u:
    goto _2727;
  case 3800147968u:
    goto _2727;
  }

_2727:
  _2686 = llvm_add_u64(_2649, 1);
  _2688__PHI_TEMPORARY = _2648;   /* for PHI node */
  _2689__PHI_TEMPORARY = _2686;   /* for PHI node */
  goto _2724;

_2726:
  _2684 = llvm_add_u64(_2648, -1);
  _2688__PHI_TEMPORARY = _2684;   /* for PHI node */
  _2689__PHI_TEMPORARY = _2649;   /* for PHI node */
  goto _2724;

_2725:
  _2687 = llvm_add_u64(_2648, 1);
  _2688__PHI_TEMPORARY = _2687;   /* for PHI node */
  _2689__PHI_TEMPORARY = _2649;   /* for PHI node */
  goto _2724;

_2723:
  _2685 = llvm_add_u64(_2649, (((int64_t)(bool)0-(_2683 == 3800148224u))));
  _2688__PHI_TEMPORARY = _2648;   /* for PHI node */
  _2689__PHI_TEMPORARY = _2685;   /* for PHI node */
  goto _2724;

_2724:
  _2688 = _2688__PHI_TEMPORARY;
  _2689 = _2689__PHI_TEMPORARY;
  _2690 = llvm_OC_ctlz_OC_i32((_2683 ^ -1), 0);
  _2691 = llvm_OC_cttz_OC_i32(_2683, 0);
  _2692 = _2691 & 56;
  _2693 = _2651 & (((((_2690 != 1u) & (((uint32_t)(llvm_add_u32((_2690 << 3), _2692))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_2691) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_2683 & 12632256) ^ 8421504), _2692)) == 0u)))) & ((((_2683 & -33554432) != 3221225472u) & ((_2683 & -2097152) != 3766484992u)) & ((_2683 & -1048576) != 4034920448u))) & ((((uint32_t)_2683) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_2683, 293568512))) < ((uint32_t)101662656u))));
  if (_2647) {
    _2646__PHI_TEMPORARY = _2646;   /* for PHI node */
    _2647__PHI_TEMPORARY = 0;   /* for PHI node */
    _2648__PHI_TEMPORARY = _2688;   /* for PHI node */
    _2649__PHI_TEMPORARY = _2689;   /* for PHI node */
    _2650__PHI_TEMPORARY = _2683;   /* for PHI node */
    _2651__PHI_TEMPORARY = _2693;   /* for PHI node */
    goto _2714;
  } else {
    goto _2728;
  }

_2728:
  if (((_2650 == 587202560u) & (_2683 == 1023410176u))) {
    goto _2729;
  } else {
    goto _2730;
  }

_2730:
  if (((_2650 == 1023410176u) & (_2683 == 587202560u))) {
    goto _2731;
  } else {
    _2646__PHI_TEMPORARY = _2646;   /* for PHI node */
    _2647__PHI_TEMPORARY = 0;   /* for PHI node */
    _2648__PHI_TEMPORARY = _2688;   /* for PHI node */
    _2649__PHI_TEMPORARY = _2689;   /* for PHI node */
    _2650__PHI_TEMPORARY = _2683;   /* for PHI node */
    _2651__PHI_TEMPORARY = _2693;   /* for PHI node */
    goto _2714;
  }

_2731:
  _2695 = llvm_add_u64(_2646, -1);
  if ((_2695 == UINT64_C(0))) {
    goto _2732;
  } else {
    _2646__PHI_TEMPORARY = _2695;   /* for PHI node */
    _2647__PHI_TEMPORARY = 1;   /* for PHI node */
    _2648__PHI_TEMPORARY = _2688;   /* for PHI node */
    _2649__PHI_TEMPORARY = _2689;   /* for PHI node */
    _2650__PHI_TEMPORARY = _2683;   /* for PHI node */
    _2651__PHI_TEMPORARY = _2693;   /* for PHI node */
    goto _2714;
  }

_2729:
  _2694 = llvm_add_u64(_2646, 1);
  _2646__PHI_TEMPORARY = _2694;   /* for PHI node */
  _2647__PHI_TEMPORARY = 1;   /* for PHI node */
  _2648__PHI_TEMPORARY = _2688;   /* for PHI node */
  _2649__PHI_TEMPORARY = _2689;   /* for PHI node */
  _2650__PHI_TEMPORARY = _2683;   /* for PHI node */
  _2651__PHI_TEMPORARY = _2693;   /* for PHI node */
  goto _2714;

  } while (1); /* end of syntactic loop '' */
_2715:
  julia_emit_20((&_2559), _2556, _2557, 753, 1);
  _2607__PHI_TEMPORARY = (&_2559);   /* for PHI node */
  goto _2707;

_2732:
  julia_emit_20((&_2560), _2556, _2557, (llvm_select_u16(_2693, (llvm_select_u16((llvm_select_bool((_2688 == UINT64_C(0)), (_2689 == UINT64_C(0)), 0)), 0, 766)), 762)), 1);
  _2607__PHI_TEMPORARY = (&_2560);   /* for PHI node */
  goto _2707;

}


static void julia_lex_equal_33(void* _2733, void* _2734, void* _2735) {
  struct l_array_4_uint64_t _2736;    /* Address-exposed local */
  struct l_array_4_uint64_t _2737;    /* Address-exposed local */
  struct l_array_4_uint64_t _2738;    /* Address-exposed local */
  struct l_array_4_uint64_t _2739;    /* Address-exposed local */
  void* _2740;
  uint64_t _2741;
  void* _2742;
  void* _2743;
  void* _2744;
  uint64_t _2745;
  void* _2746;
  uint64_t _2747;
  void* _2748;
  uint8_t _2749;
  uint8_t _2750;
  uint8_t _2751;
  uint32_t _2752;
  uint64_t _2753;
  uint64_t _2753__PHI_TEMPORARY;
  uint32_t _2754;
  uint32_t _2754__PHI_TEMPORARY;
  uint64_t _2755;
  uint64_t _2756;
  void* _2757;
  uint8_t _2758;
  uint32_t _2759;
  uint64_t _2760;
  uint64_t _2761;
  uint32_t _2762;
  uint64_t _2763;
  uint32_t _2764;
  uint32_t _2764__PHI_TEMPORARY;
  uint64_t _2765;
  uint64_t _2766;
  uint64_t _2767;
  uint64_t _2768;
  void* _2769;
  uint64_t _2770;
  void* _2771;
  uint64_t _2772;
  void* _2773;
  uint64_t _2774;
  void* _2775;
  uint64_t _2776;
  uint64_t _2777;
  void* _2778;
  void* _2779;
  uint64_t _2780;
  void* _2781;
  uint64_t _2782;
  void* _2783;
  uint8_t _2784;
  uint8_t _2785;
  uint8_t _2786;
  uint32_t _2787;
  uint64_t _2788;
  uint64_t _2788__PHI_TEMPORARY;
  uint32_t _2789;
  uint32_t _2789__PHI_TEMPORARY;
  uint64_t _2790;
  uint64_t _2791;
  void* _2792;
  uint8_t _2793;
  uint32_t _2794;
  uint64_t _2795;
  uint64_t _2796;
  uint32_t _2797;
  uint64_t _2798;
  uint32_t _2799;
  uint32_t _2799__PHI_TEMPORARY;
  uint64_t _2800;
  uint64_t _2801;
  uint64_t _2802;
  uint64_t _2803;
  void* _2804;
  uint64_t _2805;
  void* _2806;
  uint64_t _2807;
  void* _2808;
  uint64_t _2809;
  void* _2810;
  uint64_t _2811;
  void* _2812;
  void* _2812__PHI_TEMPORARY;
  void* _2813;
  uint64_t _2814;
  void* _2815;
  void* _2816;
  uint64_t _2817;
  void* _2818;
  uint64_t _2819;
  void* _2820;
  uint8_t _2821;
  uint8_t _2822;
  uint8_t _2823;
  uint32_t _2824;
  uint64_t _2825;
  uint64_t _2825__PHI_TEMPORARY;
  uint32_t _2826;
  uint32_t _2826__PHI_TEMPORARY;
  uint64_t _2827;
  uint64_t _2828;
  void* _2829;
  uint8_t _2830;
  uint32_t _2831;
  uint64_t _2832;
  uint64_t _2833;
  uint32_t _2834;
  uint64_t _2835;
  uint32_t _2836;
  uint32_t _2836__PHI_TEMPORARY;
  uint64_t _2837;
  uint64_t _2838;
  uint64_t _2839;
  uint64_t _2840;
  void* _2841;
  uint64_t _2842;
  void* _2843;
  uint64_t _2844;
  void* _2845;
  uint64_t _2846;
  void* _2847;
  uint64_t _2848;

  _2740 = ((&((uint8_t*)_2735)[((int64_t)32)]));
  _2741 = *(uint64_t*)_2740;
  _2742 = ((&((uint8_t*)_2735)[((int64_t)40)]));
  if (((_2741 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2849;
  } else {
    goto _2850;
  }

_2849:
  _2743 = *(void**)_2735;
  _2744 = ((&((uint8_t*)_2743)[((int64_t)16)]));
  _2745 = *(uint64_t*)_2744;
  _2746 = ((&((uint8_t*)_2743)[((int64_t)8)]));
  _2747 = *(uint64_t*)_2746;
  if ((((int64_t)_2747) > ((int64_t)_2745))) {
    goto _2851;
  } else {
    _2764__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2852;
  }

_2851:
  _2748 = *(void**)_2743;
  _2749 = *(uint8_t*)(((&((uint8_t*)_2748)[((int64_t)_2745)])));
  *(uint64_t*)_2744 = (llvm_add_u64(_2745, 1));
  _2750 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2749)), 0);
  _2751 = llvm_sub_u8(32, (llvm_shl_u8(_2750, 3)));
  _2752 = (((uint32_t)(uint8_t)_2749)) << 24;
  if ((((uint8_t)_2751) > ((uint8_t)((uint8_t)16)))) {
    _2764__PHI_TEMPORARY = _2752;   /* for PHI node */
    goto _2852;
  } else {
    _2753__PHI_TEMPORARY = 16;   /* for PHI node */
    _2754__PHI_TEMPORARY = _2752;   /* for PHI node */
    goto _2853;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2853:
  _2753 = _2753__PHI_TEMPORARY;
  _2754 = _2754__PHI_TEMPORARY;
  if (((((int64_t)_2753) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2753) < ((uint64_t)(((uint64_t)(uint8_t)_2751)))))) {
    _2764__PHI_TEMPORARY = _2754;   /* for PHI node */
    goto _2852;
  } else {
    goto _2854;
  }

_2854:
  _2755 = *(uint64_t*)_2744;
  _2756 = *(uint64_t*)_2746;
  if ((((int64_t)_2756) > ((int64_t)_2755))) {
    goto _2855;
  } else {
    _2764__PHI_TEMPORARY = _2754;   /* for PHI node */
    goto _2852;
  }

_2855:
  _2757 = *(void**)_2743;
  _2758 = *(uint8_t*)(((&((uint8_t*)_2757)[((int64_t)_2755)])));
  if ((((int8_t)_2758) > ((int8_t)((uint8_t)-65)))) {
    _2764__PHI_TEMPORARY = _2754;   /* for PHI node */
    goto _2852;
  } else {
    goto _2856;
  }

_2856:
  _2759 = llvm_select_u32((((int64_t)_2755) < ((int64_t)_2756)), (((uint32_t)(uint8_t)_2758)), 0);
  _2760 = *(uint64_t*)_2744;
  *(uint64_t*)_2744 = (llvm_add_u64(_2760, 1));
  _2761 = llvm_neg_u64(_2753);
  _2762 = _2754 | (llvm_select_u32((((int64_t)_2753) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2761) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2759, (((uint32_t)_2761)))))), (llvm_select_u32((((uint64_t)_2753) > ((uint64_t)UINT64_C(31))), 0, (_2759 << (((uint32_t)_2753)))))));
  _2763 = llvm_add_u64(_2753, -8);
  _2753__PHI_TEMPORARY = _2763;   /* for PHI node */
  _2754__PHI_TEMPORARY = _2762;   /* for PHI node */
  goto _2853;

  } while (1); /* end of syntactic loop '' */
_2852:
  _2764 = _2764__PHI_TEMPORARY;
  _2765 = *(uint64_t*)_2740;
  _2766 = *(uint64_t*)_2742;
  _2767 = jsyn_cbe_fshl_i64(_2766, _2765, 32);
  _2768 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2764)), _2766, 32);
  *(uint64_t*)_2740 = _2767;
  *(uint64_t*)_2742 = _2768;
  _2769 = ((&((uint8_t*)_2735)[((int64_t)56)]));
  _2770 = *(uint64_t*)_2769;
  _2771 = ((&((uint8_t*)_2735)[((int64_t)64)]));
  _2772 = *(uint64_t*)_2771;
  _2773 = ((&((uint8_t*)_2735)[((int64_t)72)]));
  _2774 = *(uint64_t*)_2773;
  _2775 = *(void**)_2735;
  _2776 = *(uint64_t*)(((&((uint8_t*)_2775)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2735)[((int64_t)48)]))) = _2770;
  *(uint64_t*)_2769 = _2772;
  *(uint64_t*)_2771 = _2774;
  *(uint64_t*)_2773 = _2776;
  _2777 = *(uint64_t*)_2740;
  if (((_2777 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2857;
  } else {
    goto _2858;
  }

_2857:
  _2778 = *(void**)_2735;
  _2779 = ((&((uint8_t*)_2778)[((int64_t)16)]));
  _2780 = *(uint64_t*)_2779;
  _2781 = ((&((uint8_t*)_2778)[((int64_t)8)]));
  _2782 = *(uint64_t*)_2781;
  if ((((int64_t)_2782) > ((int64_t)_2780))) {
    goto _2859;
  } else {
    _2799__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2860;
  }

_2859:
  _2783 = *(void**)_2778;
  _2784 = *(uint8_t*)(((&((uint8_t*)_2783)[((int64_t)_2780)])));
  *(uint64_t*)_2779 = (llvm_add_u64(_2780, 1));
  _2785 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2784)), 0);
  _2786 = llvm_sub_u8(32, (llvm_shl_u8(_2785, 3)));
  _2787 = (((uint32_t)(uint8_t)_2784)) << 24;
  if ((((uint8_t)_2786) > ((uint8_t)((uint8_t)16)))) {
    _2799__PHI_TEMPORARY = _2787;   /* for PHI node */
    goto _2860;
  } else {
    _2788__PHI_TEMPORARY = 16;   /* for PHI node */
    _2789__PHI_TEMPORARY = _2787;   /* for PHI node */
    goto _2861;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2861:
  _2788 = _2788__PHI_TEMPORARY;
  _2789 = _2789__PHI_TEMPORARY;
  if (((((int64_t)_2788) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2788) < ((uint64_t)(((uint64_t)(uint8_t)_2786)))))) {
    _2799__PHI_TEMPORARY = _2789;   /* for PHI node */
    goto _2860;
  } else {
    goto _2862;
  }

_2862:
  _2790 = *(uint64_t*)_2779;
  _2791 = *(uint64_t*)_2781;
  if ((((int64_t)_2791) > ((int64_t)_2790))) {
    goto _2863;
  } else {
    _2799__PHI_TEMPORARY = _2789;   /* for PHI node */
    goto _2860;
  }

_2863:
  _2792 = *(void**)_2778;
  _2793 = *(uint8_t*)(((&((uint8_t*)_2792)[((int64_t)_2790)])));
  if ((((int8_t)_2793) > ((int8_t)((uint8_t)-65)))) {
    _2799__PHI_TEMPORARY = _2789;   /* for PHI node */
    goto _2860;
  } else {
    goto _2864;
  }

_2864:
  _2794 = llvm_select_u32((((int64_t)_2790) < ((int64_t)_2791)), (((uint32_t)(uint8_t)_2793)), 0);
  _2795 = *(uint64_t*)_2779;
  *(uint64_t*)_2779 = (llvm_add_u64(_2795, 1));
  _2796 = llvm_neg_u64(_2788);
  _2797 = _2789 | (llvm_select_u32((((int64_t)_2788) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2796) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2794, (((uint32_t)_2796)))))), (llvm_select_u32((((uint64_t)_2788) > ((uint64_t)UINT64_C(31))), 0, (_2794 << (((uint32_t)_2788)))))));
  _2798 = llvm_add_u64(_2788, -8);
  _2788__PHI_TEMPORARY = _2798;   /* for PHI node */
  _2789__PHI_TEMPORARY = _2797;   /* for PHI node */
  goto _2861;

  } while (1); /* end of syntactic loop '' */
_2860:
  _2799 = _2799__PHI_TEMPORARY;
  _2800 = *(uint64_t*)_2740;
  _2801 = *(uint64_t*)_2742;
  _2802 = jsyn_cbe_fshl_i64(_2801, _2800, 32);
  _2803 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2799)), _2801, 32);
  *(uint64_t*)_2740 = _2802;
  *(uint64_t*)_2742 = _2803;
  _2804 = ((&((uint8_t*)_2735)[((int64_t)56)]));
  _2805 = *(uint64_t*)_2804;
  _2806 = ((&((uint8_t*)_2735)[((int64_t)64)]));
  _2807 = *(uint64_t*)_2806;
  _2808 = ((&((uint8_t*)_2735)[((int64_t)72)]));
  _2809 = *(uint64_t*)_2808;
  _2810 = *(void**)_2735;
  _2811 = *(uint64_t*)(((&((uint8_t*)_2810)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2735)[((int64_t)48)]))) = _2805;
  *(uint64_t*)_2804 = _2807;
  *(uint64_t*)_2806 = _2809;
  *(uint64_t*)_2808 = _2811;
  julia_emit_20((&_2736), _2734, _2735, 245, 1);
  _2812__PHI_TEMPORARY = (&_2736);   /* for PHI node */
  goto _2865;

_2865:
  _2812 = _2812__PHI_TEMPORARY;
  _2813 = memcpy(_2733, _2812, 32);
  return;
_2858:
  julia_emit_20((&_2737), _2734, _2735, 244, 1);
  _2812__PHI_TEMPORARY = (&_2737);   /* for PHI node */
  goto _2865;

_2850:
  _2814 = *(uint64_t*)_2740;
  if (((_2814 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _2866;
  } else {
    goto _2867;
  }

_2866:
  _2815 = *(void**)_2735;
  _2816 = ((&((uint8_t*)_2815)[((int64_t)16)]));
  _2817 = *(uint64_t*)_2816;
  _2818 = ((&((uint8_t*)_2815)[((int64_t)8)]));
  _2819 = *(uint64_t*)_2818;
  if ((((int64_t)_2819) > ((int64_t)_2817))) {
    goto _2868;
  } else {
    _2836__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2869;
  }

_2868:
  _2820 = *(void**)_2815;
  _2821 = *(uint8_t*)(((&((uint8_t*)_2820)[((int64_t)_2817)])));
  *(uint64_t*)_2816 = (llvm_add_u64(_2817, 1));
  _2822 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2821)), 0);
  _2823 = llvm_sub_u8(32, (llvm_shl_u8(_2822, 3)));
  _2824 = (((uint32_t)(uint8_t)_2821)) << 24;
  if ((((uint8_t)_2823) > ((uint8_t)((uint8_t)16)))) {
    _2836__PHI_TEMPORARY = _2824;   /* for PHI node */
    goto _2869;
  } else {
    _2825__PHI_TEMPORARY = 16;   /* for PHI node */
    _2826__PHI_TEMPORARY = _2824;   /* for PHI node */
    goto _2870;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2870:
  _2825 = _2825__PHI_TEMPORARY;
  _2826 = _2826__PHI_TEMPORARY;
  if (((((int64_t)_2825) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2825) < ((uint64_t)(((uint64_t)(uint8_t)_2823)))))) {
    _2836__PHI_TEMPORARY = _2826;   /* for PHI node */
    goto _2869;
  } else {
    goto _2871;
  }

_2871:
  _2827 = *(uint64_t*)_2816;
  _2828 = *(uint64_t*)_2818;
  if ((((int64_t)_2828) > ((int64_t)_2827))) {
    goto _2872;
  } else {
    _2836__PHI_TEMPORARY = _2826;   /* for PHI node */
    goto _2869;
  }

_2872:
  _2829 = *(void**)_2815;
  _2830 = *(uint8_t*)(((&((uint8_t*)_2829)[((int64_t)_2827)])));
  if ((((int8_t)_2830) > ((int8_t)((uint8_t)-65)))) {
    _2836__PHI_TEMPORARY = _2826;   /* for PHI node */
    goto _2869;
  } else {
    goto _2873;
  }

_2873:
  _2831 = llvm_select_u32((((int64_t)_2827) < ((int64_t)_2828)), (((uint32_t)(uint8_t)_2830)), 0);
  _2832 = *(uint64_t*)_2816;
  *(uint64_t*)_2816 = (llvm_add_u64(_2832, 1));
  _2833 = llvm_neg_u64(_2825);
  _2834 = _2826 | (llvm_select_u32((((int64_t)_2825) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2833) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2831, (((uint32_t)_2833)))))), (llvm_select_u32((((uint64_t)_2825) > ((uint64_t)UINT64_C(31))), 0, (_2831 << (((uint32_t)_2825)))))));
  _2835 = llvm_add_u64(_2825, -8);
  _2825__PHI_TEMPORARY = _2835;   /* for PHI node */
  _2826__PHI_TEMPORARY = _2834;   /* for PHI node */
  goto _2870;

  } while (1); /* end of syntactic loop '' */
_2869:
  _2836 = _2836__PHI_TEMPORARY;
  _2837 = *(uint64_t*)_2740;
  _2838 = *(uint64_t*)_2742;
  _2839 = jsyn_cbe_fshl_i64(_2838, _2837, 32);
  _2840 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2836)), _2838, 32);
  *(uint64_t*)_2740 = _2839;
  *(uint64_t*)_2742 = _2840;
  _2841 = ((&((uint8_t*)_2735)[((int64_t)56)]));
  _2842 = *(uint64_t*)_2841;
  _2843 = ((&((uint8_t*)_2735)[((int64_t)64)]));
  _2844 = *(uint64_t*)_2843;
  _2845 = ((&((uint8_t*)_2735)[((int64_t)72)]));
  _2846 = *(uint64_t*)_2845;
  _2847 = *(void**)_2735;
  _2848 = *(uint64_t*)(((&((uint8_t*)_2847)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2735)[((int64_t)48)]))) = _2842;
  *(uint64_t*)_2841 = _2844;
  *(uint64_t*)_2843 = _2846;
  *(uint64_t*)_2845 = _2848;
  julia_emit_20((&_2738), _2734, _2735, 78, 1);
  _2812__PHI_TEMPORARY = (&_2738);   /* for PHI node */
  goto _2865;

_2867:
  julia_emit_20((&_2739), _2734, _2735, 69, 1);
  _2812__PHI_TEMPORARY = (&_2739);   /* for PHI node */
  goto _2865;

}


static void julia_lex_exclaim_34(void* _2874, void* _2875, void* _2876) {
  struct l_array_4_uint64_t _2877;    /* Address-exposed local */
  struct l_array_4_uint64_t _2878;    /* Address-exposed local */
  struct l_array_4_uint64_t _2879;    /* Address-exposed local */
  void* _2880;
  uint64_t _2881;
  void* _2882;
  void* _2883;
  void* _2884;
  uint64_t _2885;
  void* _2886;
  uint64_t _2887;
  void* _2888;
  uint8_t _2889;
  uint8_t _2890;
  uint8_t _2891;
  uint32_t _2892;
  uint64_t _2893;
  uint64_t _2893__PHI_TEMPORARY;
  uint32_t _2894;
  uint32_t _2894__PHI_TEMPORARY;
  uint64_t _2895;
  uint64_t _2896;
  void* _2897;
  uint8_t _2898;
  uint32_t _2899;
  uint64_t _2900;
  uint64_t _2901;
  uint32_t _2902;
  uint64_t _2903;
  uint32_t _2904;
  uint32_t _2904__PHI_TEMPORARY;
  uint64_t _2905;
  uint64_t _2906;
  uint64_t _2907;
  uint64_t _2908;
  void* _2909;
  uint64_t _2910;
  void* _2911;
  uint64_t _2912;
  void* _2913;
  uint64_t _2914;
  void* _2915;
  uint64_t _2916;
  uint64_t _2917;
  void* _2918;
  void* _2919;
  uint64_t _2920;
  void* _2921;
  uint64_t _2922;
  void* _2923;
  uint8_t _2924;
  uint8_t _2925;
  uint8_t _2926;
  uint32_t _2927;
  uint64_t _2928;
  uint64_t _2928__PHI_TEMPORARY;
  uint32_t _2929;
  uint32_t _2929__PHI_TEMPORARY;
  uint64_t _2930;
  uint64_t _2931;
  void* _2932;
  uint8_t _2933;
  uint32_t _2934;
  uint64_t _2935;
  uint64_t _2936;
  uint32_t _2937;
  uint64_t _2938;
  uint32_t _2939;
  uint32_t _2939__PHI_TEMPORARY;
  uint64_t _2940;
  uint64_t _2941;
  uint64_t _2942;
  uint64_t _2943;
  void* _2944;
  uint64_t _2945;
  void* _2946;
  uint64_t _2947;
  void* _2948;
  uint64_t _2949;
  void* _2950;
  uint64_t _2951;
  void* _2952;
  void* _2952__PHI_TEMPORARY;
  void* _2953;

  _2880 = ((&((uint8_t*)_2876)[((int64_t)32)]));
  _2881 = *(uint64_t*)_2880;
  _2882 = ((&((uint8_t*)_2876)[((int64_t)40)]));
  if (((_2881 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2954;
  } else {
    goto _2955;
  }

_2954:
  _2883 = *(void**)_2876;
  _2884 = ((&((uint8_t*)_2883)[((int64_t)16)]));
  _2885 = *(uint64_t*)_2884;
  _2886 = ((&((uint8_t*)_2883)[((int64_t)8)]));
  _2887 = *(uint64_t*)_2886;
  if ((((int64_t)_2887) > ((int64_t)_2885))) {
    goto _2956;
  } else {
    _2904__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2957;
  }

_2956:
  _2888 = *(void**)_2883;
  _2889 = *(uint8_t*)(((&((uint8_t*)_2888)[((int64_t)_2885)])));
  *(uint64_t*)_2884 = (llvm_add_u64(_2885, 1));
  _2890 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2889)), 0);
  _2891 = llvm_sub_u8(32, (llvm_shl_u8(_2890, 3)));
  _2892 = (((uint32_t)(uint8_t)_2889)) << 24;
  if ((((uint8_t)_2891) > ((uint8_t)((uint8_t)16)))) {
    _2904__PHI_TEMPORARY = _2892;   /* for PHI node */
    goto _2957;
  } else {
    _2893__PHI_TEMPORARY = 16;   /* for PHI node */
    _2894__PHI_TEMPORARY = _2892;   /* for PHI node */
    goto _2958;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2958:
  _2893 = _2893__PHI_TEMPORARY;
  _2894 = _2894__PHI_TEMPORARY;
  if (((((int64_t)_2893) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2893) < ((uint64_t)(((uint64_t)(uint8_t)_2891)))))) {
    _2904__PHI_TEMPORARY = _2894;   /* for PHI node */
    goto _2957;
  } else {
    goto _2959;
  }

_2959:
  _2895 = *(uint64_t*)_2884;
  _2896 = *(uint64_t*)_2886;
  if ((((int64_t)_2896) > ((int64_t)_2895))) {
    goto _2960;
  } else {
    _2904__PHI_TEMPORARY = _2894;   /* for PHI node */
    goto _2957;
  }

_2960:
  _2897 = *(void**)_2883;
  _2898 = *(uint8_t*)(((&((uint8_t*)_2897)[((int64_t)_2895)])));
  if ((((int8_t)_2898) > ((int8_t)((uint8_t)-65)))) {
    _2904__PHI_TEMPORARY = _2894;   /* for PHI node */
    goto _2957;
  } else {
    goto _2961;
  }

_2961:
  _2899 = llvm_select_u32((((int64_t)_2895) < ((int64_t)_2896)), (((uint32_t)(uint8_t)_2898)), 0);
  _2900 = *(uint64_t*)_2884;
  *(uint64_t*)_2884 = (llvm_add_u64(_2900, 1));
  _2901 = llvm_neg_u64(_2893);
  _2902 = _2894 | (llvm_select_u32((((int64_t)_2893) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2901) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2899, (((uint32_t)_2901)))))), (llvm_select_u32((((uint64_t)_2893) > ((uint64_t)UINT64_C(31))), 0, (_2899 << (((uint32_t)_2893)))))));
  _2903 = llvm_add_u64(_2893, -8);
  _2893__PHI_TEMPORARY = _2903;   /* for PHI node */
  _2894__PHI_TEMPORARY = _2902;   /* for PHI node */
  goto _2958;

  } while (1); /* end of syntactic loop '' */
_2957:
  _2904 = _2904__PHI_TEMPORARY;
  _2905 = *(uint64_t*)_2880;
  _2906 = *(uint64_t*)_2882;
  _2907 = jsyn_cbe_fshl_i64(_2906, _2905, 32);
  _2908 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2904)), _2906, 32);
  *(uint64_t*)_2880 = _2907;
  *(uint64_t*)_2882 = _2908;
  _2909 = ((&((uint8_t*)_2876)[((int64_t)56)]));
  _2910 = *(uint64_t*)_2909;
  _2911 = ((&((uint8_t*)_2876)[((int64_t)64)]));
  _2912 = *(uint64_t*)_2911;
  _2913 = ((&((uint8_t*)_2876)[((int64_t)72)]));
  _2914 = *(uint64_t*)_2913;
  _2915 = *(void**)_2876;
  _2916 = *(uint64_t*)(((&((uint8_t*)_2915)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2876)[((int64_t)48)]))) = _2910;
  *(uint64_t*)_2909 = _2912;
  *(uint64_t*)_2911 = _2914;
  *(uint64_t*)_2913 = _2916;
  _2917 = *(uint64_t*)_2880;
  if (((_2917 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2962;
  } else {
    goto _2963;
  }

_2962:
  _2918 = *(void**)_2876;
  _2919 = ((&((uint8_t*)_2918)[((int64_t)16)]));
  _2920 = *(uint64_t*)_2919;
  _2921 = ((&((uint8_t*)_2918)[((int64_t)8)]));
  _2922 = *(uint64_t*)_2921;
  if ((((int64_t)_2922) > ((int64_t)_2920))) {
    goto _2964;
  } else {
    _2939__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2965;
  }

_2964:
  _2923 = *(void**)_2918;
  _2924 = *(uint8_t*)(((&((uint8_t*)_2923)[((int64_t)_2920)])));
  *(uint64_t*)_2919 = (llvm_add_u64(_2920, 1));
  _2925 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2924)), 0);
  _2926 = llvm_sub_u8(32, (llvm_shl_u8(_2925, 3)));
  _2927 = (((uint32_t)(uint8_t)_2924)) << 24;
  if ((((uint8_t)_2926) > ((uint8_t)((uint8_t)16)))) {
    _2939__PHI_TEMPORARY = _2927;   /* for PHI node */
    goto _2965;
  } else {
    _2928__PHI_TEMPORARY = 16;   /* for PHI node */
    _2929__PHI_TEMPORARY = _2927;   /* for PHI node */
    goto _2966;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2966:
  _2928 = _2928__PHI_TEMPORARY;
  _2929 = _2929__PHI_TEMPORARY;
  if (((((int64_t)_2928) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2928) < ((uint64_t)(((uint64_t)(uint8_t)_2926)))))) {
    _2939__PHI_TEMPORARY = _2929;   /* for PHI node */
    goto _2965;
  } else {
    goto _2967;
  }

_2967:
  _2930 = *(uint64_t*)_2919;
  _2931 = *(uint64_t*)_2921;
  if ((((int64_t)_2931) > ((int64_t)_2930))) {
    goto _2968;
  } else {
    _2939__PHI_TEMPORARY = _2929;   /* for PHI node */
    goto _2965;
  }

_2968:
  _2932 = *(void**)_2918;
  _2933 = *(uint8_t*)(((&((uint8_t*)_2932)[((int64_t)_2930)])));
  if ((((int8_t)_2933) > ((int8_t)((uint8_t)-65)))) {
    _2939__PHI_TEMPORARY = _2929;   /* for PHI node */
    goto _2965;
  } else {
    goto _2969;
  }

_2969:
  _2934 = llvm_select_u32((((int64_t)_2930) < ((int64_t)_2931)), (((uint32_t)(uint8_t)_2933)), 0);
  _2935 = *(uint64_t*)_2919;
  *(uint64_t*)_2919 = (llvm_add_u64(_2935, 1));
  _2936 = llvm_neg_u64(_2928);
  _2937 = _2929 | (llvm_select_u32((((int64_t)_2928) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2936) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2934, (((uint32_t)_2936)))))), (llvm_select_u32((((uint64_t)_2928) > ((uint64_t)UINT64_C(31))), 0, (_2934 << (((uint32_t)_2928)))))));
  _2938 = llvm_add_u64(_2928, -8);
  _2928__PHI_TEMPORARY = _2938;   /* for PHI node */
  _2929__PHI_TEMPORARY = _2937;   /* for PHI node */
  goto _2966;

  } while (1); /* end of syntactic loop '' */
_2965:
  _2939 = _2939__PHI_TEMPORARY;
  _2940 = *(uint64_t*)_2880;
  _2941 = *(uint64_t*)_2882;
  _2942 = jsyn_cbe_fshl_i64(_2941, _2940, 32);
  _2943 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2939)), _2941, 32);
  *(uint64_t*)_2880 = _2942;
  *(uint64_t*)_2882 = _2943;
  _2944 = ((&((uint8_t*)_2876)[((int64_t)56)]));
  _2945 = *(uint64_t*)_2944;
  _2946 = ((&((uint8_t*)_2876)[((int64_t)64)]));
  _2947 = *(uint64_t*)_2946;
  _2948 = ((&((uint8_t*)_2876)[((int64_t)72)]));
  _2949 = *(uint64_t*)_2948;
  _2950 = *(void**)_2876;
  _2951 = *(uint64_t*)(((&((uint8_t*)_2950)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2876)[((int64_t)48)]))) = _2945;
  *(uint64_t*)_2944 = _2947;
  *(uint64_t*)_2946 = _2949;
  *(uint64_t*)_2948 = _2951;
  julia_emit_20((&_2877), _2875, _2876, 249, 1);
  _2952__PHI_TEMPORARY = (&_2877);   /* for PHI node */
  goto _2970;

_2970:
  _2952 = _2952__PHI_TEMPORARY;
  _2953 = memcpy(_2874, _2952, 32);
  return;
_2963:
  julia_emit_20((&_2878), _2875, _2876, 247, 1);
  _2952__PHI_TEMPORARY = (&_2878);   /* for PHI node */
  goto _2970;

_2955:
  julia_emit_20((&_2879), _2875, _2876, 708, 1);
  _2952__PHI_TEMPORARY = (&_2879);   /* for PHI node */
  goto _2970;

}


static void julia_lex_greater_35(void* _2971, void* _2972, void* _2973) {
  struct l_array_4_uint64_t _2974;    /* Address-exposed local */
  struct l_array_4_uint64_t _2975;    /* Address-exposed local */
  struct l_array_4_uint64_t _2976;    /* Address-exposed local */
  struct l_array_4_uint64_t _2977;    /* Address-exposed local */
  struct l_array_4_uint64_t _2978;    /* Address-exposed local */
  struct l_array_4_uint64_t _2979;    /* Address-exposed local */
  struct l_array_4_uint64_t _2980;    /* Address-exposed local */
  void* _2981;
  uint64_t _2982;
  void* _2983;
  void* _2984;
  void* _2985;
  uint64_t _2986;
  void* _2987;
  uint64_t _2988;
  void* _2989;
  uint8_t _2990;
  uint8_t _2991;
  uint8_t _2992;
  uint32_t _2993;
  uint64_t _2994;
  uint64_t _2994__PHI_TEMPORARY;
  uint32_t _2995;
  uint32_t _2995__PHI_TEMPORARY;
  uint64_t _2996;
  uint64_t _2997;
  void* _2998;
  uint8_t _2999;
  uint32_t _3000;
  uint64_t _3001;
  uint64_t _3002;
  uint32_t _3003;
  uint64_t _3004;
  uint32_t _3005;
  uint32_t _3005__PHI_TEMPORARY;
  uint64_t _3006;
  uint64_t _3007;
  uint64_t _3008;
  uint64_t _3009;
  void* _3010;
  uint64_t _3011;
  void* _3012;
  uint64_t _3013;
  void* _3014;
  uint64_t _3015;
  void* _3016;
  uint64_t _3017;
  uint64_t _3018;
  void* _3019;
  void* _3020;
  uint64_t _3021;
  void* _3022;
  uint64_t _3023;
  void* _3024;
  uint8_t _3025;
  uint8_t _3026;
  uint8_t _3027;
  uint32_t _3028;
  uint64_t _3029;
  uint64_t _3029__PHI_TEMPORARY;
  uint32_t _3030;
  uint32_t _3030__PHI_TEMPORARY;
  uint64_t _3031;
  uint64_t _3032;
  void* _3033;
  uint8_t _3034;
  uint32_t _3035;
  uint64_t _3036;
  uint64_t _3037;
  uint32_t _3038;
  uint64_t _3039;
  uint32_t _3040;
  uint32_t _3040__PHI_TEMPORARY;
  uint64_t _3041;
  uint64_t _3042;
  uint64_t _3043;
  uint64_t _3044;
  void* _3045;
  uint64_t _3046;
  void* _3047;
  uint64_t _3048;
  void* _3049;
  uint64_t _3050;
  void* _3051;
  uint64_t _3052;
  uint64_t _3053;
  void* _3054;
  void* _3055;
  uint64_t _3056;
  void* _3057;
  uint64_t _3058;
  void* _3059;
  uint8_t _3060;
  uint8_t _3061;
  uint8_t _3062;
  uint32_t _3063;
  uint64_t _3064;
  uint64_t _3064__PHI_TEMPORARY;
  uint32_t _3065;
  uint32_t _3065__PHI_TEMPORARY;
  uint64_t _3066;
  uint64_t _3067;
  void* _3068;
  uint8_t _3069;
  uint32_t _3070;
  uint64_t _3071;
  uint64_t _3072;
  uint32_t _3073;
  uint64_t _3074;
  uint32_t _3075;
  uint32_t _3075__PHI_TEMPORARY;
  uint64_t _3076;
  uint64_t _3077;
  uint64_t _3078;
  uint64_t _3079;
  void* _3080;
  uint64_t _3081;
  void* _3082;
  uint64_t _3083;
  void* _3084;
  uint64_t _3085;
  void* _3086;
  uint64_t _3087;
  void* _3088;
  void* _3088__PHI_TEMPORARY;
  void* _3089;
  uint64_t _3090;
  void* _3091;
  void* _3092;
  uint64_t _3093;
  void* _3094;
  uint64_t _3095;
  void* _3096;
  uint8_t _3097;
  uint8_t _3098;
  uint8_t _3099;
  uint32_t _3100;
  uint64_t _3101;
  uint64_t _3101__PHI_TEMPORARY;
  uint32_t _3102;
  uint32_t _3102__PHI_TEMPORARY;
  uint64_t _3103;
  uint64_t _3104;
  void* _3105;
  uint8_t _3106;
  uint32_t _3107;
  uint64_t _3108;
  uint64_t _3109;
  uint32_t _3110;
  uint64_t _3111;
  uint32_t _3112;
  uint32_t _3112__PHI_TEMPORARY;
  uint64_t _3113;
  uint64_t _3114;
  uint64_t _3115;
  uint64_t _3116;
  void* _3117;
  uint64_t _3118;
  void* _3119;
  uint64_t _3120;
  void* _3121;
  uint64_t _3122;
  void* _3123;
  uint64_t _3124;
  uint64_t _3125;
  void* _3126;
  void* _3127;
  uint64_t _3128;
  void* _3129;
  uint64_t _3130;
  void* _3131;
  uint8_t _3132;
  uint8_t _3133;
  uint8_t _3134;
  uint32_t _3135;
  uint64_t _3136;
  uint64_t _3136__PHI_TEMPORARY;
  uint32_t _3137;
  uint32_t _3137__PHI_TEMPORARY;
  uint64_t _3138;
  uint64_t _3139;
  void* _3140;
  uint8_t _3141;
  uint32_t _3142;
  uint64_t _3143;
  uint64_t _3144;
  uint32_t _3145;
  uint64_t _3146;
  uint32_t _3147;
  uint32_t _3147__PHI_TEMPORARY;
  uint64_t _3148;
  uint64_t _3149;
  uint64_t _3150;
  uint64_t _3151;
  void* _3152;
  uint64_t _3153;
  void* _3154;
  uint64_t _3155;
  void* _3156;
  uint64_t _3157;
  void* _3158;
  uint64_t _3159;
  uint64_t _3160;
  void* _3161;
  void* _3162;
  uint64_t _3163;
  void* _3164;
  uint64_t _3165;
  void* _3166;
  uint8_t _3167;
  uint8_t _3168;
  uint8_t _3169;
  uint32_t _3170;
  uint64_t _3171;
  uint64_t _3171__PHI_TEMPORARY;
  uint32_t _3172;
  uint32_t _3172__PHI_TEMPORARY;
  uint64_t _3173;
  uint64_t _3174;
  void* _3175;
  uint8_t _3176;
  uint32_t _3177;
  uint64_t _3178;
  uint64_t _3179;
  uint32_t _3180;
  uint64_t _3181;
  uint32_t _3182;
  uint32_t _3182__PHI_TEMPORARY;
  uint64_t _3183;
  uint64_t _3184;
  uint64_t _3185;
  uint64_t _3186;
  void* _3187;
  uint64_t _3188;
  void* _3189;
  uint64_t _3190;
  void* _3191;
  uint64_t _3192;
  void* _3193;
  uint64_t _3194;

  _2981 = ((&((uint8_t*)_2973)[((int64_t)32)]));
  _2982 = *(uint64_t*)_2981;
  _2983 = ((&((uint8_t*)_2973)[((int64_t)40)]));
  if (((_2982 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _3195;
  } else {
    goto _3196;
  }

_3195:
  _2984 = *(void**)_2973;
  _2985 = ((&((uint8_t*)_2984)[((int64_t)16)]));
  _2986 = *(uint64_t*)_2985;
  _2987 = ((&((uint8_t*)_2984)[((int64_t)8)]));
  _2988 = *(uint64_t*)_2987;
  if ((((int64_t)_2988) > ((int64_t)_2986))) {
    goto _3197;
  } else {
    _3005__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3198;
  }

_3197:
  _2989 = *(void**)_2984;
  _2990 = *(uint8_t*)(((&((uint8_t*)_2989)[((int64_t)_2986)])));
  *(uint64_t*)_2985 = (llvm_add_u64(_2986, 1));
  _2991 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2990)), 0);
  _2992 = llvm_sub_u8(32, (llvm_shl_u8(_2991, 3)));
  _2993 = (((uint32_t)(uint8_t)_2990)) << 24;
  if ((((uint8_t)_2992) > ((uint8_t)((uint8_t)16)))) {
    _3005__PHI_TEMPORARY = _2993;   /* for PHI node */
    goto _3198;
  } else {
    _2994__PHI_TEMPORARY = 16;   /* for PHI node */
    _2995__PHI_TEMPORARY = _2993;   /* for PHI node */
    goto _3199;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3199:
  _2994 = _2994__PHI_TEMPORARY;
  _2995 = _2995__PHI_TEMPORARY;
  if (((((int64_t)_2994) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2994) < ((uint64_t)(((uint64_t)(uint8_t)_2992)))))) {
    _3005__PHI_TEMPORARY = _2995;   /* for PHI node */
    goto _3198;
  } else {
    goto _3200;
  }

_3200:
  _2996 = *(uint64_t*)_2985;
  _2997 = *(uint64_t*)_2987;
  if ((((int64_t)_2997) > ((int64_t)_2996))) {
    goto _3201;
  } else {
    _3005__PHI_TEMPORARY = _2995;   /* for PHI node */
    goto _3198;
  }

_3201:
  _2998 = *(void**)_2984;
  _2999 = *(uint8_t*)(((&((uint8_t*)_2998)[((int64_t)_2996)])));
  if ((((int8_t)_2999) > ((int8_t)((uint8_t)-65)))) {
    _3005__PHI_TEMPORARY = _2995;   /* for PHI node */
    goto _3198;
  } else {
    goto _3202;
  }

_3202:
  _3000 = llvm_select_u32((((int64_t)_2996) < ((int64_t)_2997)), (((uint32_t)(uint8_t)_2999)), 0);
  _3001 = *(uint64_t*)_2985;
  *(uint64_t*)_2985 = (llvm_add_u64(_3001, 1));
  _3002 = llvm_neg_u64(_2994);
  _3003 = _2995 | (llvm_select_u32((((int64_t)_2994) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3002) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3000, (((uint32_t)_3002)))))), (llvm_select_u32((((uint64_t)_2994) > ((uint64_t)UINT64_C(31))), 0, (_3000 << (((uint32_t)_2994)))))));
  _3004 = llvm_add_u64(_2994, -8);
  _2994__PHI_TEMPORARY = _3004;   /* for PHI node */
  _2995__PHI_TEMPORARY = _3003;   /* for PHI node */
  goto _3199;

  } while (1); /* end of syntactic loop '' */
_3198:
  _3005 = _3005__PHI_TEMPORARY;
  _3006 = *(uint64_t*)_2981;
  _3007 = *(uint64_t*)_2983;
  _3008 = jsyn_cbe_fshl_i64(_3007, _3006, 32);
  _3009 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3005)), _3007, 32);
  *(uint64_t*)_2981 = _3008;
  *(uint64_t*)_2983 = _3009;
  _3010 = ((&((uint8_t*)_2973)[((int64_t)56)]));
  _3011 = *(uint64_t*)_3010;
  _3012 = ((&((uint8_t*)_2973)[((int64_t)64)]));
  _3013 = *(uint64_t*)_3012;
  _3014 = ((&((uint8_t*)_2973)[((int64_t)72)]));
  _3015 = *(uint64_t*)_3014;
  _3016 = *(void**)_2973;
  _3017 = *(uint64_t*)(((&((uint8_t*)_3016)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2973)[((int64_t)48)]))) = _3011;
  *(uint64_t*)_3010 = _3013;
  *(uint64_t*)_3012 = _3015;
  *(uint64_t*)_3014 = _3017;
  _3018 = *(uint64_t*)_2981;
  if (((_3018 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _3203;
  } else {
    goto _3204;
  }

_3203:
  _3019 = *(void**)_2973;
  _3020 = ((&((uint8_t*)_3019)[((int64_t)16)]));
  _3021 = *(uint64_t*)_3020;
  _3022 = ((&((uint8_t*)_3019)[((int64_t)8)]));
  _3023 = *(uint64_t*)_3022;
  if ((((int64_t)_3023) > ((int64_t)_3021))) {
    goto _3205;
  } else {
    _3040__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3206;
  }

_3205:
  _3024 = *(void**)_3019;
  _3025 = *(uint8_t*)(((&((uint8_t*)_3024)[((int64_t)_3021)])));
  *(uint64_t*)_3020 = (llvm_add_u64(_3021, 1));
  _3026 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3025)), 0);
  _3027 = llvm_sub_u8(32, (llvm_shl_u8(_3026, 3)));
  _3028 = (((uint32_t)(uint8_t)_3025)) << 24;
  if ((((uint8_t)_3027) > ((uint8_t)((uint8_t)16)))) {
    _3040__PHI_TEMPORARY = _3028;   /* for PHI node */
    goto _3206;
  } else {
    _3029__PHI_TEMPORARY = 16;   /* for PHI node */
    _3030__PHI_TEMPORARY = _3028;   /* for PHI node */
    goto _3207;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3207:
  _3029 = _3029__PHI_TEMPORARY;
  _3030 = _3030__PHI_TEMPORARY;
  if (((((int64_t)_3029) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3029) < ((uint64_t)(((uint64_t)(uint8_t)_3027)))))) {
    _3040__PHI_TEMPORARY = _3030;   /* for PHI node */
    goto _3206;
  } else {
    goto _3208;
  }

_3208:
  _3031 = *(uint64_t*)_3020;
  _3032 = *(uint64_t*)_3022;
  if ((((int64_t)_3032) > ((int64_t)_3031))) {
    goto _3209;
  } else {
    _3040__PHI_TEMPORARY = _3030;   /* for PHI node */
    goto _3206;
  }

_3209:
  _3033 = *(void**)_3019;
  _3034 = *(uint8_t*)(((&((uint8_t*)_3033)[((int64_t)_3031)])));
  if ((((int8_t)_3034) > ((int8_t)((uint8_t)-65)))) {
    _3040__PHI_TEMPORARY = _3030;   /* for PHI node */
    goto _3206;
  } else {
    goto _3210;
  }

_3210:
  _3035 = llvm_select_u32((((int64_t)_3031) < ((int64_t)_3032)), (((uint32_t)(uint8_t)_3034)), 0);
  _3036 = *(uint64_t*)_3020;
  *(uint64_t*)_3020 = (llvm_add_u64(_3036, 1));
  _3037 = llvm_neg_u64(_3029);
  _3038 = _3030 | (llvm_select_u32((((int64_t)_3029) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3037) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3035, (((uint32_t)_3037)))))), (llvm_select_u32((((uint64_t)_3029) > ((uint64_t)UINT64_C(31))), 0, (_3035 << (((uint32_t)_3029)))))));
  _3039 = llvm_add_u64(_3029, -8);
  _3029__PHI_TEMPORARY = _3039;   /* for PHI node */
  _3030__PHI_TEMPORARY = _3038;   /* for PHI node */
  goto _3207;

  } while (1); /* end of syntactic loop '' */
_3206:
  _3040 = _3040__PHI_TEMPORARY;
  _3041 = *(uint64_t*)_2981;
  _3042 = *(uint64_t*)_2983;
  _3043 = jsyn_cbe_fshl_i64(_3042, _3041, 32);
  _3044 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3040)), _3042, 32);
  *(uint64_t*)_2981 = _3043;
  *(uint64_t*)_2983 = _3044;
  _3045 = ((&((uint8_t*)_2973)[((int64_t)56)]));
  _3046 = *(uint64_t*)_3045;
  _3047 = ((&((uint8_t*)_2973)[((int64_t)64)]));
  _3048 = *(uint64_t*)_3047;
  _3049 = ((&((uint8_t*)_2973)[((int64_t)72)]));
  _3050 = *(uint64_t*)_3049;
  _3051 = *(void**)_2973;
  _3052 = *(uint64_t*)(((&((uint8_t*)_3051)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2973)[((int64_t)48)]))) = _3046;
  *(uint64_t*)_3045 = _3048;
  *(uint64_t*)_3047 = _3050;
  *(uint64_t*)_3049 = _3052;
  _3053 = *(uint64_t*)_2981;
  if (((_3053 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3211;
  } else {
    goto _3212;
  }

_3211:
  _3054 = *(void**)_2973;
  _3055 = ((&((uint8_t*)_3054)[((int64_t)16)]));
  _3056 = *(uint64_t*)_3055;
  _3057 = ((&((uint8_t*)_3054)[((int64_t)8)]));
  _3058 = *(uint64_t*)_3057;
  if ((((int64_t)_3058) > ((int64_t)_3056))) {
    goto _3213;
  } else {
    _3075__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3214;
  }

_3213:
  _3059 = *(void**)_3054;
  _3060 = *(uint8_t*)(((&((uint8_t*)_3059)[((int64_t)_3056)])));
  *(uint64_t*)_3055 = (llvm_add_u64(_3056, 1));
  _3061 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3060)), 0);
  _3062 = llvm_sub_u8(32, (llvm_shl_u8(_3061, 3)));
  _3063 = (((uint32_t)(uint8_t)_3060)) << 24;
  if ((((uint8_t)_3062) > ((uint8_t)((uint8_t)16)))) {
    _3075__PHI_TEMPORARY = _3063;   /* for PHI node */
    goto _3214;
  } else {
    _3064__PHI_TEMPORARY = 16;   /* for PHI node */
    _3065__PHI_TEMPORARY = _3063;   /* for PHI node */
    goto _3215;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3215:
  _3064 = _3064__PHI_TEMPORARY;
  _3065 = _3065__PHI_TEMPORARY;
  if (((((int64_t)_3064) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3064) < ((uint64_t)(((uint64_t)(uint8_t)_3062)))))) {
    _3075__PHI_TEMPORARY = _3065;   /* for PHI node */
    goto _3214;
  } else {
    goto _3216;
  }

_3216:
  _3066 = *(uint64_t*)_3055;
  _3067 = *(uint64_t*)_3057;
  if ((((int64_t)_3067) > ((int64_t)_3066))) {
    goto _3217;
  } else {
    _3075__PHI_TEMPORARY = _3065;   /* for PHI node */
    goto _3214;
  }

_3217:
  _3068 = *(void**)_3054;
  _3069 = *(uint8_t*)(((&((uint8_t*)_3068)[((int64_t)_3066)])));
  if ((((int8_t)_3069) > ((int8_t)((uint8_t)-65)))) {
    _3075__PHI_TEMPORARY = _3065;   /* for PHI node */
    goto _3214;
  } else {
    goto _3218;
  }

_3218:
  _3070 = llvm_select_u32((((int64_t)_3066) < ((int64_t)_3067)), (((uint32_t)(uint8_t)_3069)), 0);
  _3071 = *(uint64_t*)_3055;
  *(uint64_t*)_3055 = (llvm_add_u64(_3071, 1));
  _3072 = llvm_neg_u64(_3064);
  _3073 = _3065 | (llvm_select_u32((((int64_t)_3064) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3072) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3070, (((uint32_t)_3072)))))), (llvm_select_u32((((uint64_t)_3064) > ((uint64_t)UINT64_C(31))), 0, (_3070 << (((uint32_t)_3064)))))));
  _3074 = llvm_add_u64(_3064, -8);
  _3064__PHI_TEMPORARY = _3074;   /* for PHI node */
  _3065__PHI_TEMPORARY = _3073;   /* for PHI node */
  goto _3215;

  } while (1); /* end of syntactic loop '' */
_3214:
  _3075 = _3075__PHI_TEMPORARY;
  _3076 = *(uint64_t*)_2981;
  _3077 = *(uint64_t*)_2983;
  _3078 = jsyn_cbe_fshl_i64(_3077, _3076, 32);
  _3079 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3075)), _3077, 32);
  *(uint64_t*)_2981 = _3078;
  *(uint64_t*)_2983 = _3079;
  _3080 = ((&((uint8_t*)_2973)[((int64_t)56)]));
  _3081 = *(uint64_t*)_3080;
  _3082 = ((&((uint8_t*)_2973)[((int64_t)64)]));
  _3083 = *(uint64_t*)_3082;
  _3084 = ((&((uint8_t*)_2973)[((int64_t)72)]));
  _3085 = *(uint64_t*)_3084;
  _3086 = *(void**)_2973;
  _3087 = *(uint64_t*)(((&((uint8_t*)_3086)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2973)[((int64_t)48)]))) = _3081;
  *(uint64_t*)_3080 = _3083;
  *(uint64_t*)_3082 = _3085;
  *(uint64_t*)_3084 = _3087;
  julia_emit_20((&_2974), _2972, _2973, 71, 1);
  _3088__PHI_TEMPORARY = (&_2974);   /* for PHI node */
  goto _3219;

_3219:
  _3088 = _3088__PHI_TEMPORARY;
  _3089 = memcpy(_2971, _3088, 32);
  return;
_3212:
  julia_emit_20((&_2975), _2972, _2973, 673, 1);
  _3088__PHI_TEMPORARY = (&_2975);   /* for PHI node */
  goto _3219;

_3204:
  _3090 = *(uint64_t*)_2981;
  if (((_3090 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3220;
  } else {
    goto _3221;
  }

_3220:
  _3091 = *(void**)_2973;
  _3092 = ((&((uint8_t*)_3091)[((int64_t)16)]));
  _3093 = *(uint64_t*)_3092;
  _3094 = ((&((uint8_t*)_3091)[((int64_t)8)]));
  _3095 = *(uint64_t*)_3094;
  if ((((int64_t)_3095) > ((int64_t)_3093))) {
    goto _3222;
  } else {
    _3112__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3223;
  }

_3222:
  _3096 = *(void**)_3091;
  _3097 = *(uint8_t*)(((&((uint8_t*)_3096)[((int64_t)_3093)])));
  *(uint64_t*)_3092 = (llvm_add_u64(_3093, 1));
  _3098 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3097)), 0);
  _3099 = llvm_sub_u8(32, (llvm_shl_u8(_3098, 3)));
  _3100 = (((uint32_t)(uint8_t)_3097)) << 24;
  if ((((uint8_t)_3099) > ((uint8_t)((uint8_t)16)))) {
    _3112__PHI_TEMPORARY = _3100;   /* for PHI node */
    goto _3223;
  } else {
    _3101__PHI_TEMPORARY = 16;   /* for PHI node */
    _3102__PHI_TEMPORARY = _3100;   /* for PHI node */
    goto _3224;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3224:
  _3101 = _3101__PHI_TEMPORARY;
  _3102 = _3102__PHI_TEMPORARY;
  if (((((int64_t)_3101) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3101) < ((uint64_t)(((uint64_t)(uint8_t)_3099)))))) {
    _3112__PHI_TEMPORARY = _3102;   /* for PHI node */
    goto _3223;
  } else {
    goto _3225;
  }

_3225:
  _3103 = *(uint64_t*)_3092;
  _3104 = *(uint64_t*)_3094;
  if ((((int64_t)_3104) > ((int64_t)_3103))) {
    goto _3226;
  } else {
    _3112__PHI_TEMPORARY = _3102;   /* for PHI node */
    goto _3223;
  }

_3226:
  _3105 = *(void**)_3091;
  _3106 = *(uint8_t*)(((&((uint8_t*)_3105)[((int64_t)_3103)])));
  if ((((int8_t)_3106) > ((int8_t)((uint8_t)-65)))) {
    _3112__PHI_TEMPORARY = _3102;   /* for PHI node */
    goto _3223;
  } else {
    goto _3227;
  }

_3227:
  _3107 = llvm_select_u32((((int64_t)_3103) < ((int64_t)_3104)), (((uint32_t)(uint8_t)_3106)), 0);
  _3108 = *(uint64_t*)_3092;
  *(uint64_t*)_3092 = (llvm_add_u64(_3108, 1));
  _3109 = llvm_neg_u64(_3101);
  _3110 = _3102 | (llvm_select_u32((((int64_t)_3101) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3109) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3107, (((uint32_t)_3109)))))), (llvm_select_u32((((uint64_t)_3101) > ((uint64_t)UINT64_C(31))), 0, (_3107 << (((uint32_t)_3101)))))));
  _3111 = llvm_add_u64(_3101, -8);
  _3101__PHI_TEMPORARY = _3111;   /* for PHI node */
  _3102__PHI_TEMPORARY = _3110;   /* for PHI node */
  goto _3224;

  } while (1); /* end of syntactic loop '' */
_3223:
  _3112 = _3112__PHI_TEMPORARY;
  _3113 = *(uint64_t*)_2981;
  _3114 = *(uint64_t*)_2983;
  _3115 = jsyn_cbe_fshl_i64(_3114, _3113, 32);
  _3116 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3112)), _3114, 32);
  *(uint64_t*)_2981 = _3115;
  *(uint64_t*)_2983 = _3116;
  _3117 = ((&((uint8_t*)_2973)[((int64_t)56)]));
  _3118 = *(uint64_t*)_3117;
  _3119 = ((&((uint8_t*)_2973)[((int64_t)64)]));
  _3120 = *(uint64_t*)_3119;
  _3121 = ((&((uint8_t*)_2973)[((int64_t)72)]));
  _3122 = *(uint64_t*)_3121;
  _3123 = *(void**)_2973;
  _3124 = *(uint64_t*)(((&((uint8_t*)_3123)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2973)[((int64_t)48)]))) = _3118;
  *(uint64_t*)_3117 = _3120;
  *(uint64_t*)_3119 = _3122;
  *(uint64_t*)_3121 = _3124;
  julia_emit_20((&_2976), _2972, _2973, 71, 1);
  _3088__PHI_TEMPORARY = (&_2976);   /* for PHI node */
  goto _3219;

_3221:
  julia_emit_20((&_2977), _2972, _2973, 672, 1);
  _3088__PHI_TEMPORARY = (&_2977);   /* for PHI node */
  goto _3219;

_3196:
  _3125 = *(uint64_t*)_2981;
  if (((_3125 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3228;
  } else {
    goto _3229;
  }

_3228:
  _3126 = *(void**)_2973;
  _3127 = ((&((uint8_t*)_3126)[((int64_t)16)]));
  _3128 = *(uint64_t*)_3127;
  _3129 = ((&((uint8_t*)_3126)[((int64_t)8)]));
  _3130 = *(uint64_t*)_3129;
  if ((((int64_t)_3130) > ((int64_t)_3128))) {
    goto _3230;
  } else {
    _3147__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3231;
  }

_3230:
  _3131 = *(void**)_3126;
  _3132 = *(uint8_t*)(((&((uint8_t*)_3131)[((int64_t)_3128)])));
  *(uint64_t*)_3127 = (llvm_add_u64(_3128, 1));
  _3133 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3132)), 0);
  _3134 = llvm_sub_u8(32, (llvm_shl_u8(_3133, 3)));
  _3135 = (((uint32_t)(uint8_t)_3132)) << 24;
  if ((((uint8_t)_3134) > ((uint8_t)((uint8_t)16)))) {
    _3147__PHI_TEMPORARY = _3135;   /* for PHI node */
    goto _3231;
  } else {
    _3136__PHI_TEMPORARY = 16;   /* for PHI node */
    _3137__PHI_TEMPORARY = _3135;   /* for PHI node */
    goto _3232;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3232:
  _3136 = _3136__PHI_TEMPORARY;
  _3137 = _3137__PHI_TEMPORARY;
  if (((((int64_t)_3136) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3136) < ((uint64_t)(((uint64_t)(uint8_t)_3134)))))) {
    _3147__PHI_TEMPORARY = _3137;   /* for PHI node */
    goto _3231;
  } else {
    goto _3233;
  }

_3233:
  _3138 = *(uint64_t*)_3127;
  _3139 = *(uint64_t*)_3129;
  if ((((int64_t)_3139) > ((int64_t)_3138))) {
    goto _3234;
  } else {
    _3147__PHI_TEMPORARY = _3137;   /* for PHI node */
    goto _3231;
  }

_3234:
  _3140 = *(void**)_3126;
  _3141 = *(uint8_t*)(((&((uint8_t*)_3140)[((int64_t)_3138)])));
  if ((((int8_t)_3141) > ((int8_t)((uint8_t)-65)))) {
    _3147__PHI_TEMPORARY = _3137;   /* for PHI node */
    goto _3231;
  } else {
    goto _3235;
  }

_3235:
  _3142 = llvm_select_u32((((int64_t)_3138) < ((int64_t)_3139)), (((uint32_t)(uint8_t)_3141)), 0);
  _3143 = *(uint64_t*)_3127;
  *(uint64_t*)_3127 = (llvm_add_u64(_3143, 1));
  _3144 = llvm_neg_u64(_3136);
  _3145 = _3137 | (llvm_select_u32((((int64_t)_3136) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3144) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3142, (((uint32_t)_3144)))))), (llvm_select_u32((((uint64_t)_3136) > ((uint64_t)UINT64_C(31))), 0, (_3142 << (((uint32_t)_3136)))))));
  _3146 = llvm_add_u64(_3136, -8);
  _3136__PHI_TEMPORARY = _3146;   /* for PHI node */
  _3137__PHI_TEMPORARY = _3145;   /* for PHI node */
  goto _3232;

  } while (1); /* end of syntactic loop '' */
_3231:
  _3147 = _3147__PHI_TEMPORARY;
  _3148 = *(uint64_t*)_2981;
  _3149 = *(uint64_t*)_2983;
  _3150 = jsyn_cbe_fshl_i64(_3149, _3148, 32);
  _3151 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3147)), _3149, 32);
  *(uint64_t*)_2981 = _3150;
  *(uint64_t*)_2983 = _3151;
  _3152 = ((&((uint8_t*)_2973)[((int64_t)56)]));
  _3153 = *(uint64_t*)_3152;
  _3154 = ((&((uint8_t*)_2973)[((int64_t)64)]));
  _3155 = *(uint64_t*)_3154;
  _3156 = ((&((uint8_t*)_2973)[((int64_t)72)]));
  _3157 = *(uint64_t*)_3156;
  _3158 = *(void**)_2973;
  _3159 = *(uint64_t*)(((&((uint8_t*)_3158)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2973)[((int64_t)48)]))) = _3153;
  *(uint64_t*)_3152 = _3155;
  *(uint64_t*)_3154 = _3157;
  *(uint64_t*)_3156 = _3159;
  julia_emit_20((&_2978), _2972, _2973, 240, 1);
  _3088__PHI_TEMPORARY = (&_2978);   /* for PHI node */
  goto _3219;

_3229:
  _3160 = *(uint64_t*)_2981;
  if (((_3160 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _3236;
  } else {
    goto _3237;
  }

_3236:
  _3161 = *(void**)_2973;
  _3162 = ((&((uint8_t*)_3161)[((int64_t)16)]));
  _3163 = *(uint64_t*)_3162;
  _3164 = ((&((uint8_t*)_3161)[((int64_t)8)]));
  _3165 = *(uint64_t*)_3164;
  if ((((int64_t)_3165) > ((int64_t)_3163))) {
    goto _3238;
  } else {
    _3182__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3239;
  }

_3238:
  _3166 = *(void**)_3161;
  _3167 = *(uint8_t*)(((&((uint8_t*)_3166)[((int64_t)_3163)])));
  *(uint64_t*)_3162 = (llvm_add_u64(_3163, 1));
  _3168 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3167)), 0);
  _3169 = llvm_sub_u8(32, (llvm_shl_u8(_3168, 3)));
  _3170 = (((uint32_t)(uint8_t)_3167)) << 24;
  if ((((uint8_t)_3169) > ((uint8_t)((uint8_t)16)))) {
    _3182__PHI_TEMPORARY = _3170;   /* for PHI node */
    goto _3239;
  } else {
    _3171__PHI_TEMPORARY = 16;   /* for PHI node */
    _3172__PHI_TEMPORARY = _3170;   /* for PHI node */
    goto _3240;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3240:
  _3171 = _3171__PHI_TEMPORARY;
  _3172 = _3172__PHI_TEMPORARY;
  if (((((int64_t)_3171) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3171) < ((uint64_t)(((uint64_t)(uint8_t)_3169)))))) {
    _3182__PHI_TEMPORARY = _3172;   /* for PHI node */
    goto _3239;
  } else {
    goto _3241;
  }

_3241:
  _3173 = *(uint64_t*)_3162;
  _3174 = *(uint64_t*)_3164;
  if ((((int64_t)_3174) > ((int64_t)_3173))) {
    goto _3242;
  } else {
    _3182__PHI_TEMPORARY = _3172;   /* for PHI node */
    goto _3239;
  }

_3242:
  _3175 = *(void**)_3161;
  _3176 = *(uint8_t*)(((&((uint8_t*)_3175)[((int64_t)_3173)])));
  if ((((int8_t)_3176) > ((int8_t)((uint8_t)-65)))) {
    _3182__PHI_TEMPORARY = _3172;   /* for PHI node */
    goto _3239;
  } else {
    goto _3243;
  }

_3243:
  _3177 = llvm_select_u32((((int64_t)_3173) < ((int64_t)_3174)), (((uint32_t)(uint8_t)_3176)), 0);
  _3178 = *(uint64_t*)_3162;
  *(uint64_t*)_3162 = (llvm_add_u64(_3178, 1));
  _3179 = llvm_neg_u64(_3171);
  _3180 = _3172 | (llvm_select_u32((((int64_t)_3171) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3179) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3177, (((uint32_t)_3179)))))), (llvm_select_u32((((uint64_t)_3171) > ((uint64_t)UINT64_C(31))), 0, (_3177 << (((uint32_t)_3171)))))));
  _3181 = llvm_add_u64(_3171, -8);
  _3171__PHI_TEMPORARY = _3181;   /* for PHI node */
  _3172__PHI_TEMPORARY = _3180;   /* for PHI node */
  goto _3240;

  } while (1); /* end of syntactic loop '' */
_3239:
  _3182 = _3182__PHI_TEMPORARY;
  _3183 = *(uint64_t*)_2981;
  _3184 = *(uint64_t*)_2983;
  _3185 = jsyn_cbe_fshl_i64(_3184, _3183, 32);
  _3186 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3182)), _3184, 32);
  *(uint64_t*)_2981 = _3185;
  *(uint64_t*)_2983 = _3186;
  _3187 = ((&((uint8_t*)_2973)[((int64_t)56)]));
  _3188 = *(uint64_t*)_3187;
  _3189 = ((&((uint8_t*)_2973)[((int64_t)64)]));
  _3190 = *(uint64_t*)_3189;
  _3191 = ((&((uint8_t*)_2973)[((int64_t)72)]));
  _3192 = *(uint64_t*)_3191;
  _3193 = *(void**)_2973;
  _3194 = *(uint64_t*)(((&((uint8_t*)_3193)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2973)[((int64_t)48)]))) = _3188;
  *(uint64_t*)_3187 = _3190;
  *(uint64_t*)_3189 = _3192;
  *(uint64_t*)_3191 = _3194;
  julia_emit_20((&_2979), _2972, _2973, 237, 1);
  _3088__PHI_TEMPORARY = (&_2979);   /* for PHI node */
  goto _3219;

_3237:
  julia_emit_20((&_2980), _2972, _2973, 238, 1);
  _3088__PHI_TEMPORARY = (&_2980);   /* for PHI node */
  goto _3219;

}


static void julia_lex_less_36(void* _3244, void* _3245, void* _3246) {
  struct l_array_4_uint64_t _3247;    /* Address-exposed local */
  struct l_array_4_uint64_t _3248;    /* Address-exposed local */
  struct l_array_4_uint64_t _3249;    /* Address-exposed local */
  struct l_array_4_uint64_t _3250;    /* Address-exposed local */
  struct l_array_4_uint64_t _3251;    /* Address-exposed local */
  struct l_array_4_uint64_t _3252;    /* Address-exposed local */
  struct l_array_4_uint64_t _3253;    /* Address-exposed local */
  struct l_array_4_uint64_t _3254;    /* Address-exposed local */
  struct l_array_4_uint64_t _3255;    /* Address-exposed local */
  struct l_array_4_uint64_t _3256;    /* Address-exposed local */
  void* _3257;
  uint64_t _3258;
  void* _3259;
  void* _3260;
  void* _3261;
  uint64_t _3262;
  void* _3263;
  uint64_t _3264;
  void* _3265;
  uint8_t _3266;
  uint8_t _3267;
  uint8_t _3268;
  uint32_t _3269;
  uint64_t _3270;
  uint64_t _3270__PHI_TEMPORARY;
  uint32_t _3271;
  uint32_t _3271__PHI_TEMPORARY;
  uint64_t _3272;
  uint64_t _3273;
  void* _3274;
  uint8_t _3275;
  uint32_t _3276;
  uint64_t _3277;
  uint64_t _3278;
  uint32_t _3279;
  uint64_t _3280;
  uint32_t _3281;
  uint32_t _3281__PHI_TEMPORARY;
  uint64_t _3282;
  uint64_t _3283;
  uint64_t _3284;
  uint64_t _3285;
  void* _3286;
  uint64_t _3287;
  void* _3288;
  uint64_t _3289;
  void* _3290;
  uint64_t _3291;
  void* _3292;
  uint64_t _3293;
  uint64_t _3294;
  void* _3295;
  void* _3296;
  uint64_t _3297;
  void* _3298;
  uint64_t _3299;
  void* _3300;
  uint8_t _3301;
  uint8_t _3302;
  uint8_t _3303;
  uint32_t _3304;
  uint64_t _3305;
  uint64_t _3305__PHI_TEMPORARY;
  uint32_t _3306;
  uint32_t _3306__PHI_TEMPORARY;
  uint64_t _3307;
  uint64_t _3308;
  void* _3309;
  uint8_t _3310;
  uint32_t _3311;
  uint64_t _3312;
  uint64_t _3313;
  uint32_t _3314;
  uint64_t _3315;
  uint32_t _3316;
  uint32_t _3316__PHI_TEMPORARY;
  uint64_t _3317;
  uint64_t _3318;
  uint64_t _3319;
  uint64_t _3320;
  void* _3321;
  uint64_t _3322;
  void* _3323;
  uint64_t _3324;
  void* _3325;
  uint64_t _3326;
  void* _3327;
  uint64_t _3328;
  void* _3329;
  void* _3329__PHI_TEMPORARY;
  void* _3330;
  uint64_t _3331;
  void* _3332;
  void* _3333;
  uint64_t _3334;
  void* _3335;
  uint64_t _3336;
  void* _3337;
  uint8_t _3338;
  uint8_t _3339;
  uint8_t _3340;
  uint32_t _3341;
  uint64_t _3342;
  uint64_t _3342__PHI_TEMPORARY;
  uint32_t _3343;
  uint32_t _3343__PHI_TEMPORARY;
  uint64_t _3344;
  uint64_t _3345;
  void* _3346;
  uint8_t _3347;
  uint32_t _3348;
  uint64_t _3349;
  uint64_t _3350;
  uint32_t _3351;
  uint64_t _3352;
  uint32_t _3353;
  uint32_t _3353__PHI_TEMPORARY;
  uint64_t _3354;
  uint64_t _3355;
  uint64_t _3356;
  uint64_t _3357;
  void* _3358;
  uint64_t _3359;
  void* _3360;
  uint64_t _3361;
  void* _3362;
  uint64_t _3363;
  void* _3364;
  uint64_t _3365;
  uint64_t _3366;
  void* _3367;
  void* _3368;
  uint64_t _3369;
  void* _3370;
  uint64_t _3371;
  void* _3372;
  uint8_t _3373;
  uint8_t _3374;
  uint8_t _3375;
  uint32_t _3376;
  uint64_t _3377;
  uint64_t _3377__PHI_TEMPORARY;
  uint32_t _3378;
  uint32_t _3378__PHI_TEMPORARY;
  uint64_t _3379;
  uint64_t _3380;
  void* _3381;
  uint8_t _3382;
  uint32_t _3383;
  uint64_t _3384;
  uint64_t _3385;
  uint32_t _3386;
  uint64_t _3387;
  uint32_t _3388;
  uint32_t _3388__PHI_TEMPORARY;
  uint64_t _3389;
  uint64_t _3390;
  uint64_t _3391;
  uint64_t _3392;
  void* _3393;
  uint64_t _3394;
  void* _3395;
  uint64_t _3396;
  void* _3397;
  uint64_t _3398;
  void* _3399;
  uint64_t _3400;
  uint64_t _3401;
  void* _3402;
  void* _3403;
  uint64_t _3404;
  void* _3405;
  uint64_t _3406;
  void* _3407;
  uint8_t _3408;
  uint8_t _3409;
  uint8_t _3410;
  uint32_t _3411;
  uint64_t _3412;
  uint64_t _3412__PHI_TEMPORARY;
  uint32_t _3413;
  uint32_t _3413__PHI_TEMPORARY;
  uint64_t _3414;
  uint64_t _3415;
  void* _3416;
  uint8_t _3417;
  uint32_t _3418;
  uint64_t _3419;
  uint64_t _3420;
  uint32_t _3421;
  uint64_t _3422;
  uint32_t _3423;
  uint32_t _3423__PHI_TEMPORARY;
  uint64_t _3424;
  uint64_t _3425;
  uint64_t _3426;
  uint64_t _3427;
  void* _3428;
  uint64_t _3429;
  void* _3430;
  uint64_t _3431;
  void* _3432;
  uint64_t _3433;
  void* _3434;
  uint64_t _3435;
  uint64_t _3436;
  uint64_t _3437;
  void* _3438;
  void* _3439;
  uint64_t _3440;
  void* _3441;
  uint64_t _3442;
  void* _3443;
  uint8_t _3444;
  uint8_t _3445;
  uint8_t _3446;
  uint32_t _3447;
  uint64_t _3448;
  uint64_t _3448__PHI_TEMPORARY;
  uint32_t _3449;
  uint32_t _3449__PHI_TEMPORARY;
  uint64_t _3450;
  uint64_t _3451;
  void* _3452;
  uint8_t _3453;
  uint32_t _3454;
  uint64_t _3455;
  uint64_t _3456;
  uint32_t _3457;
  uint64_t _3458;
  uint32_t _3459;
  uint32_t _3459__PHI_TEMPORARY;
  uint64_t _3460;
  uint64_t _3461;
  uint64_t _3462;
  uint64_t _3463;
  void* _3464;
  void* _3465;
  uint64_t _3466;
  void* _3467;
  uint64_t _3468;
  void* _3469;
  uint64_t _3470;
  void* _3471;
  uint64_t _3472;
  void* _3473;
  void* _3474;
  uint64_t _3475;
  void* _3476;
  uint64_t _3477;
  void* _3478;
  uint8_t _3479;
  uint8_t _3480;
  uint8_t _3481;
  uint32_t _3482;
  uint64_t _3483;
  uint64_t _3483__PHI_TEMPORARY;
  uint32_t _3484;
  uint32_t _3484__PHI_TEMPORARY;
  uint64_t _3485;
  uint64_t _3486;
  void* _3487;
  uint8_t _3488;
  uint32_t _3489;
  uint64_t _3490;
  uint64_t _3491;
  uint32_t _3492;
  uint64_t _3493;
  uint32_t _3494;
  uint32_t _3494__PHI_TEMPORARY;
  uint64_t _3495;
  uint64_t _3496;
  uint64_t _3497;
  uint64_t _3498;
  uint64_t _3499;
  uint64_t _3500;
  uint64_t _3501;
  void* _3502;
  uint64_t _3503;
  uint64_t _3504;
  void* _3505;
  void* _3506;
  uint64_t _3507;
  void* _3508;
  uint64_t _3509;
  void* _3510;
  uint8_t _3511;
  uint8_t _3512;
  uint8_t _3513;
  uint32_t _3514;
  uint64_t _3515;
  uint64_t _3515__PHI_TEMPORARY;
  uint32_t _3516;
  uint32_t _3516__PHI_TEMPORARY;
  uint64_t _3517;
  uint64_t _3518;
  void* _3519;
  uint8_t _3520;
  uint32_t _3521;
  uint64_t _3522;
  uint64_t _3523;
  uint32_t _3524;
  uint64_t _3525;
  uint32_t _3526;
  uint32_t _3526__PHI_TEMPORARY;
  uint64_t _3527;
  uint64_t _3528;
  uint64_t _3529;
  uint64_t _3530;
  uint64_t _3531;
  uint64_t _3532;
  uint64_t _3533;
  void* _3534;
  uint64_t _3535;
  uint64_t _3536;
  void* _3537;
  void* _3538;
  uint64_t _3539;
  void* _3540;
  uint64_t _3541;
  void* _3542;
  uint8_t _3543;
  uint8_t _3544;
  uint8_t _3545;
  uint32_t _3546;
  uint64_t _3547;
  uint64_t _3547__PHI_TEMPORARY;
  uint32_t _3548;
  uint32_t _3548__PHI_TEMPORARY;
  uint64_t _3549;
  uint64_t _3550;
  void* _3551;
  uint8_t _3552;
  uint32_t _3553;
  uint64_t _3554;
  uint64_t _3555;
  uint32_t _3556;
  uint64_t _3557;
  uint32_t _3558;
  uint32_t _3558__PHI_TEMPORARY;
  uint64_t _3559;
  uint64_t _3560;
  uint64_t _3561;
  uint64_t _3562;
  uint64_t _3563;
  uint64_t _3564;
  uint64_t _3565;
  void* _3566;
  uint64_t _3567;
  uint64_t _3568;
  void* _3569;
  void* _3570;
  uint64_t _3571;
  void* _3572;
  uint64_t _3573;
  void* _3574;
  uint8_t _3575;
  uint8_t _3576;
  uint8_t _3577;
  uint32_t _3578;
  uint64_t _3579;
  uint64_t _3579__PHI_TEMPORARY;
  uint32_t _3580;
  uint32_t _3580__PHI_TEMPORARY;
  uint64_t _3581;
  uint64_t _3582;
  void* _3583;
  uint8_t _3584;
  uint32_t _3585;
  uint64_t _3586;
  uint64_t _3587;
  uint32_t _3588;
  uint64_t _3589;
  uint32_t _3590;
  uint32_t _3590__PHI_TEMPORARY;
  uint64_t _3591;
  uint64_t _3592;
  uint64_t _3593;
  uint64_t _3594;
  uint64_t _3595;
  uint64_t _3596;
  uint64_t _3597;
  void* _3598;
  uint64_t _3599;

  _3257 = ((&((uint8_t*)_3246)[((int64_t)32)]));
  _3258 = *(uint64_t*)_3257;
  _3259 = ((&((uint8_t*)_3246)[((int64_t)40)]));
  if (((_3258 & INT64_C(-4294967296)) == UINT64_C(4323455642275676160))) {
    goto _3600;
  } else {
    goto _3601;
  }

_3600:
  _3260 = *(void**)_3246;
  _3261 = ((&((uint8_t*)_3260)[((int64_t)16)]));
  _3262 = *(uint64_t*)_3261;
  _3263 = ((&((uint8_t*)_3260)[((int64_t)8)]));
  _3264 = *(uint64_t*)_3263;
  if ((((int64_t)_3264) > ((int64_t)_3262))) {
    goto _3602;
  } else {
    _3281__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3603;
  }

_3602:
  _3265 = *(void**)_3260;
  _3266 = *(uint8_t*)(((&((uint8_t*)_3265)[((int64_t)_3262)])));
  *(uint64_t*)_3261 = (llvm_add_u64(_3262, 1));
  _3267 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3266)), 0);
  _3268 = llvm_sub_u8(32, (llvm_shl_u8(_3267, 3)));
  _3269 = (((uint32_t)(uint8_t)_3266)) << 24;
  if ((((uint8_t)_3268) > ((uint8_t)((uint8_t)16)))) {
    _3281__PHI_TEMPORARY = _3269;   /* for PHI node */
    goto _3603;
  } else {
    _3270__PHI_TEMPORARY = 16;   /* for PHI node */
    _3271__PHI_TEMPORARY = _3269;   /* for PHI node */
    goto _3604;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3604:
  _3270 = _3270__PHI_TEMPORARY;
  _3271 = _3271__PHI_TEMPORARY;
  if (((((int64_t)_3270) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3270) < ((uint64_t)(((uint64_t)(uint8_t)_3268)))))) {
    _3281__PHI_TEMPORARY = _3271;   /* for PHI node */
    goto _3603;
  } else {
    goto _3605;
  }

_3605:
  _3272 = *(uint64_t*)_3261;
  _3273 = *(uint64_t*)_3263;
  if ((((int64_t)_3273) > ((int64_t)_3272))) {
    goto _3606;
  } else {
    _3281__PHI_TEMPORARY = _3271;   /* for PHI node */
    goto _3603;
  }

_3606:
  _3274 = *(void**)_3260;
  _3275 = *(uint8_t*)(((&((uint8_t*)_3274)[((int64_t)_3272)])));
  if ((((int8_t)_3275) > ((int8_t)((uint8_t)-65)))) {
    _3281__PHI_TEMPORARY = _3271;   /* for PHI node */
    goto _3603;
  } else {
    goto _3607;
  }

_3607:
  _3276 = llvm_select_u32((((int64_t)_3272) < ((int64_t)_3273)), (((uint32_t)(uint8_t)_3275)), 0);
  _3277 = *(uint64_t*)_3261;
  *(uint64_t*)_3261 = (llvm_add_u64(_3277, 1));
  _3278 = llvm_neg_u64(_3270);
  _3279 = _3271 | (llvm_select_u32((((int64_t)_3270) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3278) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3276, (((uint32_t)_3278)))))), (llvm_select_u32((((uint64_t)_3270) > ((uint64_t)UINT64_C(31))), 0, (_3276 << (((uint32_t)_3270)))))));
  _3280 = llvm_add_u64(_3270, -8);
  _3270__PHI_TEMPORARY = _3280;   /* for PHI node */
  _3271__PHI_TEMPORARY = _3279;   /* for PHI node */
  goto _3604;

  } while (1); /* end of syntactic loop '' */
_3603:
  _3281 = _3281__PHI_TEMPORARY;
  _3282 = *(uint64_t*)_3257;
  _3283 = *(uint64_t*)_3259;
  _3284 = jsyn_cbe_fshl_i64(_3283, _3282, 32);
  _3285 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3281)), _3283, 32);
  *(uint64_t*)_3257 = _3284;
  *(uint64_t*)_3259 = _3285;
  _3286 = ((&((uint8_t*)_3246)[((int64_t)56)]));
  _3287 = *(uint64_t*)_3286;
  _3288 = ((&((uint8_t*)_3246)[((int64_t)64)]));
  _3289 = *(uint64_t*)_3288;
  _3290 = ((&((uint8_t*)_3246)[((int64_t)72)]));
  _3291 = *(uint64_t*)_3290;
  _3292 = *(void**)_3246;
  _3293 = *(uint64_t*)(((&((uint8_t*)_3292)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3246)[((int64_t)48)]))) = _3287;
  *(uint64_t*)_3286 = _3289;
  *(uint64_t*)_3288 = _3291;
  *(uint64_t*)_3290 = _3293;
  _3294 = *(uint64_t*)_3257;
  if (((_3294 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3608;
  } else {
    goto _3609;
  }

_3608:
  _3295 = *(void**)_3246;
  _3296 = ((&((uint8_t*)_3295)[((int64_t)16)]));
  _3297 = *(uint64_t*)_3296;
  _3298 = ((&((uint8_t*)_3295)[((int64_t)8)]));
  _3299 = *(uint64_t*)_3298;
  if ((((int64_t)_3299) > ((int64_t)_3297))) {
    goto _3610;
  } else {
    _3316__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3611;
  }

_3610:
  _3300 = *(void**)_3295;
  _3301 = *(uint8_t*)(((&((uint8_t*)_3300)[((int64_t)_3297)])));
  *(uint64_t*)_3296 = (llvm_add_u64(_3297, 1));
  _3302 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3301)), 0);
  _3303 = llvm_sub_u8(32, (llvm_shl_u8(_3302, 3)));
  _3304 = (((uint32_t)(uint8_t)_3301)) << 24;
  if ((((uint8_t)_3303) > ((uint8_t)((uint8_t)16)))) {
    _3316__PHI_TEMPORARY = _3304;   /* for PHI node */
    goto _3611;
  } else {
    _3305__PHI_TEMPORARY = 16;   /* for PHI node */
    _3306__PHI_TEMPORARY = _3304;   /* for PHI node */
    goto _3612;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3612:
  _3305 = _3305__PHI_TEMPORARY;
  _3306 = _3306__PHI_TEMPORARY;
  if (((((int64_t)_3305) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3305) < ((uint64_t)(((uint64_t)(uint8_t)_3303)))))) {
    _3316__PHI_TEMPORARY = _3306;   /* for PHI node */
    goto _3611;
  } else {
    goto _3613;
  }

_3613:
  _3307 = *(uint64_t*)_3296;
  _3308 = *(uint64_t*)_3298;
  if ((((int64_t)_3308) > ((int64_t)_3307))) {
    goto _3614;
  } else {
    _3316__PHI_TEMPORARY = _3306;   /* for PHI node */
    goto _3611;
  }

_3614:
  _3309 = *(void**)_3295;
  _3310 = *(uint8_t*)(((&((uint8_t*)_3309)[((int64_t)_3307)])));
  if ((((int8_t)_3310) > ((int8_t)((uint8_t)-65)))) {
    _3316__PHI_TEMPORARY = _3306;   /* for PHI node */
    goto _3611;
  } else {
    goto _3615;
  }

_3615:
  _3311 = llvm_select_u32((((int64_t)_3307) < ((int64_t)_3308)), (((uint32_t)(uint8_t)_3310)), 0);
  _3312 = *(uint64_t*)_3296;
  *(uint64_t*)_3296 = (llvm_add_u64(_3312, 1));
  _3313 = llvm_neg_u64(_3305);
  _3314 = _3306 | (llvm_select_u32((((int64_t)_3305) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3313) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3311, (((uint32_t)_3313)))))), (llvm_select_u32((((uint64_t)_3305) > ((uint64_t)UINT64_C(31))), 0, (_3311 << (((uint32_t)_3305)))))));
  _3315 = llvm_add_u64(_3305, -8);
  _3305__PHI_TEMPORARY = _3315;   /* for PHI node */
  _3306__PHI_TEMPORARY = _3314;   /* for PHI node */
  goto _3612;

  } while (1); /* end of syntactic loop '' */
_3611:
  _3316 = _3316__PHI_TEMPORARY;
  _3317 = *(uint64_t*)_3257;
  _3318 = *(uint64_t*)_3259;
  _3319 = jsyn_cbe_fshl_i64(_3318, _3317, 32);
  _3320 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3316)), _3318, 32);
  *(uint64_t*)_3257 = _3319;
  *(uint64_t*)_3259 = _3320;
  _3321 = ((&((uint8_t*)_3246)[((int64_t)56)]));
  _3322 = *(uint64_t*)_3321;
  _3323 = ((&((uint8_t*)_3246)[((int64_t)64)]));
  _3324 = *(uint64_t*)_3323;
  _3325 = ((&((uint8_t*)_3246)[((int64_t)72)]));
  _3326 = *(uint64_t*)_3325;
  _3327 = *(void**)_3246;
  _3328 = *(uint64_t*)(((&((uint8_t*)_3327)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3246)[((int64_t)48)]))) = _3322;
  *(uint64_t*)_3321 = _3324;
  *(uint64_t*)_3323 = _3326;
  *(uint64_t*)_3325 = _3328;
  julia_emit_20((&_3247), _3245, _3246, 71, 1);
  _3329__PHI_TEMPORARY = (&_3247);   /* for PHI node */
  goto _3616;

_3616:
  _3329 = _3329__PHI_TEMPORARY;
  _3330 = memcpy(_3244, _3329, 32);
  return;
_3609:
  julia_emit_20((&_3248), _3245, _3246, 671, 1);
  _3329__PHI_TEMPORARY = (&_3248);   /* for PHI node */
  goto _3616;

_3601:
  _3331 = *(uint64_t*)_3257;
  if (((_3331 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3617;
  } else {
    goto _3618;
  }

_3617:
  _3332 = *(void**)_3246;
  _3333 = ((&((uint8_t*)_3332)[((int64_t)16)]));
  _3334 = *(uint64_t*)_3333;
  _3335 = ((&((uint8_t*)_3332)[((int64_t)8)]));
  _3336 = *(uint64_t*)_3335;
  if ((((int64_t)_3336) > ((int64_t)_3334))) {
    goto _3619;
  } else {
    _3353__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3620;
  }

_3619:
  _3337 = *(void**)_3332;
  _3338 = *(uint8_t*)(((&((uint8_t*)_3337)[((int64_t)_3334)])));
  *(uint64_t*)_3333 = (llvm_add_u64(_3334, 1));
  _3339 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3338)), 0);
  _3340 = llvm_sub_u8(32, (llvm_shl_u8(_3339, 3)));
  _3341 = (((uint32_t)(uint8_t)_3338)) << 24;
  if ((((uint8_t)_3340) > ((uint8_t)((uint8_t)16)))) {
    _3353__PHI_TEMPORARY = _3341;   /* for PHI node */
    goto _3620;
  } else {
    _3342__PHI_TEMPORARY = 16;   /* for PHI node */
    _3343__PHI_TEMPORARY = _3341;   /* for PHI node */
    goto _3621;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3621:
  _3342 = _3342__PHI_TEMPORARY;
  _3343 = _3343__PHI_TEMPORARY;
  if (((((int64_t)_3342) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3342) < ((uint64_t)(((uint64_t)(uint8_t)_3340)))))) {
    _3353__PHI_TEMPORARY = _3343;   /* for PHI node */
    goto _3620;
  } else {
    goto _3622;
  }

_3622:
  _3344 = *(uint64_t*)_3333;
  _3345 = *(uint64_t*)_3335;
  if ((((int64_t)_3345) > ((int64_t)_3344))) {
    goto _3623;
  } else {
    _3353__PHI_TEMPORARY = _3343;   /* for PHI node */
    goto _3620;
  }

_3623:
  _3346 = *(void**)_3332;
  _3347 = *(uint8_t*)(((&((uint8_t*)_3346)[((int64_t)_3344)])));
  if ((((int8_t)_3347) > ((int8_t)((uint8_t)-65)))) {
    _3353__PHI_TEMPORARY = _3343;   /* for PHI node */
    goto _3620;
  } else {
    goto _3624;
  }

_3624:
  _3348 = llvm_select_u32((((int64_t)_3344) < ((int64_t)_3345)), (((uint32_t)(uint8_t)_3347)), 0);
  _3349 = *(uint64_t*)_3333;
  *(uint64_t*)_3333 = (llvm_add_u64(_3349, 1));
  _3350 = llvm_neg_u64(_3342);
  _3351 = _3343 | (llvm_select_u32((((int64_t)_3342) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3350) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3348, (((uint32_t)_3350)))))), (llvm_select_u32((((uint64_t)_3342) > ((uint64_t)UINT64_C(31))), 0, (_3348 << (((uint32_t)_3342)))))));
  _3352 = llvm_add_u64(_3342, -8);
  _3342__PHI_TEMPORARY = _3352;   /* for PHI node */
  _3343__PHI_TEMPORARY = _3351;   /* for PHI node */
  goto _3621;

  } while (1); /* end of syntactic loop '' */
_3620:
  _3353 = _3353__PHI_TEMPORARY;
  _3354 = *(uint64_t*)_3257;
  _3355 = *(uint64_t*)_3259;
  _3356 = jsyn_cbe_fshl_i64(_3355, _3354, 32);
  _3357 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3353)), _3355, 32);
  *(uint64_t*)_3257 = _3356;
  *(uint64_t*)_3259 = _3357;
  _3358 = ((&((uint8_t*)_3246)[((int64_t)56)]));
  _3359 = *(uint64_t*)_3358;
  _3360 = ((&((uint8_t*)_3246)[((int64_t)64)]));
  _3361 = *(uint64_t*)_3360;
  _3362 = ((&((uint8_t*)_3246)[((int64_t)72)]));
  _3363 = *(uint64_t*)_3362;
  _3364 = *(void**)_3246;
  _3365 = *(uint64_t*)(((&((uint8_t*)_3364)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3246)[((int64_t)48)]))) = _3359;
  *(uint64_t*)_3358 = _3361;
  *(uint64_t*)_3360 = _3363;
  *(uint64_t*)_3362 = _3365;
  julia_emit_20((&_3249), _3245, _3246, 242, 1);
  _3329__PHI_TEMPORARY = (&_3249);   /* for PHI node */
  goto _3616;

_3618:
  _3366 = *(uint64_t*)_3257;
  if (((_3366 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _3625;
  } else {
    goto _3626;
  }

_3625:
  _3367 = *(void**)_3246;
  _3368 = ((&((uint8_t*)_3367)[((int64_t)16)]));
  _3369 = *(uint64_t*)_3368;
  _3370 = ((&((uint8_t*)_3367)[((int64_t)8)]));
  _3371 = *(uint64_t*)_3370;
  if ((((int64_t)_3371) > ((int64_t)_3369))) {
    goto _3627;
  } else {
    _3388__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3628;
  }

_3627:
  _3372 = *(void**)_3367;
  _3373 = *(uint8_t*)(((&((uint8_t*)_3372)[((int64_t)_3369)])));
  *(uint64_t*)_3368 = (llvm_add_u64(_3369, 1));
  _3374 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3373)), 0);
  _3375 = llvm_sub_u8(32, (llvm_shl_u8(_3374, 3)));
  _3376 = (((uint32_t)(uint8_t)_3373)) << 24;
  if ((((uint8_t)_3375) > ((uint8_t)((uint8_t)16)))) {
    _3388__PHI_TEMPORARY = _3376;   /* for PHI node */
    goto _3628;
  } else {
    _3377__PHI_TEMPORARY = 16;   /* for PHI node */
    _3378__PHI_TEMPORARY = _3376;   /* for PHI node */
    goto _3629;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3629:
  _3377 = _3377__PHI_TEMPORARY;
  _3378 = _3378__PHI_TEMPORARY;
  if (((((int64_t)_3377) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3377) < ((uint64_t)(((uint64_t)(uint8_t)_3375)))))) {
    _3388__PHI_TEMPORARY = _3378;   /* for PHI node */
    goto _3628;
  } else {
    goto _3630;
  }

_3630:
  _3379 = *(uint64_t*)_3368;
  _3380 = *(uint64_t*)_3370;
  if ((((int64_t)_3380) > ((int64_t)_3379))) {
    goto _3631;
  } else {
    _3388__PHI_TEMPORARY = _3378;   /* for PHI node */
    goto _3628;
  }

_3631:
  _3381 = *(void**)_3367;
  _3382 = *(uint8_t*)(((&((uint8_t*)_3381)[((int64_t)_3379)])));
  if ((((int8_t)_3382) > ((int8_t)((uint8_t)-65)))) {
    _3388__PHI_TEMPORARY = _3378;   /* for PHI node */
    goto _3628;
  } else {
    goto _3632;
  }

_3632:
  _3383 = llvm_select_u32((((int64_t)_3379) < ((int64_t)_3380)), (((uint32_t)(uint8_t)_3382)), 0);
  _3384 = *(uint64_t*)_3368;
  *(uint64_t*)_3368 = (llvm_add_u64(_3384, 1));
  _3385 = llvm_neg_u64(_3377);
  _3386 = _3378 | (llvm_select_u32((((int64_t)_3377) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3385) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3383, (((uint32_t)_3385)))))), (llvm_select_u32((((uint64_t)_3377) > ((uint64_t)UINT64_C(31))), 0, (_3383 << (((uint32_t)_3377)))))));
  _3387 = llvm_add_u64(_3377, -8);
  _3377__PHI_TEMPORARY = _3387;   /* for PHI node */
  _3378__PHI_TEMPORARY = _3386;   /* for PHI node */
  goto _3629;

  } while (1); /* end of syntactic loop '' */
_3628:
  _3388 = _3388__PHI_TEMPORARY;
  _3389 = *(uint64_t*)_3257;
  _3390 = *(uint64_t*)_3259;
  _3391 = jsyn_cbe_fshl_i64(_3390, _3389, 32);
  _3392 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3388)), _3390, 32);
  *(uint64_t*)_3257 = _3391;
  *(uint64_t*)_3259 = _3392;
  _3393 = ((&((uint8_t*)_3246)[((int64_t)56)]));
  _3394 = *(uint64_t*)_3393;
  _3395 = ((&((uint8_t*)_3246)[((int64_t)64)]));
  _3396 = *(uint64_t*)_3395;
  _3397 = ((&((uint8_t*)_3246)[((int64_t)72)]));
  _3398 = *(uint64_t*)_3397;
  _3399 = *(void**)_3246;
  _3400 = *(uint64_t*)(((&((uint8_t*)_3399)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3246)[((int64_t)48)]))) = _3394;
  *(uint64_t*)_3393 = _3396;
  *(uint64_t*)_3395 = _3398;
  *(uint64_t*)_3397 = _3400;
  julia_emit_20((&_3250), _3245, _3246, 236, 1);
  _3329__PHI_TEMPORARY = (&_3250);   /* for PHI node */
  goto _3616;

_3626:
  _3401 = *(uint64_t*)_3257;
  if (((_3401 & INT64_C(-4294967296)) == UINT64_C(8935141660703064064))) {
    goto _3633;
  } else {
    goto _3634;
  }

_3633:
  _3402 = *(void**)_3246;
  _3403 = ((&((uint8_t*)_3402)[((int64_t)16)]));
  _3404 = *(uint64_t*)_3403;
  _3405 = ((&((uint8_t*)_3402)[((int64_t)8)]));
  _3406 = *(uint64_t*)_3405;
  if ((((int64_t)_3406) > ((int64_t)_3404))) {
    goto _3635;
  } else {
    _3423__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3636;
  }

_3635:
  _3407 = *(void**)_3402;
  _3408 = *(uint8_t*)(((&((uint8_t*)_3407)[((int64_t)_3404)])));
  *(uint64_t*)_3403 = (llvm_add_u64(_3404, 1));
  _3409 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3408)), 0);
  _3410 = llvm_sub_u8(32, (llvm_shl_u8(_3409, 3)));
  _3411 = (((uint32_t)(uint8_t)_3408)) << 24;
  if ((((uint8_t)_3410) > ((uint8_t)((uint8_t)16)))) {
    _3423__PHI_TEMPORARY = _3411;   /* for PHI node */
    goto _3636;
  } else {
    _3412__PHI_TEMPORARY = 16;   /* for PHI node */
    _3413__PHI_TEMPORARY = _3411;   /* for PHI node */
    goto _3637;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3637:
  _3412 = _3412__PHI_TEMPORARY;
  _3413 = _3413__PHI_TEMPORARY;
  if (((((int64_t)_3412) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3412) < ((uint64_t)(((uint64_t)(uint8_t)_3410)))))) {
    _3423__PHI_TEMPORARY = _3413;   /* for PHI node */
    goto _3636;
  } else {
    goto _3638;
  }

_3638:
  _3414 = *(uint64_t*)_3403;
  _3415 = *(uint64_t*)_3405;
  if ((((int64_t)_3415) > ((int64_t)_3414))) {
    goto _3639;
  } else {
    _3423__PHI_TEMPORARY = _3413;   /* for PHI node */
    goto _3636;
  }

_3639:
  _3416 = *(void**)_3402;
  _3417 = *(uint8_t*)(((&((uint8_t*)_3416)[((int64_t)_3414)])));
  if ((((int8_t)_3417) > ((int8_t)((uint8_t)-65)))) {
    _3423__PHI_TEMPORARY = _3413;   /* for PHI node */
    goto _3636;
  } else {
    goto _3640;
  }

_3640:
  _3418 = llvm_select_u32((((int64_t)_3414) < ((int64_t)_3415)), (((uint32_t)(uint8_t)_3417)), 0);
  _3419 = *(uint64_t*)_3403;
  *(uint64_t*)_3403 = (llvm_add_u64(_3419, 1));
  _3420 = llvm_neg_u64(_3412);
  _3421 = _3413 | (llvm_select_u32((((int64_t)_3412) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3420) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3418, (((uint32_t)_3420)))))), (llvm_select_u32((((uint64_t)_3412) > ((uint64_t)UINT64_C(31))), 0, (_3418 << (((uint32_t)_3412)))))));
  _3422 = llvm_add_u64(_3412, -8);
  _3412__PHI_TEMPORARY = _3422;   /* for PHI node */
  _3413__PHI_TEMPORARY = _3421;   /* for PHI node */
  goto _3637;

  } while (1); /* end of syntactic loop '' */
_3636:
  _3423 = _3423__PHI_TEMPORARY;
  _3424 = *(uint64_t*)_3257;
  _3425 = *(uint64_t*)_3259;
  _3426 = jsyn_cbe_fshl_i64(_3425, _3424, 32);
  _3427 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3423)), _3425, 32);
  *(uint64_t*)_3257 = _3426;
  *(uint64_t*)_3259 = _3427;
  _3428 = ((&((uint8_t*)_3246)[((int64_t)56)]));
  _3429 = *(uint64_t*)_3428;
  _3430 = ((&((uint8_t*)_3246)[((int64_t)64)]));
  _3431 = *(uint64_t*)_3430;
  _3432 = ((&((uint8_t*)_3246)[((int64_t)72)]));
  _3433 = *(uint64_t*)_3432;
  _3434 = *(void**)_3246;
  _3435 = *(uint64_t*)(((&((uint8_t*)_3434)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3246)[((int64_t)48)]))) = _3429;
  *(uint64_t*)_3428 = _3431;
  *(uint64_t*)_3430 = _3433;
  *(uint64_t*)_3432 = _3435;
  julia_emit_20((&_3251), _3245, _3246, 524, 1);
  _3329__PHI_TEMPORARY = (&_3251);   /* for PHI node */
  goto _3616;

_3634:
  _3436 = *(uint64_t*)_3257;
  _3437 = *(uint64_t*)_3259;
  if ((llvm_select_bool(((_3436 & INT64_C(-4294967296)) != UINT64_C(3242591731706757120)), 1, ((_3437 & INT64_C(4294967295)) != UINT64_C(754974720))))) {
    goto _3641;
  } else {
    goto _3642;
  }

_3642:
  _3438 = *(void**)_3246;
  _3439 = ((&((uint8_t*)_3438)[((int64_t)16)]));
  _3440 = *(uint64_t*)_3439;
  _3441 = ((&((uint8_t*)_3438)[((int64_t)8)]));
  _3442 = *(uint64_t*)_3441;
  if ((((int64_t)_3442) > ((int64_t)_3440))) {
    goto _3643;
  } else {
    _3459__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3644;
  }

_3643:
  _3443 = *(void**)_3438;
  _3444 = *(uint8_t*)(((&((uint8_t*)_3443)[((int64_t)_3440)])));
  *(uint64_t*)_3439 = (llvm_add_u64(_3440, 1));
  _3445 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3444)), 0);
  _3446 = llvm_sub_u8(32, (llvm_shl_u8(_3445, 3)));
  _3447 = (((uint32_t)(uint8_t)_3444)) << 24;
  if ((((uint8_t)_3446) > ((uint8_t)((uint8_t)16)))) {
    _3459__PHI_TEMPORARY = _3447;   /* for PHI node */
    goto _3644;
  } else {
    _3448__PHI_TEMPORARY = 16;   /* for PHI node */
    _3449__PHI_TEMPORARY = _3447;   /* for PHI node */
    goto _3645;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3645:
  _3448 = _3448__PHI_TEMPORARY;
  _3449 = _3449__PHI_TEMPORARY;
  if (((((int64_t)_3448) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3448) < ((uint64_t)(((uint64_t)(uint8_t)_3446)))))) {
    _3459__PHI_TEMPORARY = _3449;   /* for PHI node */
    goto _3644;
  } else {
    goto _3646;
  }

_3646:
  _3450 = *(uint64_t*)_3439;
  _3451 = *(uint64_t*)_3441;
  if ((((int64_t)_3451) > ((int64_t)_3450))) {
    goto _3647;
  } else {
    _3459__PHI_TEMPORARY = _3449;   /* for PHI node */
    goto _3644;
  }

_3647:
  _3452 = *(void**)_3438;
  _3453 = *(uint8_t*)(((&((uint8_t*)_3452)[((int64_t)_3450)])));
  if ((((int8_t)_3453) > ((int8_t)((uint8_t)-65)))) {
    _3459__PHI_TEMPORARY = _3449;   /* for PHI node */
    goto _3644;
  } else {
    goto _3648;
  }

_3648:
  _3454 = llvm_select_u32((((int64_t)_3450) < ((int64_t)_3451)), (((uint32_t)(uint8_t)_3453)), 0);
  _3455 = *(uint64_t*)_3439;
  *(uint64_t*)_3439 = (llvm_add_u64(_3455, 1));
  _3456 = llvm_neg_u64(_3448);
  _3457 = _3449 | (llvm_select_u32((((int64_t)_3448) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3456) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3454, (((uint32_t)_3456)))))), (llvm_select_u32((((uint64_t)_3448) > ((uint64_t)UINT64_C(31))), 0, (_3454 << (((uint32_t)_3448)))))));
  _3458 = llvm_add_u64(_3448, -8);
  _3448__PHI_TEMPORARY = _3458;   /* for PHI node */
  _3449__PHI_TEMPORARY = _3457;   /* for PHI node */
  goto _3645;

  } while (1); /* end of syntactic loop '' */
_3644:
  _3459 = _3459__PHI_TEMPORARY;
  _3460 = *(uint64_t*)_3257;
  _3461 = *(uint64_t*)_3259;
  _3462 = jsyn_cbe_fshl_i64(_3461, _3460, 32);
  _3463 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3459)), _3461, 32);
  *(uint64_t*)_3257 = _3462;
  *(uint64_t*)_3259 = _3463;
  _3464 = ((&((uint8_t*)_3246)[((int64_t)48)]));
  _3465 = ((&((uint8_t*)_3246)[((int64_t)56)]));
  _3466 = *(uint64_t*)_3465;
  _3467 = ((&((uint8_t*)_3246)[((int64_t)64)]));
  _3468 = *(uint64_t*)_3467;
  _3469 = ((&((uint8_t*)_3246)[((int64_t)72)]));
  _3470 = *(uint64_t*)_3469;
  _3471 = *(void**)_3246;
  _3472 = *(uint64_t*)(((&((uint8_t*)_3471)[((int64_t)16)])));
  *(uint64_t*)_3464 = _3466;
  *(uint64_t*)_3465 = _3468;
  *(uint64_t*)_3467 = _3470;
  *(uint64_t*)_3469 = _3472;
  _3473 = *(void**)_3246;
  _3474 = ((&((uint8_t*)_3473)[((int64_t)16)]));
  _3475 = *(uint64_t*)_3474;
  _3476 = ((&((uint8_t*)_3473)[((int64_t)8)]));
  _3477 = *(uint64_t*)_3476;
  if ((((int64_t)_3477) > ((int64_t)_3475))) {
    goto _3649;
  } else {
    _3494__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3650;
  }

_3649:
  _3478 = *(void**)_3473;
  _3479 = *(uint8_t*)(((&((uint8_t*)_3478)[((int64_t)_3475)])));
  *(uint64_t*)_3474 = (llvm_add_u64(_3475, 1));
  _3480 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3479)), 0);
  _3481 = llvm_sub_u8(32, (llvm_shl_u8(_3480, 3)));
  _3482 = (((uint32_t)(uint8_t)_3479)) << 24;
  if ((((uint8_t)_3481) > ((uint8_t)((uint8_t)16)))) {
    _3494__PHI_TEMPORARY = _3482;   /* for PHI node */
    goto _3650;
  } else {
    _3483__PHI_TEMPORARY = 16;   /* for PHI node */
    _3484__PHI_TEMPORARY = _3482;   /* for PHI node */
    goto _3651;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3651:
  _3483 = _3483__PHI_TEMPORARY;
  _3484 = _3484__PHI_TEMPORARY;
  if (((((int64_t)_3483) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3483) < ((uint64_t)(((uint64_t)(uint8_t)_3481)))))) {
    _3494__PHI_TEMPORARY = _3484;   /* for PHI node */
    goto _3650;
  } else {
    goto _3652;
  }

_3652:
  _3485 = *(uint64_t*)_3474;
  _3486 = *(uint64_t*)_3476;
  if ((((int64_t)_3486) > ((int64_t)_3485))) {
    goto _3653;
  } else {
    _3494__PHI_TEMPORARY = _3484;   /* for PHI node */
    goto _3650;
  }

_3653:
  _3487 = *(void**)_3473;
  _3488 = *(uint8_t*)(((&((uint8_t*)_3487)[((int64_t)_3485)])));
  if ((((int8_t)_3488) > ((int8_t)((uint8_t)-65)))) {
    _3494__PHI_TEMPORARY = _3484;   /* for PHI node */
    goto _3650;
  } else {
    goto _3654;
  }

_3654:
  _3489 = llvm_select_u32((((int64_t)_3485) < ((int64_t)_3486)), (((uint32_t)(uint8_t)_3488)), 0);
  _3490 = *(uint64_t*)_3474;
  *(uint64_t*)_3474 = (llvm_add_u64(_3490, 1));
  _3491 = llvm_neg_u64(_3483);
  _3492 = _3484 | (llvm_select_u32((((int64_t)_3483) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3491) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3489, (((uint32_t)_3491)))))), (llvm_select_u32((((uint64_t)_3483) > ((uint64_t)UINT64_C(31))), 0, (_3489 << (((uint32_t)_3483)))))));
  _3493 = llvm_add_u64(_3483, -8);
  _3483__PHI_TEMPORARY = _3493;   /* for PHI node */
  _3484__PHI_TEMPORARY = _3492;   /* for PHI node */
  goto _3651;

  } while (1); /* end of syntactic loop '' */
_3650:
  _3494 = _3494__PHI_TEMPORARY;
  _3495 = *(uint64_t*)_3257;
  _3496 = *(uint64_t*)_3259;
  _3497 = jsyn_cbe_fshl_i64(_3496, _3495, 32);
  _3498 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3494)), _3496, 32);
  *(uint64_t*)_3257 = _3497;
  *(uint64_t*)_3259 = _3498;
  _3499 = *(uint64_t*)_3465;
  _3500 = *(uint64_t*)_3467;
  _3501 = *(uint64_t*)_3469;
  _3502 = *(void**)_3246;
  _3503 = *(uint64_t*)(((&((uint8_t*)_3502)[((int64_t)16)])));
  *(uint64_t*)_3464 = _3499;
  *(uint64_t*)_3465 = _3500;
  *(uint64_t*)_3467 = _3501;
  *(uint64_t*)_3469 = _3503;
  _3504 = *(uint64_t*)_3257;
  if (((_3504 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _3655;
  } else {
    goto _3656;
  }

_3655:
  _3505 = *(void**)_3246;
  _3506 = ((&((uint8_t*)_3505)[((int64_t)16)]));
  _3507 = *(uint64_t*)_3506;
  _3508 = ((&((uint8_t*)_3505)[((int64_t)8)]));
  _3509 = *(uint64_t*)_3508;
  if ((((int64_t)_3509) > ((int64_t)_3507))) {
    goto _3657;
  } else {
    _3526__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3658;
  }

_3657:
  _3510 = *(void**)_3505;
  _3511 = *(uint8_t*)(((&((uint8_t*)_3510)[((int64_t)_3507)])));
  *(uint64_t*)_3506 = (llvm_add_u64(_3507, 1));
  _3512 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3511)), 0);
  _3513 = llvm_sub_u8(32, (llvm_shl_u8(_3512, 3)));
  _3514 = (((uint32_t)(uint8_t)_3511)) << 24;
  if ((((uint8_t)_3513) > ((uint8_t)((uint8_t)16)))) {
    _3526__PHI_TEMPORARY = _3514;   /* for PHI node */
    goto _3658;
  } else {
    _3515__PHI_TEMPORARY = 16;   /* for PHI node */
    _3516__PHI_TEMPORARY = _3514;   /* for PHI node */
    goto _3659;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3659:
  _3515 = _3515__PHI_TEMPORARY;
  _3516 = _3516__PHI_TEMPORARY;
  if (((((int64_t)_3515) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3515) < ((uint64_t)(((uint64_t)(uint8_t)_3513)))))) {
    _3526__PHI_TEMPORARY = _3516;   /* for PHI node */
    goto _3658;
  } else {
    goto _3660;
  }

_3660:
  _3517 = *(uint64_t*)_3506;
  _3518 = *(uint64_t*)_3508;
  if ((((int64_t)_3518) > ((int64_t)_3517))) {
    goto _3661;
  } else {
    _3526__PHI_TEMPORARY = _3516;   /* for PHI node */
    goto _3658;
  }

_3661:
  _3519 = *(void**)_3505;
  _3520 = *(uint8_t*)(((&((uint8_t*)_3519)[((int64_t)_3517)])));
  if ((((int8_t)_3520) > ((int8_t)((uint8_t)-65)))) {
    _3526__PHI_TEMPORARY = _3516;   /* for PHI node */
    goto _3658;
  } else {
    goto _3662;
  }

_3662:
  _3521 = llvm_select_u32((((int64_t)_3517) < ((int64_t)_3518)), (((uint32_t)(uint8_t)_3520)), 0);
  _3522 = *(uint64_t*)_3506;
  *(uint64_t*)_3506 = (llvm_add_u64(_3522, 1));
  _3523 = llvm_neg_u64(_3515);
  _3524 = _3516 | (llvm_select_u32((((int64_t)_3515) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3523) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3521, (((uint32_t)_3523)))))), (llvm_select_u32((((uint64_t)_3515) > ((uint64_t)UINT64_C(31))), 0, (_3521 << (((uint32_t)_3515)))))));
  _3525 = llvm_add_u64(_3515, -8);
  _3515__PHI_TEMPORARY = _3525;   /* for PHI node */
  _3516__PHI_TEMPORARY = _3524;   /* for PHI node */
  goto _3659;

  } while (1); /* end of syntactic loop '' */
_3658:
  _3526 = _3526__PHI_TEMPORARY;
  _3527 = *(uint64_t*)_3257;
  _3528 = *(uint64_t*)_3259;
  _3529 = jsyn_cbe_fshl_i64(_3528, _3527, 32);
  _3530 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3526)), _3528, 32);
  *(uint64_t*)_3257 = _3529;
  *(uint64_t*)_3259 = _3530;
  _3531 = *(uint64_t*)_3465;
  _3532 = *(uint64_t*)_3467;
  _3533 = *(uint64_t*)_3469;
  _3534 = *(void**)_3246;
  _3535 = *(uint64_t*)(((&((uint8_t*)_3534)[((int64_t)16)])));
  *(uint64_t*)_3464 = _3531;
  *(uint64_t*)_3465 = _3532;
  *(uint64_t*)_3467 = _3533;
  *(uint64_t*)_3469 = _3535;
  julia_emit_20((&_3252), _3245, _3246, 66, 1);
  _3329__PHI_TEMPORARY = (&_3252);   /* for PHI node */
  goto _3616;

_3656:
  _3536 = *(uint64_t*)_3257;
  if (((_3536 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _3663;
  } else {
    goto _3664;
  }

_3663:
  _3537 = *(void**)_3246;
  _3538 = ((&((uint8_t*)_3537)[((int64_t)16)]));
  _3539 = *(uint64_t*)_3538;
  _3540 = ((&((uint8_t*)_3537)[((int64_t)8)]));
  _3541 = *(uint64_t*)_3540;
  if ((((int64_t)_3541) > ((int64_t)_3539))) {
    goto _3665;
  } else {
    _3558__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3666;
  }

_3665:
  _3542 = *(void**)_3537;
  _3543 = *(uint8_t*)(((&((uint8_t*)_3542)[((int64_t)_3539)])));
  *(uint64_t*)_3538 = (llvm_add_u64(_3539, 1));
  _3544 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3543)), 0);
  _3545 = llvm_sub_u8(32, (llvm_shl_u8(_3544, 3)));
  _3546 = (((uint32_t)(uint8_t)_3543)) << 24;
  if ((((uint8_t)_3545) > ((uint8_t)((uint8_t)16)))) {
    _3558__PHI_TEMPORARY = _3546;   /* for PHI node */
    goto _3666;
  } else {
    _3547__PHI_TEMPORARY = 16;   /* for PHI node */
    _3548__PHI_TEMPORARY = _3546;   /* for PHI node */
    goto _3667;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3667:
  _3547 = _3547__PHI_TEMPORARY;
  _3548 = _3548__PHI_TEMPORARY;
  if (((((int64_t)_3547) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3547) < ((uint64_t)(((uint64_t)(uint8_t)_3545)))))) {
    _3558__PHI_TEMPORARY = _3548;   /* for PHI node */
    goto _3666;
  } else {
    goto _3668;
  }

_3668:
  _3549 = *(uint64_t*)_3538;
  _3550 = *(uint64_t*)_3540;
  if ((((int64_t)_3550) > ((int64_t)_3549))) {
    goto _3669;
  } else {
    _3558__PHI_TEMPORARY = _3548;   /* for PHI node */
    goto _3666;
  }

_3669:
  _3551 = *(void**)_3537;
  _3552 = *(uint8_t*)(((&((uint8_t*)_3551)[((int64_t)_3549)])));
  if ((((int8_t)_3552) > ((int8_t)((uint8_t)-65)))) {
    _3558__PHI_TEMPORARY = _3548;   /* for PHI node */
    goto _3666;
  } else {
    goto _3670;
  }

_3670:
  _3553 = llvm_select_u32((((int64_t)_3549) < ((int64_t)_3550)), (((uint32_t)(uint8_t)_3552)), 0);
  _3554 = *(uint64_t*)_3538;
  *(uint64_t*)_3538 = (llvm_add_u64(_3554, 1));
  _3555 = llvm_neg_u64(_3547);
  _3556 = _3548 | (llvm_select_u32((((int64_t)_3547) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3555) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3553, (((uint32_t)_3555)))))), (llvm_select_u32((((uint64_t)_3547) > ((uint64_t)UINT64_C(31))), 0, (_3553 << (((uint32_t)_3547)))))));
  _3557 = llvm_add_u64(_3547, -8);
  _3547__PHI_TEMPORARY = _3557;   /* for PHI node */
  _3548__PHI_TEMPORARY = _3556;   /* for PHI node */
  goto _3667;

  } while (1); /* end of syntactic loop '' */
_3666:
  _3558 = _3558__PHI_TEMPORARY;
  _3559 = *(uint64_t*)_3257;
  _3560 = *(uint64_t*)_3259;
  _3561 = jsyn_cbe_fshl_i64(_3560, _3559, 32);
  _3562 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3558)), _3560, 32);
  *(uint64_t*)_3257 = _3561;
  *(uint64_t*)_3259 = _3562;
  _3563 = *(uint64_t*)_3465;
  _3564 = *(uint64_t*)_3467;
  _3565 = *(uint64_t*)_3469;
  _3566 = *(void**)_3246;
  _3567 = *(uint64_t*)(((&((uint8_t*)_3566)[((int64_t)16)])));
  *(uint64_t*)_3464 = _3563;
  *(uint64_t*)_3465 = _3564;
  *(uint64_t*)_3467 = _3565;
  *(uint64_t*)_3469 = _3567;
  julia_emit_20((&_3253), _3245, _3246, 82, 1);
  _3329__PHI_TEMPORARY = (&_3253);   /* for PHI node */
  goto _3616;

_3664:
  _3568 = *(uint64_t*)_3257;
  if (((_3568 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _3671;
  } else {
    goto _3672;
  }

_3671:
  _3569 = *(void**)_3246;
  _3570 = ((&((uint8_t*)_3569)[((int64_t)16)]));
  _3571 = *(uint64_t*)_3570;
  _3572 = ((&((uint8_t*)_3569)[((int64_t)8)]));
  _3573 = *(uint64_t*)_3572;
  if ((((int64_t)_3573) > ((int64_t)_3571))) {
    goto _3673;
  } else {
    _3590__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3674;
  }

_3673:
  _3574 = *(void**)_3569;
  _3575 = *(uint8_t*)(((&((uint8_t*)_3574)[((int64_t)_3571)])));
  *(uint64_t*)_3570 = (llvm_add_u64(_3571, 1));
  _3576 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3575)), 0);
  _3577 = llvm_sub_u8(32, (llvm_shl_u8(_3576, 3)));
  _3578 = (((uint32_t)(uint8_t)_3575)) << 24;
  if ((((uint8_t)_3577) > ((uint8_t)((uint8_t)16)))) {
    _3590__PHI_TEMPORARY = _3578;   /* for PHI node */
    goto _3674;
  } else {
    _3579__PHI_TEMPORARY = 16;   /* for PHI node */
    _3580__PHI_TEMPORARY = _3578;   /* for PHI node */
    goto _3675;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3675:
  _3579 = _3579__PHI_TEMPORARY;
  _3580 = _3580__PHI_TEMPORARY;
  if (((((int64_t)_3579) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3579) < ((uint64_t)(((uint64_t)(uint8_t)_3577)))))) {
    _3590__PHI_TEMPORARY = _3580;   /* for PHI node */
    goto _3674;
  } else {
    goto _3676;
  }

_3676:
  _3581 = *(uint64_t*)_3570;
  _3582 = *(uint64_t*)_3572;
  if ((((int64_t)_3582) > ((int64_t)_3581))) {
    goto _3677;
  } else {
    _3590__PHI_TEMPORARY = _3580;   /* for PHI node */
    goto _3674;
  }

_3677:
  _3583 = *(void**)_3569;
  _3584 = *(uint8_t*)(((&((uint8_t*)_3583)[((int64_t)_3581)])));
  if ((((int8_t)_3584) > ((int8_t)((uint8_t)-65)))) {
    _3590__PHI_TEMPORARY = _3580;   /* for PHI node */
    goto _3674;
  } else {
    goto _3678;
  }

_3678:
  _3585 = llvm_select_u32((((int64_t)_3581) < ((int64_t)_3582)), (((uint32_t)(uint8_t)_3584)), 0);
  _3586 = *(uint64_t*)_3570;
  *(uint64_t*)_3570 = (llvm_add_u64(_3586, 1));
  _3587 = llvm_neg_u64(_3579);
  _3588 = _3580 | (llvm_select_u32((((int64_t)_3579) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3587) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3585, (((uint32_t)_3587)))))), (llvm_select_u32((((uint64_t)_3579) > ((uint64_t)UINT64_C(31))), 0, (_3585 << (((uint32_t)_3579)))))));
  _3589 = llvm_add_u64(_3579, -8);
  _3579__PHI_TEMPORARY = _3589;   /* for PHI node */
  _3580__PHI_TEMPORARY = _3588;   /* for PHI node */
  goto _3675;

  } while (1); /* end of syntactic loop '' */
_3674:
  _3590 = _3590__PHI_TEMPORARY;
  _3591 = *(uint64_t*)_3257;
  _3592 = *(uint64_t*)_3259;
  _3593 = jsyn_cbe_fshl_i64(_3592, _3591, 32);
  _3594 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3590)), _3592, 32);
  *(uint64_t*)_3257 = _3593;
  *(uint64_t*)_3259 = _3594;
  _3595 = *(uint64_t*)_3465;
  _3596 = *(uint64_t*)_3467;
  _3597 = *(uint64_t*)_3469;
  _3598 = *(void**)_3246;
  _3599 = *(uint64_t*)(((&((uint8_t*)_3598)[((int64_t)16)])));
  *(uint64_t*)_3464 = _3595;
  *(uint64_t*)_3465 = _3596;
  *(uint64_t*)_3467 = _3597;
  *(uint64_t*)_3469 = _3599;
  julia_emit_20((&_3254), _3245, _3246, 66, 1);
  _3329__PHI_TEMPORARY = (&_3254);   /* for PHI node */
  goto _3616;

_3672:
  julia_emit_20((&_3255), _3245, _3246, 81, 1);
  _3329__PHI_TEMPORARY = (&_3255);   /* for PHI node */
  goto _3616;

_3641:
  julia_emit_20((&_3256), _3245, _3246, 239, 1);
  _3329__PHI_TEMPORARY = (&_3256);   /* for PHI node */
  goto _3616;

}


static void julia_lex_colon_37(void* _3679, void* _3680, void* _3681) {
  struct l_array_4_uint64_t _3682;    /* Address-exposed local */
  struct l_array_4_uint64_t _3683;    /* Address-exposed local */
  struct l_array_4_uint64_t _3684;    /* Address-exposed local */
  void* _3685;
  uint64_t _3686;
  void* _3687;
  void* _3688;
  void* _3689;
  uint64_t _3690;
  void* _3691;
  uint64_t _3692;
  void* _3693;
  uint8_t _3694;
  uint8_t _3695;
  uint8_t _3696;
  uint32_t _3697;
  uint64_t _3698;
  uint64_t _3698__PHI_TEMPORARY;
  uint32_t _3699;
  uint32_t _3699__PHI_TEMPORARY;
  uint64_t _3700;
  uint64_t _3701;
  void* _3702;
  uint8_t _3703;
  uint32_t _3704;
  uint64_t _3705;
  uint64_t _3706;
  uint32_t _3707;
  uint64_t _3708;
  uint32_t _3709;
  uint32_t _3709__PHI_TEMPORARY;
  uint64_t _3710;
  uint64_t _3711;
  uint64_t _3712;
  uint64_t _3713;
  void* _3714;
  uint64_t _3715;
  void* _3716;
  uint64_t _3717;
  void* _3718;
  uint64_t _3719;
  void* _3720;
  uint64_t _3721;
  void* _3722;
  void* _3722__PHI_TEMPORARY;
  void* _3723;
  uint64_t _3724;
  void* _3725;
  void* _3726;
  uint64_t _3727;
  void* _3728;
  uint64_t _3729;
  void* _3730;
  uint8_t _3731;
  uint8_t _3732;
  uint8_t _3733;
  uint32_t _3734;
  uint64_t _3735;
  uint64_t _3735__PHI_TEMPORARY;
  uint32_t _3736;
  uint32_t _3736__PHI_TEMPORARY;
  uint64_t _3737;
  uint64_t _3738;
  void* _3739;
  uint8_t _3740;
  uint32_t _3741;
  uint64_t _3742;
  uint64_t _3743;
  uint32_t _3744;
  uint64_t _3745;
  uint32_t _3746;
  uint32_t _3746__PHI_TEMPORARY;
  uint64_t _3747;
  uint64_t _3748;
  uint64_t _3749;
  uint64_t _3750;
  void* _3751;
  uint64_t _3752;
  void* _3753;
  uint64_t _3754;
  void* _3755;
  uint64_t _3756;
  void* _3757;
  uint64_t _3758;

  _3685 = ((&((uint8_t*)_3681)[((int64_t)32)]));
  _3686 = *(uint64_t*)_3685;
  _3687 = ((&((uint8_t*)_3681)[((int64_t)40)]));
  if (((_3686 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _3759;
  } else {
    goto _3760;
  }

_3759:
  _3688 = *(void**)_3681;
  _3689 = ((&((uint8_t*)_3688)[((int64_t)16)]));
  _3690 = *(uint64_t*)_3689;
  _3691 = ((&((uint8_t*)_3688)[((int64_t)8)]));
  _3692 = *(uint64_t*)_3691;
  if ((((int64_t)_3692) > ((int64_t)_3690))) {
    goto _3761;
  } else {
    _3709__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3762;
  }

_3761:
  _3693 = *(void**)_3688;
  _3694 = *(uint8_t*)(((&((uint8_t*)_3693)[((int64_t)_3690)])));
  *(uint64_t*)_3689 = (llvm_add_u64(_3690, 1));
  _3695 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3694)), 0);
  _3696 = llvm_sub_u8(32, (llvm_shl_u8(_3695, 3)));
  _3697 = (((uint32_t)(uint8_t)_3694)) << 24;
  if ((((uint8_t)_3696) > ((uint8_t)((uint8_t)16)))) {
    _3709__PHI_TEMPORARY = _3697;   /* for PHI node */
    goto _3762;
  } else {
    _3698__PHI_TEMPORARY = 16;   /* for PHI node */
    _3699__PHI_TEMPORARY = _3697;   /* for PHI node */
    goto _3763;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3763:
  _3698 = _3698__PHI_TEMPORARY;
  _3699 = _3699__PHI_TEMPORARY;
  if (((((int64_t)_3698) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3698) < ((uint64_t)(((uint64_t)(uint8_t)_3696)))))) {
    _3709__PHI_TEMPORARY = _3699;   /* for PHI node */
    goto _3762;
  } else {
    goto _3764;
  }

_3764:
  _3700 = *(uint64_t*)_3689;
  _3701 = *(uint64_t*)_3691;
  if ((((int64_t)_3701) > ((int64_t)_3700))) {
    goto _3765;
  } else {
    _3709__PHI_TEMPORARY = _3699;   /* for PHI node */
    goto _3762;
  }

_3765:
  _3702 = *(void**)_3688;
  _3703 = *(uint8_t*)(((&((uint8_t*)_3702)[((int64_t)_3700)])));
  if ((((int8_t)_3703) > ((int8_t)((uint8_t)-65)))) {
    _3709__PHI_TEMPORARY = _3699;   /* for PHI node */
    goto _3762;
  } else {
    goto _3766;
  }

_3766:
  _3704 = llvm_select_u32((((int64_t)_3700) < ((int64_t)_3701)), (((uint32_t)(uint8_t)_3703)), 0);
  _3705 = *(uint64_t*)_3689;
  *(uint64_t*)_3689 = (llvm_add_u64(_3705, 1));
  _3706 = llvm_neg_u64(_3698);
  _3707 = _3699 | (llvm_select_u32((((int64_t)_3698) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3706) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3704, (((uint32_t)_3706)))))), (llvm_select_u32((((uint64_t)_3698) > ((uint64_t)UINT64_C(31))), 0, (_3704 << (((uint32_t)_3698)))))));
  _3708 = llvm_add_u64(_3698, -8);
  _3698__PHI_TEMPORARY = _3708;   /* for PHI node */
  _3699__PHI_TEMPORARY = _3707;   /* for PHI node */
  goto _3763;

  } while (1); /* end of syntactic loop '' */
_3762:
  _3709 = _3709__PHI_TEMPORARY;
  _3710 = *(uint64_t*)_3685;
  _3711 = *(uint64_t*)_3687;
  _3712 = jsyn_cbe_fshl_i64(_3711, _3710, 32);
  _3713 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3709)), _3711, 32);
  *(uint64_t*)_3685 = _3712;
  *(uint64_t*)_3687 = _3713;
  _3714 = ((&((uint8_t*)_3681)[((int64_t)56)]));
  _3715 = *(uint64_t*)_3714;
  _3716 = ((&((uint8_t*)_3681)[((int64_t)64)]));
  _3717 = *(uint64_t*)_3716;
  _3718 = ((&((uint8_t*)_3681)[((int64_t)72)]));
  _3719 = *(uint64_t*)_3718;
  _3720 = *(void**)_3681;
  _3721 = *(uint64_t*)(((&((uint8_t*)_3720)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3681)[((int64_t)48)]))) = _3715;
  *(uint64_t*)_3714 = _3717;
  *(uint64_t*)_3716 = _3719;
  *(uint64_t*)_3718 = _3721;
  julia_emit_20((&_3682), _3680, _3681, 705, 1);
  _3722__PHI_TEMPORARY = (&_3682);   /* for PHI node */
  goto _3767;

_3767:
  _3722 = _3722__PHI_TEMPORARY;
  _3723 = memcpy(_3679, _3722, 32);
  return;
_3760:
  _3724 = *(uint64_t*)_3685;
  if (((_3724 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3768;
  } else {
    goto _3769;
  }

_3768:
  _3725 = *(void**)_3681;
  _3726 = ((&((uint8_t*)_3725)[((int64_t)16)]));
  _3727 = *(uint64_t*)_3726;
  _3728 = ((&((uint8_t*)_3725)[((int64_t)8)]));
  _3729 = *(uint64_t*)_3728;
  if ((((int64_t)_3729) > ((int64_t)_3727))) {
    goto _3770;
  } else {
    _3746__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3771;
  }

_3770:
  _3730 = *(void**)_3725;
  _3731 = *(uint8_t*)(((&((uint8_t*)_3730)[((int64_t)_3727)])));
  *(uint64_t*)_3726 = (llvm_add_u64(_3727, 1));
  _3732 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3731)), 0);
  _3733 = llvm_sub_u8(32, (llvm_shl_u8(_3732, 3)));
  _3734 = (((uint32_t)(uint8_t)_3731)) << 24;
  if ((((uint8_t)_3733) > ((uint8_t)((uint8_t)16)))) {
    _3746__PHI_TEMPORARY = _3734;   /* for PHI node */
    goto _3771;
  } else {
    _3735__PHI_TEMPORARY = 16;   /* for PHI node */
    _3736__PHI_TEMPORARY = _3734;   /* for PHI node */
    goto _3772;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3772:
  _3735 = _3735__PHI_TEMPORARY;
  _3736 = _3736__PHI_TEMPORARY;
  if (((((int64_t)_3735) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3735) < ((uint64_t)(((uint64_t)(uint8_t)_3733)))))) {
    _3746__PHI_TEMPORARY = _3736;   /* for PHI node */
    goto _3771;
  } else {
    goto _3773;
  }

_3773:
  _3737 = *(uint64_t*)_3726;
  _3738 = *(uint64_t*)_3728;
  if ((((int64_t)_3738) > ((int64_t)_3737))) {
    goto _3774;
  } else {
    _3746__PHI_TEMPORARY = _3736;   /* for PHI node */
    goto _3771;
  }

_3774:
  _3739 = *(void**)_3725;
  _3740 = *(uint8_t*)(((&((uint8_t*)_3739)[((int64_t)_3737)])));
  if ((((int8_t)_3740) > ((int8_t)((uint8_t)-65)))) {
    _3746__PHI_TEMPORARY = _3736;   /* for PHI node */
    goto _3771;
  } else {
    goto _3775;
  }

_3775:
  _3741 = llvm_select_u32((((int64_t)_3737) < ((int64_t)_3738)), (((uint32_t)(uint8_t)_3740)), 0);
  _3742 = *(uint64_t*)_3726;
  *(uint64_t*)_3726 = (llvm_add_u64(_3742, 1));
  _3743 = llvm_neg_u64(_3735);
  _3744 = _3736 | (llvm_select_u32((((int64_t)_3735) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3743) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3741, (((uint32_t)_3743)))))), (llvm_select_u32((((uint64_t)_3735) > ((uint64_t)UINT64_C(31))), 0, (_3741 << (((uint32_t)_3735)))))));
  _3745 = llvm_add_u64(_3735, -8);
  _3735__PHI_TEMPORARY = _3745;   /* for PHI node */
  _3736__PHI_TEMPORARY = _3744;   /* for PHI node */
  goto _3772;

  } while (1); /* end of syntactic loop '' */
_3771:
  _3746 = _3746__PHI_TEMPORARY;
  _3747 = *(uint64_t*)_3685;
  _3748 = *(uint64_t*)_3687;
  _3749 = jsyn_cbe_fshl_i64(_3748, _3747, 32);
  _3750 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3746)), _3748, 32);
  *(uint64_t*)_3685 = _3749;
  *(uint64_t*)_3687 = _3750;
  _3751 = ((&((uint8_t*)_3681)[((int64_t)56)]));
  _3752 = *(uint64_t*)_3751;
  _3753 = ((&((uint8_t*)_3681)[((int64_t)64)]));
  _3754 = *(uint64_t*)_3753;
  _3755 = ((&((uint8_t*)_3681)[((int64_t)72)]));
  _3756 = *(uint64_t*)_3755;
  _3757 = *(void**)_3681;
  _3758 = *(uint64_t*)(((&((uint8_t*)_3757)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3681)[((int64_t)48)]))) = _3752;
  *(uint64_t*)_3751 = _3754;
  *(uint64_t*)_3753 = _3756;
  *(uint64_t*)_3755 = _3758;
  julia_emit_20((&_3683), _3680, _3681, 73, 1);
  _3722__PHI_TEMPORARY = (&_3683);   /* for PHI node */
  goto _3767;

_3769:
  julia_emit_20((&_3684), _3680, _3681, 526, 1);
  _3722__PHI_TEMPORARY = (&_3684);   /* for PHI node */
  goto _3767;

}


static void julia_lex_bar_38(void* _3776, void* _3777, void* _3778) {
  struct l_array_4_uint64_t _3779;    /* Address-exposed local */
  struct l_array_4_uint64_t _3780;    /* Address-exposed local */
  struct l_array_4_uint64_t _3781;    /* Address-exposed local */
  struct l_array_4_uint64_t _3782;    /* Address-exposed local */
  void* _3783;
  uint64_t _3784;
  void* _3785;
  void* _3786;
  void* _3787;
  uint64_t _3788;
  void* _3789;
  uint64_t _3790;
  void* _3791;
  uint8_t _3792;
  uint8_t _3793;
  uint8_t _3794;
  uint32_t _3795;
  uint64_t _3796;
  uint64_t _3796__PHI_TEMPORARY;
  uint32_t _3797;
  uint32_t _3797__PHI_TEMPORARY;
  uint64_t _3798;
  uint64_t _3799;
  void* _3800;
  uint8_t _3801;
  uint32_t _3802;
  uint64_t _3803;
  uint64_t _3804;
  uint32_t _3805;
  uint64_t _3806;
  uint32_t _3807;
  uint32_t _3807__PHI_TEMPORARY;
  uint64_t _3808;
  uint64_t _3809;
  uint64_t _3810;
  uint64_t _3811;
  void* _3812;
  uint64_t _3813;
  void* _3814;
  uint64_t _3815;
  void* _3816;
  uint64_t _3817;
  void* _3818;
  uint64_t _3819;
  void* _3820;
  void* _3820__PHI_TEMPORARY;
  void* _3821;
  uint64_t _3822;
  void* _3823;
  void* _3824;
  uint64_t _3825;
  void* _3826;
  uint64_t _3827;
  void* _3828;
  uint8_t _3829;
  uint8_t _3830;
  uint8_t _3831;
  uint32_t _3832;
  uint64_t _3833;
  uint64_t _3833__PHI_TEMPORARY;
  uint32_t _3834;
  uint32_t _3834__PHI_TEMPORARY;
  uint64_t _3835;
  uint64_t _3836;
  void* _3837;
  uint8_t _3838;
  uint32_t _3839;
  uint64_t _3840;
  uint64_t _3841;
  uint32_t _3842;
  uint64_t _3843;
  uint32_t _3844;
  uint32_t _3844__PHI_TEMPORARY;
  uint64_t _3845;
  uint64_t _3846;
  uint64_t _3847;
  uint64_t _3848;
  void* _3849;
  uint64_t _3850;
  void* _3851;
  uint64_t _3852;
  void* _3853;
  uint64_t _3854;
  void* _3855;
  uint64_t _3856;
  uint64_t _3857;
  void* _3858;
  void* _3859;
  uint64_t _3860;
  void* _3861;
  uint64_t _3862;
  void* _3863;
  uint8_t _3864;
  uint8_t _3865;
  uint8_t _3866;
  uint32_t _3867;
  uint64_t _3868;
  uint64_t _3868__PHI_TEMPORARY;
  uint32_t _3869;
  uint32_t _3869__PHI_TEMPORARY;
  uint64_t _3870;
  uint64_t _3871;
  void* _3872;
  uint8_t _3873;
  uint32_t _3874;
  uint64_t _3875;
  uint64_t _3876;
  uint32_t _3877;
  uint64_t _3878;
  uint32_t _3879;
  uint32_t _3879__PHI_TEMPORARY;
  uint64_t _3880;
  uint64_t _3881;
  uint64_t _3882;
  uint64_t _3883;
  void* _3884;
  uint64_t _3885;
  void* _3886;
  uint64_t _3887;
  void* _3888;
  uint64_t _3889;
  void* _3890;
  uint64_t _3891;

  _3783 = ((&((uint8_t*)_3778)[((int64_t)32)]));
  _3784 = *(uint64_t*)_3783;
  _3785 = ((&((uint8_t*)_3778)[((int64_t)40)]));
  if (((_3784 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3892;
  } else {
    goto _3893;
  }

_3892:
  _3786 = *(void**)_3778;
  _3787 = ((&((uint8_t*)_3786)[((int64_t)16)]));
  _3788 = *(uint64_t*)_3787;
  _3789 = ((&((uint8_t*)_3786)[((int64_t)8)]));
  _3790 = *(uint64_t*)_3789;
  if ((((int64_t)_3790) > ((int64_t)_3788))) {
    goto _3894;
  } else {
    _3807__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3895;
  }

_3894:
  _3791 = *(void**)_3786;
  _3792 = *(uint8_t*)(((&((uint8_t*)_3791)[((int64_t)_3788)])));
  *(uint64_t*)_3787 = (llvm_add_u64(_3788, 1));
  _3793 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3792)), 0);
  _3794 = llvm_sub_u8(32, (llvm_shl_u8(_3793, 3)));
  _3795 = (((uint32_t)(uint8_t)_3792)) << 24;
  if ((((uint8_t)_3794) > ((uint8_t)((uint8_t)16)))) {
    _3807__PHI_TEMPORARY = _3795;   /* for PHI node */
    goto _3895;
  } else {
    _3796__PHI_TEMPORARY = 16;   /* for PHI node */
    _3797__PHI_TEMPORARY = _3795;   /* for PHI node */
    goto _3896;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3896:
  _3796 = _3796__PHI_TEMPORARY;
  _3797 = _3797__PHI_TEMPORARY;
  if (((((int64_t)_3796) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3796) < ((uint64_t)(((uint64_t)(uint8_t)_3794)))))) {
    _3807__PHI_TEMPORARY = _3797;   /* for PHI node */
    goto _3895;
  } else {
    goto _3897;
  }

_3897:
  _3798 = *(uint64_t*)_3787;
  _3799 = *(uint64_t*)_3789;
  if ((((int64_t)_3799) > ((int64_t)_3798))) {
    goto _3898;
  } else {
    _3807__PHI_TEMPORARY = _3797;   /* for PHI node */
    goto _3895;
  }

_3898:
  _3800 = *(void**)_3786;
  _3801 = *(uint8_t*)(((&((uint8_t*)_3800)[((int64_t)_3798)])));
  if ((((int8_t)_3801) > ((int8_t)((uint8_t)-65)))) {
    _3807__PHI_TEMPORARY = _3797;   /* for PHI node */
    goto _3895;
  } else {
    goto _3899;
  }

_3899:
  _3802 = llvm_select_u32((((int64_t)_3798) < ((int64_t)_3799)), (((uint32_t)(uint8_t)_3801)), 0);
  _3803 = *(uint64_t*)_3787;
  *(uint64_t*)_3787 = (llvm_add_u64(_3803, 1));
  _3804 = llvm_neg_u64(_3796);
  _3805 = _3797 | (llvm_select_u32((((int64_t)_3796) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3804) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3802, (((uint32_t)_3804)))))), (llvm_select_u32((((uint64_t)_3796) > ((uint64_t)UINT64_C(31))), 0, (_3802 << (((uint32_t)_3796)))))));
  _3806 = llvm_add_u64(_3796, -8);
  _3796__PHI_TEMPORARY = _3806;   /* for PHI node */
  _3797__PHI_TEMPORARY = _3805;   /* for PHI node */
  goto _3896;

  } while (1); /* end of syntactic loop '' */
_3895:
  _3807 = _3807__PHI_TEMPORARY;
  _3808 = *(uint64_t*)_3783;
  _3809 = *(uint64_t*)_3785;
  _3810 = jsyn_cbe_fshl_i64(_3809, _3808, 32);
  _3811 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3807)), _3809, 32);
  *(uint64_t*)_3783 = _3810;
  *(uint64_t*)_3785 = _3811;
  _3812 = ((&((uint8_t*)_3778)[((int64_t)56)]));
  _3813 = *(uint64_t*)_3812;
  _3814 = ((&((uint8_t*)_3778)[((int64_t)64)]));
  _3815 = *(uint64_t*)_3814;
  _3816 = ((&((uint8_t*)_3778)[((int64_t)72)]));
  _3817 = *(uint64_t*)_3816;
  _3818 = *(void**)_3778;
  _3819 = *(uint64_t*)(((&((uint8_t*)_3818)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3778)[((int64_t)48)]))) = _3813;
  *(uint64_t*)_3812 = _3815;
  *(uint64_t*)_3814 = _3817;
  *(uint64_t*)_3816 = _3819;
  julia_emit_20((&_3779), _3777, _3778, 71, 1);
  _3820__PHI_TEMPORARY = (&_3779);   /* for PHI node */
  goto _3900;

_3900:
  _3820 = _3820__PHI_TEMPORARY;
  _3821 = memcpy(_3776, _3820, 32);
  return;
_3893:
  _3822 = *(uint64_t*)_3783;
  if (((_3822 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _3901;
  } else {
    goto _3902;
  }

_3901:
  _3823 = *(void**)_3778;
  _3824 = ((&((uint8_t*)_3823)[((int64_t)16)]));
  _3825 = *(uint64_t*)_3824;
  _3826 = ((&((uint8_t*)_3823)[((int64_t)8)]));
  _3827 = *(uint64_t*)_3826;
  if ((((int64_t)_3827) > ((int64_t)_3825))) {
    goto _3903;
  } else {
    _3844__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3904;
  }

_3903:
  _3828 = *(void**)_3823;
  _3829 = *(uint8_t*)(((&((uint8_t*)_3828)[((int64_t)_3825)])));
  *(uint64_t*)_3824 = (llvm_add_u64(_3825, 1));
  _3830 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3829)), 0);
  _3831 = llvm_sub_u8(32, (llvm_shl_u8(_3830, 3)));
  _3832 = (((uint32_t)(uint8_t)_3829)) << 24;
  if ((((uint8_t)_3831) > ((uint8_t)((uint8_t)16)))) {
    _3844__PHI_TEMPORARY = _3832;   /* for PHI node */
    goto _3904;
  } else {
    _3833__PHI_TEMPORARY = 16;   /* for PHI node */
    _3834__PHI_TEMPORARY = _3832;   /* for PHI node */
    goto _3905;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3905:
  _3833 = _3833__PHI_TEMPORARY;
  _3834 = _3834__PHI_TEMPORARY;
  if (((((int64_t)_3833) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3833) < ((uint64_t)(((uint64_t)(uint8_t)_3831)))))) {
    _3844__PHI_TEMPORARY = _3834;   /* for PHI node */
    goto _3904;
  } else {
    goto _3906;
  }

_3906:
  _3835 = *(uint64_t*)_3824;
  _3836 = *(uint64_t*)_3826;
  if ((((int64_t)_3836) > ((int64_t)_3835))) {
    goto _3907;
  } else {
    _3844__PHI_TEMPORARY = _3834;   /* for PHI node */
    goto _3904;
  }

_3907:
  _3837 = *(void**)_3823;
  _3838 = *(uint8_t*)(((&((uint8_t*)_3837)[((int64_t)_3835)])));
  if ((((int8_t)_3838) > ((int8_t)((uint8_t)-65)))) {
    _3844__PHI_TEMPORARY = _3834;   /* for PHI node */
    goto _3904;
  } else {
    goto _3908;
  }

_3908:
  _3839 = llvm_select_u32((((int64_t)_3835) < ((int64_t)_3836)), (((uint32_t)(uint8_t)_3838)), 0);
  _3840 = *(uint64_t*)_3824;
  *(uint64_t*)_3824 = (llvm_add_u64(_3840, 1));
  _3841 = llvm_neg_u64(_3833);
  _3842 = _3834 | (llvm_select_u32((((int64_t)_3833) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3841) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3839, (((uint32_t)_3841)))))), (llvm_select_u32((((uint64_t)_3833) > ((uint64_t)UINT64_C(31))), 0, (_3839 << (((uint32_t)_3833)))))));
  _3843 = llvm_add_u64(_3833, -8);
  _3833__PHI_TEMPORARY = _3843;   /* for PHI node */
  _3834__PHI_TEMPORARY = _3842;   /* for PHI node */
  goto _3905;

  } while (1); /* end of syntactic loop '' */
_3904:
  _3844 = _3844__PHI_TEMPORARY;
  _3845 = *(uint64_t*)_3783;
  _3846 = *(uint64_t*)_3785;
  _3847 = jsyn_cbe_fshl_i64(_3846, _3845, 32);
  _3848 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3844)), _3846, 32);
  *(uint64_t*)_3783 = _3847;
  *(uint64_t*)_3785 = _3848;
  _3849 = ((&((uint8_t*)_3778)[((int64_t)56)]));
  _3850 = *(uint64_t*)_3849;
  _3851 = ((&((uint8_t*)_3778)[((int64_t)64)]));
  _3852 = *(uint64_t*)_3851;
  _3853 = ((&((uint8_t*)_3778)[((int64_t)72)]));
  _3854 = *(uint64_t*)_3853;
  _3855 = *(void**)_3778;
  _3856 = *(uint64_t*)(((&((uint8_t*)_3855)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3778)[((int64_t)48)]))) = _3850;
  *(uint64_t*)_3849 = _3852;
  *(uint64_t*)_3851 = _3854;
  *(uint64_t*)_3853 = _3856;
  julia_emit_20((&_3780), _3777, _3778, 525, 1);
  _3820__PHI_TEMPORARY = (&_3780);   /* for PHI node */
  goto _3900;

_3902:
  _3857 = *(uint64_t*)_3783;
  if (((_3857 & INT64_C(-4294967296)) == UINT64_C(8935141660703064064))) {
    goto _3909;
  } else {
    goto _3910;
  }

_3909:
  _3858 = *(void**)_3778;
  _3859 = ((&((uint8_t*)_3858)[((int64_t)16)]));
  _3860 = *(uint64_t*)_3859;
  _3861 = ((&((uint8_t*)_3858)[((int64_t)8)]));
  _3862 = *(uint64_t*)_3861;
  if ((((int64_t)_3862) > ((int64_t)_3860))) {
    goto _3911;
  } else {
    _3879__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3912;
  }

_3911:
  _3863 = *(void**)_3858;
  _3864 = *(uint8_t*)(((&((uint8_t*)_3863)[((int64_t)_3860)])));
  *(uint64_t*)_3859 = (llvm_add_u64(_3860, 1));
  _3865 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3864)), 0);
  _3866 = llvm_sub_u8(32, (llvm_shl_u8(_3865, 3)));
  _3867 = (((uint32_t)(uint8_t)_3864)) << 24;
  if ((((uint8_t)_3866) > ((uint8_t)((uint8_t)16)))) {
    _3879__PHI_TEMPORARY = _3867;   /* for PHI node */
    goto _3912;
  } else {
    _3868__PHI_TEMPORARY = 16;   /* for PHI node */
    _3869__PHI_TEMPORARY = _3867;   /* for PHI node */
    goto _3913;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3913:
  _3868 = _3868__PHI_TEMPORARY;
  _3869 = _3869__PHI_TEMPORARY;
  if (((((int64_t)_3868) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3868) < ((uint64_t)(((uint64_t)(uint8_t)_3866)))))) {
    _3879__PHI_TEMPORARY = _3869;   /* for PHI node */
    goto _3912;
  } else {
    goto _3914;
  }

_3914:
  _3870 = *(uint64_t*)_3859;
  _3871 = *(uint64_t*)_3861;
  if ((((int64_t)_3871) > ((int64_t)_3870))) {
    goto _3915;
  } else {
    _3879__PHI_TEMPORARY = _3869;   /* for PHI node */
    goto _3912;
  }

_3915:
  _3872 = *(void**)_3858;
  _3873 = *(uint8_t*)(((&((uint8_t*)_3872)[((int64_t)_3870)])));
  if ((((int8_t)_3873) > ((int8_t)((uint8_t)-65)))) {
    _3879__PHI_TEMPORARY = _3869;   /* for PHI node */
    goto _3912;
  } else {
    goto _3916;
  }

_3916:
  _3874 = llvm_select_u32((((int64_t)_3870) < ((int64_t)_3871)), (((uint32_t)(uint8_t)_3873)), 0);
  _3875 = *(uint64_t*)_3859;
  *(uint64_t*)_3859 = (llvm_add_u64(_3875, 1));
  _3876 = llvm_neg_u64(_3868);
  _3877 = _3869 | (llvm_select_u32((((int64_t)_3868) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3876) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3874, (((uint32_t)_3876)))))), (llvm_select_u32((((uint64_t)_3868) > ((uint64_t)UINT64_C(31))), 0, (_3874 << (((uint32_t)_3868)))))));
  _3878 = llvm_add_u64(_3868, -8);
  _3868__PHI_TEMPORARY = _3878;   /* for PHI node */
  _3869__PHI_TEMPORARY = _3877;   /* for PHI node */
  goto _3913;

  } while (1); /* end of syntactic loop '' */
_3912:
  _3879 = _3879__PHI_TEMPORARY;
  _3880 = *(uint64_t*)_3783;
  _3881 = *(uint64_t*)_3785;
  _3882 = jsyn_cbe_fshl_i64(_3881, _3880, 32);
  _3883 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3879)), _3881, 32);
  *(uint64_t*)_3783 = _3882;
  *(uint64_t*)_3785 = _3883;
  _3884 = ((&((uint8_t*)_3778)[((int64_t)56)]));
  _3885 = *(uint64_t*)_3884;
  _3886 = ((&((uint8_t*)_3778)[((int64_t)64)]));
  _3887 = *(uint64_t*)_3886;
  _3888 = ((&((uint8_t*)_3778)[((int64_t)72)]));
  _3889 = *(uint64_t*)_3888;
  _3890 = *(void**)_3778;
  _3891 = *(uint64_t*)(((&((uint8_t*)_3890)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3778)[((int64_t)48)]))) = _3885;
  *(uint64_t*)_3884 = _3887;
  *(uint64_t*)_3886 = _3889;
  *(uint64_t*)_3888 = _3891;
  julia_emit_20((&_3781), _3777, _3778, 232, 1);
  _3820__PHI_TEMPORARY = (&_3781);   /* for PHI node */
  goto _3900;

_3910:
  julia_emit_20((&_3782), _3777, _3778, 542, 1);
  _3820__PHI_TEMPORARY = (&_3782);   /* for PHI node */
  goto _3900;

}


static void julia_lex_amper_39(void* _3917, void* _3918, void* _3919) {
  struct l_array_4_uint64_t _3920;    /* Address-exposed local */
  struct l_array_4_uint64_t _3921;    /* Address-exposed local */
  struct l_array_4_uint64_t _3922;    /* Address-exposed local */
  void* _3923;
  uint64_t _3924;
  void* _3925;
  void* _3926;
  void* _3927;
  uint64_t _3928;
  void* _3929;
  uint64_t _3930;
  void* _3931;
  uint8_t _3932;
  uint8_t _3933;
  uint8_t _3934;
  uint32_t _3935;
  uint64_t _3936;
  uint64_t _3936__PHI_TEMPORARY;
  uint32_t _3937;
  uint32_t _3937__PHI_TEMPORARY;
  uint64_t _3938;
  uint64_t _3939;
  void* _3940;
  uint8_t _3941;
  uint32_t _3942;
  uint64_t _3943;
  uint64_t _3944;
  uint32_t _3945;
  uint64_t _3946;
  uint32_t _3947;
  uint32_t _3947__PHI_TEMPORARY;
  uint64_t _3948;
  uint64_t _3949;
  uint64_t _3950;
  uint64_t _3951;
  void* _3952;
  uint64_t _3953;
  void* _3954;
  uint64_t _3955;
  void* _3956;
  uint64_t _3957;
  void* _3958;
  uint64_t _3959;
  void* _3960;
  void* _3960__PHI_TEMPORARY;
  void* _3961;
  uint64_t _3962;
  void* _3963;
  void* _3964;
  uint64_t _3965;
  void* _3966;
  uint64_t _3967;
  void* _3968;
  uint8_t _3969;
  uint8_t _3970;
  uint8_t _3971;
  uint32_t _3972;
  uint64_t _3973;
  uint64_t _3973__PHI_TEMPORARY;
  uint32_t _3974;
  uint32_t _3974__PHI_TEMPORARY;
  uint64_t _3975;
  uint64_t _3976;
  void* _3977;
  uint8_t _3978;
  uint32_t _3979;
  uint64_t _3980;
  uint64_t _3981;
  uint32_t _3982;
  uint64_t _3983;
  uint32_t _3984;
  uint32_t _3984__PHI_TEMPORARY;
  uint64_t _3985;
  uint64_t _3986;
  uint64_t _3987;
  uint64_t _3988;
  void* _3989;
  uint64_t _3990;
  void* _3991;
  uint64_t _3992;
  void* _3993;
  uint64_t _3994;
  void* _3995;
  uint64_t _3996;

  _3923 = ((&((uint8_t*)_3919)[((int64_t)32)]));
  _3924 = *(uint64_t*)_3923;
  _3925 = ((&((uint8_t*)_3919)[((int64_t)40)]));
  if (((_3924 & INT64_C(-4294967296)) == UINT64_C(2738188573441261568))) {
    goto _3997;
  } else {
    goto _3998;
  }

_3997:
  _3926 = *(void**)_3919;
  _3927 = ((&((uint8_t*)_3926)[((int64_t)16)]));
  _3928 = *(uint64_t*)_3927;
  _3929 = ((&((uint8_t*)_3926)[((int64_t)8)]));
  _3930 = *(uint64_t*)_3929;
  if ((((int64_t)_3930) > ((int64_t)_3928))) {
    goto _3999;
  } else {
    _3947__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4000;
  }

_3999:
  _3931 = *(void**)_3926;
  _3932 = *(uint8_t*)(((&((uint8_t*)_3931)[((int64_t)_3928)])));
  *(uint64_t*)_3927 = (llvm_add_u64(_3928, 1));
  _3933 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3932)), 0);
  _3934 = llvm_sub_u8(32, (llvm_shl_u8(_3933, 3)));
  _3935 = (((uint32_t)(uint8_t)_3932)) << 24;
  if ((((uint8_t)_3934) > ((uint8_t)((uint8_t)16)))) {
    _3947__PHI_TEMPORARY = _3935;   /* for PHI node */
    goto _4000;
  } else {
    _3936__PHI_TEMPORARY = 16;   /* for PHI node */
    _3937__PHI_TEMPORARY = _3935;   /* for PHI node */
    goto _4001;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4001:
  _3936 = _3936__PHI_TEMPORARY;
  _3937 = _3937__PHI_TEMPORARY;
  if (((((int64_t)_3936) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3936) < ((uint64_t)(((uint64_t)(uint8_t)_3934)))))) {
    _3947__PHI_TEMPORARY = _3937;   /* for PHI node */
    goto _4000;
  } else {
    goto _4002;
  }

_4002:
  _3938 = *(uint64_t*)_3927;
  _3939 = *(uint64_t*)_3929;
  if ((((int64_t)_3939) > ((int64_t)_3938))) {
    goto _4003;
  } else {
    _3947__PHI_TEMPORARY = _3937;   /* for PHI node */
    goto _4000;
  }

_4003:
  _3940 = *(void**)_3926;
  _3941 = *(uint8_t*)(((&((uint8_t*)_3940)[((int64_t)_3938)])));
  if ((((int8_t)_3941) > ((int8_t)((uint8_t)-65)))) {
    _3947__PHI_TEMPORARY = _3937;   /* for PHI node */
    goto _4000;
  } else {
    goto _4004;
  }

_4004:
  _3942 = llvm_select_u32((((int64_t)_3938) < ((int64_t)_3939)), (((uint32_t)(uint8_t)_3941)), 0);
  _3943 = *(uint64_t*)_3927;
  *(uint64_t*)_3927 = (llvm_add_u64(_3943, 1));
  _3944 = llvm_neg_u64(_3936);
  _3945 = _3937 | (llvm_select_u32((((int64_t)_3936) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3944) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3942, (((uint32_t)_3944)))))), (llvm_select_u32((((uint64_t)_3936) > ((uint64_t)UINT64_C(31))), 0, (_3942 << (((uint32_t)_3936)))))));
  _3946 = llvm_add_u64(_3936, -8);
  _3936__PHI_TEMPORARY = _3946;   /* for PHI node */
  _3937__PHI_TEMPORARY = _3945;   /* for PHI node */
  goto _4001;

  } while (1); /* end of syntactic loop '' */
_4000:
  _3947 = _3947__PHI_TEMPORARY;
  _3948 = *(uint64_t*)_3923;
  _3949 = *(uint64_t*)_3925;
  _3950 = jsyn_cbe_fshl_i64(_3949, _3948, 32);
  _3951 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3947)), _3949, 32);
  *(uint64_t*)_3923 = _3950;
  *(uint64_t*)_3925 = _3951;
  _3952 = ((&((uint8_t*)_3919)[((int64_t)56)]));
  _3953 = *(uint64_t*)_3952;
  _3954 = ((&((uint8_t*)_3919)[((int64_t)64)]));
  _3955 = *(uint64_t*)_3954;
  _3956 = ((&((uint8_t*)_3919)[((int64_t)72)]));
  _3957 = *(uint64_t*)_3956;
  _3958 = *(void**)_3919;
  _3959 = *(uint64_t*)(((&((uint8_t*)_3958)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3919)[((int64_t)48)]))) = _3953;
  *(uint64_t*)_3952 = _3955;
  *(uint64_t*)_3954 = _3957;
  *(uint64_t*)_3956 = _3959;
  julia_emit_20((&_3920), _3918, _3919, 234, 1);
  _3960__PHI_TEMPORARY = (&_3920);   /* for PHI node */
  goto _4005;

_4005:
  _3960 = _3960__PHI_TEMPORARY;
  _3961 = memcpy(_3917, _3960, 32);
  return;
_3998:
  _3962 = *(uint64_t*)_3923;
  if (((_3962 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4006;
  } else {
    goto _4007;
  }

_4006:
  _3963 = *(void**)_3919;
  _3964 = ((&((uint8_t*)_3963)[((int64_t)16)]));
  _3965 = *(uint64_t*)_3964;
  _3966 = ((&((uint8_t*)_3963)[((int64_t)8)]));
  _3967 = *(uint64_t*)_3966;
  if ((((int64_t)_3967) > ((int64_t)_3965))) {
    goto _4008;
  } else {
    _3984__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4009;
  }

_4008:
  _3968 = *(void**)_3963;
  _3969 = *(uint8_t*)(((&((uint8_t*)_3968)[((int64_t)_3965)])));
  *(uint64_t*)_3964 = (llvm_add_u64(_3965, 1));
  _3970 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3969)), 0);
  _3971 = llvm_sub_u8(32, (llvm_shl_u8(_3970, 3)));
  _3972 = (((uint32_t)(uint8_t)_3969)) << 24;
  if ((((uint8_t)_3971) > ((uint8_t)((uint8_t)16)))) {
    _3984__PHI_TEMPORARY = _3972;   /* for PHI node */
    goto _4009;
  } else {
    _3973__PHI_TEMPORARY = 16;   /* for PHI node */
    _3974__PHI_TEMPORARY = _3972;   /* for PHI node */
    goto _4010;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4010:
  _3973 = _3973__PHI_TEMPORARY;
  _3974 = _3974__PHI_TEMPORARY;
  if (((((int64_t)_3973) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3973) < ((uint64_t)(((uint64_t)(uint8_t)_3971)))))) {
    _3984__PHI_TEMPORARY = _3974;   /* for PHI node */
    goto _4009;
  } else {
    goto _4011;
  }

_4011:
  _3975 = *(uint64_t*)_3964;
  _3976 = *(uint64_t*)_3966;
  if ((((int64_t)_3976) > ((int64_t)_3975))) {
    goto _4012;
  } else {
    _3984__PHI_TEMPORARY = _3974;   /* for PHI node */
    goto _4009;
  }

_4012:
  _3977 = *(void**)_3963;
  _3978 = *(uint8_t*)(((&((uint8_t*)_3977)[((int64_t)_3975)])));
  if ((((int8_t)_3978) > ((int8_t)((uint8_t)-65)))) {
    _3984__PHI_TEMPORARY = _3974;   /* for PHI node */
    goto _4009;
  } else {
    goto _4013;
  }

_4013:
  _3979 = llvm_select_u32((((int64_t)_3975) < ((int64_t)_3976)), (((uint32_t)(uint8_t)_3978)), 0);
  _3980 = *(uint64_t*)_3964;
  *(uint64_t*)_3964 = (llvm_add_u64(_3980, 1));
  _3981 = llvm_neg_u64(_3973);
  _3982 = _3974 | (llvm_select_u32((((int64_t)_3973) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3981) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3979, (((uint32_t)_3981)))))), (llvm_select_u32((((uint64_t)_3973) > ((uint64_t)UINT64_C(31))), 0, (_3979 << (((uint32_t)_3973)))))));
  _3983 = llvm_add_u64(_3973, -8);
  _3973__PHI_TEMPORARY = _3983;   /* for PHI node */
  _3974__PHI_TEMPORARY = _3982;   /* for PHI node */
  goto _4010;

  } while (1); /* end of syntactic loop '' */
_4009:
  _3984 = _3984__PHI_TEMPORARY;
  _3985 = *(uint64_t*)_3923;
  _3986 = *(uint64_t*)_3925;
  _3987 = jsyn_cbe_fshl_i64(_3986, _3985, 32);
  _3988 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3984)), _3986, 32);
  *(uint64_t*)_3923 = _3987;
  *(uint64_t*)_3925 = _3988;
  _3989 = ((&((uint8_t*)_3919)[((int64_t)56)]));
  _3990 = *(uint64_t*)_3989;
  _3991 = ((&((uint8_t*)_3919)[((int64_t)64)]));
  _3992 = *(uint64_t*)_3991;
  _3993 = ((&((uint8_t*)_3919)[((int64_t)72)]));
  _3994 = *(uint64_t*)_3993;
  _3995 = *(void**)_3919;
  _3996 = *(uint64_t*)(((&((uint8_t*)_3995)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3919)[((int64_t)48)]))) = _3990;
  *(uint64_t*)_3989 = _3992;
  *(uint64_t*)_3991 = _3994;
  *(uint64_t*)_3993 = _3996;
  julia_emit_20((&_3921), _3918, _3919, 71, 1);
  _3960__PHI_TEMPORARY = (&_3921);   /* for PHI node */
  goto _4005;

_4007:
  julia_emit_20((&_3922), _3918, _3919, 600, 1);
  _3960__PHI_TEMPORARY = (&_3922);   /* for PHI node */
  goto _4005;

}


static void julia_lex_division_40(void* _4014, void* _4015, void* _4016) {
  struct l_array_4_uint64_t _4017;    /* Address-exposed local */
  struct l_array_4_uint64_t _4018;    /* Address-exposed local */
  void* _4019;
  uint64_t _4020;
  void* _4021;
  void* _4022;
  void* _4023;
  uint64_t _4024;
  void* _4025;
  uint64_t _4026;
  void* _4027;
  uint8_t _4028;
  uint8_t _4029;
  uint8_t _4030;
  uint32_t _4031;
  uint64_t _4032;
  uint64_t _4032__PHI_TEMPORARY;
  uint32_t _4033;
  uint32_t _4033__PHI_TEMPORARY;
  uint64_t _4034;
  uint64_t _4035;
  void* _4036;
  uint8_t _4037;
  uint32_t _4038;
  uint64_t _4039;
  uint64_t _4040;
  uint32_t _4041;
  uint64_t _4042;
  uint32_t _4043;
  uint32_t _4043__PHI_TEMPORARY;
  uint64_t _4044;
  uint64_t _4045;
  uint64_t _4046;
  uint64_t _4047;
  void* _4048;
  uint64_t _4049;
  void* _4050;
  uint64_t _4051;
  void* _4052;
  uint64_t _4053;
  void* _4054;
  uint64_t _4055;
  void* _4056;
  void* _4056__PHI_TEMPORARY;
  void* _4057;

  _4019 = ((&((uint8_t*)_4016)[((int64_t)32)]));
  _4020 = *(uint64_t*)_4019;
  _4021 = ((&((uint8_t*)_4016)[((int64_t)40)]));
  if (((_4020 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4058;
  } else {
    goto _4059;
  }

_4058:
  _4022 = *(void**)_4016;
  _4023 = ((&((uint8_t*)_4022)[((int64_t)16)]));
  _4024 = *(uint64_t*)_4023;
  _4025 = ((&((uint8_t*)_4022)[((int64_t)8)]));
  _4026 = *(uint64_t*)_4025;
  if ((((int64_t)_4026) > ((int64_t)_4024))) {
    goto _4060;
  } else {
    _4043__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4061;
  }

_4060:
  _4027 = *(void**)_4022;
  _4028 = *(uint8_t*)(((&((uint8_t*)_4027)[((int64_t)_4024)])));
  *(uint64_t*)_4023 = (llvm_add_u64(_4024, 1));
  _4029 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4028)), 0);
  _4030 = llvm_sub_u8(32, (llvm_shl_u8(_4029, 3)));
  _4031 = (((uint32_t)(uint8_t)_4028)) << 24;
  if ((((uint8_t)_4030) > ((uint8_t)((uint8_t)16)))) {
    _4043__PHI_TEMPORARY = _4031;   /* for PHI node */
    goto _4061;
  } else {
    _4032__PHI_TEMPORARY = 16;   /* for PHI node */
    _4033__PHI_TEMPORARY = _4031;   /* for PHI node */
    goto _4062;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4062:
  _4032 = _4032__PHI_TEMPORARY;
  _4033 = _4033__PHI_TEMPORARY;
  if (((((int64_t)_4032) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4032) < ((uint64_t)(((uint64_t)(uint8_t)_4030)))))) {
    _4043__PHI_TEMPORARY = _4033;   /* for PHI node */
    goto _4061;
  } else {
    goto _4063;
  }

_4063:
  _4034 = *(uint64_t*)_4023;
  _4035 = *(uint64_t*)_4025;
  if ((((int64_t)_4035) > ((int64_t)_4034))) {
    goto _4064;
  } else {
    _4043__PHI_TEMPORARY = _4033;   /* for PHI node */
    goto _4061;
  }

_4064:
  _4036 = *(void**)_4022;
  _4037 = *(uint8_t*)(((&((uint8_t*)_4036)[((int64_t)_4034)])));
  if ((((int8_t)_4037) > ((int8_t)((uint8_t)-65)))) {
    _4043__PHI_TEMPORARY = _4033;   /* for PHI node */
    goto _4061;
  } else {
    goto _4065;
  }

_4065:
  _4038 = llvm_select_u32((((int64_t)_4034) < ((int64_t)_4035)), (((uint32_t)(uint8_t)_4037)), 0);
  _4039 = *(uint64_t*)_4023;
  *(uint64_t*)_4023 = (llvm_add_u64(_4039, 1));
  _4040 = llvm_neg_u64(_4032);
  _4041 = _4033 | (llvm_select_u32((((int64_t)_4032) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4040) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4038, (((uint32_t)_4040)))))), (llvm_select_u32((((uint64_t)_4032) > ((uint64_t)UINT64_C(31))), 0, (_4038 << (((uint32_t)_4032)))))));
  _4042 = llvm_add_u64(_4032, -8);
  _4032__PHI_TEMPORARY = _4042;   /* for PHI node */
  _4033__PHI_TEMPORARY = _4041;   /* for PHI node */
  goto _4062;

  } while (1); /* end of syntactic loop '' */
_4061:
  _4043 = _4043__PHI_TEMPORARY;
  _4044 = *(uint64_t*)_4019;
  _4045 = *(uint64_t*)_4021;
  _4046 = jsyn_cbe_fshl_i64(_4045, _4044, 32);
  _4047 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4043)), _4045, 32);
  *(uint64_t*)_4019 = _4046;
  *(uint64_t*)_4021 = _4047;
  _4048 = ((&((uint8_t*)_4016)[((int64_t)56)]));
  _4049 = *(uint64_t*)_4048;
  _4050 = ((&((uint8_t*)_4016)[((int64_t)64)]));
  _4051 = *(uint64_t*)_4050;
  _4052 = ((&((uint8_t*)_4016)[((int64_t)72)]));
  _4053 = *(uint64_t*)_4052;
  _4054 = *(void**)_4016;
  _4055 = *(uint64_t*)(((&((uint8_t*)_4054)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4016)[((int64_t)48)]))) = _4049;
  *(uint64_t*)_4048 = _4051;
  *(uint64_t*)_4050 = _4053;
  *(uint64_t*)_4052 = _4055;
  julia_emit_20((&_4017), _4015, _4016, 71, 1);
  _4056__PHI_TEMPORARY = (&_4017);   /* for PHI node */
  goto _4066;

_4066:
  _4056 = _4056__PHI_TEMPORARY;
  _4057 = memcpy(_4014, _4056, 32);
  return;
_4059:
  julia_emit_20((&_4018), _4015, _4016, 594, 1);
  _4056__PHI_TEMPORARY = (&_4018);   /* for PHI node */
  goto _4066;

}


static void julia_lex_quote_41(void* _4067, void* _4068, void* _4069) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _4070 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _4071;
  void* _4072;
  struct l_array_4_uint64_t _4073;    /* Address-exposed local */
  struct l_array_4_uint64_t _4074;    /* Address-exposed local */
  uint16_t _4075;
  bool _4076;
  bool _4076__PHI_TEMPORARY;
  uint8_t _4077;
  void* _4078;
  uint64_t _4079;
  void* _4080;
  uint64_t _4081;
  bool _4082;
  uint8_t _4083;
  void* _4084;
  void* _4085;
  void* _4086;
  void* _4087;
  uint64_t _4088;
  uint64_t _4089;
  void* _4090;
  uint64_t _4091;
  void* _4092;
  void* _4093;
  void* _4094;
  void* _4095;
  uint64_t _4096;
  void* _4097;
  uint64_t _4098;
  void* _4099;
  uint8_t _4100;
  uint8_t _4101;
  uint8_t _4102;
  uint32_t _4103;
  uint64_t _4104;
  uint64_t _4104__PHI_TEMPORARY;
  uint32_t _4105;
  uint32_t _4105__PHI_TEMPORARY;
  uint64_t _4106;
  uint64_t _4107;
  void* _4108;
  uint8_t _4109;
  uint32_t _4110;
  uint64_t _4111;
  uint64_t _4112;
  uint32_t _4113;
  uint64_t _4114;
  uint32_t _4115;
  uint32_t _4115__PHI_TEMPORARY;
  uint64_t _4116;
  uint64_t _4117;
  uint64_t _4118;
  uint64_t _4119;
  void* _4120;
  void* _4121;
  uint64_t _4122;
  void* _4123;
  uint64_t _4124;
  void* _4125;
  uint64_t _4126;
  void* _4127;
  uint64_t _4128;
  void* _4129;
  void* _4130;
  uint64_t _4131;
  void* _4132;
  uint64_t _4133;
  void* _4134;
  uint8_t _4135;
  uint8_t _4136;
  uint8_t _4137;
  uint32_t _4138;
  uint64_t _4139;
  uint64_t _4139__PHI_TEMPORARY;
  uint32_t _4140;
  uint32_t _4140__PHI_TEMPORARY;
  uint64_t _4141;
  uint64_t _4142;
  void* _4143;
  uint8_t _4144;
  uint32_t _4145;
  uint64_t _4146;
  uint64_t _4147;
  uint32_t _4148;
  uint64_t _4149;
  uint32_t _4150;
  uint32_t _4150__PHI_TEMPORARY;
  uint64_t _4151;
  uint64_t _4152;
  uint64_t _4153;
  uint64_t _4154;
  uint64_t _4155;
  uint64_t _4156;
  uint64_t _4157;
  void* _4158;
  uint64_t _4159;
  void* _4160;
  void* _4160__PHI_TEMPORARY;
  void* _4161;
  void* _4162;

  _4071 = memset((&_4070), 0, 24);
  *((uint64_t*)&_4070) = 4;
  _4072 = *(void**)_4068;
  *(void**)(((&((uint8_t*)(&_4070))[((int64_t)8)]))) = _4072;
  *(void**)_4068 = (&_4070);
  _4075 = *(uint16_t*)(((&((uint8_t*)_4069)[((int64_t)16)])));
  if (((_4075 == ((uint16_t)3)) | (((uint16_t)(llvm_add_u16(_4075, -34))) < ((uint16_t)((uint16_t)9))))) {
    _4076__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4163;
  } else {
    goto _4164;
  }

_4164:
  switch (_4075) {
  default:
    goto _4165;
  case ((uint16_t)252):
    _4076__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4163;
  case ((uint16_t)253):
    _4076__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4163;
  case ((uint16_t)706):
    _4076__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4163;
  }

_4165:
  _4076__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _4163;

_4163:
  _4076 = _4076__PHI_TEMPORARY;
  _4077 = ((uint8_t)(bool)_4076);
  _4078 = ((&((uint8_t*)_4069)[((int64_t)32)]));
  _4079 = *(uint64_t*)_4078;
  _4080 = ((&((uint8_t*)_4069)[((int64_t)40)]));
  _4081 = *(uint64_t*)_4080;
  _4082 = llvm_select_bool(((_4079 & INT64_C(-4294967296)) == UINT64_C(2449958197289549824)), ((_4081 & INT64_C(4294967295)) == UINT64_C(570425344)), 0);
  _4083 = ((uint8_t)(bool)_4082);
  _4084 = *(void**)(((&((uint8_t*)_4069)[((int64_t)24)])));
  _4085 = *(void**)_4084;
  _4086 = *(void**)(((&((uint8_t*)_4084)[((int64_t)8)])));
  _4087 = ((&((uint8_t*)_4084)[((int64_t)16)]));
  _4088 = *(uint64_t*)_4087;
  _4089 = llvm_add_u64(_4088, 1);
  _4090 = *(void**)(((&((uint8_t*)_4086)[((int64_t)8)])));
  _4091 = *(uint64_t*)_4086;
  if ((((int64_t)_4091) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_4085)), (((uint64_t)(uintptr_t)_4090)))), 4)), 1)), _4088))))) {
    goto _4166;
  } else {
    goto _4167;
  }

_4166:
  *(void**)(((&((uint8_t*)(&_4070))[((int64_t)16)]))) = _4084;
  julia__growend_internalNOT_OC__13(_4068, _4084, 1, _4088);
  goto _4167;

_4167:
  *(uint64_t*)_4087 = _4089;
  _4092 = *(void**)_4084;
  _4093 = ((&((uint8_t*)_4092)[((int64_t)(_4088 << 4))]));
  *(uint8_t*)_4093 = _4083;
  *(uint8_t*)(((&((uint8_t*)_4093)[((int64_t)1)]))) = _4077;
  *(uint32_t*)(((&((uint8_t*)_4093)[((int64_t)4)]))) = 570425344;
  *(uint64_t*)(((&((uint8_t*)_4093)[((int64_t)8)]))) = 0;
  if (_4082) {
    goto _4168;
  } else {
    goto _4169;
  }

_4168:
  _4094 = *(void**)_4069;
  _4095 = ((&((uint8_t*)_4094)[((int64_t)16)]));
  _4096 = *(uint64_t*)_4095;
  _4097 = ((&((uint8_t*)_4094)[((int64_t)8)]));
  _4098 = *(uint64_t*)_4097;
  if ((((int64_t)_4098) > ((int64_t)_4096))) {
    goto _4170;
  } else {
    _4115__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4171;
  }

_4170:
  _4099 = *(void**)_4094;
  _4100 = *(uint8_t*)(((&((uint8_t*)_4099)[((int64_t)_4096)])));
  *(uint64_t*)_4095 = (llvm_add_u64(_4096, 1));
  _4101 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4100)), 0);
  _4102 = llvm_sub_u8(32, (llvm_shl_u8(_4101, 3)));
  _4103 = (((uint32_t)(uint8_t)_4100)) << 24;
  if ((((uint8_t)_4102) > ((uint8_t)((uint8_t)16)))) {
    _4115__PHI_TEMPORARY = _4103;   /* for PHI node */
    goto _4171;
  } else {
    _4104__PHI_TEMPORARY = 16;   /* for PHI node */
    _4105__PHI_TEMPORARY = _4103;   /* for PHI node */
    goto _4172;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4172:
  _4104 = _4104__PHI_TEMPORARY;
  _4105 = _4105__PHI_TEMPORARY;
  if (((((int64_t)_4104) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4104) < ((uint64_t)(((uint64_t)(uint8_t)_4102)))))) {
    _4115__PHI_TEMPORARY = _4105;   /* for PHI node */
    goto _4171;
  } else {
    goto _4173;
  }

_4173:
  _4106 = *(uint64_t*)_4095;
  _4107 = *(uint64_t*)_4097;
  if ((((int64_t)_4107) > ((int64_t)_4106))) {
    goto _4174;
  } else {
    _4115__PHI_TEMPORARY = _4105;   /* for PHI node */
    goto _4171;
  }

_4174:
  _4108 = *(void**)_4094;
  _4109 = *(uint8_t*)(((&((uint8_t*)_4108)[((int64_t)_4106)])));
  if ((((int8_t)_4109) > ((int8_t)((uint8_t)-65)))) {
    _4115__PHI_TEMPORARY = _4105;   /* for PHI node */
    goto _4171;
  } else {
    goto _4175;
  }

_4175:
  _4110 = llvm_select_u32((((int64_t)_4106) < ((int64_t)_4107)), (((uint32_t)(uint8_t)_4109)), 0);
  _4111 = *(uint64_t*)_4095;
  *(uint64_t*)_4095 = (llvm_add_u64(_4111, 1));
  _4112 = llvm_neg_u64(_4104);
  _4113 = _4105 | (llvm_select_u32((((int64_t)_4104) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4112) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4110, (((uint32_t)_4112)))))), (llvm_select_u32((((uint64_t)_4104) > ((uint64_t)UINT64_C(31))), 0, (_4110 << (((uint32_t)_4104)))))));
  _4114 = llvm_add_u64(_4104, -8);
  _4104__PHI_TEMPORARY = _4114;   /* for PHI node */
  _4105__PHI_TEMPORARY = _4113;   /* for PHI node */
  goto _4172;

  } while (1); /* end of syntactic loop '' */
_4171:
  _4115 = _4115__PHI_TEMPORARY;
  _4116 = *(uint64_t*)_4078;
  _4117 = *(uint64_t*)_4080;
  _4118 = jsyn_cbe_fshl_i64(_4117, _4116, 32);
  _4119 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4115)), _4117, 32);
  *(uint64_t*)_4078 = _4118;
  *(uint64_t*)_4080 = _4119;
  _4120 = ((&((uint8_t*)_4069)[((int64_t)48)]));
  _4121 = ((&((uint8_t*)_4069)[((int64_t)56)]));
  _4122 = *(uint64_t*)_4121;
  _4123 = ((&((uint8_t*)_4069)[((int64_t)64)]));
  _4124 = *(uint64_t*)_4123;
  _4125 = ((&((uint8_t*)_4069)[((int64_t)72)]));
  _4126 = *(uint64_t*)_4125;
  _4127 = *(void**)_4069;
  _4128 = *(uint64_t*)(((&((uint8_t*)_4127)[((int64_t)16)])));
  *(uint64_t*)_4120 = _4122;
  *(uint64_t*)_4121 = _4124;
  *(uint64_t*)_4123 = _4126;
  *(uint64_t*)_4125 = _4128;
  _4129 = *(void**)_4069;
  _4130 = ((&((uint8_t*)_4129)[((int64_t)16)]));
  _4131 = *(uint64_t*)_4130;
  _4132 = ((&((uint8_t*)_4129)[((int64_t)8)]));
  _4133 = *(uint64_t*)_4132;
  if ((((int64_t)_4133) > ((int64_t)_4131))) {
    goto _4176;
  } else {
    _4150__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4177;
  }

_4176:
  _4134 = *(void**)_4129;
  _4135 = *(uint8_t*)(((&((uint8_t*)_4134)[((int64_t)_4131)])));
  *(uint64_t*)_4130 = (llvm_add_u64(_4131, 1));
  _4136 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4135)), 0);
  _4137 = llvm_sub_u8(32, (llvm_shl_u8(_4136, 3)));
  _4138 = (((uint32_t)(uint8_t)_4135)) << 24;
  if ((((uint8_t)_4137) > ((uint8_t)((uint8_t)16)))) {
    _4150__PHI_TEMPORARY = _4138;   /* for PHI node */
    goto _4177;
  } else {
    _4139__PHI_TEMPORARY = 16;   /* for PHI node */
    _4140__PHI_TEMPORARY = _4138;   /* for PHI node */
    goto _4178;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4178:
  _4139 = _4139__PHI_TEMPORARY;
  _4140 = _4140__PHI_TEMPORARY;
  if (((((int64_t)_4139) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4139) < ((uint64_t)(((uint64_t)(uint8_t)_4137)))))) {
    _4150__PHI_TEMPORARY = _4140;   /* for PHI node */
    goto _4177;
  } else {
    goto _4179;
  }

_4179:
  _4141 = *(uint64_t*)_4130;
  _4142 = *(uint64_t*)_4132;
  if ((((int64_t)_4142) > ((int64_t)_4141))) {
    goto _4180;
  } else {
    _4150__PHI_TEMPORARY = _4140;   /* for PHI node */
    goto _4177;
  }

_4180:
  _4143 = *(void**)_4129;
  _4144 = *(uint8_t*)(((&((uint8_t*)_4143)[((int64_t)_4141)])));
  if ((((int8_t)_4144) > ((int8_t)((uint8_t)-65)))) {
    _4150__PHI_TEMPORARY = _4140;   /* for PHI node */
    goto _4177;
  } else {
    goto _4181;
  }

_4181:
  _4145 = llvm_select_u32((((int64_t)_4141) < ((int64_t)_4142)), (((uint32_t)(uint8_t)_4144)), 0);
  _4146 = *(uint64_t*)_4130;
  *(uint64_t*)_4130 = (llvm_add_u64(_4146, 1));
  _4147 = llvm_neg_u64(_4139);
  _4148 = _4140 | (llvm_select_u32((((int64_t)_4139) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4147) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4145, (((uint32_t)_4147)))))), (llvm_select_u32((((uint64_t)_4139) > ((uint64_t)UINT64_C(31))), 0, (_4145 << (((uint32_t)_4139)))))));
  _4149 = llvm_add_u64(_4139, -8);
  _4139__PHI_TEMPORARY = _4149;   /* for PHI node */
  _4140__PHI_TEMPORARY = _4148;   /* for PHI node */
  goto _4178;

  } while (1); /* end of syntactic loop '' */
_4177:
  _4150 = _4150__PHI_TEMPORARY;
  _4151 = *(uint64_t*)_4078;
  _4152 = *(uint64_t*)_4080;
  _4153 = jsyn_cbe_fshl_i64(_4152, _4151, 32);
  _4154 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4150)), _4152, 32);
  *(uint64_t*)_4078 = _4153;
  *(uint64_t*)_4080 = _4154;
  _4155 = *(uint64_t*)_4121;
  _4156 = *(uint64_t*)_4123;
  _4157 = *(uint64_t*)_4125;
  _4158 = *(void**)_4069;
  _4159 = *(uint64_t*)(((&((uint8_t*)_4158)[((int64_t)16)])));
  *(uint64_t*)_4120 = _4155;
  *(uint64_t*)_4121 = _4156;
  *(uint64_t*)_4123 = _4157;
  *(uint64_t*)_4125 = _4159;
  julia_emit_20((&_4073), _4068, _4069, 63, 1);
  _4160__PHI_TEMPORARY = (&_4073);   /* for PHI node */
  goto _4182;

_4182:
  _4160 = _4160__PHI_TEMPORARY;
  _4161 = memcpy(_4067, _4160, 32);
  _4162 = *(void**)(((&((uint8_t*)(&_4070))[((int64_t)8)])));
  *(void**)_4068 = _4162;
  return;
_4169:
  julia_emit_20((&_4074), _4068, _4069, 62, 1);
  _4160__PHI_TEMPORARY = (&_4074);   /* for PHI node */
  goto _4182;

}


static void julia_lex_percent_42(void* _4183, void* _4184, void* _4185) {
  struct l_array_4_uint64_t _4186;    /* Address-exposed local */
  struct l_array_4_uint64_t _4187;    /* Address-exposed local */
  void* _4188;
  uint64_t _4189;
  void* _4190;
  void* _4191;
  void* _4192;
  uint64_t _4193;
  void* _4194;
  uint64_t _4195;
  void* _4196;
  uint8_t _4197;
  uint8_t _4198;
  uint8_t _4199;
  uint32_t _4200;
  uint64_t _4201;
  uint64_t _4201__PHI_TEMPORARY;
  uint32_t _4202;
  uint32_t _4202__PHI_TEMPORARY;
  uint64_t _4203;
  uint64_t _4204;
  void* _4205;
  uint8_t _4206;
  uint32_t _4207;
  uint64_t _4208;
  uint64_t _4209;
  uint32_t _4210;
  uint64_t _4211;
  uint32_t _4212;
  uint32_t _4212__PHI_TEMPORARY;
  uint64_t _4213;
  uint64_t _4214;
  uint64_t _4215;
  uint64_t _4216;
  void* _4217;
  uint64_t _4218;
  void* _4219;
  uint64_t _4220;
  void* _4221;
  uint64_t _4222;
  void* _4223;
  uint64_t _4224;
  void* _4225;
  void* _4225__PHI_TEMPORARY;
  void* _4226;

  _4188 = ((&((uint8_t*)_4185)[((int64_t)32)]));
  _4189 = *(uint64_t*)_4188;
  _4190 = ((&((uint8_t*)_4185)[((int64_t)40)]));
  if (((_4189 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4227;
  } else {
    goto _4228;
  }

_4227:
  _4191 = *(void**)_4185;
  _4192 = ((&((uint8_t*)_4191)[((int64_t)16)]));
  _4193 = *(uint64_t*)_4192;
  _4194 = ((&((uint8_t*)_4191)[((int64_t)8)]));
  _4195 = *(uint64_t*)_4194;
  if ((((int64_t)_4195) > ((int64_t)_4193))) {
    goto _4229;
  } else {
    _4212__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4230;
  }

_4229:
  _4196 = *(void**)_4191;
  _4197 = *(uint8_t*)(((&((uint8_t*)_4196)[((int64_t)_4193)])));
  *(uint64_t*)_4192 = (llvm_add_u64(_4193, 1));
  _4198 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4197)), 0);
  _4199 = llvm_sub_u8(32, (llvm_shl_u8(_4198, 3)));
  _4200 = (((uint32_t)(uint8_t)_4197)) << 24;
  if ((((uint8_t)_4199) > ((uint8_t)((uint8_t)16)))) {
    _4212__PHI_TEMPORARY = _4200;   /* for PHI node */
    goto _4230;
  } else {
    _4201__PHI_TEMPORARY = 16;   /* for PHI node */
    _4202__PHI_TEMPORARY = _4200;   /* for PHI node */
    goto _4231;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4231:
  _4201 = _4201__PHI_TEMPORARY;
  _4202 = _4202__PHI_TEMPORARY;
  if (((((int64_t)_4201) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4201) < ((uint64_t)(((uint64_t)(uint8_t)_4199)))))) {
    _4212__PHI_TEMPORARY = _4202;   /* for PHI node */
    goto _4230;
  } else {
    goto _4232;
  }

_4232:
  _4203 = *(uint64_t*)_4192;
  _4204 = *(uint64_t*)_4194;
  if ((((int64_t)_4204) > ((int64_t)_4203))) {
    goto _4233;
  } else {
    _4212__PHI_TEMPORARY = _4202;   /* for PHI node */
    goto _4230;
  }

_4233:
  _4205 = *(void**)_4191;
  _4206 = *(uint8_t*)(((&((uint8_t*)_4205)[((int64_t)_4203)])));
  if ((((int8_t)_4206) > ((int8_t)((uint8_t)-65)))) {
    _4212__PHI_TEMPORARY = _4202;   /* for PHI node */
    goto _4230;
  } else {
    goto _4234;
  }

_4234:
  _4207 = llvm_select_u32((((int64_t)_4203) < ((int64_t)_4204)), (((uint32_t)(uint8_t)_4206)), 0);
  _4208 = *(uint64_t*)_4192;
  *(uint64_t*)_4192 = (llvm_add_u64(_4208, 1));
  _4209 = llvm_neg_u64(_4201);
  _4210 = _4202 | (llvm_select_u32((((int64_t)_4201) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4209) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4207, (((uint32_t)_4209)))))), (llvm_select_u32((((uint64_t)_4201) > ((uint64_t)UINT64_C(31))), 0, (_4207 << (((uint32_t)_4201)))))));
  _4211 = llvm_add_u64(_4201, -8);
  _4201__PHI_TEMPORARY = _4211;   /* for PHI node */
  _4202__PHI_TEMPORARY = _4210;   /* for PHI node */
  goto _4231;

  } while (1); /* end of syntactic loop '' */
_4230:
  _4212 = _4212__PHI_TEMPORARY;
  _4213 = *(uint64_t*)_4188;
  _4214 = *(uint64_t*)_4190;
  _4215 = jsyn_cbe_fshl_i64(_4214, _4213, 32);
  _4216 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4212)), _4214, 32);
  *(uint64_t*)_4188 = _4215;
  *(uint64_t*)_4190 = _4216;
  _4217 = ((&((uint8_t*)_4185)[((int64_t)56)]));
  _4218 = *(uint64_t*)_4217;
  _4219 = ((&((uint8_t*)_4185)[((int64_t)64)]));
  _4220 = *(uint64_t*)_4219;
  _4221 = ((&((uint8_t*)_4185)[((int64_t)72)]));
  _4222 = *(uint64_t*)_4221;
  _4223 = *(void**)_4185;
  _4224 = *(uint64_t*)(((&((uint8_t*)_4223)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4185)[((int64_t)48)]))) = _4218;
  *(uint64_t*)_4217 = _4220;
  *(uint64_t*)_4219 = _4222;
  *(uint64_t*)_4221 = _4224;
  julia_emit_20((&_4186), _4184, _4185, 71, 1);
  _4225__PHI_TEMPORARY = (&_4186);   /* for PHI node */
  goto _4235;

_4235:
  _4225 = _4225__PHI_TEMPORARY;
  _4226 = memcpy(_4183, _4225, 32);
  return;
_4228:
  julia_emit_20((&_4187), _4184, _4185, 595, 1);
  _4225__PHI_TEMPORARY = (&_4187);   /* for PHI node */
  goto _4235;

}


static void julia_lex_forwardslash_43(void* _4236, void* _4237, void* _4238) {
  struct l_array_4_uint64_t _4239;    /* Address-exposed local */
  struct l_array_4_uint64_t _4240;    /* Address-exposed local */
  struct l_array_4_uint64_t _4241;    /* Address-exposed local */
  struct l_array_4_uint64_t _4242;    /* Address-exposed local */
  void* _4243;
  uint64_t _4244;
  void* _4245;
  void* _4246;
  void* _4247;
  uint64_t _4248;
  void* _4249;
  uint64_t _4250;
  void* _4251;
  uint8_t _4252;
  uint8_t _4253;
  uint8_t _4254;
  uint32_t _4255;
  uint64_t _4256;
  uint64_t _4256__PHI_TEMPORARY;
  uint32_t _4257;
  uint32_t _4257__PHI_TEMPORARY;
  uint64_t _4258;
  uint64_t _4259;
  void* _4260;
  uint8_t _4261;
  uint32_t _4262;
  uint64_t _4263;
  uint64_t _4264;
  uint32_t _4265;
  uint64_t _4266;
  uint32_t _4267;
  uint32_t _4267__PHI_TEMPORARY;
  uint64_t _4268;
  uint64_t _4269;
  uint64_t _4270;
  uint64_t _4271;
  void* _4272;
  uint64_t _4273;
  void* _4274;
  uint64_t _4275;
  void* _4276;
  uint64_t _4277;
  void* _4278;
  uint64_t _4279;
  uint64_t _4280;
  void* _4281;
  void* _4282;
  uint64_t _4283;
  void* _4284;
  uint64_t _4285;
  void* _4286;
  uint8_t _4287;
  uint8_t _4288;
  uint8_t _4289;
  uint32_t _4290;
  uint64_t _4291;
  uint64_t _4291__PHI_TEMPORARY;
  uint32_t _4292;
  uint32_t _4292__PHI_TEMPORARY;
  uint64_t _4293;
  uint64_t _4294;
  void* _4295;
  uint8_t _4296;
  uint32_t _4297;
  uint64_t _4298;
  uint64_t _4299;
  uint32_t _4300;
  uint64_t _4301;
  uint32_t _4302;
  uint32_t _4302__PHI_TEMPORARY;
  uint64_t _4303;
  uint64_t _4304;
  uint64_t _4305;
  uint64_t _4306;
  void* _4307;
  uint64_t _4308;
  void* _4309;
  uint64_t _4310;
  void* _4311;
  uint64_t _4312;
  void* _4313;
  uint64_t _4314;
  void* _4315;
  void* _4315__PHI_TEMPORARY;
  void* _4316;
  uint64_t _4317;
  void* _4318;
  void* _4319;
  uint64_t _4320;
  void* _4321;
  uint64_t _4322;
  void* _4323;
  uint8_t _4324;
  uint8_t _4325;
  uint8_t _4326;
  uint32_t _4327;
  uint64_t _4328;
  uint64_t _4328__PHI_TEMPORARY;
  uint32_t _4329;
  uint32_t _4329__PHI_TEMPORARY;
  uint64_t _4330;
  uint64_t _4331;
  void* _4332;
  uint8_t _4333;
  uint32_t _4334;
  uint64_t _4335;
  uint64_t _4336;
  uint32_t _4337;
  uint64_t _4338;
  uint32_t _4339;
  uint32_t _4339__PHI_TEMPORARY;
  uint64_t _4340;
  uint64_t _4341;
  uint64_t _4342;
  uint64_t _4343;
  void* _4344;
  uint64_t _4345;
  void* _4346;
  uint64_t _4347;
  void* _4348;
  uint64_t _4349;
  void* _4350;
  uint64_t _4351;

  _4243 = ((&((uint8_t*)_4238)[((int64_t)32)]));
  _4244 = *(uint64_t*)_4243;
  _4245 = ((&((uint8_t*)_4238)[((int64_t)40)]));
  if (((_4244 & INT64_C(-4294967296)) == UINT64_C(3386706919782612992))) {
    goto _4352;
  } else {
    goto _4353;
  }

_4352:
  _4246 = *(void**)_4238;
  _4247 = ((&((uint8_t*)_4246)[((int64_t)16)]));
  _4248 = *(uint64_t*)_4247;
  _4249 = ((&((uint8_t*)_4246)[((int64_t)8)]));
  _4250 = *(uint64_t*)_4249;
  if ((((int64_t)_4250) > ((int64_t)_4248))) {
    goto _4354;
  } else {
    _4267__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4355;
  }

_4354:
  _4251 = *(void**)_4246;
  _4252 = *(uint8_t*)(((&((uint8_t*)_4251)[((int64_t)_4248)])));
  *(uint64_t*)_4247 = (llvm_add_u64(_4248, 1));
  _4253 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4252)), 0);
  _4254 = llvm_sub_u8(32, (llvm_shl_u8(_4253, 3)));
  _4255 = (((uint32_t)(uint8_t)_4252)) << 24;
  if ((((uint8_t)_4254) > ((uint8_t)((uint8_t)16)))) {
    _4267__PHI_TEMPORARY = _4255;   /* for PHI node */
    goto _4355;
  } else {
    _4256__PHI_TEMPORARY = 16;   /* for PHI node */
    _4257__PHI_TEMPORARY = _4255;   /* for PHI node */
    goto _4356;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4356:
  _4256 = _4256__PHI_TEMPORARY;
  _4257 = _4257__PHI_TEMPORARY;
  if (((((int64_t)_4256) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4256) < ((uint64_t)(((uint64_t)(uint8_t)_4254)))))) {
    _4267__PHI_TEMPORARY = _4257;   /* for PHI node */
    goto _4355;
  } else {
    goto _4357;
  }

_4357:
  _4258 = *(uint64_t*)_4247;
  _4259 = *(uint64_t*)_4249;
  if ((((int64_t)_4259) > ((int64_t)_4258))) {
    goto _4358;
  } else {
    _4267__PHI_TEMPORARY = _4257;   /* for PHI node */
    goto _4355;
  }

_4358:
  _4260 = *(void**)_4246;
  _4261 = *(uint8_t*)(((&((uint8_t*)_4260)[((int64_t)_4258)])));
  if ((((int8_t)_4261) > ((int8_t)((uint8_t)-65)))) {
    _4267__PHI_TEMPORARY = _4257;   /* for PHI node */
    goto _4355;
  } else {
    goto _4359;
  }

_4359:
  _4262 = llvm_select_u32((((int64_t)_4258) < ((int64_t)_4259)), (((uint32_t)(uint8_t)_4261)), 0);
  _4263 = *(uint64_t*)_4247;
  *(uint64_t*)_4247 = (llvm_add_u64(_4263, 1));
  _4264 = llvm_neg_u64(_4256);
  _4265 = _4257 | (llvm_select_u32((((int64_t)_4256) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4264) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4262, (((uint32_t)_4264)))))), (llvm_select_u32((((uint64_t)_4256) > ((uint64_t)UINT64_C(31))), 0, (_4262 << (((uint32_t)_4256)))))));
  _4266 = llvm_add_u64(_4256, -8);
  _4256__PHI_TEMPORARY = _4266;   /* for PHI node */
  _4257__PHI_TEMPORARY = _4265;   /* for PHI node */
  goto _4356;

  } while (1); /* end of syntactic loop '' */
_4355:
  _4267 = _4267__PHI_TEMPORARY;
  _4268 = *(uint64_t*)_4243;
  _4269 = *(uint64_t*)_4245;
  _4270 = jsyn_cbe_fshl_i64(_4269, _4268, 32);
  _4271 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4267)), _4269, 32);
  *(uint64_t*)_4243 = _4270;
  *(uint64_t*)_4245 = _4271;
  _4272 = ((&((uint8_t*)_4238)[((int64_t)56)]));
  _4273 = *(uint64_t*)_4272;
  _4274 = ((&((uint8_t*)_4238)[((int64_t)64)]));
  _4275 = *(uint64_t*)_4274;
  _4276 = ((&((uint8_t*)_4238)[((int64_t)72)]));
  _4277 = *(uint64_t*)_4276;
  _4278 = *(void**)_4238;
  _4279 = *(uint64_t*)(((&((uint8_t*)_4278)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4238)[((int64_t)48)]))) = _4273;
  *(uint64_t*)_4272 = _4275;
  *(uint64_t*)_4274 = _4277;
  *(uint64_t*)_4276 = _4279;
  _4280 = *(uint64_t*)_4243;
  if (((_4280 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4360;
  } else {
    goto _4361;
  }

_4360:
  _4281 = *(void**)_4238;
  _4282 = ((&((uint8_t*)_4281)[((int64_t)16)]));
  _4283 = *(uint64_t*)_4282;
  _4284 = ((&((uint8_t*)_4281)[((int64_t)8)]));
  _4285 = *(uint64_t*)_4284;
  if ((((int64_t)_4285) > ((int64_t)_4283))) {
    goto _4362;
  } else {
    _4302__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4363;
  }

_4362:
  _4286 = *(void**)_4281;
  _4287 = *(uint8_t*)(((&((uint8_t*)_4286)[((int64_t)_4283)])));
  *(uint64_t*)_4282 = (llvm_add_u64(_4283, 1));
  _4288 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4287)), 0);
  _4289 = llvm_sub_u8(32, (llvm_shl_u8(_4288, 3)));
  _4290 = (((uint32_t)(uint8_t)_4287)) << 24;
  if ((((uint8_t)_4289) > ((uint8_t)((uint8_t)16)))) {
    _4302__PHI_TEMPORARY = _4290;   /* for PHI node */
    goto _4363;
  } else {
    _4291__PHI_TEMPORARY = 16;   /* for PHI node */
    _4292__PHI_TEMPORARY = _4290;   /* for PHI node */
    goto _4364;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4364:
  _4291 = _4291__PHI_TEMPORARY;
  _4292 = _4292__PHI_TEMPORARY;
  if (((((int64_t)_4291) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4291) < ((uint64_t)(((uint64_t)(uint8_t)_4289)))))) {
    _4302__PHI_TEMPORARY = _4292;   /* for PHI node */
    goto _4363;
  } else {
    goto _4365;
  }

_4365:
  _4293 = *(uint64_t*)_4282;
  _4294 = *(uint64_t*)_4284;
  if ((((int64_t)_4294) > ((int64_t)_4293))) {
    goto _4366;
  } else {
    _4302__PHI_TEMPORARY = _4292;   /* for PHI node */
    goto _4363;
  }

_4366:
  _4295 = *(void**)_4281;
  _4296 = *(uint8_t*)(((&((uint8_t*)_4295)[((int64_t)_4293)])));
  if ((((int8_t)_4296) > ((int8_t)((uint8_t)-65)))) {
    _4302__PHI_TEMPORARY = _4292;   /* for PHI node */
    goto _4363;
  } else {
    goto _4367;
  }

_4367:
  _4297 = llvm_select_u32((((int64_t)_4293) < ((int64_t)_4294)), (((uint32_t)(uint8_t)_4296)), 0);
  _4298 = *(uint64_t*)_4282;
  *(uint64_t*)_4282 = (llvm_add_u64(_4298, 1));
  _4299 = llvm_neg_u64(_4291);
  _4300 = _4292 | (llvm_select_u32((((int64_t)_4291) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4299) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4297, (((uint32_t)_4299)))))), (llvm_select_u32((((uint64_t)_4291) > ((uint64_t)UINT64_C(31))), 0, (_4297 << (((uint32_t)_4291)))))));
  _4301 = llvm_add_u64(_4291, -8);
  _4291__PHI_TEMPORARY = _4301;   /* for PHI node */
  _4292__PHI_TEMPORARY = _4300;   /* for PHI node */
  goto _4364;

  } while (1); /* end of syntactic loop '' */
_4363:
  _4302 = _4302__PHI_TEMPORARY;
  _4303 = *(uint64_t*)_4243;
  _4304 = *(uint64_t*)_4245;
  _4305 = jsyn_cbe_fshl_i64(_4304, _4303, 32);
  _4306 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4302)), _4304, 32);
  *(uint64_t*)_4243 = _4305;
  *(uint64_t*)_4245 = _4306;
  _4307 = ((&((uint8_t*)_4238)[((int64_t)56)]));
  _4308 = *(uint64_t*)_4307;
  _4309 = ((&((uint8_t*)_4238)[((int64_t)64)]));
  _4310 = *(uint64_t*)_4309;
  _4311 = ((&((uint8_t*)_4238)[((int64_t)72)]));
  _4312 = *(uint64_t*)_4311;
  _4313 = *(void**)_4238;
  _4314 = *(uint64_t*)(((&((uint8_t*)_4313)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4238)[((int64_t)48)]))) = _4308;
  *(uint64_t*)_4307 = _4310;
  *(uint64_t*)_4309 = _4312;
  *(uint64_t*)_4311 = _4314;
  julia_emit_20((&_4239), _4237, _4238, 71, 1);
  _4315__PHI_TEMPORARY = (&_4239);   /* for PHI node */
  goto _4368;

_4368:
  _4315 = _4315__PHI_TEMPORARY;
  _4316 = memcpy(_4236, _4315, 32);
  return;
_4361:
  julia_emit_20((&_4240), _4237, _4238, 670, 1);
  _4315__PHI_TEMPORARY = (&_4240);   /* for PHI node */
  goto _4368;

_4353:
  _4317 = *(uint64_t*)_4243;
  if (((_4317 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4369;
  } else {
    goto _4370;
  }

_4369:
  _4318 = *(void**)_4238;
  _4319 = ((&((uint8_t*)_4318)[((int64_t)16)]));
  _4320 = *(uint64_t*)_4319;
  _4321 = ((&((uint8_t*)_4318)[((int64_t)8)]));
  _4322 = *(uint64_t*)_4321;
  if ((((int64_t)_4322) > ((int64_t)_4320))) {
    goto _4371;
  } else {
    _4339__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4372;
  }

_4371:
  _4323 = *(void**)_4318;
  _4324 = *(uint8_t*)(((&((uint8_t*)_4323)[((int64_t)_4320)])));
  *(uint64_t*)_4319 = (llvm_add_u64(_4320, 1));
  _4325 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4324)), 0);
  _4326 = llvm_sub_u8(32, (llvm_shl_u8(_4325, 3)));
  _4327 = (((uint32_t)(uint8_t)_4324)) << 24;
  if ((((uint8_t)_4326) > ((uint8_t)((uint8_t)16)))) {
    _4339__PHI_TEMPORARY = _4327;   /* for PHI node */
    goto _4372;
  } else {
    _4328__PHI_TEMPORARY = 16;   /* for PHI node */
    _4329__PHI_TEMPORARY = _4327;   /* for PHI node */
    goto _4373;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4373:
  _4328 = _4328__PHI_TEMPORARY;
  _4329 = _4329__PHI_TEMPORARY;
  if (((((int64_t)_4328) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4328) < ((uint64_t)(((uint64_t)(uint8_t)_4326)))))) {
    _4339__PHI_TEMPORARY = _4329;   /* for PHI node */
    goto _4372;
  } else {
    goto _4374;
  }

_4374:
  _4330 = *(uint64_t*)_4319;
  _4331 = *(uint64_t*)_4321;
  if ((((int64_t)_4331) > ((int64_t)_4330))) {
    goto _4375;
  } else {
    _4339__PHI_TEMPORARY = _4329;   /* for PHI node */
    goto _4372;
  }

_4375:
  _4332 = *(void**)_4318;
  _4333 = *(uint8_t*)(((&((uint8_t*)_4332)[((int64_t)_4330)])));
  if ((((int8_t)_4333) > ((int8_t)((uint8_t)-65)))) {
    _4339__PHI_TEMPORARY = _4329;   /* for PHI node */
    goto _4372;
  } else {
    goto _4376;
  }

_4376:
  _4334 = llvm_select_u32((((int64_t)_4330) < ((int64_t)_4331)), (((uint32_t)(uint8_t)_4333)), 0);
  _4335 = *(uint64_t*)_4319;
  *(uint64_t*)_4319 = (llvm_add_u64(_4335, 1));
  _4336 = llvm_neg_u64(_4328);
  _4337 = _4329 | (llvm_select_u32((((int64_t)_4328) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4336) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4334, (((uint32_t)_4336)))))), (llvm_select_u32((((uint64_t)_4328) > ((uint64_t)UINT64_C(31))), 0, (_4334 << (((uint32_t)_4328)))))));
  _4338 = llvm_add_u64(_4328, -8);
  _4328__PHI_TEMPORARY = _4338;   /* for PHI node */
  _4329__PHI_TEMPORARY = _4337;   /* for PHI node */
  goto _4373;

  } while (1); /* end of syntactic loop '' */
_4372:
  _4339 = _4339__PHI_TEMPORARY;
  _4340 = *(uint64_t*)_4243;
  _4341 = *(uint64_t*)_4245;
  _4342 = jsyn_cbe_fshl_i64(_4341, _4340, 32);
  _4343 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4339)), _4341, 32);
  *(uint64_t*)_4243 = _4342;
  *(uint64_t*)_4245 = _4343;
  _4344 = ((&((uint8_t*)_4238)[((int64_t)56)]));
  _4345 = *(uint64_t*)_4344;
  _4346 = ((&((uint8_t*)_4238)[((int64_t)64)]));
  _4347 = *(uint64_t*)_4346;
  _4348 = ((&((uint8_t*)_4238)[((int64_t)72)]));
  _4349 = *(uint64_t*)_4348;
  _4350 = *(void**)_4238;
  _4351 = *(uint64_t*)(((&((uint8_t*)_4350)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4238)[((int64_t)48)]))) = _4345;
  *(uint64_t*)_4344 = _4347;
  *(uint64_t*)_4346 = _4349;
  *(uint64_t*)_4348 = _4351;
  julia_emit_20((&_4241), _4237, _4238, 71, 1);
  _4315__PHI_TEMPORARY = (&_4241);   /* for PHI node */
  goto _4368;

_4370:
  julia_emit_20((&_4242), _4237, _4238, 593, 1);
  _4315__PHI_TEMPORARY = (&_4242);   /* for PHI node */
  goto _4368;

}


static void julia_lex_backslash_44(void* _4377, void* _4378, void* _4379) {
  struct l_array_4_uint64_t _4380;    /* Address-exposed local */
  struct l_array_4_uint64_t _4381;    /* Address-exposed local */
  void* _4382;
  uint64_t _4383;
  void* _4384;
  void* _4385;
  void* _4386;
  uint64_t _4387;
  void* _4388;
  uint64_t _4389;
  void* _4390;
  uint8_t _4391;
  uint8_t _4392;
  uint8_t _4393;
  uint32_t _4394;
  uint64_t _4395;
  uint64_t _4395__PHI_TEMPORARY;
  uint32_t _4396;
  uint32_t _4396__PHI_TEMPORARY;
  uint64_t _4397;
  uint64_t _4398;
  void* _4399;
  uint8_t _4400;
  uint32_t _4401;
  uint64_t _4402;
  uint64_t _4403;
  uint32_t _4404;
  uint64_t _4405;
  uint32_t _4406;
  uint32_t _4406__PHI_TEMPORARY;
  uint64_t _4407;
  uint64_t _4408;
  uint64_t _4409;
  uint64_t _4410;
  void* _4411;
  uint64_t _4412;
  void* _4413;
  uint64_t _4414;
  void* _4415;
  uint64_t _4416;
  void* _4417;
  uint64_t _4418;
  void* _4419;
  void* _4419__PHI_TEMPORARY;
  void* _4420;

  _4382 = ((&((uint8_t*)_4379)[((int64_t)32)]));
  _4383 = *(uint64_t*)_4382;
  _4384 = ((&((uint8_t*)_4379)[((int64_t)40)]));
  if (((_4383 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4421;
  } else {
    goto _4422;
  }

_4421:
  _4385 = *(void**)_4379;
  _4386 = ((&((uint8_t*)_4385)[((int64_t)16)]));
  _4387 = *(uint64_t*)_4386;
  _4388 = ((&((uint8_t*)_4385)[((int64_t)8)]));
  _4389 = *(uint64_t*)_4388;
  if ((((int64_t)_4389) > ((int64_t)_4387))) {
    goto _4423;
  } else {
    _4406__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4424;
  }

_4423:
  _4390 = *(void**)_4385;
  _4391 = *(uint8_t*)(((&((uint8_t*)_4390)[((int64_t)_4387)])));
  *(uint64_t*)_4386 = (llvm_add_u64(_4387, 1));
  _4392 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4391)), 0);
  _4393 = llvm_sub_u8(32, (llvm_shl_u8(_4392, 3)));
  _4394 = (((uint32_t)(uint8_t)_4391)) << 24;
  if ((((uint8_t)_4393) > ((uint8_t)((uint8_t)16)))) {
    _4406__PHI_TEMPORARY = _4394;   /* for PHI node */
    goto _4424;
  } else {
    _4395__PHI_TEMPORARY = 16;   /* for PHI node */
    _4396__PHI_TEMPORARY = _4394;   /* for PHI node */
    goto _4425;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4425:
  _4395 = _4395__PHI_TEMPORARY;
  _4396 = _4396__PHI_TEMPORARY;
  if (((((int64_t)_4395) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4395) < ((uint64_t)(((uint64_t)(uint8_t)_4393)))))) {
    _4406__PHI_TEMPORARY = _4396;   /* for PHI node */
    goto _4424;
  } else {
    goto _4426;
  }

_4426:
  _4397 = *(uint64_t*)_4386;
  _4398 = *(uint64_t*)_4388;
  if ((((int64_t)_4398) > ((int64_t)_4397))) {
    goto _4427;
  } else {
    _4406__PHI_TEMPORARY = _4396;   /* for PHI node */
    goto _4424;
  }

_4427:
  _4399 = *(void**)_4385;
  _4400 = *(uint8_t*)(((&((uint8_t*)_4399)[((int64_t)_4397)])));
  if ((((int8_t)_4400) > ((int8_t)((uint8_t)-65)))) {
    _4406__PHI_TEMPORARY = _4396;   /* for PHI node */
    goto _4424;
  } else {
    goto _4428;
  }

_4428:
  _4401 = llvm_select_u32((((int64_t)_4397) < ((int64_t)_4398)), (((uint32_t)(uint8_t)_4400)), 0);
  _4402 = *(uint64_t*)_4386;
  *(uint64_t*)_4386 = (llvm_add_u64(_4402, 1));
  _4403 = llvm_neg_u64(_4395);
  _4404 = _4396 | (llvm_select_u32((((int64_t)_4395) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4403) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4401, (((uint32_t)_4403)))))), (llvm_select_u32((((uint64_t)_4395) > ((uint64_t)UINT64_C(31))), 0, (_4401 << (((uint32_t)_4395)))))));
  _4405 = llvm_add_u64(_4395, -8);
  _4395__PHI_TEMPORARY = _4405;   /* for PHI node */
  _4396__PHI_TEMPORARY = _4404;   /* for PHI node */
  goto _4425;

  } while (1); /* end of syntactic loop '' */
_4424:
  _4406 = _4406__PHI_TEMPORARY;
  _4407 = *(uint64_t*)_4382;
  _4408 = *(uint64_t*)_4384;
  _4409 = jsyn_cbe_fshl_i64(_4408, _4407, 32);
  _4410 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4406)), _4408, 32);
  *(uint64_t*)_4382 = _4409;
  *(uint64_t*)_4384 = _4410;
  _4411 = ((&((uint8_t*)_4379)[((int64_t)56)]));
  _4412 = *(uint64_t*)_4411;
  _4413 = ((&((uint8_t*)_4379)[((int64_t)64)]));
  _4414 = *(uint64_t*)_4413;
  _4415 = ((&((uint8_t*)_4379)[((int64_t)72)]));
  _4416 = *(uint64_t*)_4415;
  _4417 = *(void**)_4379;
  _4418 = *(uint64_t*)(((&((uint8_t*)_4417)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4379)[((int64_t)48)]))) = _4412;
  *(uint64_t*)_4411 = _4414;
  *(uint64_t*)_4413 = _4416;
  *(uint64_t*)_4415 = _4418;
  julia_emit_20((&_4380), _4378, _4379, 71, 1);
  _4419__PHI_TEMPORARY = (&_4380);   /* for PHI node */
  goto _4429;

_4429:
  _4419 = _4419__PHI_TEMPORARY;
  _4420 = memcpy(_4377, _4419, 32);
  return;
_4422:
  julia_emit_20((&_4381), _4378, _4379, 599, 1);
  _4419__PHI_TEMPORARY = (&_4381);   /* for PHI node */
  goto _4429;

}


static void julia_lex_dot_45(void* _4430, void* _4431, void* _4432) {
  struct l_array_4_uint64_t _4433;    /* Address-exposed local */
  struct l_array_4_uint64_t _4434;    /* Address-exposed local */
  struct l_array_4_uint64_t _4435;    /* Address-exposed local */
  struct l_array_4_uint64_t _4436;    /* Address-exposed local */
  struct l_array_4_uint64_t _4437;    /* Address-exposed local */
  struct l_array_4_uint64_t _4438;    /* Address-exposed local */
  struct l_array_4_uint64_t _4439;    /* Address-exposed local */
  struct l_array_4_uint64_t _4440;    /* Address-exposed local */
  void* _4441;
  uint64_t _4442;
  void* _4443;
  void* _4444;
  void* _4445;
  uint64_t _4446;
  void* _4447;
  uint64_t _4448;
  void* _4449;
  uint8_t _4450;
  uint8_t _4451;
  uint8_t _4452;
  uint32_t _4453;
  uint64_t _4454;
  uint64_t _4454__PHI_TEMPORARY;
  uint32_t _4455;
  uint32_t _4455__PHI_TEMPORARY;
  uint64_t _4456;
  uint64_t _4457;
  void* _4458;
  uint8_t _4459;
  uint32_t _4460;
  uint64_t _4461;
  uint64_t _4462;
  uint32_t _4463;
  uint64_t _4464;
  uint32_t _4465;
  uint32_t _4465__PHI_TEMPORARY;
  uint64_t _4466;
  uint64_t _4467;
  uint64_t _4468;
  uint64_t _4469;
  void* _4470;
  uint64_t _4471;
  void* _4472;
  uint64_t _4473;
  void* _4474;
  uint64_t _4475;
  void* _4476;
  uint64_t _4477;
  uint64_t _4478;
  void* _4479;
  void* _4480;
  uint64_t _4481;
  void* _4482;
  uint64_t _4483;
  void* _4484;
  uint8_t _4485;
  uint8_t _4486;
  uint8_t _4487;
  uint32_t _4488;
  uint64_t _4489;
  uint64_t _4489__PHI_TEMPORARY;
  uint32_t _4490;
  uint32_t _4490__PHI_TEMPORARY;
  uint64_t _4491;
  uint64_t _4492;
  void* _4493;
  uint8_t _4494;
  uint32_t _4495;
  uint64_t _4496;
  uint64_t _4497;
  uint32_t _4498;
  uint64_t _4499;
  uint32_t _4500;
  uint32_t _4500__PHI_TEMPORARY;
  uint64_t _4501;
  uint64_t _4502;
  uint64_t _4503;
  uint64_t _4504;
  void* _4505;
  uint64_t _4506;
  void* _4507;
  uint64_t _4508;
  void* _4509;
  uint64_t _4510;
  void* _4511;
  uint64_t _4512;
  uint16_t _4513;
  void* _4514;
  void* _4514__PHI_TEMPORARY;
  void* _4515;
  uint64_t _4516;
  uint64_t _4517;
  uint8_t _4518;
  void* _4519;
  void* _4520;
  uint64_t _4521;
  void* _4522;
  uint64_t _4523;
  void* _4524;
  uint8_t _4525;
  uint8_t _4526;
  uint8_t _4527;
  uint32_t _4528;
  uint64_t _4529;
  uint64_t _4529__PHI_TEMPORARY;
  uint32_t _4530;
  uint32_t _4530__PHI_TEMPORARY;
  uint64_t _4531;
  uint64_t _4532;
  void* _4533;
  uint8_t _4534;
  uint32_t _4535;
  uint64_t _4536;
  uint64_t _4537;
  uint32_t _4538;
  uint64_t _4539;
  uint32_t _4540;
  uint32_t _4540__PHI_TEMPORARY;
  uint64_t _4541;
  uint64_t _4542;
  uint64_t _4543;
  uint64_t _4544;
  void* _4545;
  uint64_t _4546;
  void* _4547;
  uint64_t _4548;
  void* _4549;
  uint64_t _4550;
  void* _4551;
  uint64_t _4552;
  uint16_t _4553;
  uint64_t _4554;
  uint64_t _4555;
  uint16_t _4556;

  _4441 = ((&((uint8_t*)_4432)[((int64_t)32)]));
  _4442 = *(uint64_t*)_4441;
  _4443 = ((&((uint8_t*)_4432)[((int64_t)40)]));
  if (((_4442 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _4557;
  } else {
    goto _4558;
  }

_4557:
  _4444 = *(void**)_4432;
  _4445 = ((&((uint8_t*)_4444)[((int64_t)16)]));
  _4446 = *(uint64_t*)_4445;
  _4447 = ((&((uint8_t*)_4444)[((int64_t)8)]));
  _4448 = *(uint64_t*)_4447;
  if ((((int64_t)_4448) > ((int64_t)_4446))) {
    goto _4559;
  } else {
    _4465__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4560;
  }

_4559:
  _4449 = *(void**)_4444;
  _4450 = *(uint8_t*)(((&((uint8_t*)_4449)[((int64_t)_4446)])));
  *(uint64_t*)_4445 = (llvm_add_u64(_4446, 1));
  _4451 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4450)), 0);
  _4452 = llvm_sub_u8(32, (llvm_shl_u8(_4451, 3)));
  _4453 = (((uint32_t)(uint8_t)_4450)) << 24;
  if ((((uint8_t)_4452) > ((uint8_t)((uint8_t)16)))) {
    _4465__PHI_TEMPORARY = _4453;   /* for PHI node */
    goto _4560;
  } else {
    _4454__PHI_TEMPORARY = 16;   /* for PHI node */
    _4455__PHI_TEMPORARY = _4453;   /* for PHI node */
    goto _4561;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4561:
  _4454 = _4454__PHI_TEMPORARY;
  _4455 = _4455__PHI_TEMPORARY;
  if (((((int64_t)_4454) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4454) < ((uint64_t)(((uint64_t)(uint8_t)_4452)))))) {
    _4465__PHI_TEMPORARY = _4455;   /* for PHI node */
    goto _4560;
  } else {
    goto _4562;
  }

_4562:
  _4456 = *(uint64_t*)_4445;
  _4457 = *(uint64_t*)_4447;
  if ((((int64_t)_4457) > ((int64_t)_4456))) {
    goto _4563;
  } else {
    _4465__PHI_TEMPORARY = _4455;   /* for PHI node */
    goto _4560;
  }

_4563:
  _4458 = *(void**)_4444;
  _4459 = *(uint8_t*)(((&((uint8_t*)_4458)[((int64_t)_4456)])));
  if ((((int8_t)_4459) > ((int8_t)((uint8_t)-65)))) {
    _4465__PHI_TEMPORARY = _4455;   /* for PHI node */
    goto _4560;
  } else {
    goto _4564;
  }

_4564:
  _4460 = llvm_select_u32((((int64_t)_4456) < ((int64_t)_4457)), (((uint32_t)(uint8_t)_4459)), 0);
  _4461 = *(uint64_t*)_4445;
  *(uint64_t*)_4445 = (llvm_add_u64(_4461, 1));
  _4462 = llvm_neg_u64(_4454);
  _4463 = _4455 | (llvm_select_u32((((int64_t)_4454) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4462) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4460, (((uint32_t)_4462)))))), (llvm_select_u32((((uint64_t)_4454) > ((uint64_t)UINT64_C(31))), 0, (_4460 << (((uint32_t)_4454)))))));
  _4464 = llvm_add_u64(_4454, -8);
  _4454__PHI_TEMPORARY = _4464;   /* for PHI node */
  _4455__PHI_TEMPORARY = _4463;   /* for PHI node */
  goto _4561;

  } while (1); /* end of syntactic loop '' */
_4560:
  _4465 = _4465__PHI_TEMPORARY;
  _4466 = *(uint64_t*)_4441;
  _4467 = *(uint64_t*)_4443;
  _4468 = jsyn_cbe_fshl_i64(_4467, _4466, 32);
  _4469 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4465)), _4467, 32);
  *(uint64_t*)_4441 = _4468;
  *(uint64_t*)_4443 = _4469;
  _4470 = ((&((uint8_t*)_4432)[((int64_t)56)]));
  _4471 = *(uint64_t*)_4470;
  _4472 = ((&((uint8_t*)_4432)[((int64_t)64)]));
  _4473 = *(uint64_t*)_4472;
  _4474 = ((&((uint8_t*)_4432)[((int64_t)72)]));
  _4475 = *(uint64_t*)_4474;
  _4476 = *(void**)_4432;
  _4477 = *(uint64_t*)(((&((uint8_t*)_4476)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4432)[((int64_t)48)]))) = _4471;
  *(uint64_t*)_4470 = _4473;
  *(uint64_t*)_4472 = _4475;
  *(uint64_t*)_4474 = _4477;
  _4478 = *(uint64_t*)_4441;
  if (((_4478 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _4565;
  } else {
    goto _4566;
  }

_4565:
  _4479 = *(void**)_4432;
  _4480 = ((&((uint8_t*)_4479)[((int64_t)16)]));
  _4481 = *(uint64_t*)_4480;
  _4482 = ((&((uint8_t*)_4479)[((int64_t)8)]));
  _4483 = *(uint64_t*)_4482;
  if ((((int64_t)_4483) > ((int64_t)_4481))) {
    goto _4567;
  } else {
    _4500__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4568;
  }

_4567:
  _4484 = *(void**)_4479;
  _4485 = *(uint8_t*)(((&((uint8_t*)_4484)[((int64_t)_4481)])));
  *(uint64_t*)_4480 = (llvm_add_u64(_4481, 1));
  _4486 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4485)), 0);
  _4487 = llvm_sub_u8(32, (llvm_shl_u8(_4486, 3)));
  _4488 = (((uint32_t)(uint8_t)_4485)) << 24;
  if ((((uint8_t)_4487) > ((uint8_t)((uint8_t)16)))) {
    _4500__PHI_TEMPORARY = _4488;   /* for PHI node */
    goto _4568;
  } else {
    _4489__PHI_TEMPORARY = 16;   /* for PHI node */
    _4490__PHI_TEMPORARY = _4488;   /* for PHI node */
    goto _4569;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4569:
  _4489 = _4489__PHI_TEMPORARY;
  _4490 = _4490__PHI_TEMPORARY;
  if (((((int64_t)_4489) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4489) < ((uint64_t)(((uint64_t)(uint8_t)_4487)))))) {
    _4500__PHI_TEMPORARY = _4490;   /* for PHI node */
    goto _4568;
  } else {
    goto _4570;
  }

_4570:
  _4491 = *(uint64_t*)_4480;
  _4492 = *(uint64_t*)_4482;
  if ((((int64_t)_4492) > ((int64_t)_4491))) {
    goto _4571;
  } else {
    _4500__PHI_TEMPORARY = _4490;   /* for PHI node */
    goto _4568;
  }

_4571:
  _4493 = *(void**)_4479;
  _4494 = *(uint8_t*)(((&((uint8_t*)_4493)[((int64_t)_4491)])));
  if ((((int8_t)_4494) > ((int8_t)((uint8_t)-65)))) {
    _4500__PHI_TEMPORARY = _4490;   /* for PHI node */
    goto _4568;
  } else {
    goto _4572;
  }

_4572:
  _4495 = llvm_select_u32((((int64_t)_4491) < ((int64_t)_4492)), (((uint32_t)(uint8_t)_4494)), 0);
  _4496 = *(uint64_t*)_4480;
  *(uint64_t*)_4480 = (llvm_add_u64(_4496, 1));
  _4497 = llvm_neg_u64(_4489);
  _4498 = _4490 | (llvm_select_u32((((int64_t)_4489) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4497) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4495, (((uint32_t)_4497)))))), (llvm_select_u32((((uint64_t)_4489) > ((uint64_t)UINT64_C(31))), 0, (_4495 << (((uint32_t)_4489)))))));
  _4499 = llvm_add_u64(_4489, -8);
  _4489__PHI_TEMPORARY = _4499;   /* for PHI node */
  _4490__PHI_TEMPORARY = _4498;   /* for PHI node */
  goto _4569;

  } while (1); /* end of syntactic loop '' */
_4568:
  _4500 = _4500__PHI_TEMPORARY;
  _4501 = *(uint64_t*)_4441;
  _4502 = *(uint64_t*)_4443;
  _4503 = jsyn_cbe_fshl_i64(_4502, _4501, 32);
  _4504 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4500)), _4502, 32);
  *(uint64_t*)_4441 = _4503;
  *(uint64_t*)_4443 = _4504;
  _4505 = ((&((uint8_t*)_4432)[((int64_t)56)]));
  _4506 = *(uint64_t*)_4505;
  _4507 = ((&((uint8_t*)_4432)[((int64_t)64)]));
  _4508 = *(uint64_t*)_4507;
  _4509 = ((&((uint8_t*)_4432)[((int64_t)72)]));
  _4510 = *(uint64_t*)_4509;
  _4511 = *(void**)_4432;
  _4512 = *(uint64_t*)(((&((uint8_t*)_4511)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4432)[((int64_t)48)]))) = _4506;
  *(uint64_t*)_4505 = _4508;
  *(uint64_t*)_4507 = _4510;
  *(uint64_t*)_4509 = _4512;
  _4513 = *(uint16_t*)(((&((uint8_t*)_4432)[((int64_t)16)])));
  if ((_4513 == ((uint16_t)53))) {
    goto _4573;
  } else {
    goto _4574;
  }

_4575:
  _4514 = _4514__PHI_TEMPORARY;
  _4515 = memcpy(_4430, _4514, 32);
  return;
_4573:
  julia_emit_20((&_4433), _4431, _4432, 3, 1);
  _4514__PHI_TEMPORARY = (&_4433);   /* for PHI node */
  goto _4575;

_4574:
  julia_emit_20((&_4434), _4431, _4432, 68, 1);
  _4514__PHI_TEMPORARY = (&_4434);   /* for PHI node */
  goto _4575;

_4566:
  _4516 = *(uint64_t*)_4441;
  _4517 = llvm_lshr_u64(_4516, 32);
  switch ((((uint32_t)_4517))) {
  default:
    goto _4576;
  case 1056964608u:
    goto _4577;
  case 603979776u:
    goto _4577;
  case 973078528u:
    goto _4577;
  case 654311424u:
    goto _4577;
  }

_4576:
  _4518 = julia_is_operator_start_char_23(_4431, (((uint32_t)_4517)));
  if ((((bool)_4518&1u))) {
    goto _4578;
  } else {
    goto _4577;
  }

_4578:
  _4519 = *(void**)_4432;
  _4520 = ((&((uint8_t*)_4519)[((int64_t)16)]));
  _4521 = *(uint64_t*)_4520;
  _4522 = ((&((uint8_t*)_4519)[((int64_t)8)]));
  _4523 = *(uint64_t*)_4522;
  if ((((int64_t)_4523) > ((int64_t)_4521))) {
    goto _4579;
  } else {
    _4540__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4580;
  }

_4579:
  _4524 = *(void**)_4519;
  _4525 = *(uint8_t*)(((&((uint8_t*)_4524)[((int64_t)_4521)])));
  *(uint64_t*)_4520 = (llvm_add_u64(_4521, 1));
  _4526 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4525)), 0);
  _4527 = llvm_sub_u8(32, (llvm_shl_u8(_4526, 3)));
  _4528 = (((uint32_t)(uint8_t)_4525)) << 24;
  if ((((uint8_t)_4527) > ((uint8_t)((uint8_t)16)))) {
    _4540__PHI_TEMPORARY = _4528;   /* for PHI node */
    goto _4580;
  } else {
    _4529__PHI_TEMPORARY = 16;   /* for PHI node */
    _4530__PHI_TEMPORARY = _4528;   /* for PHI node */
    goto _4581;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4581:
  _4529 = _4529__PHI_TEMPORARY;
  _4530 = _4530__PHI_TEMPORARY;
  if (((((int64_t)_4529) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4529) < ((uint64_t)(((uint64_t)(uint8_t)_4527)))))) {
    _4540__PHI_TEMPORARY = _4530;   /* for PHI node */
    goto _4580;
  } else {
    goto _4582;
  }

_4582:
  _4531 = *(uint64_t*)_4520;
  _4532 = *(uint64_t*)_4522;
  if ((((int64_t)_4532) > ((int64_t)_4531))) {
    goto _4583;
  } else {
    _4540__PHI_TEMPORARY = _4530;   /* for PHI node */
    goto _4580;
  }

_4583:
  _4533 = *(void**)_4519;
  _4534 = *(uint8_t*)(((&((uint8_t*)_4533)[((int64_t)_4531)])));
  if ((((int8_t)_4534) > ((int8_t)((uint8_t)-65)))) {
    _4540__PHI_TEMPORARY = _4530;   /* for PHI node */
    goto _4580;
  } else {
    goto _4584;
  }

_4584:
  _4535 = llvm_select_u32((((int64_t)_4531) < ((int64_t)_4532)), (((uint32_t)(uint8_t)_4534)), 0);
  _4536 = *(uint64_t*)_4520;
  *(uint64_t*)_4520 = (llvm_add_u64(_4536, 1));
  _4537 = llvm_neg_u64(_4529);
  _4538 = _4530 | (llvm_select_u32((((int64_t)_4529) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4537) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4535, (((uint32_t)_4537)))))), (llvm_select_u32((((uint64_t)_4529) > ((uint64_t)UINT64_C(31))), 0, (_4535 << (((uint32_t)_4529)))))));
  _4539 = llvm_add_u64(_4529, -8);
  _4529__PHI_TEMPORARY = _4539;   /* for PHI node */
  _4530__PHI_TEMPORARY = _4538;   /* for PHI node */
  goto _4581;

  } while (1); /* end of syntactic loop '' */
_4580:
  _4540 = _4540__PHI_TEMPORARY;
  _4541 = *(uint64_t*)_4441;
  _4542 = *(uint64_t*)_4443;
  _4543 = jsyn_cbe_fshl_i64(_4542, _4541, 32);
  _4544 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4540)), _4542, 32);
  *(uint64_t*)_4441 = _4543;
  *(uint64_t*)_4443 = _4544;
  _4545 = ((&((uint8_t*)_4432)[((int64_t)56)]));
  _4546 = *(uint64_t*)_4545;
  _4547 = ((&((uint8_t*)_4432)[((int64_t)64)]));
  _4548 = *(uint64_t*)_4547;
  _4549 = ((&((uint8_t*)_4432)[((int64_t)72)]));
  _4550 = *(uint64_t*)_4549;
  _4551 = *(void**)_4432;
  _4552 = *(uint64_t*)(((&((uint8_t*)_4551)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4432)[((int64_t)48)]))) = _4546;
  *(uint64_t*)_4545 = _4548;
  *(uint64_t*)_4547 = _4550;
  *(uint64_t*)_4549 = _4552;
  julia_emit_20((&_4435), _4431, _4432, 66, 1);
  _4514__PHI_TEMPORARY = (&_4435);   /* for PHI node */
  goto _4575;

_4577:
  _4553 = *(uint16_t*)(((&((uint8_t*)_4432)[((int64_t)16)])));
  if ((_4553 == ((uint16_t)53))) {
    goto _4585;
  } else {
    goto _4586;
  }

_4585:
  julia_emit_20((&_4436), _4431, _4432, 3, 1);
  _4514__PHI_TEMPORARY = (&_4436);   /* for PHI node */
  goto _4575;

_4586:
  julia_emit_20((&_4437), _4431, _4432, 527, 1);
  _4514__PHI_TEMPORARY = (&_4437);   /* for PHI node */
  goto _4575;

_4558:
  _4554 = *(uint64_t*)_4441;
  _4555 = llvm_lshr_u64(_4554, 32);
  if ((((((uint64_t)_4554) < ((uint64_t)UINT64_C(3458764518115508224))) & (_4555 != UINT64_C(805306368))) | ((((uint64_t)_4554) > ((uint64_t)UINT64_C(4107282860161892351))) & (_4555 != UINT64_C(956301312))))) {
    goto _4587;
  } else {
    goto _4588;
  }

_4588:
  julia_lex_digit_49((&_4438), _4431, _4432, 48);
  _4514__PHI_TEMPORARY = (&_4438);   /* for PHI node */
  goto _4575;

_4587:
  _4556 = *(uint16_t*)(((&((uint8_t*)_4432)[((int64_t)16)])));
  if ((_4556 == ((uint16_t)53))) {
    goto _4589;
  } else {
    goto _4590;
  }

_4589:
  julia_emit_20((&_4439), _4431, _4432, 3, 1);
  _4514__PHI_TEMPORARY = (&_4439);   /* for PHI node */
  goto _4575;

_4590:
  julia_emit_20((&_4440), _4431, _4432, 707, 1);
  _4514__PHI_TEMPORARY = (&_4440);   /* for PHI node */
  goto _4575;

}


static void julia_lex_plus_46(void* _4591, void* _4592, void* _4593) {
  struct l_array_4_uint64_t _4594;    /* Address-exposed local */
  struct l_array_4_uint64_t _4595;    /* Address-exposed local */
  struct l_array_4_uint64_t _4596;    /* Address-exposed local */
  void* _4597;
  uint64_t _4598;
  void* _4599;
  void* _4600;
  void* _4601;
  uint64_t _4602;
  void* _4603;
  uint64_t _4604;
  void* _4605;
  uint8_t _4606;
  uint8_t _4607;
  uint8_t _4608;
  uint32_t _4609;
  uint64_t _4610;
  uint64_t _4610__PHI_TEMPORARY;
  uint32_t _4611;
  uint32_t _4611__PHI_TEMPORARY;
  uint64_t _4612;
  uint64_t _4613;
  void* _4614;
  uint8_t _4615;
  uint32_t _4616;
  uint64_t _4617;
  uint64_t _4618;
  uint32_t _4619;
  uint64_t _4620;
  uint32_t _4621;
  uint32_t _4621__PHI_TEMPORARY;
  uint64_t _4622;
  uint64_t _4623;
  uint64_t _4624;
  uint64_t _4625;
  void* _4626;
  uint64_t _4627;
  void* _4628;
  uint64_t _4629;
  void* _4630;
  uint64_t _4631;
  void* _4632;
  uint64_t _4633;
  void* _4634;
  void* _4634__PHI_TEMPORARY;
  void* _4635;
  uint64_t _4636;
  void* _4637;
  void* _4638;
  uint64_t _4639;
  void* _4640;
  uint64_t _4641;
  void* _4642;
  uint8_t _4643;
  uint8_t _4644;
  uint8_t _4645;
  uint32_t _4646;
  uint64_t _4647;
  uint64_t _4647__PHI_TEMPORARY;
  uint32_t _4648;
  uint32_t _4648__PHI_TEMPORARY;
  uint64_t _4649;
  uint64_t _4650;
  void* _4651;
  uint8_t _4652;
  uint32_t _4653;
  uint64_t _4654;
  uint64_t _4655;
  uint32_t _4656;
  uint64_t _4657;
  uint32_t _4658;
  uint32_t _4658__PHI_TEMPORARY;
  uint64_t _4659;
  uint64_t _4660;
  uint64_t _4661;
  uint64_t _4662;
  void* _4663;
  uint64_t _4664;
  void* _4665;
  uint64_t _4666;
  void* _4667;
  uint64_t _4668;
  void* _4669;
  uint64_t _4670;

  _4597 = ((&((uint8_t*)_4593)[((int64_t)32)]));
  _4598 = *(uint64_t*)_4597;
  _4599 = ((&((uint8_t*)_4593)[((int64_t)40)]));
  if (((_4598 & INT64_C(-4294967296)) == UINT64_C(3098476543630901248))) {
    goto _4671;
  } else {
    goto _4672;
  }

_4671:
  _4600 = *(void**)_4593;
  _4601 = ((&((uint8_t*)_4600)[((int64_t)16)]));
  _4602 = *(uint64_t*)_4601;
  _4603 = ((&((uint8_t*)_4600)[((int64_t)8)]));
  _4604 = *(uint64_t*)_4603;
  if ((((int64_t)_4604) > ((int64_t)_4602))) {
    goto _4673;
  } else {
    _4621__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4674;
  }

_4673:
  _4605 = *(void**)_4600;
  _4606 = *(uint8_t*)(((&((uint8_t*)_4605)[((int64_t)_4602)])));
  *(uint64_t*)_4601 = (llvm_add_u64(_4602, 1));
  _4607 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4606)), 0);
  _4608 = llvm_sub_u8(32, (llvm_shl_u8(_4607, 3)));
  _4609 = (((uint32_t)(uint8_t)_4606)) << 24;
  if ((((uint8_t)_4608) > ((uint8_t)((uint8_t)16)))) {
    _4621__PHI_TEMPORARY = _4609;   /* for PHI node */
    goto _4674;
  } else {
    _4610__PHI_TEMPORARY = 16;   /* for PHI node */
    _4611__PHI_TEMPORARY = _4609;   /* for PHI node */
    goto _4675;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4675:
  _4610 = _4610__PHI_TEMPORARY;
  _4611 = _4611__PHI_TEMPORARY;
  if (((((int64_t)_4610) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4610) < ((uint64_t)(((uint64_t)(uint8_t)_4608)))))) {
    _4621__PHI_TEMPORARY = _4611;   /* for PHI node */
    goto _4674;
  } else {
    goto _4676;
  }

_4676:
  _4612 = *(uint64_t*)_4601;
  _4613 = *(uint64_t*)_4603;
  if ((((int64_t)_4613) > ((int64_t)_4612))) {
    goto _4677;
  } else {
    _4621__PHI_TEMPORARY = _4611;   /* for PHI node */
    goto _4674;
  }

_4677:
  _4614 = *(void**)_4600;
  _4615 = *(uint8_t*)(((&((uint8_t*)_4614)[((int64_t)_4612)])));
  if ((((int8_t)_4615) > ((int8_t)((uint8_t)-65)))) {
    _4621__PHI_TEMPORARY = _4611;   /* for PHI node */
    goto _4674;
  } else {
    goto _4678;
  }

_4678:
  _4616 = llvm_select_u32((((int64_t)_4612) < ((int64_t)_4613)), (((uint32_t)(uint8_t)_4615)), 0);
  _4617 = *(uint64_t*)_4601;
  *(uint64_t*)_4601 = (llvm_add_u64(_4617, 1));
  _4618 = llvm_neg_u64(_4610);
  _4619 = _4611 | (llvm_select_u32((((int64_t)_4610) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4618) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4616, (((uint32_t)_4618)))))), (llvm_select_u32((((uint64_t)_4610) > ((uint64_t)UINT64_C(31))), 0, (_4616 << (((uint32_t)_4610)))))));
  _4620 = llvm_add_u64(_4610, -8);
  _4610__PHI_TEMPORARY = _4620;   /* for PHI node */
  _4611__PHI_TEMPORARY = _4619;   /* for PHI node */
  goto _4675;

  } while (1); /* end of syntactic loop '' */
_4674:
  _4621 = _4621__PHI_TEMPORARY;
  _4622 = *(uint64_t*)_4597;
  _4623 = *(uint64_t*)_4599;
  _4624 = jsyn_cbe_fshl_i64(_4623, _4622, 32);
  _4625 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4621)), _4623, 32);
  *(uint64_t*)_4597 = _4624;
  *(uint64_t*)_4599 = _4625;
  _4626 = ((&((uint8_t*)_4593)[((int64_t)56)]));
  _4627 = *(uint64_t*)_4626;
  _4628 = ((&((uint8_t*)_4593)[((int64_t)64)]));
  _4629 = *(uint64_t*)_4628;
  _4630 = ((&((uint8_t*)_4593)[((int64_t)72)]));
  _4631 = *(uint64_t*)_4630;
  _4632 = *(void**)_4593;
  _4633 = *(uint64_t*)(((&((uint8_t*)_4632)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4593)[((int64_t)48)]))) = _4627;
  *(uint64_t*)_4626 = _4629;
  *(uint64_t*)_4628 = _4631;
  *(uint64_t*)_4630 = _4633;
  julia_emit_20((&_4594), _4592, _4593, 537, 1);
  _4634__PHI_TEMPORARY = (&_4594);   /* for PHI node */
  goto _4679;

_4679:
  _4634 = _4634__PHI_TEMPORARY;
  _4635 = memcpy(_4591, _4634, 32);
  return;
_4672:
  _4636 = *(uint64_t*)_4597;
  if (((_4636 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4680;
  } else {
    goto _4681;
  }

_4680:
  _4637 = *(void**)_4593;
  _4638 = ((&((uint8_t*)_4637)[((int64_t)16)]));
  _4639 = *(uint64_t*)_4638;
  _4640 = ((&((uint8_t*)_4637)[((int64_t)8)]));
  _4641 = *(uint64_t*)_4640;
  if ((((int64_t)_4641) > ((int64_t)_4639))) {
    goto _4682;
  } else {
    _4658__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4683;
  }

_4682:
  _4642 = *(void**)_4637;
  _4643 = *(uint8_t*)(((&((uint8_t*)_4642)[((int64_t)_4639)])));
  *(uint64_t*)_4638 = (llvm_add_u64(_4639, 1));
  _4644 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4643)), 0);
  _4645 = llvm_sub_u8(32, (llvm_shl_u8(_4644, 3)));
  _4646 = (((uint32_t)(uint8_t)_4643)) << 24;
  if ((((uint8_t)_4645) > ((uint8_t)((uint8_t)16)))) {
    _4658__PHI_TEMPORARY = _4646;   /* for PHI node */
    goto _4683;
  } else {
    _4647__PHI_TEMPORARY = 16;   /* for PHI node */
    _4648__PHI_TEMPORARY = _4646;   /* for PHI node */
    goto _4684;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4684:
  _4647 = _4647__PHI_TEMPORARY;
  _4648 = _4648__PHI_TEMPORARY;
  if (((((int64_t)_4647) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4647) < ((uint64_t)(((uint64_t)(uint8_t)_4645)))))) {
    _4658__PHI_TEMPORARY = _4648;   /* for PHI node */
    goto _4683;
  } else {
    goto _4685;
  }

_4685:
  _4649 = *(uint64_t*)_4638;
  _4650 = *(uint64_t*)_4640;
  if ((((int64_t)_4650) > ((int64_t)_4649))) {
    goto _4686;
  } else {
    _4658__PHI_TEMPORARY = _4648;   /* for PHI node */
    goto _4683;
  }

_4686:
  _4651 = *(void**)_4637;
  _4652 = *(uint8_t*)(((&((uint8_t*)_4651)[((int64_t)_4649)])));
  if ((((int8_t)_4652) > ((int8_t)((uint8_t)-65)))) {
    _4658__PHI_TEMPORARY = _4648;   /* for PHI node */
    goto _4683;
  } else {
    goto _4687;
  }

_4687:
  _4653 = llvm_select_u32((((int64_t)_4649) < ((int64_t)_4650)), (((uint32_t)(uint8_t)_4652)), 0);
  _4654 = *(uint64_t*)_4638;
  *(uint64_t*)_4638 = (llvm_add_u64(_4654, 1));
  _4655 = llvm_neg_u64(_4647);
  _4656 = _4648 | (llvm_select_u32((((int64_t)_4647) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4655) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4653, (((uint32_t)_4655)))))), (llvm_select_u32((((uint64_t)_4647) > ((uint64_t)UINT64_C(31))), 0, (_4653 << (((uint32_t)_4647)))))));
  _4657 = llvm_add_u64(_4647, -8);
  _4647__PHI_TEMPORARY = _4657;   /* for PHI node */
  _4648__PHI_TEMPORARY = _4656;   /* for PHI node */
  goto _4684;

  } while (1); /* end of syntactic loop '' */
_4683:
  _4658 = _4658__PHI_TEMPORARY;
  _4659 = *(uint64_t*)_4597;
  _4660 = *(uint64_t*)_4599;
  _4661 = jsyn_cbe_fshl_i64(_4660, _4659, 32);
  _4662 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4658)), _4660, 32);
  *(uint64_t*)_4597 = _4661;
  *(uint64_t*)_4599 = _4662;
  _4663 = ((&((uint8_t*)_4593)[((int64_t)56)]));
  _4664 = *(uint64_t*)_4663;
  _4665 = ((&((uint8_t*)_4593)[((int64_t)64)]));
  _4666 = *(uint64_t*)_4665;
  _4667 = ((&((uint8_t*)_4593)[((int64_t)72)]));
  _4668 = *(uint64_t*)_4667;
  _4669 = *(void**)_4593;
  _4670 = *(uint64_t*)(((&((uint8_t*)_4669)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4593)[((int64_t)48)]))) = _4664;
  *(uint64_t*)_4663 = _4666;
  *(uint64_t*)_4665 = _4668;
  *(uint64_t*)_4667 = _4670;
  julia_emit_20((&_4595), _4592, _4593, 71, 1);
  _4634__PHI_TEMPORARY = (&_4595);   /* for PHI node */
  goto _4679;

_4681:
  julia_emit_20((&_4596), _4592, _4593, 535, 1);
  _4634__PHI_TEMPORARY = (&_4596);   /* for PHI node */
  goto _4679;

}


static void julia_lex_minus_47(void* _4688, void* _4689, void* _4690) {
  struct l_array_4_uint64_t _4691;    /* Address-exposed local */
  struct l_array_4_uint64_t _4692;    /* Address-exposed local */
  struct l_array_4_uint64_t _4693;    /* Address-exposed local */
  struct l_array_4_uint64_t _4694;    /* Address-exposed local */
  struct l_array_4_uint64_t _4695;    /* Address-exposed local */
  void* _4696;
  uint64_t _4697;
  void* _4698;
  void* _4699;
  void* _4700;
  uint64_t _4701;
  void* _4702;
  uint64_t _4703;
  void* _4704;
  uint8_t _4705;
  uint8_t _4706;
  uint8_t _4707;
  uint32_t _4708;
  uint64_t _4709;
  uint64_t _4709__PHI_TEMPORARY;
  uint32_t _4710;
  uint32_t _4710__PHI_TEMPORARY;
  uint64_t _4711;
  uint64_t _4712;
  void* _4713;
  uint8_t _4714;
  uint32_t _4715;
  uint64_t _4716;
  uint64_t _4717;
  uint32_t _4718;
  uint64_t _4719;
  uint32_t _4720;
  uint32_t _4720__PHI_TEMPORARY;
  uint64_t _4721;
  uint64_t _4722;
  uint64_t _4723;
  uint64_t _4724;
  void* _4725;
  uint64_t _4726;
  void* _4727;
  uint64_t _4728;
  void* _4729;
  uint64_t _4730;
  void* _4731;
  uint64_t _4732;
  uint64_t _4733;
  void* _4734;
  void* _4735;
  uint64_t _4736;
  void* _4737;
  uint64_t _4738;
  void* _4739;
  uint8_t _4740;
  uint8_t _4741;
  uint8_t _4742;
  uint32_t _4743;
  uint64_t _4744;
  uint64_t _4744__PHI_TEMPORARY;
  uint32_t _4745;
  uint32_t _4745__PHI_TEMPORARY;
  uint64_t _4746;
  uint64_t _4747;
  void* _4748;
  uint8_t _4749;
  uint32_t _4750;
  uint64_t _4751;
  uint64_t _4752;
  uint32_t _4753;
  uint64_t _4754;
  uint32_t _4755;
  uint32_t _4755__PHI_TEMPORARY;
  uint64_t _4756;
  uint64_t _4757;
  uint64_t _4758;
  uint64_t _4759;
  void* _4760;
  uint64_t _4761;
  void* _4762;
  uint64_t _4763;
  void* _4764;
  uint64_t _4765;
  void* _4766;
  uint64_t _4767;
  void* _4768;
  void* _4768__PHI_TEMPORARY;
  void* _4769;
  uint16_t _4770;
  uint64_t _4771;
  void* _4772;
  void* _4773;
  uint64_t _4774;
  void* _4775;
  uint64_t _4776;
  void* _4777;
  uint8_t _4778;
  uint8_t _4779;
  uint8_t _4780;
  uint32_t _4781;
  uint64_t _4782;
  uint64_t _4782__PHI_TEMPORARY;
  uint32_t _4783;
  uint32_t _4783__PHI_TEMPORARY;
  uint64_t _4784;
  uint64_t _4785;
  void* _4786;
  uint8_t _4787;
  uint32_t _4788;
  uint64_t _4789;
  uint64_t _4790;
  uint32_t _4791;
  uint64_t _4792;
  uint32_t _4793;
  uint32_t _4793__PHI_TEMPORARY;
  uint64_t _4794;
  uint64_t _4795;
  uint64_t _4796;
  uint64_t _4797;
  void* _4798;
  uint64_t _4799;
  void* _4800;
  uint64_t _4801;
  void* _4802;
  uint64_t _4803;
  void* _4804;
  uint64_t _4805;
  uint64_t _4806;
  void* _4807;
  void* _4808;
  uint64_t _4809;
  void* _4810;
  uint64_t _4811;
  void* _4812;
  uint8_t _4813;
  uint8_t _4814;
  uint8_t _4815;
  uint32_t _4816;
  uint64_t _4817;
  uint64_t _4817__PHI_TEMPORARY;
  uint32_t _4818;
  uint32_t _4818__PHI_TEMPORARY;
  uint64_t _4819;
  uint64_t _4820;
  void* _4821;
  uint8_t _4822;
  uint32_t _4823;
  uint64_t _4824;
  uint64_t _4825;
  uint32_t _4826;
  uint64_t _4827;
  uint32_t _4828;
  uint32_t _4828__PHI_TEMPORARY;
  uint64_t _4829;
  uint64_t _4830;
  uint64_t _4831;
  uint64_t _4832;
  void* _4833;
  uint64_t _4834;
  void* _4835;
  uint64_t _4836;
  void* _4837;
  uint64_t _4838;
  void* _4839;
  uint64_t _4840;

  _4696 = ((&((uint8_t*)_4690)[((int64_t)32)]));
  _4697 = *(uint64_t*)_4696;
  _4698 = ((&((uint8_t*)_4690)[((int64_t)40)]));
  if (((_4697 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _4841;
  } else {
    goto _4842;
  }

_4841:
  _4699 = *(void**)_4690;
  _4700 = ((&((uint8_t*)_4699)[((int64_t)16)]));
  _4701 = *(uint64_t*)_4700;
  _4702 = ((&((uint8_t*)_4699)[((int64_t)8)]));
  _4703 = *(uint64_t*)_4702;
  if ((((int64_t)_4703) > ((int64_t)_4701))) {
    goto _4843;
  } else {
    _4720__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4844;
  }

_4843:
  _4704 = *(void**)_4699;
  _4705 = *(uint8_t*)(((&((uint8_t*)_4704)[((int64_t)_4701)])));
  *(uint64_t*)_4700 = (llvm_add_u64(_4701, 1));
  _4706 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4705)), 0);
  _4707 = llvm_sub_u8(32, (llvm_shl_u8(_4706, 3)));
  _4708 = (((uint32_t)(uint8_t)_4705)) << 24;
  if ((((uint8_t)_4707) > ((uint8_t)((uint8_t)16)))) {
    _4720__PHI_TEMPORARY = _4708;   /* for PHI node */
    goto _4844;
  } else {
    _4709__PHI_TEMPORARY = 16;   /* for PHI node */
    _4710__PHI_TEMPORARY = _4708;   /* for PHI node */
    goto _4845;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4845:
  _4709 = _4709__PHI_TEMPORARY;
  _4710 = _4710__PHI_TEMPORARY;
  if (((((int64_t)_4709) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4709) < ((uint64_t)(((uint64_t)(uint8_t)_4707)))))) {
    _4720__PHI_TEMPORARY = _4710;   /* for PHI node */
    goto _4844;
  } else {
    goto _4846;
  }

_4846:
  _4711 = *(uint64_t*)_4700;
  _4712 = *(uint64_t*)_4702;
  if ((((int64_t)_4712) > ((int64_t)_4711))) {
    goto _4847;
  } else {
    _4720__PHI_TEMPORARY = _4710;   /* for PHI node */
    goto _4844;
  }

_4847:
  _4713 = *(void**)_4699;
  _4714 = *(uint8_t*)(((&((uint8_t*)_4713)[((int64_t)_4711)])));
  if ((((int8_t)_4714) > ((int8_t)((uint8_t)-65)))) {
    _4720__PHI_TEMPORARY = _4710;   /* for PHI node */
    goto _4844;
  } else {
    goto _4848;
  }

_4848:
  _4715 = llvm_select_u32((((int64_t)_4711) < ((int64_t)_4712)), (((uint32_t)(uint8_t)_4714)), 0);
  _4716 = *(uint64_t*)_4700;
  *(uint64_t*)_4700 = (llvm_add_u64(_4716, 1));
  _4717 = llvm_neg_u64(_4709);
  _4718 = _4710 | (llvm_select_u32((((int64_t)_4709) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4717) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4715, (((uint32_t)_4717)))))), (llvm_select_u32((((uint64_t)_4709) > ((uint64_t)UINT64_C(31))), 0, (_4715 << (((uint32_t)_4709)))))));
  _4719 = llvm_add_u64(_4709, -8);
  _4709__PHI_TEMPORARY = _4719;   /* for PHI node */
  _4710__PHI_TEMPORARY = _4718;   /* for PHI node */
  goto _4845;

  } while (1); /* end of syntactic loop '' */
_4844:
  _4720 = _4720__PHI_TEMPORARY;
  _4721 = *(uint64_t*)_4696;
  _4722 = *(uint64_t*)_4698;
  _4723 = jsyn_cbe_fshl_i64(_4722, _4721, 32);
  _4724 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4720)), _4722, 32);
  *(uint64_t*)_4696 = _4723;
  *(uint64_t*)_4698 = _4724;
  _4725 = ((&((uint8_t*)_4690)[((int64_t)56)]));
  _4726 = *(uint64_t*)_4725;
  _4727 = ((&((uint8_t*)_4690)[((int64_t)64)]));
  _4728 = *(uint64_t*)_4727;
  _4729 = ((&((uint8_t*)_4690)[((int64_t)72)]));
  _4730 = *(uint64_t*)_4729;
  _4731 = *(void**)_4690;
  _4732 = *(uint64_t*)(((&((uint8_t*)_4731)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4690)[((int64_t)48)]))) = _4726;
  *(uint64_t*)_4725 = _4728;
  *(uint64_t*)_4727 = _4730;
  *(uint64_t*)_4729 = _4732;
  _4733 = *(uint64_t*)_4696;
  if (((_4733 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _4849;
  } else {
    goto _4850;
  }

_4849:
  _4734 = *(void**)_4690;
  _4735 = ((&((uint8_t*)_4734)[((int64_t)16)]));
  _4736 = *(uint64_t*)_4735;
  _4737 = ((&((uint8_t*)_4734)[((int64_t)8)]));
  _4738 = *(uint64_t*)_4737;
  if ((((int64_t)_4738) > ((int64_t)_4736))) {
    goto _4851;
  } else {
    _4755__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4852;
  }

_4851:
  _4739 = *(void**)_4734;
  _4740 = *(uint8_t*)(((&((uint8_t*)_4739)[((int64_t)_4736)])));
  *(uint64_t*)_4735 = (llvm_add_u64(_4736, 1));
  _4741 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4740)), 0);
  _4742 = llvm_sub_u8(32, (llvm_shl_u8(_4741, 3)));
  _4743 = (((uint32_t)(uint8_t)_4740)) << 24;
  if ((((uint8_t)_4742) > ((uint8_t)((uint8_t)16)))) {
    _4755__PHI_TEMPORARY = _4743;   /* for PHI node */
    goto _4852;
  } else {
    _4744__PHI_TEMPORARY = 16;   /* for PHI node */
    _4745__PHI_TEMPORARY = _4743;   /* for PHI node */
    goto _4853;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4853:
  _4744 = _4744__PHI_TEMPORARY;
  _4745 = _4745__PHI_TEMPORARY;
  if (((((int64_t)_4744) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4744) < ((uint64_t)(((uint64_t)(uint8_t)_4742)))))) {
    _4755__PHI_TEMPORARY = _4745;   /* for PHI node */
    goto _4852;
  } else {
    goto _4854;
  }

_4854:
  _4746 = *(uint64_t*)_4735;
  _4747 = *(uint64_t*)_4737;
  if ((((int64_t)_4747) > ((int64_t)_4746))) {
    goto _4855;
  } else {
    _4755__PHI_TEMPORARY = _4745;   /* for PHI node */
    goto _4852;
  }

_4855:
  _4748 = *(void**)_4734;
  _4749 = *(uint8_t*)(((&((uint8_t*)_4748)[((int64_t)_4746)])));
  if ((((int8_t)_4749) > ((int8_t)((uint8_t)-65)))) {
    _4755__PHI_TEMPORARY = _4745;   /* for PHI node */
    goto _4852;
  } else {
    goto _4856;
  }

_4856:
  _4750 = llvm_select_u32((((int64_t)_4746) < ((int64_t)_4747)), (((uint32_t)(uint8_t)_4749)), 0);
  _4751 = *(uint64_t*)_4735;
  *(uint64_t*)_4735 = (llvm_add_u64(_4751, 1));
  _4752 = llvm_neg_u64(_4744);
  _4753 = _4745 | (llvm_select_u32((((int64_t)_4744) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4752) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4750, (((uint32_t)_4752)))))), (llvm_select_u32((((uint64_t)_4744) > ((uint64_t)UINT64_C(31))), 0, (_4750 << (((uint32_t)_4744)))))));
  _4754 = llvm_add_u64(_4744, -8);
  _4744__PHI_TEMPORARY = _4754;   /* for PHI node */
  _4745__PHI_TEMPORARY = _4753;   /* for PHI node */
  goto _4853;

  } while (1); /* end of syntactic loop '' */
_4852:
  _4755 = _4755__PHI_TEMPORARY;
  _4756 = *(uint64_t*)_4696;
  _4757 = *(uint64_t*)_4698;
  _4758 = jsyn_cbe_fshl_i64(_4757, _4756, 32);
  _4759 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4755)), _4757, 32);
  *(uint64_t*)_4696 = _4758;
  *(uint64_t*)_4698 = _4759;
  _4760 = ((&((uint8_t*)_4690)[((int64_t)56)]));
  _4761 = *(uint64_t*)_4760;
  _4762 = ((&((uint8_t*)_4690)[((int64_t)64)]));
  _4763 = *(uint64_t*)_4762;
  _4764 = ((&((uint8_t*)_4690)[((int64_t)72)]));
  _4765 = *(uint64_t*)_4764;
  _4766 = *(void**)_4690;
  _4767 = *(uint64_t*)(((&((uint8_t*)_4766)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4690)[((int64_t)48)]))) = _4761;
  *(uint64_t*)_4760 = _4763;
  *(uint64_t*)_4762 = _4765;
  *(uint64_t*)_4764 = _4767;
  julia_emit_20((&_4691), _4689, _4690, 80, 1);
  _4768__PHI_TEMPORARY = (&_4691);   /* for PHI node */
  goto _4857;

_4857:
  _4768 = _4768__PHI_TEMPORARY;
  _4769 = memcpy(_4688, _4768, 32);
  return;
_4850:
  julia_emit_20((&_4692), _4689, _4690, 66, 1);
  _4768__PHI_TEMPORARY = (&_4692);   /* for PHI node */
  goto _4857;

_4842:
  _4770 = *(uint16_t*)(((&((uint8_t*)_4690)[((int64_t)16)])));
  if ((_4770 == ((uint16_t)707))) {
    goto _4858;
  } else {
    goto _4859;
  }

_4859:
  _4771 = *(uint64_t*)_4696;
  if (((_4771 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _4860;
  } else {
    goto _4858;
  }

_4860:
  _4772 = *(void**)_4690;
  _4773 = ((&((uint8_t*)_4772)[((int64_t)16)]));
  _4774 = *(uint64_t*)_4773;
  _4775 = ((&((uint8_t*)_4772)[((int64_t)8)]));
  _4776 = *(uint64_t*)_4775;
  if ((((int64_t)_4776) > ((int64_t)_4774))) {
    goto _4861;
  } else {
    _4793__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4862;
  }

_4861:
  _4777 = *(void**)_4772;
  _4778 = *(uint8_t*)(((&((uint8_t*)_4777)[((int64_t)_4774)])));
  *(uint64_t*)_4773 = (llvm_add_u64(_4774, 1));
  _4779 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4778)), 0);
  _4780 = llvm_sub_u8(32, (llvm_shl_u8(_4779, 3)));
  _4781 = (((uint32_t)(uint8_t)_4778)) << 24;
  if ((((uint8_t)_4780) > ((uint8_t)((uint8_t)16)))) {
    _4793__PHI_TEMPORARY = _4781;   /* for PHI node */
    goto _4862;
  } else {
    _4782__PHI_TEMPORARY = 16;   /* for PHI node */
    _4783__PHI_TEMPORARY = _4781;   /* for PHI node */
    goto _4863;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4863:
  _4782 = _4782__PHI_TEMPORARY;
  _4783 = _4783__PHI_TEMPORARY;
  if (((((int64_t)_4782) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4782) < ((uint64_t)(((uint64_t)(uint8_t)_4780)))))) {
    _4793__PHI_TEMPORARY = _4783;   /* for PHI node */
    goto _4862;
  } else {
    goto _4864;
  }

_4864:
  _4784 = *(uint64_t*)_4773;
  _4785 = *(uint64_t*)_4775;
  if ((((int64_t)_4785) > ((int64_t)_4784))) {
    goto _4865;
  } else {
    _4793__PHI_TEMPORARY = _4783;   /* for PHI node */
    goto _4862;
  }

_4865:
  _4786 = *(void**)_4772;
  _4787 = *(uint8_t*)(((&((uint8_t*)_4786)[((int64_t)_4784)])));
  if ((((int8_t)_4787) > ((int8_t)((uint8_t)-65)))) {
    _4793__PHI_TEMPORARY = _4783;   /* for PHI node */
    goto _4862;
  } else {
    goto _4866;
  }

_4866:
  _4788 = llvm_select_u32((((int64_t)_4784) < ((int64_t)_4785)), (((uint32_t)(uint8_t)_4787)), 0);
  _4789 = *(uint64_t*)_4773;
  *(uint64_t*)_4773 = (llvm_add_u64(_4789, 1));
  _4790 = llvm_neg_u64(_4782);
  _4791 = _4783 | (llvm_select_u32((((int64_t)_4782) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4790) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4788, (((uint32_t)_4790)))))), (llvm_select_u32((((uint64_t)_4782) > ((uint64_t)UINT64_C(31))), 0, (_4788 << (((uint32_t)_4782)))))));
  _4792 = llvm_add_u64(_4782, -8);
  _4782__PHI_TEMPORARY = _4792;   /* for PHI node */
  _4783__PHI_TEMPORARY = _4791;   /* for PHI node */
  goto _4863;

  } while (1); /* end of syntactic loop '' */
_4862:
  _4793 = _4793__PHI_TEMPORARY;
  _4794 = *(uint64_t*)_4696;
  _4795 = *(uint64_t*)_4698;
  _4796 = jsyn_cbe_fshl_i64(_4795, _4794, 32);
  _4797 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4793)), _4795, 32);
  *(uint64_t*)_4696 = _4796;
  *(uint64_t*)_4698 = _4797;
  _4798 = ((&((uint8_t*)_4690)[((int64_t)56)]));
  _4799 = *(uint64_t*)_4798;
  _4800 = ((&((uint8_t*)_4690)[((int64_t)64)]));
  _4801 = *(uint64_t*)_4800;
  _4802 = ((&((uint8_t*)_4690)[((int64_t)72)]));
  _4803 = *(uint64_t*)_4802;
  _4804 = *(void**)_4690;
  _4805 = *(uint64_t*)(((&((uint8_t*)_4804)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4690)[((int64_t)48)]))) = _4799;
  *(uint64_t*)_4798 = _4801;
  *(uint64_t*)_4800 = _4803;
  *(uint64_t*)_4802 = _4805;
  julia_emit_20((&_4693), _4689, _4690, 711, 1);
  _4768__PHI_TEMPORARY = (&_4693);   /* for PHI node */
  goto _4857;

_4858:
  _4806 = *(uint64_t*)_4696;
  if (((_4806 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4867;
  } else {
    goto _4868;
  }

_4867:
  _4807 = *(void**)_4690;
  _4808 = ((&((uint8_t*)_4807)[((int64_t)16)]));
  _4809 = *(uint64_t*)_4808;
  _4810 = ((&((uint8_t*)_4807)[((int64_t)8)]));
  _4811 = *(uint64_t*)_4810;
  if ((((int64_t)_4811) > ((int64_t)_4809))) {
    goto _4869;
  } else {
    _4828__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4870;
  }

_4869:
  _4812 = *(void**)_4807;
  _4813 = *(uint8_t*)(((&((uint8_t*)_4812)[((int64_t)_4809)])));
  *(uint64_t*)_4808 = (llvm_add_u64(_4809, 1));
  _4814 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4813)), 0);
  _4815 = llvm_sub_u8(32, (llvm_shl_u8(_4814, 3)));
  _4816 = (((uint32_t)(uint8_t)_4813)) << 24;
  if ((((uint8_t)_4815) > ((uint8_t)((uint8_t)16)))) {
    _4828__PHI_TEMPORARY = _4816;   /* for PHI node */
    goto _4870;
  } else {
    _4817__PHI_TEMPORARY = 16;   /* for PHI node */
    _4818__PHI_TEMPORARY = _4816;   /* for PHI node */
    goto _4871;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4871:
  _4817 = _4817__PHI_TEMPORARY;
  _4818 = _4818__PHI_TEMPORARY;
  if (((((int64_t)_4817) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4817) < ((uint64_t)(((uint64_t)(uint8_t)_4815)))))) {
    _4828__PHI_TEMPORARY = _4818;   /* for PHI node */
    goto _4870;
  } else {
    goto _4872;
  }

_4872:
  _4819 = *(uint64_t*)_4808;
  _4820 = *(uint64_t*)_4810;
  if ((((int64_t)_4820) > ((int64_t)_4819))) {
    goto _4873;
  } else {
    _4828__PHI_TEMPORARY = _4818;   /* for PHI node */
    goto _4870;
  }

_4873:
  _4821 = *(void**)_4807;
  _4822 = *(uint8_t*)(((&((uint8_t*)_4821)[((int64_t)_4819)])));
  if ((((int8_t)_4822) > ((int8_t)((uint8_t)-65)))) {
    _4828__PHI_TEMPORARY = _4818;   /* for PHI node */
    goto _4870;
  } else {
    goto _4874;
  }

_4874:
  _4823 = llvm_select_u32((((int64_t)_4819) < ((int64_t)_4820)), (((uint32_t)(uint8_t)_4822)), 0);
  _4824 = *(uint64_t*)_4808;
  *(uint64_t*)_4808 = (llvm_add_u64(_4824, 1));
  _4825 = llvm_neg_u64(_4817);
  _4826 = _4818 | (llvm_select_u32((((int64_t)_4817) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4825) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4823, (((uint32_t)_4825)))))), (llvm_select_u32((((uint64_t)_4817) > ((uint64_t)UINT64_C(31))), 0, (_4823 << (((uint32_t)_4817)))))));
  _4827 = llvm_add_u64(_4817, -8);
  _4817__PHI_TEMPORARY = _4827;   /* for PHI node */
  _4818__PHI_TEMPORARY = _4826;   /* for PHI node */
  goto _4871;

  } while (1); /* end of syntactic loop '' */
_4870:
  _4828 = _4828__PHI_TEMPORARY;
  _4829 = *(uint64_t*)_4696;
  _4830 = *(uint64_t*)_4698;
  _4831 = jsyn_cbe_fshl_i64(_4830, _4829, 32);
  _4832 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4828)), _4830, 32);
  *(uint64_t*)_4696 = _4831;
  *(uint64_t*)_4698 = _4832;
  _4833 = ((&((uint8_t*)_4690)[((int64_t)56)]));
  _4834 = *(uint64_t*)_4833;
  _4835 = ((&((uint8_t*)_4690)[((int64_t)64)]));
  _4836 = *(uint64_t*)_4835;
  _4837 = ((&((uint8_t*)_4690)[((int64_t)72)]));
  _4838 = *(uint64_t*)_4837;
  _4839 = *(void**)_4690;
  _4840 = *(uint64_t*)(((&((uint8_t*)_4839)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4690)[((int64_t)48)]))) = _4834;
  *(uint64_t*)_4833 = _4836;
  *(uint64_t*)_4835 = _4838;
  *(uint64_t*)_4837 = _4840;
  julia_emit_20((&_4694), _4689, _4690, 71, 1);
  _4768__PHI_TEMPORARY = (&_4694);   /* for PHI node */
  goto _4857;

_4868:
  julia_emit_20((&_4695), _4689, _4690, 536, 1);
  _4768__PHI_TEMPORARY = (&_4695);   /* for PHI node */
  goto _4857;

}


static void julia_lex_backtick_48(void* _4875, void* _4876, void* _4877) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _4878 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _4879;
  void* _4880;
  struct l_array_4_uint64_t _4881;    /* Address-exposed local */
  struct l_array_4_uint64_t _4882;    /* Address-exposed local */
  void* _4883;
  uint64_t _4884;
  void* _4885;
  uint64_t _4886;
  bool _4887;
  uint8_t _4888;
  void* _4889;
  void* _4890;
  void* _4891;
  void* _4892;
  uint64_t _4893;
  uint64_t _4894;
  void* _4895;
  uint64_t _4896;
  void* _4897;
  void* _4898;
  void* _4899;
  void* _4900;
  uint64_t _4901;
  void* _4902;
  uint64_t _4903;
  void* _4904;
  uint8_t _4905;
  uint8_t _4906;
  uint8_t _4907;
  uint32_t _4908;
  uint64_t _4909;
  uint64_t _4909__PHI_TEMPORARY;
  uint32_t _4910;
  uint32_t _4910__PHI_TEMPORARY;
  uint64_t _4911;
  uint64_t _4912;
  void* _4913;
  uint8_t _4914;
  uint32_t _4915;
  uint64_t _4916;
  uint64_t _4917;
  uint32_t _4918;
  uint64_t _4919;
  uint32_t _4920;
  uint32_t _4920__PHI_TEMPORARY;
  uint64_t _4921;
  uint64_t _4922;
  uint64_t _4923;
  uint64_t _4924;
  void* _4925;
  void* _4926;
  uint64_t _4927;
  void* _4928;
  uint64_t _4929;
  void* _4930;
  uint64_t _4931;
  void* _4932;
  uint64_t _4933;
  void* _4934;
  void* _4935;
  uint64_t _4936;
  void* _4937;
  uint64_t _4938;
  void* _4939;
  uint8_t _4940;
  uint8_t _4941;
  uint8_t _4942;
  uint32_t _4943;
  uint64_t _4944;
  uint64_t _4944__PHI_TEMPORARY;
  uint32_t _4945;
  uint32_t _4945__PHI_TEMPORARY;
  uint64_t _4946;
  uint64_t _4947;
  void* _4948;
  uint8_t _4949;
  uint32_t _4950;
  uint64_t _4951;
  uint64_t _4952;
  uint32_t _4953;
  uint64_t _4954;
  uint32_t _4955;
  uint32_t _4955__PHI_TEMPORARY;
  uint64_t _4956;
  uint64_t _4957;
  uint64_t _4958;
  uint64_t _4959;
  uint64_t _4960;
  uint64_t _4961;
  uint64_t _4962;
  void* _4963;
  uint64_t _4964;
  void* _4965;
  void* _4965__PHI_TEMPORARY;
  void* _4966;
  void* _4967;

  _4879 = memset((&_4878), 0, 24);
  *((uint64_t*)&_4878) = 4;
  _4880 = *(void**)_4876;
  *(void**)(((&((uint8_t*)(&_4878))[((int64_t)8)]))) = _4880;
  *(void**)_4876 = (&_4878);
  _4883 = ((&((uint8_t*)_4877)[((int64_t)32)]));
  _4884 = *(uint64_t*)_4883;
  _4885 = ((&((uint8_t*)_4877)[((int64_t)40)]));
  _4886 = *(uint64_t*)_4885;
  _4887 = llvm_select_bool(((_4884 & INT64_C(-4294967296)) == UINT64_C(6917529027641081856)), ((_4886 & INT64_C(4294967295)) == UINT64_C(1610612736)), 0);
  _4888 = ((uint8_t)(bool)_4887);
  _4889 = *(void**)(((&((uint8_t*)_4877)[((int64_t)24)])));
  _4890 = *(void**)_4889;
  _4891 = *(void**)(((&((uint8_t*)_4889)[((int64_t)8)])));
  _4892 = ((&((uint8_t*)_4889)[((int64_t)16)]));
  _4893 = *(uint64_t*)_4892;
  _4894 = llvm_add_u64(_4893, 1);
  _4895 = *(void**)(((&((uint8_t*)_4891)[((int64_t)8)])));
  _4896 = *(uint64_t*)_4891;
  if ((((int64_t)_4896) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_4890)), (((uint64_t)(uintptr_t)_4895)))), 4)), 1)), _4893))))) {
    goto _4968;
  } else {
    goto _4969;
  }

_4968:
  *(void**)(((&((uint8_t*)(&_4878))[((int64_t)16)]))) = _4889;
  julia__growend_internalNOT_OC__13(_4876, _4889, 1, _4893);
  goto _4969;

_4969:
  *(uint64_t*)_4892 = _4894;
  _4897 = *(void**)_4889;
  _4898 = ((&((uint8_t*)_4897)[((int64_t)(_4893 << 4))]));
  *(uint8_t*)_4898 = _4888;
  *(uint8_t*)(((&((uint8_t*)_4898)[((int64_t)1)]))) = 1;
  *(uint32_t*)(((&((uint8_t*)_4898)[((int64_t)4)]))) = 1610612736u;
  *(uint64_t*)(((&((uint8_t*)_4898)[((int64_t)8)]))) = 0;
  if (_4887) {
    goto _4970;
  } else {
    goto _4971;
  }

_4970:
  _4899 = *(void**)_4877;
  _4900 = ((&((uint8_t*)_4899)[((int64_t)16)]));
  _4901 = *(uint64_t*)_4900;
  _4902 = ((&((uint8_t*)_4899)[((int64_t)8)]));
  _4903 = *(uint64_t*)_4902;
  if ((((int64_t)_4903) > ((int64_t)_4901))) {
    goto _4972;
  } else {
    _4920__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4973;
  }

_4972:
  _4904 = *(void**)_4899;
  _4905 = *(uint8_t*)(((&((uint8_t*)_4904)[((int64_t)_4901)])));
  *(uint64_t*)_4900 = (llvm_add_u64(_4901, 1));
  _4906 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4905)), 0);
  _4907 = llvm_sub_u8(32, (llvm_shl_u8(_4906, 3)));
  _4908 = (((uint32_t)(uint8_t)_4905)) << 24;
  if ((((uint8_t)_4907) > ((uint8_t)((uint8_t)16)))) {
    _4920__PHI_TEMPORARY = _4908;   /* for PHI node */
    goto _4973;
  } else {
    _4909__PHI_TEMPORARY = 16;   /* for PHI node */
    _4910__PHI_TEMPORARY = _4908;   /* for PHI node */
    goto _4974;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4974:
  _4909 = _4909__PHI_TEMPORARY;
  _4910 = _4910__PHI_TEMPORARY;
  if (((((int64_t)_4909) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4909) < ((uint64_t)(((uint64_t)(uint8_t)_4907)))))) {
    _4920__PHI_TEMPORARY = _4910;   /* for PHI node */
    goto _4973;
  } else {
    goto _4975;
  }

_4975:
  _4911 = *(uint64_t*)_4900;
  _4912 = *(uint64_t*)_4902;
  if ((((int64_t)_4912) > ((int64_t)_4911))) {
    goto _4976;
  } else {
    _4920__PHI_TEMPORARY = _4910;   /* for PHI node */
    goto _4973;
  }

_4976:
  _4913 = *(void**)_4899;
  _4914 = *(uint8_t*)(((&((uint8_t*)_4913)[((int64_t)_4911)])));
  if ((((int8_t)_4914) > ((int8_t)((uint8_t)-65)))) {
    _4920__PHI_TEMPORARY = _4910;   /* for PHI node */
    goto _4973;
  } else {
    goto _4977;
  }

_4977:
  _4915 = llvm_select_u32((((int64_t)_4911) < ((int64_t)_4912)), (((uint32_t)(uint8_t)_4914)), 0);
  _4916 = *(uint64_t*)_4900;
  *(uint64_t*)_4900 = (llvm_add_u64(_4916, 1));
  _4917 = llvm_neg_u64(_4909);
  _4918 = _4910 | (llvm_select_u32((((int64_t)_4909) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4917) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4915, (((uint32_t)_4917)))))), (llvm_select_u32((((uint64_t)_4909) > ((uint64_t)UINT64_C(31))), 0, (_4915 << (((uint32_t)_4909)))))));
  _4919 = llvm_add_u64(_4909, -8);
  _4909__PHI_TEMPORARY = _4919;   /* for PHI node */
  _4910__PHI_TEMPORARY = _4918;   /* for PHI node */
  goto _4974;

  } while (1); /* end of syntactic loop '' */
_4973:
  _4920 = _4920__PHI_TEMPORARY;
  _4921 = *(uint64_t*)_4883;
  _4922 = *(uint64_t*)_4885;
  _4923 = jsyn_cbe_fshl_i64(_4922, _4921, 32);
  _4924 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4920)), _4922, 32);
  *(uint64_t*)_4883 = _4923;
  *(uint64_t*)_4885 = _4924;
  _4925 = ((&((uint8_t*)_4877)[((int64_t)48)]));
  _4926 = ((&((uint8_t*)_4877)[((int64_t)56)]));
  _4927 = *(uint64_t*)_4926;
  _4928 = ((&((uint8_t*)_4877)[((int64_t)64)]));
  _4929 = *(uint64_t*)_4928;
  _4930 = ((&((uint8_t*)_4877)[((int64_t)72)]));
  _4931 = *(uint64_t*)_4930;
  _4932 = *(void**)_4877;
  _4933 = *(uint64_t*)(((&((uint8_t*)_4932)[((int64_t)16)])));
  *(uint64_t*)_4925 = _4927;
  *(uint64_t*)_4926 = _4929;
  *(uint64_t*)_4928 = _4931;
  *(uint64_t*)_4930 = _4933;
  _4934 = *(void**)_4877;
  _4935 = ((&((uint8_t*)_4934)[((int64_t)16)]));
  _4936 = *(uint64_t*)_4935;
  _4937 = ((&((uint8_t*)_4934)[((int64_t)8)]));
  _4938 = *(uint64_t*)_4937;
  if ((((int64_t)_4938) > ((int64_t)_4936))) {
    goto _4978;
  } else {
    _4955__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4979;
  }

_4978:
  _4939 = *(void**)_4934;
  _4940 = *(uint8_t*)(((&((uint8_t*)_4939)[((int64_t)_4936)])));
  *(uint64_t*)_4935 = (llvm_add_u64(_4936, 1));
  _4941 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4940)), 0);
  _4942 = llvm_sub_u8(32, (llvm_shl_u8(_4941, 3)));
  _4943 = (((uint32_t)(uint8_t)_4940)) << 24;
  if ((((uint8_t)_4942) > ((uint8_t)((uint8_t)16)))) {
    _4955__PHI_TEMPORARY = _4943;   /* for PHI node */
    goto _4979;
  } else {
    _4944__PHI_TEMPORARY = 16;   /* for PHI node */
    _4945__PHI_TEMPORARY = _4943;   /* for PHI node */
    goto _4980;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4980:
  _4944 = _4944__PHI_TEMPORARY;
  _4945 = _4945__PHI_TEMPORARY;
  if (((((int64_t)_4944) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4944) < ((uint64_t)(((uint64_t)(uint8_t)_4942)))))) {
    _4955__PHI_TEMPORARY = _4945;   /* for PHI node */
    goto _4979;
  } else {
    goto _4981;
  }

_4981:
  _4946 = *(uint64_t*)_4935;
  _4947 = *(uint64_t*)_4937;
  if ((((int64_t)_4947) > ((int64_t)_4946))) {
    goto _4982;
  } else {
    _4955__PHI_TEMPORARY = _4945;   /* for PHI node */
    goto _4979;
  }

_4982:
  _4948 = *(void**)_4934;
  _4949 = *(uint8_t*)(((&((uint8_t*)_4948)[((int64_t)_4946)])));
  if ((((int8_t)_4949) > ((int8_t)((uint8_t)-65)))) {
    _4955__PHI_TEMPORARY = _4945;   /* for PHI node */
    goto _4979;
  } else {
    goto _4983;
  }

_4983:
  _4950 = llvm_select_u32((((int64_t)_4946) < ((int64_t)_4947)), (((uint32_t)(uint8_t)_4949)), 0);
  _4951 = *(uint64_t*)_4935;
  *(uint64_t*)_4935 = (llvm_add_u64(_4951, 1));
  _4952 = llvm_neg_u64(_4944);
  _4953 = _4945 | (llvm_select_u32((((int64_t)_4944) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4952) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4950, (((uint32_t)_4952)))))), (llvm_select_u32((((uint64_t)_4944) > ((uint64_t)UINT64_C(31))), 0, (_4950 << (((uint32_t)_4944)))))));
  _4954 = llvm_add_u64(_4944, -8);
  _4944__PHI_TEMPORARY = _4954;   /* for PHI node */
  _4945__PHI_TEMPORARY = _4953;   /* for PHI node */
  goto _4980;

  } while (1); /* end of syntactic loop '' */
_4979:
  _4955 = _4955__PHI_TEMPORARY;
  _4956 = *(uint64_t*)_4883;
  _4957 = *(uint64_t*)_4885;
  _4958 = jsyn_cbe_fshl_i64(_4957, _4956, 32);
  _4959 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4955)), _4957, 32);
  *(uint64_t*)_4883 = _4958;
  *(uint64_t*)_4885 = _4959;
  _4960 = *(uint64_t*)_4926;
  _4961 = *(uint64_t*)_4928;
  _4962 = *(uint64_t*)_4930;
  _4963 = *(void**)_4877;
  _4964 = *(uint64_t*)(((&((uint8_t*)_4963)[((int64_t)16)])));
  *(uint64_t*)_4925 = _4960;
  *(uint64_t*)_4926 = _4961;
  *(uint64_t*)_4928 = _4962;
  *(uint64_t*)_4930 = _4964;
  julia_emit_20((&_4881), _4876, _4877, 65, 1);
  _4965__PHI_TEMPORARY = (&_4881);   /* for PHI node */
  goto _4984;

_4984:
  _4965 = _4965__PHI_TEMPORARY;
  _4966 = memcpy(_4875, _4965, 32);
  _4967 = *(void**)(((&((uint8_t*)(&_4878))[((int64_t)8)])));
  *(void**)_4876 = _4967;
  return;
_4971:
  julia_emit_20((&_4882), _4876, _4877, 64, 1);
  _4965__PHI_TEMPORARY = (&_4882);   /* for PHI node */
  goto _4984;

}


static void julia_lex_digit_49(void* _4985, void* _4986, void* _4987, uint16_t _4988) {
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
  struct l_array_4_uint64_t _5001;    /* Address-exposed local */
  struct l_array_4_uint64_t _5002;    /* Address-exposed local */
  uint8_t _5003;
  void* _5004;
  uint64_t _5005;
  void* _5006;
  uint64_t _5007;
  uint64_t _5008;
  uint32_t _5009;
  void* _5010;
  void* _5010__PHI_TEMPORARY;
  void* _5011;
  void* _5012;
  void* _5013;
  uint64_t _5014;
  void* _5015;
  uint64_t _5016;
  void* _5017;
  uint8_t _5018;
  uint8_t _5019;
  uint8_t _5020;
  uint32_t _5021;
  uint64_t _5022;
  uint64_t _5022__PHI_TEMPORARY;
  uint32_t _5023;
  uint32_t _5023__PHI_TEMPORARY;
  uint64_t _5024;
  uint64_t _5025;
  void* _5026;
  uint8_t _5027;
  uint32_t _5028;
  uint64_t _5029;
  uint64_t _5030;
  uint32_t _5031;
  uint64_t _5032;
  uint32_t _5033;
  uint32_t _5033__PHI_TEMPORARY;
  uint64_t _5034;
  uint64_t _5035;
  uint64_t _5036;
  uint64_t _5037;
  void* _5038;
  uint64_t _5039;
  void* _5040;
  uint64_t _5041;
  void* _5042;
  uint64_t _5043;
  void* _5044;
  uint64_t _5045;
  uint8_t _5046;
  void* _5047;
  void* _5048;
  uint64_t _5049;
  void* _5050;
  uint64_t _5051;
  void* _5052;
  uint8_t _5053;
  uint8_t _5054;
  uint8_t _5055;
  uint32_t _5056;
  uint64_t _5057;
  uint64_t _5057__PHI_TEMPORARY;
  uint32_t _5058;
  uint32_t _5058__PHI_TEMPORARY;
  uint64_t _5059;
  uint64_t _5060;
  void* _5061;
  uint8_t _5062;
  uint32_t _5063;
  uint64_t _5064;
  uint64_t _5065;
  uint32_t _5066;
  uint64_t _5067;
  uint32_t _5068;
  uint32_t _5068__PHI_TEMPORARY;
  uint64_t _5069;
  uint64_t _5070;
  uint64_t _5071;
  uint64_t _5072;
  void* _5073;
  uint64_t _5074;
  void* _5075;
  uint64_t _5076;
  void* _5077;
  uint64_t _5078;
  void* _5079;
  uint64_t _5080;
  void* _5081;
  void* _5082;
  uint64_t _5083;
  void* _5084;
  uint64_t _5085;
  void* _5086;
  uint8_t _5087;
  uint8_t _5088;
  uint8_t _5089;
  uint32_t _5090;
  uint64_t _5091;
  uint64_t _5091__PHI_TEMPORARY;
  uint32_t _5092;
  uint32_t _5092__PHI_TEMPORARY;
  uint64_t _5093;
  uint64_t _5094;
  void* _5095;
  uint8_t _5096;
  uint32_t _5097;
  uint64_t _5098;
  uint64_t _5099;
  uint32_t _5100;
  uint64_t _5101;
  uint32_t _5102;
  uint32_t _5102__PHI_TEMPORARY;
  uint64_t _5103;
  uint64_t _5104;
  uint64_t _5105;
  uint64_t _5106;
  void* _5107;
  void* _5108;
  uint64_t _5109;
  void* _5110;
  uint64_t _5111;
  void* _5112;
  uint64_t _5113;
  void* _5114;
  uint64_t _5115;
  uint64_t _5116;
  void* _5117;
  void* _5118;
  uint64_t _5119;
  void* _5120;
  uint64_t _5121;
  void* _5122;
  uint8_t _5123;
  uint8_t _5124;
  uint8_t _5125;
  uint32_t _5126;
  uint64_t _5127;
  uint64_t _5127__PHI_TEMPORARY;
  uint32_t _5128;
  uint32_t _5128__PHI_TEMPORARY;
  uint64_t _5129;
  uint64_t _5130;
  void* _5131;
  uint8_t _5132;
  uint32_t _5133;
  uint64_t _5134;
  uint64_t _5135;
  uint32_t _5136;
  uint64_t _5137;
  uint32_t _5138;
  uint32_t _5138__PHI_TEMPORARY;
  uint64_t _5139;
  uint64_t _5140;
  uint64_t _5141;
  uint64_t _5142;
  uint64_t _5143;
  uint64_t _5144;
  uint64_t _5145;
  void* _5146;
  uint64_t _5147;
  uint8_t _5148;
  uint64_t _5149;
  uint64_t _5150;
  uint32_t _5151;
  uint64_t _5152;
  uint32_t _5153;
  uint16_t _5154;
  void* _5155;
  void* _5156;
  uint64_t _5157;
  void* _5158;
  uint64_t _5159;
  void* _5160;
  uint8_t _5161;
  uint8_t _5162;
  uint8_t _5163;
  uint32_t _5164;
  uint64_t _5165;
  uint64_t _5165__PHI_TEMPORARY;
  uint32_t _5166;
  uint32_t _5166__PHI_TEMPORARY;
  uint64_t _5167;
  uint64_t _5168;
  void* _5169;
  uint8_t _5170;
  uint32_t _5171;
  uint64_t _5172;
  uint64_t _5173;
  uint32_t _5174;
  uint64_t _5175;
  uint32_t _5176;
  uint32_t _5176__PHI_TEMPORARY;
  uint64_t _5177;
  uint64_t _5178;
  uint64_t _5179;
  uint64_t _5180;
  uint64_t _5181;
  uint64_t _5182;
  uint64_t _5183;
  void* _5184;
  uint64_t _5185;
  uint64_t _5186;
  void* _5187;
  void* _5188;
  uint64_t _5189;
  void* _5190;
  uint64_t _5191;
  void* _5192;
  uint8_t _5193;
  uint8_t _5194;
  uint8_t _5195;
  uint32_t _5196;
  uint64_t _5197;
  uint64_t _5197__PHI_TEMPORARY;
  uint32_t _5198;
  uint32_t _5198__PHI_TEMPORARY;
  uint64_t _5199;
  uint64_t _5200;
  void* _5201;
  uint8_t _5202;
  uint32_t _5203;
  uint64_t _5204;
  uint64_t _5205;
  uint32_t _5206;
  uint64_t _5207;
  uint32_t _5208;
  uint32_t _5208__PHI_TEMPORARY;
  bool _5209;
  bool _5209__PHI_TEMPORARY;
  uint64_t _5210;
  uint64_t _5211;
  uint64_t _5212;
  uint64_t _5213;
  uint64_t _5214;
  uint64_t _5215;
  uint64_t _5216;
  void* _5217;
  uint64_t _5218;
  bool _5219;
  bool _5219__PHI_TEMPORARY;
  uint64_t _5220;
  uint64_t _5221;
  void* _5222;
  void* _5223;
  uint64_t _5224;
  void* _5225;
  uint64_t _5226;
  void* _5227;
  uint8_t _5228;
  uint8_t _5229;
  uint8_t _5230;
  uint32_t _5231;
  uint64_t _5232;
  uint64_t _5232__PHI_TEMPORARY;
  uint32_t _5233;
  uint32_t _5233__PHI_TEMPORARY;
  uint64_t _5234;
  uint64_t _5235;
  void* _5236;
  uint8_t _5237;
  uint32_t _5238;
  uint64_t _5239;
  uint64_t _5240;
  uint32_t _5241;
  uint64_t _5242;
  uint64_t _5243;
  uint64_t _5244;
  uint32_t _5245;
  uint8_t _5246;
  void* _5247;
  void* _5248;
  uint64_t _5249;
  void* _5250;
  uint64_t _5251;
  void* _5252;
  uint8_t _5253;
  uint8_t _5254;
  uint8_t _5255;
  uint32_t _5256;
  uint64_t _5257;
  uint64_t _5257__PHI_TEMPORARY;
  uint32_t _5258;
  uint32_t _5258__PHI_TEMPORARY;
  uint64_t _5259;
  uint64_t _5260;
  void* _5261;
  uint8_t _5262;
  uint32_t _5263;
  uint64_t _5264;
  uint64_t _5265;
  uint32_t _5266;
  uint64_t _5267;
  uint32_t _5268;
  uint32_t _5268__PHI_TEMPORARY;
  uint64_t _5269;
  uint64_t _5270;
  uint64_t _5271;
  uint64_t _5272;
  uint64_t _5273;
  uint64_t _5274;
  uint64_t _5275;
  void* _5276;
  uint64_t _5277;
  uint8_t _5278;
  void* _5279;
  void* _5280;
  uint64_t _5281;
  void* _5282;
  uint64_t _5283;
  void* _5284;
  uint8_t _5285;
  uint8_t _5286;
  uint8_t _5287;
  uint32_t _5288;
  uint64_t _5289;
  uint64_t _5289__PHI_TEMPORARY;
  uint32_t _5290;
  uint32_t _5290__PHI_TEMPORARY;
  uint64_t _5291;
  uint64_t _5292;
  void* _5293;
  uint8_t _5294;
  uint32_t _5295;
  uint64_t _5296;
  uint64_t _5297;
  uint32_t _5298;
  uint64_t _5299;
  uint32_t _5300;
  uint32_t _5300__PHI_TEMPORARY;
  uint64_t _5301;
  uint64_t _5302;
  uint64_t _5303;
  uint64_t _5304;
  uint64_t _5305;
  uint64_t _5306;
  uint64_t _5307;
  void* _5308;
  uint64_t _5309;
  uint32_t _5310;
  uint64_t _5311;
  uint32_t _5312;
  uint32_t _5313;
  uint64_t _5314;
  bool _5315;
  bool _5316;
  uint32_t _5317;
  uint32_t _5318;
  uint32_t _5319;
  uint32_t _5320;
  uint32_t _5320__PHI_TEMPORARY;
  uint32_t _5321;
  uint16_t _5322;
  void* _5323;
  void* _5324;
  uint64_t _5325;
  void* _5326;
  uint64_t _5327;
  void* _5328;
  uint8_t _5329;
  uint8_t _5330;
  uint8_t _5331;
  uint32_t _5332;
  uint64_t _5333;
  uint64_t _5333__PHI_TEMPORARY;
  uint32_t _5334;
  uint32_t _5334__PHI_TEMPORARY;
  uint64_t _5335;
  uint64_t _5336;
  void* _5337;
  uint8_t _5338;
  uint32_t _5339;
  uint64_t _5340;
  uint64_t _5341;
  uint32_t _5342;
  uint64_t _5343;
  uint32_t _5344;
  uint32_t _5344__PHI_TEMPORARY;
  uint64_t _5345;
  uint64_t _5346;
  uint64_t _5347;
  uint64_t _5348;
  void* _5349;
  void* _5350;
  uint64_t _5351;
  void* _5352;
  uint64_t _5353;
  void* _5354;
  uint64_t _5355;
  void* _5356;
  uint64_t _5357;
  uint64_t _5358;
  void* _5359;
  void* _5360;
  uint64_t _5361;
  void* _5362;
  uint64_t _5363;
  void* _5364;
  uint8_t _5365;
  uint8_t _5366;
  uint8_t _5367;
  uint32_t _5368;
  uint64_t _5369;
  uint64_t _5369__PHI_TEMPORARY;
  uint32_t _5370;
  uint32_t _5370__PHI_TEMPORARY;
  uint64_t _5371;
  uint64_t _5372;
  void* _5373;
  uint8_t _5374;
  uint32_t _5375;
  uint64_t _5376;
  uint64_t _5377;
  uint32_t _5378;
  uint64_t _5379;
  uint32_t _5380;
  uint32_t _5380__PHI_TEMPORARY;
  bool _5381;
  bool _5381__PHI_TEMPORARY;
  uint64_t _5382;
  uint64_t _5383;
  uint64_t _5384;
  uint64_t _5385;
  uint64_t _5386;
  uint64_t _5387;
  uint64_t _5388;
  void* _5389;
  uint64_t _5390;
  bool _5391;
  bool _5391__PHI_TEMPORARY;
  uint64_t _5392;
  uint64_t _5393;
  void* _5394;
  void* _5395;
  uint64_t _5396;
  void* _5397;
  uint64_t _5398;
  void* _5399;
  uint8_t _5400;
  uint8_t _5401;
  uint8_t _5402;
  uint32_t _5403;
  uint64_t _5404;
  uint64_t _5404__PHI_TEMPORARY;
  uint32_t _5405;
  uint32_t _5405__PHI_TEMPORARY;
  uint64_t _5406;
  uint64_t _5407;
  void* _5408;
  uint8_t _5409;
  uint32_t _5410;
  uint64_t _5411;
  uint64_t _5412;
  uint32_t _5413;
  uint64_t _5414;
  uint64_t _5415;
  uint64_t _5416;
  uint32_t _5417;
  uint8_t _5418;
  uint64_t _5419;
  void* _5420;
  void* _5421;
  uint64_t _5422;
  void* _5423;
  uint64_t _5424;
  void* _5425;
  uint8_t _5426;
  uint8_t _5427;
  uint8_t _5428;
  uint32_t _5429;
  uint64_t _5430;
  uint64_t _5430__PHI_TEMPORARY;
  uint32_t _5431;
  uint32_t _5431__PHI_TEMPORARY;
  uint64_t _5432;
  uint64_t _5433;
  void* _5434;
  uint8_t _5435;
  uint32_t _5436;
  uint64_t _5437;
  uint64_t _5438;
  uint32_t _5439;
  uint64_t _5440;
  uint32_t _5441;
  uint32_t _5441__PHI_TEMPORARY;
  uint64_t _5442;
  uint64_t _5443;
  uint64_t _5444;
  uint64_t _5445;
  uint64_t _5446;
  uint64_t _5447;
  uint64_t _5448;
  void* _5449;
  uint64_t _5450;
  void* _5451;
  uint64_t _5452;
  void* _5453;
  uint64_t _5454;
  uint64_t _5455;
  void* _5456;
  void* _5457;
  uint64_t _5458;
  void* _5459;
  uint64_t _5460;
  void* _5461;
  uint8_t _5462;
  uint8_t _5463;
  uint8_t _5464;
  uint32_t _5465;
  uint64_t _5466;
  uint64_t _5466__PHI_TEMPORARY;
  uint32_t _5467;
  uint32_t _5467__PHI_TEMPORARY;
  uint64_t _5468;
  uint64_t _5469;
  void* _5470;
  uint8_t _5471;
  uint32_t _5472;
  uint64_t _5473;
  uint64_t _5474;
  uint32_t _5475;
  uint64_t _5476;
  uint32_t _5477;
  uint32_t _5477__PHI_TEMPORARY;
  uint64_t _5478;
  uint64_t _5479;
  uint64_t _5480;
  uint64_t _5481;
  uint64_t _5482;
  void* _5483;
  uint64_t _5484;
  void* _5485;
  uint64_t _5486;
  void* _5487;
  uint64_t _5488;
  uint8_t _5489;
  uint64_t _5490;
  bool _5491;
  uint64_t _5492;
  bool _5493;
  void* _5494;
  void* _5495;
  uint64_t _5496;
  void* _5497;
  uint64_t _5498;
  void* _5499;
  uint8_t _5500;
  uint8_t _5501;
  uint8_t _5502;
  uint32_t _5503;
  uint64_t _5504;
  uint64_t _5504__PHI_TEMPORARY;
  uint32_t _5505;
  uint32_t _5505__PHI_TEMPORARY;
  uint64_t _5506;
  uint64_t _5507;
  void* _5508;
  uint8_t _5509;
  uint32_t _5510;
  uint64_t _5511;
  uint64_t _5512;
  uint32_t _5513;
  uint64_t _5514;
  uint32_t _5515;
  uint32_t _5515__PHI_TEMPORARY;
  uint64_t _5516;
  uint64_t _5517;
  uint64_t _5518;
  uint64_t _5519;
  uint64_t _5520;
  uint64_t _5521;
  uint64_t _5522;
  void* _5523;
  uint64_t _5524;
  uint8_t _5525;
  bool _5526;
  bool _5527;
  bool _5527__PHI_TEMPORARY;
  bool _5528;
  bool _5528__PHI_TEMPORARY;
  uint64_t _5529;
  void* _5530;
  void* _5531;
  uint64_t _5532;
  void* _5533;
  uint64_t _5534;
  void* _5535;
  uint8_t _5536;
  uint8_t _5537;
  uint8_t _5538;
  uint32_t _5539;
  uint64_t _5540;
  uint64_t _5540__PHI_TEMPORARY;
  uint32_t _5541;
  uint32_t _5541__PHI_TEMPORARY;
  uint64_t _5542;
  uint64_t _5543;
  void* _5544;
  uint8_t _5545;
  uint32_t _5546;
  uint64_t _5547;
  uint64_t _5548;
  uint32_t _5549;
  uint64_t _5550;
  uint32_t _5551;
  uint32_t _5551__PHI_TEMPORARY;
  uint64_t _5552;
  uint64_t _5553;
  uint64_t _5554;
  uint64_t _5555;
  uint64_t _5556;
  uint64_t _5557;
  uint64_t _5558;
  void* _5559;
  uint64_t _5560;
  uint64_t _5561;
  void* _5562;
  void* _5563;
  uint64_t _5564;
  void* _5565;
  uint64_t _5566;
  void* _5567;
  uint8_t _5568;
  uint8_t _5569;
  uint8_t _5570;
  uint32_t _5571;
  uint64_t _5572;
  uint64_t _5572__PHI_TEMPORARY;
  uint32_t _5573;
  uint32_t _5573__PHI_TEMPORARY;
  uint64_t _5574;
  uint64_t _5575;
  void* _5576;
  uint8_t _5577;
  uint32_t _5578;
  uint64_t _5579;
  uint64_t _5580;
  uint32_t _5581;
  uint64_t _5582;
  uint32_t _5583;
  uint32_t _5583__PHI_TEMPORARY;
  uint64_t _5584;
  uint64_t _5585;
  uint64_t _5586;
  uint64_t _5587;
  uint64_t _5588;
  uint64_t _5589;
  uint64_t _5590;
  void* _5591;
  uint64_t _5592;
  uint8_t _5593;
  uint16_t _5594;
  uint16_t _5594__PHI_TEMPORARY;
  bool _5595;
  void* _5596;
  void* _5597;
  uint64_t _5598;
  void* _5599;
  uint64_t _5600;
  void* _5601;
  uint8_t _5602;
  uint8_t _5603;
  uint8_t _5604;
  uint32_t _5605;
  uint64_t _5606;
  uint64_t _5606__PHI_TEMPORARY;
  uint32_t _5607;
  uint32_t _5607__PHI_TEMPORARY;
  uint64_t _5608;
  uint64_t _5609;
  void* _5610;
  uint8_t _5611;
  uint32_t _5612;
  uint64_t _5613;
  uint64_t _5614;
  uint32_t _5615;
  uint64_t _5616;
  uint32_t _5617;
  uint32_t _5617__PHI_TEMPORARY;
  uint64_t _5618;
  uint64_t _5619;
  uint64_t _5620;
  uint64_t _5621;
  uint64_t _5622;
  void* _5623;
  uint64_t _5624;
  void* _5625;
  uint64_t _5626;
  void* _5627;
  uint64_t _5628;
  uint8_t _5629;
  bool _5630;
  void* _5631;
  void* _5632;
  uint64_t _5633;
  void* _5634;
  uint64_t _5635;
  void* _5636;
  uint8_t _5637;
  uint8_t _5638;
  uint8_t _5639;
  uint32_t _5640;
  uint64_t _5641;
  uint64_t _5641__PHI_TEMPORARY;
  uint32_t _5642;
  uint32_t _5642__PHI_TEMPORARY;
  uint64_t _5643;
  uint64_t _5644;
  void* _5645;
  uint8_t _5646;
  uint32_t _5647;
  uint64_t _5648;
  uint64_t _5649;
  uint32_t _5650;
  uint64_t _5651;
  uint32_t _5652;
  uint32_t _5652__PHI_TEMPORARY;
  uint64_t _5653;
  uint64_t _5654;
  uint64_t _5655;
  uint64_t _5656;
  uint64_t _5657;
  void* _5658;
  uint64_t _5659;
  void* _5660;
  uint64_t _5661;
  void* _5662;
  uint64_t _5663;
  uint8_t _5664;
  bool _5665;
  bool _5666;
  bool _5666__PHI_TEMPORARY;
  bool _5667;
  bool _5667__PHI_TEMPORARY;
  bool _5668;
  bool _5668__PHI_TEMPORARY;
  uint16_t _5669;
  uint16_t _5669__PHI_TEMPORARY;
  uint64_t _5670;
  uint64_t _5671;
  uint32_t _5672;
  uint32_t _5673;
  uint64_t _5674;
  uint32_t _5675;
  uint32_t _5676;
  uint64_t _5677;
  bool _5678;
  bool _5679;
  uint32_t _5680;
  uint32_t _5681;
  uint32_t _5682;
  uint32_t _5683;
  uint32_t _5683__PHI_TEMPORARY;
  uint32_t _5684;
  uint64_t _5685;
  uint8_t _5686;
  void* _5687;
  void* _5688;
  uint64_t _5689;
  void* _5690;
  uint64_t _5691;
  void* _5692;
  uint8_t _5693;
  uint8_t _5694;
  uint8_t _5695;
  uint32_t _5696;
  uint64_t _5697;
  uint64_t _5697__PHI_TEMPORARY;
  uint32_t _5698;
  uint32_t _5698__PHI_TEMPORARY;
  uint64_t _5699;
  uint64_t _5700;
  void* _5701;
  uint8_t _5702;
  uint32_t _5703;
  uint64_t _5704;
  uint64_t _5705;
  uint32_t _5706;
  uint64_t _5707;
  uint32_t _5708;
  uint32_t _5708__PHI_TEMPORARY;
  uint64_t _5709;
  uint64_t _5710;
  uint64_t _5711;
  uint64_t _5712;
  uint64_t _5713;
  void* _5714;
  uint64_t _5715;
  void* _5716;
  uint64_t _5717;
  void* _5718;
  uint64_t _5719;
  uint16_t _5720;
  uint16_t _5720__PHI_TEMPORARY;

  _5003 = julia_accept_number_51(_4986, _4987);
  _5004 = ((&((uint8_t*)_4987)[((int64_t)32)]));
  _5005 = *(uint64_t*)_5004;
  _5006 = ((&((uint8_t*)_4987)[((int64_t)40)]));
  _5007 = llvm_lshr_u64(_5005, 32);
  _5008 = *(uint64_t*)_5006;
  _5009 = ((uint32_t)_5008);
  switch ((((uint32_t)_5007))) {
  default:
    goto _5721;
  case 771751936u:
    goto _5722;
  case 1694498816u:
    goto _5723;
  case 1711276032u:
    goto _5723;
  case 1157627904u:
    goto _5723;
  }

_5722:
  if ((_5009 == 771751936u)) {
    goto _5724;
  } else {
    goto _5725;
  }

_5726:
  _5010 = _5010__PHI_TEMPORARY;
  _5011 = memcpy(_4985, _5010, 32);
  return;
_5724:
  julia_emit_20((&_4989), _4986, _4987, _4988, 1);
  _5010__PHI_TEMPORARY = (&_4989);   /* for PHI node */
  goto _5726;

_5725:
  if ((_4988 == ((uint16_t)48))) {
    goto _5727;
  } else {
    goto _5728;
  }

_5727:
  _5012 = *(void**)_4987;
  _5013 = ((&((uint8_t*)_5012)[((int64_t)16)]));
  _5014 = *(uint64_t*)_5013;
  _5015 = ((&((uint8_t*)_5012)[((int64_t)8)]));
  _5016 = *(uint64_t*)_5015;
  if ((((int64_t)_5016) > ((int64_t)_5014))) {
    goto _5729;
  } else {
    _5033__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5730;
  }

_5729:
  _5017 = *(void**)_5012;
  _5018 = *(uint8_t*)(((&((uint8_t*)_5017)[((int64_t)_5014)])));
  *(uint64_t*)_5013 = (llvm_add_u64(_5014, 1));
  _5019 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5018)), 0);
  _5020 = llvm_sub_u8(32, (llvm_shl_u8(_5019, 3)));
  _5021 = (((uint32_t)(uint8_t)_5018)) << 24;
  if ((((uint8_t)_5020) > ((uint8_t)((uint8_t)16)))) {
    _5033__PHI_TEMPORARY = _5021;   /* for PHI node */
    goto _5730;
  } else {
    _5022__PHI_TEMPORARY = 16;   /* for PHI node */
    _5023__PHI_TEMPORARY = _5021;   /* for PHI node */
    goto _5731;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5731:
  _5022 = _5022__PHI_TEMPORARY;
  _5023 = _5023__PHI_TEMPORARY;
  if (((((int64_t)_5022) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5022) < ((uint64_t)(((uint64_t)(uint8_t)_5020)))))) {
    _5033__PHI_TEMPORARY = _5023;   /* for PHI node */
    goto _5730;
  } else {
    goto _5732;
  }

_5732:
  _5024 = *(uint64_t*)_5013;
  _5025 = *(uint64_t*)_5015;
  if ((((int64_t)_5025) > ((int64_t)_5024))) {
    goto _5733;
  } else {
    _5033__PHI_TEMPORARY = _5023;   /* for PHI node */
    goto _5730;
  }

_5733:
  _5026 = *(void**)_5012;
  _5027 = *(uint8_t*)(((&((uint8_t*)_5026)[((int64_t)_5024)])));
  if ((((int8_t)_5027) > ((int8_t)((uint8_t)-65)))) {
    _5033__PHI_TEMPORARY = _5023;   /* for PHI node */
    goto _5730;
  } else {
    goto _5734;
  }

_5734:
  _5028 = llvm_select_u32((((int64_t)_5024) < ((int64_t)_5025)), (((uint32_t)(uint8_t)_5027)), 0);
  _5029 = *(uint64_t*)_5013;
  *(uint64_t*)_5013 = (llvm_add_u64(_5029, 1));
  _5030 = llvm_neg_u64(_5022);
  _5031 = _5023 | (llvm_select_u32((((int64_t)_5022) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5030) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5028, (((uint32_t)_5030)))))), (llvm_select_u32((((uint64_t)_5022) > ((uint64_t)UINT64_C(31))), 0, (_5028 << (((uint32_t)_5022)))))));
  _5032 = llvm_add_u64(_5022, -8);
  _5022__PHI_TEMPORARY = _5032;   /* for PHI node */
  _5023__PHI_TEMPORARY = _5031;   /* for PHI node */
  goto _5731;

  } while (1); /* end of syntactic loop '' */
_5730:
  _5033 = _5033__PHI_TEMPORARY;
  _5034 = *(uint64_t*)_5004;
  _5035 = *(uint64_t*)_5006;
  _5036 = jsyn_cbe_fshl_i64(_5035, _5034, 32);
  _5037 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5033)), _5035, 32);
  *(uint64_t*)_5004 = _5036;
  *(uint64_t*)_5006 = _5037;
  _5038 = ((&((uint8_t*)_4987)[((int64_t)56)]));
  _5039 = *(uint64_t*)_5038;
  _5040 = ((&((uint8_t*)_4987)[((int64_t)64)]));
  _5041 = *(uint64_t*)_5040;
  _5042 = ((&((uint8_t*)_4987)[((int64_t)72)]));
  _5043 = *(uint64_t*)_5042;
  _5044 = *(void**)_4987;
  _5045 = *(uint64_t*)(((&((uint8_t*)_5044)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4987)[((int64_t)48)]))) = _5039;
  *(uint64_t*)_5038 = _5041;
  *(uint64_t*)_5040 = _5043;
  *(uint64_t*)_5042 = _5045;
  julia_emit_20((&_4990), _4986, _4987, 754, 1);
  _5010__PHI_TEMPORARY = (&_4990);   /* for PHI node */
  goto _5726;

_5728:
  switch (_5009) {
  default:
    goto _5735;
  case 1056964608u:
    goto _5736;
  case 603979776u:
    goto _5736;
  case 973078528u:
    goto _5736;
  case 654311424u:
    goto _5736;
  }

_5735:
  _5046 = julia_is_operator_start_char_23(_4986, _5009);
  if ((((bool)_5046&1u))) {
    goto _5737;
  } else {
    goto _5736;
  }

_5737:
  _5047 = *(void**)_4987;
  _5048 = ((&((uint8_t*)_5047)[((int64_t)16)]));
  _5049 = *(uint64_t*)_5048;
  _5050 = ((&((uint8_t*)_5047)[((int64_t)8)]));
  _5051 = *(uint64_t*)_5050;
  if ((((int64_t)_5051) > ((int64_t)_5049))) {
    goto _5738;
  } else {
    _5068__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5739;
  }

_5738:
  _5052 = *(void**)_5047;
  _5053 = *(uint8_t*)(((&((uint8_t*)_5052)[((int64_t)_5049)])));
  *(uint64_t*)_5048 = (llvm_add_u64(_5049, 1));
  _5054 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5053)), 0);
  _5055 = llvm_sub_u8(32, (llvm_shl_u8(_5054, 3)));
  _5056 = (((uint32_t)(uint8_t)_5053)) << 24;
  if ((((uint8_t)_5055) > ((uint8_t)((uint8_t)16)))) {
    _5068__PHI_TEMPORARY = _5056;   /* for PHI node */
    goto _5739;
  } else {
    _5057__PHI_TEMPORARY = 16;   /* for PHI node */
    _5058__PHI_TEMPORARY = _5056;   /* for PHI node */
    goto _5740;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5740:
  _5057 = _5057__PHI_TEMPORARY;
  _5058 = _5058__PHI_TEMPORARY;
  if (((((int64_t)_5057) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5057) < ((uint64_t)(((uint64_t)(uint8_t)_5055)))))) {
    _5068__PHI_TEMPORARY = _5058;   /* for PHI node */
    goto _5739;
  } else {
    goto _5741;
  }

_5741:
  _5059 = *(uint64_t*)_5048;
  _5060 = *(uint64_t*)_5050;
  if ((((int64_t)_5060) > ((int64_t)_5059))) {
    goto _5742;
  } else {
    _5068__PHI_TEMPORARY = _5058;   /* for PHI node */
    goto _5739;
  }

_5742:
  _5061 = *(void**)_5047;
  _5062 = *(uint8_t*)(((&((uint8_t*)_5061)[((int64_t)_5059)])));
  if ((((int8_t)_5062) > ((int8_t)((uint8_t)-65)))) {
    _5068__PHI_TEMPORARY = _5058;   /* for PHI node */
    goto _5739;
  } else {
    goto _5743;
  }

_5743:
  _5063 = llvm_select_u32((((int64_t)_5059) < ((int64_t)_5060)), (((uint32_t)(uint8_t)_5062)), 0);
  _5064 = *(uint64_t*)_5048;
  *(uint64_t*)_5048 = (llvm_add_u64(_5064, 1));
  _5065 = llvm_neg_u64(_5057);
  _5066 = _5058 | (llvm_select_u32((((int64_t)_5057) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5065) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5063, (((uint32_t)_5065)))))), (llvm_select_u32((((uint64_t)_5057) > ((uint64_t)UINT64_C(31))), 0, (_5063 << (((uint32_t)_5057)))))));
  _5067 = llvm_add_u64(_5057, -8);
  _5057__PHI_TEMPORARY = _5067;   /* for PHI node */
  _5058__PHI_TEMPORARY = _5066;   /* for PHI node */
  goto _5740;

  } while (1); /* end of syntactic loop '' */
_5739:
  _5068 = _5068__PHI_TEMPORARY;
  _5069 = *(uint64_t*)_5004;
  _5070 = *(uint64_t*)_5006;
  _5071 = jsyn_cbe_fshl_i64(_5070, _5069, 32);
  _5072 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5068)), _5070, 32);
  *(uint64_t*)_5004 = _5071;
  *(uint64_t*)_5006 = _5072;
  _5073 = ((&((uint8_t*)_4987)[((int64_t)56)]));
  _5074 = *(uint64_t*)_5073;
  _5075 = ((&((uint8_t*)_4987)[((int64_t)64)]));
  _5076 = *(uint64_t*)_5075;
  _5077 = ((&((uint8_t*)_4987)[((int64_t)72)]));
  _5078 = *(uint64_t*)_5077;
  _5079 = *(void**)_4987;
  _5080 = *(uint64_t*)(((&((uint8_t*)_5079)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4987)[((int64_t)48)]))) = _5074;
  *(uint64_t*)_5073 = _5076;
  *(uint64_t*)_5075 = _5078;
  *(uint64_t*)_5077 = _5080;
  julia_emit_20((&_4991), _4986, _4987, 756, 1);
  _5010__PHI_TEMPORARY = (&_4991);   /* for PHI node */
  goto _5726;

_5736:
  _5081 = *(void**)_4987;
  _5082 = ((&((uint8_t*)_5081)[((int64_t)16)]));
  _5083 = *(uint64_t*)_5082;
  _5084 = ((&((uint8_t*)_5081)[((int64_t)8)]));
  _5085 = *(uint64_t*)_5084;
  if ((((int64_t)_5085) > ((int64_t)_5083))) {
    goto _5744;
  } else {
    _5102__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5745;
  }

_5744:
  _5086 = *(void**)_5081;
  _5087 = *(uint8_t*)(((&((uint8_t*)_5086)[((int64_t)_5083)])));
  *(uint64_t*)_5082 = (llvm_add_u64(_5083, 1));
  _5088 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5087)), 0);
  _5089 = llvm_sub_u8(32, (llvm_shl_u8(_5088, 3)));
  _5090 = (((uint32_t)(uint8_t)_5087)) << 24;
  if ((((uint8_t)_5089) > ((uint8_t)((uint8_t)16)))) {
    _5102__PHI_TEMPORARY = _5090;   /* for PHI node */
    goto _5745;
  } else {
    _5091__PHI_TEMPORARY = 16;   /* for PHI node */
    _5092__PHI_TEMPORARY = _5090;   /* for PHI node */
    goto _5746;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5746:
  _5091 = _5091__PHI_TEMPORARY;
  _5092 = _5092__PHI_TEMPORARY;
  if (((((int64_t)_5091) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5091) < ((uint64_t)(((uint64_t)(uint8_t)_5089)))))) {
    _5102__PHI_TEMPORARY = _5092;   /* for PHI node */
    goto _5745;
  } else {
    goto _5747;
  }

_5747:
  _5093 = *(uint64_t*)_5082;
  _5094 = *(uint64_t*)_5084;
  if ((((int64_t)_5094) > ((int64_t)_5093))) {
    goto _5748;
  } else {
    _5102__PHI_TEMPORARY = _5092;   /* for PHI node */
    goto _5745;
  }

_5748:
  _5095 = *(void**)_5081;
  _5096 = *(uint8_t*)(((&((uint8_t*)_5095)[((int64_t)_5093)])));
  if ((((int8_t)_5096) > ((int8_t)((uint8_t)-65)))) {
    _5102__PHI_TEMPORARY = _5092;   /* for PHI node */
    goto _5745;
  } else {
    goto _5749;
  }

_5749:
  _5097 = llvm_select_u32((((int64_t)_5093) < ((int64_t)_5094)), (((uint32_t)(uint8_t)_5096)), 0);
  _5098 = *(uint64_t*)_5082;
  *(uint64_t*)_5082 = (llvm_add_u64(_5098, 1));
  _5099 = llvm_neg_u64(_5091);
  _5100 = _5092 | (llvm_select_u32((((int64_t)_5091) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5099) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5097, (((uint32_t)_5099)))))), (llvm_select_u32((((uint64_t)_5091) > ((uint64_t)UINT64_C(31))), 0, (_5097 << (((uint32_t)_5091)))))));
  _5101 = llvm_add_u64(_5091, -8);
  _5091__PHI_TEMPORARY = _5101;   /* for PHI node */
  _5092__PHI_TEMPORARY = _5100;   /* for PHI node */
  goto _5746;

  } while (1); /* end of syntactic loop '' */
_5745:
  _5102 = _5102__PHI_TEMPORARY;
  _5103 = *(uint64_t*)_5004;
  _5104 = *(uint64_t*)_5006;
  _5105 = jsyn_cbe_fshl_i64(_5104, _5103, 32);
  _5106 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5102)), _5104, 32);
  *(uint64_t*)_5004 = _5105;
  *(uint64_t*)_5006 = _5106;
  _5107 = ((&((uint8_t*)_4987)[((int64_t)48)]));
  _5108 = ((&((uint8_t*)_4987)[((int64_t)56)]));
  _5109 = *(uint64_t*)_5108;
  _5110 = ((&((uint8_t*)_4987)[((int64_t)64)]));
  _5111 = *(uint64_t*)_5110;
  _5112 = ((&((uint8_t*)_4987)[((int64_t)72)]));
  _5113 = *(uint64_t*)_5112;
  _5114 = *(void**)_4987;
  _5115 = *(uint64_t*)(((&((uint8_t*)_5114)[((int64_t)16)])));
  *(uint64_t*)_5107 = _5109;
  *(uint64_t*)_5108 = _5111;
  *(uint64_t*)_5110 = _5113;
  *(uint64_t*)_5112 = _5115;
  _5116 = *(uint64_t*)_5004;
  if (((_5116 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920))) {
    goto _5750;
  } else {
    goto _5751;
  }

_5750:
  _5117 = *(void**)_4987;
  _5118 = ((&((uint8_t*)_5117)[((int64_t)16)]));
  _5119 = *(uint64_t*)_5118;
  _5120 = ((&((uint8_t*)_5117)[((int64_t)8)]));
  _5121 = *(uint64_t*)_5120;
  if ((((int64_t)_5121) > ((int64_t)_5119))) {
    goto _5752;
  } else {
    _5138__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5753;
  }

_5752:
  _5122 = *(void**)_5117;
  _5123 = *(uint8_t*)(((&((uint8_t*)_5122)[((int64_t)_5119)])));
  *(uint64_t*)_5118 = (llvm_add_u64(_5119, 1));
  _5124 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5123)), 0);
  _5125 = llvm_sub_u8(32, (llvm_shl_u8(_5124, 3)));
  _5126 = (((uint32_t)(uint8_t)_5123)) << 24;
  if ((((uint8_t)_5125) > ((uint8_t)((uint8_t)16)))) {
    _5138__PHI_TEMPORARY = _5126;   /* for PHI node */
    goto _5753;
  } else {
    _5127__PHI_TEMPORARY = 16;   /* for PHI node */
    _5128__PHI_TEMPORARY = _5126;   /* for PHI node */
    goto _5754;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5754:
  _5127 = _5127__PHI_TEMPORARY;
  _5128 = _5128__PHI_TEMPORARY;
  if (((((int64_t)_5127) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5127) < ((uint64_t)(((uint64_t)(uint8_t)_5125)))))) {
    _5138__PHI_TEMPORARY = _5128;   /* for PHI node */
    goto _5753;
  } else {
    goto _5755;
  }

_5755:
  _5129 = *(uint64_t*)_5118;
  _5130 = *(uint64_t*)_5120;
  if ((((int64_t)_5130) > ((int64_t)_5129))) {
    goto _5756;
  } else {
    _5138__PHI_TEMPORARY = _5128;   /* for PHI node */
    goto _5753;
  }

_5756:
  _5131 = *(void**)_5117;
  _5132 = *(uint8_t*)(((&((uint8_t*)_5131)[((int64_t)_5129)])));
  if ((((int8_t)_5132) > ((int8_t)((uint8_t)-65)))) {
    _5138__PHI_TEMPORARY = _5128;   /* for PHI node */
    goto _5753;
  } else {
    goto _5757;
  }

_5757:
  _5133 = llvm_select_u32((((int64_t)_5129) < ((int64_t)_5130)), (((uint32_t)(uint8_t)_5132)), 0);
  _5134 = *(uint64_t*)_5118;
  *(uint64_t*)_5118 = (llvm_add_u64(_5134, 1));
  _5135 = llvm_neg_u64(_5127);
  _5136 = _5128 | (llvm_select_u32((((int64_t)_5127) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5135) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5133, (((uint32_t)_5135)))))), (llvm_select_u32((((uint64_t)_5127) > ((uint64_t)UINT64_C(31))), 0, (_5133 << (((uint32_t)_5127)))))));
  _5137 = llvm_add_u64(_5127, -8);
  _5127__PHI_TEMPORARY = _5137;   /* for PHI node */
  _5128__PHI_TEMPORARY = _5136;   /* for PHI node */
  goto _5754;

  } while (1); /* end of syntactic loop '' */
_5753:
  _5138 = _5138__PHI_TEMPORARY;
  _5139 = *(uint64_t*)_5004;
  _5140 = *(uint64_t*)_5006;
  _5141 = jsyn_cbe_fshl_i64(_5140, _5139, 32);
  _5142 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5138)), _5140, 32);
  *(uint64_t*)_5004 = _5141;
  *(uint64_t*)_5006 = _5142;
  _5143 = *(uint64_t*)_5108;
  _5144 = *(uint64_t*)_5110;
  _5145 = *(uint64_t*)_5112;
  _5146 = *(void**)_4987;
  _5147 = *(uint64_t*)(((&((uint8_t*)_5146)[((int64_t)16)])));
  *(uint64_t*)_5107 = _5143;
  *(uint64_t*)_5108 = _5144;
  *(uint64_t*)_5110 = _5145;
  *(uint64_t*)_5112 = _5147;
  julia_emit_20((&_4992), _4986, _4987, 754, 1);
  _5010__PHI_TEMPORARY = (&_4992);   /* for PHI node */
  goto _5726;

_5751:
  _5148 = julia_accept_number_51(_4986, _4987);
  _5149 = *(uint64_t*)_5004;
  _5150 = llvm_lshr_u64(_5149, 32);
  _5151 = ((uint32_t)_5150);
  _5152 = *(uint64_t*)_5006;
  _5153 = ((uint32_t)_5152);
  switch ((((uint32_t)_5150))) {
  default:
    goto _5758;
  case 1694498816u:
    goto _5759;
  case 1711276032u:
    goto _5759;
  case 1157627904u:
    goto _5759;
  }

_5759:
  if (((((uint32_t)(llvm_add_u32(_5153, -805306368))) < ((uint32_t)150994945u)) | (_5153 == 721420288u))) {
    goto _5760;
  } else {
    goto _5761;
  }

_5761:
  switch (_5153) {
  default:
    goto _5758;
  case 3800601088u:
    goto _5760;
  case 754974720u:
    goto _5760;
  }

_5760:
  _5154 = llvm_select_u16((_5150 == UINT64_C(1711276032)), 49, 48);
  _5155 = *(void**)_4987;
  _5156 = ((&((uint8_t*)_5155)[((int64_t)16)]));
  _5157 = *(uint64_t*)_5156;
  _5158 = ((&((uint8_t*)_5155)[((int64_t)8)]));
  _5159 = *(uint64_t*)_5158;
  if ((((int64_t)_5159) > ((int64_t)_5157))) {
    goto _5762;
  } else {
    _5176__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5763;
  }

_5762:
  _5160 = *(void**)_5155;
  _5161 = *(uint8_t*)(((&((uint8_t*)_5160)[((int64_t)_5157)])));
  *(uint64_t*)_5156 = (llvm_add_u64(_5157, 1));
  _5162 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5161)), 0);
  _5163 = llvm_sub_u8(32, (llvm_shl_u8(_5162, 3)));
  _5164 = (((uint32_t)(uint8_t)_5161)) << 24;
  if ((((uint8_t)_5163) > ((uint8_t)((uint8_t)16)))) {
    _5176__PHI_TEMPORARY = _5164;   /* for PHI node */
    goto _5763;
  } else {
    _5165__PHI_TEMPORARY = 16;   /* for PHI node */
    _5166__PHI_TEMPORARY = _5164;   /* for PHI node */
    goto _5764;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5764:
  _5165 = _5165__PHI_TEMPORARY;
  _5166 = _5166__PHI_TEMPORARY;
  if (((((int64_t)_5165) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5165) < ((uint64_t)(((uint64_t)(uint8_t)_5163)))))) {
    _5176__PHI_TEMPORARY = _5166;   /* for PHI node */
    goto _5763;
  } else {
    goto _5765;
  }

_5765:
  _5167 = *(uint64_t*)_5156;
  _5168 = *(uint64_t*)_5158;
  if ((((int64_t)_5168) > ((int64_t)_5167))) {
    goto _5766;
  } else {
    _5176__PHI_TEMPORARY = _5166;   /* for PHI node */
    goto _5763;
  }

_5766:
  _5169 = *(void**)_5155;
  _5170 = *(uint8_t*)(((&((uint8_t*)_5169)[((int64_t)_5167)])));
  if ((((int8_t)_5170) > ((int8_t)((uint8_t)-65)))) {
    _5176__PHI_TEMPORARY = _5166;   /* for PHI node */
    goto _5763;
  } else {
    goto _5767;
  }

_5767:
  _5171 = llvm_select_u32((((int64_t)_5167) < ((int64_t)_5168)), (((uint32_t)(uint8_t)_5170)), 0);
  _5172 = *(uint64_t*)_5156;
  *(uint64_t*)_5156 = (llvm_add_u64(_5172, 1));
  _5173 = llvm_neg_u64(_5165);
  _5174 = _5166 | (llvm_select_u32((((int64_t)_5165) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5173) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5171, (((uint32_t)_5173)))))), (llvm_select_u32((((uint64_t)_5165) > ((uint64_t)UINT64_C(31))), 0, (_5171 << (((uint32_t)_5165)))))));
  _5175 = llvm_add_u64(_5165, -8);
  _5165__PHI_TEMPORARY = _5175;   /* for PHI node */
  _5166__PHI_TEMPORARY = _5174;   /* for PHI node */
  goto _5764;

  } while (1); /* end of syntactic loop '' */
_5763:
  _5176 = _5176__PHI_TEMPORARY;
  _5177 = *(uint64_t*)_5004;
  _5178 = *(uint64_t*)_5006;
  _5179 = jsyn_cbe_fshl_i64(_5178, _5177, 32);
  _5180 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5176)), _5178, 32);
  *(uint64_t*)_5004 = _5179;
  *(uint64_t*)_5006 = _5180;
  _5181 = *(uint64_t*)_5108;
  _5182 = *(uint64_t*)_5110;
  _5183 = *(uint64_t*)_5112;
  _5184 = *(void**)_4987;
  _5185 = *(uint64_t*)(((&((uint8_t*)_5184)[((int64_t)16)])));
  *(uint64_t*)_5107 = _5181;
  *(uint64_t*)_5108 = _5182;
  *(uint64_t*)_5110 = _5183;
  *(uint64_t*)_5112 = _5185;
  _5186 = *(uint64_t*)_5004;
  switch ((((uint32_t)(llvm_lshr_u64(_5186, 32))))) {
  default:
    _5219__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5768;
  case 721420288u:
    goto _5769;
  case 3800601088u:
    goto _5769;
  case 754974720u:
    goto _5769;
  }

_5769:
  _5187 = *(void**)_4987;
  _5188 = ((&((uint8_t*)_5187)[((int64_t)16)]));
  _5189 = *(uint64_t*)_5188;
  _5190 = ((&((uint8_t*)_5187)[((int64_t)8)]));
  _5191 = *(uint64_t*)_5190;
  if ((((int64_t)_5191) > ((int64_t)_5189))) {
    goto _5770;
  } else {
    _5208__PHI_TEMPORARY = -1;   /* for PHI node */
    _5209__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5771;
  }

_5770:
  _5192 = *(void**)_5187;
  _5193 = *(uint8_t*)(((&((uint8_t*)_5192)[((int64_t)_5189)])));
  *(uint64_t*)_5188 = (llvm_add_u64(_5189, 1));
  _5194 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5193)), 0);
  _5195 = llvm_sub_u8(32, (llvm_shl_u8(_5194, 3)));
  _5196 = (((uint32_t)(uint8_t)_5193)) << 24;
  if ((((uint8_t)_5195) > ((uint8_t)((uint8_t)16)))) {
    _5208__PHI_TEMPORARY = _5196;   /* for PHI node */
    _5209__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5771;
  } else {
    _5197__PHI_TEMPORARY = 16;   /* for PHI node */
    _5198__PHI_TEMPORARY = _5196;   /* for PHI node */
    goto _5772;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5772:
  _5197 = _5197__PHI_TEMPORARY;
  _5198 = _5198__PHI_TEMPORARY;
  if (((((int64_t)_5197) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5197) < ((uint64_t)(((uint64_t)(uint8_t)_5195)))))) {
    _5208__PHI_TEMPORARY = _5198;   /* for PHI node */
    _5209__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5771;
  } else {
    goto _5773;
  }

_5773:
  _5199 = *(uint64_t*)_5188;
  _5200 = *(uint64_t*)_5190;
  if ((((int64_t)_5200) > ((int64_t)_5199))) {
    goto _5774;
  } else {
    _5208__PHI_TEMPORARY = _5198;   /* for PHI node */
    _5209__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5771;
  }

_5774:
  _5201 = *(void**)_5187;
  _5202 = *(uint8_t*)(((&((uint8_t*)_5201)[((int64_t)_5199)])));
  if ((((int8_t)_5202) > ((int8_t)((uint8_t)-65)))) {
    _5208__PHI_TEMPORARY = _5198;   /* for PHI node */
    _5209__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5771;
  } else {
    goto _5775;
  }

_5775:
  _5203 = llvm_select_u32((((int64_t)_5199) < ((int64_t)_5200)), (((uint32_t)(uint8_t)_5202)), 0);
  _5204 = *(uint64_t*)_5188;
  *(uint64_t*)_5188 = (llvm_add_u64(_5204, 1));
  _5205 = llvm_neg_u64(_5197);
  _5206 = _5198 | (llvm_select_u32((((int64_t)_5197) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5205) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5203, (((uint32_t)_5205)))))), (llvm_select_u32((((uint64_t)_5197) > ((uint64_t)UINT64_C(31))), 0, (_5203 << (((uint32_t)_5197)))))));
  _5207 = llvm_add_u64(_5197, -8);
  _5197__PHI_TEMPORARY = _5207;   /* for PHI node */
  _5198__PHI_TEMPORARY = _5206;   /* for PHI node */
  goto _5772;

  } while (1); /* end of syntactic loop '' */
_5771:
  _5208 = _5208__PHI_TEMPORARY;
  _5209 = _5209__PHI_TEMPORARY;
  _5210 = *(uint64_t*)_5004;
  _5211 = *(uint64_t*)_5006;
  _5212 = jsyn_cbe_fshl_i64(_5211, _5210, 32);
  _5213 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5208)), _5211, 32);
  *(uint64_t*)_5004 = _5212;
  *(uint64_t*)_5006 = _5213;
  _5214 = *(uint64_t*)_5108;
  _5215 = *(uint64_t*)_5110;
  _5216 = *(uint64_t*)_5112;
  _5217 = *(void**)_4987;
  _5218 = *(uint64_t*)(((&((uint8_t*)_5217)[((int64_t)16)])));
  *(uint64_t*)_5107 = _5214;
  *(uint64_t*)_5108 = _5215;
  *(uint64_t*)_5110 = _5216;
  *(uint64_t*)_5112 = _5218;
  _5219__PHI_TEMPORARY = _5209;   /* for PHI node */
  goto _5768;

_5768:
  _5219 = _5219__PHI_TEMPORARY;
  _5220 = *(uint64_t*)_5004;
  _5221 = llvm_lshr_u64(_5220, 32);
  if ((((((uint64_t)_5220) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5221 != UINT64_C(805306368))) | ((((uint64_t)_5220) > ((uint64_t)UINT64_C(4107282860161892351))) & (_5221 != UINT64_C(956301312))))) {
    goto _5776;
  } else {
    goto _5777;
  }

_5777:
  _5222 = *(void**)_4987;
  _5223 = ((&((uint8_t*)_5222)[((int64_t)16)]));
  _5224 = *(uint64_t*)_5223;
  _5225 = ((&((uint8_t*)_5222)[((int64_t)8)]));
  _5226 = *(uint64_t*)_5225;
  if ((((int64_t)_5226) > ((int64_t)_5224))) {
    goto _5778;
  } else {
    _5208__PHI_TEMPORARY = -1;   /* for PHI node */
    _5209__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5771;
  }

_5778:
  _5227 = *(void**)_5222;
  _5228 = *(uint8_t*)(((&((uint8_t*)_5227)[((int64_t)_5224)])));
  *(uint64_t*)_5223 = (llvm_add_u64(_5224, 1));
  _5229 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5228)), 0);
  _5230 = llvm_sub_u8(32, (llvm_shl_u8(_5229, 3)));
  _5231 = (((uint32_t)(uint8_t)_5228)) << 24;
  if ((((uint8_t)_5230) > ((uint8_t)((uint8_t)16)))) {
    _5208__PHI_TEMPORARY = _5231;   /* for PHI node */
    _5209__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5771;
  } else {
    _5232__PHI_TEMPORARY = 16;   /* for PHI node */
    _5233__PHI_TEMPORARY = _5231;   /* for PHI node */
    goto _5779;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5779:
  _5232 = _5232__PHI_TEMPORARY;
  _5233 = _5233__PHI_TEMPORARY;
  if (((((int64_t)_5232) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5232) < ((uint64_t)(((uint64_t)(uint8_t)_5230)))))) {
    _5208__PHI_TEMPORARY = _5233;   /* for PHI node */
    _5209__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5771;
  } else {
    goto _5780;
  }

_5780:
  _5234 = *(uint64_t*)_5223;
  _5235 = *(uint64_t*)_5225;
  if ((((int64_t)_5235) > ((int64_t)_5234))) {
    goto _5781;
  } else {
    _5208__PHI_TEMPORARY = _5233;   /* for PHI node */
    _5209__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5771;
  }

_5781:
  _5236 = *(void**)_5222;
  _5237 = *(uint8_t*)(((&((uint8_t*)_5236)[((int64_t)_5234)])));
  if ((((int8_t)_5237) > ((int8_t)((uint8_t)-65)))) {
    _5208__PHI_TEMPORARY = _5233;   /* for PHI node */
    _5209__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5771;
  } else {
    goto _5782;
  }

_5782:
  _5238 = llvm_select_u32((((int64_t)_5234) < ((int64_t)_5235)), (((uint32_t)(uint8_t)_5237)), 0);
  _5239 = *(uint64_t*)_5223;
  *(uint64_t*)_5223 = (llvm_add_u64(_5239, 1));
  _5240 = llvm_neg_u64(_5232);
  _5241 = _5233 | (llvm_select_u32((((int64_t)_5232) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5240) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5238, (((uint32_t)_5240)))))), (llvm_select_u32((((uint64_t)_5232) > ((uint64_t)UINT64_C(31))), 0, (_5238 << (((uint32_t)_5232)))))));
  _5242 = llvm_add_u64(_5232, -8);
  _5232__PHI_TEMPORARY = _5242;   /* for PHI node */
  _5233__PHI_TEMPORARY = _5241;   /* for PHI node */
  goto _5779;

  } while (1); /* end of syntactic loop '' */
_5776:
  if (_5219) {
    goto _5783;
  } else {
    goto _5784;
  }

_5784:
  _5243 = *(uint64_t*)_5004;
  _5244 = *(uint64_t*)_5006;
  _5245 = ((uint32_t)_5244);
  if (((_5243 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5785;
  } else {
    _5720__PHI_TEMPORARY = _5154;   /* for PHI node */
    goto _5786;
  }

_5785:
  switch (_5245) {
  default:
    goto _5787;
  case 1056964608u:
    goto _5788;
  case 603979776u:
    goto _5788;
  case 973078528u:
    goto _5788;
  case 654311424u:
    goto _5788;
  }

_5787:
  _5246 = julia_is_operator_start_char_23(_4986, _5245);
  if ((((bool)_5246&1u))) {
    _5720__PHI_TEMPORARY = _5154;   /* for PHI node */
    goto _5786;
  } else {
    goto _5788;
  }

_5788:
  _5247 = *(void**)_4987;
  _5248 = ((&((uint8_t*)_5247)[((int64_t)16)]));
  _5249 = *(uint64_t*)_5248;
  _5250 = ((&((uint8_t*)_5247)[((int64_t)8)]));
  _5251 = *(uint64_t*)_5250;
  if ((((int64_t)_5251) > ((int64_t)_5249))) {
    goto _5789;
  } else {
    _5268__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5790;
  }

_5789:
  _5252 = *(void**)_5247;
  _5253 = *(uint8_t*)(((&((uint8_t*)_5252)[((int64_t)_5249)])));
  *(uint64_t*)_5248 = (llvm_add_u64(_5249, 1));
  _5254 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5253)), 0);
  _5255 = llvm_sub_u8(32, (llvm_shl_u8(_5254, 3)));
  _5256 = (((uint32_t)(uint8_t)_5253)) << 24;
  if ((((uint8_t)_5255) > ((uint8_t)((uint8_t)16)))) {
    _5268__PHI_TEMPORARY = _5256;   /* for PHI node */
    goto _5790;
  } else {
    _5257__PHI_TEMPORARY = 16;   /* for PHI node */
    _5258__PHI_TEMPORARY = _5256;   /* for PHI node */
    goto _5791;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5791:
  _5257 = _5257__PHI_TEMPORARY;
  _5258 = _5258__PHI_TEMPORARY;
  if (((((int64_t)_5257) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5257) < ((uint64_t)(((uint64_t)(uint8_t)_5255)))))) {
    _5268__PHI_TEMPORARY = _5258;   /* for PHI node */
    goto _5790;
  } else {
    goto _5792;
  }

_5792:
  _5259 = *(uint64_t*)_5248;
  _5260 = *(uint64_t*)_5250;
  if ((((int64_t)_5260) > ((int64_t)_5259))) {
    goto _5793;
  } else {
    _5268__PHI_TEMPORARY = _5258;   /* for PHI node */
    goto _5790;
  }

_5793:
  _5261 = *(void**)_5247;
  _5262 = *(uint8_t*)(((&((uint8_t*)_5261)[((int64_t)_5259)])));
  if ((((int8_t)_5262) > ((int8_t)((uint8_t)-65)))) {
    _5268__PHI_TEMPORARY = _5258;   /* for PHI node */
    goto _5790;
  } else {
    goto _5794;
  }

_5794:
  _5263 = llvm_select_u32((((int64_t)_5259) < ((int64_t)_5260)), (((uint32_t)(uint8_t)_5262)), 0);
  _5264 = *(uint64_t*)_5248;
  *(uint64_t*)_5248 = (llvm_add_u64(_5264, 1));
  _5265 = llvm_neg_u64(_5257);
  _5266 = _5258 | (llvm_select_u32((((int64_t)_5257) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5265) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5263, (((uint32_t)_5265)))))), (llvm_select_u32((((uint64_t)_5257) > ((uint64_t)UINT64_C(31))), 0, (_5263 << (((uint32_t)_5257)))))));
  _5267 = llvm_add_u64(_5257, -8);
  _5257__PHI_TEMPORARY = _5267;   /* for PHI node */
  _5258__PHI_TEMPORARY = _5266;   /* for PHI node */
  goto _5791;

  } while (1); /* end of syntactic loop '' */
_5790:
  _5268 = _5268__PHI_TEMPORARY;
  _5269 = *(uint64_t*)_5004;
  _5270 = *(uint64_t*)_5006;
  _5271 = jsyn_cbe_fshl_i64(_5270, _5269, 32);
  _5272 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5268)), _5270, 32);
  *(uint64_t*)_5004 = _5271;
  *(uint64_t*)_5006 = _5272;
  _5273 = *(uint64_t*)_5108;
  _5274 = *(uint64_t*)_5110;
  _5275 = *(uint64_t*)_5112;
  _5276 = *(void**)_4987;
  _5277 = *(uint64_t*)(((&((uint8_t*)_5276)[((int64_t)16)])));
  *(uint64_t*)_5107 = _5273;
  *(uint64_t*)_5108 = _5274;
  *(uint64_t*)_5110 = _5275;
  *(uint64_t*)_5112 = _5277;
  julia_emit_20((&_4993), _4986, _4987, 754, 1);
  _5010__PHI_TEMPORARY = (&_4993);   /* for PHI node */
  goto _5726;

_5783:
  julia_emit_20((&_4995), _4986, _4987, 754, 1);
  _5010__PHI_TEMPORARY = (&_4995);   /* for PHI node */
  goto _5726;

_5758:
  if ((llvm_select_bool((_5150 != UINT64_C(771751936)), 1, (_5153 == 771751936u)))) {
    goto _5795;
  } else {
    goto _5796;
  }

_5796:
  switch (_5153) {
  default:
    goto _5797;
  case 1056964608u:
    goto _5798;
  case 603979776u:
    goto _5798;
  case 973078528u:
    goto _5798;
  case 654311424u:
    goto _5798;
  }

_5797:
  _5278 = julia_is_operator_start_char_23(_4986, _5153);
  if ((((bool)_5278&1u))) {
    goto _5795;
  } else {
    goto _5798;
  }

_5798:
  _5279 = *(void**)_4987;
  _5280 = ((&((uint8_t*)_5279)[((int64_t)16)]));
  _5281 = *(uint64_t*)_5280;
  _5282 = ((&((uint8_t*)_5279)[((int64_t)8)]));
  _5283 = *(uint64_t*)_5282;
  if ((((int64_t)_5283) > ((int64_t)_5281))) {
    goto _5799;
  } else {
    _5300__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5800;
  }

_5799:
  _5284 = *(void**)_5279;
  _5285 = *(uint8_t*)(((&((uint8_t*)_5284)[((int64_t)_5281)])));
  *(uint64_t*)_5280 = (llvm_add_u64(_5281, 1));
  _5286 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5285)), 0);
  _5287 = llvm_sub_u8(32, (llvm_shl_u8(_5286, 3)));
  _5288 = (((uint32_t)(uint8_t)_5285)) << 24;
  if ((((uint8_t)_5287) > ((uint8_t)((uint8_t)16)))) {
    _5300__PHI_TEMPORARY = _5288;   /* for PHI node */
    goto _5800;
  } else {
    _5289__PHI_TEMPORARY = 16;   /* for PHI node */
    _5290__PHI_TEMPORARY = _5288;   /* for PHI node */
    goto _5801;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5801:
  _5289 = _5289__PHI_TEMPORARY;
  _5290 = _5290__PHI_TEMPORARY;
  if (((((int64_t)_5289) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5289) < ((uint64_t)(((uint64_t)(uint8_t)_5287)))))) {
    _5300__PHI_TEMPORARY = _5290;   /* for PHI node */
    goto _5800;
  } else {
    goto _5802;
  }

_5802:
  _5291 = *(uint64_t*)_5280;
  _5292 = *(uint64_t*)_5282;
  if ((((int64_t)_5292) > ((int64_t)_5291))) {
    goto _5803;
  } else {
    _5300__PHI_TEMPORARY = _5290;   /* for PHI node */
    goto _5800;
  }

_5803:
  _5293 = *(void**)_5279;
  _5294 = *(uint8_t*)(((&((uint8_t*)_5293)[((int64_t)_5291)])));
  if ((((int8_t)_5294) > ((int8_t)((uint8_t)-65)))) {
    _5300__PHI_TEMPORARY = _5290;   /* for PHI node */
    goto _5800;
  } else {
    goto _5804;
  }

_5804:
  _5295 = llvm_select_u32((((int64_t)_5291) < ((int64_t)_5292)), (((uint32_t)(uint8_t)_5294)), 0);
  _5296 = *(uint64_t*)_5280;
  *(uint64_t*)_5280 = (llvm_add_u64(_5296, 1));
  _5297 = llvm_neg_u64(_5289);
  _5298 = _5290 | (llvm_select_u32((((int64_t)_5289) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5297) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5295, (((uint32_t)_5297)))))), (llvm_select_u32((((uint64_t)_5289) > ((uint64_t)UINT64_C(31))), 0, (_5295 << (((uint32_t)_5289)))))));
  _5299 = llvm_add_u64(_5289, -8);
  _5289__PHI_TEMPORARY = _5299;   /* for PHI node */
  _5290__PHI_TEMPORARY = _5298;   /* for PHI node */
  goto _5801;

  } while (1); /* end of syntactic loop '' */
_5800:
  _5300 = _5300__PHI_TEMPORARY;
  _5301 = *(uint64_t*)_5004;
  _5302 = *(uint64_t*)_5006;
  _5303 = jsyn_cbe_fshl_i64(_5302, _5301, 32);
  _5304 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5300)), _5302, 32);
  *(uint64_t*)_5004 = _5303;
  *(uint64_t*)_5006 = _5304;
  _5305 = *(uint64_t*)_5108;
  _5306 = *(uint64_t*)_5110;
  _5307 = *(uint64_t*)_5112;
  _5308 = *(void**)_4987;
  _5309 = *(uint64_t*)(((&((uint8_t*)_5308)[((int64_t)16)])));
  *(uint64_t*)_5107 = _5305;
  *(uint64_t*)_5108 = _5306;
  *(uint64_t*)_5110 = _5307;
  *(uint64_t*)_5112 = _5309;
  julia_emit_20((&_4996), _4986, _4987, 754, 1);
  _5010__PHI_TEMPORARY = (&_4996);   /* for PHI node */
  goto _5726;

_5795:
  if (((_5150 == UINT64_C(4294967295)) | (((bool)_5148&1u)))) {
    _5720__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _5786;
  } else {
    goto _5805;
  }

_5805:
  _5310 = llvm_OC_ctlz_OC_i32((_5151 ^ -1), 0);
  _5311 = ((uint64_t)(uint32_t)_5310);
  _5312 = llvm_OC_cttz_OC_i32(_5151, 0);
  _5313 = _5312 & 56;
  _5314 = ((uint64_t)(uint32_t)_5313);
  _5315 = llvm_select_bool((((uint32_t)_5312) < ((uint32_t)32u)), ((llvm_lshr_u32(((_5151 & 12632256) ^ 8421504), _5313)) != 0u), 0);
  _5316 = (((_5151 & -33554432) == 3221225472u) | ((_5151 & -2097152) == 3766484992u)) | ((_5151 & -1048576) == 4034920448u);
  if (((((((_5310 == 1u) | (((uint64_t)(llvm_add_u64((_5311 << 3), _5314))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_5149) > ((uint64_t)UINT64_C(17122614315006820351))) & (_5150 != UINT64_C(3986669312))) & (((((uint64_t)_5149) < ((uint64_t)UINT64_C(17185876919829135360))) & (_5150 != UINT64_C(4001398784))) | ((((uint64_t)_5149) > ((uint64_t)UINT64_C(17622514693983698943))) & (_5150 != UINT64_C(4103061439)))))) | (_5150 == UINT64_C(4036993714))) | _5315) | _5316)) {
    goto _5806;
  } else {
    goto _5807;
  }

_5807:
  _5317 = llvm_lshr_u32(_5151, 24);
  if ((((int64_t)_5149) < ((int64_t)UINT64_C(0)))) {
    goto _5808;
  } else {
    _5320__PHI_TEMPORARY = _5317;   /* for PHI node */
    goto _5809;
  }

_5808:
  if ((((_5310 == 1u) | (((uint64_t)(llvm_add_u64((_5311 << 3), _5314))) > ((uint64_t)UINT64_C(32)))) | (_5315 | _5316))) {
    goto _5810;
  } else {
    goto _5811;
  }

_5810:
  julia_throw_invalid_char_21(_4986, _5151);
  __builtin_unreachable();

_5811:
  _5318 = llvm_select_u32((((uint32_t)_5312) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _5310)) & _5151), _5313)), 0);
  _5319 = (((_5318 & 127) | ((llvm_lshr_u32(_5318, 2)) & 8128)) | ((llvm_lshr_u32(_5318, 4)) & 520192)) | ((llvm_lshr_u32(_5318, 6)) & 33292288);
  _5320__PHI_TEMPORARY = _5319;   /* for PHI node */
  goto _5809;

_5809:
  _5320 = _5320__PHI_TEMPORARY;
  _5321 = jsk_jl_id_start_char(_5320);
  if ((_5321 == 0u)) {
    goto _5806;
  } else {
    goto _5812;
  }

_5806:
  switch ((((uint32_t)_5150))) {
  default:
    _5720__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _5786;
  case 671088640u:
    goto _5812;
  case 1526726656u:
    goto _5812;
  case 2063597568u:
    goto _5812;
  case 1073741824u:
    goto _5812;
  case 1610612736u:
    goto _5812;
  case 570425344u:
    goto _5812;
  }

_5812:
  julia_emit_20((&_4997), _4986, _4987, 757, 1);
  _5010__PHI_TEMPORARY = (&_4997);   /* for PHI node */
  goto _5726;

_5723:
  if (((((uint32_t)(llvm_add_u32(_5009, -805306368))) < ((uint32_t)150994945u)) | (_5009 == 721420288u))) {
    goto _5813;
  } else {
    goto _5814;
  }

_5814:
  switch (_5009) {
  default:
    goto _5721;
  case 3800601088u:
    goto _5813;
  case 754974720u:
    goto _5813;
  }

_5813:
  _5322 = llvm_select_u16((_5007 == UINT64_C(1711276032)), 49, 48);
  _5323 = *(void**)_4987;
  _5324 = ((&((uint8_t*)_5323)[((int64_t)16)]));
  _5325 = *(uint64_t*)_5324;
  _5326 = ((&((uint8_t*)_5323)[((int64_t)8)]));
  _5327 = *(uint64_t*)_5326;
  if ((((int64_t)_5327) > ((int64_t)_5325))) {
    goto _5815;
  } else {
    _5344__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5816;
  }

_5815:
  _5328 = *(void**)_5323;
  _5329 = *(uint8_t*)(((&((uint8_t*)_5328)[((int64_t)_5325)])));
  *(uint64_t*)_5324 = (llvm_add_u64(_5325, 1));
  _5330 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5329)), 0);
  _5331 = llvm_sub_u8(32, (llvm_shl_u8(_5330, 3)));
  _5332 = (((uint32_t)(uint8_t)_5329)) << 24;
  if ((((uint8_t)_5331) > ((uint8_t)((uint8_t)16)))) {
    _5344__PHI_TEMPORARY = _5332;   /* for PHI node */
    goto _5816;
  } else {
    _5333__PHI_TEMPORARY = 16;   /* for PHI node */
    _5334__PHI_TEMPORARY = _5332;   /* for PHI node */
    goto _5817;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5817:
  _5333 = _5333__PHI_TEMPORARY;
  _5334 = _5334__PHI_TEMPORARY;
  if (((((int64_t)_5333) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5333) < ((uint64_t)(((uint64_t)(uint8_t)_5331)))))) {
    _5344__PHI_TEMPORARY = _5334;   /* for PHI node */
    goto _5816;
  } else {
    goto _5818;
  }

_5818:
  _5335 = *(uint64_t*)_5324;
  _5336 = *(uint64_t*)_5326;
  if ((((int64_t)_5336) > ((int64_t)_5335))) {
    goto _5819;
  } else {
    _5344__PHI_TEMPORARY = _5334;   /* for PHI node */
    goto _5816;
  }

_5819:
  _5337 = *(void**)_5323;
  _5338 = *(uint8_t*)(((&((uint8_t*)_5337)[((int64_t)_5335)])));
  if ((((int8_t)_5338) > ((int8_t)((uint8_t)-65)))) {
    _5344__PHI_TEMPORARY = _5334;   /* for PHI node */
    goto _5816;
  } else {
    goto _5820;
  }

_5820:
  _5339 = llvm_select_u32((((int64_t)_5335) < ((int64_t)_5336)), (((uint32_t)(uint8_t)_5338)), 0);
  _5340 = *(uint64_t*)_5324;
  *(uint64_t*)_5324 = (llvm_add_u64(_5340, 1));
  _5341 = llvm_neg_u64(_5333);
  _5342 = _5334 | (llvm_select_u32((((int64_t)_5333) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5341) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5339, (((uint32_t)_5341)))))), (llvm_select_u32((((uint64_t)_5333) > ((uint64_t)UINT64_C(31))), 0, (_5339 << (((uint32_t)_5333)))))));
  _5343 = llvm_add_u64(_5333, -8);
  _5333__PHI_TEMPORARY = _5343;   /* for PHI node */
  _5334__PHI_TEMPORARY = _5342;   /* for PHI node */
  goto _5817;

  } while (1); /* end of syntactic loop '' */
_5816:
  _5344 = _5344__PHI_TEMPORARY;
  _5345 = *(uint64_t*)_5004;
  _5346 = *(uint64_t*)_5006;
  _5347 = jsyn_cbe_fshl_i64(_5346, _5345, 32);
  _5348 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5344)), _5346, 32);
  *(uint64_t*)_5004 = _5347;
  *(uint64_t*)_5006 = _5348;
  _5349 = ((&((uint8_t*)_4987)[((int64_t)48)]));
  _5350 = ((&((uint8_t*)_4987)[((int64_t)56)]));
  _5351 = *(uint64_t*)_5350;
  _5352 = ((&((uint8_t*)_4987)[((int64_t)64)]));
  _5353 = *(uint64_t*)_5352;
  _5354 = ((&((uint8_t*)_4987)[((int64_t)72)]));
  _5355 = *(uint64_t*)_5354;
  _5356 = *(void**)_4987;
  _5357 = *(uint64_t*)(((&((uint8_t*)_5356)[((int64_t)16)])));
  *(uint64_t*)_5349 = _5351;
  *(uint64_t*)_5350 = _5353;
  *(uint64_t*)_5352 = _5355;
  *(uint64_t*)_5354 = _5357;
  _5358 = *(uint64_t*)_5004;
  switch ((((uint32_t)(llvm_lshr_u64(_5358, 32))))) {
  default:
    _5391__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5821;
  case 721420288u:
    goto _5822;
  case 3800601088u:
    goto _5822;
  case 754974720u:
    goto _5822;
  }

_5822:
  _5359 = *(void**)_4987;
  _5360 = ((&((uint8_t*)_5359)[((int64_t)16)]));
  _5361 = *(uint64_t*)_5360;
  _5362 = ((&((uint8_t*)_5359)[((int64_t)8)]));
  _5363 = *(uint64_t*)_5362;
  if ((((int64_t)_5363) > ((int64_t)_5361))) {
    goto _5823;
  } else {
    _5380__PHI_TEMPORARY = -1;   /* for PHI node */
    _5381__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5824;
  }

_5823:
  _5364 = *(void**)_5359;
  _5365 = *(uint8_t*)(((&((uint8_t*)_5364)[((int64_t)_5361)])));
  *(uint64_t*)_5360 = (llvm_add_u64(_5361, 1));
  _5366 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5365)), 0);
  _5367 = llvm_sub_u8(32, (llvm_shl_u8(_5366, 3)));
  _5368 = (((uint32_t)(uint8_t)_5365)) << 24;
  if ((((uint8_t)_5367) > ((uint8_t)((uint8_t)16)))) {
    _5380__PHI_TEMPORARY = _5368;   /* for PHI node */
    _5381__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5824;
  } else {
    _5369__PHI_TEMPORARY = 16;   /* for PHI node */
    _5370__PHI_TEMPORARY = _5368;   /* for PHI node */
    goto _5825;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5825:
  _5369 = _5369__PHI_TEMPORARY;
  _5370 = _5370__PHI_TEMPORARY;
  if (((((int64_t)_5369) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5369) < ((uint64_t)(((uint64_t)(uint8_t)_5367)))))) {
    _5380__PHI_TEMPORARY = _5370;   /* for PHI node */
    _5381__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5824;
  } else {
    goto _5826;
  }

_5826:
  _5371 = *(uint64_t*)_5360;
  _5372 = *(uint64_t*)_5362;
  if ((((int64_t)_5372) > ((int64_t)_5371))) {
    goto _5827;
  } else {
    _5380__PHI_TEMPORARY = _5370;   /* for PHI node */
    _5381__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5824;
  }

_5827:
  _5373 = *(void**)_5359;
  _5374 = *(uint8_t*)(((&((uint8_t*)_5373)[((int64_t)_5371)])));
  if ((((int8_t)_5374) > ((int8_t)((uint8_t)-65)))) {
    _5380__PHI_TEMPORARY = _5370;   /* for PHI node */
    _5381__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5824;
  } else {
    goto _5828;
  }

_5828:
  _5375 = llvm_select_u32((((int64_t)_5371) < ((int64_t)_5372)), (((uint32_t)(uint8_t)_5374)), 0);
  _5376 = *(uint64_t*)_5360;
  *(uint64_t*)_5360 = (llvm_add_u64(_5376, 1));
  _5377 = llvm_neg_u64(_5369);
  _5378 = _5370 | (llvm_select_u32((((int64_t)_5369) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5377) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5375, (((uint32_t)_5377)))))), (llvm_select_u32((((uint64_t)_5369) > ((uint64_t)UINT64_C(31))), 0, (_5375 << (((uint32_t)_5369)))))));
  _5379 = llvm_add_u64(_5369, -8);
  _5369__PHI_TEMPORARY = _5379;   /* for PHI node */
  _5370__PHI_TEMPORARY = _5378;   /* for PHI node */
  goto _5825;

  } while (1); /* end of syntactic loop '' */
_5824:
  _5380 = _5380__PHI_TEMPORARY;
  _5381 = _5381__PHI_TEMPORARY;
  _5382 = *(uint64_t*)_5004;
  _5383 = *(uint64_t*)_5006;
  _5384 = jsyn_cbe_fshl_i64(_5383, _5382, 32);
  _5385 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5380)), _5383, 32);
  *(uint64_t*)_5004 = _5384;
  *(uint64_t*)_5006 = _5385;
  _5386 = *(uint64_t*)_5350;
  _5387 = *(uint64_t*)_5352;
  _5388 = *(uint64_t*)_5354;
  _5389 = *(void**)_4987;
  _5390 = *(uint64_t*)(((&((uint8_t*)_5389)[((int64_t)16)])));
  *(uint64_t*)_5349 = _5386;
  *(uint64_t*)_5350 = _5387;
  *(uint64_t*)_5352 = _5388;
  *(uint64_t*)_5354 = _5390;
  _5391__PHI_TEMPORARY = _5381;   /* for PHI node */
  goto _5821;

_5821:
  _5391 = _5391__PHI_TEMPORARY;
  _5392 = *(uint64_t*)_5004;
  _5393 = llvm_lshr_u64(_5392, 32);
  if ((((((uint64_t)_5392) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5393 != UINT64_C(805306368))) | ((((uint64_t)_5392) > ((uint64_t)UINT64_C(4107282860161892351))) & (_5393 != UINT64_C(956301312))))) {
    goto _5829;
  } else {
    goto _5830;
  }

_5830:
  _5394 = *(void**)_4987;
  _5395 = ((&((uint8_t*)_5394)[((int64_t)16)]));
  _5396 = *(uint64_t*)_5395;
  _5397 = ((&((uint8_t*)_5394)[((int64_t)8)]));
  _5398 = *(uint64_t*)_5397;
  if ((((int64_t)_5398) > ((int64_t)_5396))) {
    goto _5831;
  } else {
    _5380__PHI_TEMPORARY = -1;   /* for PHI node */
    _5381__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5824;
  }

_5831:
  _5399 = *(void**)_5394;
  _5400 = *(uint8_t*)(((&((uint8_t*)_5399)[((int64_t)_5396)])));
  *(uint64_t*)_5395 = (llvm_add_u64(_5396, 1));
  _5401 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5400)), 0);
  _5402 = llvm_sub_u8(32, (llvm_shl_u8(_5401, 3)));
  _5403 = (((uint32_t)(uint8_t)_5400)) << 24;
  if ((((uint8_t)_5402) > ((uint8_t)((uint8_t)16)))) {
    _5380__PHI_TEMPORARY = _5403;   /* for PHI node */
    _5381__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5824;
  } else {
    _5404__PHI_TEMPORARY = 16;   /* for PHI node */
    _5405__PHI_TEMPORARY = _5403;   /* for PHI node */
    goto _5832;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5832:
  _5404 = _5404__PHI_TEMPORARY;
  _5405 = _5405__PHI_TEMPORARY;
  if (((((int64_t)_5404) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5404) < ((uint64_t)(((uint64_t)(uint8_t)_5402)))))) {
    _5380__PHI_TEMPORARY = _5405;   /* for PHI node */
    _5381__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5824;
  } else {
    goto _5833;
  }

_5833:
  _5406 = *(uint64_t*)_5395;
  _5407 = *(uint64_t*)_5397;
  if ((((int64_t)_5407) > ((int64_t)_5406))) {
    goto _5834;
  } else {
    _5380__PHI_TEMPORARY = _5405;   /* for PHI node */
    _5381__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5824;
  }

_5834:
  _5408 = *(void**)_5394;
  _5409 = *(uint8_t*)(((&((uint8_t*)_5408)[((int64_t)_5406)])));
  if ((((int8_t)_5409) > ((int8_t)((uint8_t)-65)))) {
    _5380__PHI_TEMPORARY = _5405;   /* for PHI node */
    _5381__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5824;
  } else {
    goto _5835;
  }

_5835:
  _5410 = llvm_select_u32((((int64_t)_5406) < ((int64_t)_5407)), (((uint32_t)(uint8_t)_5409)), 0);
  _5411 = *(uint64_t*)_5395;
  *(uint64_t*)_5395 = (llvm_add_u64(_5411, 1));
  _5412 = llvm_neg_u64(_5404);
  _5413 = _5405 | (llvm_select_u32((((int64_t)_5404) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5412) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5410, (((uint32_t)_5412)))))), (llvm_select_u32((((uint64_t)_5404) > ((uint64_t)UINT64_C(31))), 0, (_5410 << (((uint32_t)_5404)))))));
  _5414 = llvm_add_u64(_5404, -8);
  _5404__PHI_TEMPORARY = _5414;   /* for PHI node */
  _5405__PHI_TEMPORARY = _5413;   /* for PHI node */
  goto _5832;

  } while (1); /* end of syntactic loop '' */
_5829:
  if (_5391) {
    goto _5836;
  } else {
    goto _5837;
  }

_5837:
  _5415 = *(uint64_t*)_5004;
  _5416 = *(uint64_t*)_5006;
  _5417 = ((uint32_t)_5416);
  if (((_5415 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5838;
  } else {
    _5720__PHI_TEMPORARY = _5322;   /* for PHI node */
    goto _5786;
  }

_5838:
  switch (_5417) {
  default:
    goto _5839;
  case 1056964608u:
    goto _5840;
  case 603979776u:
    goto _5840;
  case 973078528u:
    goto _5840;
  case 654311424u:
    goto _5840;
  }

_5839:
  _5418 = julia_is_operator_start_char_23(_4986, _5417);
  if ((((bool)_5418&1u))) {
    _5720__PHI_TEMPORARY = _5322;   /* for PHI node */
    goto _5786;
  } else {
    goto _5840;
  }

_5840:
  _5419 = *(uint64_t*)_5004;
  if (((_5419 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5841;
  } else {
    goto _5842;
  }

_5841:
  _5420 = *(void**)_4987;
  _5421 = ((&((uint8_t*)_5420)[((int64_t)16)]));
  _5422 = *(uint64_t*)_5421;
  _5423 = ((&((uint8_t*)_5420)[((int64_t)8)]));
  _5424 = *(uint64_t*)_5423;
  if ((((int64_t)_5424) > ((int64_t)_5422))) {
    goto _5843;
  } else {
    _5441__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5844;
  }

_5843:
  _5425 = *(void**)_5420;
  _5426 = *(uint8_t*)(((&((uint8_t*)_5425)[((int64_t)_5422)])));
  *(uint64_t*)_5421 = (llvm_add_u64(_5422, 1));
  _5427 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5426)), 0);
  _5428 = llvm_sub_u8(32, (llvm_shl_u8(_5427, 3)));
  _5429 = (((uint32_t)(uint8_t)_5426)) << 24;
  if ((((uint8_t)_5428) > ((uint8_t)((uint8_t)16)))) {
    _5441__PHI_TEMPORARY = _5429;   /* for PHI node */
    goto _5844;
  } else {
    _5430__PHI_TEMPORARY = 16;   /* for PHI node */
    _5431__PHI_TEMPORARY = _5429;   /* for PHI node */
    goto _5845;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5845:
  _5430 = _5430__PHI_TEMPORARY;
  _5431 = _5431__PHI_TEMPORARY;
  if (((((int64_t)_5430) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5430) < ((uint64_t)(((uint64_t)(uint8_t)_5428)))))) {
    _5441__PHI_TEMPORARY = _5431;   /* for PHI node */
    goto _5844;
  } else {
    goto _5846;
  }

_5846:
  _5432 = *(uint64_t*)_5421;
  _5433 = *(uint64_t*)_5423;
  if ((((int64_t)_5433) > ((int64_t)_5432))) {
    goto _5847;
  } else {
    _5441__PHI_TEMPORARY = _5431;   /* for PHI node */
    goto _5844;
  }

_5847:
  _5434 = *(void**)_5420;
  _5435 = *(uint8_t*)(((&((uint8_t*)_5434)[((int64_t)_5432)])));
  if ((((int8_t)_5435) > ((int8_t)((uint8_t)-65)))) {
    _5441__PHI_TEMPORARY = _5431;   /* for PHI node */
    goto _5844;
  } else {
    goto _5848;
  }

_5848:
  _5436 = llvm_select_u32((((int64_t)_5432) < ((int64_t)_5433)), (((uint32_t)(uint8_t)_5435)), 0);
  _5437 = *(uint64_t*)_5421;
  *(uint64_t*)_5421 = (llvm_add_u64(_5437, 1));
  _5438 = llvm_neg_u64(_5430);
  _5439 = _5431 | (llvm_select_u32((((int64_t)_5430) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5438) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5436, (((uint32_t)_5438)))))), (llvm_select_u32((((uint64_t)_5430) > ((uint64_t)UINT64_C(31))), 0, (_5436 << (((uint32_t)_5430)))))));
  _5440 = llvm_add_u64(_5430, -8);
  _5430__PHI_TEMPORARY = _5440;   /* for PHI node */
  _5431__PHI_TEMPORARY = _5439;   /* for PHI node */
  goto _5845;

  } while (1); /* end of syntactic loop '' */
_5844:
  _5441 = _5441__PHI_TEMPORARY;
  _5442 = *(uint64_t*)_5004;
  _5443 = *(uint64_t*)_5006;
  _5444 = jsyn_cbe_fshl_i64(_5443, _5442, 32);
  _5445 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5441)), _5443, 32);
  *(uint64_t*)_5004 = _5444;
  *(uint64_t*)_5006 = _5445;
  _5446 = *(uint64_t*)_5350;
  _5447 = *(uint64_t*)_5352;
  _5448 = *(uint64_t*)_5354;
  _5449 = *(void**)_4987;
  _5450 = *(uint64_t*)(((&((uint8_t*)_5449)[((int64_t)16)])));
  *(uint64_t*)_5349 = _5446;
  *(uint64_t*)_5350 = _5447;
  *(uint64_t*)_5352 = _5448;
  *(uint64_t*)_5354 = _5450;
  goto _5842;

_5842:
  julia_emit_20((&_4998), _4986, _4987, 754, 1);
  _5010__PHI_TEMPORARY = (&_4998);   /* for PHI node */
  goto _5726;

_5836:
  julia_emit_20((&_4999), _4986, _4987, 754, 1);
  _5010__PHI_TEMPORARY = (&_4999);   /* for PHI node */
  goto _5726;

_5721:
  _5451 = ((&((uint8_t*)_4987)[((int64_t)48)]));
  _5452 = *(uint64_t*)_5451;
  _5453 = ((&((uint8_t*)_4987)[((int64_t)56)]));
  _5454 = *(uint64_t*)(((&((uint8_t*)_4987)[((int64_t)8)])));
  if (((llvm_sub_u64(_5452, _5454)) == UINT64_C(1))) {
    goto _5849;
  } else {
    _5720__PHI_TEMPORARY = _4988;   /* for PHI node */
    goto _5786;
  }

_5849:
  _5455 = *(uint64_t*)_5004;
  if (((_5455 & INT64_C(4294967295)) == UINT64_C(805306368))) {
    goto _5850;
  } else {
    _5720__PHI_TEMPORARY = _4988;   /* for PHI node */
    goto _5786;
  }

_5850:
  switch ((((uint32_t)_5007))) {
  default:
    _5666__PHI_TEMPORARY = 1;   /* for PHI node */
    _5668__PHI_TEMPORARY = 0;   /* for PHI node */
    _5669__PHI_TEMPORARY = _4988;   /* for PHI node */
    goto _5851;
  case 2013265920u:
    goto _5852;
  case 1644167168u:
    goto _5853;
  case 1862270976u:
    goto _5854;
  }

_5852:
  _5456 = *(void**)_4987;
  _5457 = ((&((uint8_t*)_5456)[((int64_t)16)]));
  _5458 = *(uint64_t*)_5457;
  _5459 = ((&((uint8_t*)_5456)[((int64_t)8)]));
  _5460 = *(uint64_t*)_5459;
  if ((((int64_t)_5460) > ((int64_t)_5458))) {
    goto _5855;
  } else {
    _5477__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5856;
  }

_5855:
  _5461 = *(void**)_5456;
  _5462 = *(uint8_t*)(((&((uint8_t*)_5461)[((int64_t)_5458)])));
  *(uint64_t*)_5457 = (llvm_add_u64(_5458, 1));
  _5463 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5462)), 0);
  _5464 = llvm_sub_u8(32, (llvm_shl_u8(_5463, 3)));
  _5465 = (((uint32_t)(uint8_t)_5462)) << 24;
  if ((((uint8_t)_5464) > ((uint8_t)((uint8_t)16)))) {
    _5477__PHI_TEMPORARY = _5465;   /* for PHI node */
    goto _5856;
  } else {
    _5466__PHI_TEMPORARY = 16;   /* for PHI node */
    _5467__PHI_TEMPORARY = _5465;   /* for PHI node */
    goto _5857;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5857:
  _5466 = _5466__PHI_TEMPORARY;
  _5467 = _5467__PHI_TEMPORARY;
  if (((((int64_t)_5466) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5466) < ((uint64_t)(((uint64_t)(uint8_t)_5464)))))) {
    _5477__PHI_TEMPORARY = _5467;   /* for PHI node */
    goto _5856;
  } else {
    goto _5858;
  }

_5858:
  _5468 = *(uint64_t*)_5457;
  _5469 = *(uint64_t*)_5459;
  if ((((int64_t)_5469) > ((int64_t)_5468))) {
    goto _5859;
  } else {
    _5477__PHI_TEMPORARY = _5467;   /* for PHI node */
    goto _5856;
  }

_5859:
  _5470 = *(void**)_5456;
  _5471 = *(uint8_t*)(((&((uint8_t*)_5470)[((int64_t)_5468)])));
  if ((((int8_t)_5471) > ((int8_t)((uint8_t)-65)))) {
    _5477__PHI_TEMPORARY = _5467;   /* for PHI node */
    goto _5856;
  } else {
    goto _5860;
  }

_5860:
  _5472 = llvm_select_u32((((int64_t)_5468) < ((int64_t)_5469)), (((uint32_t)(uint8_t)_5471)), 0);
  _5473 = *(uint64_t*)_5457;
  *(uint64_t*)_5457 = (llvm_add_u64(_5473, 1));
  _5474 = llvm_neg_u64(_5466);
  _5475 = _5467 | (llvm_select_u32((((int64_t)_5466) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5474) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5472, (((uint32_t)_5474)))))), (llvm_select_u32((((uint64_t)_5466) > ((uint64_t)UINT64_C(31))), 0, (_5472 << (((uint32_t)_5466)))))));
  _5476 = llvm_add_u64(_5466, -8);
  _5466__PHI_TEMPORARY = _5476;   /* for PHI node */
  _5467__PHI_TEMPORARY = _5475;   /* for PHI node */
  goto _5857;

  } while (1); /* end of syntactic loop '' */
_5856:
  _5477 = _5477__PHI_TEMPORARY;
  _5478 = *(uint64_t*)_5004;
  _5479 = *(uint64_t*)_5006;
  _5480 = jsyn_cbe_fshl_i64(_5479, _5478, 32);
  _5481 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5477)), _5479, 32);
  *(uint64_t*)_5004 = _5480;
  *(uint64_t*)_5006 = _5481;
  _5482 = *(uint64_t*)_5453;
  _5483 = ((&((uint8_t*)_4987)[((int64_t)64)]));
  _5484 = *(uint64_t*)_5483;
  _5485 = ((&((uint8_t*)_4987)[((int64_t)72)]));
  _5486 = *(uint64_t*)_5485;
  _5487 = *(void**)_4987;
  _5488 = *(uint64_t*)(((&((uint8_t*)_5487)[((int64_t)16)])));
  *(uint64_t*)_5451 = _5482;
  *(uint64_t*)_5453 = _5484;
  *(uint64_t*)_5483 = _5486;
  *(uint64_t*)_5485 = _5488;
  _5489 = julia_accept_number_52(_4986, _4987);
  _5490 = *(uint64_t*)_5004;
  _5491 = ((bool)_5489&1u);
  if (((_5490 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5861;
  } else {
    _5527__PHI_TEMPORARY = _5491;   /* for PHI node */
    _5528__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5862;
  }

_5861:
  _5492 = *(uint64_t*)_5006;
  _5493 = ((bool)_5489&1u);
  if (((_5492 & INT64_C(4294967295)) == UINT64_C(771751936))) {
    _5527__PHI_TEMPORARY = _5493;   /* for PHI node */
    _5528__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5862;
  } else {
    goto _5863;
  }

_5863:
  _5494 = *(void**)_4987;
  _5495 = ((&((uint8_t*)_5494)[((int64_t)16)]));
  _5496 = *(uint64_t*)_5495;
  _5497 = ((&((uint8_t*)_5494)[((int64_t)8)]));
  _5498 = *(uint64_t*)_5497;
  if ((((int64_t)_5498) > ((int64_t)_5496))) {
    goto _5864;
  } else {
    _5515__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5865;
  }

_5864:
  _5499 = *(void**)_5494;
  _5500 = *(uint8_t*)(((&((uint8_t*)_5499)[((int64_t)_5496)])));
  *(uint64_t*)_5495 = (llvm_add_u64(_5496, 1));
  _5501 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5500)), 0);
  _5502 = llvm_sub_u8(32, (llvm_shl_u8(_5501, 3)));
  _5503 = (((uint32_t)(uint8_t)_5500)) << 24;
  if ((((uint8_t)_5502) > ((uint8_t)((uint8_t)16)))) {
    _5515__PHI_TEMPORARY = _5503;   /* for PHI node */
    goto _5865;
  } else {
    _5504__PHI_TEMPORARY = 16;   /* for PHI node */
    _5505__PHI_TEMPORARY = _5503;   /* for PHI node */
    goto _5866;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5866:
  _5504 = _5504__PHI_TEMPORARY;
  _5505 = _5505__PHI_TEMPORARY;
  if (((((int64_t)_5504) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5504) < ((uint64_t)(((uint64_t)(uint8_t)_5502)))))) {
    _5515__PHI_TEMPORARY = _5505;   /* for PHI node */
    goto _5865;
  } else {
    goto _5867;
  }

_5867:
  _5506 = *(uint64_t*)_5495;
  _5507 = *(uint64_t*)_5497;
  if ((((int64_t)_5507) > ((int64_t)_5506))) {
    goto _5868;
  } else {
    _5515__PHI_TEMPORARY = _5505;   /* for PHI node */
    goto _5865;
  }

_5868:
  _5508 = *(void**)_5494;
  _5509 = *(uint8_t*)(((&((uint8_t*)_5508)[((int64_t)_5506)])));
  if ((((int8_t)_5509) > ((int8_t)((uint8_t)-65)))) {
    _5515__PHI_TEMPORARY = _5505;   /* for PHI node */
    goto _5865;
  } else {
    goto _5869;
  }

_5869:
  _5510 = llvm_select_u32((((int64_t)_5506) < ((int64_t)_5507)), (((uint32_t)(uint8_t)_5509)), 0);
  _5511 = *(uint64_t*)_5495;
  *(uint64_t*)_5495 = (llvm_add_u64(_5511, 1));
  _5512 = llvm_neg_u64(_5504);
  _5513 = _5505 | (llvm_select_u32((((int64_t)_5504) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5512) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5510, (((uint32_t)_5512)))))), (llvm_select_u32((((uint64_t)_5504) > ((uint64_t)UINT64_C(31))), 0, (_5510 << (((uint32_t)_5504)))))));
  _5514 = llvm_add_u64(_5504, -8);
  _5504__PHI_TEMPORARY = _5514;   /* for PHI node */
  _5505__PHI_TEMPORARY = _5513;   /* for PHI node */
  goto _5866;

  } while (1); /* end of syntactic loop '' */
_5865:
  _5515 = _5515__PHI_TEMPORARY;
  _5516 = *(uint64_t*)_5004;
  _5517 = *(uint64_t*)_5006;
  _5518 = jsyn_cbe_fshl_i64(_5517, _5516, 32);
  _5519 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5515)), _5517, 32);
  *(uint64_t*)_5004 = _5518;
  *(uint64_t*)_5006 = _5519;
  _5520 = *(uint64_t*)_5453;
  _5521 = *(uint64_t*)_5483;
  _5522 = *(uint64_t*)_5485;
  _5523 = *(void**)_4987;
  _5524 = *(uint64_t*)(((&((uint8_t*)_5523)[((int64_t)16)])));
  *(uint64_t*)_5451 = _5520;
  *(uint64_t*)_5453 = _5521;
  *(uint64_t*)_5483 = _5522;
  *(uint64_t*)_5485 = _5524;
  _5525 = julia_accept_number_52(_4986, _4987);
  _5526 = ((bool)(llvm_or_u8(_5489, _5525))&1u);
  _5527__PHI_TEMPORARY = _5526;   /* for PHI node */
  _5528__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _5862;

_5862:
  _5527 = _5527__PHI_TEMPORARY;
  _5528 = _5528__PHI_TEMPORARY;
  _5529 = *(uint64_t*)_5004;
  if (((_5529 & INT64_C(-2305843013508661248)) == UINT64_C(5764607523034234880))) {
    goto _5870;
  } else {
    goto _5871;
  }

_5870:
  _5530 = *(void**)_4987;
  _5531 = ((&((uint8_t*)_5530)[((int64_t)16)]));
  _5532 = *(uint64_t*)_5531;
  _5533 = ((&((uint8_t*)_5530)[((int64_t)8)]));
  _5534 = *(uint64_t*)_5533;
  if ((((int64_t)_5534) > ((int64_t)_5532))) {
    goto _5872;
  } else {
    _5551__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5873;
  }

_5872:
  _5535 = *(void**)_5530;
  _5536 = *(uint8_t*)(((&((uint8_t*)_5535)[((int64_t)_5532)])));
  *(uint64_t*)_5531 = (llvm_add_u64(_5532, 1));
  _5537 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5536)), 0);
  _5538 = llvm_sub_u8(32, (llvm_shl_u8(_5537, 3)));
  _5539 = (((uint32_t)(uint8_t)_5536)) << 24;
  if ((((uint8_t)_5538) > ((uint8_t)((uint8_t)16)))) {
    _5551__PHI_TEMPORARY = _5539;   /* for PHI node */
    goto _5873;
  } else {
    _5540__PHI_TEMPORARY = 16;   /* for PHI node */
    _5541__PHI_TEMPORARY = _5539;   /* for PHI node */
    goto _5874;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5874:
  _5540 = _5540__PHI_TEMPORARY;
  _5541 = _5541__PHI_TEMPORARY;
  if (((((int64_t)_5540) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5540) < ((uint64_t)(((uint64_t)(uint8_t)_5538)))))) {
    _5551__PHI_TEMPORARY = _5541;   /* for PHI node */
    goto _5873;
  } else {
    goto _5875;
  }

_5875:
  _5542 = *(uint64_t*)_5531;
  _5543 = *(uint64_t*)_5533;
  if ((((int64_t)_5543) > ((int64_t)_5542))) {
    goto _5876;
  } else {
    _5551__PHI_TEMPORARY = _5541;   /* for PHI node */
    goto _5873;
  }

_5876:
  _5544 = *(void**)_5530;
  _5545 = *(uint8_t*)(((&((uint8_t*)_5544)[((int64_t)_5542)])));
  if ((((int8_t)_5545) > ((int8_t)((uint8_t)-65)))) {
    _5551__PHI_TEMPORARY = _5541;   /* for PHI node */
    goto _5873;
  } else {
    goto _5877;
  }

_5877:
  _5546 = llvm_select_u32((((int64_t)_5542) < ((int64_t)_5543)), (((uint32_t)(uint8_t)_5545)), 0);
  _5547 = *(uint64_t*)_5531;
  *(uint64_t*)_5531 = (llvm_add_u64(_5547, 1));
  _5548 = llvm_neg_u64(_5540);
  _5549 = _5541 | (llvm_select_u32((((int64_t)_5540) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5548) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5546, (((uint32_t)_5548)))))), (llvm_select_u32((((uint64_t)_5540) > ((uint64_t)UINT64_C(31))), 0, (_5546 << (((uint32_t)_5540)))))));
  _5550 = llvm_add_u64(_5540, -8);
  _5540__PHI_TEMPORARY = _5550;   /* for PHI node */
  _5541__PHI_TEMPORARY = _5549;   /* for PHI node */
  goto _5874;

  } while (1); /* end of syntactic loop '' */
_5873:
  _5551 = _5551__PHI_TEMPORARY;
  _5552 = *(uint64_t*)_5004;
  _5553 = *(uint64_t*)_5006;
  _5554 = jsyn_cbe_fshl_i64(_5553, _5552, 32);
  _5555 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5551)), _5553, 32);
  *(uint64_t*)_5004 = _5554;
  *(uint64_t*)_5006 = _5555;
  _5556 = *(uint64_t*)_5453;
  _5557 = *(uint64_t*)_5483;
  _5558 = *(uint64_t*)_5485;
  _5559 = *(void**)_4987;
  _5560 = *(uint64_t*)(((&((uint8_t*)_5559)[((int64_t)16)])));
  *(uint64_t*)_5451 = _5556;
  *(uint64_t*)_5453 = _5557;
  *(uint64_t*)_5483 = _5558;
  *(uint64_t*)_5485 = _5560;
  _5561 = *(uint64_t*)_5004;
  switch ((((uint32_t)(llvm_lshr_u64(_5561, 32))))) {
  default:
    goto _5878;
  case 721420288u:
    goto _5879;
  case 3800601088u:
    goto _5879;
  case 754974720u:
    goto _5879;
  }

_5879:
  _5562 = *(void**)_4987;
  _5563 = ((&((uint8_t*)_5562)[((int64_t)16)]));
  _5564 = *(uint64_t*)_5563;
  _5565 = ((&((uint8_t*)_5562)[((int64_t)8)]));
  _5566 = *(uint64_t*)_5565;
  if ((((int64_t)_5566) > ((int64_t)_5564))) {
    goto _5880;
  } else {
    _5583__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5881;
  }

_5880:
  _5567 = *(void**)_5562;
  _5568 = *(uint8_t*)(((&((uint8_t*)_5567)[((int64_t)_5564)])));
  *(uint64_t*)_5563 = (llvm_add_u64(_5564, 1));
  _5569 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5568)), 0);
  _5570 = llvm_sub_u8(32, (llvm_shl_u8(_5569, 3)));
  _5571 = (((uint32_t)(uint8_t)_5568)) << 24;
  if ((((uint8_t)_5570) > ((uint8_t)((uint8_t)16)))) {
    _5583__PHI_TEMPORARY = _5571;   /* for PHI node */
    goto _5881;
  } else {
    _5572__PHI_TEMPORARY = 16;   /* for PHI node */
    _5573__PHI_TEMPORARY = _5571;   /* for PHI node */
    goto _5882;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5882:
  _5572 = _5572__PHI_TEMPORARY;
  _5573 = _5573__PHI_TEMPORARY;
  if (((((int64_t)_5572) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5572) < ((uint64_t)(((uint64_t)(uint8_t)_5570)))))) {
    _5583__PHI_TEMPORARY = _5573;   /* for PHI node */
    goto _5881;
  } else {
    goto _5883;
  }

_5883:
  _5574 = *(uint64_t*)_5563;
  _5575 = *(uint64_t*)_5565;
  if ((((int64_t)_5575) > ((int64_t)_5574))) {
    goto _5884;
  } else {
    _5583__PHI_TEMPORARY = _5573;   /* for PHI node */
    goto _5881;
  }

_5884:
  _5576 = *(void**)_5562;
  _5577 = *(uint8_t*)(((&((uint8_t*)_5576)[((int64_t)_5574)])));
  if ((((int8_t)_5577) > ((int8_t)((uint8_t)-65)))) {
    _5583__PHI_TEMPORARY = _5573;   /* for PHI node */
    goto _5881;
  } else {
    goto _5885;
  }

_5885:
  _5578 = llvm_select_u32((((int64_t)_5574) < ((int64_t)_5575)), (((uint32_t)(uint8_t)_5577)), 0);
  _5579 = *(uint64_t*)_5563;
  *(uint64_t*)_5563 = (llvm_add_u64(_5579, 1));
  _5580 = llvm_neg_u64(_5572);
  _5581 = _5573 | (llvm_select_u32((((int64_t)_5572) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5580) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5578, (((uint32_t)_5580)))))), (llvm_select_u32((((uint64_t)_5572) > ((uint64_t)UINT64_C(31))), 0, (_5578 << (((uint32_t)_5572)))))));
  _5582 = llvm_add_u64(_5572, -8);
  _5572__PHI_TEMPORARY = _5582;   /* for PHI node */
  _5573__PHI_TEMPORARY = _5581;   /* for PHI node */
  goto _5882;

  } while (1); /* end of syntactic loop '' */
_5881:
  _5583 = _5583__PHI_TEMPORARY;
  _5584 = *(uint64_t*)_5004;
  _5585 = *(uint64_t*)_5006;
  _5586 = jsyn_cbe_fshl_i64(_5585, _5584, 32);
  _5587 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5583)), _5585, 32);
  *(uint64_t*)_5004 = _5586;
  *(uint64_t*)_5006 = _5587;
  _5588 = *(uint64_t*)_5453;
  _5589 = *(uint64_t*)_5483;
  _5590 = *(uint64_t*)_5485;
  _5591 = *(void**)_4987;
  _5592 = *(uint64_t*)(((&((uint8_t*)_5591)[((int64_t)16)])));
  *(uint64_t*)_5451 = _5588;
  *(uint64_t*)_5453 = _5589;
  *(uint64_t*)_5483 = _5590;
  *(uint64_t*)_5485 = _5592;
  goto _5878;

_5878:
  _5593 = julia_accept_number_51(_4986, _4987);
  if ((llvm_select_bool((((bool)_5593&1u)), _5527, 0))) {
    _5594__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _5886;
  } else {
    goto _5887;
  }

_5887:
  julia_emit_20((&_5000), _4986, _4987, 754, 1);
  _5010__PHI_TEMPORARY = (&_5000);   /* for PHI node */
  goto _5726;

_5871:
  if (_5528) {
    _5594__PHI_TEMPORARY = 46;   /* for PHI node */
    goto _5886;
  } else {
    goto _5888;
  }

_5888:
  julia_emit_20((&_5002), _4986, _4987, 755, 1);
  _5010__PHI_TEMPORARY = (&_5002);   /* for PHI node */
  goto _5726;

_5886:
  _5594 = _5594__PHI_TEMPORARY;
  _5595 = _5528 ^ 1;
  _5666__PHI_TEMPORARY = _5595;   /* for PHI node */
  _5667__PHI_TEMPORARY = _5527;   /* for PHI node */
  _5668__PHI_TEMPORARY = 1;   /* for PHI node */
  _5669__PHI_TEMPORARY = _5594;   /* for PHI node */
  goto _5851;

_5853:
  _5596 = *(void**)_4987;
  _5597 = ((&((uint8_t*)_5596)[((int64_t)16)]));
  _5598 = *(uint64_t*)_5597;
  _5599 = ((&((uint8_t*)_5596)[((int64_t)8)]));
  _5600 = *(uint64_t*)_5599;
  if ((((int64_t)_5600) > ((int64_t)_5598))) {
    goto _5889;
  } else {
    _5617__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5890;
  }

_5889:
  _5601 = *(void**)_5596;
  _5602 = *(uint8_t*)(((&((uint8_t*)_5601)[((int64_t)_5598)])));
  *(uint64_t*)_5597 = (llvm_add_u64(_5598, 1));
  _5603 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5602)), 0);
  _5604 = llvm_sub_u8(32, (llvm_shl_u8(_5603, 3)));
  _5605 = (((uint32_t)(uint8_t)_5602)) << 24;
  if ((((uint8_t)_5604) > ((uint8_t)((uint8_t)16)))) {
    _5617__PHI_TEMPORARY = _5605;   /* for PHI node */
    goto _5890;
  } else {
    _5606__PHI_TEMPORARY = 16;   /* for PHI node */
    _5607__PHI_TEMPORARY = _5605;   /* for PHI node */
    goto _5891;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5891:
  _5606 = _5606__PHI_TEMPORARY;
  _5607 = _5607__PHI_TEMPORARY;
  if (((((int64_t)_5606) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5606) < ((uint64_t)(((uint64_t)(uint8_t)_5604)))))) {
    _5617__PHI_TEMPORARY = _5607;   /* for PHI node */
    goto _5890;
  } else {
    goto _5892;
  }

_5892:
  _5608 = *(uint64_t*)_5597;
  _5609 = *(uint64_t*)_5599;
  if ((((int64_t)_5609) > ((int64_t)_5608))) {
    goto _5893;
  } else {
    _5617__PHI_TEMPORARY = _5607;   /* for PHI node */
    goto _5890;
  }

_5893:
  _5610 = *(void**)_5596;
  _5611 = *(uint8_t*)(((&((uint8_t*)_5610)[((int64_t)_5608)])));
  if ((((int8_t)_5611) > ((int8_t)((uint8_t)-65)))) {
    _5617__PHI_TEMPORARY = _5607;   /* for PHI node */
    goto _5890;
  } else {
    goto _5894;
  }

_5894:
  _5612 = llvm_select_u32((((int64_t)_5608) < ((int64_t)_5609)), (((uint32_t)(uint8_t)_5611)), 0);
  _5613 = *(uint64_t*)_5597;
  *(uint64_t*)_5597 = (llvm_add_u64(_5613, 1));
  _5614 = llvm_neg_u64(_5606);
  _5615 = _5607 | (llvm_select_u32((((int64_t)_5606) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5614) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5612, (((uint32_t)_5614)))))), (llvm_select_u32((((uint64_t)_5606) > ((uint64_t)UINT64_C(31))), 0, (_5612 << (((uint32_t)_5606)))))));
  _5616 = llvm_add_u64(_5606, -8);
  _5606__PHI_TEMPORARY = _5616;   /* for PHI node */
  _5607__PHI_TEMPORARY = _5615;   /* for PHI node */
  goto _5891;

  } while (1); /* end of syntactic loop '' */
_5890:
  _5617 = _5617__PHI_TEMPORARY;
  _5618 = *(uint64_t*)_5004;
  _5619 = *(uint64_t*)_5006;
  _5620 = jsyn_cbe_fshl_i64(_5619, _5618, 32);
  _5621 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5617)), _5619, 32);
  *(uint64_t*)_5004 = _5620;
  *(uint64_t*)_5006 = _5621;
  _5622 = *(uint64_t*)_5453;
  _5623 = ((&((uint8_t*)_4987)[((int64_t)64)]));
  _5624 = *(uint64_t*)_5623;
  _5625 = ((&((uint8_t*)_4987)[((int64_t)72)]));
  _5626 = *(uint64_t*)_5625;
  _5627 = *(void**)_4987;
  _5628 = *(uint64_t*)(((&((uint8_t*)_5627)[((int64_t)16)])));
  *(uint64_t*)_5451 = _5622;
  *(uint64_t*)_5453 = _5624;
  *(uint64_t*)_5623 = _5626;
  *(uint64_t*)_5625 = _5628;
  _5629 = julia_accept_number_53(_4986, _4987);
  _5630 = ((bool)_5629&1u);
  _5666__PHI_TEMPORARY = 0;   /* for PHI node */
  _5667__PHI_TEMPORARY = _5630;   /* for PHI node */
  _5668__PHI_TEMPORARY = 1;   /* for PHI node */
  _5669__PHI_TEMPORARY = 45;   /* for PHI node */
  goto _5851;

_5854:
  _5631 = *(void**)_4987;
  _5632 = ((&((uint8_t*)_5631)[((int64_t)16)]));
  _5633 = *(uint64_t*)_5632;
  _5634 = ((&((uint8_t*)_5631)[((int64_t)8)]));
  _5635 = *(uint64_t*)_5634;
  if ((((int64_t)_5635) > ((int64_t)_5633))) {
    goto _5895;
  } else {
    _5652__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5896;
  }

_5895:
  _5636 = *(void**)_5631;
  _5637 = *(uint8_t*)(((&((uint8_t*)_5636)[((int64_t)_5633)])));
  *(uint64_t*)_5632 = (llvm_add_u64(_5633, 1));
  _5638 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5637)), 0);
  _5639 = llvm_sub_u8(32, (llvm_shl_u8(_5638, 3)));
  _5640 = (((uint32_t)(uint8_t)_5637)) << 24;
  if ((((uint8_t)_5639) > ((uint8_t)((uint8_t)16)))) {
    _5652__PHI_TEMPORARY = _5640;   /* for PHI node */
    goto _5896;
  } else {
    _5641__PHI_TEMPORARY = 16;   /* for PHI node */
    _5642__PHI_TEMPORARY = _5640;   /* for PHI node */
    goto _5897;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5897:
  _5641 = _5641__PHI_TEMPORARY;
  _5642 = _5642__PHI_TEMPORARY;
  if (((((int64_t)_5641) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5641) < ((uint64_t)(((uint64_t)(uint8_t)_5639)))))) {
    _5652__PHI_TEMPORARY = _5642;   /* for PHI node */
    goto _5896;
  } else {
    goto _5898;
  }

_5898:
  _5643 = *(uint64_t*)_5632;
  _5644 = *(uint64_t*)_5634;
  if ((((int64_t)_5644) > ((int64_t)_5643))) {
    goto _5899;
  } else {
    _5652__PHI_TEMPORARY = _5642;   /* for PHI node */
    goto _5896;
  }

_5899:
  _5645 = *(void**)_5631;
  _5646 = *(uint8_t*)(((&((uint8_t*)_5645)[((int64_t)_5643)])));
  if ((((int8_t)_5646) > ((int8_t)((uint8_t)-65)))) {
    _5652__PHI_TEMPORARY = _5642;   /* for PHI node */
    goto _5896;
  } else {
    goto _5900;
  }

_5900:
  _5647 = llvm_select_u32((((int64_t)_5643) < ((int64_t)_5644)), (((uint32_t)(uint8_t)_5646)), 0);
  _5648 = *(uint64_t*)_5632;
  *(uint64_t*)_5632 = (llvm_add_u64(_5648, 1));
  _5649 = llvm_neg_u64(_5641);
  _5650 = _5642 | (llvm_select_u32((((int64_t)_5641) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5649) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5647, (((uint32_t)_5649)))))), (llvm_select_u32((((uint64_t)_5641) > ((uint64_t)UINT64_C(31))), 0, (_5647 << (((uint32_t)_5641)))))));
  _5651 = llvm_add_u64(_5641, -8);
  _5641__PHI_TEMPORARY = _5651;   /* for PHI node */
  _5642__PHI_TEMPORARY = _5650;   /* for PHI node */
  goto _5897;

  } while (1); /* end of syntactic loop '' */
_5896:
  _5652 = _5652__PHI_TEMPORARY;
  _5653 = *(uint64_t*)_5004;
  _5654 = *(uint64_t*)_5006;
  _5655 = jsyn_cbe_fshl_i64(_5654, _5653, 32);
  _5656 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5652)), _5654, 32);
  *(uint64_t*)_5004 = _5655;
  *(uint64_t*)_5006 = _5656;
  _5657 = *(uint64_t*)_5453;
  _5658 = ((&((uint8_t*)_4987)[((int64_t)64)]));
  _5659 = *(uint64_t*)_5658;
  _5660 = ((&((uint8_t*)_4987)[((int64_t)72)]));
  _5661 = *(uint64_t*)_5660;
  _5662 = *(void**)_4987;
  _5663 = *(uint64_t*)(((&((uint8_t*)_5662)[((int64_t)16)])));
  *(uint64_t*)_5451 = _5657;
  *(uint64_t*)_5453 = _5659;
  *(uint64_t*)_5658 = _5661;
  *(uint64_t*)_5660 = _5663;
  _5664 = julia_accept_number_54(_4986, _4987);
  _5665 = ((bool)_5664&1u);
  _5666__PHI_TEMPORARY = 0;   /* for PHI node */
  _5667__PHI_TEMPORARY = _5665;   /* for PHI node */
  _5668__PHI_TEMPORARY = 1;   /* for PHI node */
  _5669__PHI_TEMPORARY = 47;   /* for PHI node */
  goto _5851;

_5851:
  _5666 = _5666__PHI_TEMPORARY;
  _5667 = _5667__PHI_TEMPORARY;
  _5668 = _5668__PHI_TEMPORARY;
  _5669 = _5669__PHI_TEMPORARY;
  if (_5666) {
    _5720__PHI_TEMPORARY = _5669;   /* for PHI node */
    goto _5786;
  } else {
    goto _5901;
  }

_5901:
  _5670 = *(uint64_t*)_5004;
  _5671 = llvm_lshr_u64(_5670, 32);
  _5672 = ((uint32_t)_5671);
  if (_5668) {
    goto _5902;
  } else {
    goto _5903;
  }

_5904:
  if ((((((uint64_t)_5670) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5671 != UINT64_C(805306368))) | ((((uint64_t)_5670) > ((uint64_t)UINT64_C(4107282860161892351))) & (_5671 != UINT64_C(956301312))))) {
    goto _5905;
  } else {
    goto _5906;
  }

_5905:
  if ((_5671 == UINT64_C(4294967295))) {
    _5720__PHI_TEMPORARY = _5669;   /* for PHI node */
    goto _5786;
  } else {
    goto _5907;
  }

_5907:
  _5673 = llvm_OC_ctlz_OC_i32((_5672 ^ -1), 0);
  _5674 = ((uint64_t)(uint32_t)_5673);
  _5675 = llvm_OC_cttz_OC_i32(_5672, 0);
  _5676 = _5675 & 56;
  _5677 = ((uint64_t)(uint32_t)_5676);
  _5678 = llvm_select_bool((((uint32_t)_5675) < ((uint32_t)32u)), ((llvm_lshr_u32(((_5672 & 12632256) ^ 8421504), _5676)) != 0u), 0);
  _5679 = (((_5672 & -33554432) == 3221225472u) | ((_5672 & -2097152) == 3766484992u)) | ((_5672 & -1048576) == 4034920448u);
  if ((llvm_select_bool((((((_5673 == 1u) | (((uint64_t)(llvm_add_u64((_5674 << 3), _5677))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_5670) > ((uint64_t)UINT64_C(17122614315006820351))) & (_5671 != UINT64_C(3986669312))) & (((((uint64_t)_5670) < ((uint64_t)UINT64_C(17185876919829135360))) & (_5671 != UINT64_C(4001398784))) | ((((uint64_t)_5670) > ((uint64_t)UINT64_C(17622514693983698943))) & (_5671 != UINT64_C(4103061439)))))) | _5678) | _5679), 1, (_5671 == UINT64_C(4036993714))))) {
    _5720__PHI_TEMPORARY = _5669;   /* for PHI node */
    goto _5786;
  } else {
    goto _5908;
  }

_5908:
  _5680 = llvm_lshr_u32(_5672, 24);
  if ((((int64_t)_5670) < ((int64_t)UINT64_C(0)))) {
    goto _5909;
  } else {
    _5683__PHI_TEMPORARY = _5680;   /* for PHI node */
    goto _5910;
  }

_5909:
  if ((((_5673 == 1u) | (((uint64_t)(llvm_add_u64((_5674 << 3), _5677))) > ((uint64_t)UINT64_C(32)))) | (_5678 | _5679))) {
    goto _5911;
  } else {
    goto _5912;
  }

_5911:
  julia_throw_invalid_char_21(_4986, _5672);
  __builtin_unreachable();

_5912:
  _5681 = llvm_select_u32((((uint32_t)_5675) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _5673)) & _5672), _5676)), 0);
  _5682 = (((_5681 & 127) | ((llvm_lshr_u32(_5681, 2)) & 8128)) | ((llvm_lshr_u32(_5681, 4)) & 520192)) | ((llvm_lshr_u32(_5681, 6)) & 33292288);
  _5683__PHI_TEMPORARY = _5682;   /* for PHI node */
  goto _5910;

_5910:
  _5683 = _5683__PHI_TEMPORARY;
  _5684 = jsk_jl_id_start_char(_5683);
  if ((_5684 == 0u)) {
    _5720__PHI_TEMPORARY = _5669;   /* for PHI node */
    goto _5786;
  } else {
    goto _5906;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5906:
  _5685 = *(uint64_t*)_5004;
  _5686 = julia_YY_OC_lex_digitYY_OC_YY_OC_0_55(_4986, (((uint32_t)(llvm_lshr_u64(_5685, 32)))));
  if ((((bool)_5686&1u))) {
    goto _5913;
  } else {
    goto _5914;
  }

_5913:
  _5687 = *(void**)_4987;
  _5688 = ((&((uint8_t*)_5687)[((int64_t)16)]));
  _5689 = *(uint64_t*)_5688;
  _5690 = ((&((uint8_t*)_5687)[((int64_t)8)]));
  _5691 = *(uint64_t*)_5690;
  if ((((int64_t)_5691) > ((int64_t)_5689))) {
    goto _5915;
  } else {
    _5708__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5916;
  }

_5915:
  _5692 = *(void**)_5687;
  _5693 = *(uint8_t*)(((&((uint8_t*)_5692)[((int64_t)_5689)])));
  *(uint64_t*)_5688 = (llvm_add_u64(_5689, 1));
  _5694 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5693)), 0);
  _5695 = llvm_sub_u8(32, (llvm_shl_u8(_5694, 3)));
  _5696 = (((uint32_t)(uint8_t)_5693)) << 24;
  if ((((uint8_t)_5695) > ((uint8_t)((uint8_t)16)))) {
    _5708__PHI_TEMPORARY = _5696;   /* for PHI node */
    goto _5916;
  } else {
    _5697__PHI_TEMPORARY = 16;   /* for PHI node */
    _5698__PHI_TEMPORARY = _5696;   /* for PHI node */
    goto _5917;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5917:
  _5697 = _5697__PHI_TEMPORARY;
  _5698 = _5698__PHI_TEMPORARY;
  if (((((int64_t)_5697) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5697) < ((uint64_t)(((uint64_t)(uint8_t)_5695)))))) {
    _5708__PHI_TEMPORARY = _5698;   /* for PHI node */
    goto _5916;
  } else {
    goto _5918;
  }

_5918:
  _5699 = *(uint64_t*)_5688;
  _5700 = *(uint64_t*)_5690;
  if ((((int64_t)_5700) > ((int64_t)_5699))) {
    goto _5919;
  } else {
    _5708__PHI_TEMPORARY = _5698;   /* for PHI node */
    goto _5916;
  }

_5919:
  _5701 = *(void**)_5687;
  _5702 = *(uint8_t*)(((&((uint8_t*)_5701)[((int64_t)_5699)])));
  if ((((int8_t)_5702) > ((int8_t)((uint8_t)-65)))) {
    _5708__PHI_TEMPORARY = _5698;   /* for PHI node */
    goto _5916;
  } else {
    goto _5920;
  }

_5920:
  _5703 = llvm_select_u32((((int64_t)_5699) < ((int64_t)_5700)), (((uint32_t)(uint8_t)_5702)), 0);
  _5704 = *(uint64_t*)_5688;
  *(uint64_t*)_5688 = (llvm_add_u64(_5704, 1));
  _5705 = llvm_neg_u64(_5697);
  _5706 = _5698 | (llvm_select_u32((((int64_t)_5697) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5705) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5703, (((uint32_t)_5705)))))), (llvm_select_u32((((uint64_t)_5697) > ((uint64_t)UINT64_C(31))), 0, (_5703 << (((uint32_t)_5697)))))));
  _5707 = llvm_add_u64(_5697, -8);
  _5697__PHI_TEMPORARY = _5707;   /* for PHI node */
  _5698__PHI_TEMPORARY = _5706;   /* for PHI node */
  goto _5917;

  } while (1); /* end of syntactic loop '' */
_5916:
  _5708 = _5708__PHI_TEMPORARY;
  _5709 = *(uint64_t*)_5004;
  _5710 = *(uint64_t*)_5006;
  _5711 = jsyn_cbe_fshl_i64(_5710, _5709, 32);
  _5712 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5708)), _5710, 32);
  *(uint64_t*)_5004 = _5711;
  *(uint64_t*)_5006 = _5712;
  _5713 = *(uint64_t*)_5453;
  _5714 = ((&((uint8_t*)_4987)[((int64_t)64)]));
  _5715 = *(uint64_t*)_5714;
  _5716 = ((&((uint8_t*)_4987)[((int64_t)72)]));
  _5717 = *(uint64_t*)_5716;
  _5718 = *(void**)_4987;
  _5719 = *(uint64_t*)(((&((uint8_t*)_5718)[((int64_t)16)])));
  *(uint64_t*)_5451 = _5713;
  *(uint64_t*)_5453 = _5715;
  *(uint64_t*)_5714 = _5717;
  *(uint64_t*)_5716 = _5719;
  goto _5906;

  } while (1); /* end of syntactic loop '' */
_5914:
  julia_emit_20((&_5001), _4986, _4987, 754, 1);
  _5010__PHI_TEMPORARY = (&_5001);   /* for PHI node */
  goto _5726;

_5786:
  _5720 = _5720__PHI_TEMPORARY;
  julia_emit_20((&_4994), _4986, _4987, _5720, 1);
  _5010__PHI_TEMPORARY = (&_4994);   /* for PHI node */
  goto _5726;

_5903:
  jsk_ijl_undefined_var_error((((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)616)]))), (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)648)]))));
  __builtin_unreachable();

_5902:
  if (_5667) {
    goto _5904;
  } else {
    goto _5906;
  }

}


static uint8_t julia_isopsuffix_50(void* _5921, uint32_t _5922) {
  bool _5923;
  bool _5923__PHI_TEMPORARY;
  uint32_t _5924;
  uint64_t _5925;
  uint32_t _5926;
  uint32_t _5927;
  uint64_t _5928;
  bool _5929;
  bool _5930;
  uint32_t _5931;
  uint32_t _5932;
  uint32_t _5933;
  uint32_t _5934;
  uint32_t _5934__PHI_TEMPORARY;
  uint32_t _5935;
  uint32_t _5936;
  uint32_t _5937;

  if ((_5922 == 4294967295u)) {
    _5923__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5938;
  } else {
    goto _5939;
  }

_5940:
  if ((((bool)(((uint32_t)(llvm_lshr_u32(1122337, _5936))))&1u))) {
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  } else {
    goto _5941;
  }

_5942:
  if ((((bool)(llvm_lshr_u64(INT64_C(137438953535), (((uint64_t)(uint32_t)_5937))))&1u))) {
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  } else {
    goto _5941;
  }

_5938:
  _5923 = _5923__PHI_TEMPORARY;
  return (((uint8_t)(bool)_5923));
_5939:
  _5924 = llvm_OC_ctlz_OC_i32((_5922 ^ -1), 0);
  _5925 = ((uint64_t)(uint32_t)_5924);
  _5926 = llvm_OC_cttz_OC_i32(_5922, 0);
  _5927 = _5926 & 56;
  _5928 = ((uint64_t)(uint32_t)_5927);
  _5929 = llvm_select_bool((((uint32_t)_5926) < ((uint32_t)32u)), ((llvm_lshr_u32(((_5922 & 12632256) ^ 8421504), _5927)) != 0u), 0);
  _5930 = (((_5922 & -33554432) == 3221225472u) | ((_5922 & -2097152) == 3766484992u)) | ((_5922 & -1048576) == 4034920448u);
  if ((((((_5924 == 1u) | (((uint64_t)(llvm_add_u64((_5925 << 3), _5928))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_5922) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_5922, 191905856))) < ((uint32_t)4193304640u)))) | _5929) | _5930)) {
    _5923__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5938;
  } else {
    goto _5943;
  }

_5943:
  _5931 = llvm_lshr_u32(_5922, 24);
  if ((((int32_t)_5922) < ((int32_t)0u))) {
    goto _5944;
  } else {
    _5934__PHI_TEMPORARY = _5931;   /* for PHI node */
    goto _5945;
  }

_5944:
  if ((((_5924 == 1u) | (((uint64_t)(llvm_add_u64((_5925 << 3), _5928))) > ((uint64_t)UINT64_C(32)))) | (_5929 | _5930))) {
    goto _5946;
  } else {
    goto _5947;
  }

_5946:
  julia_throw_invalid_char_21(_5921, _5922);
  __builtin_unreachable();

_5947:
  _5932 = llvm_select_u32((((uint32_t)_5926) < ((uint32_t)32u)), (llvm_lshr_u32((_5922 & (llvm_lshr_u32(-1, _5924))), _5927)), 0);
  _5933 = (((_5932 & 127) | ((llvm_lshr_u32(_5932, 2)) & 8128)) | ((llvm_lshr_u32(_5932, 4)) & 520192)) | ((llvm_lshr_u32(_5932, 6)) & 33292288);
  _5934__PHI_TEMPORARY = _5933;   /* for PHI node */
  goto _5945;

_5945:
  _5934 = _5934__PHI_TEMPORARY;
  if ((((uint32_t)(llvm_add_u32(_5934, -161))) < ((uint32_t)1113951u))) {
    goto _5948;
  } else {
    _5923__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5938;
  }

_5948:
  _5935 = jsk_utf8proc_category(_5934);
  if (((((uint32_t)(llvm_add_u32(_5935, -6))) < ((uint32_t)3u)) | ((_5934 & 2097150) == 178u))) {
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  } else {
    goto _5949;
  }

_5949:
  switch (_5934) {
  default:
    goto _5950;
  case 185u:
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  case 688u:
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  }

_5950:
  if ((llvm_select_bool((llvm_select_bool(((_5934 & 2097150) == 690u), 1, (((uint32_t)(llvm_add_u32(_5934, -695))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_5934, -737))) < ((uint32_t)3u))))) {
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  } else {
    goto _5951;
  }

_5951:
  switch (_5934) {
  default:
    goto _5952;
  case 7468u:
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  case 7470u:
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  }

_5952:
  if ((llvm_select_bool(((llvm_select_bool(((llvm_select_bool(((llvm_select_bool((llvm_select_bool(((llvm_select_bool(((_5934 & 2097150) == 7472u), 1, (((uint32_t)(llvm_add_u32(_5934, -7475))) < ((uint32_t)8u)))) | (_5934 == 7484u)), 1, (((uint32_t)(llvm_add_u32(_5934, -7486))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_5934, -7495))) < ((uint32_t)3u)))) | (_5934 == 7501u)), 1, (((uint32_t)(llvm_add_u32(_5934, -7503))) < ((uint32_t)2u)))) | (_5934 == 7506u)), 1, (((uint32_t)(llvm_add_u32(_5934, -7510))) < ((uint32_t)3u)))) | (_5934 == 7515u)), 1, (((uint32_t)(llvm_add_u32(_5934, -7517))) < ((uint32_t)14u))))) {
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  } else {
    goto _5953;
  }

_5953:
  switch (_5934) {
  default:
    goto _5954;
  case 7580u:
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  case 7584u:
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  }

_5954:
  if ((((uint32_t)(llvm_add_u32(_5934, -7589))) < ((uint32_t)2u))) {
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  } else {
    goto _5955;
  }

_5955:
  _5936 = llvm_add_u32(_5934, -7595);
  if ((((uint32_t)_5936) < ((uint32_t)21u))) {
    goto _5940;
  } else {
    goto _5956;
  }

_5956:
  _5937 = llvm_add_u32(_5934, -8242);
  if ((((uint32_t)_5937) < ((uint32_t)38u))) {
    goto _5942;
  } else {
    goto _5941;
  }

_5941:
  if (((llvm_select_bool(((llvm_select_bool(((_5934 & 2097150) == 8304u), 1, (((uint32_t)(llvm_add_u32(_5934, -8308))) < ((uint32_t)27u)))) | ((_5934 & 2097148) == 8336u)), 1, (((uint32_t)(llvm_add_u32(_5934, -8341))) < ((uint32_t)8u)))) | ((_5934 & 2097150) == 11388u))) {
    _5923__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5938;
  } else {
    goto _5957;
  }

_5957:
  _5923__PHI_TEMPORARY = (((uint32_t)(llvm_add_u32(_5934, -42779))) < ((uint32_t)3u));   /* for PHI node */
  goto _5938;

}


static uint8_t julia_accept_number_51(void* _5958, void* _5959) {
  uint8_t _5960;
  uint8_t _5960__PHI_TEMPORARY;
  void* _5961;
  uint64_t _5962;
  void* _5963;
  uint64_t _5964;
  uint64_t _5965;
  void* _5966;
  void* _5967;
  uint64_t _5968;
  void* _5969;
  uint64_t _5970;
  void* _5971;
  uint8_t _5972;
  uint8_t _5973;
  uint8_t _5974;
  uint32_t _5975;
  uint64_t _5976;
  uint64_t _5976__PHI_TEMPORARY;
  uint32_t _5977;
  uint32_t _5977__PHI_TEMPORARY;
  uint64_t _5978;
  uint64_t _5979;
  void* _5980;
  uint8_t _5981;
  uint32_t _5982;
  uint64_t _5983;
  uint64_t _5984;
  uint32_t _5985;
  uint64_t _5986;
  uint32_t _5987;
  uint32_t _5987__PHI_TEMPORARY;
  uint64_t _5988;
  uint64_t _5989;
  uint64_t _5990;
  uint64_t _5991;
  void* _5992;
  uint64_t _5993;
  void* _5994;
  uint64_t _5995;
  void* _5996;
  uint64_t _5997;
  void* _5998;
  uint64_t _5999;

  _5960__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _6000;

  do {     /* Syntactic loop '' to make GCC happy */
_6000:
  _5960 = _5960__PHI_TEMPORARY;
  _5961 = ((&((uint8_t*)_5959)[((int64_t)32)]));
  _5962 = *(uint64_t*)_5961;
  _5963 = ((&((uint8_t*)_5959)[((int64_t)40)]));
  _5964 = llvm_lshr_u64(_5962, 32);
  if ((_5964 == UINT64_C(1593835520))) {
    goto _6001;
  } else {
    goto _6002;
  }

_6001:
  _5965 = *(uint64_t*)_5963;
  if ((((uint32_t)(llvm_add_u32((((uint32_t)_5965)), -805306368))) < ((uint32_t)150994945u))) {
    goto _6002;
  } else {
    goto _6003;
  }

_6002:
  if (((((((uint64_t)_5962) > ((uint64_t)UINT64_C(3458764518115508223))) | (_5964 == UINT64_C(805306368))) & ((((uint64_t)_5962) < ((uint64_t)UINT64_C(4107282860161892352))) | (_5964 == UINT64_C(956301312)))) | (_5964 == UINT64_C(1593835520)))) {
    goto _6004;
  } else {
    goto _6003;
  }

_6004:
  _5966 = *(void**)_5959;
  _5967 = ((&((uint8_t*)_5966)[((int64_t)16)]));
  _5968 = *(uint64_t*)_5967;
  _5969 = ((&((uint8_t*)_5966)[((int64_t)8)]));
  _5970 = *(uint64_t*)_5969;
  if ((((int64_t)_5970) > ((int64_t)_5968))) {
    goto _6005;
  } else {
    _5987__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _6006;
  }

_6005:
  _5971 = *(void**)_5966;
  _5972 = *(uint8_t*)(((&((uint8_t*)_5971)[((int64_t)_5968)])));
  *(uint64_t*)_5967 = (llvm_add_u64(_5968, 1));
  _5973 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5972)), 0);
  _5974 = llvm_sub_u8(32, (llvm_shl_u8(_5973, 3)));
  _5975 = (((uint32_t)(uint8_t)_5972)) << 24;
  if ((((uint8_t)_5974) > ((uint8_t)((uint8_t)16)))) {
    _5987__PHI_TEMPORARY = _5975;   /* for PHI node */
    goto _6006;
  } else {
    _5976__PHI_TEMPORARY = 16;   /* for PHI node */
    _5977__PHI_TEMPORARY = _5975;   /* for PHI node */
    goto _6007;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_6007:
  _5976 = _5976__PHI_TEMPORARY;
  _5977 = _5977__PHI_TEMPORARY;
  if (((((int64_t)_5976) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5976) < ((uint64_t)(((uint64_t)(uint8_t)_5974)))))) {
    _5987__PHI_TEMPORARY = _5977;   /* for PHI node */
    goto _6006;
  } else {
    goto _6008;
  }

_6008:
  _5978 = *(uint64_t*)_5967;
  _5979 = *(uint64_t*)_5969;
  if ((((int64_t)_5979) > ((int64_t)_5978))) {
    goto _6009;
  } else {
    _5987__PHI_TEMPORARY = _5977;   /* for PHI node */
    goto _6006;
  }

_6009:
  _5980 = *(void**)_5966;
  _5981 = *(uint8_t*)(((&((uint8_t*)_5980)[((int64_t)_5978)])));
  if ((((int8_t)_5981) > ((int8_t)((uint8_t)-65)))) {
    _5987__PHI_TEMPORARY = _5977;   /* for PHI node */
    goto _6006;
  } else {
    goto _6010;
  }

_6010:
  _5982 = llvm_select_u32((((int64_t)_5978) < ((int64_t)_5979)), (((uint32_t)(uint8_t)_5981)), 0);
  _5983 = *(uint64_t*)_5967;
  *(uint64_t*)_5967 = (llvm_add_u64(_5983, 1));
  _5984 = llvm_neg_u64(_5976);
  _5985 = _5977 | (llvm_select_u32((((int64_t)_5976) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5984) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5982, (((uint32_t)_5984)))))), (llvm_select_u32((((uint64_t)_5976) > ((uint64_t)UINT64_C(31))), 0, (_5982 << (((uint32_t)_5976)))))));
  _5986 = llvm_add_u64(_5976, -8);
  _5976__PHI_TEMPORARY = _5986;   /* for PHI node */
  _5977__PHI_TEMPORARY = _5985;   /* for PHI node */
  goto _6007;

  } while (1); /* end of syntactic loop '' */
_6006:
  _5987 = _5987__PHI_TEMPORARY;
  _5988 = *(uint64_t*)_5961;
  _5989 = *(uint64_t*)_5963;
  _5990 = jsyn_cbe_fshl_i64(_5989, _5988, 32);
  _5991 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5987)), _5989, 32);
  *(uint64_t*)_5961 = _5990;
  *(uint64_t*)_5963 = _5991;
  _5992 = ((&((uint8_t*)_5959)[((int64_t)56)]));
  _5993 = *(uint64_t*)_5992;
  _5994 = ((&((uint8_t*)_5959)[((int64_t)64)]));
  _5995 = *(uint64_t*)_5994;
  _5996 = ((&((uint8_t*)_5959)[((int64_t)72)]));
  _5997 = *(uint64_t*)_5996;
  _5998 = *(void**)_5959;
  _5999 = *(uint64_t*)(((&((uint8_t*)_5998)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5959)[((int64_t)48)]))) = _5993;
  *(uint64_t*)_5992 = _5995;
  *(uint64_t*)_5994 = _5997;
  *(uint64_t*)_5996 = _5999;
  _5960__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _6000;

  } while (1); /* end of syntactic loop '' */
_6003:
  return _5960;
}


static uint8_t julia_accept_number_52(void* _6011, void* _6012) {
  uint8_t _6013;
  uint8_t _6013__PHI_TEMPORARY;
  void* _6014;
  uint64_t _6015;
  uint64_t _6016;
  void* _6017;
  uint64_t _6018;
  uint64_t _6019;
  uint32_t _6020;
  void* _6021;
  void* _6022;
  uint64_t _6023;
  void* _6024;
  uint64_t _6025;
  void* _6026;
  uint8_t _6027;
  uint8_t _6028;
  uint8_t _6029;
  uint32_t _6030;
  uint64_t _6031;
  uint64_t _6031__PHI_TEMPORARY;
  uint32_t _6032;
  uint32_t _6032__PHI_TEMPORARY;
  uint64_t _6033;
  uint64_t _6034;
  void* _6035;
  uint8_t _6036;
  uint32_t _6037;
  uint64_t _6038;
  uint64_t _6039;
  uint32_t _6040;
  uint64_t _6041;
  uint32_t _6042;
  uint32_t _6042__PHI_TEMPORARY;
  uint64_t _6043;
  uint64_t _6044;
  uint64_t _6045;
  uint64_t _6046;
  void* _6047;
  uint64_t _6048;
  void* _6049;
  uint64_t _6050;
  void* _6051;
  uint64_t _6052;
  void* _6053;
  uint64_t _6054;

  _6013__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _6055;

  do {     /* Syntactic loop '' to make GCC happy */
_6055:
  _6013 = _6013__PHI_TEMPORARY;
  _6014 = ((&((uint8_t*)_6012)[((int64_t)32)]));
  _6015 = *(uint64_t*)_6014;
  _6016 = ((uint64_t)_6015);
  _6017 = ((&((uint8_t*)_6012)[((int64_t)40)]));
  _6018 = llvm_lshr_u64(_6016, 32);
  _6019 = *(uint64_t*)_6017;
  _6020 = ((uint32_t)_6019);
  if ((llvm_select_bool((llvm_select_bool((_6018 != UINT64_C(1593835520)), 1, ((((uint32_t)(llvm_add_u32(_6020, -805306368))) < ((uint32_t)150994945u)) | (((uint32_t)(llvm_add_u32(_6020, 2667577344u))) < ((uint32_t)83886081u))))), 1, (((uint32_t)(llvm_add_u32(_6020, 3204448256u))) < ((uint32_t)83886081u))))) {
    goto _6056;
  } else {
    goto _6057;
  }

_6056:
  if ((((((uint64_t)_6016) > ((uint64_t)UINT64_C(3458764518115508223))) | (_6018 == UINT64_C(805306368))) & ((((uint64_t)_6016) < ((uint64_t)UINT64_C(4107282860161892352))) | (_6018 == UINT64_C(956301312))))) {
    goto _6058;
  } else {
    goto _6059;
  }

_6059:
  if (((((uint64_t)_6016) < ((uint64_t)UINT64_C(6989586625973977088))) & (_6018 != UINT64_C(1627389952)))) {
    goto _6060;
  } else {
    goto _6061;
  }

_6061:
  if (((((uint64_t)_6016) < ((uint64_t)UINT64_C(7349874591868649472))) | (_6018 == UINT64_C(1711276032)))) {
    goto _6058;
  } else {
    goto _6060;
  }

_6060:
  if (((((uint64_t)_6016) < ((uint64_t)UINT64_C(4683743616760283136))) & (_6018 != UINT64_C(1090519040)))) {
    goto _6062;
  } else {
    goto _6063;
  }

_6063:
  if ((((uint64_t)_6016) < ((uint64_t)UINT64_C(5044031582654955520)))) {
    goto _6058;
  } else {
    goto _6064;
  }

_6064:
  switch ((((uint32_t)_6018))) {
  default:
    goto _6057;
  case 1593835520u:
    goto _6058;
  case 1174405120u:
    goto _6058;
  }

_6062:
  if ((_6018 != UINT64_C(1593835520))) {
    goto _6057;
  } else {
    goto _6058;
  }

_6058:
  _6021 = *(void**)_6012;
  _6022 = ((&((uint8_t*)_6021)[((int64_t)16)]));
  _6023 = *(uint64_t*)_6022;
  _6024 = ((&((uint8_t*)_6021)[((int64_t)8)]));
  _6025 = *(uint64_t*)_6024;
  if ((((int64_t)_6025) > ((int64_t)_6023))) {
    goto _6065;
  } else {
    _6042__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _6066;
  }

_6065:
  _6026 = *(void**)_6021;
  _6027 = *(uint8_t*)(((&((uint8_t*)_6026)[((int64_t)_6023)])));
  *(uint64_t*)_6022 = (llvm_add_u64(_6023, 1));
  _6028 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_6027)), 0);
  _6029 = llvm_sub_u8(32, (llvm_shl_u8(_6028, 3)));
  _6030 = (((uint32_t)(uint8_t)_6027)) << 24;
  if ((((uint8_t)_6029) > ((uint8_t)((uint8_t)16)))) {
    _6042__PHI_TEMPORARY = _6030;   /* for PHI node */
    goto _6066;
  } else {
    _6031__PHI_TEMPORARY = 16;   /* for PHI node */
    _6032__PHI_TEMPORARY = _6030;   /* for PHI node */
    goto _6067;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_6067:
  _6031 = _6031__PHI_TEMPORARY;
  _6032 = _6032__PHI_TEMPORARY;
  if (((((int64_t)_6031) < ((int64_t)UINT64_C(0))) | (((uint64_t)_6031) < ((uint64_t)(((uint64_t)(uint8_t)_6029)))))) {
    _6042__PHI_TEMPORARY = _6032;   /* for PHI node */
    goto _6066;
  } else {
    goto _6068;
  }

_6068:
  _6033 = *(uint64_t*)_6022;
  _6034 = *(uint64_t*)_6024;
  if ((((int64_t)_6034) > ((int64_t)_6033))) {
    goto _6069;
  } else {
    _6042__PHI_TEMPORARY = _6032;   /* for PHI node */
    goto _6066;
  }

_6069:
  _6035 = *(void**)_6021;
  _6036 = *(uint8_t*)(((&((uint8_t*)_6035)[((int64_t)_6033)])));
  if ((((int8_t)_6036) > ((int8_t)((uint8_t)-65)))) {
    _6042__PHI_TEMPORARY = _6032;   /* for PHI node */
    goto _6066;
  } else {
    goto _6070;
  }

_6070:
  _6037 = llvm_select_u32((((int64_t)_6033) < ((int64_t)_6034)), (((uint32_t)(uint8_t)_6036)), 0);
  _6038 = *(uint64_t*)_6022;
  *(uint64_t*)_6022 = (llvm_add_u64(_6038, 1));
  _6039 = llvm_neg_u64(_6031);
  _6040 = _6032 | (llvm_select_u32((((int64_t)_6031) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_6039) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_6037, (((uint32_t)_6039)))))), (llvm_select_u32((((uint64_t)_6031) > ((uint64_t)UINT64_C(31))), 0, (_6037 << (((uint32_t)_6031)))))));
  _6041 = llvm_add_u64(_6031, -8);
  _6031__PHI_TEMPORARY = _6041;   /* for PHI node */
  _6032__PHI_TEMPORARY = _6040;   /* for PHI node */
  goto _6067;

  } while (1); /* end of syntactic loop '' */
_6066:
  _6042 = _6042__PHI_TEMPORARY;
  _6043 = *(uint64_t*)_6014;
  _6044 = *(uint64_t*)_6017;
  _6045 = jsyn_cbe_fshl_i64(_6044, _6043, 32);
  _6046 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_6042)), _6044, 32);
  *(uint64_t*)_6014 = _6045;
  *(uint64_t*)_6017 = _6046;
  _6047 = ((&((uint8_t*)_6012)[((int64_t)56)]));
  _6048 = *(uint64_t*)_6047;
  _6049 = ((&((uint8_t*)_6012)[((int64_t)64)]));
  _6050 = *(uint64_t*)_6049;
  _6051 = ((&((uint8_t*)_6012)[((int64_t)72)]));
  _6052 = *(uint64_t*)_6051;
  _6053 = *(void**)_6012;
  _6054 = *(uint64_t*)(((&((uint8_t*)_6053)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_6012)[((int64_t)48)]))) = _6048;
  *(uint64_t*)_6047 = _6050;
  *(uint64_t*)_6049 = _6052;
  *(uint64_t*)_6051 = _6054;
  _6013__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _6055;

  } while (1); /* end of syntactic loop '' */
_6057:
  return _6013;
}


static uint8_t julia_accept_number_53(void* _6071, void* _6072) {
  uint8_t _6073;
  uint8_t _6073__PHI_TEMPORARY;
  void* _6074;
  uint64_t _6075;
  void* _6076;
  uint64_t _6077;
  void* _6078;
  void* _6079;
  uint64_t _6080;
  void* _6081;
  uint64_t _6082;
  void* _6083;
  uint8_t _6084;
  uint8_t _6085;
  uint8_t _6086;
  uint32_t _6087;
  uint64_t _6088;
  uint64_t _6088__PHI_TEMPORARY;
  uint32_t _6089;
  uint32_t _6089__PHI_TEMPORARY;
  uint64_t _6090;
  uint64_t _6091;
  void* _6092;
  uint8_t _6093;
  uint32_t _6094;
  uint64_t _6095;
  uint64_t _6096;
  uint32_t _6097;
  uint64_t _6098;
  uint32_t _6099;
  uint32_t _6099__PHI_TEMPORARY;
  uint64_t _6100;
  uint64_t _6101;
  uint64_t _6102;
  uint64_t _6103;
  void* _6104;
  uint64_t _6105;
  void* _6106;
  uint64_t _6107;
  void* _6108;
  uint64_t _6109;
  void* _6110;
  uint64_t _6111;

  _6073__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _6112;

  do {     /* Syntactic loop '' to make GCC happy */
_6112:
  _6073 = _6073__PHI_TEMPORARY;
  _6074 = ((&((uint8_t*)_6072)[((int64_t)32)]));
  _6075 = *(uint64_t*)_6074;
  _6076 = ((&((uint8_t*)_6072)[((int64_t)40)]));
  if (((_6075 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920))) {
    goto _6113;
  } else {
    goto _6114;
  }

_6113:
  _6077 = *(uint64_t*)_6076;
  if (((_6077 & INT64_C(4278190079)) == UINT64_C(805306368))) {
    goto _6114;
  } else {
    goto _6115;
  }

_6114:
  if ((((_6075 & INT64_C(-72057598332895232)) == UINT64_C(3458764513820540928)) | ((_6075 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920)))) {
    goto _6116;
  } else {
    goto _6115;
  }

_6116:
  _6078 = *(void**)_6072;
  _6079 = ((&((uint8_t*)_6078)[((int64_t)16)]));
  _6080 = *(uint64_t*)_6079;
  _6081 = ((&((uint8_t*)_6078)[((int64_t)8)]));
  _6082 = *(uint64_t*)_6081;
  if ((((int64_t)_6082) > ((int64_t)_6080))) {
    goto _6117;
  } else {
    _6099__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _6118;
  }

_6117:
  _6083 = *(void**)_6078;
  _6084 = *(uint8_t*)(((&((uint8_t*)_6083)[((int64_t)_6080)])));
  *(uint64_t*)_6079 = (llvm_add_u64(_6080, 1));
  _6085 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_6084)), 0);
  _6086 = llvm_sub_u8(32, (llvm_shl_u8(_6085, 3)));
  _6087 = (((uint32_t)(uint8_t)_6084)) << 24;
  if ((((uint8_t)_6086) > ((uint8_t)((uint8_t)16)))) {
    _6099__PHI_TEMPORARY = _6087;   /* for PHI node */
    goto _6118;
  } else {
    _6088__PHI_TEMPORARY = 16;   /* for PHI node */
    _6089__PHI_TEMPORARY = _6087;   /* for PHI node */
    goto _6119;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_6119:
  _6088 = _6088__PHI_TEMPORARY;
  _6089 = _6089__PHI_TEMPORARY;
  if (((((int64_t)_6088) < ((int64_t)UINT64_C(0))) | (((uint64_t)_6088) < ((uint64_t)(((uint64_t)(uint8_t)_6086)))))) {
    _6099__PHI_TEMPORARY = _6089;   /* for PHI node */
    goto _6118;
  } else {
    goto _6120;
  }

_6120:
  _6090 = *(uint64_t*)_6079;
  _6091 = *(uint64_t*)_6081;
  if ((((int64_t)_6091) > ((int64_t)_6090))) {
    goto _6121;
  } else {
    _6099__PHI_TEMPORARY = _6089;   /* for PHI node */
    goto _6118;
  }

_6121:
  _6092 = *(void**)_6078;
  _6093 = *(uint8_t*)(((&((uint8_t*)_6092)[((int64_t)_6090)])));
  if ((((int8_t)_6093) > ((int8_t)((uint8_t)-65)))) {
    _6099__PHI_TEMPORARY = _6089;   /* for PHI node */
    goto _6118;
  } else {
    goto _6122;
  }

_6122:
  _6094 = llvm_select_u32((((int64_t)_6090) < ((int64_t)_6091)), (((uint32_t)(uint8_t)_6093)), 0);
  _6095 = *(uint64_t*)_6079;
  *(uint64_t*)_6079 = (llvm_add_u64(_6095, 1));
  _6096 = llvm_neg_u64(_6088);
  _6097 = _6089 | (llvm_select_u32((((int64_t)_6088) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_6096) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_6094, (((uint32_t)_6096)))))), (llvm_select_u32((((uint64_t)_6088) > ((uint64_t)UINT64_C(31))), 0, (_6094 << (((uint32_t)_6088)))))));
  _6098 = llvm_add_u64(_6088, -8);
  _6088__PHI_TEMPORARY = _6098;   /* for PHI node */
  _6089__PHI_TEMPORARY = _6097;   /* for PHI node */
  goto _6119;

  } while (1); /* end of syntactic loop '' */
_6118:
  _6099 = _6099__PHI_TEMPORARY;
  _6100 = *(uint64_t*)_6074;
  _6101 = *(uint64_t*)_6076;
  _6102 = jsyn_cbe_fshl_i64(_6101, _6100, 32);
  _6103 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_6099)), _6101, 32);
  *(uint64_t*)_6074 = _6102;
  *(uint64_t*)_6076 = _6103;
  _6104 = ((&((uint8_t*)_6072)[((int64_t)56)]));
  _6105 = *(uint64_t*)_6104;
  _6106 = ((&((uint8_t*)_6072)[((int64_t)64)]));
  _6107 = *(uint64_t*)_6106;
  _6108 = ((&((uint8_t*)_6072)[((int64_t)72)]));
  _6109 = *(uint64_t*)_6108;
  _6110 = *(void**)_6072;
  _6111 = *(uint64_t*)(((&((uint8_t*)_6110)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_6072)[((int64_t)48)]))) = _6105;
  *(uint64_t*)_6104 = _6107;
  *(uint64_t*)_6106 = _6109;
  *(uint64_t*)_6108 = _6111;
  _6073__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _6112;

  } while (1); /* end of syntactic loop '' */
_6115:
  return _6073;
}


static uint8_t julia_accept_number_54(void* _6123, void* _6124) {
  uint8_t _6125;
  uint8_t _6125__PHI_TEMPORARY;
  void* _6126;
  uint64_t _6127;
  uint64_t _6128;
  void* _6129;
  uint64_t _6130;
  uint64_t _6131;
  void* _6132;
  void* _6133;
  uint64_t _6134;
  void* _6135;
  uint64_t _6136;
  void* _6137;
  uint8_t _6138;
  uint8_t _6139;
  uint8_t _6140;
  uint32_t _6141;
  uint64_t _6142;
  uint64_t _6142__PHI_TEMPORARY;
  uint32_t _6143;
  uint32_t _6143__PHI_TEMPORARY;
  uint64_t _6144;
  uint64_t _6145;
  void* _6146;
  uint8_t _6147;
  uint32_t _6148;
  uint64_t _6149;
  uint64_t _6150;
  uint32_t _6151;
  uint64_t _6152;
  uint32_t _6153;
  uint32_t _6153__PHI_TEMPORARY;
  uint64_t _6154;
  uint64_t _6155;
  uint64_t _6156;
  uint64_t _6157;
  void* _6158;
  uint64_t _6159;
  void* _6160;
  uint64_t _6161;
  void* _6162;
  uint64_t _6163;
  void* _6164;
  uint64_t _6165;

  _6125__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _6166;

  do {     /* Syntactic loop '' to make GCC happy */
_6166:
  _6125 = _6125__PHI_TEMPORARY;
  _6126 = ((&((uint8_t*)_6124)[((int64_t)32)]));
  _6127 = *(uint64_t*)_6126;
  _6128 = ((uint64_t)_6127);
  _6129 = ((&((uint8_t*)_6124)[((int64_t)40)]));
  _6130 = llvm_lshr_u64(_6128, 32);
  if ((_6130 == UINT64_C(1593835520))) {
    goto _6167;
  } else {
    goto _6168;
  }

_6167:
  _6131 = *(uint64_t*)_6129;
  if ((((uint32_t)(llvm_add_u32((((uint32_t)_6131)), -805306368))) < ((uint32_t)117440513u))) {
    goto _6168;
  } else {
    goto _6169;
  }

_6168:
  if (((((uint64_t)_6128) < ((uint64_t)UINT64_C(3458764518115508224))) & (_6130 != UINT64_C(805306368)))) {
    goto _6170;
  } else {
    goto _6171;
  }

_6171:
  if ((((uint64_t)_6128) < ((uint64_t)UINT64_C(3963167672086036480)))) {
    goto _6172;
  } else {
    goto _6173;
  }

_6173:
  switch ((((uint32_t)_6130))) {
  default:
    goto _6169;
  case 1593835520u:
    goto _6172;
  case 922746880u:
    goto _6172;
  }

_6170:
  if ((_6130 == UINT64_C(1593835520))) {
    goto _6172;
  } else {
    goto _6169;
  }

_6172:
  _6132 = *(void**)_6124;
  _6133 = ((&((uint8_t*)_6132)[((int64_t)16)]));
  _6134 = *(uint64_t*)_6133;
  _6135 = ((&((uint8_t*)_6132)[((int64_t)8)]));
  _6136 = *(uint64_t*)_6135;
  if ((((int64_t)_6136) > ((int64_t)_6134))) {
    goto _6174;
  } else {
    _6153__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _6175;
  }

_6174:
  _6137 = *(void**)_6132;
  _6138 = *(uint8_t*)(((&((uint8_t*)_6137)[((int64_t)_6134)])));
  *(uint64_t*)_6133 = (llvm_add_u64(_6134, 1));
  _6139 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_6138)), 0);
  _6140 = llvm_sub_u8(32, (llvm_shl_u8(_6139, 3)));
  _6141 = (((uint32_t)(uint8_t)_6138)) << 24;
  if ((((uint8_t)_6140) > ((uint8_t)((uint8_t)16)))) {
    _6153__PHI_TEMPORARY = _6141;   /* for PHI node */
    goto _6175;
  } else {
    _6142__PHI_TEMPORARY = 16;   /* for PHI node */
    _6143__PHI_TEMPORARY = _6141;   /* for PHI node */
    goto _6176;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_6176:
  _6142 = _6142__PHI_TEMPORARY;
  _6143 = _6143__PHI_TEMPORARY;
  if (((((int64_t)_6142) < ((int64_t)UINT64_C(0))) | (((uint64_t)_6142) < ((uint64_t)(((uint64_t)(uint8_t)_6140)))))) {
    _6153__PHI_TEMPORARY = _6143;   /* for PHI node */
    goto _6175;
  } else {
    goto _6177;
  }

_6177:
  _6144 = *(uint64_t*)_6133;
  _6145 = *(uint64_t*)_6135;
  if ((((int64_t)_6145) > ((int64_t)_6144))) {
    goto _6178;
  } else {
    _6153__PHI_TEMPORARY = _6143;   /* for PHI node */
    goto _6175;
  }

_6178:
  _6146 = *(void**)_6132;
  _6147 = *(uint8_t*)(((&((uint8_t*)_6146)[((int64_t)_6144)])));
  if ((((int8_t)_6147) > ((int8_t)((uint8_t)-65)))) {
    _6153__PHI_TEMPORARY = _6143;   /* for PHI node */
    goto _6175;
  } else {
    goto _6179;
  }

_6179:
  _6148 = llvm_select_u32((((int64_t)_6144) < ((int64_t)_6145)), (((uint32_t)(uint8_t)_6147)), 0);
  _6149 = *(uint64_t*)_6133;
  *(uint64_t*)_6133 = (llvm_add_u64(_6149, 1));
  _6150 = llvm_neg_u64(_6142);
  _6151 = _6143 | (llvm_select_u32((((int64_t)_6142) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_6150) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_6148, (((uint32_t)_6150)))))), (llvm_select_u32((((uint64_t)_6142) > ((uint64_t)UINT64_C(31))), 0, (_6148 << (((uint32_t)_6142)))))));
  _6152 = llvm_add_u64(_6142, -8);
  _6142__PHI_TEMPORARY = _6152;   /* for PHI node */
  _6143__PHI_TEMPORARY = _6151;   /* for PHI node */
  goto _6176;

  } while (1); /* end of syntactic loop '' */
_6175:
  _6153 = _6153__PHI_TEMPORARY;
  _6154 = *(uint64_t*)_6126;
  _6155 = *(uint64_t*)_6129;
  _6156 = jsyn_cbe_fshl_i64(_6155, _6154, 32);
  _6157 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_6153)), _6155, 32);
  *(uint64_t*)_6126 = _6156;
  *(uint64_t*)_6129 = _6157;
  _6158 = ((&((uint8_t*)_6124)[((int64_t)56)]));
  _6159 = *(uint64_t*)_6158;
  _6160 = ((&((uint8_t*)_6124)[((int64_t)64)]));
  _6161 = *(uint64_t*)_6160;
  _6162 = ((&((uint8_t*)_6124)[((int64_t)72)]));
  _6163 = *(uint64_t*)_6162;
  _6164 = *(void**)_6124;
  _6165 = *(uint64_t*)(((&((uint8_t*)_6164)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_6124)[((int64_t)48)]))) = _6159;
  *(uint64_t*)_6158 = _6161;
  *(uint64_t*)_6160 = _6163;
  *(uint64_t*)_6162 = _6165;
  _6125__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _6166;

  } while (1); /* end of syntactic loop '' */
_6169:
  return _6125;
}


static uint8_t julia_YY_OC_lex_digitYY_OC_YY_OC_0_55(void* _6180, uint32_t _6181) {
  uint8_t _6182;
  uint8_t _6182__PHI_TEMPORARY;
  uint32_t _6183;
  uint64_t _6184;
  uint32_t _6185;
  uint32_t _6186;
  uint64_t _6187;
  bool _6188;
  bool _6189;
  uint32_t _6190;
  uint32_t _6191;
  uint32_t _6192;
  uint32_t _6193;
  uint32_t _6193__PHI_TEMPORARY;
  uint32_t _6194;
  uint8_t _6195;

  if ((((uint32_t)(llvm_add_u32(_6181, -805306368))) < ((uint32_t)150994945u))) {
    _6182__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _6196;
  } else {
    goto _6197;
  }

_6196:
  _6182 = _6182__PHI_TEMPORARY;
  return _6182;
_6197:
  if ((_6181 == 4294967295u)) {
    _6182__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _6196;
  } else {
    goto _6198;
  }

_6198:
  _6183 = llvm_OC_ctlz_OC_i32((_6181 ^ -1), 0);
  _6184 = ((uint64_t)(uint32_t)_6183);
  _6185 = llvm_OC_cttz_OC_i32(_6181, 0);
  _6186 = _6185 & 56;
  _6187 = ((uint64_t)(uint32_t)_6186);
  _6188 = llvm_select_bool((((uint32_t)_6185) < ((uint32_t)32u)), ((llvm_lshr_u32(((_6181 & 12632256) ^ 8421504), _6186)) != 0u), 0);
  _6189 = (((_6181 & -33554432) == 3221225472u) | ((_6181 & -2097152) == 3766484992u)) | ((_6181 & -1048576) == 4034920448u);
  if (((((((uint32_t)_6181) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_6181, 293568512))) < ((uint32_t)101662656u))) & (((((_6183 == 1u) | (((uint64_t)(llvm_add_u64((_6184 << 3), _6187))) > ((uint64_t)UINT64_C(32)))) | _6188) | _6189) ^ 1)) & (_6181 != 4036993714u))) {
    goto _6199;
  } else {
    _6182__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _6196;
  }

_6199:
  _6190 = llvm_lshr_u32(_6181, 24);
  if ((((int32_t)_6181) < ((int32_t)0u))) {
    goto _6200;
  } else {
    _6193__PHI_TEMPORARY = _6190;   /* for PHI node */
    goto _6201;
  }

_6200:
  if ((((_6183 == 1u) | (((uint64_t)(llvm_add_u64((_6184 << 3), _6187))) > ((uint64_t)UINT64_C(32)))) | (_6188 | _6189))) {
    goto _6202;
  } else {
    goto _6203;
  }

_6202:
  julia_throw_invalid_char_21(_6180, _6181);
  __builtin_unreachable();

_6203:
  _6191 = llvm_select_u32((((uint32_t)_6185) < ((uint32_t)32u)), (llvm_lshr_u32((_6181 & (llvm_lshr_u32(-1, _6183))), _6186)), 0);
  _6192 = (((_6191 & 127) | ((llvm_lshr_u32(_6191, 2)) & 8128)) | ((llvm_lshr_u32(_6191, 4)) & 520192)) | ((llvm_lshr_u32(_6191, 6)) & 33292288);
  _6193__PHI_TEMPORARY = _6192;   /* for PHI node */
  goto _6201;

_6201:
  _6193 = _6193__PHI_TEMPORARY;
  _6194 = jsk_jl_id_start_char(_6193);
  _6195 = ((uint8_t)(bool)(_6194 != 0u));
  _6182__PHI_TEMPORARY = _6195;   /* for PHI node */
  goto _6196;

}

#undef bool
#undef __noreturn
#undef __forceinline
#undef __ATTRIBUTELIST__
#undef __PREFIXALIGN__
#undef __POSTFIXALIGN__
#undef __HIDDEN__
