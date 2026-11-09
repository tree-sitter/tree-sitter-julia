// GENERATED from JuliaSyntax (Julia) by script/jsyntax/regenerate.sh (juliac --trim --output-bc, llvm-cbe,
// kgen.py): do not edit. Entry: jsk_jsyn_space_prefix, jsk_jsyn_token, jsk_jsyn_contextual_keyword; support: runtime.c.
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
struct l_array_704_uint8_t;
struct l_array_1024_uint8_t;
struct l_unnamed_1;
struct l_array_597_uint32_t;
struct l_array_597_uint16_t;
struct l_unnamed_2;
struct l_array_128_uint8_t;
struct l_array_39_uint16_t;
struct l_array_39_uint64_t;
struct l_unnamed_3;
struct l_array_108_uint8_t;
struct l_array_1_void_KC_;
struct l_array_3_uint64_t;
struct l_array_4_uint64_t;
struct l_array_1_uint64_t;

/* Function definitions */

/* Types Definitions */
struct l_array_704_uint8_t {
  uint8_t array[704];
};
struct l_array_1024_uint8_t {
  uint8_t array[1024];
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
struct l_array_108_uint8_t {
  uint8_t array[108];
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
static __PREFIXALIGN__(16) struct l_array_704_uint8_t jsk_dummy_objs __POSTFIXALIGN__(16);
const static struct l_unnamed_1 _j_constYY_OC_51;
const static struct l_unnamed_2 _j_constYY_OC_52;
const static struct l_array_128_uint8_t _j_constYY_OC_53;
const static struct l_unnamed_3 _j_constYY_OC_54;
const static struct l_array_39_uint16_t _j_constYY_OC_55;
const static struct l_array_108_uint8_t _j_str_invalidSP_OC_GenericMemorySP_OC_sizDOT_OC_DOT_OC_DOT_OC_YY_OC_56;

/* Function Declarations */
uint32_t jsk_jsyn_space_prefix(void* _1, void* _2, uint64_t _3);
uint32_t jsk_jsyn_token(void* _31, void* _32, uint64_t _33, int32_t _34, void* _35);
uint32_t jsk_jsyn_contextual_keyword(void* _58, void* _59, uint64_t _60);
static void* julia_Lexer_3(void* _62, void* _63, void* _64);
static void julia_next_token_4(void* _162, void* _163, void* _164, uint8_t _165);
static __noreturn void julia_throw_inexacterror_5(void* _221, void* _222, void* _223, int32_t _224);
static __noreturn void julia_throw_inexacterror_6(void* _225, void* _226, void* _227, int64_t _228);
static uint32_t julia_contextual_keyword_7(void* _229, void* _230, int64_t _231);
static void julia_lex_string_chunk_8(void* _254, void* _255, void* _256);
static void julia__next_token_9(void* _1365, void* _1366, void* _1367, uint32_t _1368);
static __noreturn void julia_throw_boundserror_10(void* _1586, void* _1587, void* _1588) __ATTRIBUTELIST__((noinline));
static void julia_emit_11(void* _1589, void* _1590, void* _1591, uint16_t _1592, uint8_t _1593);
static __noreturn void julia_throw_invalid_char_12(void* _1649, uint32_t _1650) __ATTRIBUTELIST__((noinline));
static void julia_lex_identifier_13(void* _1651, void* _1652, void* _1653, uint32_t _1654);
static uint8_t julia_is_operator_start_char_14(void* _1859, uint32_t _1860);
static uint8_t julia_is_never_id_char_15(void* _1892, uint32_t _1893);
static __noreturn void julia__throw_argerror_16(void* _1929, void* _1930) __ATTRIBUTELIST__((noinline));
static struct l_array_1_void_KC_ julia_AssertionError_17(void* _1931, void* _1932);
static void julia_lex_whitespace_18(void* _1934, void* _1935, void* _1936, uint32_t _1937);
static void julia_lex_star_19(void* _2020, void* _2021, void* _2022);
static void julia_lex_circumflex_20(void* _2117, void* _2118, void* _2119);
static void julia_lex_dollar_21(void* _2170, void* _2171, void* _2172);
static void julia_lex_xor_22(void* _2223, void* _2224, void* _2225);
static void julia_lex_comment_23(void* _2276, void* _2277, void* _2278);
static void julia_lex_equal_24(void* _2454, void* _2455, void* _2456);
static void julia_lex_exclaim_25(void* _2595, void* _2596, void* _2597);
static void julia_lex_greater_26(void* _2692, void* _2693, void* _2694);
static void julia_lex_less_27(void* _2965, void* _2966, void* _2967);
static void julia_lex_colon_28(void* _3400, void* _3401, void* _3402);
static void julia_lex_bar_29(void* _3497, void* _3498, void* _3499);
static void julia_lex_amper_30(void* _3638, void* _3639, void* _3640);
static void julia__growend_internalNOT_OC__31(void* _3735, void* _3736, int64_t _3737, int64_t _3738);
static void julia_lex_division_32(void* _3806, void* _3807, void* _3808);
static void julia_lex_quote_33(void* _3859, void* _3860, void* _3861);
static void julia_lex_percent_34(void* _3975, void* _3976, void* _3977);
static void julia_lex_forwardslash_35(void* _4028, void* _4029, void* _4030);
static void julia_lex_backslash_36(void* _4169, void* _4170, void* _4171);
static void julia_lex_dot_37(void* _4222, void* _4223, void* _4224);
static void julia_lex_plus_38(void* _4383, void* _4384, void* _4385);
static void julia_lex_minus_39(void* _4480, void* _4481, void* _4482);
static void julia_lex_backtick_40(void* _4667, void* _4668, void* _4669);
static void julia_lex_digit_41(void* _4777, void* _4778, void* _4779, uint16_t _4780);
static uint8_t julia_isopsuffix_42(void* _5713, uint32_t _5714);
static struct l_array_1_void_KC_ julia_ConcurrencyViolationError_43(void* _5750, void* _5751);
static uint8_t julia_accept_number_44(void* _5753, void* _5754);
static uint8_t julia_accept_number_45(void* _5806, void* _5807);
static uint8_t julia_accept_number_46(void* _5866, void* _5867);
static uint8_t julia_accept_number_47(void* _5918, void* _5919);
static uint8_t julia_YY_OC_lex_digitYY_OC_YY_OC_0_48(void* _5975, uint32_t _5976);
uint32_t jsk_jl_id_char(uint32_t _5999);
uint32_t jsk_jl_id_start_char(uint32_t _6000);
uint32_t jsk_utf8proc_category(uint32_t _6001);
uint64_t jsyn_cbe_fshl_i64(uint64_t _6002, uint64_t _6003, uint64_t _6004) __ATTRIBUTELIST__((nothrow));
uint8_t jsk_utf8proc_grapheme_break_stateful(uint32_t _6005, uint32_t _6006, void* _6007);
void* jsk_jl_alloc_genericmemory_unchecked(void* _6008, uint64_t _6009, void* _6010) __ATTRIBUTELIST__((nothrow));
void* jsk_ijl_gc_small_alloc(void* _6011, uint32_t _6012, uint32_t _6013, uint64_t _6014) __ATTRIBUTELIST__((nothrow, alloc_size(2)));
__noreturn void jsk_ijl_bounds_error_int(void* _6015, uint64_t _6016);
void jsk_ijl_gc_queue_root(void* _6017);
__noreturn void jsk_ijl_throw(void* _6018);
__noreturn void jsk_ijl_undefined_var_error(void* _6019, void* _6020);
__noreturn void jsk_jl_argument_error(void* _6021);
__noreturn void jsk_throw(void);
void* jsyn_cbe_thread_pointer(void);
void jsyn_cbe_sev(void);
void jsyn_cbe_wfe(void);


/* Global Variable Definitions and Initialization */
static __PREFIXALIGN__(16) struct l_array_704_uint8_t jsk_dummy_objs __POSTFIXALIGN__(16);
static const __PREFIXALIGN__(16) struct l_array_1024_uint8_t jl_small_typeof __POSTFIXALIGN__(16);
static const struct l_unnamed_1 _j_constYY_OC_51 = { 0, 1, 654311424, 0 };
static const struct l_unnamed_2 _j_constYY_OC_52 = { { { -1029308416, -1028915200, -1028587520, -1028194304, -1013514240, -1011417088, -830013440, -494885376, -494822144, -494564608, -494497792, -494497536, -494497280, -494497024, -494496768, -494495232, -494494976, -494494720, -494494464, -494494208, -494493696, -494493184, -494492928, -494492672, -494492160, -494491392, -494491136, -494490880, -494490624, -494490112, -494488064, -494487808, -494487040, -494486784, -494486528, -494486272, -494436352, -494436096, -494435328, -494434816, -494434560, -494434048, -494433536, -494433280, -494433024, -494432768, -494432512, -494432256, -494431744, -494431232, -494429696, -494429440, -494429184, -494428928, -494428160, -494427648, -494423040, -494422784, -494422528, -494422272, -494422016, -494421760, -494421504, -494421248, -494420992, -494420736, -494420480, -494420224, -494368768, -494368512, -494368256, -494368000, -494367744, -494367488, -494366208, -494365952, -494365696, -494364928, -494364672, -494364416, -494364160, -494363904, -494363648, -494363392, -494361600, -494361344, -494361088, -494360832, -494360576, -494360320, -494360064, -494356736, -494356480, -494355968, -494355712, -494355200, -494354944, -494305280, -494305024, -494304768, -494304512, -494304256, -494304000, -494303744, -494303488, -494303232, -494302976, -494302720, -494302464, -494302208, -494301952, -494301696, -494301440, -494301184, -494300928, -494300672, -494300416, -494300160, -494299904, -494299648, -494299392, -494299136, -494298880, -494298624, -494298368, -494298112, -494297856, -494297600, -494297344, -494297088, -494296832, -494296576, -494296320, -494296064, -494295808, -494295552, -494295296, -494295040, -494294784, -494294528, -494294272, -494294016, -494293760, -494293504, -494293248, -494292992, -494292736, -494292480, -494292224, -494291968, -494291712, -494291456, -494291200, -494290944, -494290688, -494290432, -494290176, -494289920, -494289664, -494289408, -494289152, -494239744, -494239488, -494239232, -494238976, -494238720, -494238464, -494238208, -494237952, -494237696, -494237440, -494237184, -494236928, -494236416, -494236160, -494235904, -494235648, -494235392, -494235136, -494234880, -494234624, -494234368, -494234112, -494233856, -494233600, -494233344, -494233088, -494232832, -494232576, -494232064, -494231808, -494231552, -494231296, -494231040, -494230784, -494229248, -494228480, -494227968, -494227456, -494227200, -494226944, -494226688, -494226432, -494226176, -494225920, -494225664, -494224640, -494224384, -494224128, -494173184, -494172928, -494172672, -494172416, -494171904, -494171648, -494171392, -494171136, -494170880, -494170624, -494170368, -494170112, -494169856, -494169600, -494169344, -494168832, -494168576, -494168320, -494168064, -494167808, -494167552, -494167296, -494167040, -494166784, -494166528, -494166272, -494166016, -494165760, -494165504, -494165248, -494164992, -494164736, -494164480, -494164224, -494163968, -494163712, -494163456, -494163200, -494162944, -494162688, -494162432, -494162176, -494161920, -494161664, -494161408, -494161152, -494160896, -494160640, -494160384, -494160128, -494159872, -494159616, -494159360, -494159104, -494158848, -494158592, -494158336, -494158080, -494092544, -493439232, -492862976, -492861696, -492861440, -492861184, -492859136, -492858880, -492858112, -492857856, -492857600, -492851200, -492850944, -492849920, -492849664, -492849408, -492848896, -492848640, -492848384, -492848128, -492847872, -492847616, -492847360, -492535808, -492535552, -492535296, -492535040, -492534784, -492534528, -492534272, -492534016, -492533760, -492533504, -492533248, -492532992, -492532736, -492532480, -492532224, -492531968, -492531712, -492531456, -492531200, -492530944, -492530688, -492530432, -492530176, -492529920, -492529664, -492528384, -492528128, -492527872, -492527616, -492469248, -492468992, -492468736, -492468480, -492468224, -492467968, -492467712, -492467456, -492467200, -492466944, -492466688, -492466432, -492466176, -492465920, -492465664, -492465408, -492465152, -492464896, -492464640, -492464384, -492464128, -492463872, -492463616, -492463360, -492463104, -492462848, -492462592, -492462336, -492462080, -492461824, -492461568, -492461312, -492461056, -492460800, -492460544, -492460288, -492460032, -492459776, -492459520, -492459264, -492459008, -492458752, -492458496, -492458240, -492457984, -492456192, -492455424, -492390656, -492390400, -492389376, -492388864, -492388608, -492339200, -492338944, -492330752, -492330240, -492329984, -492329728, -492325888, -492325376, -492325120, -492324352, -492324096, -492271872, -492271616, -492266240, -492265728, -492264960, -492264704, -492264448, -492264192, -492263936, -492263680, -492263424, -492263168, -492262912, -492262656, -492262400, -492262144, -492261888, -492261376, -492261120, -492260864, -492260608, -492260352, -492260096, -492259840, -492259584, -492259328, -492259072, -492258816, -492258560, -492258304, -492258048, -492208128, -492207872, -492207616, -492207360, -492207104, -492206848, -492205568, -492205312, -492205056, -492204800, -492204544, -492204288, -492204032, -492203776, -492203520, -492203264, -492203008, -492202752, -492202496, -492202240, -492201984, -492201472, -492201216, -492200960, -492200704, -492200448, -492200192, -492199936, -492199680, -492199424, -492199168, -492198400, -492198144, -492197376, -492197120, -492196864, -492196608, -492196352, -492196096, -492195840, -492195584, -492195328, -492195072, -492194816, -492194560, -492194304, -492194048, -492193792, -492193536, -492193280, -492193024, -492192768, -492192512, -492192256, -492192000, -492142592, -492142336, -492142080, -492141824, -492141568, -492141312, -492141056, -492140800, -492140544, -492140288, -492140032, -492139776, -492139520, -492139264, -492139008, -492138752, -492138496, -492138240, -492137984, -492137728, -492137472, -492137216, -492136960, -492136704, -492136448, -492136192, -492135936, -492135680, -492135424, -492135168, -492134912, -492134656, -492134400, -492134144, -492133888, -492133632, -492133376, -492133120, -492132864, -492132608, -492132352, -492132096, -492131840, -492131584, -492131328, -492131072, -492130816, -492130560, -492130304, -492130048, -492129792, -492129536, -492129280, -492129024, -492128768, -492128512, -492128256, -492128000, -492127744, -492127488, -492127232, -492126976, -492126720, -492126464, -492077056, -492076800, -492076544, -492076288, -492076032, -492075776, -492075520, -492075264, -492075008, -492074752, -492074496, -492074240, -492073984, -492073728, -492073472, -492073216, -492072960, -492072704, -492072448, -492072192, -492071936, -492071680, -492071424, -492071168, -492070912, -492070656, -492070144, -492066304, -492066048, -492062976, -492062720, -492062464, -492062208, -491999232, -491998976, -491998720, -491998464, -491998208, -491997952, -491997696, -491997440, -491997184, -491996928, -491996672, -491996416, -491996160, -491995904, -491995648, -491995392, -491945984, -491945728, -491945472, -491945216, -491944960, -491944192, -491943936, -491943680, -491943424, -491943168, -491942912, -272652032, -272651776, -272651520, -272651264, -257973582 } }, { { 591, 712, 546, 596, 598, 594, 596, 528, 529, 614, 83, 675, 84, 676, 85, 86, 87, 207, 208, 88, 89, 90, 91, 92, 93, 209, 210, 211, 212, 94, 228, 227, 229, 230, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 96, 95, 97, 98, 99, 100, 223, 224, 205, 206, 225, 226, 101, 677, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 251, 254, 263, 255, 256, 264, 536, 547, 548, 611, 597, 612, 713, 714, 715, 262, 613, 265, 266, 602, 544, 601, 543, 267, 549, 268, 269, 270, 271, 615, 272, 274, 273, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 550, 286, 287, 288, 289, 75, 77, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 248, 246, 250, 300, 243, 241, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 259, 329, 260, 330, 257, 331, 258, 332, 261, 333, 662, 551, 334, 335, 336, 337, 610, 545, 538, 539, 603, 604, 605, 606, 607, 338, 540, 541, 608, 609, 519, 520, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 552, 616, 553, 617, 596, 618, 619, 620, 621, 622, 623, 350, 554, 624, 351, 352, 625, 555, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 530, 533, 532, 531, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 668, 663, 521, 556, 392, 393, 626, 394, 665, 666, 667, 678, 679, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 680, 681, 682, 683, 130, 131, 132, 133, 134, 135, 684, 685, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 686, 150, 151, 687, 688, 152, 689, 153, 690, 154, 155, 691, 692, 156, 157, 693, 694, 158, 159, 695, 696, 160, 161, 697, 698, 162, 699, 163, 700, 164, 165, 166, 167, 168, 169, 170, 171, 701, 702, 172, 194, 196, 395, 627, 628, 629, 630, 396, 397, 398, 399, 400, 401, 173, 631, 632, 557, 558, 633, 559, 664, 669, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 634, 635, 636, 637, 638, 639, 640, 641, 642, 573, 574, 643, 644, 645, 646, 575, 576, 647, 648, 577, 578, 649, 579, 650, 651, 580, 581, 652, 582, 653, 583, 654, 584, 585, 655, 656, 586, 657, 587, 658, 659, 660, 588, 589, 590, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 76, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 661, 522, 523, 515, 516, 517, 518, 175, 174, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 195, 197, 198, 199, 200, 201, 202, 203, 703, 204, 704, 231 } } };
static const struct l_array_128_uint8_t _j_constYY_OC_53 = { "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x00\x00\x00\x00\x00\x00\x00\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x00\x00\x00\x00\x01\x00\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x00\x00\x00\x00" };
static const struct l_unnamed_3 _j_constYY_OC_54 = { { { 51, 143, 294, 302, 4579, 5572, 6642, 9825, 12468, 21081, 22578, 176741, 681477, 2268462, 2692139, 3199080, 3652212, 13077548, 13667919, 16437426, 18529925, 22652359, 24385093, 24388997, 180983078, 193478228, 247957548, 316161620, 452089221, 558969123, 609900110, 659117172, INT64_C(6759166361), INT64_C(14684293509), INT64_C(37166318708), INT64_C(119676385957), INT64_C(229180581358), INT64_C(18220771321541), INT64_C(72092551894405) } }, { { 35, 12, 17, 252, 36, 33, 14, 253, 19, 26, 42, 31, 41, 8, 9, 29, 10, 20, 21, 38, 23, 27, 706, 28, 32, 13, 16, 18, 22, 40, 24, 25, 30, 37, 34, 11, 15, 39, 7 } } };
static const struct l_array_39_uint16_t _j_constYY_OC_55 = { { 35, 12, 17, 252, 36, 33, 14, 253, 19, 26, 42, 31, 41, 8, 9, 29, 10, 20, 21, 38, 23, 27, 706, 28, 32, 13, 16, 18, 22, 40, 24, 25, 30, 37, 34, 11, 15, 39, 7 } };
static const struct l_array_108_uint8_t _j_str_invalidSP_OC_GenericMemorySP_OC_sizDOT_OC_DOT_OC_DOT_OC_YY_OC_56 = { "invalid GenericMemory size: the number of elements is either negative or too large for system address width" };


/* LLVM Intrinsic Builtin Function Bodies */
static __forceinline bool llvm_select_bool(bool condition, bool iftrue, bool ifnot) {
  bool r;
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
  _12 = julia_Lexer_3(_1, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _11);
  *(void**)(((&((uint8_t*)(&_4))[((int64_t)16)]))) = _12;
  julia_next_token_4((&_7), _1, _12, 1);
  _13 = *((uint16_t*)&_7);
  if ((_13 == ((uint16_t)707))) {
    goto _24;
  } else {
    goto _25;
  }

_24:
  julia_next_token_4((&_8), _1, _12, 1);
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
  julia_next_token_4((&_9), _1, _12, 1);
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
  _42 = julia_Lexer_3(_31, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _41);
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
  julia_throw_inexacterror_5(_31, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _43, _34);
  __builtin_unreachable();

_55:
  *(uint16_t*)(((&((uint8_t*)_42)[((int64_t)16)]))) = (((uint16_t)_34));
  goto _52;

_52:
  *(void**)(((&((uint8_t*)(&_36))[((int64_t)16)]))) = _42;
  julia_next_token_4((&_39), _31, _42, 1);
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
  julia_throw_inexacterror_6(_31, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))), _48, _47);
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

  _61 = julia_contextual_keyword_7(_58, _59, _60);
  return _61;
}


static void* julia_Lexer_3(void* _62, void* _63, void* _64) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _65 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _66;
  void* _67;
  void* _68;
  uint64_t _69;
  void* _70;
  uint64_t _71;
  void* _72;
  uint8_t _73;
  uint8_t _74;
  uint8_t _75;
  uint32_t _76;
  uint64_t _77;
  uint64_t _77__PHI_TEMPORARY;
  uint32_t _78;
  uint32_t _78__PHI_TEMPORARY;
  uint64_t _79;
  uint64_t _80;
  void* _81;
  uint8_t _82;
  uint32_t _83;
  uint64_t _84;
  uint64_t _85;
  uint32_t _86;
  uint64_t _87;
  uint32_t _88;
  uint32_t _88__PHI_TEMPORARY;
  uint64_t _89;
  uint64_t _90;
  void* _91;
  uint8_t _92;
  uint8_t _93;
  uint8_t _94;
  uint32_t _95;
  uint64_t _96;
  uint64_t _96__PHI_TEMPORARY;
  uint32_t _97;
  uint32_t _97__PHI_TEMPORARY;
  uint64_t _98;
  uint64_t _99;
  void* _100;
  uint8_t _101;
  uint32_t _102;
  uint64_t _103;
  uint64_t _104;
  uint32_t _105;
  uint64_t _106;
  uint32_t _107;
  uint32_t _107__PHI_TEMPORARY;
  uint64_t _108;
  uint64_t _109;
  void* _110;
  uint8_t _111;
  uint8_t _112;
  uint8_t _113;
  uint32_t _114;
  uint64_t _115;
  uint64_t _115__PHI_TEMPORARY;
  uint32_t _116;
  uint32_t _116__PHI_TEMPORARY;
  uint64_t _117;
  uint64_t _118;
  void* _119;
  uint8_t _120;
  uint32_t _121;
  uint64_t _122;
  uint64_t _123;
  uint32_t _124;
  uint64_t _125;
  uint32_t _126;
  uint32_t _126__PHI_TEMPORARY;
  uint64_t _127;
  uint64_t _128;
  uint64_t _129;
  uint64_t _129__PHI_TEMPORARY;
  uint64_t _130;
  uint64_t _130__PHI_TEMPORARY;
  uint64_t _131;
  uint64_t _131__PHI_TEMPORARY;
  uint32_t _132;
  uint32_t _132__PHI_TEMPORARY;
  uint64_t _133;
  uint64_t _133__PHI_TEMPORARY;
  uint32_t _134;
  uint32_t _134__PHI_TEMPORARY;
  uint64_t _135;
  void* _136;
  void* _137;
  void* _138;
  void* _139;
  void* _140;
  void* _141;
  void* _142;

  _66 = memset((&_65), 0, 24);
  *((uint64_t*)&_65) = 4;
  _67 = *(void**)_62;
  *(void**)(((&((uint8_t*)(&_65))[((int64_t)8)]))) = _67;
  *(void**)_62 = (&_65);
  _68 = ((&((uint8_t*)_64)[((int64_t)16)]));
  _69 = *(uint64_t*)_68;
  _70 = ((&((uint8_t*)_64)[((int64_t)8)]));
  _71 = *(uint64_t*)_70;
  if ((((int64_t)_71) > ((int64_t)_69))) {
    goto _143;
  } else {
    _129__PHI_TEMPORARY = _69;   /* for PHI node */
    _130__PHI_TEMPORARY = INT64_C(-4294967296);   /* for PHI node */
    _131__PHI_TEMPORARY = _69;   /* for PHI node */
    _132__PHI_TEMPORARY = -1;   /* for PHI node */
    _133__PHI_TEMPORARY = _69;   /* for PHI node */
    _134__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _144;
  }

_143:
  _72 = *(void**)_64;
  _73 = *(uint8_t*)(((&((uint8_t*)_72)[((int64_t)_69)])));
  *(uint64_t*)_68 = (llvm_add_u64(_69, 1));
  _74 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_73)), 0);
  _75 = llvm_sub_u8(32, (llvm_shl_u8(_74, 3)));
  _76 = (((uint32_t)(uint8_t)_73)) << 24;
  if ((((uint8_t)_75) > ((uint8_t)((uint8_t)16)))) {
    _88__PHI_TEMPORARY = _76;   /* for PHI node */
    goto _145;
  } else {
    _77__PHI_TEMPORARY = 16;   /* for PHI node */
    _78__PHI_TEMPORARY = _76;   /* for PHI node */
    goto _146;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_146:
  _77 = _77__PHI_TEMPORARY;
  _78 = _78__PHI_TEMPORARY;
  if (((((int64_t)_77) < ((int64_t)UINT64_C(0))) | (((uint64_t)_77) < ((uint64_t)(((uint64_t)(uint8_t)_75)))))) {
    _88__PHI_TEMPORARY = _78;   /* for PHI node */
    goto _145;
  } else {
    goto _147;
  }

_147:
  _79 = *(uint64_t*)_68;
  _80 = *(uint64_t*)_70;
  if ((((int64_t)_80) > ((int64_t)_79))) {
    goto _148;
  } else {
    _88__PHI_TEMPORARY = _78;   /* for PHI node */
    goto _145;
  }

_148:
  _81 = *(void**)_64;
  _82 = *(uint8_t*)(((&((uint8_t*)_81)[((int64_t)_79)])));
  if ((((int8_t)_82) > ((int8_t)((uint8_t)-65)))) {
    _88__PHI_TEMPORARY = _78;   /* for PHI node */
    goto _145;
  } else {
    goto _149;
  }

_149:
  _83 = llvm_select_u32((((int64_t)_79) < ((int64_t)_80)), (((uint32_t)(uint8_t)_82)), 0);
  _84 = *(uint64_t*)_68;
  *(uint64_t*)_68 = (llvm_add_u64(_84, 1));
  _85 = llvm_neg_u64(_77);
  _86 = _78 | (llvm_select_u32((((int64_t)_77) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_85) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_83, (((uint32_t)_85)))))), (llvm_select_u32((((uint64_t)_77) > ((uint64_t)UINT64_C(31))), 0, (_83 << (((uint32_t)_77)))))));
  _87 = llvm_add_u64(_77, -8);
  _77__PHI_TEMPORARY = _87;   /* for PHI node */
  _78__PHI_TEMPORARY = _86;   /* for PHI node */
  goto _146;

  } while (1); /* end of syntactic loop '' */
_145:
  _88 = _88__PHI_TEMPORARY;
  _89 = *(uint64_t*)_68;
  _90 = *(uint64_t*)_70;
  if ((((int64_t)_90) > ((int64_t)_89))) {
    goto _150;
  } else {
    _129__PHI_TEMPORARY = _89;   /* for PHI node */
    _130__PHI_TEMPORARY = INT64_C(-4294967296);   /* for PHI node */
    _131__PHI_TEMPORARY = _89;   /* for PHI node */
    _132__PHI_TEMPORARY = -1;   /* for PHI node */
    _133__PHI_TEMPORARY = _89;   /* for PHI node */
    _134__PHI_TEMPORARY = _88;   /* for PHI node */
    goto _144;
  }

_150:
  _91 = *(void**)_64;
  _92 = *(uint8_t*)(((&((uint8_t*)_91)[((int64_t)_89)])));
  *(uint64_t*)_68 = (llvm_add_u64(_89, 1));
  _93 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_92)), 0);
  _94 = llvm_sub_u8(32, (llvm_shl_u8(_93, 3)));
  _95 = (((uint32_t)(uint8_t)_92)) << 24;
  if ((((uint8_t)_94) > ((uint8_t)((uint8_t)16)))) {
    _107__PHI_TEMPORARY = _95;   /* for PHI node */
    goto _151;
  } else {
    _96__PHI_TEMPORARY = 16;   /* for PHI node */
    _97__PHI_TEMPORARY = _95;   /* for PHI node */
    goto _152;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_152:
  _96 = _96__PHI_TEMPORARY;
  _97 = _97__PHI_TEMPORARY;
  if (((((int64_t)_96) < ((int64_t)UINT64_C(0))) | (((uint64_t)_96) < ((uint64_t)(((uint64_t)(uint8_t)_94)))))) {
    _107__PHI_TEMPORARY = _97;   /* for PHI node */
    goto _151;
  } else {
    goto _153;
  }

_153:
  _98 = *(uint64_t*)_68;
  _99 = *(uint64_t*)_70;
  if ((((int64_t)_99) > ((int64_t)_98))) {
    goto _154;
  } else {
    _107__PHI_TEMPORARY = _97;   /* for PHI node */
    goto _151;
  }

_154:
  _100 = *(void**)_64;
  _101 = *(uint8_t*)(((&((uint8_t*)_100)[((int64_t)_98)])));
  if ((((int8_t)_101) > ((int8_t)((uint8_t)-65)))) {
    _107__PHI_TEMPORARY = _97;   /* for PHI node */
    goto _151;
  } else {
    goto _155;
  }

_155:
  _102 = llvm_select_u32((((int64_t)_98) < ((int64_t)_99)), (((uint32_t)(uint8_t)_101)), 0);
  _103 = *(uint64_t*)_68;
  *(uint64_t*)_68 = (llvm_add_u64(_103, 1));
  _104 = llvm_neg_u64(_96);
  _105 = _97 | (llvm_select_u32((((int64_t)_96) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_104) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_102, (((uint32_t)_104)))))), (llvm_select_u32((((uint64_t)_96) > ((uint64_t)UINT64_C(31))), 0, (_102 << (((uint32_t)_96)))))));
  _106 = llvm_add_u64(_96, -8);
  _96__PHI_TEMPORARY = _106;   /* for PHI node */
  _97__PHI_TEMPORARY = _105;   /* for PHI node */
  goto _152;

  } while (1); /* end of syntactic loop '' */
_151:
  _107 = _107__PHI_TEMPORARY;
  _108 = *(uint64_t*)_68;
  _109 = *(uint64_t*)_70;
  if ((((int64_t)_109) > ((int64_t)_108))) {
    goto _156;
  } else {
    _129__PHI_TEMPORARY = _108;   /* for PHI node */
    _130__PHI_TEMPORARY = INT64_C(-4294967296);   /* for PHI node */
    _131__PHI_TEMPORARY = _108;   /* for PHI node */
    _132__PHI_TEMPORARY = _107;   /* for PHI node */
    _133__PHI_TEMPORARY = _89;   /* for PHI node */
    _134__PHI_TEMPORARY = _88;   /* for PHI node */
    goto _144;
  }

_156:
  _110 = *(void**)_64;
  _111 = *(uint8_t*)(((&((uint8_t*)_110)[((int64_t)_108)])));
  *(uint64_t*)_68 = (llvm_add_u64(_108, 1));
  _112 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_111)), 0);
  _113 = llvm_sub_u8(32, (llvm_shl_u8(_112, 3)));
  _114 = (((uint32_t)(uint8_t)_111)) << 24;
  if ((((uint8_t)_113) > ((uint8_t)((uint8_t)16)))) {
    _126__PHI_TEMPORARY = _114;   /* for PHI node */
    goto _157;
  } else {
    _115__PHI_TEMPORARY = 16;   /* for PHI node */
    _116__PHI_TEMPORARY = _114;   /* for PHI node */
    goto _158;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_158:
  _115 = _115__PHI_TEMPORARY;
  _116 = _116__PHI_TEMPORARY;
  if (((((int64_t)_115) < ((int64_t)UINT64_C(0))) | (((uint64_t)_115) < ((uint64_t)(((uint64_t)(uint8_t)_113)))))) {
    _126__PHI_TEMPORARY = _116;   /* for PHI node */
    goto _157;
  } else {
    goto _159;
  }

_159:
  _117 = *(uint64_t*)_68;
  _118 = *(uint64_t*)_70;
  if ((((int64_t)_118) > ((int64_t)_117))) {
    goto _160;
  } else {
    _126__PHI_TEMPORARY = _116;   /* for PHI node */
    goto _157;
  }

_160:
  _119 = *(void**)_64;
  _120 = *(uint8_t*)(((&((uint8_t*)_119)[((int64_t)_117)])));
  if ((((int8_t)_120) > ((int8_t)((uint8_t)-65)))) {
    _126__PHI_TEMPORARY = _116;   /* for PHI node */
    goto _157;
  } else {
    goto _161;
  }

_161:
  _121 = llvm_select_u32((((int64_t)_117) < ((int64_t)_118)), (((uint32_t)(uint8_t)_120)), 0);
  _122 = *(uint64_t*)_68;
  *(uint64_t*)_68 = (llvm_add_u64(_122, 1));
  _123 = llvm_neg_u64(_115);
  _124 = _116 | (llvm_select_u32((((int64_t)_115) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_123) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_121, (((uint32_t)_123)))))), (llvm_select_u32((((uint64_t)_115) > ((uint64_t)UINT64_C(31))), 0, (_121 << (((uint32_t)_115)))))));
  _125 = llvm_add_u64(_115, -8);
  _115__PHI_TEMPORARY = _125;   /* for PHI node */
  _116__PHI_TEMPORARY = _124;   /* for PHI node */
  goto _158;

  } while (1); /* end of syntactic loop '' */
_157:
  _126 = _126__PHI_TEMPORARY;
  _127 = *(uint64_t*)_68;
  _128 = (((uint64_t)(uint32_t)_126)) << 32;
  _129__PHI_TEMPORARY = _127;   /* for PHI node */
  _130__PHI_TEMPORARY = _128;   /* for PHI node */
  _131__PHI_TEMPORARY = _108;   /* for PHI node */
  _132__PHI_TEMPORARY = _107;   /* for PHI node */
  _133__PHI_TEMPORARY = _89;   /* for PHI node */
  _134__PHI_TEMPORARY = _88;   /* for PHI node */
  goto _144;

_144:
  _129 = _129__PHI_TEMPORARY;
  _130 = _130__PHI_TEMPORARY;
  _131 = _131__PHI_TEMPORARY;
  _132 = _132__PHI_TEMPORARY;
  _133 = _133__PHI_TEMPORARY;
  _134 = _134__PHI_TEMPORARY;
  _135 = *(uint64_t*)_68;
  _136 = *(void**)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)112)])));
  _137 = *(void**)(((&((uint8_t*)_62)[((int64_t)16)])));
  _138 = jsk_ijl_gc_small_alloc(_137, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)136)])))));
  *(void**)(((&((uint8_t*)_138)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)136)])));
  *(void**)(((&((uint8_t*)_138)[((int64_t)8)]))) = ((void*)/*NULL*/0);
  *(void**)_138 = _136;
  *(void**)(((&((uint8_t*)_138)[((int64_t)8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)104)])));
  *(uint64_t*)(((&((uint8_t*)_138)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_65))[((int64_t)16)]))) = _138;
  _139 = *(void**)(((&((uint8_t*)_62)[((int64_t)16)])));
  _140 = jsk_ijl_gc_small_alloc(_139, 600, 96, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)168)])))));
  *(void**)(((&((uint8_t*)_140)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)168)])));
  *(void**)_140 = ((void*)/*NULL*/0);
  _141 = ((&((uint8_t*)_140)[((int64_t)24)]));
  *(void**)_141 = ((void*)/*NULL*/0);
  *(void**)_140 = _64;
  *(uint64_t*)(((&((uint8_t*)_140)[((int64_t)8)]))) = _135;
  *(uint16_t*)(((&((uint8_t*)_140)[((int64_t)16)]))) = 767;
  *(void**)_141 = _138;
  *(uint64_t*)(((&((uint8_t*)_140)[((int64_t)32)]))) = (((((uint64_t)(uint32_t)_134)) << 32) | 536870912);
  *(uint64_t*)(((&((uint8_t*)_140)[((int64_t)40)]))) = (_130 | (((uint64_t)(uint32_t)_132)));
  *(uint64_t*)(((&((uint8_t*)_140)[((int64_t)48)]))) = _69;
  *(uint64_t*)(((&((uint8_t*)_140)[((int64_t)56)]))) = _133;
  *(uint64_t*)(((&((uint8_t*)_140)[((int64_t)64)]))) = _131;
  *(uint64_t*)(((&((uint8_t*)_140)[((int64_t)72)]))) = _129;
  _142 = *(void**)(((&((uint8_t*)(&_65))[((int64_t)8)])));
  *(void**)_62 = _142;
  return _140;
}


static void julia_next_token_4(void* _162, void* _163, void* _164, uint8_t _165) {
  struct l_array_4_uint64_t _166;    /* Address-exposed local */
  struct l_array_4_uint64_t _167;    /* Address-exposed local */
  uint64_t _168;
  void* _169;
  uint64_t _170;
  void* _171;
  void* _171__PHI_TEMPORARY;
  void* _172;
  void* _173;
  void* _174;
  uint64_t _175;
  void* _176;
  uint64_t _177;
  void* _178;
  uint8_t _179;
  uint8_t _180;
  uint8_t _181;
  uint32_t _182;
  uint64_t _183;
  uint64_t _183__PHI_TEMPORARY;
  uint32_t _184;
  uint32_t _184__PHI_TEMPORARY;
  uint64_t _185;
  uint64_t _186;
  void* _187;
  uint8_t _188;
  uint32_t _189;
  uint64_t _190;
  uint64_t _191;
  uint32_t _192;
  uint64_t _193;
  uint32_t _194;
  uint32_t _194__PHI_TEMPORARY;
  void* _195;
  uint64_t _196;
  void* _197;
  uint64_t _198;
  uint64_t _199;
  uint64_t _200;
  void* _201;
  uint64_t _202;
  void* _203;
  uint64_t _204;
  void* _205;
  uint64_t _206;
  void* _207;
  uint64_t _208;
  uint64_t _209;

  if ((((bool)_165&1u))) {
    goto _210;
  } else {
    goto _211;
  }

_210:
  _168 = *(uint64_t*)(((&((uint8_t*)_164)[((int64_t)48)])));
  *(uint64_t*)(((&((uint8_t*)_164)[((int64_t)8)]))) = _168;
  goto _211;

_211:
  _169 = *(void**)(((&((uint8_t*)_164)[((int64_t)24)])));
  _170 = *(uint64_t*)(((&((uint8_t*)_169)[((int64_t)16)])));
  if ((_170 == UINT64_C(0))) {
    goto _212;
  } else {
    goto _213;
  }

_214:
  _171 = _171__PHI_TEMPORARY;
  _172 = memcpy(_162, _171, 32);
  return;
_213:
  julia_lex_string_chunk_8((&_166), _163, _164);
  _171__PHI_TEMPORARY = (&_166);   /* for PHI node */
  goto _214;

_212:
  _173 = *(void**)_164;
  _174 = ((&((uint8_t*)_173)[((int64_t)16)]));
  _175 = *(uint64_t*)_174;
  _176 = ((&((uint8_t*)_173)[((int64_t)8)]));
  _177 = *(uint64_t*)_176;
  if ((((int64_t)_177) > ((int64_t)_175))) {
    goto _215;
  } else {
    _194__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _216;
  }

_215:
  _178 = *(void**)_173;
  _179 = *(uint8_t*)(((&((uint8_t*)_178)[((int64_t)_175)])));
  *(uint64_t*)_174 = (llvm_add_u64(_175, 1));
  _180 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_179)), 0);
  _181 = llvm_sub_u8(32, (llvm_shl_u8(_180, 3)));
  _182 = (((uint32_t)(uint8_t)_179)) << 24;
  if ((((uint8_t)_181) > ((uint8_t)((uint8_t)16)))) {
    _194__PHI_TEMPORARY = _182;   /* for PHI node */
    goto _216;
  } else {
    _183__PHI_TEMPORARY = 16;   /* for PHI node */
    _184__PHI_TEMPORARY = _182;   /* for PHI node */
    goto _217;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_217:
  _183 = _183__PHI_TEMPORARY;
  _184 = _184__PHI_TEMPORARY;
  if (((((int64_t)_183) < ((int64_t)UINT64_C(0))) | (((uint64_t)_183) < ((uint64_t)(((uint64_t)(uint8_t)_181)))))) {
    _194__PHI_TEMPORARY = _184;   /* for PHI node */
    goto _216;
  } else {
    goto _218;
  }

_218:
  _185 = *(uint64_t*)_174;
  _186 = *(uint64_t*)_176;
  if ((((int64_t)_186) > ((int64_t)_185))) {
    goto _219;
  } else {
    _194__PHI_TEMPORARY = _184;   /* for PHI node */
    goto _216;
  }

_219:
  _187 = *(void**)_173;
  _188 = *(uint8_t*)(((&((uint8_t*)_187)[((int64_t)_185)])));
  if ((((int8_t)_188) > ((int8_t)((uint8_t)-65)))) {
    _194__PHI_TEMPORARY = _184;   /* for PHI node */
    goto _216;
  } else {
    goto _220;
  }

_220:
  _189 = llvm_select_u32((((int64_t)_185) < ((int64_t)_186)), (((uint32_t)(uint8_t)_188)), 0);
  _190 = *(uint64_t*)_174;
  *(uint64_t*)_174 = (llvm_add_u64(_190, 1));
  _191 = llvm_neg_u64(_183);
  _192 = _184 | (llvm_select_u32((((int64_t)_183) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_191) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_189, (((uint32_t)_191)))))), (llvm_select_u32((((uint64_t)_183) > ((uint64_t)UINT64_C(31))), 0, (_189 << (((uint32_t)_183)))))));
  _193 = llvm_add_u64(_183, -8);
  _183__PHI_TEMPORARY = _193;   /* for PHI node */
  _184__PHI_TEMPORARY = _192;   /* for PHI node */
  goto _217;

  } while (1); /* end of syntactic loop '' */
_216:
  _194 = _194__PHI_TEMPORARY;
  _195 = ((&((uint8_t*)_164)[((int64_t)32)]));
  _196 = *(uint64_t*)_195;
  _197 = ((&((uint8_t*)_164)[((int64_t)40)]));
  _198 = *(uint64_t*)_197;
  _199 = jsyn_cbe_fshl_i64(_198, _196, 32);
  _200 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_194)), _198, 32);
  *(uint64_t*)_195 = _199;
  *(uint64_t*)_197 = _200;
  _201 = ((&((uint8_t*)_164)[((int64_t)56)]));
  _202 = *(uint64_t*)_201;
  _203 = ((&((uint8_t*)_164)[((int64_t)64)]));
  _204 = *(uint64_t*)_203;
  _205 = ((&((uint8_t*)_164)[((int64_t)72)]));
  _206 = *(uint64_t*)_205;
  _207 = *(void**)_164;
  _208 = *(uint64_t*)(((&((uint8_t*)_207)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_164)[((int64_t)48)]))) = _202;
  *(uint64_t*)_201 = _204;
  *(uint64_t*)_203 = _206;
  *(uint64_t*)_205 = _208;
  _209 = *(uint64_t*)_195;
  julia__next_token_9((&_167), _163, _164, (((uint32_t)_209)));
  _171__PHI_TEMPORARY = (&_167);   /* for PHI node */
  goto _214;

}


static __noreturn void julia_throw_inexacterror_5(void* _221, void* _222, void* _223, int32_t _224) {
  jsk_throw();
  __builtin_unreachable();

}


static __noreturn void julia_throw_inexacterror_6(void* _225, void* _226, void* _227, int64_t _228) {
  jsk_throw();
  __builtin_unreachable();

}


static uint32_t julia_contextual_keyword_7(void* _229, void* _230, int64_t _231) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _232 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _233;
  void* _234;
  struct l_array_4_uint64_t _235;    /* Address-exposed local */
  struct l_array_4_uint64_t _236;    /* Address-exposed local */
  void* _237;
  void* _238;
  void* _239;
  uint16_t _240;
  uint16_t _241;
  bool _242;
  bool _242__PHI_TEMPORARY;
  void* _243;
  bool _244;
  bool _245;
  uint16_t _246;

  _233 = memset((&_232), 0, 24);
  *((uint64_t*)&_232) = 4;
  _234 = *(void**)_229;
  *(void**)(((&((uint8_t*)(&_232))[((int64_t)8)]))) = _234;
  *(void**)_229 = (&_232);
  _237 = *(void**)(((&((uint8_t*)_229)[((int64_t)16)])));
  _238 = jsk_ijl_gc_small_alloc(_237, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])))));
  *(void**)(((&((uint8_t*)_238)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)8)])));
  *(void**)_238 = _230;
  *(uint64_t*)(((&((uint8_t*)_238)[((int64_t)8)]))) = _231;
  *(uint64_t*)(((&((uint8_t*)_238)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_232))[((int64_t)16)]))) = _238;
  _239 = julia_Lexer_3(_229, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _238);
  *(void**)(((&((uint8_t*)(&_232))[((int64_t)16)]))) = _239;
  julia_next_token_4((&_235), _229, _239, 1);
  goto _247;

  do {     /* Syntactic loop '' to make GCC happy */
_247:
  julia_next_token_4((&_236), _229, _239, 1);
  _240 = *((uint16_t*)&_236);
  if ((((uint16_t)_240) < ((uint16_t)((uint16_t)2)))) {
    goto _247;
  } else {
    goto _248;
  }

  } while (1); /* end of syntactic loop '' */
_248:
  _241 = *((uint16_t*)&_235);
  switch (_241) {
  default:
    _242__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _249;
  case ((uint16_t)37):
    goto _250;
  case ((uint16_t)34):
    goto _251;
  case ((uint16_t)39):
    goto _251;
  case ((uint16_t)40):
    goto _252;
  case ((uint16_t)38):
    goto _253;
  }

_249:
  _242 = _242__PHI_TEMPORARY;
  _243 = *(void**)(((&((uint8_t*)(&_232))[((int64_t)8)])));
  *(void**)_229 = _243;
  return (((uint32_t)(bool)_242));
_250:
  _242__PHI_TEMPORARY = (_240 == ((uint16_t)25));   /* for PHI node */
  goto _249;

_252:
  _244 = (_240 != ((uint16_t)69)) & ((llvm_and_u16(_240, -5)) != ((uint16_t)56));
  _242__PHI_TEMPORARY = _244;   /* for PHI node */
  goto _249;

_253:
  _245 = (_240 != ((uint16_t)69)) & (((uint16_t)(llvm_add_u16(_240, -253))) < ((uint16_t)((uint16_t)-2)));
  _242__PHI_TEMPORARY = _245;   /* for PHI node */
  goto _249;

_251:
  _246 = *((uint16_t*)&_236);
  _242__PHI_TEMPORARY = (_246 == ((uint16_t)41));   /* for PHI node */
  goto _249;

}


static void julia_lex_string_chunk_8(void* _254, void* _255, void* _256) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _257 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _258;
  void* _259;
  struct l_array_4_uint64_t _260;    /* Address-exposed local */
  struct l_array_1_uint64_t _261;    /* Address-exposed local */
  struct l_array_4_uint64_t _262;    /* Address-exposed local */
  struct l_array_1_uint64_t _263;    /* Address-exposed local */
  struct l_array_4_uint64_t _264;    /* Address-exposed local */
  struct l_array_4_uint64_t _265;    /* Address-exposed local */
  struct l_array_1_uint64_t _266;    /* Address-exposed local */
  struct l_array_4_uint64_t _267;    /* Address-exposed local */
  struct l_array_4_uint64_t _268;    /* Address-exposed local */
  struct l_array_4_uint64_t _269;    /* Address-exposed local */
  struct l_array_4_uint64_t _270;    /* Address-exposed local */
  struct l_array_4_uint64_t _271;    /* Address-exposed local */
  struct l_array_4_uint64_t _272;    /* Address-exposed local */
  struct l_array_4_uint64_t _273;    /* Address-exposed local */
  struct l_array_4_uint64_t _274;    /* Address-exposed local */
  struct l_array_4_uint64_t _275;    /* Address-exposed local */
  struct l_array_1_uint64_t _276;    /* Address-exposed local */
  void* _277;
  void* _278;
  uint64_t _279;
  void* _280;
  void* _281;
  uint8_t _282;
  uint8_t _283;
  uint32_t _284;
  uint64_t _285;
  void* _286;
  void* _287;
  uint64_t _288;
  void* _289;
  uint64_t _290;
  void* _291;
  uint8_t _292;
  uint8_t _293;
  uint8_t _294;
  uint32_t _295;
  uint64_t _296;
  uint64_t _296__PHI_TEMPORARY;
  uint32_t _297;
  uint32_t _297__PHI_TEMPORARY;
  uint64_t _298;
  uint64_t _299;
  void* _300;
  uint8_t _301;
  uint32_t _302;
  uint64_t _303;
  uint64_t _304;
  uint32_t _305;
  uint64_t _306;
  uint32_t _307;
  uint32_t _307__PHI_TEMPORARY;
  void* _308;
  uint64_t _309;
  void* _310;
  uint64_t _311;
  uint64_t _312;
  uint64_t _313;
  void* _314;
  uint64_t _315;
  void* _316;
  uint64_t _317;
  void* _318;
  uint64_t _319;
  void* _320;
  uint64_t _321;
  uint64_t _322;
  uint32_t _323;
  void* _324;
  uint64_t _325;
  void* _326;
  void* _327;
  void* _328;
  void* _328__PHI_TEMPORARY;
  void* _329;
  void* _330;
  void* _331;
  uint64_t _332;
  void* _333;
  void* _334;
  void* _335;
  uint64_t _336;
  void* _337;
  uint64_t _338;
  uint32_t _339;
  void* _340;
  uint16_t _341;
  uint64_t _342;
  uint64_t _343;
  uint32_t _344;
  void* _345;
  void* _346;
  uint64_t _347;
  void* _348;
  uint64_t _349;
  void* _350;
  uint8_t _351;
  uint8_t _352;
  uint8_t _353;
  uint32_t _354;
  uint64_t _355;
  uint64_t _355__PHI_TEMPORARY;
  uint32_t _356;
  uint32_t _356__PHI_TEMPORARY;
  uint64_t _357;
  uint64_t _358;
  void* _359;
  uint8_t _360;
  uint32_t _361;
  uint64_t _362;
  uint64_t _363;
  uint32_t _364;
  uint64_t _365;
  uint32_t _366;
  uint32_t _366__PHI_TEMPORARY;
  uint64_t _367;
  uint64_t _368;
  uint64_t _369;
  uint64_t _370;
  void* _371;
  uint64_t _372;
  void* _373;
  uint64_t _374;
  void* _375;
  uint64_t _376;
  void* _377;
  uint64_t _378;
  void* _379;
  uint64_t _380;
  void* _381;
  void* _382;
  uint32_t _383;
  uint64_t _384;
  uint32_t _385;
  uint32_t _386;
  uint64_t _387;
  bool _388;
  bool _389;
  uint32_t _390;
  uint32_t _391;
  uint32_t _392;
  uint32_t _393;
  uint32_t _393__PHI_TEMPORARY;
  uint32_t _394;
  void* _395;
  void* _396;
  uint64_t _397;
  void* _398;
  uint64_t _399;
  void* _400;
  uint8_t _401;
  uint8_t _402;
  uint8_t _403;
  uint32_t _404;
  uint64_t _405;
  uint64_t _405__PHI_TEMPORARY;
  uint32_t _406;
  uint32_t _406__PHI_TEMPORARY;
  uint64_t _407;
  uint64_t _408;
  void* _409;
  uint8_t _410;
  uint32_t _411;
  uint64_t _412;
  uint64_t _413;
  uint32_t _414;
  uint64_t _415;
  uint32_t _416;
  uint32_t _416__PHI_TEMPORARY;
  uint64_t _417;
  uint64_t _418;
  uint64_t _419;
  uint64_t _420;
  void* _421;
  uint64_t _422;
  void* _423;
  uint64_t _424;
  void* _425;
  uint64_t _426;
  void* _427;
  uint64_t _428;
  uint64_t _429;
  uint8_t _430;
  bool _431;
  uint8_t _432;
  bool _433;
  bool _434;
  bool _434__PHI_TEMPORARY;
  void* _435;
  void* _436;
  uint64_t _437;
  void* _438;
  uint64_t _439;
  void* _440;
  uint8_t _441;
  uint8_t _442;
  uint8_t _443;
  uint32_t _444;
  uint64_t _445;
  uint64_t _445__PHI_TEMPORARY;
  uint32_t _446;
  uint32_t _446__PHI_TEMPORARY;
  uint64_t _447;
  uint64_t _448;
  void* _449;
  uint8_t _450;
  uint32_t _451;
  uint64_t _452;
  uint64_t _453;
  uint32_t _454;
  uint64_t _455;
  uint32_t _456;
  uint32_t _456__PHI_TEMPORARY;
  uint64_t _457;
  uint64_t _458;
  uint64_t _459;
  uint64_t _460;
  void* _461;
  uint64_t _462;
  void* _463;
  uint64_t _464;
  void* _465;
  uint64_t _466;
  void* _467;
  uint64_t _468;
  uint32_t _469;
  uint32_t _469__PHI_TEMPORARY;
  bool _470;
  void* _471;
  void* _472;
  uint64_t _473;
  void* _474;
  uint64_t _475;
  void* _476;
  uint8_t _477;
  uint8_t _478;
  uint8_t _479;
  uint32_t _480;
  uint64_t _481;
  uint64_t _481__PHI_TEMPORARY;
  uint32_t _482;
  uint32_t _482__PHI_TEMPORARY;
  uint64_t _483;
  uint64_t _484;
  void* _485;
  uint8_t _486;
  uint32_t _487;
  uint64_t _488;
  uint64_t _489;
  uint32_t _490;
  uint64_t _491;
  uint32_t _492;
  uint32_t _492__PHI_TEMPORARY;
  uint64_t _493;
  uint64_t _494;
  uint64_t _495;
  uint64_t _496;
  void* _497;
  uint64_t _498;
  void* _499;
  uint64_t _500;
  void* _501;
  uint64_t _502;
  void* _503;
  uint64_t _504;
  uint64_t _505;
  uint32_t _506;
  void* _507;
  void* _508;
  uint64_t _509;
  void* _510;
  uint64_t _511;
  void* _512;
  uint8_t _513;
  uint8_t _514;
  uint8_t _515;
  uint32_t _516;
  uint64_t _517;
  uint64_t _517__PHI_TEMPORARY;
  uint32_t _518;
  uint32_t _518__PHI_TEMPORARY;
  uint64_t _519;
  uint64_t _520;
  void* _521;
  uint8_t _522;
  uint32_t _523;
  uint64_t _524;
  uint64_t _525;
  uint32_t _526;
  uint64_t _527;
  uint32_t _528;
  uint32_t _528__PHI_TEMPORARY;
  uint64_t _529;
  uint64_t _530;
  uint64_t _531;
  uint64_t _532;
  void* _533;
  void* _534;
  uint64_t _535;
  void* _536;
  uint64_t _537;
  void* _538;
  uint64_t _539;
  void* _540;
  uint64_t _541;
  void* _542;
  void* _543;
  uint64_t _544;
  void* _545;
  uint64_t _546;
  void* _547;
  uint8_t _548;
  uint8_t _549;
  uint8_t _550;
  uint32_t _551;
  uint64_t _552;
  uint64_t _552__PHI_TEMPORARY;
  uint32_t _553;
  uint32_t _553__PHI_TEMPORARY;
  uint64_t _554;
  uint64_t _555;
  void* _556;
  uint8_t _557;
  uint32_t _558;
  uint64_t _559;
  uint64_t _560;
  uint32_t _561;
  uint64_t _562;
  uint32_t _563;
  uint32_t _563__PHI_TEMPORARY;
  uint64_t _564;
  uint64_t _565;
  uint64_t _566;
  uint64_t _567;
  uint64_t _568;
  uint64_t _569;
  uint64_t _570;
  void* _571;
  uint64_t _572;
  uint64_t _573;
  void* _574;
  void* _575;
  uint64_t _576;
  void* _577;
  uint64_t _578;
  void* _579;
  uint8_t _580;
  uint8_t _581;
  uint8_t _582;
  uint32_t _583;
  uint64_t _584;
  uint64_t _584__PHI_TEMPORARY;
  uint32_t _585;
  uint32_t _585__PHI_TEMPORARY;
  uint64_t _586;
  uint64_t _587;
  void* _588;
  uint8_t _589;
  uint32_t _590;
  uint64_t _591;
  uint64_t _592;
  uint32_t _593;
  uint64_t _594;
  uint32_t _595;
  uint32_t _595__PHI_TEMPORARY;
  uint64_t _596;
  uint64_t _597;
  uint64_t _598;
  uint64_t _599;
  uint64_t _600;
  uint64_t _601;
  uint64_t _602;
  void* _603;
  uint64_t _604;
  uint64_t _605;
  void* _606;
  void* _607;
  uint64_t _608;
  void* _609;
  uint64_t _610;
  void* _611;
  uint8_t _612;
  uint8_t _613;
  uint8_t _614;
  uint32_t _615;
  uint64_t _616;
  uint64_t _616__PHI_TEMPORARY;
  uint32_t _617;
  uint32_t _617__PHI_TEMPORARY;
  uint64_t _618;
  uint64_t _619;
  void* _620;
  uint8_t _621;
  uint32_t _622;
  uint64_t _623;
  uint64_t _624;
  uint32_t _625;
  uint64_t _626;
  bool _627;
  uint64_t _628;
  uint64_t _629;
  uint64_t _630;
  uint64_t _630__PHI_TEMPORARY;
  uint16_t _631;
  uint64_t _632;
  void* _633;
  void* _634;
  uint64_t _635;
  void* _636;
  uint64_t _637;
  void* _638;
  uint8_t _639;
  uint8_t _640;
  uint8_t _641;
  uint32_t _642;
  uint64_t _643;
  uint64_t _643__PHI_TEMPORARY;
  uint32_t _644;
  uint32_t _644__PHI_TEMPORARY;
  uint64_t _645;
  uint64_t _646;
  void* _647;
  uint8_t _648;
  uint32_t _649;
  uint64_t _650;
  uint64_t _651;
  uint32_t _652;
  uint64_t _653;
  uint32_t _654;
  uint32_t _654__PHI_TEMPORARY;
  uint64_t _655;
  uint64_t _656;
  uint64_t _657;
  uint64_t _658;
  void* _659;
  uint64_t _660;
  void* _661;
  uint64_t _662;
  void* _663;
  uint64_t _664;
  void* _665;
  uint64_t _666;
  void* _667;
  void* _668;
  uint64_t _669;
  uint64_t _670;
  uint64_t _671;
  uint64_t _671__PHI_TEMPORARY;
  void* _672;
  void* _673;
  uint64_t _674;
  void* _675;
  uint64_t _676;
  void* _677;
  uint8_t _678;
  uint8_t _679;
  uint8_t _680;
  uint32_t _681;
  uint64_t _682;
  uint64_t _682__PHI_TEMPORARY;
  uint32_t _683;
  uint32_t _683__PHI_TEMPORARY;
  uint64_t _684;
  uint64_t _685;
  void* _686;
  uint8_t _687;
  uint32_t _688;
  uint64_t _689;
  uint64_t _690;
  uint32_t _691;
  uint64_t _692;
  uint32_t _693;
  uint32_t _693__PHI_TEMPORARY;
  uint64_t _694;
  uint64_t _695;
  uint64_t _696;
  uint64_t _697;
  void* _698;
  void* _699;
  uint64_t _700;
  void* _701;
  uint64_t _702;
  void* _703;
  uint64_t _704;
  void* _705;
  uint64_t _706;
  void* _707;
  void* _708;
  uint64_t _709;
  void* _710;
  uint64_t _711;
  void* _712;
  uint8_t _713;
  uint8_t _714;
  uint8_t _715;
  uint32_t _716;
  uint64_t _717;
  uint64_t _717__PHI_TEMPORARY;
  uint32_t _718;
  uint32_t _718__PHI_TEMPORARY;
  uint64_t _719;
  uint64_t _720;
  void* _721;
  uint8_t _722;
  uint32_t _723;
  uint64_t _724;
  uint64_t _725;
  uint32_t _726;
  uint64_t _727;
  uint32_t _728;
  uint32_t _728__PHI_TEMPORARY;
  uint64_t _729;
  uint64_t _730;
  uint64_t _731;
  uint64_t _732;
  uint64_t _733;
  uint64_t _734;
  uint64_t _735;
  void* _736;
  uint64_t _737;
  void* _738;
  void* _739;
  uint64_t _740;
  void* _741;
  uint64_t _742;
  void* _743;
  uint8_t _744;
  uint8_t _745;
  uint8_t _746;
  uint32_t _747;
  uint64_t _748;
  uint64_t _748__PHI_TEMPORARY;
  uint32_t _749;
  uint32_t _749__PHI_TEMPORARY;
  uint64_t _750;
  uint64_t _751;
  void* _752;
  uint8_t _753;
  uint32_t _754;
  uint64_t _755;
  uint64_t _756;
  uint32_t _757;
  uint64_t _758;
  uint32_t _759;
  uint32_t _759__PHI_TEMPORARY;
  uint64_t _760;
  uint64_t _761;
  uint64_t _762;
  uint64_t _763;
  uint64_t _764;
  uint64_t _765;
  uint64_t _766;
  void* _767;
  uint64_t _768;
  bool _769;
  bool _769__PHI_TEMPORARY;
  uint64_t _770;
  uint64_t _770__PHI_TEMPORARY;
  uint64_t _771;
  uint64_t _771__PHI_TEMPORARY;
  uint64_t _772;
  uint64_t _773;
  uint32_t _774;
  bool _775;
  uint64_t _776;
  uint32_t _777;
  uint32_t _778;
  uint32_t _778__PHI_TEMPORARY;
  void* _779;
  void* _780;
  uint64_t _781;
  void* _782;
  uint64_t _783;
  void* _784;
  uint8_t _785;
  uint8_t _786;
  uint8_t _787;
  uint32_t _788;
  uint64_t _789;
  uint64_t _789__PHI_TEMPORARY;
  uint32_t _790;
  uint32_t _790__PHI_TEMPORARY;
  uint64_t _791;
  uint64_t _792;
  void* _793;
  uint8_t _794;
  uint32_t _795;
  uint64_t _796;
  uint64_t _797;
  uint32_t _798;
  uint64_t _799;
  uint32_t _800;
  uint32_t _800__PHI_TEMPORARY;
  uint64_t _801;
  uint64_t _802;
  uint64_t _803;
  uint64_t _804;
  void* _805;
  void* _806;
  uint64_t _807;
  void* _808;
  uint64_t _809;
  void* _810;
  uint64_t _811;
  void* _812;
  uint64_t _813;
  uint64_t _814;
  uint64_t _815;
  uint64_t _816;
  void* _817;
  void* _818;
  uint64_t _819;
  void* _820;
  uint64_t _821;
  void* _822;
  uint8_t _823;
  uint8_t _824;
  uint8_t _825;
  uint32_t _826;
  uint64_t _827;
  uint64_t _827__PHI_TEMPORARY;
  uint32_t _828;
  uint32_t _828__PHI_TEMPORARY;
  uint64_t _829;
  uint64_t _830;
  void* _831;
  uint8_t _832;
  uint32_t _833;
  uint64_t _834;
  uint64_t _835;
  uint32_t _836;
  uint64_t _837;
  uint32_t _838;
  uint32_t _838__PHI_TEMPORARY;
  uint64_t _839;
  uint64_t _840;
  uint64_t _841;
  uint64_t _842;
  uint64_t _843;
  uint64_t _844;
  uint64_t _845;
  void* _846;
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
  void* _874;
  void* _875;
  uint64_t _876;
  void* _877;
  uint64_t _878;
  void* _879;
  uint64_t _880;
  void* _881;
  uint64_t _882;
  uint64_t _883;
  uint32_t _884;
  uint64_t _885;
  uint64_t _885__PHI_TEMPORARY;
  uint64_t _886;
  uint64_t _887;
  void* _888;
  void* _889;
  uint64_t _890;
  void* _891;
  uint64_t _892;
  void* _893;
  uint8_t _894;
  uint8_t _895;
  uint8_t _896;
  uint32_t _897;
  uint64_t _898;
  uint64_t _898__PHI_TEMPORARY;
  uint32_t _899;
  uint32_t _899__PHI_TEMPORARY;
  uint64_t _900;
  uint64_t _901;
  void* _902;
  uint8_t _903;
  uint32_t _904;
  uint64_t _905;
  uint64_t _906;
  uint32_t _907;
  uint64_t _908;
  uint32_t _909;
  uint32_t _909__PHI_TEMPORARY;
  uint64_t _910;
  uint64_t _911;
  uint64_t _912;
  uint64_t _913;
  uint64_t _914;
  uint64_t _915;
  uint64_t _916;
  void* _917;
  uint64_t _918;
  uint64_t _919;
  void* _920;
  void* _921;
  uint64_t _922;
  void* _923;
  uint64_t _924;
  void* _925;
  uint8_t _926;
  uint8_t _927;
  uint8_t _928;
  uint32_t _929;
  uint64_t _930;
  uint64_t _930__PHI_TEMPORARY;
  uint32_t _931;
  uint32_t _931__PHI_TEMPORARY;
  uint64_t _932;
  uint64_t _933;
  void* _934;
  uint8_t _935;
  uint32_t _936;
  uint64_t _937;
  uint64_t _938;
  uint32_t _939;
  uint64_t _940;
  uint32_t _941;
  uint32_t _941__PHI_TEMPORARY;
  uint64_t _942;
  uint64_t _943;
  uint64_t _944;
  uint64_t _945;
  uint64_t _946;
  uint64_t _947;
  uint64_t _948;
  void* _949;
  uint64_t _950;
  uint64_t _951;
  uint64_t _952;
  uint64_t _953;
  uint64_t _954;
  uint64_t _955;
  uint64_t _955__PHI_TEMPORARY;
  uint64_t _956;
  uint64_t _956__PHI_TEMPORARY;
  uint32_t _957;
  uint32_t _958;
  uint32_t _959;
  bool _960;
  bool _961;
  bool _961__PHI_TEMPORARY;
  uint64_t _962;
  uint64_t _962__PHI_TEMPORARY;
  uint64_t _963;
  uint64_t _963__PHI_TEMPORARY;
  uint64_t _964;
  uint64_t _965;
  uint32_t _966;
  bool _967;
  void* _968;
  void* _969;
  uint64_t _970;
  void* _971;
  uint64_t _972;
  void* _973;
  uint8_t _974;
  uint8_t _975;
  uint8_t _976;
  uint32_t _977;
  uint64_t _978;
  uint64_t _978__PHI_TEMPORARY;
  uint32_t _979;
  uint32_t _979__PHI_TEMPORARY;
  uint64_t _980;
  uint64_t _981;
  void* _982;
  uint8_t _983;
  uint32_t _984;
  uint64_t _985;
  uint64_t _986;
  uint32_t _987;
  uint64_t _988;
  uint32_t _989;
  uint32_t _989__PHI_TEMPORARY;
  uint64_t _990;
  uint64_t _991;
  uint64_t _992;
  uint64_t _993;
  void* _994;
  void* _995;
  uint64_t _996;
  void* _997;
  uint64_t _998;
  void* _999;
  uint64_t _1000;
  void* _1001;
  uint64_t _1002;
  uint64_t _1003;
  uint64_t _1004;
  uint64_t _1005;
  void* _1006;
  void* _1007;
  uint64_t _1008;
  void* _1009;
  uint64_t _1010;
  void* _1011;
  uint8_t _1012;
  uint8_t _1013;
  uint8_t _1014;
  uint32_t _1015;
  uint64_t _1016;
  uint64_t _1016__PHI_TEMPORARY;
  uint32_t _1017;
  uint32_t _1017__PHI_TEMPORARY;
  uint64_t _1018;
  uint64_t _1019;
  void* _1020;
  uint8_t _1021;
  uint32_t _1022;
  uint64_t _1023;
  uint64_t _1024;
  uint32_t _1025;
  uint64_t _1026;
  uint32_t _1027;
  uint32_t _1027__PHI_TEMPORARY;
  uint64_t _1028;
  uint64_t _1029;
  uint64_t _1030;
  uint64_t _1031;
  uint64_t _1032;
  uint64_t _1033;
  uint64_t _1034;
  void* _1035;
  uint64_t _1036;
  uint64_t _1037;
  uint64_t _1038;
  uint64_t _1039;
  uint64_t _1039__PHI_TEMPORARY;
  uint64_t _1040;
  void* _1041;
  void* _1042;
  uint64_t _1043;
  void* _1044;
  uint64_t _1045;
  void* _1046;
  uint8_t _1047;
  uint8_t _1048;
  uint8_t _1049;
  uint32_t _1050;
  uint64_t _1051;
  uint64_t _1051__PHI_TEMPORARY;
  uint32_t _1052;
  uint32_t _1052__PHI_TEMPORARY;
  uint64_t _1053;
  uint64_t _1054;
  void* _1055;
  uint8_t _1056;
  uint32_t _1057;
  uint64_t _1058;
  uint64_t _1059;
  uint32_t _1060;
  uint64_t _1061;
  uint32_t _1062;
  uint32_t _1062__PHI_TEMPORARY;
  uint64_t _1063;
  uint64_t _1064;
  uint64_t _1065;
  uint64_t _1066;
  void* _1067;
  void* _1068;
  uint64_t _1069;
  void* _1070;
  uint64_t _1071;
  void* _1072;
  uint64_t _1073;
  void* _1074;
  uint64_t _1075;
  uint64_t _1076;
  uint32_t _1077;
  void* _1078;
  void* _1079;
  uint64_t _1080;
  void* _1081;
  uint64_t _1082;
  void* _1083;
  uint8_t _1084;
  uint8_t _1085;
  uint8_t _1086;
  uint32_t _1087;
  uint64_t _1088;
  uint64_t _1088__PHI_TEMPORARY;
  uint32_t _1089;
  uint32_t _1089__PHI_TEMPORARY;
  uint64_t _1090;
  uint64_t _1091;
  void* _1092;
  uint8_t _1093;
  uint32_t _1094;
  uint64_t _1095;
  uint64_t _1096;
  uint32_t _1097;
  uint64_t _1098;
  uint32_t _1099;
  uint32_t _1099__PHI_TEMPORARY;
  uint64_t _1100;
  uint64_t _1101;
  uint64_t _1102;
  uint64_t _1103;
  uint64_t _1104;
  uint64_t _1105;
  uint64_t _1106;
  void* _1107;
  uint64_t _1108;
  uint64_t _1109;
  uint32_t _1110;
  uint32_t _1111;
  uint32_t _1111__PHI_TEMPORARY;
  uint64_t _1112;
  uint64_t _1113;
  uint64_t _1114;
  uint64_t _1115;
  uint64_t _1116;
  uint64_t _1116__PHI_TEMPORARY;
  uint64_t _1117;
  uint64_t _1117__PHI_TEMPORARY;
  uint32_t _1118;
  uint32_t _1119;
  uint32_t _1120;
  bool _1121;
  bool _1122;
  bool _1122__PHI_TEMPORARY;
  uint64_t _1123;
  uint64_t _1123__PHI_TEMPORARY;
  uint64_t _1124;
  uint64_t _1124__PHI_TEMPORARY;
  struct l_array_1_void_KC_ _1125;
  void* _1126;
  void* _1127;
  uint16_t _1128;
  uint16_t _1128__PHI_TEMPORARY;

  _258 = memset((&_257), 0, 24);
  *((uint64_t*)&_257) = 4;
  _259 = *(void**)_255;
  *(void**)(((&((uint8_t*)(&_257))[((int64_t)8)]))) = _259;
  *(void**)_255 = (&_257);
  _277 = ((&((uint8_t*)_256)[((int64_t)24)]));
  _278 = *(void**)_277;
  _279 = *(uint64_t*)(((&((uint8_t*)_278)[((int64_t)16)])));
  if ((_279 == UINT64_C(0))) {
    goto _1129;
  } else {
    goto _1130;
  }

_1129:
  *((uint64_t*)&_276) = _279;
  *(void**)(((&((uint8_t*)(&_257))[((int64_t)16)]))) = _278;
  julia_throw_boundserror_10(_255, _278, (&_276));
  __builtin_unreachable();

_1130:
  _280 = *(void**)_278;
  _281 = ((&((uint8_t*)_280)[((int64_t)(_279 << 4))]));
  _282 = *(uint8_t*)(((&((uint8_t*)_281)[((int64_t)-16)])));
  _283 = *(uint8_t*)(((&((uint8_t*)_281)[((int64_t)-15)])));
  _284 = *(uint32_t*)(((&((uint8_t*)_281)[((int64_t)-12)])));
  _285 = *(uint64_t*)(((&((uint8_t*)_281)[((int64_t)-8)])));
  if ((((int64_t)_285) < ((int64_t)UINT64_C(1)))) {
    goto _1131;
  } else {
    goto _1132;
  }

_1132:
  _286 = *(void**)_256;
  _287 = ((&((uint8_t*)_286)[((int64_t)16)]));
  _288 = *(uint64_t*)_287;
  _289 = ((&((uint8_t*)_286)[((int64_t)8)]));
  _290 = *(uint64_t*)_289;
  if ((((int64_t)_290) > ((int64_t)_288))) {
    goto _1133;
  } else {
    _307__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1134;
  }

_1133:
  _291 = *(void**)_286;
  _292 = *(uint8_t*)(((&((uint8_t*)_291)[((int64_t)_288)])));
  *(uint64_t*)_287 = (llvm_add_u64(_288, 1));
  _293 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_292)), 0);
  _294 = llvm_sub_u8(32, (llvm_shl_u8(_293, 3)));
  _295 = (((uint32_t)(uint8_t)_292)) << 24;
  if ((((uint8_t)_294) > ((uint8_t)((uint8_t)16)))) {
    _307__PHI_TEMPORARY = _295;   /* for PHI node */
    goto _1134;
  } else {
    _296__PHI_TEMPORARY = 16;   /* for PHI node */
    _297__PHI_TEMPORARY = _295;   /* for PHI node */
    goto _1135;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1135:
  _296 = _296__PHI_TEMPORARY;
  _297 = _297__PHI_TEMPORARY;
  if (((((int64_t)_296) < ((int64_t)UINT64_C(0))) | (((uint64_t)_296) < ((uint64_t)(((uint64_t)(uint8_t)_294)))))) {
    _307__PHI_TEMPORARY = _297;   /* for PHI node */
    goto _1134;
  } else {
    goto _1136;
  }

_1136:
  _298 = *(uint64_t*)_287;
  _299 = *(uint64_t*)_289;
  if ((((int64_t)_299) > ((int64_t)_298))) {
    goto _1137;
  } else {
    _307__PHI_TEMPORARY = _297;   /* for PHI node */
    goto _1134;
  }

_1137:
  _300 = *(void**)_286;
  _301 = *(uint8_t*)(((&((uint8_t*)_300)[((int64_t)_298)])));
  if ((((int8_t)_301) > ((int8_t)((uint8_t)-65)))) {
    _307__PHI_TEMPORARY = _297;   /* for PHI node */
    goto _1134;
  } else {
    goto _1138;
  }

_1138:
  _302 = llvm_select_u32((((int64_t)_298) < ((int64_t)_299)), (((uint32_t)(uint8_t)_301)), 0);
  _303 = *(uint64_t*)_287;
  *(uint64_t*)_287 = (llvm_add_u64(_303, 1));
  _304 = llvm_neg_u64(_296);
  _305 = _297 | (llvm_select_u32((((int64_t)_296) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_304) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_302, (((uint32_t)_304)))))), (llvm_select_u32((((uint64_t)_296) > ((uint64_t)UINT64_C(31))), 0, (_302 << (((uint32_t)_296)))))));
  _306 = llvm_add_u64(_296, -8);
  _296__PHI_TEMPORARY = _306;   /* for PHI node */
  _297__PHI_TEMPORARY = _305;   /* for PHI node */
  goto _1135;

  } while (1); /* end of syntactic loop '' */
_1134:
  _307 = _307__PHI_TEMPORARY;
  _308 = ((&((uint8_t*)_256)[((int64_t)32)]));
  _309 = *(uint64_t*)_308;
  _310 = ((&((uint8_t*)_256)[((int64_t)40)]));
  _311 = *(uint64_t*)_310;
  _312 = jsyn_cbe_fshl_i64(_311, _309, 32);
  _313 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_307)), _311, 32);
  *(uint64_t*)_308 = _312;
  *(uint64_t*)_310 = _313;
  _314 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _315 = *(uint64_t*)_314;
  _316 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _317 = *(uint64_t*)_316;
  _318 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _319 = *(uint64_t*)_318;
  _320 = *(void**)_256;
  _321 = *(uint64_t*)(((&((uint8_t*)_320)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_256)[((int64_t)48)]))) = _315;
  *(uint64_t*)_314 = _317;
  *(uint64_t*)_316 = _319;
  *(uint64_t*)_318 = _321;
  _322 = *(uint64_t*)_308;
  _323 = ((uint32_t)_322);
  switch (_323) {
  default:
    goto _1139;
  case 671088640u:
    goto _1140;
  case 687865856u:
    goto _1141;
  }

_1140:
  _324 = *(void**)_277;
  _325 = *(uint64_t*)(((&((uint8_t*)_324)[((int64_t)16)])));
  if ((_325 == UINT64_C(0))) {
    goto _1142;
  } else {
    goto _1143;
  }

_1142:
  *((uint64_t*)&_261) = _325;
  *(void**)(((&((uint8_t*)(&_257))[((int64_t)16)]))) = _324;
  julia_throw_boundserror_10(_255, _324, (&_261));
  __builtin_unreachable();

_1143:
  _326 = *(void**)_324;
  _327 = ((&((uint8_t*)_326)[((int64_t)(_325 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_327)[((int64_t)-16)]))) = _282;
  *(uint8_t*)(((&((uint8_t*)_327)[((int64_t)-15)]))) = _283;
  *(uint32_t*)(((&((uint8_t*)_327)[((int64_t)-12)]))) = _284;
  *(uint64_t*)(((&((uint8_t*)_327)[((int64_t)-8)]))) = (llvm_add_u64(_285, 1));
  julia_emit_11((&_260), _255, _256, 60, 1);
  _328__PHI_TEMPORARY = (&_260);   /* for PHI node */
  goto _1144;

_1144:
  _328 = _328__PHI_TEMPORARY;
  _329 = memcpy(_254, _328, 32);
  _330 = *(void**)(((&((uint8_t*)(&_257))[((int64_t)8)])));
  *(void**)_255 = _330;
  return;
_1141:
  _331 = *(void**)_277;
  _332 = *(uint64_t*)(((&((uint8_t*)_331)[((int64_t)16)])));
  if ((_332 == UINT64_C(0))) {
    goto _1145;
  } else {
    goto _1146;
  }

_1145:
  *((uint64_t*)&_263) = _332;
  *(void**)(((&((uint8_t*)(&_257))[((int64_t)16)]))) = _331;
  julia_throw_boundserror_10(_255, _331, (&_263));
  __builtin_unreachable();

_1146:
  _333 = *(void**)_331;
  _334 = ((&((uint8_t*)_333)[((int64_t)(_332 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_334)[((int64_t)-16)]))) = _282;
  *(uint8_t*)(((&((uint8_t*)_334)[((int64_t)-15)]))) = _283;
  *(uint32_t*)(((&((uint8_t*)_334)[((int64_t)-12)]))) = _284;
  *(uint64_t*)(((&((uint8_t*)_334)[((int64_t)-8)]))) = (llvm_add_u64(_285, -1));
  julia_emit_11((&_262), _255, _256, 61, 1);
  _328__PHI_TEMPORARY = (&_262);   /* for PHI node */
  goto _1144;

_1139:
  julia__next_token_9((&_264), _255, _256, _323);
  _328__PHI_TEMPORARY = (&_264);   /* for PHI node */
  goto _1144;

_1131:
  _335 = ((&((uint8_t*)_256)[((int64_t)32)]));
  _336 = *(uint64_t*)_335;
  _337 = ((&((uint8_t*)_256)[((int64_t)40)]));
  _338 = llvm_lshr_u64(_336, 32);
  _339 = ((uint32_t)_338);
  _340 = ((&((uint8_t*)_256)[((int64_t)16)]));
  _341 = *(uint16_t*)_340;
  switch (_341) {
  default:
    _469__PHI_TEMPORARY = _339;   /* for PHI node */
    goto _1147;
  case ((uint16_t)534):
    goto _1148;
  case ((uint16_t)3):
    goto _1149;
  }

_1148:
  _342 = *(uint64_t*)_335;
  _343 = llvm_lshr_u64(_342, 32);
  _344 = ((uint32_t)_343);
  switch (_344) {
  default:
    goto _1150;
  case 671088640u:
    goto _1151;
  case 4294967295u:
    _469__PHI_TEMPORARY = _344;   /* for PHI node */
    goto _1147;
  }

_1151:
  _345 = *(void**)_256;
  _346 = ((&((uint8_t*)_345)[((int64_t)16)]));
  _347 = *(uint64_t*)_346;
  _348 = ((&((uint8_t*)_345)[((int64_t)8)]));
  _349 = *(uint64_t*)_348;
  if ((((int64_t)_349) > ((int64_t)_347))) {
    goto _1152;
  } else {
    _366__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1153;
  }

_1152:
  _350 = *(void**)_345;
  _351 = *(uint8_t*)(((&((uint8_t*)_350)[((int64_t)_347)])));
  *(uint64_t*)_346 = (llvm_add_u64(_347, 1));
  _352 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_351)), 0);
  _353 = llvm_sub_u8(32, (llvm_shl_u8(_352, 3)));
  _354 = (((uint32_t)(uint8_t)_351)) << 24;
  if ((((uint8_t)_353) > ((uint8_t)((uint8_t)16)))) {
    _366__PHI_TEMPORARY = _354;   /* for PHI node */
    goto _1153;
  } else {
    _355__PHI_TEMPORARY = 16;   /* for PHI node */
    _356__PHI_TEMPORARY = _354;   /* for PHI node */
    goto _1154;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1154:
  _355 = _355__PHI_TEMPORARY;
  _356 = _356__PHI_TEMPORARY;
  if (((((int64_t)_355) < ((int64_t)UINT64_C(0))) | (((uint64_t)_355) < ((uint64_t)(((uint64_t)(uint8_t)_353)))))) {
    _366__PHI_TEMPORARY = _356;   /* for PHI node */
    goto _1153;
  } else {
    goto _1155;
  }

_1155:
  _357 = *(uint64_t*)_346;
  _358 = *(uint64_t*)_348;
  if ((((int64_t)_358) > ((int64_t)_357))) {
    goto _1156;
  } else {
    _366__PHI_TEMPORARY = _356;   /* for PHI node */
    goto _1153;
  }

_1156:
  _359 = *(void**)_345;
  _360 = *(uint8_t*)(((&((uint8_t*)_359)[((int64_t)_357)])));
  if ((((int8_t)_360) > ((int8_t)((uint8_t)-65)))) {
    _366__PHI_TEMPORARY = _356;   /* for PHI node */
    goto _1153;
  } else {
    goto _1157;
  }

_1157:
  _361 = llvm_select_u32((((int64_t)_357) < ((int64_t)_358)), (((uint32_t)(uint8_t)_360)), 0);
  _362 = *(uint64_t*)_346;
  *(uint64_t*)_346 = (llvm_add_u64(_362, 1));
  _363 = llvm_neg_u64(_355);
  _364 = _356 | (llvm_select_u32((((int64_t)_355) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_363) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_361, (((uint32_t)_363)))))), (llvm_select_u32((((uint64_t)_355) > ((uint64_t)UINT64_C(31))), 0, (_361 << (((uint32_t)_355)))))));
  _365 = llvm_add_u64(_355, -8);
  _355__PHI_TEMPORARY = _365;   /* for PHI node */
  _356__PHI_TEMPORARY = _364;   /* for PHI node */
  goto _1154;

  } while (1); /* end of syntactic loop '' */
_1153:
  _366 = _366__PHI_TEMPORARY;
  _367 = *(uint64_t*)_335;
  _368 = *(uint64_t*)_337;
  _369 = jsyn_cbe_fshl_i64(_368, _367, 32);
  _370 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_366)), _368, 32);
  *(uint64_t*)_335 = _369;
  *(uint64_t*)_337 = _370;
  _371 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _372 = *(uint64_t*)_371;
  _373 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _374 = *(uint64_t*)_373;
  _375 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _376 = *(uint64_t*)_375;
  _377 = *(void**)_256;
  _378 = *(uint64_t*)(((&((uint8_t*)_377)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_256)[((int64_t)48)]))) = _372;
  *(uint64_t*)_371 = _374;
  *(uint64_t*)_373 = _376;
  *(uint64_t*)_375 = _378;
  _379 = *(void**)_277;
  _380 = *(uint64_t*)(((&((uint8_t*)_379)[((int64_t)16)])));
  if ((_380 == UINT64_C(0))) {
    goto _1158;
  } else {
    goto _1159;
  }

_1158:
  *((uint64_t*)&_266) = _380;
  *(void**)(((&((uint8_t*)(&_257))[((int64_t)16)]))) = _379;
  julia_throw_boundserror_10(_255, _379, (&_266));
  __builtin_unreachable();

_1159:
  _381 = *(void**)_379;
  _382 = ((&((uint8_t*)_381)[((int64_t)(_380 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_382)[((int64_t)-16)]))) = _282;
  *(uint8_t*)(((&((uint8_t*)_382)[((int64_t)-15)]))) = _283;
  *(uint32_t*)(((&((uint8_t*)_382)[((int64_t)-12)]))) = _284;
  *(uint64_t*)(((&((uint8_t*)_382)[((int64_t)-8)]))) = (llvm_add_u64(_285, 1));
  julia_emit_11((&_265), _255, _256, 60, 1);
  _328__PHI_TEMPORARY = (&_265);   /* for PHI node */
  goto _1144;

_1150:
  _383 = llvm_OC_ctlz_OC_i32((_344 ^ -1), 0);
  _384 = ((uint64_t)(uint32_t)_383);
  _385 = llvm_OC_cttz_OC_i32(_344, 0);
  _386 = _385 & 56;
  _387 = ((uint64_t)(uint32_t)_386);
  _388 = llvm_select_bool((((uint32_t)_385) < ((uint32_t)32u)), ((llvm_lshr_u32(((_344 & 12632256) ^ 8421504), _386)) != 0u), 0);
  _389 = (((_344 & -33554432) == 3221225472u) | ((_344 & -2097152) == 3766484992u)) | ((_344 & -1048576) == 4034920448u);
  if (((((((_383 == 1u) | (((uint64_t)(llvm_add_u64((_384 << 3), _387))) > ((uint64_t)UINT64_C(32)))) | ((((uint64_t)_342) > ((uint64_t)UINT64_C(17122614319301787647))) & (((uint32_t)(llvm_add_u32(_344, 191905856))) < ((uint32_t)4193304640u)))) | (_343 == UINT64_C(4036993714))) | _388) | _389)) {
    _469__PHI_TEMPORARY = _344;   /* for PHI node */
    goto _1147;
  } else {
    goto _1160;
  }

_1160:
  _390 = llvm_lshr_u32(_344, 24);
  if ((((int64_t)_342) < ((int64_t)UINT64_C(0)))) {
    goto _1161;
  } else {
    _393__PHI_TEMPORARY = _390;   /* for PHI node */
    goto _1162;
  }

_1161:
  if ((((_383 == 1u) | (((uint64_t)(llvm_add_u64((_384 << 3), _387))) > ((uint64_t)UINT64_C(32)))) | (_388 | _389))) {
    goto _1163;
  } else {
    goto _1164;
  }

_1163:
  julia_throw_invalid_char_12(_255, _344);
  __builtin_unreachable();

_1164:
  _391 = llvm_select_u32((((uint32_t)_385) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _383)) & _344), _386)), 0);
  _392 = (((_391 & 127) | ((llvm_lshr_u32(_391, 2)) & 8128)) | ((llvm_lshr_u32(_391, 4)) & 520192)) | ((llvm_lshr_u32(_391, 6)) & 33292288);
  _393__PHI_TEMPORARY = _392;   /* for PHI node */
  goto _1162;

_1162:
  _393 = _393__PHI_TEMPORARY;
  _394 = jsk_jl_id_start_char(_393);
  if ((_394 == 0u)) {
    _469__PHI_TEMPORARY = _344;   /* for PHI node */
    goto _1147;
  } else {
    goto _1165;
  }

_1165:
  _395 = *(void**)_256;
  _396 = ((&((uint8_t*)_395)[((int64_t)16)]));
  _397 = *(uint64_t*)_396;
  _398 = ((&((uint8_t*)_395)[((int64_t)8)]));
  _399 = *(uint64_t*)_398;
  if ((((int64_t)_399) > ((int64_t)_397))) {
    goto _1166;
  } else {
    _416__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1167;
  }

_1166:
  _400 = *(void**)_395;
  _401 = *(uint8_t*)(((&((uint8_t*)_400)[((int64_t)_397)])));
  *(uint64_t*)_396 = (llvm_add_u64(_397, 1));
  _402 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_401)), 0);
  _403 = llvm_sub_u8(32, (llvm_shl_u8(_402, 3)));
  _404 = (((uint32_t)(uint8_t)_401)) << 24;
  if ((((uint8_t)_403) > ((uint8_t)((uint8_t)16)))) {
    _416__PHI_TEMPORARY = _404;   /* for PHI node */
    goto _1167;
  } else {
    _405__PHI_TEMPORARY = 16;   /* for PHI node */
    _406__PHI_TEMPORARY = _404;   /* for PHI node */
    goto _1168;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1168:
  _405 = _405__PHI_TEMPORARY;
  _406 = _406__PHI_TEMPORARY;
  if (((((int64_t)_405) < ((int64_t)UINT64_C(0))) | (((uint64_t)_405) < ((uint64_t)(((uint64_t)(uint8_t)_403)))))) {
    _416__PHI_TEMPORARY = _406;   /* for PHI node */
    goto _1167;
  } else {
    goto _1169;
  }

_1169:
  _407 = *(uint64_t*)_396;
  _408 = *(uint64_t*)_398;
  if ((((int64_t)_408) > ((int64_t)_407))) {
    goto _1170;
  } else {
    _416__PHI_TEMPORARY = _406;   /* for PHI node */
    goto _1167;
  }

_1170:
  _409 = *(void**)_395;
  _410 = *(uint8_t*)(((&((uint8_t*)_409)[((int64_t)_407)])));
  if ((((int8_t)_410) > ((int8_t)((uint8_t)-65)))) {
    _416__PHI_TEMPORARY = _406;   /* for PHI node */
    goto _1167;
  } else {
    goto _1171;
  }

_1171:
  _411 = llvm_select_u32((((int64_t)_407) < ((int64_t)_408)), (((uint32_t)(uint8_t)_410)), 0);
  _412 = *(uint64_t*)_396;
  *(uint64_t*)_396 = (llvm_add_u64(_412, 1));
  _413 = llvm_neg_u64(_405);
  _414 = _406 | (llvm_select_u32((((int64_t)_405) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_413) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_411, (((uint32_t)_413)))))), (llvm_select_u32((((uint64_t)_405) > ((uint64_t)UINT64_C(31))), 0, (_411 << (((uint32_t)_405)))))));
  _415 = llvm_add_u64(_405, -8);
  _405__PHI_TEMPORARY = _415;   /* for PHI node */
  _406__PHI_TEMPORARY = _414;   /* for PHI node */
  goto _1168;

  } while (1); /* end of syntactic loop '' */
_1167:
  _416 = _416__PHI_TEMPORARY;
  _417 = *(uint64_t*)_335;
  _418 = *(uint64_t*)_337;
  _419 = jsyn_cbe_fshl_i64(_418, _417, 32);
  _420 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_416)), _418, 32);
  *(uint64_t*)_335 = _419;
  *(uint64_t*)_337 = _420;
  _421 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _422 = *(uint64_t*)_421;
  _423 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _424 = *(uint64_t*)_423;
  _425 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _426 = *(uint64_t*)_425;
  _427 = *(void**)_256;
  _428 = *(uint64_t*)(((&((uint8_t*)_427)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_256)[((int64_t)48)]))) = _422;
  *(uint64_t*)_421 = _424;
  *(uint64_t*)_423 = _426;
  *(uint64_t*)_425 = _428;
  _429 = *(uint64_t*)_335;
  julia_lex_identifier_13((&_267), _255, _256, (((uint32_t)_429)));
  _328__PHI_TEMPORARY = (&_267);   /* for PHI node */
  goto _1144;

_1149:
  if ((_338 == UINT64_C(4294967295))) {
    _469__PHI_TEMPORARY = _339;   /* for PHI node */
    goto _1147;
  } else {
    goto _1172;
  }

_1172:
  _430 = julia_is_operator_start_char_14(_255, _339);
  _431 = ((bool)_430&1u);
  if ((((bool)_430&1u))) {
    _434__PHI_TEMPORARY = _431;   /* for PHI node */
    goto _1173;
  } else {
    goto _1174;
  }

_1174:
  _432 = julia_is_never_id_char_15(_255, _339);
  _433 = ((bool)_432&1u);
  _434__PHI_TEMPORARY = _433;   /* for PHI node */
  goto _1173;

_1173:
  _434 = _434__PHI_TEMPORARY;
  if (_434) {
    _469__PHI_TEMPORARY = _339;   /* for PHI node */
    goto _1147;
  } else {
    goto _1175;
  }

_1175:
  _435 = *(void**)_256;
  _436 = ((&((uint8_t*)_435)[((int64_t)16)]));
  _437 = *(uint64_t*)_436;
  _438 = ((&((uint8_t*)_435)[((int64_t)8)]));
  _439 = *(uint64_t*)_438;
  if ((((int64_t)_439) > ((int64_t)_437))) {
    goto _1176;
  } else {
    _456__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1177;
  }

_1176:
  _440 = *(void**)_435;
  _441 = *(uint8_t*)(((&((uint8_t*)_440)[((int64_t)_437)])));
  *(uint64_t*)_436 = (llvm_add_u64(_437, 1));
  _442 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_441)), 0);
  _443 = llvm_sub_u8(32, (llvm_shl_u8(_442, 3)));
  _444 = (((uint32_t)(uint8_t)_441)) << 24;
  if ((((uint8_t)_443) > ((uint8_t)((uint8_t)16)))) {
    _456__PHI_TEMPORARY = _444;   /* for PHI node */
    goto _1177;
  } else {
    _445__PHI_TEMPORARY = 16;   /* for PHI node */
    _446__PHI_TEMPORARY = _444;   /* for PHI node */
    goto _1178;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1178:
  _445 = _445__PHI_TEMPORARY;
  _446 = _446__PHI_TEMPORARY;
  if (((((int64_t)_445) < ((int64_t)UINT64_C(0))) | (((uint64_t)_445) < ((uint64_t)(((uint64_t)(uint8_t)_443)))))) {
    _456__PHI_TEMPORARY = _446;   /* for PHI node */
    goto _1177;
  } else {
    goto _1179;
  }

_1179:
  _447 = *(uint64_t*)_436;
  _448 = *(uint64_t*)_438;
  if ((((int64_t)_448) > ((int64_t)_447))) {
    goto _1180;
  } else {
    _456__PHI_TEMPORARY = _446;   /* for PHI node */
    goto _1177;
  }

_1180:
  _449 = *(void**)_435;
  _450 = *(uint8_t*)(((&((uint8_t*)_449)[((int64_t)_447)])));
  if ((((int8_t)_450) > ((int8_t)((uint8_t)-65)))) {
    _456__PHI_TEMPORARY = _446;   /* for PHI node */
    goto _1177;
  } else {
    goto _1181;
  }

_1181:
  _451 = llvm_select_u32((((int64_t)_447) < ((int64_t)_448)), (((uint32_t)(uint8_t)_450)), 0);
  _452 = *(uint64_t*)_436;
  *(uint64_t*)_436 = (llvm_add_u64(_452, 1));
  _453 = llvm_neg_u64(_445);
  _454 = _446 | (llvm_select_u32((((int64_t)_445) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_453) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_451, (((uint32_t)_453)))))), (llvm_select_u32((((uint64_t)_445) > ((uint64_t)UINT64_C(31))), 0, (_451 << (((uint32_t)_445)))))));
  _455 = llvm_add_u64(_445, -8);
  _445__PHI_TEMPORARY = _455;   /* for PHI node */
  _446__PHI_TEMPORARY = _454;   /* for PHI node */
  goto _1178;

  } while (1); /* end of syntactic loop '' */
_1177:
  _456 = _456__PHI_TEMPORARY;
  _457 = *(uint64_t*)_335;
  _458 = *(uint64_t*)_337;
  _459 = jsyn_cbe_fshl_i64(_458, _457, 32);
  _460 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_456)), _458, 32);
  *(uint64_t*)_335 = _459;
  *(uint64_t*)_337 = _460;
  _461 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _462 = *(uint64_t*)_461;
  _463 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _464 = *(uint64_t*)_463;
  _465 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _466 = *(uint64_t*)_465;
  _467 = *(void**)_256;
  _468 = *(uint64_t*)(((&((uint8_t*)_467)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_256)[((int64_t)48)]))) = _462;
  *(uint64_t*)_461 = _464;
  *(uint64_t*)_463 = _466;
  *(uint64_t*)_465 = _468;
  julia_emit_11((&_275), _255, _256, 758, 1);
  _328__PHI_TEMPORARY = (&_275);   /* for PHI node */
  goto _1144;

_1147:
  _469 = _469__PHI_TEMPORARY;
  if ((_469 == 4294967295u)) {
    goto _1182;
  } else {
    goto _1183;
  }

_1182:
  julia_emit_11((&_268), _255, _256, 752, 1);
  _328__PHI_TEMPORARY = (&_268);   /* for PHI node */
  goto _1144;

_1183:
  _470 = ((bool)_283&1u);
  if (((_469 != 603979776u) | _470)) {
    goto _1184;
  } else {
    goto _1185;
  }

_1185:
  _471 = *(void**)_256;
  _472 = ((&((uint8_t*)_471)[((int64_t)16)]));
  _473 = *(uint64_t*)_472;
  _474 = ((&((uint8_t*)_471)[((int64_t)8)]));
  _475 = *(uint64_t*)_474;
  if ((((int64_t)_475) > ((int64_t)_473))) {
    goto _1186;
  } else {
    _492__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1187;
  }

_1186:
  _476 = *(void**)_471;
  _477 = *(uint8_t*)(((&((uint8_t*)_476)[((int64_t)_473)])));
  *(uint64_t*)_472 = (llvm_add_u64(_473, 1));
  _478 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_477)), 0);
  _479 = llvm_sub_u8(32, (llvm_shl_u8(_478, 3)));
  _480 = (((uint32_t)(uint8_t)_477)) << 24;
  if ((((uint8_t)_479) > ((uint8_t)((uint8_t)16)))) {
    _492__PHI_TEMPORARY = _480;   /* for PHI node */
    goto _1187;
  } else {
    _481__PHI_TEMPORARY = 16;   /* for PHI node */
    _482__PHI_TEMPORARY = _480;   /* for PHI node */
    goto _1188;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1188:
  _481 = _481__PHI_TEMPORARY;
  _482 = _482__PHI_TEMPORARY;
  if (((((int64_t)_481) < ((int64_t)UINT64_C(0))) | (((uint64_t)_481) < ((uint64_t)(((uint64_t)(uint8_t)_479)))))) {
    _492__PHI_TEMPORARY = _482;   /* for PHI node */
    goto _1187;
  } else {
    goto _1189;
  }

_1189:
  _483 = *(uint64_t*)_472;
  _484 = *(uint64_t*)_474;
  if ((((int64_t)_484) > ((int64_t)_483))) {
    goto _1190;
  } else {
    _492__PHI_TEMPORARY = _482;   /* for PHI node */
    goto _1187;
  }

_1190:
  _485 = *(void**)_471;
  _486 = *(uint8_t*)(((&((uint8_t*)_485)[((int64_t)_483)])));
  if ((((int8_t)_486) > ((int8_t)((uint8_t)-65)))) {
    _492__PHI_TEMPORARY = _482;   /* for PHI node */
    goto _1187;
  } else {
    goto _1191;
  }

_1191:
  _487 = llvm_select_u32((((int64_t)_483) < ((int64_t)_484)), (((uint32_t)(uint8_t)_486)), 0);
  _488 = *(uint64_t*)_472;
  *(uint64_t*)_472 = (llvm_add_u64(_488, 1));
  _489 = llvm_neg_u64(_481);
  _490 = _482 | (llvm_select_u32((((int64_t)_481) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_489) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_487, (((uint32_t)_489)))))), (llvm_select_u32((((uint64_t)_481) > ((uint64_t)UINT64_C(31))), 0, (_487 << (((uint32_t)_481)))))));
  _491 = llvm_add_u64(_481, -8);
  _481__PHI_TEMPORARY = _491;   /* for PHI node */
  _482__PHI_TEMPORARY = _490;   /* for PHI node */
  goto _1188;

  } while (1); /* end of syntactic loop '' */
_1187:
  _492 = _492__PHI_TEMPORARY;
  _493 = *(uint64_t*)_335;
  _494 = *(uint64_t*)_337;
  _495 = jsyn_cbe_fshl_i64(_494, _493, 32);
  _496 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_492)), _494, 32);
  *(uint64_t*)_335 = _495;
  *(uint64_t*)_337 = _496;
  _497 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _498 = *(uint64_t*)_497;
  _499 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _500 = *(uint64_t*)_499;
  _501 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _502 = *(uint64_t*)_501;
  _503 = *(void**)_256;
  _504 = *(uint64_t*)(((&((uint8_t*)_503)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_256)[((int64_t)48)]))) = _498;
  *(uint64_t*)_497 = _500;
  *(uint64_t*)_499 = _502;
  *(uint64_t*)_501 = _504;
  julia_emit_11((&_269), _255, _256, 534, 1);
  _328__PHI_TEMPORARY = (&_269);   /* for PHI node */
  goto _1144;

_1184:
  if (((_469 != 1543503872u) | _470)) {
    goto _1192;
  } else {
    goto _1193;
  }

_1193:
  _505 = *(uint64_t*)_337;
  _506 = ((uint32_t)_505);
  switch (_506) {
  default:
    goto _1192;
  case 218103808u:
    goto _1194;
  case 167772160u:
    goto _1194;
  }

_1194:
  _507 = *(void**)_256;
  _508 = ((&((uint8_t*)_507)[((int64_t)16)]));
  _509 = *(uint64_t*)_508;
  _510 = ((&((uint8_t*)_507)[((int64_t)8)]));
  _511 = *(uint64_t*)_510;
  if ((((int64_t)_511) > ((int64_t)_509))) {
    goto _1195;
  } else {
    _528__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1196;
  }

_1195:
  _512 = *(void**)_507;
  _513 = *(uint8_t*)(((&((uint8_t*)_512)[((int64_t)_509)])));
  *(uint64_t*)_508 = (llvm_add_u64(_509, 1));
  _514 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_513)), 0);
  _515 = llvm_sub_u8(32, (llvm_shl_u8(_514, 3)));
  _516 = (((uint32_t)(uint8_t)_513)) << 24;
  if ((((uint8_t)_515) > ((uint8_t)((uint8_t)16)))) {
    _528__PHI_TEMPORARY = _516;   /* for PHI node */
    goto _1196;
  } else {
    _517__PHI_TEMPORARY = 16;   /* for PHI node */
    _518__PHI_TEMPORARY = _516;   /* for PHI node */
    goto _1197;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1197:
  _517 = _517__PHI_TEMPORARY;
  _518 = _518__PHI_TEMPORARY;
  if (((((int64_t)_517) < ((int64_t)UINT64_C(0))) | (((uint64_t)_517) < ((uint64_t)(((uint64_t)(uint8_t)_515)))))) {
    _528__PHI_TEMPORARY = _518;   /* for PHI node */
    goto _1196;
  } else {
    goto _1198;
  }

_1198:
  _519 = *(uint64_t*)_508;
  _520 = *(uint64_t*)_510;
  if ((((int64_t)_520) > ((int64_t)_519))) {
    goto _1199;
  } else {
    _528__PHI_TEMPORARY = _518;   /* for PHI node */
    goto _1196;
  }

_1199:
  _521 = *(void**)_507;
  _522 = *(uint8_t*)(((&((uint8_t*)_521)[((int64_t)_519)])));
  if ((((int8_t)_522) > ((int8_t)((uint8_t)-65)))) {
    _528__PHI_TEMPORARY = _518;   /* for PHI node */
    goto _1196;
  } else {
    goto _1200;
  }

_1200:
  _523 = llvm_select_u32((((int64_t)_519) < ((int64_t)_520)), (((uint32_t)(uint8_t)_522)), 0);
  _524 = *(uint64_t*)_508;
  *(uint64_t*)_508 = (llvm_add_u64(_524, 1));
  _525 = llvm_neg_u64(_517);
  _526 = _518 | (llvm_select_u32((((int64_t)_517) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_525) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_523, (((uint32_t)_525)))))), (llvm_select_u32((((uint64_t)_517) > ((uint64_t)UINT64_C(31))), 0, (_523 << (((uint32_t)_517)))))));
  _527 = llvm_add_u64(_517, -8);
  _517__PHI_TEMPORARY = _527;   /* for PHI node */
  _518__PHI_TEMPORARY = _526;   /* for PHI node */
  goto _1197;

  } while (1); /* end of syntactic loop '' */
_1196:
  _528 = _528__PHI_TEMPORARY;
  _529 = *(uint64_t*)_335;
  _530 = *(uint64_t*)_337;
  _531 = jsyn_cbe_fshl_i64(_530, _529, 32);
  _532 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_528)), _530, 32);
  *(uint64_t*)_335 = _531;
  *(uint64_t*)_337 = _532;
  _533 = ((&((uint8_t*)_256)[((int64_t)48)]));
  _534 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _535 = *(uint64_t*)_534;
  _536 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _537 = *(uint64_t*)_536;
  _538 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _539 = *(uint64_t*)_538;
  _540 = *(void**)_256;
  _541 = *(uint64_t*)(((&((uint8_t*)_540)[((int64_t)16)])));
  *(uint64_t*)_533 = _535;
  *(uint64_t*)_534 = _537;
  *(uint64_t*)_536 = _539;
  *(uint64_t*)_538 = _541;
  _542 = *(void**)_256;
  _543 = ((&((uint8_t*)_542)[((int64_t)16)]));
  _544 = *(uint64_t*)_543;
  _545 = ((&((uint8_t*)_542)[((int64_t)8)]));
  _546 = *(uint64_t*)_545;
  if ((((int64_t)_546) > ((int64_t)_544))) {
    goto _1201;
  } else {
    _563__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1202;
  }

_1201:
  _547 = *(void**)_542;
  _548 = *(uint8_t*)(((&((uint8_t*)_547)[((int64_t)_544)])));
  *(uint64_t*)_543 = (llvm_add_u64(_544, 1));
  _549 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_548)), 0);
  _550 = llvm_sub_u8(32, (llvm_shl_u8(_549, 3)));
  _551 = (((uint32_t)(uint8_t)_548)) << 24;
  if ((((uint8_t)_550) > ((uint8_t)((uint8_t)16)))) {
    _563__PHI_TEMPORARY = _551;   /* for PHI node */
    goto _1202;
  } else {
    _552__PHI_TEMPORARY = 16;   /* for PHI node */
    _553__PHI_TEMPORARY = _551;   /* for PHI node */
    goto _1203;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1203:
  _552 = _552__PHI_TEMPORARY;
  _553 = _553__PHI_TEMPORARY;
  if (((((int64_t)_552) < ((int64_t)UINT64_C(0))) | (((uint64_t)_552) < ((uint64_t)(((uint64_t)(uint8_t)_550)))))) {
    _563__PHI_TEMPORARY = _553;   /* for PHI node */
    goto _1202;
  } else {
    goto _1204;
  }

_1204:
  _554 = *(uint64_t*)_543;
  _555 = *(uint64_t*)_545;
  if ((((int64_t)_555) > ((int64_t)_554))) {
    goto _1205;
  } else {
    _563__PHI_TEMPORARY = _553;   /* for PHI node */
    goto _1202;
  }

_1205:
  _556 = *(void**)_542;
  _557 = *(uint8_t*)(((&((uint8_t*)_556)[((int64_t)_554)])));
  if ((((int8_t)_557) > ((int8_t)((uint8_t)-65)))) {
    _563__PHI_TEMPORARY = _553;   /* for PHI node */
    goto _1202;
  } else {
    goto _1206;
  }

_1206:
  _558 = llvm_select_u32((((int64_t)_554) < ((int64_t)_555)), (((uint32_t)(uint8_t)_557)), 0);
  _559 = *(uint64_t*)_543;
  *(uint64_t*)_543 = (llvm_add_u64(_559, 1));
  _560 = llvm_neg_u64(_552);
  _561 = _553 | (llvm_select_u32((((int64_t)_552) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_560) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_558, (((uint32_t)_560)))))), (llvm_select_u32((((uint64_t)_552) > ((uint64_t)UINT64_C(31))), 0, (_558 << (((uint32_t)_552)))))));
  _562 = llvm_add_u64(_552, -8);
  _552__PHI_TEMPORARY = _562;   /* for PHI node */
  _553__PHI_TEMPORARY = _561;   /* for PHI node */
  goto _1203;

  } while (1); /* end of syntactic loop '' */
_1202:
  _563 = _563__PHI_TEMPORARY;
  _564 = *(uint64_t*)_335;
  _565 = *(uint64_t*)_337;
  _566 = jsyn_cbe_fshl_i64(_565, _564, 32);
  _567 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_563)), _565, 32);
  *(uint64_t*)_335 = _566;
  *(uint64_t*)_337 = _567;
  _568 = *(uint64_t*)_534;
  _569 = *(uint64_t*)_536;
  _570 = *(uint64_t*)_538;
  _571 = *(void**)_256;
  _572 = *(uint64_t*)(((&((uint8_t*)_571)[((int64_t)16)])));
  *(uint64_t*)_533 = _568;
  *(uint64_t*)_534 = _569;
  *(uint64_t*)_536 = _570;
  *(uint64_t*)_538 = _572;
  if ((_506 == 218103808u)) {
    goto _1207;
  } else {
    goto _1208;
  }

_1207:
  _573 = *(uint64_t*)_335;
  if (((_573 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1209;
  } else {
    goto _1208;
  }

_1209:
  _574 = *(void**)_256;
  _575 = ((&((uint8_t*)_574)[((int64_t)16)]));
  _576 = *(uint64_t*)_575;
  _577 = ((&((uint8_t*)_574)[((int64_t)8)]));
  _578 = *(uint64_t*)_577;
  if ((((int64_t)_578) > ((int64_t)_576))) {
    goto _1210;
  } else {
    _595__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1211;
  }

_1210:
  _579 = *(void**)_574;
  _580 = *(uint8_t*)(((&((uint8_t*)_579)[((int64_t)_576)])));
  *(uint64_t*)_575 = (llvm_add_u64(_576, 1));
  _581 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_580)), 0);
  _582 = llvm_sub_u8(32, (llvm_shl_u8(_581, 3)));
  _583 = (((uint32_t)(uint8_t)_580)) << 24;
  if ((((uint8_t)_582) > ((uint8_t)((uint8_t)16)))) {
    _595__PHI_TEMPORARY = _583;   /* for PHI node */
    goto _1211;
  } else {
    _584__PHI_TEMPORARY = 16;   /* for PHI node */
    _585__PHI_TEMPORARY = _583;   /* for PHI node */
    goto _1212;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1212:
  _584 = _584__PHI_TEMPORARY;
  _585 = _585__PHI_TEMPORARY;
  if (((((int64_t)_584) < ((int64_t)UINT64_C(0))) | (((uint64_t)_584) < ((uint64_t)(((uint64_t)(uint8_t)_582)))))) {
    _595__PHI_TEMPORARY = _585;   /* for PHI node */
    goto _1211;
  } else {
    goto _1213;
  }

_1213:
  _586 = *(uint64_t*)_575;
  _587 = *(uint64_t*)_577;
  if ((((int64_t)_587) > ((int64_t)_586))) {
    goto _1214;
  } else {
    _595__PHI_TEMPORARY = _585;   /* for PHI node */
    goto _1211;
  }

_1214:
  _588 = *(void**)_574;
  _589 = *(uint8_t*)(((&((uint8_t*)_588)[((int64_t)_586)])));
  if ((((int8_t)_589) > ((int8_t)((uint8_t)-65)))) {
    _595__PHI_TEMPORARY = _585;   /* for PHI node */
    goto _1211;
  } else {
    goto _1215;
  }

_1215:
  _590 = llvm_select_u32((((int64_t)_586) < ((int64_t)_587)), (((uint32_t)(uint8_t)_589)), 0);
  _591 = *(uint64_t*)_575;
  *(uint64_t*)_575 = (llvm_add_u64(_591, 1));
  _592 = llvm_neg_u64(_584);
  _593 = _585 | (llvm_select_u32((((int64_t)_584) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_592) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_590, (((uint32_t)_592)))))), (llvm_select_u32((((uint64_t)_584) > ((uint64_t)UINT64_C(31))), 0, (_590 << (((uint32_t)_584)))))));
  _594 = llvm_add_u64(_584, -8);
  _584__PHI_TEMPORARY = _594;   /* for PHI node */
  _585__PHI_TEMPORARY = _593;   /* for PHI node */
  goto _1212;

  } while (1); /* end of syntactic loop '' */
_1211:
  _595 = _595__PHI_TEMPORARY;
  _596 = *(uint64_t*)_335;
  _597 = *(uint64_t*)_337;
  _598 = jsyn_cbe_fshl_i64(_597, _596, 32);
  _599 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_595)), _597, 32);
  *(uint64_t*)_335 = _598;
  *(uint64_t*)_337 = _599;
  _600 = *(uint64_t*)_534;
  _601 = *(uint64_t*)_536;
  _602 = *(uint64_t*)_538;
  _603 = *(void**)_256;
  _604 = *(uint64_t*)(((&((uint8_t*)_603)[((int64_t)16)])));
  *(uint64_t*)_533 = _600;
  *(uint64_t*)_534 = _601;
  *(uint64_t*)_536 = _602;
  *(uint64_t*)_538 = _604;
  goto _1208;

_1208:
  _605 = *(uint64_t*)_335;
  switch ((((uint32_t)(llvm_lshr_u64(_605, 32))))) {
  default:
    goto _1216;
  case 536870912u:
    goto _1217;
  case 150994944u:
    goto _1217;
  }

_1216:
  julia_emit_11((&_270), _255, _256, 1, 1);
  _328__PHI_TEMPORARY = (&_270);   /* for PHI node */
  goto _1144;

_1217:
  _606 = *(void**)_256;
  _607 = ((&((uint8_t*)_606)[((int64_t)16)]));
  _608 = *(uint64_t*)_607;
  _609 = ((&((uint8_t*)_606)[((int64_t)8)]));
  _610 = *(uint64_t*)_609;
  if ((((int64_t)_610) > ((int64_t)_608))) {
    goto _1218;
  } else {
    _595__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1211;
  }

_1218:
  _611 = *(void**)_606;
  _612 = *(uint8_t*)(((&((uint8_t*)_611)[((int64_t)_608)])));
  *(uint64_t*)_607 = (llvm_add_u64(_608, 1));
  _613 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_612)), 0);
  _614 = llvm_sub_u8(32, (llvm_shl_u8(_613, 3)));
  _615 = (((uint32_t)(uint8_t)_612)) << 24;
  if ((((uint8_t)_614) > ((uint8_t)((uint8_t)16)))) {
    _595__PHI_TEMPORARY = _615;   /* for PHI node */
    goto _1211;
  } else {
    _616__PHI_TEMPORARY = 16;   /* for PHI node */
    _617__PHI_TEMPORARY = _615;   /* for PHI node */
    goto _1219;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1219:
  _616 = _616__PHI_TEMPORARY;
  _617 = _617__PHI_TEMPORARY;
  if (((((int64_t)_616) < ((int64_t)UINT64_C(0))) | (((uint64_t)_616) < ((uint64_t)(((uint64_t)(uint8_t)_614)))))) {
    _595__PHI_TEMPORARY = _617;   /* for PHI node */
    goto _1211;
  } else {
    goto _1220;
  }

_1220:
  _618 = *(uint64_t*)_607;
  _619 = *(uint64_t*)_609;
  if ((((int64_t)_619) > ((int64_t)_618))) {
    goto _1221;
  } else {
    _595__PHI_TEMPORARY = _617;   /* for PHI node */
    goto _1211;
  }

_1221:
  _620 = *(void**)_606;
  _621 = *(uint8_t*)(((&((uint8_t*)_620)[((int64_t)_618)])));
  if ((((int8_t)_621) > ((int8_t)((uint8_t)-65)))) {
    _595__PHI_TEMPORARY = _617;   /* for PHI node */
    goto _1211;
  } else {
    goto _1222;
  }

_1222:
  _622 = llvm_select_u32((((int64_t)_618) < ((int64_t)_619)), (((uint32_t)(uint8_t)_621)), 0);
  _623 = *(uint64_t*)_607;
  *(uint64_t*)_607 = (llvm_add_u64(_623, 1));
  _624 = llvm_neg_u64(_616);
  _625 = _617 | (llvm_select_u32((((int64_t)_616) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_624) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_622, (((uint32_t)_624)))))), (llvm_select_u32((((uint64_t)_616) > ((uint64_t)UINT64_C(31))), 0, (_622 << (((uint32_t)_616)))))));
  _626 = llvm_add_u64(_616, -8);
  _616__PHI_TEMPORARY = _626;   /* for PHI node */
  _617__PHI_TEMPORARY = _625;   /* for PHI node */
  goto _1219;

  } while (1); /* end of syntactic loop '' */
_1192:
  if ((_469 == _284)) {
    goto _1223;
  } else {
    goto _1224;
  }

_1223:
  _627 = ((bool)_282&1u);
  _628 = *(uint64_t*)_335;
  if (_627) {
    goto _1225;
  } else {
    _630__PHI_TEMPORARY = _628;   /* for PHI node */
    goto _1226;
  }

_1225:
  _629 = *(uint64_t*)_337;
  if ((llvm_select_bool((_284 == (((uint32_t)(llvm_lshr_u64(_628, 32))))), (_284 == (((uint32_t)_629))), 0))) {
    _630__PHI_TEMPORARY = _629;   /* for PHI node */
    goto _1226;
  } else {
    goto _1224;
  }

_1226:
  _630 = _630__PHI_TEMPORARY;
  if ((_284 == (((uint32_t)(llvm_lshr_u64(_630, 32)))))) {
    goto _1227;
  } else {
    goto _1224;
  }

_1227:
  _631 = *(uint16_t*)_340;
  if ((llvm_select_bool((_284 == 654311424u), (_631 == ((uint16_t)709)), 0))) {
    goto _1228;
  } else {
    goto _1229;
  }

_1228:
  _632 = *(uint64_t*)_337;
  if (((_632 & INT64_C(4294967295)) == UINT64_C(654311424))) {
    goto _1230;
  } else {
    goto _1229;
  }

_1230:
  _633 = *(void**)_256;
  _634 = ((&((uint8_t*)_633)[((int64_t)16)]));
  _635 = *(uint64_t*)_634;
  _636 = ((&((uint8_t*)_633)[((int64_t)8)]));
  _637 = *(uint64_t*)_636;
  if ((((int64_t)_637) > ((int64_t)_635))) {
    goto _1231;
  } else {
    _654__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1232;
  }

_1231:
  _638 = *(void**)_633;
  _639 = *(uint8_t*)(((&((uint8_t*)_638)[((int64_t)_635)])));
  *(uint64_t*)_634 = (llvm_add_u64(_635, 1));
  _640 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_639)), 0);
  _641 = llvm_sub_u8(32, (llvm_shl_u8(_640, 3)));
  _642 = (((uint32_t)(uint8_t)_639)) << 24;
  if ((((uint8_t)_641) > ((uint8_t)((uint8_t)16)))) {
    _654__PHI_TEMPORARY = _642;   /* for PHI node */
    goto _1232;
  } else {
    _643__PHI_TEMPORARY = 16;   /* for PHI node */
    _644__PHI_TEMPORARY = _642;   /* for PHI node */
    goto _1233;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1233:
  _643 = _643__PHI_TEMPORARY;
  _644 = _644__PHI_TEMPORARY;
  if (((((int64_t)_643) < ((int64_t)UINT64_C(0))) | (((uint64_t)_643) < ((uint64_t)(((uint64_t)(uint8_t)_641)))))) {
    _654__PHI_TEMPORARY = _644;   /* for PHI node */
    goto _1232;
  } else {
    goto _1234;
  }

_1234:
  _645 = *(uint64_t*)_634;
  _646 = *(uint64_t*)_636;
  if ((((int64_t)_646) > ((int64_t)_645))) {
    goto _1235;
  } else {
    _654__PHI_TEMPORARY = _644;   /* for PHI node */
    goto _1232;
  }

_1235:
  _647 = *(void**)_633;
  _648 = *(uint8_t*)(((&((uint8_t*)_647)[((int64_t)_645)])));
  if ((((int8_t)_648) > ((int8_t)((uint8_t)-65)))) {
    _654__PHI_TEMPORARY = _644;   /* for PHI node */
    goto _1232;
  } else {
    goto _1236;
  }

_1236:
  _649 = llvm_select_u32((((int64_t)_645) < ((int64_t)_646)), (((uint32_t)(uint8_t)_648)), 0);
  _650 = *(uint64_t*)_634;
  *(uint64_t*)_634 = (llvm_add_u64(_650, 1));
  _651 = llvm_neg_u64(_643);
  _652 = _644 | (llvm_select_u32((((int64_t)_643) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_651) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_649, (((uint32_t)_651)))))), (llvm_select_u32((((uint64_t)_643) > ((uint64_t)UINT64_C(31))), 0, (_649 << (((uint32_t)_643)))))));
  _653 = llvm_add_u64(_643, -8);
  _643__PHI_TEMPORARY = _653;   /* for PHI node */
  _644__PHI_TEMPORARY = _652;   /* for PHI node */
  goto _1233;

  } while (1); /* end of syntactic loop '' */
_1232:
  _654 = _654__PHI_TEMPORARY;
  _655 = *(uint64_t*)_335;
  _656 = *(uint64_t*)_337;
  _657 = jsyn_cbe_fshl_i64(_656, _655, 32);
  _658 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_654)), _656, 32);
  *(uint64_t*)_335 = _657;
  *(uint64_t*)_337 = _658;
  _659 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _660 = *(uint64_t*)_659;
  _661 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _662 = *(uint64_t*)_661;
  _663 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _664 = *(uint64_t*)_663;
  _665 = *(void**)_256;
  _666 = *(uint64_t*)(((&((uint8_t*)_665)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_256)[((int64_t)48)]))) = _660;
  *(uint64_t*)_659 = _662;
  *(uint64_t*)_661 = _664;
  *(uint64_t*)_663 = _666;
  julia_emit_11((&_271), _255, _256, 51, 1);
  _328__PHI_TEMPORARY = (&_271);   /* for PHI node */
  goto _1144;

_1229:
  _667 = *(void**)_277;
  _668 = ((&((uint8_t*)_667)[((int64_t)16)]));
  _669 = *(uint64_t*)_668;
  if ((_669 == UINT64_C(0))) {
    goto _1237;
  } else {
    goto _1238;
  }

_1237:
  julia__throw_argerror_16(_255, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)232)]))));
  __builtin_unreachable();

_1238:
  _670 = llvm_add_u64(_669, -1);
  _671__PHI_TEMPORARY = _669;   /* for PHI node */
  goto _1239;

  do {     /* Syntactic loop '' to make GCC happy */
_1239:
  _671 = _671__PHI_TEMPORARY;
  if ((_671 == _669)) {
    goto _1240;
  } else {
    _671__PHI_TEMPORARY = (llvm_add_u64(_671, 1));   /* for PHI node */
    goto _1239;
  }

  } while (1); /* end of syntactic loop '' */
_1240:
  *(uint64_t*)_668 = _670;
  _672 = *(void**)_256;
  _673 = ((&((uint8_t*)_672)[((int64_t)16)]));
  _674 = *(uint64_t*)_673;
  _675 = ((&((uint8_t*)_672)[((int64_t)8)]));
  _676 = *(uint64_t*)_675;
  if ((((int64_t)_676) > ((int64_t)_674))) {
    goto _1241;
  } else {
    _693__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1242;
  }

_1241:
  _677 = *(void**)_672;
  _678 = *(uint8_t*)(((&((uint8_t*)_677)[((int64_t)_674)])));
  *(uint64_t*)_673 = (llvm_add_u64(_674, 1));
  _679 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_678)), 0);
  _680 = llvm_sub_u8(32, (llvm_shl_u8(_679, 3)));
  _681 = (((uint32_t)(uint8_t)_678)) << 24;
  if ((((uint8_t)_680) > ((uint8_t)((uint8_t)16)))) {
    _693__PHI_TEMPORARY = _681;   /* for PHI node */
    goto _1242;
  } else {
    _682__PHI_TEMPORARY = 16;   /* for PHI node */
    _683__PHI_TEMPORARY = _681;   /* for PHI node */
    goto _1243;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1243:
  _682 = _682__PHI_TEMPORARY;
  _683 = _683__PHI_TEMPORARY;
  if (((((int64_t)_682) < ((int64_t)UINT64_C(0))) | (((uint64_t)_682) < ((uint64_t)(((uint64_t)(uint8_t)_680)))))) {
    _693__PHI_TEMPORARY = _683;   /* for PHI node */
    goto _1242;
  } else {
    goto _1244;
  }

_1244:
  _684 = *(uint64_t*)_673;
  _685 = *(uint64_t*)_675;
  if ((((int64_t)_685) > ((int64_t)_684))) {
    goto _1245;
  } else {
    _693__PHI_TEMPORARY = _683;   /* for PHI node */
    goto _1242;
  }

_1245:
  _686 = *(void**)_672;
  _687 = *(uint8_t*)(((&((uint8_t*)_686)[((int64_t)_684)])));
  if ((((int8_t)_687) > ((int8_t)((uint8_t)-65)))) {
    _693__PHI_TEMPORARY = _683;   /* for PHI node */
    goto _1242;
  } else {
    goto _1246;
  }

_1246:
  _688 = llvm_select_u32((((int64_t)_684) < ((int64_t)_685)), (((uint32_t)(uint8_t)_687)), 0);
  _689 = *(uint64_t*)_673;
  *(uint64_t*)_673 = (llvm_add_u64(_689, 1));
  _690 = llvm_neg_u64(_682);
  _691 = _683 | (llvm_select_u32((((int64_t)_682) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_690) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_688, (((uint32_t)_690)))))), (llvm_select_u32((((uint64_t)_682) > ((uint64_t)UINT64_C(31))), 0, (_688 << (((uint32_t)_682)))))));
  _692 = llvm_add_u64(_682, -8);
  _682__PHI_TEMPORARY = _692;   /* for PHI node */
  _683__PHI_TEMPORARY = _691;   /* for PHI node */
  goto _1243;

  } while (1); /* end of syntactic loop '' */
_1242:
  _693 = _693__PHI_TEMPORARY;
  _694 = *(uint64_t*)_335;
  _695 = *(uint64_t*)_337;
  _696 = jsyn_cbe_fshl_i64(_695, _694, 32);
  _697 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_693)), _695, 32);
  *(uint64_t*)_335 = _696;
  *(uint64_t*)_337 = _697;
  _698 = ((&((uint8_t*)_256)[((int64_t)48)]));
  _699 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _700 = *(uint64_t*)_699;
  _701 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _702 = *(uint64_t*)_701;
  _703 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _704 = *(uint64_t*)_703;
  _705 = *(void**)_256;
  _706 = *(uint64_t*)(((&((uint8_t*)_705)[((int64_t)16)])));
  *(uint64_t*)_698 = _700;
  *(uint64_t*)_699 = _702;
  *(uint64_t*)_701 = _704;
  *(uint64_t*)_703 = _706;
  if (_627) {
    goto _1247;
  } else {
    goto _1248;
  }

_1247:
  _707 = *(void**)_256;
  _708 = ((&((uint8_t*)_707)[((int64_t)16)]));
  _709 = *(uint64_t*)_708;
  _710 = ((&((uint8_t*)_707)[((int64_t)8)]));
  _711 = *(uint64_t*)_710;
  if ((((int64_t)_711) > ((int64_t)_709))) {
    goto _1249;
  } else {
    _728__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1250;
  }

_1249:
  _712 = *(void**)_707;
  _713 = *(uint8_t*)(((&((uint8_t*)_712)[((int64_t)_709)])));
  *(uint64_t*)_708 = (llvm_add_u64(_709, 1));
  _714 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_713)), 0);
  _715 = llvm_sub_u8(32, (llvm_shl_u8(_714, 3)));
  _716 = (((uint32_t)(uint8_t)_713)) << 24;
  if ((((uint8_t)_715) > ((uint8_t)((uint8_t)16)))) {
    _728__PHI_TEMPORARY = _716;   /* for PHI node */
    goto _1250;
  } else {
    _717__PHI_TEMPORARY = 16;   /* for PHI node */
    _718__PHI_TEMPORARY = _716;   /* for PHI node */
    goto _1251;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1251:
  _717 = _717__PHI_TEMPORARY;
  _718 = _718__PHI_TEMPORARY;
  if (((((int64_t)_717) < ((int64_t)UINT64_C(0))) | (((uint64_t)_717) < ((uint64_t)(((uint64_t)(uint8_t)_715)))))) {
    _728__PHI_TEMPORARY = _718;   /* for PHI node */
    goto _1250;
  } else {
    goto _1252;
  }

_1252:
  _719 = *(uint64_t*)_708;
  _720 = *(uint64_t*)_710;
  if ((((int64_t)_720) > ((int64_t)_719))) {
    goto _1253;
  } else {
    _728__PHI_TEMPORARY = _718;   /* for PHI node */
    goto _1250;
  }

_1253:
  _721 = *(void**)_707;
  _722 = *(uint8_t*)(((&((uint8_t*)_721)[((int64_t)_719)])));
  if ((((int8_t)_722) > ((int8_t)((uint8_t)-65)))) {
    _728__PHI_TEMPORARY = _718;   /* for PHI node */
    goto _1250;
  } else {
    goto _1254;
  }

_1254:
  _723 = llvm_select_u32((((int64_t)_719) < ((int64_t)_720)), (((uint32_t)(uint8_t)_722)), 0);
  _724 = *(uint64_t*)_708;
  *(uint64_t*)_708 = (llvm_add_u64(_724, 1));
  _725 = llvm_neg_u64(_717);
  _726 = _718 | (llvm_select_u32((((int64_t)_717) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_725) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_723, (((uint32_t)_725)))))), (llvm_select_u32((((uint64_t)_717) > ((uint64_t)UINT64_C(31))), 0, (_723 << (((uint32_t)_717)))))));
  _727 = llvm_add_u64(_717, -8);
  _717__PHI_TEMPORARY = _727;   /* for PHI node */
  _718__PHI_TEMPORARY = _726;   /* for PHI node */
  goto _1251;

  } while (1); /* end of syntactic loop '' */
_1250:
  _728 = _728__PHI_TEMPORARY;
  _729 = *(uint64_t*)_335;
  _730 = *(uint64_t*)_337;
  _731 = jsyn_cbe_fshl_i64(_730, _729, 32);
  _732 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_728)), _730, 32);
  *(uint64_t*)_335 = _731;
  *(uint64_t*)_337 = _732;
  _733 = *(uint64_t*)_699;
  _734 = *(uint64_t*)_701;
  _735 = *(uint64_t*)_703;
  _736 = *(void**)_256;
  _737 = *(uint64_t*)(((&((uint8_t*)_736)[((int64_t)16)])));
  *(uint64_t*)_698 = _733;
  *(uint64_t*)_699 = _734;
  *(uint64_t*)_701 = _735;
  *(uint64_t*)_703 = _737;
  _738 = *(void**)_256;
  _739 = ((&((uint8_t*)_738)[((int64_t)16)]));
  _740 = *(uint64_t*)_739;
  _741 = ((&((uint8_t*)_738)[((int64_t)8)]));
  _742 = *(uint64_t*)_741;
  if ((((int64_t)_742) > ((int64_t)_740))) {
    goto _1255;
  } else {
    _759__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1256;
  }

_1255:
  _743 = *(void**)_738;
  _744 = *(uint8_t*)(((&((uint8_t*)_743)[((int64_t)_740)])));
  *(uint64_t*)_739 = (llvm_add_u64(_740, 1));
  _745 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_744)), 0);
  _746 = llvm_sub_u8(32, (llvm_shl_u8(_745, 3)));
  _747 = (((uint32_t)(uint8_t)_744)) << 24;
  if ((((uint8_t)_746) > ((uint8_t)((uint8_t)16)))) {
    _759__PHI_TEMPORARY = _747;   /* for PHI node */
    goto _1256;
  } else {
    _748__PHI_TEMPORARY = 16;   /* for PHI node */
    _749__PHI_TEMPORARY = _747;   /* for PHI node */
    goto _1257;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1257:
  _748 = _748__PHI_TEMPORARY;
  _749 = _749__PHI_TEMPORARY;
  if (((((int64_t)_748) < ((int64_t)UINT64_C(0))) | (((uint64_t)_748) < ((uint64_t)(((uint64_t)(uint8_t)_746)))))) {
    _759__PHI_TEMPORARY = _749;   /* for PHI node */
    goto _1256;
  } else {
    goto _1258;
  }

_1258:
  _750 = *(uint64_t*)_739;
  _751 = *(uint64_t*)_741;
  if ((((int64_t)_751) > ((int64_t)_750))) {
    goto _1259;
  } else {
    _759__PHI_TEMPORARY = _749;   /* for PHI node */
    goto _1256;
  }

_1259:
  _752 = *(void**)_738;
  _753 = *(uint8_t*)(((&((uint8_t*)_752)[((int64_t)_750)])));
  if ((((int8_t)_753) > ((int8_t)((uint8_t)-65)))) {
    _759__PHI_TEMPORARY = _749;   /* for PHI node */
    goto _1256;
  } else {
    goto _1260;
  }

_1260:
  _754 = llvm_select_u32((((int64_t)_750) < ((int64_t)_751)), (((uint32_t)(uint8_t)_753)), 0);
  _755 = *(uint64_t*)_739;
  *(uint64_t*)_739 = (llvm_add_u64(_755, 1));
  _756 = llvm_neg_u64(_748);
  _757 = _749 | (llvm_select_u32((((int64_t)_748) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_756) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_754, (((uint32_t)_756)))))), (llvm_select_u32((((uint64_t)_748) > ((uint64_t)UINT64_C(31))), 0, (_754 << (((uint32_t)_748)))))));
  _758 = llvm_add_u64(_748, -8);
  _748__PHI_TEMPORARY = _758;   /* for PHI node */
  _749__PHI_TEMPORARY = _757;   /* for PHI node */
  goto _1257;

  } while (1); /* end of syntactic loop '' */
_1256:
  _759 = _759__PHI_TEMPORARY;
  _760 = *(uint64_t*)_335;
  _761 = *(uint64_t*)_337;
  _762 = jsyn_cbe_fshl_i64(_761, _760, 32);
  _763 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_759)), _761, 32);
  *(uint64_t*)_335 = _762;
  *(uint64_t*)_337 = _763;
  _764 = *(uint64_t*)_699;
  _765 = *(uint64_t*)_701;
  _766 = *(uint64_t*)_703;
  _767 = *(void**)_256;
  _768 = *(uint64_t*)(((&((uint8_t*)_767)[((int64_t)16)])));
  *(uint64_t*)_698 = _764;
  *(uint64_t*)_699 = _765;
  *(uint64_t*)_701 = _766;
  *(uint64_t*)_703 = _768;
  julia_emit_11((&_272), _255, _256, (llvm_select_u16((_284 == 570425344u), 63, 65)), 1);
  _328__PHI_TEMPORARY = (&_272);   /* for PHI node */
  goto _1144;

_1248:
  julia_emit_11((&_273), _255, _256, (llvm_select_u16((_284 == 570425344u), 62, (llvm_select_u16((_284 == 1610612736u), 64, 709)))), 0);
  _328__PHI_TEMPORARY = (&_273);   /* for PHI node */
  goto _1144;

_1224:
  if (_470) {
    _769__PHI_TEMPORARY = 1;   /* for PHI node */
    _770__PHI_TEMPORARY = 0;   /* for PHI node */
    _771__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1261;
  } else {
    _961__PHI_TEMPORARY = 1;   /* for PHI node */
    _962__PHI_TEMPORARY = 0;   /* for PHI node */
    _963__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1262;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1261:
  _769 = _769__PHI_TEMPORARY;
  _770 = _770__PHI_TEMPORARY;
  _771 = _771__PHI_TEMPORARY;
  _772 = *(uint64_t*)_335;
  _773 = llvm_lshr_u64(_772, 32);
  _774 = ((uint32_t)_773);
  _775 = ((bool)_282&1u);
  if (_775) {
    goto _1263;
  } else {
    _778__PHI_TEMPORARY = _774;   /* for PHI node */
    goto _1264;
  }

_1263:
  _776 = *(uint64_t*)_337;
  if ((llvm_select_bool((_284 == _774), (_284 == (((uint32_t)_776))), 0))) {
    goto _1265;
  } else {
    goto _1266;
  }

_1266:
  if ((_773 == UINT64_C(4294967295))) {
    _1122__PHI_TEMPORARY = _769;   /* for PHI node */
    _1123__PHI_TEMPORARY = _770;   /* for PHI node */
    _1124__PHI_TEMPORARY = _771;   /* for PHI node */
    goto _1267;
  } else {
    goto _1268;
  }

_1265:
  _777 = ((uint32_t)(llvm_lshr_u64(_776, 32)));
  _778__PHI_TEMPORARY = _777;   /* for PHI node */
  goto _1264;

_1264:
  _778 = _778__PHI_TEMPORARY;
  if ((llvm_select_bool((_284 == _778), 1, (_773 == UINT64_C(4294967295))))) {
    _1122__PHI_TEMPORARY = _769;   /* for PHI node */
    _1123__PHI_TEMPORARY = _770;   /* for PHI node */
    _1124__PHI_TEMPORARY = _771;   /* for PHI node */
    goto _1267;
  } else {
    goto _1268;
  }

_1268:
  if (_775) {
    goto _1269;
  } else {
    goto _1270;
  }

_1269:
  switch ((((uint32_t)_773))) {
  default:
    goto _1270;
  case 218103808u:
    goto _1271;
  case 167772160u:
    goto _1271;
  }

_1270:
  _848 = *(void**)_256;
  _849 = ((&((uint8_t*)_848)[((int64_t)16)]));
  _850 = *(uint64_t*)_849;
  _851 = ((&((uint8_t*)_848)[((int64_t)8)]));
  _852 = *(uint64_t*)_851;
  if ((((int64_t)_852) > ((int64_t)_850))) {
    goto _1272;
  } else {
    _869__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1273;
  }

_1272:
  _853 = *(void**)_848;
  _854 = *(uint8_t*)(((&((uint8_t*)_853)[((int64_t)_850)])));
  *(uint64_t*)_849 = (llvm_add_u64(_850, 1));
  _855 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_854)), 0);
  _856 = llvm_sub_u8(32, (llvm_shl_u8(_855, 3)));
  _857 = (((uint32_t)(uint8_t)_854)) << 24;
  if ((((uint8_t)_856) > ((uint8_t)((uint8_t)16)))) {
    _869__PHI_TEMPORARY = _857;   /* for PHI node */
    goto _1273;
  } else {
    _858__PHI_TEMPORARY = 16;   /* for PHI node */
    _859__PHI_TEMPORARY = _857;   /* for PHI node */
    goto _1274;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1274:
  _858 = _858__PHI_TEMPORARY;
  _859 = _859__PHI_TEMPORARY;
  if (((((int64_t)_858) < ((int64_t)UINT64_C(0))) | (((uint64_t)_858) < ((uint64_t)(((uint64_t)(uint8_t)_856)))))) {
    _869__PHI_TEMPORARY = _859;   /* for PHI node */
    goto _1273;
  } else {
    goto _1275;
  }

_1275:
  _860 = *(uint64_t*)_849;
  _861 = *(uint64_t*)_851;
  if ((((int64_t)_861) > ((int64_t)_860))) {
    goto _1276;
  } else {
    _869__PHI_TEMPORARY = _859;   /* for PHI node */
    goto _1273;
  }

_1276:
  _862 = *(void**)_848;
  _863 = *(uint8_t*)(((&((uint8_t*)_862)[((int64_t)_860)])));
  if ((((int8_t)_863) > ((int8_t)((uint8_t)-65)))) {
    _869__PHI_TEMPORARY = _859;   /* for PHI node */
    goto _1273;
  } else {
    goto _1277;
  }

_1277:
  _864 = llvm_select_u32((((int64_t)_860) < ((int64_t)_861)), (((uint32_t)(uint8_t)_863)), 0);
  _865 = *(uint64_t*)_849;
  *(uint64_t*)_849 = (llvm_add_u64(_865, 1));
  _866 = llvm_neg_u64(_858);
  _867 = _859 | (llvm_select_u32((((int64_t)_858) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_866) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_864, (((uint32_t)_866)))))), (llvm_select_u32((((uint64_t)_858) > ((uint64_t)UINT64_C(31))), 0, (_864 << (((uint32_t)_858)))))));
  _868 = llvm_add_u64(_858, -8);
  _858__PHI_TEMPORARY = _868;   /* for PHI node */
  _859__PHI_TEMPORARY = _867;   /* for PHI node */
  goto _1274;

  } while (1); /* end of syntactic loop '' */
_1273:
  _869 = _869__PHI_TEMPORARY;
  _870 = *(uint64_t*)_335;
  _871 = *(uint64_t*)_337;
  _872 = jsyn_cbe_fshl_i64(_871, _870, 32);
  _873 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_869)), _871, 32);
  *(uint64_t*)_335 = _872;
  *(uint64_t*)_337 = _873;
  _874 = ((&((uint8_t*)_256)[((int64_t)48)]));
  _875 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _876 = *(uint64_t*)_875;
  _877 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _878 = *(uint64_t*)_877;
  _879 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _880 = *(uint64_t*)_879;
  _881 = *(void**)_256;
  _882 = *(uint64_t*)(((&((uint8_t*)_881)[((int64_t)16)])));
  *(uint64_t*)_874 = _876;
  *(uint64_t*)_875 = _878;
  *(uint64_t*)_877 = _880;
  *(uint64_t*)_879 = _882;
  _883 = *(uint64_t*)_335;
  _884 = ((uint32_t)_883);
  switch (_884) {
  default:
    goto _1278;
  case 1543503872u:
    _885__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1279;
  case 167772160u:
    _955__PHI_TEMPORARY = 0;   /* for PHI node */
    _956__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1280;
  case 3800082944u:
    goto _1281;
  case 3800083200u:
    goto _1281;
  case 3800083712u:
    goto _1281;
  case 3800083968u:
    goto _1281;
  case 3800083456u:
    goto _1282;
  case 3800147456u:
    goto _1283;
  case 3800147712u:
    goto _1283;
  case 3800147968u:
    goto _1283;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1279:
  _885 = _885__PHI_TEMPORARY;
  _886 = *(uint64_t*)_335;
  _887 = llvm_lshr_u64(_886, 32);
  if ((_887 == UINT64_C(1543503872))) {
    goto _1284;
  } else {
    goto _1285;
  }

_1284:
  _888 = *(void**)_256;
  _889 = ((&((uint8_t*)_888)[((int64_t)16)]));
  _890 = *(uint64_t*)_889;
  _891 = ((&((uint8_t*)_888)[((int64_t)8)]));
  _892 = *(uint64_t*)_891;
  if ((((int64_t)_892) > ((int64_t)_890))) {
    goto _1286;
  } else {
    _909__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1287;
  }

_1286:
  _893 = *(void**)_888;
  _894 = *(uint8_t*)(((&((uint8_t*)_893)[((int64_t)_890)])));
  *(uint64_t*)_889 = (llvm_add_u64(_890, 1));
  _895 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_894)), 0);
  _896 = llvm_sub_u8(32, (llvm_shl_u8(_895, 3)));
  _897 = (((uint32_t)(uint8_t)_894)) << 24;
  if ((((uint8_t)_896) > ((uint8_t)((uint8_t)16)))) {
    _909__PHI_TEMPORARY = _897;   /* for PHI node */
    goto _1287;
  } else {
    _898__PHI_TEMPORARY = 16;   /* for PHI node */
    _899__PHI_TEMPORARY = _897;   /* for PHI node */
    goto _1288;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1288:
  _898 = _898__PHI_TEMPORARY;
  _899 = _899__PHI_TEMPORARY;
  if (((((int64_t)_898) < ((int64_t)UINT64_C(0))) | (((uint64_t)_898) < ((uint64_t)(((uint64_t)(uint8_t)_896)))))) {
    _909__PHI_TEMPORARY = _899;   /* for PHI node */
    goto _1287;
  } else {
    goto _1289;
  }

_1289:
  _900 = *(uint64_t*)_889;
  _901 = *(uint64_t*)_891;
  if ((((int64_t)_901) > ((int64_t)_900))) {
    goto _1290;
  } else {
    _909__PHI_TEMPORARY = _899;   /* for PHI node */
    goto _1287;
  }

_1290:
  _902 = *(void**)_888;
  _903 = *(uint8_t*)(((&((uint8_t*)_902)[((int64_t)_900)])));
  if ((((int8_t)_903) > ((int8_t)((uint8_t)-65)))) {
    _909__PHI_TEMPORARY = _899;   /* for PHI node */
    goto _1287;
  } else {
    goto _1291;
  }

_1291:
  _904 = llvm_select_u32((((int64_t)_900) < ((int64_t)_901)), (((uint32_t)(uint8_t)_903)), 0);
  _905 = *(uint64_t*)_889;
  *(uint64_t*)_889 = (llvm_add_u64(_905, 1));
  _906 = llvm_neg_u64(_898);
  _907 = _899 | (llvm_select_u32((((int64_t)_898) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_906) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_904, (((uint32_t)_906)))))), (llvm_select_u32((((uint64_t)_898) > ((uint64_t)UINT64_C(31))), 0, (_904 << (((uint32_t)_898)))))));
  _908 = llvm_add_u64(_898, -8);
  _898__PHI_TEMPORARY = _908;   /* for PHI node */
  _899__PHI_TEMPORARY = _907;   /* for PHI node */
  goto _1288;

  } while (1); /* end of syntactic loop '' */
_1287:
  _909 = _909__PHI_TEMPORARY;
  _910 = *(uint64_t*)_335;
  _911 = *(uint64_t*)_337;
  _912 = jsyn_cbe_fshl_i64(_911, _910, 32);
  _913 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_909)), _911, 32);
  *(uint64_t*)_335 = _912;
  *(uint64_t*)_337 = _913;
  _914 = *(uint64_t*)_875;
  _915 = *(uint64_t*)_877;
  _916 = *(uint64_t*)_879;
  _917 = *(void**)_256;
  _918 = *(uint64_t*)(((&((uint8_t*)_917)[((int64_t)16)])));
  *(uint64_t*)_874 = _914;
  *(uint64_t*)_875 = _915;
  *(uint64_t*)_877 = _916;
  *(uint64_t*)_879 = _918;
  _919 = llvm_add_u64(_885, 1);
  _885__PHI_TEMPORARY = _919;   /* for PHI node */
  goto _1279;

  } while (1); /* end of syntactic loop '' */
_1285:
  if ((llvm_select_bool((_284 != (((uint32_t)_887))), 1, ((_885 & 1) == UINT64_C(0))))) {
    goto _1292;
  } else {
    goto _1293;
  }

_1293:
  _920 = *(void**)_256;
  _921 = ((&((uint8_t*)_920)[((int64_t)16)]));
  _922 = *(uint64_t*)_921;
  _923 = ((&((uint8_t*)_920)[((int64_t)8)]));
  _924 = *(uint64_t*)_923;
  if ((((int64_t)_924) > ((int64_t)_922))) {
    goto _1294;
  } else {
    _941__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1295;
  }

_1294:
  _925 = *(void**)_920;
  _926 = *(uint8_t*)(((&((uint8_t*)_925)[((int64_t)_922)])));
  *(uint64_t*)_921 = (llvm_add_u64(_922, 1));
  _927 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_926)), 0);
  _928 = llvm_sub_u8(32, (llvm_shl_u8(_927, 3)));
  _929 = (((uint32_t)(uint8_t)_926)) << 24;
  if ((((uint8_t)_928) > ((uint8_t)((uint8_t)16)))) {
    _941__PHI_TEMPORARY = _929;   /* for PHI node */
    goto _1295;
  } else {
    _930__PHI_TEMPORARY = 16;   /* for PHI node */
    _931__PHI_TEMPORARY = _929;   /* for PHI node */
    goto _1296;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1296:
  _930 = _930__PHI_TEMPORARY;
  _931 = _931__PHI_TEMPORARY;
  if (((((int64_t)_930) < ((int64_t)UINT64_C(0))) | (((uint64_t)_930) < ((uint64_t)(((uint64_t)(uint8_t)_928)))))) {
    _941__PHI_TEMPORARY = _931;   /* for PHI node */
    goto _1295;
  } else {
    goto _1297;
  }

_1297:
  _932 = *(uint64_t*)_921;
  _933 = *(uint64_t*)_923;
  if ((((int64_t)_933) > ((int64_t)_932))) {
    goto _1298;
  } else {
    _941__PHI_TEMPORARY = _931;   /* for PHI node */
    goto _1295;
  }

_1298:
  _934 = *(void**)_920;
  _935 = *(uint8_t*)(((&((uint8_t*)_934)[((int64_t)_932)])));
  if ((((int8_t)_935) > ((int8_t)((uint8_t)-65)))) {
    _941__PHI_TEMPORARY = _931;   /* for PHI node */
    goto _1295;
  } else {
    goto _1299;
  }

_1299:
  _936 = llvm_select_u32((((int64_t)_932) < ((int64_t)_933)), (((uint32_t)(uint8_t)_935)), 0);
  _937 = *(uint64_t*)_921;
  *(uint64_t*)_921 = (llvm_add_u64(_937, 1));
  _938 = llvm_neg_u64(_930);
  _939 = _931 | (llvm_select_u32((((int64_t)_930) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_938) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_936, (((uint32_t)_938)))))), (llvm_select_u32((((uint64_t)_930) > ((uint64_t)UINT64_C(31))), 0, (_936 << (((uint32_t)_930)))))));
  _940 = llvm_add_u64(_930, -8);
  _930__PHI_TEMPORARY = _940;   /* for PHI node */
  _931__PHI_TEMPORARY = _939;   /* for PHI node */
  goto _1296;

  } while (1); /* end of syntactic loop '' */
_1295:
  _941 = _941__PHI_TEMPORARY;
  _942 = *(uint64_t*)_335;
  _943 = *(uint64_t*)_337;
  _944 = jsyn_cbe_fshl_i64(_943, _942, 32);
  _945 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_941)), _943, 32);
  *(uint64_t*)_335 = _944;
  *(uint64_t*)_337 = _945;
  _946 = *(uint64_t*)_875;
  _947 = *(uint64_t*)_877;
  _948 = *(uint64_t*)_879;
  _949 = *(void**)_256;
  _950 = *(uint64_t*)(((&((uint8_t*)_949)[((int64_t)16)])));
  *(uint64_t*)_874 = _946;
  *(uint64_t*)_875 = _947;
  *(uint64_t*)_877 = _948;
  *(uint64_t*)_879 = _950;
  goto _1292;

_1292:
  switch (_884) {
  default:
    goto _1278;
  case 167772160u:
    _955__PHI_TEMPORARY = 0;   /* for PHI node */
    _956__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1280;
  case 3800082944u:
    goto _1281;
  case 3800083200u:
    goto _1281;
  case 3800083712u:
    goto _1281;
  case 3800083968u:
    goto _1281;
  case 3800083456u:
    goto _1282;
  case 3800147456u:
    goto _1283;
  case 3800147712u:
    goto _1283;
  case 3800147968u:
    goto _1283;
  }

_1283:
  _953 = llvm_add_u64(_771, 1);
  _955__PHI_TEMPORARY = _770;   /* for PHI node */
  _956__PHI_TEMPORARY = _953;   /* for PHI node */
  goto _1280;

_1282:
  _951 = llvm_add_u64(_770, -1);
  _955__PHI_TEMPORARY = _951;   /* for PHI node */
  _956__PHI_TEMPORARY = _771;   /* for PHI node */
  goto _1280;

_1281:
  _954 = llvm_add_u64(_770, 1);
  _955__PHI_TEMPORARY = _954;   /* for PHI node */
  _956__PHI_TEMPORARY = _771;   /* for PHI node */
  goto _1280;

_1278:
  _952 = llvm_add_u64(_771, (((int64_t)(bool)0-(_884 == 3800148224u))));
  _955__PHI_TEMPORARY = _770;   /* for PHI node */
  _956__PHI_TEMPORARY = _952;   /* for PHI node */
  goto _1280;

_1280:
  _955 = _955__PHI_TEMPORARY;
  _956 = _956__PHI_TEMPORARY;
  _957 = llvm_OC_ctlz_OC_i32((_884 ^ -1), 0);
  _958 = llvm_OC_cttz_OC_i32(_884, 0);
  _959 = _958 & 56;
  _960 = _769 & (((((_957 != 1u) & (((uint32_t)(llvm_add_u32((_957 << 3), _959))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_958) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_884 & 12632256) ^ 8421504), _959)) == 0u)))) & ((((_884 & -33554432) != 3221225472u) & ((_884 & -2097152) != 3766484992u)) & ((_884 & -1048576) != 4034920448u))) & ((((uint32_t)_884) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_884, 293568512))) < ((uint32_t)101662656u))));
  _769__PHI_TEMPORARY = _960;   /* for PHI node */
  _770__PHI_TEMPORARY = _955;   /* for PHI node */
  _771__PHI_TEMPORARY = _956;   /* for PHI node */
  goto _1261;

  } while (1); /* end of syntactic loop '' */
_1271:
  _779 = *(void**)_256;
  _780 = ((&((uint8_t*)_779)[((int64_t)16)]));
  _781 = *(uint64_t*)_780;
  _782 = ((&((uint8_t*)_779)[((int64_t)8)]));
  _783 = *(uint64_t*)_782;
  if ((((int64_t)_783) > ((int64_t)_781))) {
    goto _1300;
  } else {
    _800__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1301;
  }

_1300:
  _784 = *(void**)_779;
  _785 = *(uint8_t*)(((&((uint8_t*)_784)[((int64_t)_781)])));
  *(uint64_t*)_780 = (llvm_add_u64(_781, 1));
  _786 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_785)), 0);
  _787 = llvm_sub_u8(32, (llvm_shl_u8(_786, 3)));
  _788 = (((uint32_t)(uint8_t)_785)) << 24;
  if ((((uint8_t)_787) > ((uint8_t)((uint8_t)16)))) {
    _800__PHI_TEMPORARY = _788;   /* for PHI node */
    goto _1301;
  } else {
    _789__PHI_TEMPORARY = 16;   /* for PHI node */
    _790__PHI_TEMPORARY = _788;   /* for PHI node */
    goto _1302;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1302:
  _789 = _789__PHI_TEMPORARY;
  _790 = _790__PHI_TEMPORARY;
  if (((((int64_t)_789) < ((int64_t)UINT64_C(0))) | (((uint64_t)_789) < ((uint64_t)(((uint64_t)(uint8_t)_787)))))) {
    _800__PHI_TEMPORARY = _790;   /* for PHI node */
    goto _1301;
  } else {
    goto _1303;
  }

_1303:
  _791 = *(uint64_t*)_780;
  _792 = *(uint64_t*)_782;
  if ((((int64_t)_792) > ((int64_t)_791))) {
    goto _1304;
  } else {
    _800__PHI_TEMPORARY = _790;   /* for PHI node */
    goto _1301;
  }

_1304:
  _793 = *(void**)_779;
  _794 = *(uint8_t*)(((&((uint8_t*)_793)[((int64_t)_791)])));
  if ((((int8_t)_794) > ((int8_t)((uint8_t)-65)))) {
    _800__PHI_TEMPORARY = _790;   /* for PHI node */
    goto _1301;
  } else {
    goto _1305;
  }

_1305:
  _795 = llvm_select_u32((((int64_t)_791) < ((int64_t)_792)), (((uint32_t)(uint8_t)_794)), 0);
  _796 = *(uint64_t*)_780;
  *(uint64_t*)_780 = (llvm_add_u64(_796, 1));
  _797 = llvm_neg_u64(_789);
  _798 = _790 | (llvm_select_u32((((int64_t)_789) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_797) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_795, (((uint32_t)_797)))))), (llvm_select_u32((((uint64_t)_789) > ((uint64_t)UINT64_C(31))), 0, (_795 << (((uint32_t)_789)))))));
  _799 = llvm_add_u64(_789, -8);
  _789__PHI_TEMPORARY = _799;   /* for PHI node */
  _790__PHI_TEMPORARY = _798;   /* for PHI node */
  goto _1302;

  } while (1); /* end of syntactic loop '' */
_1301:
  _800 = _800__PHI_TEMPORARY;
  _801 = *(uint64_t*)_335;
  _802 = *(uint64_t*)_337;
  _803 = jsyn_cbe_fshl_i64(_802, _801, 32);
  _804 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_800)), _802, 32);
  *(uint64_t*)_335 = _803;
  *(uint64_t*)_337 = _804;
  _805 = ((&((uint8_t*)_256)[((int64_t)48)]));
  _806 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _807 = *(uint64_t*)_806;
  _808 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _809 = *(uint64_t*)_808;
  _810 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _811 = *(uint64_t*)_810;
  _812 = *(void**)_256;
  _813 = *(uint64_t*)(((&((uint8_t*)_812)[((int64_t)16)])));
  *(uint64_t*)_805 = _807;
  *(uint64_t*)_806 = _809;
  *(uint64_t*)_808 = _811;
  *(uint64_t*)_810 = _813;
  _814 = llvm_select_u64((_773 == UINT64_C(167772160)), 0, _770);
  _815 = llvm_select_u64((_773 == UINT64_C(167772160)), 0, _771);
  if ((_773 == UINT64_C(218103808))) {
    goto _1306;
  } else {
    _1122__PHI_TEMPORARY = _769;   /* for PHI node */
    _1123__PHI_TEMPORARY = _814;   /* for PHI node */
    _1124__PHI_TEMPORARY = _815;   /* for PHI node */
    goto _1267;
  }

_1306:
  _816 = *(uint64_t*)_335;
  if (((_816 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1307;
  } else {
    _1122__PHI_TEMPORARY = _769;   /* for PHI node */
    _1123__PHI_TEMPORARY = _770;   /* for PHI node */
    _1124__PHI_TEMPORARY = _771;   /* for PHI node */
    goto _1267;
  }

_1307:
  _817 = *(void**)_256;
  _818 = ((&((uint8_t*)_817)[((int64_t)16)]));
  _819 = *(uint64_t*)_818;
  _820 = ((&((uint8_t*)_817)[((int64_t)8)]));
  _821 = *(uint64_t*)_820;
  if ((((int64_t)_821) > ((int64_t)_819))) {
    goto _1308;
  } else {
    _838__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1309;
  }

_1308:
  _822 = *(void**)_817;
  _823 = *(uint8_t*)(((&((uint8_t*)_822)[((int64_t)_819)])));
  *(uint64_t*)_818 = (llvm_add_u64(_819, 1));
  _824 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_823)), 0);
  _825 = llvm_sub_u8(32, (llvm_shl_u8(_824, 3)));
  _826 = (((uint32_t)(uint8_t)_823)) << 24;
  if ((((uint8_t)_825) > ((uint8_t)((uint8_t)16)))) {
    _838__PHI_TEMPORARY = _826;   /* for PHI node */
    goto _1309;
  } else {
    _827__PHI_TEMPORARY = 16;   /* for PHI node */
    _828__PHI_TEMPORARY = _826;   /* for PHI node */
    goto _1310;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1310:
  _827 = _827__PHI_TEMPORARY;
  _828 = _828__PHI_TEMPORARY;
  if (((((int64_t)_827) < ((int64_t)UINT64_C(0))) | (((uint64_t)_827) < ((uint64_t)(((uint64_t)(uint8_t)_825)))))) {
    _838__PHI_TEMPORARY = _828;   /* for PHI node */
    goto _1309;
  } else {
    goto _1311;
  }

_1311:
  _829 = *(uint64_t*)_818;
  _830 = *(uint64_t*)_820;
  if ((((int64_t)_830) > ((int64_t)_829))) {
    goto _1312;
  } else {
    _838__PHI_TEMPORARY = _828;   /* for PHI node */
    goto _1309;
  }

_1312:
  _831 = *(void**)_817;
  _832 = *(uint8_t*)(((&((uint8_t*)_831)[((int64_t)_829)])));
  if ((((int8_t)_832) > ((int8_t)((uint8_t)-65)))) {
    _838__PHI_TEMPORARY = _828;   /* for PHI node */
    goto _1309;
  } else {
    goto _1313;
  }

_1313:
  _833 = llvm_select_u32((((int64_t)_829) < ((int64_t)_830)), (((uint32_t)(uint8_t)_832)), 0);
  _834 = *(uint64_t*)_818;
  *(uint64_t*)_818 = (llvm_add_u64(_834, 1));
  _835 = llvm_neg_u64(_827);
  _836 = _828 | (llvm_select_u32((((int64_t)_827) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_835) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_833, (((uint32_t)_835)))))), (llvm_select_u32((((uint64_t)_827) > ((uint64_t)UINT64_C(31))), 0, (_833 << (((uint32_t)_827)))))));
  _837 = llvm_add_u64(_827, -8);
  _827__PHI_TEMPORARY = _837;   /* for PHI node */
  _828__PHI_TEMPORARY = _836;   /* for PHI node */
  goto _1310;

  } while (1); /* end of syntactic loop '' */
_1309:
  _838 = _838__PHI_TEMPORARY;
  _839 = *(uint64_t*)_335;
  _840 = *(uint64_t*)_337;
  _841 = jsyn_cbe_fshl_i64(_840, _839, 32);
  _842 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_838)), _840, 32);
  *(uint64_t*)_335 = _841;
  *(uint64_t*)_337 = _842;
  _843 = *(uint64_t*)_806;
  _844 = *(uint64_t*)_808;
  _845 = *(uint64_t*)_810;
  _846 = *(void**)_256;
  _847 = *(uint64_t*)(((&((uint8_t*)_846)[((int64_t)16)])));
  *(uint64_t*)_805 = _843;
  *(uint64_t*)_806 = _844;
  *(uint64_t*)_808 = _845;
  *(uint64_t*)_810 = _847;
  _1122__PHI_TEMPORARY = _769;   /* for PHI node */
  _1123__PHI_TEMPORARY = 0;   /* for PHI node */
  _1124__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1267;

  do {     /* Syntactic loop '' to make GCC happy */
_1262:
  _961 = _961__PHI_TEMPORARY;
  _962 = _962__PHI_TEMPORARY;
  _963 = _963__PHI_TEMPORARY;
  _964 = *(uint64_t*)_335;
  _965 = llvm_lshr_u64(_964, 32);
  _966 = ((uint32_t)_965);
  switch ((((uint32_t)_965))) {
  default:
    goto _1314;
  case 603979776u:
    _1122__PHI_TEMPORARY = _961;   /* for PHI node */
    _1123__PHI_TEMPORARY = _962;   /* for PHI node */
    _1124__PHI_TEMPORARY = _963;   /* for PHI node */
    goto _1267;
  case 4294967295u:
    _1122__PHI_TEMPORARY = _961;   /* for PHI node */
    _1123__PHI_TEMPORARY = _962;   /* for PHI node */
    _1124__PHI_TEMPORARY = _963;   /* for PHI node */
    goto _1267;
  }

_1314:
  _967 = ((bool)_282&1u);
  if (_967) {
    goto _1315;
  } else {
    goto _1316;
  }

_1315:
  switch ((((uint32_t)_965))) {
  default:
    goto _1316;
  case 218103808u:
    goto _1317;
  case 167772160u:
    goto _1317;
  }

_1316:
  if ((_284 == _966)) {
    goto _1318;
  } else {
    goto _1319;
  }

_1318:
  _1037 = *(uint64_t*)_335;
  if (_967) {
    goto _1320;
  } else {
    _1039__PHI_TEMPORARY = _1037;   /* for PHI node */
    goto _1321;
  }

_1320:
  _1038 = *(uint64_t*)_337;
  if ((llvm_select_bool((_284 == (((uint32_t)(llvm_lshr_u64(_1037, 32))))), (_284 == (((uint32_t)_1038))), 0))) {
    _1039__PHI_TEMPORARY = _1038;   /* for PHI node */
    goto _1321;
  } else {
    goto _1319;
  }

_1321:
  _1039 = _1039__PHI_TEMPORARY;
  if ((_284 == (((uint32_t)(llvm_lshr_u64(_1039, 32)))))) {
    _1122__PHI_TEMPORARY = _961;   /* for PHI node */
    _1123__PHI_TEMPORARY = _962;   /* for PHI node */
    _1124__PHI_TEMPORARY = _963;   /* for PHI node */
    goto _1267;
  } else {
    goto _1319;
  }

_1319:
  if ((_965 == UINT64_C(1543503872))) {
    goto _1322;
  } else {
    goto _1323;
  }

_1322:
  _1040 = *(uint64_t*)_337;
  switch ((((uint32_t)_1040))) {
  default:
    goto _1323;
  case 167772160u:
    goto _1324;
  case 218103808u:
    goto _1325;
  }

_1323:
  _1041 = *(void**)_256;
  _1042 = ((&((uint8_t*)_1041)[((int64_t)16)]));
  _1043 = *(uint64_t*)_1042;
  _1044 = ((&((uint8_t*)_1041)[((int64_t)8)]));
  _1045 = *(uint64_t*)_1044;
  if ((((int64_t)_1045) > ((int64_t)_1043))) {
    goto _1326;
  } else {
    _1062__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1327;
  }

_1326:
  _1046 = *(void**)_1041;
  _1047 = *(uint8_t*)(((&((uint8_t*)_1046)[((int64_t)_1043)])));
  *(uint64_t*)_1042 = (llvm_add_u64(_1043, 1));
  _1048 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1047)), 0);
  _1049 = llvm_sub_u8(32, (llvm_shl_u8(_1048, 3)));
  _1050 = (((uint32_t)(uint8_t)_1047)) << 24;
  if ((((uint8_t)_1049) > ((uint8_t)((uint8_t)16)))) {
    _1062__PHI_TEMPORARY = _1050;   /* for PHI node */
    goto _1327;
  } else {
    _1051__PHI_TEMPORARY = 16;   /* for PHI node */
    _1052__PHI_TEMPORARY = _1050;   /* for PHI node */
    goto _1328;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1328:
  _1051 = _1051__PHI_TEMPORARY;
  _1052 = _1052__PHI_TEMPORARY;
  if (((((int64_t)_1051) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1051) < ((uint64_t)(((uint64_t)(uint8_t)_1049)))))) {
    _1062__PHI_TEMPORARY = _1052;   /* for PHI node */
    goto _1327;
  } else {
    goto _1329;
  }

_1329:
  _1053 = *(uint64_t*)_1042;
  _1054 = *(uint64_t*)_1044;
  if ((((int64_t)_1054) > ((int64_t)_1053))) {
    goto _1330;
  } else {
    _1062__PHI_TEMPORARY = _1052;   /* for PHI node */
    goto _1327;
  }

_1330:
  _1055 = *(void**)_1041;
  _1056 = *(uint8_t*)(((&((uint8_t*)_1055)[((int64_t)_1053)])));
  if ((((int8_t)_1056) > ((int8_t)((uint8_t)-65)))) {
    _1062__PHI_TEMPORARY = _1052;   /* for PHI node */
    goto _1327;
  } else {
    goto _1331;
  }

_1331:
  _1057 = llvm_select_u32((((int64_t)_1053) < ((int64_t)_1054)), (((uint32_t)(uint8_t)_1056)), 0);
  _1058 = *(uint64_t*)_1042;
  *(uint64_t*)_1042 = (llvm_add_u64(_1058, 1));
  _1059 = llvm_neg_u64(_1051);
  _1060 = _1052 | (llvm_select_u32((((int64_t)_1051) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1059) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1057, (((uint32_t)_1059)))))), (llvm_select_u32((((uint64_t)_1051) > ((uint64_t)UINT64_C(31))), 0, (_1057 << (((uint32_t)_1051)))))));
  _1061 = llvm_add_u64(_1051, -8);
  _1051__PHI_TEMPORARY = _1061;   /* for PHI node */
  _1052__PHI_TEMPORARY = _1060;   /* for PHI node */
  goto _1328;

  } while (1); /* end of syntactic loop '' */
_1327:
  _1062 = _1062__PHI_TEMPORARY;
  _1063 = *(uint64_t*)_335;
  _1064 = *(uint64_t*)_337;
  _1065 = jsyn_cbe_fshl_i64(_1064, _1063, 32);
  _1066 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1062)), _1064, 32);
  *(uint64_t*)_335 = _1065;
  *(uint64_t*)_337 = _1066;
  _1067 = ((&((uint8_t*)_256)[((int64_t)48)]));
  _1068 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _1069 = *(uint64_t*)_1068;
  _1070 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _1071 = *(uint64_t*)_1070;
  _1072 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _1073 = *(uint64_t*)_1072;
  _1074 = *(void**)_256;
  _1075 = *(uint64_t*)(((&((uint8_t*)_1074)[((int64_t)16)])));
  *(uint64_t*)_1067 = _1069;
  *(uint64_t*)_1068 = _1071;
  *(uint64_t*)_1070 = _1073;
  *(uint64_t*)_1072 = _1075;
  _1076 = *(uint64_t*)_335;
  _1077 = ((uint32_t)_1076);
  if ((_1077 == 1543503872u)) {
    goto _1332;
  } else {
    _1111__PHI_TEMPORARY = _1077;   /* for PHI node */
    goto _1333;
  }

_1332:
  _1078 = *(void**)_256;
  _1079 = ((&((uint8_t*)_1078)[((int64_t)16)]));
  _1080 = *(uint64_t*)_1079;
  _1081 = ((&((uint8_t*)_1078)[((int64_t)8)]));
  _1082 = *(uint64_t*)_1081;
  if ((((int64_t)_1082) > ((int64_t)_1080))) {
    goto _1334;
  } else {
    _1099__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1335;
  }

_1334:
  _1083 = *(void**)_1078;
  _1084 = *(uint8_t*)(((&((uint8_t*)_1083)[((int64_t)_1080)])));
  *(uint64_t*)_1079 = (llvm_add_u64(_1080, 1));
  _1085 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1084)), 0);
  _1086 = llvm_sub_u8(32, (llvm_shl_u8(_1085, 3)));
  _1087 = (((uint32_t)(uint8_t)_1084)) << 24;
  if ((((uint8_t)_1086) > ((uint8_t)((uint8_t)16)))) {
    _1099__PHI_TEMPORARY = _1087;   /* for PHI node */
    goto _1335;
  } else {
    _1088__PHI_TEMPORARY = 16;   /* for PHI node */
    _1089__PHI_TEMPORARY = _1087;   /* for PHI node */
    goto _1336;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1336:
  _1088 = _1088__PHI_TEMPORARY;
  _1089 = _1089__PHI_TEMPORARY;
  if (((((int64_t)_1088) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1088) < ((uint64_t)(((uint64_t)(uint8_t)_1086)))))) {
    _1099__PHI_TEMPORARY = _1089;   /* for PHI node */
    goto _1335;
  } else {
    goto _1337;
  }

_1337:
  _1090 = *(uint64_t*)_1079;
  _1091 = *(uint64_t*)_1081;
  if ((((int64_t)_1091) > ((int64_t)_1090))) {
    goto _1338;
  } else {
    _1099__PHI_TEMPORARY = _1089;   /* for PHI node */
    goto _1335;
  }

_1338:
  _1092 = *(void**)_1078;
  _1093 = *(uint8_t*)(((&((uint8_t*)_1092)[((int64_t)_1090)])));
  if ((((int8_t)_1093) > ((int8_t)((uint8_t)-65)))) {
    _1099__PHI_TEMPORARY = _1089;   /* for PHI node */
    goto _1335;
  } else {
    goto _1339;
  }

_1339:
  _1094 = llvm_select_u32((((int64_t)_1090) < ((int64_t)_1091)), (((uint32_t)(uint8_t)_1093)), 0);
  _1095 = *(uint64_t*)_1079;
  *(uint64_t*)_1079 = (llvm_add_u64(_1095, 1));
  _1096 = llvm_neg_u64(_1088);
  _1097 = _1089 | (llvm_select_u32((((int64_t)_1088) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1096) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1094, (((uint32_t)_1096)))))), (llvm_select_u32((((uint64_t)_1088) > ((uint64_t)UINT64_C(31))), 0, (_1094 << (((uint32_t)_1088)))))));
  _1098 = llvm_add_u64(_1088, -8);
  _1088__PHI_TEMPORARY = _1098;   /* for PHI node */
  _1089__PHI_TEMPORARY = _1097;   /* for PHI node */
  goto _1336;

  } while (1); /* end of syntactic loop '' */
_1335:
  _1099 = _1099__PHI_TEMPORARY;
  _1100 = *(uint64_t*)_335;
  _1101 = *(uint64_t*)_337;
  _1102 = jsyn_cbe_fshl_i64(_1101, _1100, 32);
  _1103 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1099)), _1101, 32);
  *(uint64_t*)_335 = _1102;
  *(uint64_t*)_337 = _1103;
  _1104 = *(uint64_t*)_1068;
  _1105 = *(uint64_t*)_1070;
  _1106 = *(uint64_t*)_1072;
  _1107 = *(void**)_256;
  _1108 = *(uint64_t*)(((&((uint8_t*)_1107)[((int64_t)16)])));
  *(uint64_t*)_1067 = _1104;
  *(uint64_t*)_1068 = _1105;
  *(uint64_t*)_1070 = _1106;
  *(uint64_t*)_1072 = _1108;
  _1109 = *(uint64_t*)_335;
  _1110 = ((uint32_t)_1109);
  if ((_1110 == 4294967295u)) {
    _1122__PHI_TEMPORARY = _961;   /* for PHI node */
    _1123__PHI_TEMPORARY = _962;   /* for PHI node */
    _1124__PHI_TEMPORARY = _963;   /* for PHI node */
    goto _1267;
  } else {
    _1111__PHI_TEMPORARY = _1110;   /* for PHI node */
    goto _1333;
  }

_1333:
  _1111 = _1111__PHI_TEMPORARY;
  switch (_1111) {
  default:
    goto _1340;
  case 167772160u:
    _1116__PHI_TEMPORARY = 0;   /* for PHI node */
    _1117__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1341;
  case 3800083968u:
    goto _1342;
  case 3800083712u:
    goto _1342;
  case 3800083200u:
    goto _1342;
  case 3800082944u:
    goto _1342;
  case 3800083456u:
    goto _1343;
  case 3800147968u:
    goto _1344;
  case 3800147712u:
    goto _1344;
  case 3800147456u:
    goto _1344;
  }

_1344:
  _1114 = llvm_add_u64(_963, 1);
  _1116__PHI_TEMPORARY = _962;   /* for PHI node */
  _1117__PHI_TEMPORARY = _1114;   /* for PHI node */
  goto _1341;

_1343:
  _1112 = llvm_add_u64(_962, -1);
  _1116__PHI_TEMPORARY = _1112;   /* for PHI node */
  _1117__PHI_TEMPORARY = _963;   /* for PHI node */
  goto _1341;

_1342:
  _1115 = llvm_add_u64(_962, 1);
  _1116__PHI_TEMPORARY = _1115;   /* for PHI node */
  _1117__PHI_TEMPORARY = _963;   /* for PHI node */
  goto _1341;

_1340:
  _1113 = llvm_add_u64(_963, (((int64_t)(bool)0-(_1111 == 3800148224u))));
  _1116__PHI_TEMPORARY = _962;   /* for PHI node */
  _1117__PHI_TEMPORARY = _1113;   /* for PHI node */
  goto _1341;

_1341:
  _1116 = _1116__PHI_TEMPORARY;
  _1117 = _1117__PHI_TEMPORARY;
  _1118 = llvm_OC_ctlz_OC_i32((_1111 ^ -1), 0);
  _1119 = llvm_OC_cttz_OC_i32(_1111, 0);
  _1120 = _1119 & 56;
  _1121 = _961 & (((((_1118 != 1u) & (((uint32_t)(llvm_add_u32((_1118 << 3), _1120))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_1119) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_1111 & 12632256) ^ 8421504), _1120)) == 0u)))) & ((((_1111 & -33554432) != 3221225472u) & ((_1111 & -2097152) != 3766484992u)) & ((_1111 & -1048576) != 4034920448u))) & ((((uint32_t)_1111) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_1111, 293568512))) < ((uint32_t)101662656u))));
  _961__PHI_TEMPORARY = _1121;   /* for PHI node */
  _962__PHI_TEMPORARY = _1116;   /* for PHI node */
  _963__PHI_TEMPORARY = _1117;   /* for PHI node */
  goto _1262;

  } while (1); /* end of syntactic loop '' */
_1317:
  _968 = *(void**)_256;
  _969 = ((&((uint8_t*)_968)[((int64_t)16)]));
  _970 = *(uint64_t*)_969;
  _971 = ((&((uint8_t*)_968)[((int64_t)8)]));
  _972 = *(uint64_t*)_971;
  if ((((int64_t)_972) > ((int64_t)_970))) {
    goto _1345;
  } else {
    _989__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1346;
  }

_1345:
  _973 = *(void**)_968;
  _974 = *(uint8_t*)(((&((uint8_t*)_973)[((int64_t)_970)])));
  *(uint64_t*)_969 = (llvm_add_u64(_970, 1));
  _975 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_974)), 0);
  _976 = llvm_sub_u8(32, (llvm_shl_u8(_975, 3)));
  _977 = (((uint32_t)(uint8_t)_974)) << 24;
  if ((((uint8_t)_976) > ((uint8_t)((uint8_t)16)))) {
    _989__PHI_TEMPORARY = _977;   /* for PHI node */
    goto _1346;
  } else {
    _978__PHI_TEMPORARY = 16;   /* for PHI node */
    _979__PHI_TEMPORARY = _977;   /* for PHI node */
    goto _1347;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1347:
  _978 = _978__PHI_TEMPORARY;
  _979 = _979__PHI_TEMPORARY;
  if (((((int64_t)_978) < ((int64_t)UINT64_C(0))) | (((uint64_t)_978) < ((uint64_t)(((uint64_t)(uint8_t)_976)))))) {
    _989__PHI_TEMPORARY = _979;   /* for PHI node */
    goto _1346;
  } else {
    goto _1348;
  }

_1348:
  _980 = *(uint64_t*)_969;
  _981 = *(uint64_t*)_971;
  if ((((int64_t)_981) > ((int64_t)_980))) {
    goto _1349;
  } else {
    _989__PHI_TEMPORARY = _979;   /* for PHI node */
    goto _1346;
  }

_1349:
  _982 = *(void**)_968;
  _983 = *(uint8_t*)(((&((uint8_t*)_982)[((int64_t)_980)])));
  if ((((int8_t)_983) > ((int8_t)((uint8_t)-65)))) {
    _989__PHI_TEMPORARY = _979;   /* for PHI node */
    goto _1346;
  } else {
    goto _1350;
  }

_1350:
  _984 = llvm_select_u32((((int64_t)_980) < ((int64_t)_981)), (((uint32_t)(uint8_t)_983)), 0);
  _985 = *(uint64_t*)_969;
  *(uint64_t*)_969 = (llvm_add_u64(_985, 1));
  _986 = llvm_neg_u64(_978);
  _987 = _979 | (llvm_select_u32((((int64_t)_978) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_986) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_984, (((uint32_t)_986)))))), (llvm_select_u32((((uint64_t)_978) > ((uint64_t)UINT64_C(31))), 0, (_984 << (((uint32_t)_978)))))));
  _988 = llvm_add_u64(_978, -8);
  _978__PHI_TEMPORARY = _988;   /* for PHI node */
  _979__PHI_TEMPORARY = _987;   /* for PHI node */
  goto _1347;

  } while (1); /* end of syntactic loop '' */
_1346:
  _989 = _989__PHI_TEMPORARY;
  _990 = *(uint64_t*)_335;
  _991 = *(uint64_t*)_337;
  _992 = jsyn_cbe_fshl_i64(_991, _990, 32);
  _993 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_989)), _991, 32);
  *(uint64_t*)_335 = _992;
  *(uint64_t*)_337 = _993;
  _994 = ((&((uint8_t*)_256)[((int64_t)48)]));
  _995 = ((&((uint8_t*)_256)[((int64_t)56)]));
  _996 = *(uint64_t*)_995;
  _997 = ((&((uint8_t*)_256)[((int64_t)64)]));
  _998 = *(uint64_t*)_997;
  _999 = ((&((uint8_t*)_256)[((int64_t)72)]));
  _1000 = *(uint64_t*)_999;
  _1001 = *(void**)_256;
  _1002 = *(uint64_t*)(((&((uint8_t*)_1001)[((int64_t)16)])));
  *(uint64_t*)_994 = _996;
  *(uint64_t*)_995 = _998;
  *(uint64_t*)_997 = _1000;
  *(uint64_t*)_999 = _1002;
  _1003 = llvm_select_u64((_965 == UINT64_C(167772160)), 0, _962);
  _1004 = llvm_select_u64((_965 == UINT64_C(167772160)), 0, _963);
  if ((_965 == UINT64_C(218103808))) {
    goto _1351;
  } else {
    _1122__PHI_TEMPORARY = _961;   /* for PHI node */
    _1123__PHI_TEMPORARY = _1003;   /* for PHI node */
    _1124__PHI_TEMPORARY = _1004;   /* for PHI node */
    goto _1267;
  }

_1351:
  _1005 = *(uint64_t*)_335;
  if (((_1005 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1352;
  } else {
    _1122__PHI_TEMPORARY = _961;   /* for PHI node */
    _1123__PHI_TEMPORARY = _962;   /* for PHI node */
    _1124__PHI_TEMPORARY = _963;   /* for PHI node */
    goto _1267;
  }

_1352:
  _1006 = *(void**)_256;
  _1007 = ((&((uint8_t*)_1006)[((int64_t)16)]));
  _1008 = *(uint64_t*)_1007;
  _1009 = ((&((uint8_t*)_1006)[((int64_t)8)]));
  _1010 = *(uint64_t*)_1009;
  if ((((int64_t)_1010) > ((int64_t)_1008))) {
    goto _1353;
  } else {
    _1027__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1354;
  }

_1353:
  _1011 = *(void**)_1006;
  _1012 = *(uint8_t*)(((&((uint8_t*)_1011)[((int64_t)_1008)])));
  *(uint64_t*)_1007 = (llvm_add_u64(_1008, 1));
  _1013 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1012)), 0);
  _1014 = llvm_sub_u8(32, (llvm_shl_u8(_1013, 3)));
  _1015 = (((uint32_t)(uint8_t)_1012)) << 24;
  if ((((uint8_t)_1014) > ((uint8_t)((uint8_t)16)))) {
    _1027__PHI_TEMPORARY = _1015;   /* for PHI node */
    goto _1354;
  } else {
    _1016__PHI_TEMPORARY = 16;   /* for PHI node */
    _1017__PHI_TEMPORARY = _1015;   /* for PHI node */
    goto _1355;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1355:
  _1016 = _1016__PHI_TEMPORARY;
  _1017 = _1017__PHI_TEMPORARY;
  if (((((int64_t)_1016) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1016) < ((uint64_t)(((uint64_t)(uint8_t)_1014)))))) {
    _1027__PHI_TEMPORARY = _1017;   /* for PHI node */
    goto _1354;
  } else {
    goto _1356;
  }

_1356:
  _1018 = *(uint64_t*)_1007;
  _1019 = *(uint64_t*)_1009;
  if ((((int64_t)_1019) > ((int64_t)_1018))) {
    goto _1357;
  } else {
    _1027__PHI_TEMPORARY = _1017;   /* for PHI node */
    goto _1354;
  }

_1357:
  _1020 = *(void**)_1006;
  _1021 = *(uint8_t*)(((&((uint8_t*)_1020)[((int64_t)_1018)])));
  if ((((int8_t)_1021) > ((int8_t)((uint8_t)-65)))) {
    _1027__PHI_TEMPORARY = _1017;   /* for PHI node */
    goto _1354;
  } else {
    goto _1358;
  }

_1358:
  _1022 = llvm_select_u32((((int64_t)_1018) < ((int64_t)_1019)), (((uint32_t)(uint8_t)_1021)), 0);
  _1023 = *(uint64_t*)_1007;
  *(uint64_t*)_1007 = (llvm_add_u64(_1023, 1));
  _1024 = llvm_neg_u64(_1016);
  _1025 = _1017 | (llvm_select_u32((((int64_t)_1016) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1024) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1022, (((uint32_t)_1024)))))), (llvm_select_u32((((uint64_t)_1016) > ((uint64_t)UINT64_C(31))), 0, (_1022 << (((uint32_t)_1016)))))));
  _1026 = llvm_add_u64(_1016, -8);
  _1016__PHI_TEMPORARY = _1026;   /* for PHI node */
  _1017__PHI_TEMPORARY = _1025;   /* for PHI node */
  goto _1355;

  } while (1); /* end of syntactic loop '' */
_1354:
  _1027 = _1027__PHI_TEMPORARY;
  _1028 = *(uint64_t*)_335;
  _1029 = *(uint64_t*)_337;
  _1030 = jsyn_cbe_fshl_i64(_1029, _1028, 32);
  _1031 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1027)), _1029, 32);
  *(uint64_t*)_335 = _1030;
  *(uint64_t*)_337 = _1031;
  _1032 = *(uint64_t*)_995;
  _1033 = *(uint64_t*)_997;
  _1034 = *(uint64_t*)_999;
  _1035 = *(void**)_256;
  _1036 = *(uint64_t*)(((&((uint8_t*)_1035)[((int64_t)16)])));
  *(uint64_t*)_994 = _1032;
  *(uint64_t*)_995 = _1033;
  *(uint64_t*)_997 = _1034;
  *(uint64_t*)_999 = _1036;
  _1122__PHI_TEMPORARY = _961;   /* for PHI node */
  _1123__PHI_TEMPORARY = 0;   /* for PHI node */
  _1124__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1267;

_1325:
  if (((_1040 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1324;
  } else {
    _1122__PHI_TEMPORARY = _961;   /* for PHI node */
    _1123__PHI_TEMPORARY = _962;   /* for PHI node */
    _1124__PHI_TEMPORARY = _963;   /* for PHI node */
    goto _1267;
  }

_1324:
  _1122__PHI_TEMPORARY = _961;   /* for PHI node */
  _1123__PHI_TEMPORARY = 0;   /* for PHI node */
  _1124__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1267;

_1267:
  _1122 = _1122__PHI_TEMPORARY;
  _1123 = _1123__PHI_TEMPORARY;
  _1124 = _1124__PHI_TEMPORARY;
  if (_1122) {
    goto _1359;
  } else {
    _1128__PHI_TEMPORARY = 762;   /* for PHI node */
    goto _1360;
  }

_1359:
  if ((_284 == 654311424u)) {
    _1128__PHI_TEMPORARY = 51;   /* for PHI node */
    goto _1360;
  } else {
    goto _1361;
  }

_1361:
  if ((llvm_select_bool((_1123 == UINT64_C(0)), (_1124 == UINT64_C(0)), 0))) {
    goto _1362;
  } else {
    _1128__PHI_TEMPORARY = 766;   /* for PHI node */
    goto _1360;
  }

_1362:
  switch (_284) {
  default:
    goto _1363;
  case 570425344u:
    _1128__PHI_TEMPORARY = 50;   /* for PHI node */
    goto _1360;
  case 1610612736u:
    goto _1364;
  }

_1363:
  _1125 = julia_AssertionError_17(_255, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)264)]))));
  *(void**)(((&((uint8_t*)(&_257))[((int64_t)16)]))) = ((_1125.array[0]));
  _1126 = *(void**)(((&((uint8_t*)_255)[((int64_t)16)])));
  _1127 = jsk_ijl_gc_small_alloc(_1126, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)296)])))));
  *(void**)(((&((uint8_t*)_1127)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)296)])));
  *(void**)_1127 = ((_1125.array[0]));
  *(void**)(((&((uint8_t*)(&_257))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_1127);
  __builtin_unreachable();

_1364:
  _1128__PHI_TEMPORARY = 52;   /* for PHI node */
  goto _1360;

_1360:
  _1128 = _1128__PHI_TEMPORARY;
  julia_emit_11((&_274), _255, _256, _1128, 1);
  _328__PHI_TEMPORARY = (&_274);   /* for PHI node */
  goto _1144;

}


static void julia__next_token_9(void* _1365, void* _1366, void* _1367, uint32_t _1368) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _1369 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _1370;
  void* _1371;
  void* _1372;
  struct l_array_4_uint64_t _1373;    /* Address-exposed local */
  struct l_array_4_uint64_t _1374;    /* Address-exposed local */
  struct l_array_4_uint64_t _1375;    /* Address-exposed local */
  struct l_array_4_uint64_t _1376;    /* Address-exposed local */
  struct l_array_4_uint64_t _1377;    /* Address-exposed local */
  struct l_array_4_uint64_t _1378;    /* Address-exposed local */
  struct l_array_4_uint64_t _1379;    /* Address-exposed local */
  struct l_array_4_uint64_t _1380;    /* Address-exposed local */
  struct l_array_4_uint64_t _1381;    /* Address-exposed local */
  struct l_array_4_uint64_t _1382;    /* Address-exposed local */
  struct l_array_4_uint64_t _1383;    /* Address-exposed local */
  struct l_array_4_uint64_t _1384;    /* Address-exposed local */
  struct l_array_4_uint64_t _1385;    /* Address-exposed local */
  struct l_array_4_uint64_t _1386;    /* Address-exposed local */
  struct l_array_4_uint64_t _1387;    /* Address-exposed local */
  struct l_array_4_uint64_t _1388;    /* Address-exposed local */
  struct l_array_4_uint64_t _1389;    /* Address-exposed local */
  struct l_array_4_uint64_t _1390;    /* Address-exposed local */
  struct l_array_4_uint64_t _1391;    /* Address-exposed local */
  struct l_array_4_uint64_t _1392;    /* Address-exposed local */
  struct l_array_4_uint64_t _1393;    /* Address-exposed local */
  struct l_array_4_uint64_t _1394;    /* Address-exposed local */
  struct l_array_4_uint64_t _1395;    /* Address-exposed local */
  struct l_array_4_uint64_t _1396;    /* Address-exposed local */
  struct l_array_4_uint64_t _1397;    /* Address-exposed local */
  struct l_array_4_uint64_t _1398;    /* Address-exposed local */
  struct l_array_4_uint64_t _1399;    /* Address-exposed local */
  struct l_array_4_uint64_t _1400;    /* Address-exposed local */
  struct l_array_4_uint64_t _1401;    /* Address-exposed local */
  struct l_array_4_uint64_t _1402;    /* Address-exposed local */
  struct l_array_4_uint64_t _1403;    /* Address-exposed local */
  struct l_array_4_uint64_t _1404;    /* Address-exposed local */
  struct l_array_4_uint64_t _1405;    /* Address-exposed local */
  struct l_array_4_uint64_t _1406;    /* Address-exposed local */
  struct l_array_4_uint64_t _1407;    /* Address-exposed local */
  struct l_array_4_uint64_t _1408;    /* Address-exposed local */
  struct l_array_4_uint64_t _1409;    /* Address-exposed local */
  struct l_array_4_uint64_t _1410;    /* Address-exposed local */
  struct l_array_4_uint64_t _1411;    /* Address-exposed local */
  struct l_array_4_uint64_t _1412;    /* Address-exposed local */
  void* _1413;
  void* _1413__PHI_TEMPORARY;
  void* _1414;
  void* _1415;
  uint32_t _1416;
  uint64_t _1417;
  uint32_t _1418;
  uint32_t _1419;
  uint64_t _1420;
  bool _1421;
  bool _1422;
  uint32_t _1423;
  bool _1424;
  bool _1425;
  uint32_t _1426;
  uint32_t _1427;
  uint32_t _1428;
  bool _1429;
  bool _1429__PHI_TEMPORARY;
  void* _1430;
  uint16_t _1431;
  uint16_t _1432;
  void* _1433;
  void* _1434;
  void* _1435;
  void* _1436;
  uint64_t _1437;
  uint64_t _1438;
  void* _1439;
  uint64_t _1440;
  void* _1441;
  void* _1442;
  uint8_t _1443;
  uint8_t _1443__PHI_TEMPORARY;
  void* _1444;
  uint64_t _1445;
  void* _1446;
  void* _1447;
  void* _1448;
  uint64_t _1449;
  void* _1450;
  uint64_t _1451;
  void* _1452;
  uint8_t _1453;
  uint8_t _1454;
  uint8_t _1455;
  uint32_t _1456;
  uint64_t _1457;
  uint64_t _1457__PHI_TEMPORARY;
  uint32_t _1458;
  uint32_t _1458__PHI_TEMPORARY;
  uint64_t _1459;
  uint64_t _1460;
  void* _1461;
  uint8_t _1462;
  uint32_t _1463;
  uint64_t _1464;
  uint64_t _1465;
  uint32_t _1466;
  uint64_t _1467;
  uint32_t _1468;
  uint32_t _1468__PHI_TEMPORARY;
  uint64_t _1469;
  uint64_t _1470;
  uint64_t _1471;
  uint64_t _1472;
  void* _1473;
  uint64_t _1474;
  void* _1475;
  uint64_t _1476;
  void* _1477;
  uint64_t _1478;
  void* _1479;
  uint64_t _1480;
  uint16_t _1481;
  uint16_t _1481__PHI_TEMPORARY;
  uint32_t _1482;
  uint32_t _1483;
  uint32_t _1484;
  uint32_t _1484__PHI_TEMPORARY;
  uint32_t _1485;
  uint64_t _1486;
  uint64_t _1486__PHI_TEMPORARY;
  uint64_t _1487;
  uint64_t _1487__PHI_TEMPORARY;
  uint64_t _1488;
  uint64_t _1489;
  uint32_t _1490;
  uint64_t _1491;
  uint64_t _1492;
  uint16_t _1493;
  uint16_t _1493__PHI_TEMPORARY;
  uint32_t _1494;
  uint32_t _1495;
  uint32_t _1496;
  uint32_t _1496__PHI_TEMPORARY;
  uint32_t _1497;
  uint16_t _1498;
  uint16_t _1499;
  uint16_t _1499__PHI_TEMPORARY;
  uint16_t _1500;

  _1370 = ((uint32_t)_1368);
  _1371 = memset((&_1369), 0, 24);
  *((uint64_t*)&_1369) = 4;
  _1372 = *(void**)_1366;
  *(void**)(((&((uint8_t*)(&_1369))[((int64_t)8)]))) = _1372;
  *(void**)_1366 = (&_1369);
  if ((_1370 == 4294967295u)) {
    goto _1501;
  } else {
    goto _1502;
  }

_1503:
  _1413 = _1413__PHI_TEMPORARY;
  _1414 = memcpy(_1365, _1413, 32);
  _1415 = *(void**)(((&((uint8_t*)(&_1369))[((int64_t)8)])));
  *(void**)_1366 = _1415;
  return;
_1501:
  julia_emit_11((&_1373), _1366, _1367, 752, 1);
  _1413__PHI_TEMPORARY = (&_1373);   /* for PHI node */
  goto _1503;

_1502:
  _1416 = llvm_OC_ctlz_OC_i32((_1370 ^ -1), 0);
  _1417 = ((uint64_t)(uint32_t)_1416);
  _1418 = llvm_OC_cttz_OC_i32(_1370, 0);
  _1419 = _1418 & 56;
  _1420 = ((uint64_t)(uint32_t)_1419);
  _1421 = llvm_select_bool((((uint32_t)_1418) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1370 & 12632256) ^ 8421504), _1419)) != 0u), 0);
  _1422 = ((_1416 == 1u) | (((uint64_t)(llvm_add_u64((_1417 << 3), _1420))) > ((uint64_t)UINT64_C(32)))) | _1421;
  _1423 = llvm_lshr_u32(_1370, 24);
  _1424 = (((_1370 & -33554432) == 3221225472u) | ((_1370 & -2097152) == 3766484992u)) | ((_1370 & -1048576) == 4034920448u);
  _1425 = ((((uint32_t)_1370) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_1370, 293568512))) < ((uint32_t)101662656u))) & ((_1422 | _1424) ^ 1);
  if (_1425) {
    goto _1504;
  } else {
    _1429__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1505;
  }

_1504:
  if ((((uint32_t)(llvm_add_u32(_1370, -150994944))) < ((uint32_t)67108865u))) {
    _1429__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1505;
  } else {
    goto _1506;
  }

_1506:
  switch (_1370) {
  default:
    goto _1507;
  case 3263496192u:
    _1429__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1505;
  case 536870912u:
    _1429__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1505;
  }

_1507:
  if (((((uint32_t)_1370) < ((uint32_t)3265265664u)) | _1422)) {
    _1429__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1505;
  } else {
    goto _1508;
  }

_1508:
  if (((((uint64_t)(llvm_add_u64((_1417 << 3), _1420))) > ((uint64_t)UINT64_C(32))) | _1424)) {
    goto _1509;
  } else {
    goto _1510;
  }

_1509:
  julia_throw_invalid_char_12(_1366, _1370);
  __builtin_unreachable();

_1510:
  _1426 = llvm_select_u32((((uint32_t)_1418) < ((uint32_t)32u)), (llvm_lshr_u32((_1370 & (llvm_lshr_u32(-1, _1416))), _1419)), 0);
  _1427 = (((_1426 & 127) | ((llvm_lshr_u32(_1426, 2)) & 8128)) | ((llvm_lshr_u32(_1426, 4)) & 520192)) | ((llvm_lshr_u32(_1426, 6)) & 33292288);
  if ((((uint32_t)_1427) > ((uint32_t)1114111u))) {
    _1429__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1505;
  } else {
    goto _1511;
  }

_1511:
  _1428 = jsk_utf8proc_category(_1427);
  _1429__PHI_TEMPORARY = (_1428 == 23u);   /* for PHI node */
  goto _1505;

_1505:
  _1429 = _1429__PHI_TEMPORARY;
  if ((_1429 | (_1370 == 4022058752u))) {
    goto _1512;
  } else {
    goto _1513;
  }

_1512:
  julia_lex_whitespace_18((&_1374), _1366, _1367, _1370);
  _1413__PHI_TEMPORARY = (&_1374);   /* for PHI node */
  goto _1503;

_1513:
  switch (_1370) {
  default:
    goto _1514;
  case 1526726656u:
    goto _1515;
  case 1560281088u:
    goto _1516;
  case 2063597568u:
    goto _1517;
  case 989855744u:
    goto _1518;
  case 2097152000u:
    goto _1519;
  case 671088640u:
    goto _1520;
  case 687865856u:
    goto _1521;
  case 738197504u:
    goto _1522;
  case 704643072u:
    goto _1523;
  case 1577058304u:
    goto _1524;
  case 1073741824u:
    goto _1525;
  case 1056964608u:
    goto _1526;
  case 603979776u:
    goto _1527;
  case 3800742656u:
    goto _1528;
  case 2113929216u:
    goto _1529;
  case 587202560u:
    goto _1530;
  case 1023410176u:
    goto _1531;
  case 553648128u:
    goto _1532;
  case 1040187392u:
    goto _1533;
  case 1006632960u:
    goto _1534;
  case 973078528u:
    goto _1535;
  case 2080374784u:
    goto _1536;
  case 637534208u:
    goto _1537;
  case 654311424u:
    goto _1538;
  case 3283550208u:
    goto _1539;
  case 570425344u:
    goto _1540;
  case 620756992u:
    goto _1541;
  case 788529152u:
    goto _1542;
  case 1543503872u:
    goto _1543;
  case 771751936u:
    goto _1544;
  case 721420288u:
    goto _1545;
  case 754974720u:
    goto _1546;
  case 3800601088u:
    goto _1547;
  case 1610612736u:
    goto _1548;
  }

_1515:
  julia_emit_11((&_1375), _1366, _1367, 56, 1);
  _1413__PHI_TEMPORARY = (&_1375);   /* for PHI node */
  goto _1503;

_1516:
  julia_emit_11((&_1376), _1366, _1367, 57, 1);
  _1413__PHI_TEMPORARY = (&_1376);   /* for PHI node */
  goto _1503;

_1517:
  julia_emit_11((&_1377), _1366, _1367, 58, 1);
  _1413__PHI_TEMPORARY = (&_1377);   /* for PHI node */
  goto _1503;

_1518:
  julia_emit_11((&_1378), _1366, _1367, 55, 1);
  _1413__PHI_TEMPORARY = (&_1378);   /* for PHI node */
  goto _1503;

_1519:
  julia_emit_11((&_1379), _1366, _1367, 59, 1);
  _1413__PHI_TEMPORARY = (&_1379);   /* for PHI node */
  goto _1503;

_1520:
  julia_emit_11((&_1380), _1366, _1367, 60, 1);
  _1413__PHI_TEMPORARY = (&_1380);   /* for PHI node */
  goto _1503;

_1521:
  julia_emit_11((&_1381), _1366, _1367, 61, 1);
  _1413__PHI_TEMPORARY = (&_1381);   /* for PHI node */
  goto _1503;

_1522:
  julia_emit_11((&_1382), _1366, _1367, 54, 1);
  _1413__PHI_TEMPORARY = (&_1382);   /* for PHI node */
  goto _1503;

_1523:
  julia_lex_star_19((&_1383), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1383);   /* for PHI node */
  goto _1503;

_1524:
  julia_lex_circumflex_20((&_1384), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1384);   /* for PHI node */
  goto _1503;

_1525:
  julia_emit_11((&_1385), _1366, _1367, 53, 1);
  _1413__PHI_TEMPORARY = (&_1385);   /* for PHI node */
  goto _1503;

_1526:
  julia_emit_11((&_1386), _1366, _1367, 79, 1);
  _1413__PHI_TEMPORARY = (&_1386);   /* for PHI node */
  goto _1503;

_1527:
  julia_lex_dollar_21((&_1387), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1387);   /* for PHI node */
  goto _1503;

_1528:
  julia_lex_xor_22((&_1388), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1388);   /* for PHI node */
  goto _1503;

_1529:
  julia_emit_11((&_1389), _1366, _1367, 74, 1);
  _1413__PHI_TEMPORARY = (&_1389);   /* for PHI node */
  goto _1503;

_1530:
  julia_lex_comment_23((&_1390), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1390);   /* for PHI node */
  goto _1503;

_1531:
  julia_lex_equal_24((&_1391), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1391);   /* for PHI node */
  goto _1503;

_1532:
  julia_lex_exclaim_25((&_1392), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1392);   /* for PHI node */
  goto _1503;

_1533:
  julia_lex_greater_26((&_1393), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1393);   /* for PHI node */
  goto _1503;

_1534:
  julia_lex_less_27((&_1394), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1394);   /* for PHI node */
  goto _1503;

_1535:
  julia_lex_colon_28((&_1395), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1395);   /* for PHI node */
  goto _1503;

_1536:
  julia_lex_bar_29((&_1396), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1396);   /* for PHI node */
  goto _1503;

_1537:
  julia_lex_amper_30((&_1397), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1397);   /* for PHI node */
  goto _1503;

_1538:
  _1430 = ((&((uint8_t*)_1367)[((int64_t)16)]));
  _1431 = *(uint16_t*)_1430;
  if (((_1431 != ((uint16_t)3)) & (((uint16_t)(llvm_add_u16(_1431, -43))) < ((uint16_t)((uint16_t)-9))))) {
    goto _1549;
  } else {
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  }

_1549:
  switch (_1431) {
  default:
    goto _1551;
  case ((uint16_t)252):
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  case ((uint16_t)253):
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  case ((uint16_t)706):
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  }

_1551:
  _1432 = *(uint16_t*)_1430;
  switch (_1432) {
  default:
    goto _1552;
  case ((uint16_t)707):
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  case ((uint16_t)61):
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  case ((uint16_t)57):
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  case ((uint16_t)59):
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  case ((uint16_t)709):
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  case ((uint16_t)33):
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  }

_1552:
  if ((((uint16_t)(llvm_add_u16(_1432, -53))) < ((uint16_t)((uint16_t)-10)))) {
    goto _1553;
  } else {
    _1443__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1550;
  }

_1553:
  _1433 = *(void**)(((&((uint8_t*)_1367)[((int64_t)24)])));
  _1434 = *(void**)_1433;
  _1435 = *(void**)(((&((uint8_t*)_1433)[((int64_t)8)])));
  _1436 = ((&((uint8_t*)_1433)[((int64_t)16)]));
  _1437 = *(uint64_t*)_1436;
  _1438 = llvm_add_u64(_1437, 1);
  _1439 = *(void**)(((&((uint8_t*)_1435)[((int64_t)8)])));
  _1440 = *(uint64_t*)_1435;
  if ((((int64_t)_1440) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1434)), (((uint64_t)(uintptr_t)_1439)))), 4)), 1)), _1437))))) {
    goto _1554;
  } else {
    goto _1555;
  }

_1554:
  *(void**)(((&((uint8_t*)(&_1369))[((int64_t)16)]))) = _1433;
  julia__growend_internalNOT_OC__31(_1366, _1433, 1, _1437);
  goto _1555;

_1555:
  *(uint64_t*)_1436 = _1438;
  _1441 = *(void**)_1433;
  _1442 = memcpy((((&((uint8_t*)_1441)[((int64_t)(_1437 << 4))]))), (&_j_constYY_OC_51), 16);
  _1443__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1550;

_1550:
  _1443 = _1443__PHI_TEMPORARY;
  julia_emit_11((&_1398), _1366, _1367, 709, _1443);
  _1413__PHI_TEMPORARY = (&_1398);   /* for PHI node */
  goto _1503;

_1539:
  julia_lex_division_32((&_1399), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1399);   /* for PHI node */
  goto _1503;

_1540:
  julia_lex_quote_33((&_1400), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1400);   /* for PHI node */
  goto _1503;

_1541:
  julia_lex_percent_34((&_1401), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1401);   /* for PHI node */
  goto _1503;

_1542:
  julia_lex_forwardslash_35((&_1402), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1402);   /* for PHI node */
  goto _1503;

_1543:
  julia_lex_backslash_36((&_1403), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1403);   /* for PHI node */
  goto _1503;

_1544:
  julia_lex_dot_37((&_1404), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1404);   /* for PHI node */
  goto _1503;

_1545:
  julia_lex_plus_38((&_1405), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1405);   /* for PHI node */
  goto _1503;

_1546:
  julia_lex_minus_39((&_1406), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1406);   /* for PHI node */
  goto _1503;

_1547:
  _1444 = ((&((uint8_t*)_1367)[((int64_t)32)]));
  _1445 = *(uint64_t*)_1444;
  _1446 = ((&((uint8_t*)_1367)[((int64_t)40)]));
  if (((_1445 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _1556;
  } else {
    _1481__PHI_TEMPORARY = 536;   /* for PHI node */
    goto _1557;
  }

_1556:
  _1447 = *(void**)_1367;
  _1448 = ((&((uint8_t*)_1447)[((int64_t)16)]));
  _1449 = *(uint64_t*)_1448;
  _1450 = ((&((uint8_t*)_1447)[((int64_t)8)]));
  _1451 = *(uint64_t*)_1450;
  if ((((int64_t)_1451) > ((int64_t)_1449))) {
    goto _1558;
  } else {
    _1468__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1559;
  }

_1558:
  _1452 = *(void**)_1447;
  _1453 = *(uint8_t*)(((&((uint8_t*)_1452)[((int64_t)_1449)])));
  *(uint64_t*)_1448 = (llvm_add_u64(_1449, 1));
  _1454 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1453)), 0);
  _1455 = llvm_sub_u8(32, (llvm_shl_u8(_1454, 3)));
  _1456 = (((uint32_t)(uint8_t)_1453)) << 24;
  if ((((uint8_t)_1455) > ((uint8_t)((uint8_t)16)))) {
    _1468__PHI_TEMPORARY = _1456;   /* for PHI node */
    goto _1559;
  } else {
    _1457__PHI_TEMPORARY = 16;   /* for PHI node */
    _1458__PHI_TEMPORARY = _1456;   /* for PHI node */
    goto _1560;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1560:
  _1457 = _1457__PHI_TEMPORARY;
  _1458 = _1458__PHI_TEMPORARY;
  if (((((int64_t)_1457) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1457) < ((uint64_t)(((uint64_t)(uint8_t)_1455)))))) {
    _1468__PHI_TEMPORARY = _1458;   /* for PHI node */
    goto _1559;
  } else {
    goto _1561;
  }

_1561:
  _1459 = *(uint64_t*)_1448;
  _1460 = *(uint64_t*)_1450;
  if ((((int64_t)_1460) > ((int64_t)_1459))) {
    goto _1562;
  } else {
    _1468__PHI_TEMPORARY = _1458;   /* for PHI node */
    goto _1559;
  }

_1562:
  _1461 = *(void**)_1447;
  _1462 = *(uint8_t*)(((&((uint8_t*)_1461)[((int64_t)_1459)])));
  if ((((int8_t)_1462) > ((int8_t)((uint8_t)-65)))) {
    _1468__PHI_TEMPORARY = _1458;   /* for PHI node */
    goto _1559;
  } else {
    goto _1563;
  }

_1563:
  _1463 = llvm_select_u32((((int64_t)_1459) < ((int64_t)_1460)), (((uint32_t)(uint8_t)_1462)), 0);
  _1464 = *(uint64_t*)_1448;
  *(uint64_t*)_1448 = (llvm_add_u64(_1464, 1));
  _1465 = llvm_neg_u64(_1457);
  _1466 = _1458 | (llvm_select_u32((((int64_t)_1457) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1465) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1463, (((uint32_t)_1465)))))), (llvm_select_u32((((uint64_t)_1457) > ((uint64_t)UINT64_C(31))), 0, (_1463 << (((uint32_t)_1457)))))));
  _1467 = llvm_add_u64(_1457, -8);
  _1457__PHI_TEMPORARY = _1467;   /* for PHI node */
  _1458__PHI_TEMPORARY = _1466;   /* for PHI node */
  goto _1560;

  } while (1); /* end of syntactic loop '' */
_1559:
  _1468 = _1468__PHI_TEMPORARY;
  _1469 = *(uint64_t*)_1444;
  _1470 = *(uint64_t*)_1446;
  _1471 = jsyn_cbe_fshl_i64(_1470, _1469, 32);
  _1472 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1468)), _1470, 32);
  *(uint64_t*)_1444 = _1471;
  *(uint64_t*)_1446 = _1472;
  _1473 = ((&((uint8_t*)_1367)[((int64_t)56)]));
  _1474 = *(uint64_t*)_1473;
  _1475 = ((&((uint8_t*)_1367)[((int64_t)64)]));
  _1476 = *(uint64_t*)_1475;
  _1477 = ((&((uint8_t*)_1367)[((int64_t)72)]));
  _1478 = *(uint64_t*)_1477;
  _1479 = *(void**)_1367;
  _1480 = *(uint64_t*)(((&((uint8_t*)_1479)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1367)[((int64_t)48)]))) = _1474;
  *(uint64_t*)_1473 = _1476;
  *(uint64_t*)_1475 = _1478;
  *(uint64_t*)_1477 = _1480;
  _1481__PHI_TEMPORARY = 71;   /* for PHI node */
  goto _1557;

_1557:
  _1481 = _1481__PHI_TEMPORARY;
  julia_emit_11((&_1407), _1366, _1367, _1481, 1);
  _1413__PHI_TEMPORARY = (&_1407);   /* for PHI node */
  goto _1503;

_1548:
  julia_lex_backtick_40((&_1408), _1366, _1367);
  _1413__PHI_TEMPORARY = (&_1408);   /* for PHI node */
  goto _1503;

_1514:
  if ((_1425 & (_1370 != 4036993714u))) {
    goto _1564;
  } else {
    goto _1565;
  }

_1564:
  if ((((int32_t)_1370) < ((int32_t)0u))) {
    goto _1566;
  } else {
    _1484__PHI_TEMPORARY = _1423;   /* for PHI node */
    goto _1567;
  }

_1566:
  if ((((_1416 == 1u) | (((uint64_t)(llvm_add_u64((_1417 << 3), _1420))) > ((uint64_t)UINT64_C(32)))) | (_1421 | _1424))) {
    goto _1568;
  } else {
    goto _1569;
  }

_1568:
  julia_throw_invalid_char_12(_1366, _1370);
  __builtin_unreachable();

_1569:
  _1482 = llvm_select_u32((((uint32_t)_1418) < ((uint32_t)32u)), (llvm_lshr_u32((_1370 & (llvm_lshr_u32(-1, _1416))), _1419)), 0);
  _1483 = (((_1482 & 127) | ((llvm_lshr_u32(_1482, 2)) & 8128)) | ((llvm_lshr_u32(_1482, 4)) & 520192)) | ((llvm_lshr_u32(_1482, 6)) & 33292288);
  _1484__PHI_TEMPORARY = _1483;   /* for PHI node */
  goto _1567;

_1567:
  _1484 = _1484__PHI_TEMPORARY;
  _1485 = jsk_jl_id_start_char(_1484);
  if ((_1485 == 0u)) {
    goto _1565;
  } else {
    goto _1570;
  }

_1570:
  julia_lex_identifier_13((&_1409), _1366, _1367, _1370);
  _1413__PHI_TEMPORARY = (&_1409);   /* for PHI node */
  goto _1503;

_1565:
  if ((((uint32_t)(llvm_add_u32(_1370, -956301313))) < ((uint32_t)4143972351u))) {
    _1486__PHI_TEMPORARY = 597;   /* for PHI node */
    _1487__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1571;
  } else {
    goto _1572;
  }

_1572:
  julia_lex_digit_41((&_1410), _1366, _1367, 44);
  _1413__PHI_TEMPORARY = (&_1410);   /* for PHI node */
  goto _1503;

  do {     /* Syntactic loop '' to make GCC happy */
_1571:
  _1486 = _1486__PHI_TEMPORARY;
  _1487 = _1487__PHI_TEMPORARY;
  if ((((int64_t)_1487) > ((int64_t)_1486))) {
    _1493__PHI_TEMPORARY = 751;   /* for PHI node */
    goto _1573;
  } else {
    goto _1574;
  }

_1574:
  _1488 = llvm_lshr_u64((llvm_add_u64(_1487, _1486)), 1);
  _1489 = llvm_add_u64(_1488, -1);
  _1490 = *(uint32_t*)(((&((uint32_t*)(&_j_constYY_OC_52))[((int64_t)_1489)])));
  if ((_1490 == _1370)) {
    goto _1575;
  } else {
    goto _1576;
  }

_1576:
  _1491 = llvm_select_u64((((uint32_t)_1490) < ((uint32_t)_1370)), _1486, _1489);
  _1492 = llvm_select_u64((((uint32_t)_1490) < ((uint32_t)_1370)), (llvm_add_u64(_1488, 1)), _1487);
  _1486__PHI_TEMPORARY = _1491;   /* for PHI node */
  _1487__PHI_TEMPORARY = _1492;   /* for PHI node */
  goto _1571;

  } while (1); /* end of syntactic loop '' */
_1573:
  _1493 = _1493__PHI_TEMPORARY;
  if ((_1493 == ((uint16_t)751))) {
    goto _1577;
  } else {
    goto _1578;
  }

_1578:
  julia_emit_11((&_1411), _1366, _1367, _1493, 1);
  _1413__PHI_TEMPORARY = (&_1411);   /* for PHI node */
  goto _1503;

_1577:
  if (_1425) {
    goto _1579;
  } else {
    _1499__PHI_TEMPORARY = 762;   /* for PHI node */
    goto _1580;
  }

_1579:
  switch (_1370) {
  default:
    goto _1581;
  case 3266117632u:
    _1499__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1580;
  case 3800075008u:
    _1499__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1580;
  case 3800075264u:
    _1499__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1580;
  case 3800075520u:
    _1499__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1580;
  case 3800075776u:
    _1499__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1580;
  case 3800076032u:
    _1499__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1580;
  case 3800145920u:
    _1499__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1580;
  case 3800146176u:
    _1499__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _1580;
  }

_1581:
  if ((((int32_t)_1370) < ((int32_t)0u))) {
    goto _1582;
  } else {
    _1496__PHI_TEMPORARY = _1423;   /* for PHI node */
    goto _1583;
  }

_1582:
  if ((((_1416 == 1u) | (((uint64_t)(llvm_add_u64((_1417 << 3), _1420))) > ((uint64_t)UINT64_C(32)))) | (_1421 | _1424))) {
    goto _1584;
  } else {
    goto _1585;
  }

_1584:
  julia_throw_invalid_char_12(_1366, _1370);
  __builtin_unreachable();

_1585:
  _1494 = llvm_select_u32((((uint32_t)_1418) < ((uint32_t)32u)), (llvm_lshr_u32((_1370 & (llvm_lshr_u32(-1, _1416))), _1419)), 0);
  _1495 = (((_1494 & 127) | ((llvm_lshr_u32(_1494, 2)) & 8128)) | ((llvm_lshr_u32(_1494, 4)) & 520192)) | ((llvm_lshr_u32(_1494, 6)) & 33292288);
  _1496__PHI_TEMPORARY = _1495;   /* for PHI node */
  goto _1583;

_1583:
  _1496 = _1496__PHI_TEMPORARY;
  _1497 = jsk_jl_id_char(_1496);
  _1498 = llvm_select_u16((_1497 == 0u), 765, 764);
  _1499__PHI_TEMPORARY = _1498;   /* for PHI node */
  goto _1580;

_1580:
  _1499 = _1499__PHI_TEMPORARY;
  julia_emit_11((&_1412), _1366, _1367, _1499, 1);
  _1413__PHI_TEMPORARY = (&_1412);   /* for PHI node */
  goto _1503;

_1575:
  _1500 = *(uint16_t*)(((&((uint16_t*)(((&((uint8_t*)(&_j_constYY_OC_52))[((int64_t)2388)]))))[((int64_t)_1489)])));
  _1493__PHI_TEMPORARY = _1500;   /* for PHI node */
  goto _1573;

}


static __noreturn void julia_throw_boundserror_10(void* _1586, void* _1587, void* _1588) {
  jsk_throw();
  __builtin_unreachable();

}


static void julia_emit_11(void* _1589, void* _1590, void* _1591, uint16_t _1592, uint8_t _1593) {
  bool _1594;
  bool _1594__PHI_TEMPORARY;
  uint8_t _1595;
  uint8_t _1595__PHI_TEMPORARY;
  void* _1596;
  uint64_t _1597;
  void* _1598;
  uint8_t _1599;
  void* _1600;
  void* _1601;
  uint64_t _1602;
  void* _1603;
  uint64_t _1604;
  void* _1605;
  uint8_t _1606;
  uint8_t _1607;
  uint8_t _1608;
  uint32_t _1609;
  uint64_t _1610;
  uint64_t _1610__PHI_TEMPORARY;
  uint32_t _1611;
  uint32_t _1611__PHI_TEMPORARY;
  uint64_t _1612;
  uint64_t _1613;
  void* _1614;
  uint8_t _1615;
  uint32_t _1616;
  uint64_t _1617;
  uint64_t _1618;
  uint32_t _1619;
  uint64_t _1620;
  uint32_t _1621;
  uint32_t _1621__PHI_TEMPORARY;
  uint64_t _1622;
  uint64_t _1623;
  uint64_t _1624;
  uint64_t _1625;
  void* _1626;
  uint64_t _1627;
  void* _1628;
  uint64_t _1629;
  void* _1630;
  uint64_t _1631;
  void* _1632;
  uint64_t _1633;
  uint8_t _1634;
  uint8_t _1634__PHI_TEMPORARY;
  uint64_t _1635;
  uint64_t _1636;

  if ((llvm_select_bool(((((uint16_t)(llvm_add_u16(_1592, -716))) < ((uint16_t)((uint16_t)-650))) | (_1592 == ((uint16_t)68))), 1, (((uint16_t)(llvm_add_u16(_1592, -69))) < ((uint16_t)((uint16_t)9)))))) {
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  } else {
    goto _1638;
  }

_1638:
  switch (_1592) {
  default:
    goto _1639;
  case ((uint16_t)79):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)236):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)237):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)234):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)232):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)252):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)253):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)75):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)76):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)526):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)527):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)534):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)705):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)706):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)707):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)708):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)710):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  case ((uint16_t)711):
    _1594__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1637;
  }

_1639:
  _1594__PHI_TEMPORARY = ((llvm_and_u16(_1592, 1020)) == ((uint16_t)712));   /* for PHI node */
  goto _1637;

_1637:
  _1594 = _1594__PHI_TEMPORARY;
  if ((llvm_select_bool(_1594, 1, ((((bool)_1593&1u)) ^ 1)))) {
    _1634__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1640;
  } else {
    _1595__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1641;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1641:
  _1595 = _1595__PHI_TEMPORARY;
  _1596 = ((&((uint8_t*)_1591)[((int64_t)32)]));
  _1597 = *(uint64_t*)_1596;
  _1598 = ((&((uint8_t*)_1591)[((int64_t)40)]));
  _1599 = julia_isopsuffix_42(_1590, (((uint32_t)(llvm_lshr_u64(_1597, 32)))));
  if ((((bool)_1599&1u))) {
    goto _1642;
  } else {
    _1634__PHI_TEMPORARY = _1595;   /* for PHI node */
    goto _1640;
  }

_1642:
  _1600 = *(void**)_1591;
  _1601 = ((&((uint8_t*)_1600)[((int64_t)16)]));
  _1602 = *(uint64_t*)_1601;
  _1603 = ((&((uint8_t*)_1600)[((int64_t)8)]));
  _1604 = *(uint64_t*)_1603;
  if ((((int64_t)_1604) > ((int64_t)_1602))) {
    goto _1643;
  } else {
    _1621__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1644;
  }

_1643:
  _1605 = *(void**)_1600;
  _1606 = *(uint8_t*)(((&((uint8_t*)_1605)[((int64_t)_1602)])));
  *(uint64_t*)_1601 = (llvm_add_u64(_1602, 1));
  _1607 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1606)), 0);
  _1608 = llvm_sub_u8(32, (llvm_shl_u8(_1607, 3)));
  _1609 = (((uint32_t)(uint8_t)_1606)) << 24;
  if ((((uint8_t)_1608) > ((uint8_t)((uint8_t)16)))) {
    _1621__PHI_TEMPORARY = _1609;   /* for PHI node */
    goto _1644;
  } else {
    _1610__PHI_TEMPORARY = 16;   /* for PHI node */
    _1611__PHI_TEMPORARY = _1609;   /* for PHI node */
    goto _1645;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1645:
  _1610 = _1610__PHI_TEMPORARY;
  _1611 = _1611__PHI_TEMPORARY;
  if (((((int64_t)_1610) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1610) < ((uint64_t)(((uint64_t)(uint8_t)_1608)))))) {
    _1621__PHI_TEMPORARY = _1611;   /* for PHI node */
    goto _1644;
  } else {
    goto _1646;
  }

_1646:
  _1612 = *(uint64_t*)_1601;
  _1613 = *(uint64_t*)_1603;
  if ((((int64_t)_1613) > ((int64_t)_1612))) {
    goto _1647;
  } else {
    _1621__PHI_TEMPORARY = _1611;   /* for PHI node */
    goto _1644;
  }

_1647:
  _1614 = *(void**)_1600;
  _1615 = *(uint8_t*)(((&((uint8_t*)_1614)[((int64_t)_1612)])));
  if ((((int8_t)_1615) > ((int8_t)((uint8_t)-65)))) {
    _1621__PHI_TEMPORARY = _1611;   /* for PHI node */
    goto _1644;
  } else {
    goto _1648;
  }

_1648:
  _1616 = llvm_select_u32((((int64_t)_1612) < ((int64_t)_1613)), (((uint32_t)(uint8_t)_1615)), 0);
  _1617 = *(uint64_t*)_1601;
  *(uint64_t*)_1601 = (llvm_add_u64(_1617, 1));
  _1618 = llvm_neg_u64(_1610);
  _1619 = _1611 | (llvm_select_u32((((int64_t)_1610) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1618) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1616, (((uint32_t)_1618)))))), (llvm_select_u32((((uint64_t)_1610) > ((uint64_t)UINT64_C(31))), 0, (_1616 << (((uint32_t)_1610)))))));
  _1620 = llvm_add_u64(_1610, -8);
  _1610__PHI_TEMPORARY = _1620;   /* for PHI node */
  _1611__PHI_TEMPORARY = _1619;   /* for PHI node */
  goto _1645;

  } while (1); /* end of syntactic loop '' */
_1644:
  _1621 = _1621__PHI_TEMPORARY;
  _1622 = *(uint64_t*)_1596;
  _1623 = *(uint64_t*)_1598;
  _1624 = jsyn_cbe_fshl_i64(_1623, _1622, 32);
  _1625 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1621)), _1623, 32);
  *(uint64_t*)_1596 = _1624;
  *(uint64_t*)_1598 = _1625;
  _1626 = ((&((uint8_t*)_1591)[((int64_t)56)]));
  _1627 = *(uint64_t*)_1626;
  _1628 = ((&((uint8_t*)_1591)[((int64_t)64)]));
  _1629 = *(uint64_t*)_1628;
  _1630 = ((&((uint8_t*)_1591)[((int64_t)72)]));
  _1631 = *(uint64_t*)_1630;
  _1632 = *(void**)_1591;
  _1633 = *(uint64_t*)(((&((uint8_t*)_1632)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1591)[((int64_t)48)]))) = _1627;
  *(uint64_t*)_1626 = _1629;
  *(uint64_t*)_1628 = _1631;
  *(uint64_t*)_1630 = _1633;
  _1595__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1641;

  } while (1); /* end of syntactic loop '' */
_1640:
  _1634 = _1634__PHI_TEMPORARY;
  _1635 = *(uint64_t*)(((&((uint8_t*)_1591)[((int64_t)8)])));
  _1636 = *(uint64_t*)(((&((uint8_t*)_1591)[((int64_t)48)])));
  *(uint16_t*)(((&((uint8_t*)_1591)[((int64_t)16)]))) = _1592;
  *(uint16_t*)_1589 = _1592;
  *(uint64_t*)(((&((uint8_t*)_1589)[((int64_t)8)]))) = _1635;
  *(uint64_t*)(((&((uint8_t*)_1589)[((int64_t)16)]))) = (llvm_add_u64(_1636, -1));
  *(uint8_t*)(((&((uint8_t*)_1589)[((int64_t)24)]))) = _1634;
}


static __noreturn void julia_throw_invalid_char_12(void* _1649, uint32_t _1650) {
  jsk_throw();
  __builtin_unreachable();

}


static void julia_lex_identifier_13(void* _1651, void* _1652, void* _1653, uint32_t _1654) {
  __PREFIXALIGN__(16) uint64_t _1655 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) uint64_t _1656 __POSTFIXALIGN__(16);    /* Address-exposed local */
  struct l_array_4_uint64_t _1657;    /* Address-exposed local */
  struct l_array_4_uint64_t _1658;    /* Address-exposed local */
  struct l_array_4_uint64_t _1659;    /* Address-exposed local */
  uint32_t _1660;
  uint32_t _1661;
  uint32_t _1662;
  uint32_t _1663;
  uint32_t _1664;
  uint32_t _1665;
  uint32_t _1666;
  uint32_t _1666__PHI_TEMPORARY;
  uint32_t _1667;
  uint64_t _1668;
  uint32_t _1669;
  bool _1670;
  bool _1670__PHI_TEMPORARY;
  uint64_t _1671;
  uint64_t _1671__PHI_TEMPORARY;
  uint64_t _1672;
  uint64_t _1672__PHI_TEMPORARY;
  uint32_t _1673;
  uint32_t _1673__PHI_TEMPORARY;
  void* _1674;
  uint64_t _1675;
  void* _1676;
  uint64_t _1677;
  uint32_t _1678;
  uint64_t _1679;
  uint32_t _1680;
  uint32_t _1681;
  bool _1682;
  uint32_t _1683;
  uint32_t _1684;
  uint32_t _1685;
  uint32_t _1686;
  uint32_t _1687;
  uint32_t _1688;
  uint32_t _1689;
  uint32_t _1689__PHI_TEMPORARY;
  uint8_t _1690;
  uint32_t _1691;
  uint64_t _1692;
  uint32_t _1693;
  uint32_t _1694;
  uint64_t _1695;
  bool _1696;
  uint32_t _1697;
  uint64_t _1698;
  uint32_t _1699;
  uint32_t _1700;
  uint64_t _1701;
  bool _1702;
  uint32_t _1703;
  uint32_t _1704;
  uint32_t _1705;
  uint32_t _1706;
  uint32_t _1706__PHI_TEMPORARY;
  uint32_t _1707;
  uint32_t _1708;
  uint32_t _1709;
  uint32_t _1710;
  uint32_t _1710__PHI_TEMPORARY;
  uint8_t _1711;
  uint32_t _1712;
  uint64_t _1713;
  uint32_t _1714;
  uint32_t _1715;
  uint64_t _1716;
  bool _1717;
  bool _1718;
  uint32_t _1719;
  uint32_t _1720;
  uint32_t _1721;
  uint32_t _1722;
  uint32_t _1722__PHI_TEMPORARY;
  uint32_t _1723;
  uint32_t _1724;
  uint32_t _1725;
  uint64_t _1726;
  uint32_t _1727;
  uint32_t _1728;
  uint64_t _1729;
  bool _1730;
  uint32_t _1731;
  uint32_t _1732;
  uint32_t _1733;
  uint32_t _1734;
  uint32_t _1735;
  uint32_t _1735__PHI_TEMPORARY;
  uint8_t _1736;
  void* _1737;
  void* _1738;
  uint64_t _1739;
  void* _1740;
  uint64_t _1741;
  void* _1742;
  uint8_t _1743;
  uint8_t _1744;
  uint8_t _1745;
  uint32_t _1746;
  uint64_t _1747;
  uint64_t _1747__PHI_TEMPORARY;
  uint32_t _1748;
  uint32_t _1748__PHI_TEMPORARY;
  uint64_t _1749;
  uint64_t _1750;
  void* _1751;
  uint8_t _1752;
  uint32_t _1753;
  uint64_t _1754;
  uint64_t _1755;
  uint32_t _1756;
  uint64_t _1757;
  uint32_t _1758;
  uint32_t _1758__PHI_TEMPORARY;
  uint64_t _1759;
  uint64_t _1760;
  uint64_t _1761;
  uint64_t _1762;
  void* _1763;
  uint64_t _1764;
  void* _1765;
  uint64_t _1766;
  void* _1767;
  uint64_t _1768;
  void* _1769;
  uint64_t _1770;
  uint64_t _1771;
  uint32_t _1772;
  uint32_t _1773;
  uint32_t _1774;
  uint32_t _1775;
  uint32_t _1776;
  uint32_t _1777;
  uint32_t _1778;
  uint32_t _1779;
  uint32_t _1779__PHI_TEMPORARY;
  uint32_t _1780;
  uint64_t _1781;
  uint64_t _1782;
  void* _1783;
  void* _1783__PHI_TEMPORARY;
  void* _1784;
  uint64_t _1785;
  uint64_t _1785__PHI_TEMPORARY;
  uint64_t _1786;
  uint64_t _1786__PHI_TEMPORARY;
  uint64_t _1787;
  uint64_t _1788;
  uint64_t _1789;
  uint64_t _1790;
  uint64_t _1791;
  uint16_t _1792;
  uint16_t _1792__PHI_TEMPORARY;
  uint16_t _1793;

  if ((((int32_t)_1654) < ((int32_t)0u))) {
    goto _1794;
  } else {
    goto _1795;
  }

_1795:
  _1660 = llvm_lshr_u32(_1654, 24);
  _1666__PHI_TEMPORARY = _1660;   /* for PHI node */
  goto _1796;

_1794:
  _1661 = llvm_OC_ctlz_OC_i32((_1654 ^ -1), 0);
  _1662 = llvm_OC_cttz_OC_i32(_1654, 1);
  _1663 = _1662 & 24;
  if ((((_1661 != 1u) & (((uint32_t)(llvm_add_u32((_1661 << 3), _1663))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_1654 & 12632256) ^ 8421504), _1663)) == 0u) & ((((_1654 & -33554432) != 3221225472u) & ((_1654 & -2097152) != 3766484992u)) & ((_1654 & -1048576) != 4034920448u))))) {
    goto _1797;
  } else {
    goto _1798;
  }

_1798:
  julia_throw_invalid_char_12(_1652, _1654);
  __builtin_unreachable();

_1797:
  _1664 = llvm_lshr_u32((_1654 & (llvm_select_u32((_1654 == 4294967295u), 0, (llvm_lshr_u32(-1, _1661))))), _1663);
  _1665 = (((_1664 & 127) | ((llvm_lshr_u32(_1664, 2)) & 8128)) | ((llvm_lshr_u32(_1664, 4)) & 520192)) | ((llvm_lshr_u32(_1664, 6)) & 33292288);
  _1666__PHI_TEMPORARY = _1665;   /* for PHI node */
  goto _1796;

_1796:
  _1666 = _1666__PHI_TEMPORARY;
  _1667 = llvm_OC_umax_OC_i32(_1666, 95);
  _1668 = ((uint64_t)(uint32_t)(llvm_select_u32((((uint32_t)_1666) < ((uint32_t)127u)), (_1667 & 31), 30)));
  _1669 = llvm_OC_bswap_OC_i32(_1654);
  *((uint32_t*)&_1655) = (((uint32_t)(bool)(((uint32_t)_1669) < ((uint32_t)128u))));
  *((uint32_t*)&_1656) = 0;
  _1670__PHI_TEMPORARY = (((uint32_t)_1669) < ((uint32_t)128u));   /* for PHI node */
  _1671__PHI_TEMPORARY = 1;   /* for PHI node */
  _1672__PHI_TEMPORARY = _1668;   /* for PHI node */
  _1673__PHI_TEMPORARY = _1654;   /* for PHI node */
  goto _1799;

  do {     /* Syntactic loop '' to make GCC happy */
_1799:
  _1670 = _1670__PHI_TEMPORARY;
  _1671 = _1671__PHI_TEMPORARY;
  _1672 = _1672__PHI_TEMPORARY;
  _1673 = _1673__PHI_TEMPORARY;
  _1674 = ((&((uint8_t*)_1653)[((int64_t)32)]));
  _1675 = *(uint64_t*)_1674;
  _1676 = ((&((uint8_t*)_1653)[((int64_t)40)]));
  _1677 = llvm_lshr_u64(_1675, 32);
  _1678 = ((uint32_t)_1677);
  _1679 = *(uint64_t*)_1676;
  _1680 = ((uint32_t)_1679);
  _1681 = llvm_OC_bswap_OC_i32(_1678);
  _1682 = llvm_select_bool(_1670, (((uint32_t)_1681) < ((uint32_t)128u)), 0);
  if (_1682) {
    goto _1800;
  } else {
    goto _1801;
  }

_1801:
  _1691 = llvm_OC_ctlz_OC_i32((_1673 ^ -1), 0);
  _1692 = ((uint64_t)(uint32_t)_1691);
  _1693 = llvm_OC_cttz_OC_i32(_1673, 0);
  _1694 = _1693 & 56;
  _1695 = ((uint64_t)(uint32_t)_1694);
  _1696 = llvm_select_bool((((uint32_t)_1693) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1673 & 12632256) ^ 8421504), _1694)) != 0u), 0);
  if ((((_1691 == 1u) | (((uint64_t)(llvm_add_u64((_1692 << 3), _1695))) > ((uint64_t)UINT64_C(32)))) | _1696)) {
    goto _1802;
  } else {
    goto _1803;
  }

_1803:
  _1697 = llvm_OC_ctlz_OC_i32((_1678 ^ -1), 0);
  _1698 = ((uint64_t)(uint32_t)_1697);
  _1699 = llvm_OC_cttz_OC_i32(_1678, 0);
  _1700 = _1699 & 56;
  _1701 = ((uint64_t)(uint32_t)_1700);
  _1702 = llvm_select_bool((((uint32_t)_1699) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1678 & 12632256) ^ 8421504), _1700)) != 0u), 0);
  if ((((_1697 == 1u) | (((uint64_t)(llvm_add_u64((_1698 << 3), _1701))) > ((uint64_t)UINT64_C(32)))) | _1702)) {
    goto _1802;
  } else {
    goto _1804;
  }

_1804:
  if ((((int32_t)_1673) < ((int32_t)0u))) {
    goto _1805;
  } else {
    goto _1806;
  }

_1806:
  _1703 = llvm_lshr_u32(_1673, 24);
  _1706__PHI_TEMPORARY = _1703;   /* for PHI node */
  goto _1807;

_1805:
  if ((((_1691 == 1u) | (((uint64_t)(llvm_add_u64((_1692 << 3), _1695))) > ((uint64_t)UINT64_C(32)))) | (_1696 | ((((_1673 & -33554432) == 3221225472u) | ((_1673 & -2097152) == 3766484992u)) | ((_1673 & -1048576) == 4034920448u))))) {
    goto _1808;
  } else {
    goto _1809;
  }

_1809:
  _1704 = llvm_select_u32((((uint32_t)_1693) < ((uint32_t)32u)), (llvm_lshr_u32((_1673 & (llvm_select_u32((_1673 == 4294967295u), 0, (llvm_lshr_u32(-1, _1691))))), _1694)), 0);
  _1705 = (((_1704 & 127) | ((llvm_lshr_u32(_1704, 2)) & 8128)) | ((llvm_lshr_u32(_1704, 4)) & 520192)) | ((llvm_lshr_u32(_1704, 6)) & 33292288);
  _1706__PHI_TEMPORARY = _1705;   /* for PHI node */
  goto _1807;

_1807:
  _1706 = _1706__PHI_TEMPORARY;
  if ((((int64_t)_1675) < ((int64_t)UINT64_C(0)))) {
    goto _1810;
  } else {
    goto _1811;
  }

_1811:
  _1707 = llvm_lshr_u32(_1678, 24);
  _1710__PHI_TEMPORARY = _1707;   /* for PHI node */
  goto _1812;

_1810:
  if ((((_1697 == 1u) | (((uint64_t)(llvm_add_u64((_1698 << 3), _1701))) > ((uint64_t)UINT64_C(32)))) | (_1702 | ((((_1678 & -33554432) == 3221225472u) | ((_1678 & -2097152) == 3766484992u)) | ((_1678 & -1048576) == 4034920448u))))) {
    goto _1813;
  } else {
    goto _1814;
  }

_1814:
  _1708 = llvm_select_u32((((uint32_t)_1699) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_1677 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _1697)))) & _1678), _1700)), 0);
  _1709 = (((_1708 & 127) | ((llvm_lshr_u32(_1708, 2)) & 8128)) | ((llvm_lshr_u32(_1708, 4)) & 520192)) | ((llvm_lshr_u32(_1708, 6)) & 33292288);
  _1710__PHI_TEMPORARY = _1709;   /* for PHI node */
  goto _1812;

_1812:
  _1710 = _1710__PHI_TEMPORARY;
  _1711 = jsk_utf8proc_grapheme_break_stateful(_1706, _1710, (&_1655));
  if ((((bool)_1711&1u))) {
    goto _1815;
  } else {
    goto _1816;
  }

_1816:
  if (((_1675 & INT64_C(-1103806595072)) == UINT64_C(16321198981218566144))) {
    goto _1817;
  } else {
    goto _1818;
  }

_1817:
  _1724 = *((uint32_t*)&_1655);
  *((uint32_t*)&_1656) = _1724;
  _1725 = llvm_OC_ctlz_OC_i32((_1680 ^ -1), 0);
  _1726 = ((uint64_t)(uint32_t)_1725);
  _1727 = llvm_OC_cttz_OC_i32(_1680, 0);
  _1728 = _1727 & 56;
  _1729 = ((uint64_t)(uint32_t)_1728);
  _1730 = llvm_select_bool((((uint32_t)_1727) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1680 & 12632256) ^ 8421504), _1728)) != 0u), 0);
  if ((((_1725 == 1u) | (((uint64_t)(llvm_add_u64((_1726 << 3), _1729))) > ((uint64_t)UINT64_C(32)))) | _1730)) {
    goto _1819;
  } else {
    goto _1820;
  }

_1820:
  _1731 = ((llvm_lshr_u32(_1678, 8)) & 13) | 8192;
  if ((((int32_t)_1680) < ((int32_t)0u))) {
    goto _1821;
  } else {
    goto _1822;
  }

_1822:
  _1732 = llvm_lshr_u32(_1680, 24);
  _1735__PHI_TEMPORARY = _1732;   /* for PHI node */
  goto _1823;

_1821:
  if ((((_1725 == 1u) | (((uint64_t)(llvm_add_u64((_1726 << 3), _1729))) > ((uint64_t)UINT64_C(32)))) | (_1730 | ((((_1680 & -33554432) == 3221225472u) | ((_1680 & -2097152) == 3766484992u)) | ((_1680 & -1048576) == 4034920448u))))) {
    goto _1824;
  } else {
    goto _1825;
  }

_1825:
  _1733 = llvm_select_u32((((uint32_t)_1727) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_1680 == 4294967295u), 0, (llvm_lshr_u32(-1, _1725)))) & _1680), _1728)), 0);
  _1734 = (((_1733 & 127) | ((llvm_lshr_u32(_1733, 2)) & 8128)) | ((llvm_lshr_u32(_1733, 4)) & 520192)) | ((llvm_lshr_u32(_1733, 6)) & 33292288);
  _1735__PHI_TEMPORARY = _1734;   /* for PHI node */
  goto _1823;

_1823:
  _1735 = _1735__PHI_TEMPORARY;
  _1736 = jsk_utf8proc_grapheme_break_stateful(_1731, _1735, (&_1656));
  if ((((bool)_1736&1u))) {
    goto _1826;
  } else {
    goto _1818;
  }

_1802:
  *((uint32_t*)&_1655) = 0;
  goto _1815;

_1815:
  if (((llvm_select_bool((_1677 == UINT64_C(553648128)), (_1680 == 1023410176u), 0)) | (_1677 == UINT64_C(4294967295)))) {
    goto _1826;
  } else {
    goto _1827;
  }

_1827:
  _1712 = llvm_OC_ctlz_OC_i32((_1678 ^ -1), 0);
  _1713 = ((uint64_t)(uint32_t)_1712);
  _1714 = llvm_OC_cttz_OC_i32(_1678, 0);
  _1715 = _1714 & 56;
  _1716 = ((uint64_t)(uint32_t)_1715);
  _1717 = llvm_select_bool((((uint32_t)_1714) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1678 & 12632256) ^ 8421504), _1715)) != 0u), 0);
  _1718 = (((_1678 & -33554432) == 3221225472u) | ((_1678 & -2097152) == 3766484992u)) | ((_1678 & -1048576) == 4034920448u);
  if ((((((_1712 == 1u) | (((uint64_t)(llvm_add_u64((_1713 << 3), _1716))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_1675) > ((uint64_t)UINT64_C(17122614315006820351))) & (_1677 != UINT64_C(3986669312))) & (((((uint64_t)_1675) < ((uint64_t)UINT64_C(17185876919829135360))) & (_1677 != UINT64_C(4001398784))) | ((((uint64_t)_1675) > ((uint64_t)UINT64_C(17622514693983698943))) & (_1677 != UINT64_C(4103061439)))))) | _1717) | _1718)) {
    goto _1826;
  } else {
    goto _1828;
  }

_1828:
  _1719 = llvm_lshr_u32(_1678, 24);
  if ((((int64_t)_1675) < ((int64_t)UINT64_C(0)))) {
    goto _1829;
  } else {
    _1722__PHI_TEMPORARY = _1719;   /* for PHI node */
    goto _1830;
  }

_1829:
  if ((((_1712 == 1u) | (((uint64_t)(llvm_add_u64((_1713 << 3), _1716))) > ((uint64_t)UINT64_C(32)))) | (_1717 | _1718))) {
    goto _1831;
  } else {
    goto _1832;
  }

_1832:
  _1720 = llvm_select_u32((((uint32_t)_1714) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _1712)) & _1678), _1715)), 0);
  _1721 = (((_1720 & 127) | ((llvm_lshr_u32(_1720, 2)) & 8128)) | ((llvm_lshr_u32(_1720, 4)) & 520192)) | ((llvm_lshr_u32(_1720, 6)) & 33292288);
  _1722__PHI_TEMPORARY = _1721;   /* for PHI node */
  goto _1830;

_1830:
  _1722 = _1722__PHI_TEMPORARY;
  _1723 = jsk_jl_id_char(_1722);
  if ((_1723 == 0u)) {
    goto _1826;
  } else {
    goto _1818;
  }

_1800:
  if ((((int64_t)_1675) < ((int64_t)UINT64_C(0)))) {
    goto _1833;
  } else {
    goto _1834;
  }

_1834:
  _1683 = llvm_lshr_u32(_1678, 24);
  _1689__PHI_TEMPORARY = _1683;   /* for PHI node */
  goto _1835;

_1833:
  _1684 = llvm_OC_ctlz_OC_i32((_1678 ^ -1), 0);
  _1685 = llvm_OC_cttz_OC_i32(_1678, 1);
  _1686 = _1685 & 24;
  if ((((_1684 != 1u) & (((uint32_t)(llvm_add_u32((_1684 << 3), _1686))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_1678 & 12632256) ^ 8421504), _1686)) == 0u) & ((((_1678 & -33554432) != 3221225472u) & ((_1678 & -2097152) != 3766484992u)) & ((_1678 & -1048576) != 4034920448u))))) {
    goto _1836;
  } else {
    goto _1837;
  }

_1836:
  _1687 = llvm_lshr_u32(((llvm_select_u32((_1677 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _1684)))) & _1678), _1686);
  _1688 = (_1687 & 127) | ((llvm_lshr_u32(_1687, 2)) & 192);
  _1689__PHI_TEMPORARY = _1688;   /* for PHI node */
  goto _1835;

_1835:
  _1689 = _1689__PHI_TEMPORARY;
  if ((llvm_select_bool((_1689 != 33u), 1, (_1680 != 1023410176u)))) {
    goto _1838;
  } else {
    goto _1826;
  }

_1838:
  _1690 = *(uint8_t*)(((&((uint8_t*)(&_j_constYY_OC_53))[((int64_t)(((uint64_t)(uint32_t)_1689)))])));
  if ((((bool)_1690&1u))) {
    goto _1818;
  } else {
    goto _1826;
  }

_1818:
  _1737 = *(void**)_1653;
  _1738 = ((&((uint8_t*)_1737)[((int64_t)16)]));
  _1739 = *(uint64_t*)_1738;
  _1740 = ((&((uint8_t*)_1737)[((int64_t)8)]));
  _1741 = *(uint64_t*)_1740;
  if ((((int64_t)_1741) > ((int64_t)_1739))) {
    goto _1839;
  } else {
    _1758__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1840;
  }

_1839:
  _1742 = *(void**)_1737;
  _1743 = *(uint8_t*)(((&((uint8_t*)_1742)[((int64_t)_1739)])));
  *(uint64_t*)_1738 = (llvm_add_u64(_1739, 1));
  _1744 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1743)), 0);
  _1745 = llvm_sub_u8(32, (llvm_shl_u8(_1744, 3)));
  _1746 = (((uint32_t)(uint8_t)_1743)) << 24;
  if ((((uint8_t)_1745) > ((uint8_t)((uint8_t)16)))) {
    _1758__PHI_TEMPORARY = _1746;   /* for PHI node */
    goto _1840;
  } else {
    _1747__PHI_TEMPORARY = 16;   /* for PHI node */
    _1748__PHI_TEMPORARY = _1746;   /* for PHI node */
    goto _1841;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1841:
  _1747 = _1747__PHI_TEMPORARY;
  _1748 = _1748__PHI_TEMPORARY;
  if (((((int64_t)_1747) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1747) < ((uint64_t)(((uint64_t)(uint8_t)_1745)))))) {
    _1758__PHI_TEMPORARY = _1748;   /* for PHI node */
    goto _1840;
  } else {
    goto _1842;
  }

_1842:
  _1749 = *(uint64_t*)_1738;
  _1750 = *(uint64_t*)_1740;
  if ((((int64_t)_1750) > ((int64_t)_1749))) {
    goto _1843;
  } else {
    _1758__PHI_TEMPORARY = _1748;   /* for PHI node */
    goto _1840;
  }

_1843:
  _1751 = *(void**)_1737;
  _1752 = *(uint8_t*)(((&((uint8_t*)_1751)[((int64_t)_1749)])));
  if ((((int8_t)_1752) > ((int8_t)((uint8_t)-65)))) {
    _1758__PHI_TEMPORARY = _1748;   /* for PHI node */
    goto _1840;
  } else {
    goto _1844;
  }

_1844:
  _1753 = llvm_select_u32((((int64_t)_1749) < ((int64_t)_1750)), (((uint32_t)(uint8_t)_1752)), 0);
  _1754 = *(uint64_t*)_1738;
  *(uint64_t*)_1738 = (llvm_add_u64(_1754, 1));
  _1755 = llvm_neg_u64(_1747);
  _1756 = _1748 | (llvm_select_u32((((int64_t)_1747) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1755) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1753, (((uint32_t)_1755)))))), (llvm_select_u32((((uint64_t)_1747) > ((uint64_t)UINT64_C(31))), 0, (_1753 << (((uint32_t)_1747)))))));
  _1757 = llvm_add_u64(_1747, -8);
  _1747__PHI_TEMPORARY = _1757;   /* for PHI node */
  _1748__PHI_TEMPORARY = _1756;   /* for PHI node */
  goto _1841;

  } while (1); /* end of syntactic loop '' */
_1840:
  _1758 = _1758__PHI_TEMPORARY;
  _1759 = *(uint64_t*)_1674;
  _1760 = *(uint64_t*)_1676;
  _1761 = jsyn_cbe_fshl_i64(_1760, _1759, 32);
  _1762 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1758)), _1760, 32);
  *(uint64_t*)_1674 = _1761;
  *(uint64_t*)_1676 = _1762;
  _1763 = ((&((uint8_t*)_1653)[((int64_t)56)]));
  _1764 = *(uint64_t*)_1763;
  _1765 = ((&((uint8_t*)_1653)[((int64_t)64)]));
  _1766 = *(uint64_t*)_1765;
  _1767 = ((&((uint8_t*)_1653)[((int64_t)72)]));
  _1768 = *(uint64_t*)_1767;
  _1769 = *(void**)_1653;
  _1770 = *(uint64_t*)(((&((uint8_t*)_1769)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1653)[((int64_t)48)]))) = _1764;
  *(uint64_t*)_1763 = _1766;
  *(uint64_t*)_1765 = _1768;
  *(uint64_t*)_1767 = _1770;
  _1771 = *(uint64_t*)_1674;
  _1772 = ((uint32_t)_1771);
  if ((((int32_t)_1772) < ((int32_t)0u))) {
    goto _1845;
  } else {
    goto _1846;
  }

_1846:
  _1773 = llvm_lshr_u32(_1772, 24);
  _1779__PHI_TEMPORARY = _1773;   /* for PHI node */
  goto _1847;

_1845:
  _1774 = llvm_OC_ctlz_OC_i32((_1772 ^ -1), 0);
  _1775 = llvm_OC_cttz_OC_i32(_1772, 1);
  _1776 = _1775 & 24;
  if ((((_1774 != 1u) & (((uint32_t)(llvm_add_u32((_1774 << 3), _1776))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_1772 & 12632256) ^ 8421504), _1776)) == 0u) & ((((_1772 & -33554432) != 3221225472u) & ((_1772 & -2097152) != 3766484992u)) & ((_1772 & -1048576) != 4034920448u))))) {
    goto _1848;
  } else {
    goto _1849;
  }

_1848:
  _1777 = llvm_lshr_u32(((llvm_select_u32((_1772 == 4294967295u), 0, (llvm_lshr_u32(-1, _1774)))) & _1772), _1776);
  _1778 = (((_1777 & 127) | ((llvm_lshr_u32(_1777, 2)) & 8128)) | ((llvm_lshr_u32(_1777, 4)) & 520192)) | ((llvm_lshr_u32(_1777, 6)) & 33292288);
  _1779__PHI_TEMPORARY = _1778;   /* for PHI node */
  goto _1847;

_1847:
  _1779 = _1779__PHI_TEMPORARY;
  _1780 = llvm_OC_umax_OC_i32(_1779, 95);
  _1781 = (_1672 << 5) | (((uint64_t)(uint32_t)(llvm_select_u32((((uint32_t)_1779) < ((uint32_t)127u)), (_1780 & 31), 30))));
  _1782 = llvm_add_u64(_1671, 1);
  _1670__PHI_TEMPORARY = _1682;   /* for PHI node */
  _1671__PHI_TEMPORARY = _1782;   /* for PHI node */
  _1672__PHI_TEMPORARY = _1781;   /* for PHI node */
  _1673__PHI_TEMPORARY = _1772;   /* for PHI node */
  goto _1799;

  } while (1); /* end of syntactic loop '' */
_1837:
  julia_throw_invalid_char_12(_1652, _1678);
  __builtin_unreachable();

_1808:
  julia_throw_invalid_char_12(_1652, _1673);
  __builtin_unreachable();

_1813:
  julia_throw_invalid_char_12(_1652, _1678);
  __builtin_unreachable();

_1831:
  julia_throw_invalid_char_12(_1652, _1678);
  __builtin_unreachable();

_1824:
  julia_throw_invalid_char_12(_1652, _1680);
  __builtin_unreachable();

_1819:
  *((uint32_t*)&_1656) = 0;
  goto _1826;

_1849:
  julia_throw_invalid_char_12(_1652, _1772);
  __builtin_unreachable();

_1826:
  if ((((int64_t)_1671) < ((int64_t)UINT64_C(11)))) {
    goto _1850;
  } else {
    goto _1851;
  }

_1852:
  _1783 = _1783__PHI_TEMPORARY;
  _1784 = memcpy(_1651, _1783, 32);
  return;
_1851:
  julia_emit_11((&_1657), _1652, _1653, 3, 1);
  _1783__PHI_TEMPORARY = (&_1657);   /* for PHI node */
  goto _1852;

_1850:
  switch (_1672) {
  default:
    _1785__PHI_TEMPORARY = 39;   /* for PHI node */
    _1786__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1853;
  case UINT64_C(6337125):
    goto _1854;
  case UINT64_C(674469):
    goto _1854;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1853:
  _1785 = _1785__PHI_TEMPORARY;
  _1786 = _1786__PHI_TEMPORARY;
  if ((((int64_t)_1786) > ((int64_t)_1785))) {
    _1792__PHI_TEMPORARY = 3;   /* for PHI node */
    goto _1855;
  } else {
    goto _1856;
  }

_1856:
  _1787 = llvm_lshr_u64((llvm_add_u64(_1786, _1785)), 1);
  _1788 = llvm_add_u64(_1787, -1);
  _1789 = *(uint64_t*)(((&((uint64_t*)(&_j_constYY_OC_54))[((int64_t)_1788)])));
  if ((_1789 == _1672)) {
    goto _1857;
  } else {
    goto _1858;
  }

_1858:
  _1790 = llvm_select_u64((((uint64_t)_1789) < ((uint64_t)_1672)), _1785, _1788);
  _1791 = llvm_select_u64((((uint64_t)_1789) < ((uint64_t)_1672)), (llvm_add_u64(_1787, 1)), _1786);
  _1785__PHI_TEMPORARY = _1790;   /* for PHI node */
  _1786__PHI_TEMPORARY = _1791;   /* for PHI node */
  goto _1853;

  } while (1); /* end of syntactic loop '' */
_1855:
  _1792 = _1792__PHI_TEMPORARY;
  julia_emit_11((&_1659), _1652, _1653, _1792, 1);
  _1783__PHI_TEMPORARY = (&_1659);   /* for PHI node */
  goto _1852;

_1854:
  julia_emit_11((&_1658), _1652, _1653, 43, 1);
  _1783__PHI_TEMPORARY = (&_1658);   /* for PHI node */
  goto _1852;

_1857:
  _1793 = *(uint16_t*)(((&((uint16_t*)(&_j_constYY_OC_55))[((int64_t)_1788)])));
  _1792__PHI_TEMPORARY = _1793;   /* for PHI node */
  goto _1855;

}


static uint8_t julia_is_operator_start_char_14(void* _1859, uint32_t _1860) {
  uint32_t _1861;
  uint64_t _1862;
  uint32_t _1863;
  uint32_t _1864;
  uint64_t _1865;
  bool _1866;
  bool _1867;
  uint32_t _1868;
  uint32_t _1869;
  uint32_t _1870;
  uint32_t _1871;
  uint32_t _1871__PHI_TEMPORARY;
  bool _1872;
  bool _1872__PHI_TEMPORARY;
  bool _1873;

  if ((_1860 == 4294967295u)) {
    _1872__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1874;
  } else {
    goto _1875;
  }

_1875:
  _1861 = llvm_OC_ctlz_OC_i32((_1860 ^ -1), 0);
  _1862 = ((uint64_t)(uint32_t)_1861);
  _1863 = llvm_OC_cttz_OC_i32(_1860, 0);
  _1864 = _1863 & 56;
  _1865 = ((uint64_t)(uint32_t)_1864);
  _1866 = llvm_select_bool((((uint32_t)_1863) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1860 & 12632256) ^ 8421504), _1864)) != 0u), 0);
  _1867 = (((_1860 & -33554432) == 3221225472u) | ((_1860 & -2097152) == 3766484992u)) | ((_1860 & -1048576) == 4034920448u);
  if ((((((_1861 == 1u) | (((uint64_t)(llvm_add_u64((_1862 << 3), _1865))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_1860) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_1860, 191905856))) < ((uint32_t)4193304640u)))) | _1866) | _1867)) {
    _1872__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1874;
  } else {
    goto _1876;
  }

_1876:
  _1868 = llvm_lshr_u32(_1860, 24);
  if ((((int32_t)_1860) < ((int32_t)0u))) {
    goto _1877;
  } else {
    _1871__PHI_TEMPORARY = _1868;   /* for PHI node */
    goto _1878;
  }

_1877:
  if ((((_1861 == 1u) | (((uint64_t)(llvm_add_u64((_1862 << 3), _1865))) > ((uint64_t)UINT64_C(32)))) | (_1866 | _1867))) {
    goto _1879;
  } else {
    goto _1880;
  }

_1879:
  julia_throw_invalid_char_12(_1859, _1860);
  __builtin_unreachable();

_1880:
  _1869 = llvm_select_u32((((uint32_t)_1863) < ((uint32_t)32u)), (llvm_lshr_u32((_1860 & (llvm_lshr_u32(-1, _1861))), _1864)), 0);
  _1870 = (((_1869 & 127) | ((llvm_lshr_u32(_1869, 2)) & 8128)) | ((llvm_lshr_u32(_1869, 4)) & 520192)) | ((llvm_lshr_u32(_1869, 6)) & 33292288);
  _1871__PHI_TEMPORARY = _1870;   /* for PHI node */
  goto _1878;

_1878:
  _1871 = _1871__PHI_TEMPORARY;
  if ((((llvm_select_bool((((_1871 == 33u) | ((_1871 & -4) == 36u)) | ((_1871 & -2) == 42u)), 1, (((uint32_t)(llvm_add_u32(_1871, -45))) < ((uint32_t)3u)))) | (_1871 == 58u)) | ((_1871 & -4) == 60u))) {
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  } else {
    goto _1881;
  }

_1874:
  _1872 = _1872__PHI_TEMPORARY;
  return (((uint8_t)(bool)_1872));
_1881:
  switch (_1871) {
  default:
    goto _1882;
  case 92u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 94u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 124u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 126u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 166u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 172u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 177u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 183u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 215u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 247u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 903u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8230u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8285u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8523u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8656u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8655u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8654u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8653u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8652u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8651u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8649u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8647u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8646u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8644u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8641u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8640u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8637u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8636u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8635u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8634u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8631u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8630u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8622u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8620u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8619u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8618u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8617u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8614u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8612u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8611u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8610u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8608u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8606u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8605u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8604u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8603u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8602u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8596u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8595u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8594u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8593u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8592u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8658u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8660u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  }

_1882:
  if ((((uint32_t)(llvm_add_u32(_1871, -8666))) < ((uint32_t)4u))) {
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  } else {
    goto _1883;
  }

_1883:
  switch (_1871) {
  default:
    goto _1884;
  case 8672u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8674u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  }

_1884:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_1871, -8692))) < ((uint32_t)12u)), 1, (((uint32_t)(llvm_add_u32(_1871, -8712))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -8722))) < ((uint32_t)3u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -8727))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -8740))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -8759))) < ((uint32_t)2u)))) | ((_1871 & -2) == 8762u)), 1, (((uint32_t)(llvm_add_u32(_1871, -8765))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -8768))) < ((uint32_t)76u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -8845))) < ((uint32_t)16u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -8862))) < ((uint32_t)6u))))) {
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  } else {
    goto _1885;
  }

_1885:
  switch (_1871) {
  default:
    goto _1886;
  case 8873u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8876u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 8878u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  }

_1886:
  if ((llvm_select_bool((llvm_select_bool(((llvm_select_bool(((_1871 & -8) == 8880u), 1, (((uint32_t)(llvm_add_u32(_1871, -8891))) < ((uint32_t)3u)))) | ((_1871 & -4) == 8900u)), 1, (((uint32_t)(llvm_add_u32(_1871, -8905))) < ((uint32_t)11u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -8917))) < ((uint32_t)43u))))) {
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  } else {
    goto _1887;
  }

_1887:
  switch (_1871) {
  default:
    goto _1888;
  case 9023u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 9655u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10178u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  }

_1888:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_1871, -10183))) < ((uint32_t)3u)), 1, (((uint32_t)(llvm_add_u32(_1871, -10193))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -10197))) < ((uint32_t)3u)))) | ((_1871 & -2) == 10224u)), 1, (((uint32_t)(llvm_add_u32(_1871, -10229))) < ((uint32_t)3u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -10233))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -10496))) < ((uint32_t)25u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -10525))) < ((uint32_t)4u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -10564))) < ((uint32_t)45u))))) {
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  } else {
    goto _1889;
  }

_1889:
  switch (_1871) {
  default:
    goto _1890;
  case 10615u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10618u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10760u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10759u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10747u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10746u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10743u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10742u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10740u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10725u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10724u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10723u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10721u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10689u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10688u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10687u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10686u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10684u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10680u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10679u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10781u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  case 10783u:
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  }

_1890:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((((llvm_select_bool(((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_1871, -10786))) < ((uint32_t)13u)), 1, (((uint32_t)(llvm_add_u32(_1871, -10800))) < ((uint32_t)14u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -10816))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -10826))) < ((uint32_t)15u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -10842))) < ((uint32_t)10u)))) | ((_1871 & -2) == 10854u)), 1, (((uint32_t)(llvm_add_u32(_1871, -10858))) < ((uint32_t)112u)))) | (_1871 == 10971u)) | ((_1871 & -2) == 10986u)), 1, (((uint32_t)(llvm_add_u32(_1871, -10999))) < ((uint32_t)4u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -11056))) < ((uint32_t)21u)))), 1, (((uint32_t)(llvm_add_u32(_1871, -11079))) < ((uint32_t)6u))))) {
    _1872__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1874;
  } else {
    goto _1891;
  }

_1891:
  _1873 = (((uint32_t)(llvm_add_u32(_1871, -65513))) < ((uint32_t)4u)) | (_1871 == 129202u);
  _1872__PHI_TEMPORARY = _1873;   /* for PHI node */
  goto _1874;

}


static uint8_t julia_is_never_id_char_15(void* _1892, uint32_t _1893) {
  uint32_t _1894;
  uint64_t _1895;
  uint32_t _1896;
  uint32_t _1897;
  uint64_t _1898;
  bool _1899;
  uint32_t _1900;
  bool _1901;
  uint32_t _1902;
  uint32_t _1903;
  uint32_t _1904;
  uint32_t _1904__PHI_TEMPORARY;
  uint32_t _1905;
  uint64_t _1906;
  uint64_t _1907;
  uint64_t _1907__PHI_TEMPORARY;
  uint32_t _1908;
  uint32_t _1909;
  uint32_t _1910;
  uint32_t _1910__PHI_TEMPORARY;
  bool _1911;
  bool _1912;
  bool _1912__PHI_TEMPORARY;
  uint32_t _1913;

  _1894 = llvm_OC_ctlz_OC_i32((_1893 ^ -1), 0);
  _1895 = ((uint64_t)(uint32_t)_1894);
  _1896 = llvm_OC_cttz_OC_i32(_1893, 0);
  _1897 = _1896 & 56;
  _1898 = ((uint64_t)(uint32_t)_1897);
  _1899 = llvm_select_bool((((uint32_t)_1896) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1893 & 12632256) ^ 8421504), _1897)) != 0u), 0);
  _1900 = llvm_lshr_u32(_1893, 24);
  _1901 = (((_1893 & -33554432) == 3221225472u) | ((_1893 & -2097152) == 3766484992u)) | ((_1893 & -1048576) == 4034920448u);
  if ((((((_1894 == 1u) | (((uint64_t)(llvm_add_u64((_1895 << 3), _1898))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_1893) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_1893, 191905856))) < ((uint32_t)4193304640u)))) | _1899) | _1901)) {
    _1912__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  } else {
    goto _1915;
  }

_1915:
  if ((((int32_t)_1893) < ((int32_t)0u))) {
    goto _1916;
  } else {
    _1904__PHI_TEMPORARY = _1900;   /* for PHI node */
    goto _1917;
  }

_1916:
  if ((((_1894 == 1u) | (((uint64_t)(llvm_add_u64((_1895 << 3), _1898))) > ((uint64_t)UINT64_C(32)))) | (_1899 | _1901))) {
    goto _1918;
  } else {
    goto _1919;
  }

_1918:
  julia_throw_invalid_char_12(_1892, _1893);
  __builtin_unreachable();

_1919:
  _1902 = llvm_select_u32((((uint32_t)_1896) < ((uint32_t)32u)), (llvm_lshr_u32((_1893 & (llvm_select_u32((_1893 == 4294967295u), 0, (llvm_lshr_u32(-1, _1894))))), _1897)), 0);
  _1903 = (((_1902 & 127) | ((llvm_lshr_u32(_1902, 2)) & 8128)) | ((llvm_lshr_u32(_1902, 4)) & 520192)) | ((llvm_lshr_u32(_1902, 6)) & 33292288);
  _1904__PHI_TEMPORARY = _1903;   /* for PHI node */
  goto _1917;

_1917:
  _1904 = _1904__PHI_TEMPORARY;
  if ((((uint32_t)_1904) > ((uint32_t)1114111u))) {
    _1907__PHI_TEMPORARY = 30;   /* for PHI node */
    goto _1920;
  } else {
    goto _1921;
  }

_1921:
  _1905 = jsk_utf8proc_category(_1904);
  _1906 = ((int64_t)(int32_t)_1905);
  _1907__PHI_TEMPORARY = _1906;   /* for PHI node */
  goto _1920;

_1920:
  _1907 = _1907__PHI_TEMPORARY;
  if ((((int32_t)_1893) < ((int32_t)0u))) {
    goto _1922;
  } else {
    _1910__PHI_TEMPORARY = _1900;   /* for PHI node */
    goto _1923;
  }

_1922:
  if ((((_1894 == 1u) | (((uint64_t)(llvm_add_u64((_1895 << 3), _1898))) > ((uint64_t)UINT64_C(32)))) | (_1899 | _1901))) {
    goto _1924;
  } else {
    goto _1925;
  }

_1924:
  julia_throw_invalid_char_12(_1892, _1893);
  __builtin_unreachable();

_1925:
  _1908 = llvm_select_u32((((uint32_t)_1896) < ((uint32_t)32u)), (llvm_lshr_u32((_1893 & (llvm_select_u32((_1893 == 4294967295u), 0, (llvm_lshr_u32(-1, _1894))))), _1897)), 0);
  _1909 = (((_1908 & 127) | ((llvm_lshr_u32(_1908, 2)) & 8128)) | ((llvm_lshr_u32(_1908, 4)) & 520192)) | ((llvm_lshr_u32(_1908, 6)) & 33292288);
  _1910__PHI_TEMPORARY = _1909;   /* for PHI node */
  goto _1923;

_1923:
  _1910 = _1910__PHI_TEMPORARY;
  if ((((uint64_t)(llvm_add_u64(_1907, -23))) < ((uint64_t)UINT64_C(6)))) {
    _1912__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  } else {
    goto _1926;
  }

_1927:
  _1911 = ((bool)(((llvm_lshr_u54(UINT64_C(11258999068426243), (((((uint64_t)(uint32_t)_1913))&4294967295))))&4294967295))&1u);
  _1912__PHI_TEMPORARY = _1911;   /* for PHI node */
  goto _1914;

_1914:
  _1912 = _1912__PHI_TEMPORARY;
  return (((uint8_t)(bool)_1912));
_1926:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((((uint32_t)_1910) < ((uint32_t)255u)), (((uint64_t)(llvm_add_u64(_1907, -13))) < ((uint64_t)UINT64_C(6))), 0)) | (_1910 == 96u)), 1, (((uint32_t)(llvm_add_u32(_1910, -10214))) < ((uint32_t)10u)))), 1, (((uint32_t)(llvm_add_u32(_1910, -12296))) < ((uint32_t)10u)))), 1, (((uint32_t)(llvm_add_u32(_1910, -12308))) < ((uint32_t)8u))))) {
    _1912__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1914;
  } else {
    goto _1928;
  }

_1928:
  _1913 = llvm_add_u32(_1910, -65288);
  if ((((uint32_t)_1913) < ((uint32_t)54u))) {
    goto _1927;
  } else {
    _1912__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1914;
  }

}


static __noreturn void julia__throw_argerror_16(void* _1929, void* _1930) {
  jsk_throw();
  __builtin_unreachable();

}


static struct l_array_1_void_KC_ julia_AssertionError_17(void* _1931, void* _1932) {
  struct l_array_1_void_KC_ _1933;

  _1933 = llvm_ctor_ptra1(((void*)/*NULL*/0));
  _1933.array[0] = _1932;
  return _1933;
}


static void julia_lex_whitespace_18(void* _1934, void* _1935, void* _1936, uint32_t _1937) {
  struct l_array_4_uint64_t _1938;    /* Address-exposed local */
  uint16_t _1939;
  uint16_t _1939__PHI_TEMPORARY;
  uint32_t _1940;
  uint32_t _1940__PHI_TEMPORARY;
  uint16_t _1941;
  void* _1942;
  uint64_t _1943;
  uint64_t _1944;
  void* _1945;
  uint64_t _1946;
  uint32_t _1947;
  uint64_t _1948;
  uint32_t _1949;
  uint64_t _1950;
  uint32_t _1951;
  uint32_t _1952;
  uint64_t _1953;
  bool _1954;
  bool _1955;
  uint32_t _1956;
  uint32_t _1957;
  uint32_t _1958;
  bool _1959;
  bool _1959__PHI_TEMPORARY;
  void* _1960;
  void* _1961;
  uint64_t _1962;
  void* _1963;
  uint64_t _1964;
  void* _1965;
  uint8_t _1966;
  uint8_t _1967;
  uint8_t _1968;
  uint32_t _1969;
  uint64_t _1970;
  uint64_t _1970__PHI_TEMPORARY;
  uint32_t _1971;
  uint32_t _1971__PHI_TEMPORARY;
  uint64_t _1972;
  uint64_t _1973;
  void* _1974;
  uint8_t _1975;
  uint32_t _1976;
  uint64_t _1977;
  uint64_t _1978;
  uint32_t _1979;
  uint64_t _1980;
  uint32_t _1981;
  uint32_t _1981__PHI_TEMPORARY;
  uint64_t _1982;
  uint64_t _1983;
  uint64_t _1984;
  uint64_t _1985;
  void* _1986;
  uint64_t _1987;
  void* _1988;
  uint64_t _1989;
  void* _1990;
  uint64_t _1991;
  void* _1992;
  uint64_t _1993;
  uint64_t _1994;
  uint32_t _1995;
  void* _1996;

  _1939__PHI_TEMPORARY = 1;   /* for PHI node */
  _1940__PHI_TEMPORARY = _1937;   /* for PHI node */
  goto _1997;

  do {     /* Syntactic loop '' to make GCC happy */
_1997:
  _1939 = _1939__PHI_TEMPORARY;
  _1940 = _1940__PHI_TEMPORARY;
  _1941 = llvm_select_u16((_1940 == 167772160u), 2, _1939);
  _1942 = ((&((uint8_t*)_1936)[((int64_t)32)]));
  _1943 = *(uint64_t*)_1942;
  _1944 = ((uint64_t)_1943);
  _1945 = ((&((uint8_t*)_1936)[((int64_t)40)]));
  _1946 = llvm_lshr_u64(_1944, 32);
  _1947 = ((uint32_t)_1946);
  _1948 = *(uint64_t*)_1945;
  _1949 = llvm_OC_ctlz_OC_i32((_1947 ^ -1), 0);
  _1950 = ((uint64_t)(uint32_t)_1949);
  _1951 = llvm_OC_cttz_OC_i32(_1947, 0);
  _1952 = _1951 & 56;
  _1953 = ((uint64_t)(uint32_t)_1952);
  _1954 = ((_1949 == 1u) | (((uint64_t)(llvm_add_u64((_1950 << 3), _1953))) > ((uint64_t)UINT64_C(32)))) | (llvm_select_bool((((uint32_t)_1951) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1947 & 12632256) ^ 8421504), _1952)) != 0u), 0));
  _1955 = (((_1947 & -33554432) == 3221225472u) | ((_1947 & -2097152) == 3766484992u)) | ((_1947 & -1048576) == 4034920448u);
  if (((_1955 | (((((uint64_t)_1944) > ((uint64_t)UINT64_C(17122614315006820351))) & (_1946 != UINT64_C(3986669312))) & (((((uint64_t)_1944) < ((uint64_t)UINT64_C(17185876919829135360))) & (_1946 != UINT64_C(4001398784))) | ((((uint64_t)_1944) > ((uint64_t)UINT64_C(17622514693983698943))) & (_1946 != UINT64_C(4103061439)))))) | _1954)) {
    _1959__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1998;
  } else {
    goto _1999;
  }

_1999:
  if ((_1946 == UINT64_C(536870912))) {
    _1959__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1998;
  } else {
    goto _2000;
  }

_2000:
  if (((((uint64_t)_1944) < ((uint64_t)UINT64_C(648518350636318720))) & (_1946 != UINT64_C(150994944)))) {
    goto _2001;
  } else {
    goto _2002;
  }

_2002:
  if ((((uint64_t)_1944) < ((uint64_t)UINT64_C(936748722493063168)))) {
    _1959__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1998;
  } else {
    goto _2003;
  }

_2003:
  switch ((((uint32_t)_1946))) {
  default:
    goto _2004;
  case 3263496192u:
    _1959__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1998;
  case 218103808u:
    _1959__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1998;
  }

_2001:
  if ((_1946 == UINT64_C(3263496192))) {
    _1959__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1998;
  } else {
    goto _2004;
  }

_2004:
  if ((((((uint64_t)_1944) < ((uint64_t)UINT64_C(14024209243926691840))) & (_1946 != UINT64_C(3265265664))) | _1954)) {
    _1959__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1998;
  } else {
    goto _2005;
  }

_2005:
  if (((((uint64_t)(llvm_add_u64((_1950 << 3), _1953))) > ((uint64_t)UINT64_C(32))) | _1955)) {
    goto _2006;
  } else {
    goto _2007;
  }

_2007:
  _1956 = llvm_select_u32((((uint32_t)_1951) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_1946 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _1949)))) & _1947), _1952)), 0);
  _1957 = (((_1956 & 127) | ((llvm_lshr_u32(_1956, 2)) & 8128)) | ((llvm_lshr_u32(_1956, 4)) & 520192)) | ((llvm_lshr_u32(_1956, 6)) & 33292288);
  if ((((uint32_t)_1957) > ((uint32_t)1114111u))) {
    _1959__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1998;
  } else {
    goto _2008;
  }

_2008:
  _1958 = jsk_utf8proc_category(_1957);
  _1959__PHI_TEMPORARY = (_1958 == 23u);   /* for PHI node */
  goto _1998;

_1998:
  _1959 = _1959__PHI_TEMPORARY;
  if ((_1959 | (_1946 == UINT64_C(4022058752)))) {
    goto _2009;
  } else {
    goto _2010;
  }

_2009:
  if ((_1941 == ((uint16_t)2))) {
    goto _2011;
  } else {
    goto _2012;
  }

_2011:
  if ((_1946 == UINT64_C(167772160))) {
    goto _2010;
  } else {
    goto _2013;
  }

_2013:
  if ((llvm_select_bool((_1946 != UINT64_C(218103808)), 1, ((_1948 & INT64_C(4294967295)) != UINT64_C(167772160))))) {
    goto _2012;
  } else {
    goto _2010;
  }

_2012:
  _1960 = *(void**)_1936;
  _1961 = ((&((uint8_t*)_1960)[((int64_t)16)]));
  _1962 = *(uint64_t*)_1961;
  _1963 = ((&((uint8_t*)_1960)[((int64_t)8)]));
  _1964 = *(uint64_t*)_1963;
  if ((((int64_t)_1964) > ((int64_t)_1962))) {
    goto _2014;
  } else {
    _1981__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2015;
  }

_2014:
  _1965 = *(void**)_1960;
  _1966 = *(uint8_t*)(((&((uint8_t*)_1965)[((int64_t)_1962)])));
  *(uint64_t*)_1961 = (llvm_add_u64(_1962, 1));
  _1967 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1966)), 0);
  _1968 = llvm_sub_u8(32, (llvm_shl_u8(_1967, 3)));
  _1969 = (((uint32_t)(uint8_t)_1966)) << 24;
  if ((((uint8_t)_1968) > ((uint8_t)((uint8_t)16)))) {
    _1981__PHI_TEMPORARY = _1969;   /* for PHI node */
    goto _2015;
  } else {
    _1970__PHI_TEMPORARY = 16;   /* for PHI node */
    _1971__PHI_TEMPORARY = _1969;   /* for PHI node */
    goto _2016;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2016:
  _1970 = _1970__PHI_TEMPORARY;
  _1971 = _1971__PHI_TEMPORARY;
  if (((((int64_t)_1970) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1970) < ((uint64_t)(((uint64_t)(uint8_t)_1968)))))) {
    _1981__PHI_TEMPORARY = _1971;   /* for PHI node */
    goto _2015;
  } else {
    goto _2017;
  }

_2017:
  _1972 = *(uint64_t*)_1961;
  _1973 = *(uint64_t*)_1963;
  if ((((int64_t)_1973) > ((int64_t)_1972))) {
    goto _2018;
  } else {
    _1981__PHI_TEMPORARY = _1971;   /* for PHI node */
    goto _2015;
  }

_2018:
  _1974 = *(void**)_1960;
  _1975 = *(uint8_t*)(((&((uint8_t*)_1974)[((int64_t)_1972)])));
  if ((((int8_t)_1975) > ((int8_t)((uint8_t)-65)))) {
    _1981__PHI_TEMPORARY = _1971;   /* for PHI node */
    goto _2015;
  } else {
    goto _2019;
  }

_2019:
  _1976 = llvm_select_u32((((int64_t)_1972) < ((int64_t)_1973)), (((uint32_t)(uint8_t)_1975)), 0);
  _1977 = *(uint64_t*)_1961;
  *(uint64_t*)_1961 = (llvm_add_u64(_1977, 1));
  _1978 = llvm_neg_u64(_1970);
  _1979 = _1971 | (llvm_select_u32((((int64_t)_1970) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1978) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1976, (((uint32_t)_1978)))))), (llvm_select_u32((((uint64_t)_1970) > ((uint64_t)UINT64_C(31))), 0, (_1976 << (((uint32_t)_1970)))))));
  _1980 = llvm_add_u64(_1970, -8);
  _1970__PHI_TEMPORARY = _1980;   /* for PHI node */
  _1971__PHI_TEMPORARY = _1979;   /* for PHI node */
  goto _2016;

  } while (1); /* end of syntactic loop '' */
_2015:
  _1981 = _1981__PHI_TEMPORARY;
  _1982 = *(uint64_t*)_1942;
  _1983 = *(uint64_t*)_1945;
  _1984 = jsyn_cbe_fshl_i64(_1983, _1982, 32);
  _1985 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1981)), _1983, 32);
  *(uint64_t*)_1942 = _1984;
  *(uint64_t*)_1945 = _1985;
  _1986 = ((&((uint8_t*)_1936)[((int64_t)56)]));
  _1987 = *(uint64_t*)_1986;
  _1988 = ((&((uint8_t*)_1936)[((int64_t)64)]));
  _1989 = *(uint64_t*)_1988;
  _1990 = ((&((uint8_t*)_1936)[((int64_t)72)]));
  _1991 = *(uint64_t*)_1990;
  _1992 = *(void**)_1936;
  _1993 = *(uint64_t*)(((&((uint8_t*)_1992)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1936)[((int64_t)48)]))) = _1987;
  *(uint64_t*)_1986 = _1989;
  *(uint64_t*)_1988 = _1991;
  *(uint64_t*)_1990 = _1993;
  _1994 = *(uint64_t*)_1942;
  _1995 = ((uint32_t)_1994);
  _1939__PHI_TEMPORARY = _1941;   /* for PHI node */
  _1940__PHI_TEMPORARY = _1995;   /* for PHI node */
  goto _1997;

  } while (1); /* end of syntactic loop '' */
_2006:
  julia_throw_invalid_char_12(_1935, _1947);
  __builtin_unreachable();

_2010:
  julia_emit_11((&_1938), _1935, _1936, _1941, 1);
  _1996 = memcpy(_1934, (&_1938), 32);
}


static void julia_lex_star_19(void* _2020, void* _2021, void* _2022) {
  struct l_array_4_uint64_t _2023;    /* Address-exposed local */
  struct l_array_4_uint64_t _2024;    /* Address-exposed local */
  struct l_array_4_uint64_t _2025;    /* Address-exposed local */
  void* _2026;
  uint64_t _2027;
  void* _2028;
  void* _2029;
  void* _2030;
  uint64_t _2031;
  void* _2032;
  uint64_t _2033;
  void* _2034;
  uint8_t _2035;
  uint8_t _2036;
  uint8_t _2037;
  uint32_t _2038;
  uint64_t _2039;
  uint64_t _2039__PHI_TEMPORARY;
  uint32_t _2040;
  uint32_t _2040__PHI_TEMPORARY;
  uint64_t _2041;
  uint64_t _2042;
  void* _2043;
  uint8_t _2044;
  uint32_t _2045;
  uint64_t _2046;
  uint64_t _2047;
  uint32_t _2048;
  uint64_t _2049;
  uint32_t _2050;
  uint32_t _2050__PHI_TEMPORARY;
  uint64_t _2051;
  uint64_t _2052;
  uint64_t _2053;
  uint64_t _2054;
  void* _2055;
  uint64_t _2056;
  void* _2057;
  uint64_t _2058;
  void* _2059;
  uint64_t _2060;
  void* _2061;
  uint64_t _2062;
  void* _2063;
  void* _2063__PHI_TEMPORARY;
  void* _2064;
  uint64_t _2065;
  void* _2066;
  void* _2067;
  uint64_t _2068;
  void* _2069;
  uint64_t _2070;
  void* _2071;
  uint8_t _2072;
  uint8_t _2073;
  uint8_t _2074;
  uint32_t _2075;
  uint64_t _2076;
  uint64_t _2076__PHI_TEMPORARY;
  uint32_t _2077;
  uint32_t _2077__PHI_TEMPORARY;
  uint64_t _2078;
  uint64_t _2079;
  void* _2080;
  uint8_t _2081;
  uint32_t _2082;
  uint64_t _2083;
  uint64_t _2084;
  uint32_t _2085;
  uint64_t _2086;
  uint32_t _2087;
  uint32_t _2087__PHI_TEMPORARY;
  uint64_t _2088;
  uint64_t _2089;
  uint64_t _2090;
  uint64_t _2091;
  void* _2092;
  uint64_t _2093;
  void* _2094;
  uint64_t _2095;
  void* _2096;
  uint64_t _2097;
  void* _2098;
  uint64_t _2099;

  _2026 = ((&((uint8_t*)_2022)[((int64_t)32)]));
  _2027 = *(uint64_t*)_2026;
  _2028 = ((&((uint8_t*)_2022)[((int64_t)40)]));
  if (((_2027 & INT64_C(-4294967296)) == UINT64_C(3026418949592973312))) {
    goto _2100;
  } else {
    goto _2101;
  }

_2100:
  _2029 = *(void**)_2022;
  _2030 = ((&((uint8_t*)_2029)[((int64_t)16)]));
  _2031 = *(uint64_t*)_2030;
  _2032 = ((&((uint8_t*)_2029)[((int64_t)8)]));
  _2033 = *(uint64_t*)_2032;
  if ((((int64_t)_2033) > ((int64_t)_2031))) {
    goto _2102;
  } else {
    _2050__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2103;
  }

_2102:
  _2034 = *(void**)_2029;
  _2035 = *(uint8_t*)(((&((uint8_t*)_2034)[((int64_t)_2031)])));
  *(uint64_t*)_2030 = (llvm_add_u64(_2031, 1));
  _2036 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2035)), 0);
  _2037 = llvm_sub_u8(32, (llvm_shl_u8(_2036, 3)));
  _2038 = (((uint32_t)(uint8_t)_2035)) << 24;
  if ((((uint8_t)_2037) > ((uint8_t)((uint8_t)16)))) {
    _2050__PHI_TEMPORARY = _2038;   /* for PHI node */
    goto _2103;
  } else {
    _2039__PHI_TEMPORARY = 16;   /* for PHI node */
    _2040__PHI_TEMPORARY = _2038;   /* for PHI node */
    goto _2104;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2104:
  _2039 = _2039__PHI_TEMPORARY;
  _2040 = _2040__PHI_TEMPORARY;
  if (((((int64_t)_2039) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2039) < ((uint64_t)(((uint64_t)(uint8_t)_2037)))))) {
    _2050__PHI_TEMPORARY = _2040;   /* for PHI node */
    goto _2103;
  } else {
    goto _2105;
  }

_2105:
  _2041 = *(uint64_t*)_2030;
  _2042 = *(uint64_t*)_2032;
  if ((((int64_t)_2042) > ((int64_t)_2041))) {
    goto _2106;
  } else {
    _2050__PHI_TEMPORARY = _2040;   /* for PHI node */
    goto _2103;
  }

_2106:
  _2043 = *(void**)_2029;
  _2044 = *(uint8_t*)(((&((uint8_t*)_2043)[((int64_t)_2041)])));
  if ((((int8_t)_2044) > ((int8_t)((uint8_t)-65)))) {
    _2050__PHI_TEMPORARY = _2040;   /* for PHI node */
    goto _2103;
  } else {
    goto _2107;
  }

_2107:
  _2045 = llvm_select_u32((((int64_t)_2041) < ((int64_t)_2042)), (((uint32_t)(uint8_t)_2044)), 0);
  _2046 = *(uint64_t*)_2030;
  *(uint64_t*)_2030 = (llvm_add_u64(_2046, 1));
  _2047 = llvm_neg_u64(_2039);
  _2048 = _2040 | (llvm_select_u32((((int64_t)_2039) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2047) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2045, (((uint32_t)_2047)))))), (llvm_select_u32((((uint64_t)_2039) > ((uint64_t)UINT64_C(31))), 0, (_2045 << (((uint32_t)_2039)))))));
  _2049 = llvm_add_u64(_2039, -8);
  _2039__PHI_TEMPORARY = _2049;   /* for PHI node */
  _2040__PHI_TEMPORARY = _2048;   /* for PHI node */
  goto _2104;

  } while (1); /* end of syntactic loop '' */
_2103:
  _2050 = _2050__PHI_TEMPORARY;
  _2051 = *(uint64_t*)_2026;
  _2052 = *(uint64_t*)_2028;
  _2053 = jsyn_cbe_fshl_i64(_2052, _2051, 32);
  _2054 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2050)), _2052, 32);
  *(uint64_t*)_2026 = _2053;
  *(uint64_t*)_2028 = _2054;
  _2055 = ((&((uint8_t*)_2022)[((int64_t)56)]));
  _2056 = *(uint64_t*)_2055;
  _2057 = ((&((uint8_t*)_2022)[((int64_t)64)]));
  _2058 = *(uint64_t*)_2057;
  _2059 = ((&((uint8_t*)_2022)[((int64_t)72)]));
  _2060 = *(uint64_t*)_2059;
  _2061 = *(void**)_2022;
  _2062 = *(uint64_t*)(((&((uint8_t*)_2061)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2022)[((int64_t)48)]))) = _2056;
  *(uint64_t*)_2055 = _2058;
  *(uint64_t*)_2057 = _2060;
  *(uint64_t*)_2059 = _2062;
  julia_emit_11((&_2023), _2021, _2022, 67, 1);
  _2063__PHI_TEMPORARY = (&_2023);   /* for PHI node */
  goto _2108;

_2108:
  _2063 = _2063__PHI_TEMPORARY;
  _2064 = memcpy(_2020, _2063, 32);
  return;
_2101:
  _2065 = *(uint64_t*)_2026;
  if (((_2065 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2109;
  } else {
    goto _2110;
  }

_2109:
  _2066 = *(void**)_2022;
  _2067 = ((&((uint8_t*)_2066)[((int64_t)16)]));
  _2068 = *(uint64_t*)_2067;
  _2069 = ((&((uint8_t*)_2066)[((int64_t)8)]));
  _2070 = *(uint64_t*)_2069;
  if ((((int64_t)_2070) > ((int64_t)_2068))) {
    goto _2111;
  } else {
    _2087__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2112;
  }

_2111:
  _2071 = *(void**)_2066;
  _2072 = *(uint8_t*)(((&((uint8_t*)_2071)[((int64_t)_2068)])));
  *(uint64_t*)_2067 = (llvm_add_u64(_2068, 1));
  _2073 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2072)), 0);
  _2074 = llvm_sub_u8(32, (llvm_shl_u8(_2073, 3)));
  _2075 = (((uint32_t)(uint8_t)_2072)) << 24;
  if ((((uint8_t)_2074) > ((uint8_t)((uint8_t)16)))) {
    _2087__PHI_TEMPORARY = _2075;   /* for PHI node */
    goto _2112;
  } else {
    _2076__PHI_TEMPORARY = 16;   /* for PHI node */
    _2077__PHI_TEMPORARY = _2075;   /* for PHI node */
    goto _2113;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2113:
  _2076 = _2076__PHI_TEMPORARY;
  _2077 = _2077__PHI_TEMPORARY;
  if (((((int64_t)_2076) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2076) < ((uint64_t)(((uint64_t)(uint8_t)_2074)))))) {
    _2087__PHI_TEMPORARY = _2077;   /* for PHI node */
    goto _2112;
  } else {
    goto _2114;
  }

_2114:
  _2078 = *(uint64_t*)_2067;
  _2079 = *(uint64_t*)_2069;
  if ((((int64_t)_2079) > ((int64_t)_2078))) {
    goto _2115;
  } else {
    _2087__PHI_TEMPORARY = _2077;   /* for PHI node */
    goto _2112;
  }

_2115:
  _2080 = *(void**)_2066;
  _2081 = *(uint8_t*)(((&((uint8_t*)_2080)[((int64_t)_2078)])));
  if ((((int8_t)_2081) > ((int8_t)((uint8_t)-65)))) {
    _2087__PHI_TEMPORARY = _2077;   /* for PHI node */
    goto _2112;
  } else {
    goto _2116;
  }

_2116:
  _2082 = llvm_select_u32((((int64_t)_2078) < ((int64_t)_2079)), (((uint32_t)(uint8_t)_2081)), 0);
  _2083 = *(uint64_t*)_2067;
  *(uint64_t*)_2067 = (llvm_add_u64(_2083, 1));
  _2084 = llvm_neg_u64(_2076);
  _2085 = _2077 | (llvm_select_u32((((int64_t)_2076) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2084) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2082, (((uint32_t)_2084)))))), (llvm_select_u32((((uint64_t)_2076) > ((uint64_t)UINT64_C(31))), 0, (_2082 << (((uint32_t)_2076)))))));
  _2086 = llvm_add_u64(_2076, -8);
  _2076__PHI_TEMPORARY = _2086;   /* for PHI node */
  _2077__PHI_TEMPORARY = _2085;   /* for PHI node */
  goto _2113;

  } while (1); /* end of syntactic loop '' */
_2112:
  _2087 = _2087__PHI_TEMPORARY;
  _2088 = *(uint64_t*)_2026;
  _2089 = *(uint64_t*)_2028;
  _2090 = jsyn_cbe_fshl_i64(_2089, _2088, 32);
  _2091 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2087)), _2089, 32);
  *(uint64_t*)_2026 = _2090;
  *(uint64_t*)_2028 = _2091;
  _2092 = ((&((uint8_t*)_2022)[((int64_t)56)]));
  _2093 = *(uint64_t*)_2092;
  _2094 = ((&((uint8_t*)_2022)[((int64_t)64)]));
  _2095 = *(uint64_t*)_2094;
  _2096 = ((&((uint8_t*)_2022)[((int64_t)72)]));
  _2097 = *(uint64_t*)_2096;
  _2098 = *(void**)_2022;
  _2099 = *(uint64_t*)(((&((uint8_t*)_2098)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2022)[((int64_t)48)]))) = _2093;
  *(uint64_t*)_2092 = _2095;
  *(uint64_t*)_2094 = _2097;
  *(uint64_t*)_2096 = _2099;
  julia_emit_11((&_2024), _2021, _2022, 71, 1);
  _2063__PHI_TEMPORARY = (&_2024);   /* for PHI node */
  goto _2108;

_2110:
  julia_emit_11((&_2025), _2021, _2022, 592, 1);
  _2063__PHI_TEMPORARY = (&_2025);   /* for PHI node */
  goto _2108;

}


static void julia_lex_circumflex_20(void* _2117, void* _2118, void* _2119) {
  struct l_array_4_uint64_t _2120;    /* Address-exposed local */
  struct l_array_4_uint64_t _2121;    /* Address-exposed local */
  void* _2122;
  uint64_t _2123;
  void* _2124;
  void* _2125;
  void* _2126;
  uint64_t _2127;
  void* _2128;
  uint64_t _2129;
  void* _2130;
  uint8_t _2131;
  uint8_t _2132;
  uint8_t _2133;
  uint32_t _2134;
  uint64_t _2135;
  uint64_t _2135__PHI_TEMPORARY;
  uint32_t _2136;
  uint32_t _2136__PHI_TEMPORARY;
  uint64_t _2137;
  uint64_t _2138;
  void* _2139;
  uint8_t _2140;
  uint32_t _2141;
  uint64_t _2142;
  uint64_t _2143;
  uint32_t _2144;
  uint64_t _2145;
  uint32_t _2146;
  uint32_t _2146__PHI_TEMPORARY;
  uint64_t _2147;
  uint64_t _2148;
  uint64_t _2149;
  uint64_t _2150;
  void* _2151;
  uint64_t _2152;
  void* _2153;
  uint64_t _2154;
  void* _2155;
  uint64_t _2156;
  void* _2157;
  uint64_t _2158;
  void* _2159;
  void* _2159__PHI_TEMPORARY;
  void* _2160;

  _2122 = ((&((uint8_t*)_2119)[((int64_t)32)]));
  _2123 = *(uint64_t*)_2122;
  _2124 = ((&((uint8_t*)_2119)[((int64_t)40)]));
  if (((_2123 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2161;
  } else {
    goto _2162;
  }

_2161:
  _2125 = *(void**)_2119;
  _2126 = ((&((uint8_t*)_2125)[((int64_t)16)]));
  _2127 = *(uint64_t*)_2126;
  _2128 = ((&((uint8_t*)_2125)[((int64_t)8)]));
  _2129 = *(uint64_t*)_2128;
  if ((((int64_t)_2129) > ((int64_t)_2127))) {
    goto _2163;
  } else {
    _2146__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2164;
  }

_2163:
  _2130 = *(void**)_2125;
  _2131 = *(uint8_t*)(((&((uint8_t*)_2130)[((int64_t)_2127)])));
  *(uint64_t*)_2126 = (llvm_add_u64(_2127, 1));
  _2132 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2131)), 0);
  _2133 = llvm_sub_u8(32, (llvm_shl_u8(_2132, 3)));
  _2134 = (((uint32_t)(uint8_t)_2131)) << 24;
  if ((((uint8_t)_2133) > ((uint8_t)((uint8_t)16)))) {
    _2146__PHI_TEMPORARY = _2134;   /* for PHI node */
    goto _2164;
  } else {
    _2135__PHI_TEMPORARY = 16;   /* for PHI node */
    _2136__PHI_TEMPORARY = _2134;   /* for PHI node */
    goto _2165;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2165:
  _2135 = _2135__PHI_TEMPORARY;
  _2136 = _2136__PHI_TEMPORARY;
  if (((((int64_t)_2135) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2135) < ((uint64_t)(((uint64_t)(uint8_t)_2133)))))) {
    _2146__PHI_TEMPORARY = _2136;   /* for PHI node */
    goto _2164;
  } else {
    goto _2166;
  }

_2166:
  _2137 = *(uint64_t*)_2126;
  _2138 = *(uint64_t*)_2128;
  if ((((int64_t)_2138) > ((int64_t)_2137))) {
    goto _2167;
  } else {
    _2146__PHI_TEMPORARY = _2136;   /* for PHI node */
    goto _2164;
  }

_2167:
  _2139 = *(void**)_2125;
  _2140 = *(uint8_t*)(((&((uint8_t*)_2139)[((int64_t)_2137)])));
  if ((((int8_t)_2140) > ((int8_t)((uint8_t)-65)))) {
    _2146__PHI_TEMPORARY = _2136;   /* for PHI node */
    goto _2164;
  } else {
    goto _2168;
  }

_2168:
  _2141 = llvm_select_u32((((int64_t)_2137) < ((int64_t)_2138)), (((uint32_t)(uint8_t)_2140)), 0);
  _2142 = *(uint64_t*)_2126;
  *(uint64_t*)_2126 = (llvm_add_u64(_2142, 1));
  _2143 = llvm_neg_u64(_2135);
  _2144 = _2136 | (llvm_select_u32((((int64_t)_2135) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2143) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2141, (((uint32_t)_2143)))))), (llvm_select_u32((((uint64_t)_2135) > ((uint64_t)UINT64_C(31))), 0, (_2141 << (((uint32_t)_2135)))))));
  _2145 = llvm_add_u64(_2135, -8);
  _2135__PHI_TEMPORARY = _2145;   /* for PHI node */
  _2136__PHI_TEMPORARY = _2144;   /* for PHI node */
  goto _2165;

  } while (1); /* end of syntactic loop '' */
_2164:
  _2146 = _2146__PHI_TEMPORARY;
  _2147 = *(uint64_t*)_2122;
  _2148 = *(uint64_t*)_2124;
  _2149 = jsyn_cbe_fshl_i64(_2148, _2147, 32);
  _2150 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2146)), _2148, 32);
  *(uint64_t*)_2122 = _2149;
  *(uint64_t*)_2124 = _2150;
  _2151 = ((&((uint8_t*)_2119)[((int64_t)56)]));
  _2152 = *(uint64_t*)_2151;
  _2153 = ((&((uint8_t*)_2119)[((int64_t)64)]));
  _2154 = *(uint64_t*)_2153;
  _2155 = ((&((uint8_t*)_2119)[((int64_t)72)]));
  _2156 = *(uint64_t*)_2155;
  _2157 = *(void**)_2119;
  _2158 = *(uint64_t*)(((&((uint8_t*)_2157)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2119)[((int64_t)48)]))) = _2152;
  *(uint64_t*)_2151 = _2154;
  *(uint64_t*)_2153 = _2156;
  *(uint64_t*)_2155 = _2158;
  julia_emit_11((&_2120), _2118, _2119, 71, 1);
  _2159__PHI_TEMPORARY = (&_2120);   /* for PHI node */
  goto _2169;

_2169:
  _2159 = _2159__PHI_TEMPORARY;
  _2160 = memcpy(_2117, _2159, 32);
  return;
_2162:
  julia_emit_11((&_2121), _2118, _2119, 674, 1);
  _2159__PHI_TEMPORARY = (&_2121);   /* for PHI node */
  goto _2169;

}


static void julia_lex_dollar_21(void* _2170, void* _2171, void* _2172) {
  struct l_array_4_uint64_t _2173;    /* Address-exposed local */
  struct l_array_4_uint64_t _2174;    /* Address-exposed local */
  void* _2175;
  uint64_t _2176;
  void* _2177;
  void* _2178;
  void* _2179;
  uint64_t _2180;
  void* _2181;
  uint64_t _2182;
  void* _2183;
  uint8_t _2184;
  uint8_t _2185;
  uint8_t _2186;
  uint32_t _2187;
  uint64_t _2188;
  uint64_t _2188__PHI_TEMPORARY;
  uint32_t _2189;
  uint32_t _2189__PHI_TEMPORARY;
  uint64_t _2190;
  uint64_t _2191;
  void* _2192;
  uint8_t _2193;
  uint32_t _2194;
  uint64_t _2195;
  uint64_t _2196;
  uint32_t _2197;
  uint64_t _2198;
  uint32_t _2199;
  uint32_t _2199__PHI_TEMPORARY;
  uint64_t _2200;
  uint64_t _2201;
  uint64_t _2202;
  uint64_t _2203;
  void* _2204;
  uint64_t _2205;
  void* _2206;
  uint64_t _2207;
  void* _2208;
  uint64_t _2209;
  void* _2210;
  uint64_t _2211;
  void* _2212;
  void* _2212__PHI_TEMPORARY;
  void* _2213;

  _2175 = ((&((uint8_t*)_2172)[((int64_t)32)]));
  _2176 = *(uint64_t*)_2175;
  _2177 = ((&((uint8_t*)_2172)[((int64_t)40)]));
  if (((_2176 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2214;
  } else {
    goto _2215;
  }

_2214:
  _2178 = *(void**)_2172;
  _2179 = ((&((uint8_t*)_2178)[((int64_t)16)]));
  _2180 = *(uint64_t*)_2179;
  _2181 = ((&((uint8_t*)_2178)[((int64_t)8)]));
  _2182 = *(uint64_t*)_2181;
  if ((((int64_t)_2182) > ((int64_t)_2180))) {
    goto _2216;
  } else {
    _2199__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2217;
  }

_2216:
  _2183 = *(void**)_2178;
  _2184 = *(uint8_t*)(((&((uint8_t*)_2183)[((int64_t)_2180)])));
  *(uint64_t*)_2179 = (llvm_add_u64(_2180, 1));
  _2185 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2184)), 0);
  _2186 = llvm_sub_u8(32, (llvm_shl_u8(_2185, 3)));
  _2187 = (((uint32_t)(uint8_t)_2184)) << 24;
  if ((((uint8_t)_2186) > ((uint8_t)((uint8_t)16)))) {
    _2199__PHI_TEMPORARY = _2187;   /* for PHI node */
    goto _2217;
  } else {
    _2188__PHI_TEMPORARY = 16;   /* for PHI node */
    _2189__PHI_TEMPORARY = _2187;   /* for PHI node */
    goto _2218;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2218:
  _2188 = _2188__PHI_TEMPORARY;
  _2189 = _2189__PHI_TEMPORARY;
  if (((((int64_t)_2188) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2188) < ((uint64_t)(((uint64_t)(uint8_t)_2186)))))) {
    _2199__PHI_TEMPORARY = _2189;   /* for PHI node */
    goto _2217;
  } else {
    goto _2219;
  }

_2219:
  _2190 = *(uint64_t*)_2179;
  _2191 = *(uint64_t*)_2181;
  if ((((int64_t)_2191) > ((int64_t)_2190))) {
    goto _2220;
  } else {
    _2199__PHI_TEMPORARY = _2189;   /* for PHI node */
    goto _2217;
  }

_2220:
  _2192 = *(void**)_2178;
  _2193 = *(uint8_t*)(((&((uint8_t*)_2192)[((int64_t)_2190)])));
  if ((((int8_t)_2193) > ((int8_t)((uint8_t)-65)))) {
    _2199__PHI_TEMPORARY = _2189;   /* for PHI node */
    goto _2217;
  } else {
    goto _2221;
  }

_2221:
  _2194 = llvm_select_u32((((int64_t)_2190) < ((int64_t)_2191)), (((uint32_t)(uint8_t)_2193)), 0);
  _2195 = *(uint64_t*)_2179;
  *(uint64_t*)_2179 = (llvm_add_u64(_2195, 1));
  _2196 = llvm_neg_u64(_2188);
  _2197 = _2189 | (llvm_select_u32((((int64_t)_2188) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2196) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2194, (((uint32_t)_2196)))))), (llvm_select_u32((((uint64_t)_2188) > ((uint64_t)UINT64_C(31))), 0, (_2194 << (((uint32_t)_2188)))))));
  _2198 = llvm_add_u64(_2188, -8);
  _2188__PHI_TEMPORARY = _2198;   /* for PHI node */
  _2189__PHI_TEMPORARY = _2197;   /* for PHI node */
  goto _2218;

  } while (1); /* end of syntactic loop '' */
_2217:
  _2199 = _2199__PHI_TEMPORARY;
  _2200 = *(uint64_t*)_2175;
  _2201 = *(uint64_t*)_2177;
  _2202 = jsyn_cbe_fshl_i64(_2201, _2200, 32);
  _2203 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2199)), _2201, 32);
  *(uint64_t*)_2175 = _2202;
  *(uint64_t*)_2177 = _2203;
  _2204 = ((&((uint8_t*)_2172)[((int64_t)56)]));
  _2205 = *(uint64_t*)_2204;
  _2206 = ((&((uint8_t*)_2172)[((int64_t)64)]));
  _2207 = *(uint64_t*)_2206;
  _2208 = ((&((uint8_t*)_2172)[((int64_t)72)]));
  _2209 = *(uint64_t*)_2208;
  _2210 = *(void**)_2172;
  _2211 = *(uint64_t*)(((&((uint8_t*)_2210)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2172)[((int64_t)48)]))) = _2205;
  *(uint64_t*)_2204 = _2207;
  *(uint64_t*)_2206 = _2209;
  *(uint64_t*)_2208 = _2211;
  julia_emit_11((&_2173), _2171, _2172, 71, 1);
  _2212__PHI_TEMPORARY = (&_2173);   /* for PHI node */
  goto _2222;

_2222:
  _2212 = _2212__PHI_TEMPORARY;
  _2213 = memcpy(_2170, _2212, 32);
  return;
_2215:
  julia_emit_11((&_2174), _2171, _2172, 534, 1);
  _2212__PHI_TEMPORARY = (&_2174);   /* for PHI node */
  goto _2222;

}


static void julia_lex_xor_22(void* _2223, void* _2224, void* _2225) {
  struct l_array_4_uint64_t _2226;    /* Address-exposed local */
  struct l_array_4_uint64_t _2227;    /* Address-exposed local */
  void* _2228;
  uint64_t _2229;
  void* _2230;
  void* _2231;
  void* _2232;
  uint64_t _2233;
  void* _2234;
  uint64_t _2235;
  void* _2236;
  uint8_t _2237;
  uint8_t _2238;
  uint8_t _2239;
  uint32_t _2240;
  uint64_t _2241;
  uint64_t _2241__PHI_TEMPORARY;
  uint32_t _2242;
  uint32_t _2242__PHI_TEMPORARY;
  uint64_t _2243;
  uint64_t _2244;
  void* _2245;
  uint8_t _2246;
  uint32_t _2247;
  uint64_t _2248;
  uint64_t _2249;
  uint32_t _2250;
  uint64_t _2251;
  uint32_t _2252;
  uint32_t _2252__PHI_TEMPORARY;
  uint64_t _2253;
  uint64_t _2254;
  uint64_t _2255;
  uint64_t _2256;
  void* _2257;
  uint64_t _2258;
  void* _2259;
  uint64_t _2260;
  void* _2261;
  uint64_t _2262;
  void* _2263;
  uint64_t _2264;
  void* _2265;
  void* _2265__PHI_TEMPORARY;
  void* _2266;

  _2228 = ((&((uint8_t*)_2225)[((int64_t)32)]));
  _2229 = *(uint64_t*)_2228;
  _2230 = ((&((uint8_t*)_2225)[((int64_t)40)]));
  if (((_2229 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2267;
  } else {
    goto _2268;
  }

_2267:
  _2231 = *(void**)_2225;
  _2232 = ((&((uint8_t*)_2231)[((int64_t)16)]));
  _2233 = *(uint64_t*)_2232;
  _2234 = ((&((uint8_t*)_2231)[((int64_t)8)]));
  _2235 = *(uint64_t*)_2234;
  if ((((int64_t)_2235) > ((int64_t)_2233))) {
    goto _2269;
  } else {
    _2252__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2270;
  }

_2269:
  _2236 = *(void**)_2231;
  _2237 = *(uint8_t*)(((&((uint8_t*)_2236)[((int64_t)_2233)])));
  *(uint64_t*)_2232 = (llvm_add_u64(_2233, 1));
  _2238 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2237)), 0);
  _2239 = llvm_sub_u8(32, (llvm_shl_u8(_2238, 3)));
  _2240 = (((uint32_t)(uint8_t)_2237)) << 24;
  if ((((uint8_t)_2239) > ((uint8_t)((uint8_t)16)))) {
    _2252__PHI_TEMPORARY = _2240;   /* for PHI node */
    goto _2270;
  } else {
    _2241__PHI_TEMPORARY = 16;   /* for PHI node */
    _2242__PHI_TEMPORARY = _2240;   /* for PHI node */
    goto _2271;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2271:
  _2241 = _2241__PHI_TEMPORARY;
  _2242 = _2242__PHI_TEMPORARY;
  if (((((int64_t)_2241) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2241) < ((uint64_t)(((uint64_t)(uint8_t)_2239)))))) {
    _2252__PHI_TEMPORARY = _2242;   /* for PHI node */
    goto _2270;
  } else {
    goto _2272;
  }

_2272:
  _2243 = *(uint64_t*)_2232;
  _2244 = *(uint64_t*)_2234;
  if ((((int64_t)_2244) > ((int64_t)_2243))) {
    goto _2273;
  } else {
    _2252__PHI_TEMPORARY = _2242;   /* for PHI node */
    goto _2270;
  }

_2273:
  _2245 = *(void**)_2231;
  _2246 = *(uint8_t*)(((&((uint8_t*)_2245)[((int64_t)_2243)])));
  if ((((int8_t)_2246) > ((int8_t)((uint8_t)-65)))) {
    _2252__PHI_TEMPORARY = _2242;   /* for PHI node */
    goto _2270;
  } else {
    goto _2274;
  }

_2274:
  _2247 = llvm_select_u32((((int64_t)_2243) < ((int64_t)_2244)), (((uint32_t)(uint8_t)_2246)), 0);
  _2248 = *(uint64_t*)_2232;
  *(uint64_t*)_2232 = (llvm_add_u64(_2248, 1));
  _2249 = llvm_neg_u64(_2241);
  _2250 = _2242 | (llvm_select_u32((((int64_t)_2241) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2249) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2247, (((uint32_t)_2249)))))), (llvm_select_u32((((uint64_t)_2241) > ((uint64_t)UINT64_C(31))), 0, (_2247 << (((uint32_t)_2241)))))));
  _2251 = llvm_add_u64(_2241, -8);
  _2241__PHI_TEMPORARY = _2251;   /* for PHI node */
  _2242__PHI_TEMPORARY = _2250;   /* for PHI node */
  goto _2271;

  } while (1); /* end of syntactic loop '' */
_2270:
  _2252 = _2252__PHI_TEMPORARY;
  _2253 = *(uint64_t*)_2228;
  _2254 = *(uint64_t*)_2230;
  _2255 = jsyn_cbe_fshl_i64(_2254, _2253, 32);
  _2256 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2252)), _2254, 32);
  *(uint64_t*)_2228 = _2255;
  *(uint64_t*)_2230 = _2256;
  _2257 = ((&((uint8_t*)_2225)[((int64_t)56)]));
  _2258 = *(uint64_t*)_2257;
  _2259 = ((&((uint8_t*)_2225)[((int64_t)64)]));
  _2260 = *(uint64_t*)_2259;
  _2261 = ((&((uint8_t*)_2225)[((int64_t)72)]));
  _2262 = *(uint64_t*)_2261;
  _2263 = *(void**)_2225;
  _2264 = *(uint64_t*)(((&((uint8_t*)_2263)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2225)[((int64_t)48)]))) = _2258;
  *(uint64_t*)_2257 = _2260;
  *(uint64_t*)_2259 = _2262;
  *(uint64_t*)_2261 = _2264;
  julia_emit_11((&_2226), _2224, _2225, 71, 1);
  _2265__PHI_TEMPORARY = (&_2226);   /* for PHI node */
  goto _2275;

_2275:
  _2265 = _2265__PHI_TEMPORARY;
  _2266 = memcpy(_2223, _2265, 32);
  return;
_2268:
  julia_emit_11((&_2227), _2224, _2225, 552, 1);
  _2265__PHI_TEMPORARY = (&_2227);   /* for PHI node */
  goto _2275;

}


static void julia_lex_comment_23(void* _2276, void* _2277, void* _2278) {
  struct l_array_4_uint64_t _2279;    /* Address-exposed local */
  struct l_array_4_uint64_t _2280;    /* Address-exposed local */
  struct l_array_4_uint64_t _2281;    /* Address-exposed local */
  void* _2282;
  uint64_t _2283;
  void* _2284;
  bool _2285;
  bool _2285__PHI_TEMPORARY;
  uint64_t _2286;
  uint64_t _2287;
  uint32_t _2288;
  uint64_t _2289;
  uint32_t _2290;
  uint32_t _2291;
  uint32_t _2292;
  bool _2293;
  void* _2294;
  void* _2295;
  uint64_t _2296;
  void* _2297;
  uint64_t _2298;
  void* _2299;
  uint8_t _2300;
  uint8_t _2301;
  uint8_t _2302;
  uint32_t _2303;
  uint64_t _2304;
  uint64_t _2304__PHI_TEMPORARY;
  uint32_t _2305;
  uint32_t _2305__PHI_TEMPORARY;
  uint64_t _2306;
  uint64_t _2307;
  void* _2308;
  uint8_t _2309;
  uint32_t _2310;
  uint64_t _2311;
  uint64_t _2312;
  uint32_t _2313;
  uint64_t _2314;
  uint32_t _2315;
  uint32_t _2315__PHI_TEMPORARY;
  uint64_t _2316;
  uint64_t _2317;
  uint64_t _2318;
  uint64_t _2319;
  void* _2320;
  uint64_t _2321;
  void* _2322;
  uint64_t _2323;
  void* _2324;
  uint64_t _2325;
  void* _2326;
  uint64_t _2327;
  void* _2328;
  void* _2328__PHI_TEMPORARY;
  void* _2329;
  void* _2330;
  void* _2331;
  uint64_t _2332;
  void* _2333;
  uint64_t _2334;
  void* _2335;
  uint8_t _2336;
  uint8_t _2337;
  uint8_t _2338;
  uint32_t _2339;
  uint64_t _2340;
  uint64_t _2340__PHI_TEMPORARY;
  uint32_t _2341;
  uint32_t _2341__PHI_TEMPORARY;
  uint64_t _2342;
  uint64_t _2343;
  void* _2344;
  uint8_t _2345;
  uint32_t _2346;
  uint64_t _2347;
  uint64_t _2348;
  uint32_t _2349;
  uint64_t _2350;
  uint32_t _2351;
  uint32_t _2351__PHI_TEMPORARY;
  uint64_t _2352;
  uint64_t _2353;
  uint64_t _2354;
  uint64_t _2355;
  void* _2356;
  void* _2357;
  uint64_t _2358;
  void* _2359;
  uint64_t _2360;
  void* _2361;
  uint64_t _2362;
  void* _2363;
  uint64_t _2364;
  uint64_t _2365;
  uint32_t _2366;
  uint64_t _2367;
  uint64_t _2367__PHI_TEMPORARY;
  bool _2368;
  bool _2368__PHI_TEMPORARY;
  uint64_t _2369;
  uint64_t _2369__PHI_TEMPORARY;
  uint64_t _2370;
  uint64_t _2370__PHI_TEMPORARY;
  uint32_t _2371;
  uint32_t _2371__PHI_TEMPORARY;
  bool _2372;
  bool _2372__PHI_TEMPORARY;
  void* _2373;
  void* _2374;
  uint64_t _2375;
  void* _2376;
  uint64_t _2377;
  void* _2378;
  uint8_t _2379;
  uint8_t _2380;
  uint8_t _2381;
  uint32_t _2382;
  uint64_t _2383;
  uint64_t _2383__PHI_TEMPORARY;
  uint32_t _2384;
  uint32_t _2384__PHI_TEMPORARY;
  uint64_t _2385;
  uint64_t _2386;
  void* _2387;
  uint8_t _2388;
  uint32_t _2389;
  uint64_t _2390;
  uint64_t _2391;
  uint32_t _2392;
  uint64_t _2393;
  uint32_t _2394;
  uint32_t _2394__PHI_TEMPORARY;
  uint64_t _2395;
  uint64_t _2396;
  uint64_t _2397;
  uint64_t _2398;
  uint64_t _2399;
  uint64_t _2400;
  uint64_t _2401;
  void* _2402;
  uint64_t _2403;
  uint32_t _2404;
  uint64_t _2405;
  uint64_t _2406;
  uint64_t _2407;
  uint64_t _2408;
  uint64_t _2409;
  uint64_t _2409__PHI_TEMPORARY;
  uint64_t _2410;
  uint64_t _2410__PHI_TEMPORARY;
  uint32_t _2411;
  uint32_t _2412;
  uint32_t _2413;
  bool _2414;
  uint64_t _2415;
  uint64_t _2416;

  _2282 = ((&((uint8_t*)_2278)[((int64_t)32)]));
  _2283 = *(uint64_t*)_2282;
  _2284 = ((&((uint8_t*)_2278)[((int64_t)40)]));
  if (((_2283 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2417;
  } else {
    _2285__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _2418;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2418:
  _2285 = _2285__PHI_TEMPORARY;
  _2286 = *(uint64_t*)_2282;
  _2287 = llvm_lshr_u64(_2286, 32);
  _2288 = ((uint32_t)_2287);
  if ((_2287 == UINT64_C(167772160))) {
    goto _2419;
  } else {
    goto _2420;
  }

_2420:
  _2289 = *(uint64_t*)_2284;
  if (((llvm_select_bool((_2287 == UINT64_C(218103808)), ((_2289 & INT64_C(4294967295)) == UINT64_C(167772160)), 0)) | (_2287 == UINT64_C(4294967295)))) {
    goto _2419;
  } else {
    goto _2421;
  }

_2421:
  _2290 = llvm_OC_ctlz_OC_i32((_2288 ^ -1), 0);
  _2291 = llvm_OC_cttz_OC_i32(_2288, 0);
  _2292 = _2291 & 56;
  _2293 = _2285 & (((((_2290 != 1u) & (((uint32_t)(llvm_add_u32((_2290 << 3), _2292))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_2291) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_2288 & 12632256) ^ 8421504), _2292)) == 0u)))) & ((((_2288 & -33554432) != 3221225472u) & ((_2288 & -2097152) != 3766484992u)) & ((_2288 & -1048576) != 4034920448u))) & (((((uint64_t)_2286) < ((uint64_t)UINT64_C(17122614315006820352))) | (_2287 == UINT64_C(3986669312))) | (((((uint64_t)_2286) > ((uint64_t)UINT64_C(17185876919829135359))) | (_2287 == UINT64_C(4001398784))) & ((((uint64_t)_2286) < ((uint64_t)UINT64_C(17622514693983698944))) | (_2287 == UINT64_C(4103061439))))));
  _2294 = *(void**)_2278;
  _2295 = ((&((uint8_t*)_2294)[((int64_t)16)]));
  _2296 = *(uint64_t*)_2295;
  _2297 = ((&((uint8_t*)_2294)[((int64_t)8)]));
  _2298 = *(uint64_t*)_2297;
  if ((((int64_t)_2298) > ((int64_t)_2296))) {
    goto _2422;
  } else {
    _2315__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2423;
  }

_2422:
  _2299 = *(void**)_2294;
  _2300 = *(uint8_t*)(((&((uint8_t*)_2299)[((int64_t)_2296)])));
  *(uint64_t*)_2295 = (llvm_add_u64(_2296, 1));
  _2301 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2300)), 0);
  _2302 = llvm_sub_u8(32, (llvm_shl_u8(_2301, 3)));
  _2303 = (((uint32_t)(uint8_t)_2300)) << 24;
  if ((((uint8_t)_2302) > ((uint8_t)((uint8_t)16)))) {
    _2315__PHI_TEMPORARY = _2303;   /* for PHI node */
    goto _2423;
  } else {
    _2304__PHI_TEMPORARY = 16;   /* for PHI node */
    _2305__PHI_TEMPORARY = _2303;   /* for PHI node */
    goto _2424;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2424:
  _2304 = _2304__PHI_TEMPORARY;
  _2305 = _2305__PHI_TEMPORARY;
  if (((((int64_t)_2304) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2304) < ((uint64_t)(((uint64_t)(uint8_t)_2302)))))) {
    _2315__PHI_TEMPORARY = _2305;   /* for PHI node */
    goto _2423;
  } else {
    goto _2425;
  }

_2425:
  _2306 = *(uint64_t*)_2295;
  _2307 = *(uint64_t*)_2297;
  if ((((int64_t)_2307) > ((int64_t)_2306))) {
    goto _2426;
  } else {
    _2315__PHI_TEMPORARY = _2305;   /* for PHI node */
    goto _2423;
  }

_2426:
  _2308 = *(void**)_2294;
  _2309 = *(uint8_t*)(((&((uint8_t*)_2308)[((int64_t)_2306)])));
  if ((((int8_t)_2309) > ((int8_t)((uint8_t)-65)))) {
    _2315__PHI_TEMPORARY = _2305;   /* for PHI node */
    goto _2423;
  } else {
    goto _2427;
  }

_2427:
  _2310 = llvm_select_u32((((int64_t)_2306) < ((int64_t)_2307)), (((uint32_t)(uint8_t)_2309)), 0);
  _2311 = *(uint64_t*)_2295;
  *(uint64_t*)_2295 = (llvm_add_u64(_2311, 1));
  _2312 = llvm_neg_u64(_2304);
  _2313 = _2305 | (llvm_select_u32((((int64_t)_2304) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2312) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2310, (((uint32_t)_2312)))))), (llvm_select_u32((((uint64_t)_2304) > ((uint64_t)UINT64_C(31))), 0, (_2310 << (((uint32_t)_2304)))))));
  _2314 = llvm_add_u64(_2304, -8);
  _2304__PHI_TEMPORARY = _2314;   /* for PHI node */
  _2305__PHI_TEMPORARY = _2313;   /* for PHI node */
  goto _2424;

  } while (1); /* end of syntactic loop '' */
_2423:
  _2315 = _2315__PHI_TEMPORARY;
  _2316 = *(uint64_t*)_2282;
  _2317 = *(uint64_t*)_2284;
  _2318 = jsyn_cbe_fshl_i64(_2317, _2316, 32);
  _2319 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2315)), _2317, 32);
  *(uint64_t*)_2282 = _2318;
  *(uint64_t*)_2284 = _2319;
  _2320 = ((&((uint8_t*)_2278)[((int64_t)56)]));
  _2321 = *(uint64_t*)_2320;
  _2322 = ((&((uint8_t*)_2278)[((int64_t)64)]));
  _2323 = *(uint64_t*)_2322;
  _2324 = ((&((uint8_t*)_2278)[((int64_t)72)]));
  _2325 = *(uint64_t*)_2324;
  _2326 = *(void**)_2278;
  _2327 = *(uint64_t*)(((&((uint8_t*)_2326)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2278)[((int64_t)48)]))) = _2321;
  *(uint64_t*)_2320 = _2323;
  *(uint64_t*)_2322 = _2325;
  *(uint64_t*)_2324 = _2327;
  _2285__PHI_TEMPORARY = _2293;   /* for PHI node */
  goto _2418;

  } while (1); /* end of syntactic loop '' */
_2419:
  julia_emit_11((&_2279), _2277, _2278, (llvm_select_u16(_2285, 0, 762)), 1);
  _2328__PHI_TEMPORARY = (&_2279);   /* for PHI node */
  goto _2428;

_2428:
  _2328 = _2328__PHI_TEMPORARY;
  _2329 = memcpy(_2276, _2328, 32);
  return;
_2417:
  _2330 = *(void**)_2278;
  _2331 = ((&((uint8_t*)_2330)[((int64_t)16)]));
  _2332 = *(uint64_t*)_2331;
  _2333 = ((&((uint8_t*)_2330)[((int64_t)8)]));
  _2334 = *(uint64_t*)_2333;
  if ((((int64_t)_2334) > ((int64_t)_2332))) {
    goto _2429;
  } else {
    _2351__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2430;
  }

_2429:
  _2335 = *(void**)_2330;
  _2336 = *(uint8_t*)(((&((uint8_t*)_2335)[((int64_t)_2332)])));
  *(uint64_t*)_2331 = (llvm_add_u64(_2332, 1));
  _2337 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2336)), 0);
  _2338 = llvm_sub_u8(32, (llvm_shl_u8(_2337, 3)));
  _2339 = (((uint32_t)(uint8_t)_2336)) << 24;
  if ((((uint8_t)_2338) > ((uint8_t)((uint8_t)16)))) {
    _2351__PHI_TEMPORARY = _2339;   /* for PHI node */
    goto _2430;
  } else {
    _2340__PHI_TEMPORARY = 16;   /* for PHI node */
    _2341__PHI_TEMPORARY = _2339;   /* for PHI node */
    goto _2431;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2431:
  _2340 = _2340__PHI_TEMPORARY;
  _2341 = _2341__PHI_TEMPORARY;
  if (((((int64_t)_2340) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2340) < ((uint64_t)(((uint64_t)(uint8_t)_2338)))))) {
    _2351__PHI_TEMPORARY = _2341;   /* for PHI node */
    goto _2430;
  } else {
    goto _2432;
  }

_2432:
  _2342 = *(uint64_t*)_2331;
  _2343 = *(uint64_t*)_2333;
  if ((((int64_t)_2343) > ((int64_t)_2342))) {
    goto _2433;
  } else {
    _2351__PHI_TEMPORARY = _2341;   /* for PHI node */
    goto _2430;
  }

_2433:
  _2344 = *(void**)_2330;
  _2345 = *(uint8_t*)(((&((uint8_t*)_2344)[((int64_t)_2342)])));
  if ((((int8_t)_2345) > ((int8_t)((uint8_t)-65)))) {
    _2351__PHI_TEMPORARY = _2341;   /* for PHI node */
    goto _2430;
  } else {
    goto _2434;
  }

_2434:
  _2346 = llvm_select_u32((((int64_t)_2342) < ((int64_t)_2343)), (((uint32_t)(uint8_t)_2345)), 0);
  _2347 = *(uint64_t*)_2331;
  *(uint64_t*)_2331 = (llvm_add_u64(_2347, 1));
  _2348 = llvm_neg_u64(_2340);
  _2349 = _2341 | (llvm_select_u32((((int64_t)_2340) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2348) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2346, (((uint32_t)_2348)))))), (llvm_select_u32((((uint64_t)_2340) > ((uint64_t)UINT64_C(31))), 0, (_2346 << (((uint32_t)_2340)))))));
  _2350 = llvm_add_u64(_2340, -8);
  _2340__PHI_TEMPORARY = _2350;   /* for PHI node */
  _2341__PHI_TEMPORARY = _2349;   /* for PHI node */
  goto _2431;

  } while (1); /* end of syntactic loop '' */
_2430:
  _2351 = _2351__PHI_TEMPORARY;
  _2352 = *(uint64_t*)_2282;
  _2353 = *(uint64_t*)_2284;
  _2354 = jsyn_cbe_fshl_i64(_2353, _2352, 32);
  _2355 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2351)), _2353, 32);
  *(uint64_t*)_2282 = _2354;
  *(uint64_t*)_2284 = _2355;
  _2356 = ((&((uint8_t*)_2278)[((int64_t)48)]));
  _2357 = ((&((uint8_t*)_2278)[((int64_t)56)]));
  _2358 = *(uint64_t*)_2357;
  _2359 = ((&((uint8_t*)_2278)[((int64_t)64)]));
  _2360 = *(uint64_t*)_2359;
  _2361 = ((&((uint8_t*)_2278)[((int64_t)72)]));
  _2362 = *(uint64_t*)_2361;
  _2363 = *(void**)_2278;
  _2364 = *(uint64_t*)(((&((uint8_t*)_2363)[((int64_t)16)])));
  *(uint64_t*)_2356 = _2358;
  *(uint64_t*)_2357 = _2360;
  *(uint64_t*)_2359 = _2362;
  *(uint64_t*)_2361 = _2364;
  _2365 = *(uint64_t*)_2282;
  _2366 = ((uint32_t)_2365);
  _2367__PHI_TEMPORARY = 1;   /* for PHI node */
  _2368__PHI_TEMPORARY = 1;   /* for PHI node */
  _2369__PHI_TEMPORARY = 0;   /* for PHI node */
  _2370__PHI_TEMPORARY = 0;   /* for PHI node */
  _2371__PHI_TEMPORARY = _2366;   /* for PHI node */
  _2372__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _2435;

  do {     /* Syntactic loop '' to make GCC happy */
_2435:
  _2367 = _2367__PHI_TEMPORARY;
  _2368 = _2368__PHI_TEMPORARY;
  _2369 = _2369__PHI_TEMPORARY;
  _2370 = _2370__PHI_TEMPORARY;
  _2371 = _2371__PHI_TEMPORARY;
  _2372 = _2372__PHI_TEMPORARY;
  if ((_2371 == 4294967295u)) {
    goto _2436;
  } else {
    goto _2437;
  }

_2437:
  _2373 = *(void**)_2278;
  _2374 = ((&((uint8_t*)_2373)[((int64_t)16)]));
  _2375 = *(uint64_t*)_2374;
  _2376 = ((&((uint8_t*)_2373)[((int64_t)8)]));
  _2377 = *(uint64_t*)_2376;
  if ((((int64_t)_2377) > ((int64_t)_2375))) {
    goto _2438;
  } else {
    _2394__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2439;
  }

_2438:
  _2378 = *(void**)_2373;
  _2379 = *(uint8_t*)(((&((uint8_t*)_2378)[((int64_t)_2375)])));
  *(uint64_t*)_2374 = (llvm_add_u64(_2375, 1));
  _2380 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2379)), 0);
  _2381 = llvm_sub_u8(32, (llvm_shl_u8(_2380, 3)));
  _2382 = (((uint32_t)(uint8_t)_2379)) << 24;
  if ((((uint8_t)_2381) > ((uint8_t)((uint8_t)16)))) {
    _2394__PHI_TEMPORARY = _2382;   /* for PHI node */
    goto _2439;
  } else {
    _2383__PHI_TEMPORARY = 16;   /* for PHI node */
    _2384__PHI_TEMPORARY = _2382;   /* for PHI node */
    goto _2440;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2440:
  _2383 = _2383__PHI_TEMPORARY;
  _2384 = _2384__PHI_TEMPORARY;
  if (((((int64_t)_2383) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2383) < ((uint64_t)(((uint64_t)(uint8_t)_2381)))))) {
    _2394__PHI_TEMPORARY = _2384;   /* for PHI node */
    goto _2439;
  } else {
    goto _2441;
  }

_2441:
  _2385 = *(uint64_t*)_2374;
  _2386 = *(uint64_t*)_2376;
  if ((((int64_t)_2386) > ((int64_t)_2385))) {
    goto _2442;
  } else {
    _2394__PHI_TEMPORARY = _2384;   /* for PHI node */
    goto _2439;
  }

_2442:
  _2387 = *(void**)_2373;
  _2388 = *(uint8_t*)(((&((uint8_t*)_2387)[((int64_t)_2385)])));
  if ((((int8_t)_2388) > ((int8_t)((uint8_t)-65)))) {
    _2394__PHI_TEMPORARY = _2384;   /* for PHI node */
    goto _2439;
  } else {
    goto _2443;
  }

_2443:
  _2389 = llvm_select_u32((((int64_t)_2385) < ((int64_t)_2386)), (((uint32_t)(uint8_t)_2388)), 0);
  _2390 = *(uint64_t*)_2374;
  *(uint64_t*)_2374 = (llvm_add_u64(_2390, 1));
  _2391 = llvm_neg_u64(_2383);
  _2392 = _2384 | (llvm_select_u32((((int64_t)_2383) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2391) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2389, (((uint32_t)_2391)))))), (llvm_select_u32((((uint64_t)_2383) > ((uint64_t)UINT64_C(31))), 0, (_2389 << (((uint32_t)_2383)))))));
  _2393 = llvm_add_u64(_2383, -8);
  _2383__PHI_TEMPORARY = _2393;   /* for PHI node */
  _2384__PHI_TEMPORARY = _2392;   /* for PHI node */
  goto _2440;

  } while (1); /* end of syntactic loop '' */
_2439:
  _2394 = _2394__PHI_TEMPORARY;
  _2395 = *(uint64_t*)_2282;
  _2396 = *(uint64_t*)_2284;
  _2397 = jsyn_cbe_fshl_i64(_2396, _2395, 32);
  _2398 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2394)), _2396, 32);
  *(uint64_t*)_2282 = _2397;
  *(uint64_t*)_2284 = _2398;
  _2399 = *(uint64_t*)_2357;
  _2400 = *(uint64_t*)_2359;
  _2401 = *(uint64_t*)_2361;
  _2402 = *(void**)_2278;
  _2403 = *(uint64_t*)(((&((uint8_t*)_2402)[((int64_t)16)])));
  *(uint64_t*)_2356 = _2399;
  *(uint64_t*)_2357 = _2400;
  *(uint64_t*)_2359 = _2401;
  *(uint64_t*)_2361 = _2403;
  _2404 = *(uint32_t*)_2282;
  switch (_2404) {
  default:
    goto _2444;
  case 167772160u:
    _2409__PHI_TEMPORARY = 0;   /* for PHI node */
    _2410__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _2445;
  case 3800082944u:
    goto _2446;
  case 3800083200u:
    goto _2446;
  case 3800083712u:
    goto _2446;
  case 3800083968u:
    goto _2446;
  case 3800083456u:
    goto _2447;
  case 3800147456u:
    goto _2448;
  case 3800147712u:
    goto _2448;
  case 3800147968u:
    goto _2448;
  }

_2448:
  _2407 = llvm_add_u64(_2370, 1);
  _2409__PHI_TEMPORARY = _2369;   /* for PHI node */
  _2410__PHI_TEMPORARY = _2407;   /* for PHI node */
  goto _2445;

_2447:
  _2405 = llvm_add_u64(_2369, -1);
  _2409__PHI_TEMPORARY = _2405;   /* for PHI node */
  _2410__PHI_TEMPORARY = _2370;   /* for PHI node */
  goto _2445;

_2446:
  _2408 = llvm_add_u64(_2369, 1);
  _2409__PHI_TEMPORARY = _2408;   /* for PHI node */
  _2410__PHI_TEMPORARY = _2370;   /* for PHI node */
  goto _2445;

_2444:
  _2406 = llvm_add_u64(_2370, (((int64_t)(bool)0-(_2404 == 3800148224u))));
  _2409__PHI_TEMPORARY = _2369;   /* for PHI node */
  _2410__PHI_TEMPORARY = _2406;   /* for PHI node */
  goto _2445;

_2445:
  _2409 = _2409__PHI_TEMPORARY;
  _2410 = _2410__PHI_TEMPORARY;
  _2411 = llvm_OC_ctlz_OC_i32((_2404 ^ -1), 0);
  _2412 = llvm_OC_cttz_OC_i32(_2404, 0);
  _2413 = _2412 & 56;
  _2414 = _2372 & (((((_2411 != 1u) & (((uint32_t)(llvm_add_u32((_2411 << 3), _2413))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_2412) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_2404 & 12632256) ^ 8421504), _2413)) == 0u)))) & ((((_2404 & -33554432) != 3221225472u) & ((_2404 & -2097152) != 3766484992u)) & ((_2404 & -1048576) != 4034920448u))) & ((((uint32_t)_2404) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_2404, 293568512))) < ((uint32_t)101662656u))));
  if (_2368) {
    _2367__PHI_TEMPORARY = _2367;   /* for PHI node */
    _2368__PHI_TEMPORARY = 0;   /* for PHI node */
    _2369__PHI_TEMPORARY = _2409;   /* for PHI node */
    _2370__PHI_TEMPORARY = _2410;   /* for PHI node */
    _2371__PHI_TEMPORARY = _2404;   /* for PHI node */
    _2372__PHI_TEMPORARY = _2414;   /* for PHI node */
    goto _2435;
  } else {
    goto _2449;
  }

_2449:
  if (((_2371 == 587202560u) & (_2404 == 1023410176u))) {
    goto _2450;
  } else {
    goto _2451;
  }

_2451:
  if (((_2371 == 1023410176u) & (_2404 == 587202560u))) {
    goto _2452;
  } else {
    _2367__PHI_TEMPORARY = _2367;   /* for PHI node */
    _2368__PHI_TEMPORARY = 0;   /* for PHI node */
    _2369__PHI_TEMPORARY = _2409;   /* for PHI node */
    _2370__PHI_TEMPORARY = _2410;   /* for PHI node */
    _2371__PHI_TEMPORARY = _2404;   /* for PHI node */
    _2372__PHI_TEMPORARY = _2414;   /* for PHI node */
    goto _2435;
  }

_2452:
  _2416 = llvm_add_u64(_2367, -1);
  if ((_2416 == UINT64_C(0))) {
    goto _2453;
  } else {
    _2367__PHI_TEMPORARY = _2416;   /* for PHI node */
    _2368__PHI_TEMPORARY = 1;   /* for PHI node */
    _2369__PHI_TEMPORARY = _2409;   /* for PHI node */
    _2370__PHI_TEMPORARY = _2410;   /* for PHI node */
    _2371__PHI_TEMPORARY = _2404;   /* for PHI node */
    _2372__PHI_TEMPORARY = _2414;   /* for PHI node */
    goto _2435;
  }

_2450:
  _2415 = llvm_add_u64(_2367, 1);
  _2367__PHI_TEMPORARY = _2415;   /* for PHI node */
  _2368__PHI_TEMPORARY = 1;   /* for PHI node */
  _2369__PHI_TEMPORARY = _2409;   /* for PHI node */
  _2370__PHI_TEMPORARY = _2410;   /* for PHI node */
  _2371__PHI_TEMPORARY = _2404;   /* for PHI node */
  _2372__PHI_TEMPORARY = _2414;   /* for PHI node */
  goto _2435;

  } while (1); /* end of syntactic loop '' */
_2436:
  julia_emit_11((&_2280), _2277, _2278, 753, 1);
  _2328__PHI_TEMPORARY = (&_2280);   /* for PHI node */
  goto _2428;

_2453:
  julia_emit_11((&_2281), _2277, _2278, (llvm_select_u16(_2414, (llvm_select_u16((llvm_select_bool((_2409 == UINT64_C(0)), (_2410 == UINT64_C(0)), 0)), 0, 766)), 762)), 1);
  _2328__PHI_TEMPORARY = (&_2281);   /* for PHI node */
  goto _2428;

}


static void julia_lex_equal_24(void* _2454, void* _2455, void* _2456) {
  struct l_array_4_uint64_t _2457;    /* Address-exposed local */
  struct l_array_4_uint64_t _2458;    /* Address-exposed local */
  struct l_array_4_uint64_t _2459;    /* Address-exposed local */
  struct l_array_4_uint64_t _2460;    /* Address-exposed local */
  void* _2461;
  uint64_t _2462;
  void* _2463;
  void* _2464;
  void* _2465;
  uint64_t _2466;
  void* _2467;
  uint64_t _2468;
  void* _2469;
  uint8_t _2470;
  uint8_t _2471;
  uint8_t _2472;
  uint32_t _2473;
  uint64_t _2474;
  uint64_t _2474__PHI_TEMPORARY;
  uint32_t _2475;
  uint32_t _2475__PHI_TEMPORARY;
  uint64_t _2476;
  uint64_t _2477;
  void* _2478;
  uint8_t _2479;
  uint32_t _2480;
  uint64_t _2481;
  uint64_t _2482;
  uint32_t _2483;
  uint64_t _2484;
  uint32_t _2485;
  uint32_t _2485__PHI_TEMPORARY;
  uint64_t _2486;
  uint64_t _2487;
  uint64_t _2488;
  uint64_t _2489;
  void* _2490;
  uint64_t _2491;
  void* _2492;
  uint64_t _2493;
  void* _2494;
  uint64_t _2495;
  void* _2496;
  uint64_t _2497;
  uint64_t _2498;
  void* _2499;
  void* _2500;
  uint64_t _2501;
  void* _2502;
  uint64_t _2503;
  void* _2504;
  uint8_t _2505;
  uint8_t _2506;
  uint8_t _2507;
  uint32_t _2508;
  uint64_t _2509;
  uint64_t _2509__PHI_TEMPORARY;
  uint32_t _2510;
  uint32_t _2510__PHI_TEMPORARY;
  uint64_t _2511;
  uint64_t _2512;
  void* _2513;
  uint8_t _2514;
  uint32_t _2515;
  uint64_t _2516;
  uint64_t _2517;
  uint32_t _2518;
  uint64_t _2519;
  uint32_t _2520;
  uint32_t _2520__PHI_TEMPORARY;
  uint64_t _2521;
  uint64_t _2522;
  uint64_t _2523;
  uint64_t _2524;
  void* _2525;
  uint64_t _2526;
  void* _2527;
  uint64_t _2528;
  void* _2529;
  uint64_t _2530;
  void* _2531;
  uint64_t _2532;
  void* _2533;
  void* _2533__PHI_TEMPORARY;
  void* _2534;
  uint64_t _2535;
  void* _2536;
  void* _2537;
  uint64_t _2538;
  void* _2539;
  uint64_t _2540;
  void* _2541;
  uint8_t _2542;
  uint8_t _2543;
  uint8_t _2544;
  uint32_t _2545;
  uint64_t _2546;
  uint64_t _2546__PHI_TEMPORARY;
  uint32_t _2547;
  uint32_t _2547__PHI_TEMPORARY;
  uint64_t _2548;
  uint64_t _2549;
  void* _2550;
  uint8_t _2551;
  uint32_t _2552;
  uint64_t _2553;
  uint64_t _2554;
  uint32_t _2555;
  uint64_t _2556;
  uint32_t _2557;
  uint32_t _2557__PHI_TEMPORARY;
  uint64_t _2558;
  uint64_t _2559;
  uint64_t _2560;
  uint64_t _2561;
  void* _2562;
  uint64_t _2563;
  void* _2564;
  uint64_t _2565;
  void* _2566;
  uint64_t _2567;
  void* _2568;
  uint64_t _2569;

  _2461 = ((&((uint8_t*)_2456)[((int64_t)32)]));
  _2462 = *(uint64_t*)_2461;
  _2463 = ((&((uint8_t*)_2456)[((int64_t)40)]));
  if (((_2462 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2570;
  } else {
    goto _2571;
  }

_2570:
  _2464 = *(void**)_2456;
  _2465 = ((&((uint8_t*)_2464)[((int64_t)16)]));
  _2466 = *(uint64_t*)_2465;
  _2467 = ((&((uint8_t*)_2464)[((int64_t)8)]));
  _2468 = *(uint64_t*)_2467;
  if ((((int64_t)_2468) > ((int64_t)_2466))) {
    goto _2572;
  } else {
    _2485__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2573;
  }

_2572:
  _2469 = *(void**)_2464;
  _2470 = *(uint8_t*)(((&((uint8_t*)_2469)[((int64_t)_2466)])));
  *(uint64_t*)_2465 = (llvm_add_u64(_2466, 1));
  _2471 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2470)), 0);
  _2472 = llvm_sub_u8(32, (llvm_shl_u8(_2471, 3)));
  _2473 = (((uint32_t)(uint8_t)_2470)) << 24;
  if ((((uint8_t)_2472) > ((uint8_t)((uint8_t)16)))) {
    _2485__PHI_TEMPORARY = _2473;   /* for PHI node */
    goto _2573;
  } else {
    _2474__PHI_TEMPORARY = 16;   /* for PHI node */
    _2475__PHI_TEMPORARY = _2473;   /* for PHI node */
    goto _2574;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2574:
  _2474 = _2474__PHI_TEMPORARY;
  _2475 = _2475__PHI_TEMPORARY;
  if (((((int64_t)_2474) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2474) < ((uint64_t)(((uint64_t)(uint8_t)_2472)))))) {
    _2485__PHI_TEMPORARY = _2475;   /* for PHI node */
    goto _2573;
  } else {
    goto _2575;
  }

_2575:
  _2476 = *(uint64_t*)_2465;
  _2477 = *(uint64_t*)_2467;
  if ((((int64_t)_2477) > ((int64_t)_2476))) {
    goto _2576;
  } else {
    _2485__PHI_TEMPORARY = _2475;   /* for PHI node */
    goto _2573;
  }

_2576:
  _2478 = *(void**)_2464;
  _2479 = *(uint8_t*)(((&((uint8_t*)_2478)[((int64_t)_2476)])));
  if ((((int8_t)_2479) > ((int8_t)((uint8_t)-65)))) {
    _2485__PHI_TEMPORARY = _2475;   /* for PHI node */
    goto _2573;
  } else {
    goto _2577;
  }

_2577:
  _2480 = llvm_select_u32((((int64_t)_2476) < ((int64_t)_2477)), (((uint32_t)(uint8_t)_2479)), 0);
  _2481 = *(uint64_t*)_2465;
  *(uint64_t*)_2465 = (llvm_add_u64(_2481, 1));
  _2482 = llvm_neg_u64(_2474);
  _2483 = _2475 | (llvm_select_u32((((int64_t)_2474) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2482) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2480, (((uint32_t)_2482)))))), (llvm_select_u32((((uint64_t)_2474) > ((uint64_t)UINT64_C(31))), 0, (_2480 << (((uint32_t)_2474)))))));
  _2484 = llvm_add_u64(_2474, -8);
  _2474__PHI_TEMPORARY = _2484;   /* for PHI node */
  _2475__PHI_TEMPORARY = _2483;   /* for PHI node */
  goto _2574;

  } while (1); /* end of syntactic loop '' */
_2573:
  _2485 = _2485__PHI_TEMPORARY;
  _2486 = *(uint64_t*)_2461;
  _2487 = *(uint64_t*)_2463;
  _2488 = jsyn_cbe_fshl_i64(_2487, _2486, 32);
  _2489 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2485)), _2487, 32);
  *(uint64_t*)_2461 = _2488;
  *(uint64_t*)_2463 = _2489;
  _2490 = ((&((uint8_t*)_2456)[((int64_t)56)]));
  _2491 = *(uint64_t*)_2490;
  _2492 = ((&((uint8_t*)_2456)[((int64_t)64)]));
  _2493 = *(uint64_t*)_2492;
  _2494 = ((&((uint8_t*)_2456)[((int64_t)72)]));
  _2495 = *(uint64_t*)_2494;
  _2496 = *(void**)_2456;
  _2497 = *(uint64_t*)(((&((uint8_t*)_2496)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2456)[((int64_t)48)]))) = _2491;
  *(uint64_t*)_2490 = _2493;
  *(uint64_t*)_2492 = _2495;
  *(uint64_t*)_2494 = _2497;
  _2498 = *(uint64_t*)_2461;
  if (((_2498 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2578;
  } else {
    goto _2579;
  }

_2578:
  _2499 = *(void**)_2456;
  _2500 = ((&((uint8_t*)_2499)[((int64_t)16)]));
  _2501 = *(uint64_t*)_2500;
  _2502 = ((&((uint8_t*)_2499)[((int64_t)8)]));
  _2503 = *(uint64_t*)_2502;
  if ((((int64_t)_2503) > ((int64_t)_2501))) {
    goto _2580;
  } else {
    _2520__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2581;
  }

_2580:
  _2504 = *(void**)_2499;
  _2505 = *(uint8_t*)(((&((uint8_t*)_2504)[((int64_t)_2501)])));
  *(uint64_t*)_2500 = (llvm_add_u64(_2501, 1));
  _2506 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2505)), 0);
  _2507 = llvm_sub_u8(32, (llvm_shl_u8(_2506, 3)));
  _2508 = (((uint32_t)(uint8_t)_2505)) << 24;
  if ((((uint8_t)_2507) > ((uint8_t)((uint8_t)16)))) {
    _2520__PHI_TEMPORARY = _2508;   /* for PHI node */
    goto _2581;
  } else {
    _2509__PHI_TEMPORARY = 16;   /* for PHI node */
    _2510__PHI_TEMPORARY = _2508;   /* for PHI node */
    goto _2582;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2582:
  _2509 = _2509__PHI_TEMPORARY;
  _2510 = _2510__PHI_TEMPORARY;
  if (((((int64_t)_2509) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2509) < ((uint64_t)(((uint64_t)(uint8_t)_2507)))))) {
    _2520__PHI_TEMPORARY = _2510;   /* for PHI node */
    goto _2581;
  } else {
    goto _2583;
  }

_2583:
  _2511 = *(uint64_t*)_2500;
  _2512 = *(uint64_t*)_2502;
  if ((((int64_t)_2512) > ((int64_t)_2511))) {
    goto _2584;
  } else {
    _2520__PHI_TEMPORARY = _2510;   /* for PHI node */
    goto _2581;
  }

_2584:
  _2513 = *(void**)_2499;
  _2514 = *(uint8_t*)(((&((uint8_t*)_2513)[((int64_t)_2511)])));
  if ((((int8_t)_2514) > ((int8_t)((uint8_t)-65)))) {
    _2520__PHI_TEMPORARY = _2510;   /* for PHI node */
    goto _2581;
  } else {
    goto _2585;
  }

_2585:
  _2515 = llvm_select_u32((((int64_t)_2511) < ((int64_t)_2512)), (((uint32_t)(uint8_t)_2514)), 0);
  _2516 = *(uint64_t*)_2500;
  *(uint64_t*)_2500 = (llvm_add_u64(_2516, 1));
  _2517 = llvm_neg_u64(_2509);
  _2518 = _2510 | (llvm_select_u32((((int64_t)_2509) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2517) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2515, (((uint32_t)_2517)))))), (llvm_select_u32((((uint64_t)_2509) > ((uint64_t)UINT64_C(31))), 0, (_2515 << (((uint32_t)_2509)))))));
  _2519 = llvm_add_u64(_2509, -8);
  _2509__PHI_TEMPORARY = _2519;   /* for PHI node */
  _2510__PHI_TEMPORARY = _2518;   /* for PHI node */
  goto _2582;

  } while (1); /* end of syntactic loop '' */
_2581:
  _2520 = _2520__PHI_TEMPORARY;
  _2521 = *(uint64_t*)_2461;
  _2522 = *(uint64_t*)_2463;
  _2523 = jsyn_cbe_fshl_i64(_2522, _2521, 32);
  _2524 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2520)), _2522, 32);
  *(uint64_t*)_2461 = _2523;
  *(uint64_t*)_2463 = _2524;
  _2525 = ((&((uint8_t*)_2456)[((int64_t)56)]));
  _2526 = *(uint64_t*)_2525;
  _2527 = ((&((uint8_t*)_2456)[((int64_t)64)]));
  _2528 = *(uint64_t*)_2527;
  _2529 = ((&((uint8_t*)_2456)[((int64_t)72)]));
  _2530 = *(uint64_t*)_2529;
  _2531 = *(void**)_2456;
  _2532 = *(uint64_t*)(((&((uint8_t*)_2531)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2456)[((int64_t)48)]))) = _2526;
  *(uint64_t*)_2525 = _2528;
  *(uint64_t*)_2527 = _2530;
  *(uint64_t*)_2529 = _2532;
  julia_emit_11((&_2457), _2455, _2456, 245, 1);
  _2533__PHI_TEMPORARY = (&_2457);   /* for PHI node */
  goto _2586;

_2586:
  _2533 = _2533__PHI_TEMPORARY;
  _2534 = memcpy(_2454, _2533, 32);
  return;
_2579:
  julia_emit_11((&_2458), _2455, _2456, 244, 1);
  _2533__PHI_TEMPORARY = (&_2458);   /* for PHI node */
  goto _2586;

_2571:
  _2535 = *(uint64_t*)_2461;
  if (((_2535 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _2587;
  } else {
    goto _2588;
  }

_2587:
  _2536 = *(void**)_2456;
  _2537 = ((&((uint8_t*)_2536)[((int64_t)16)]));
  _2538 = *(uint64_t*)_2537;
  _2539 = ((&((uint8_t*)_2536)[((int64_t)8)]));
  _2540 = *(uint64_t*)_2539;
  if ((((int64_t)_2540) > ((int64_t)_2538))) {
    goto _2589;
  } else {
    _2557__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2590;
  }

_2589:
  _2541 = *(void**)_2536;
  _2542 = *(uint8_t*)(((&((uint8_t*)_2541)[((int64_t)_2538)])));
  *(uint64_t*)_2537 = (llvm_add_u64(_2538, 1));
  _2543 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2542)), 0);
  _2544 = llvm_sub_u8(32, (llvm_shl_u8(_2543, 3)));
  _2545 = (((uint32_t)(uint8_t)_2542)) << 24;
  if ((((uint8_t)_2544) > ((uint8_t)((uint8_t)16)))) {
    _2557__PHI_TEMPORARY = _2545;   /* for PHI node */
    goto _2590;
  } else {
    _2546__PHI_TEMPORARY = 16;   /* for PHI node */
    _2547__PHI_TEMPORARY = _2545;   /* for PHI node */
    goto _2591;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2591:
  _2546 = _2546__PHI_TEMPORARY;
  _2547 = _2547__PHI_TEMPORARY;
  if (((((int64_t)_2546) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2546) < ((uint64_t)(((uint64_t)(uint8_t)_2544)))))) {
    _2557__PHI_TEMPORARY = _2547;   /* for PHI node */
    goto _2590;
  } else {
    goto _2592;
  }

_2592:
  _2548 = *(uint64_t*)_2537;
  _2549 = *(uint64_t*)_2539;
  if ((((int64_t)_2549) > ((int64_t)_2548))) {
    goto _2593;
  } else {
    _2557__PHI_TEMPORARY = _2547;   /* for PHI node */
    goto _2590;
  }

_2593:
  _2550 = *(void**)_2536;
  _2551 = *(uint8_t*)(((&((uint8_t*)_2550)[((int64_t)_2548)])));
  if ((((int8_t)_2551) > ((int8_t)((uint8_t)-65)))) {
    _2557__PHI_TEMPORARY = _2547;   /* for PHI node */
    goto _2590;
  } else {
    goto _2594;
  }

_2594:
  _2552 = llvm_select_u32((((int64_t)_2548) < ((int64_t)_2549)), (((uint32_t)(uint8_t)_2551)), 0);
  _2553 = *(uint64_t*)_2537;
  *(uint64_t*)_2537 = (llvm_add_u64(_2553, 1));
  _2554 = llvm_neg_u64(_2546);
  _2555 = _2547 | (llvm_select_u32((((int64_t)_2546) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2554) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2552, (((uint32_t)_2554)))))), (llvm_select_u32((((uint64_t)_2546) > ((uint64_t)UINT64_C(31))), 0, (_2552 << (((uint32_t)_2546)))))));
  _2556 = llvm_add_u64(_2546, -8);
  _2546__PHI_TEMPORARY = _2556;   /* for PHI node */
  _2547__PHI_TEMPORARY = _2555;   /* for PHI node */
  goto _2591;

  } while (1); /* end of syntactic loop '' */
_2590:
  _2557 = _2557__PHI_TEMPORARY;
  _2558 = *(uint64_t*)_2461;
  _2559 = *(uint64_t*)_2463;
  _2560 = jsyn_cbe_fshl_i64(_2559, _2558, 32);
  _2561 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2557)), _2559, 32);
  *(uint64_t*)_2461 = _2560;
  *(uint64_t*)_2463 = _2561;
  _2562 = ((&((uint8_t*)_2456)[((int64_t)56)]));
  _2563 = *(uint64_t*)_2562;
  _2564 = ((&((uint8_t*)_2456)[((int64_t)64)]));
  _2565 = *(uint64_t*)_2564;
  _2566 = ((&((uint8_t*)_2456)[((int64_t)72)]));
  _2567 = *(uint64_t*)_2566;
  _2568 = *(void**)_2456;
  _2569 = *(uint64_t*)(((&((uint8_t*)_2568)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2456)[((int64_t)48)]))) = _2563;
  *(uint64_t*)_2562 = _2565;
  *(uint64_t*)_2564 = _2567;
  *(uint64_t*)_2566 = _2569;
  julia_emit_11((&_2459), _2455, _2456, 78, 1);
  _2533__PHI_TEMPORARY = (&_2459);   /* for PHI node */
  goto _2586;

_2588:
  julia_emit_11((&_2460), _2455, _2456, 69, 1);
  _2533__PHI_TEMPORARY = (&_2460);   /* for PHI node */
  goto _2586;

}


static void julia_lex_exclaim_25(void* _2595, void* _2596, void* _2597) {
  struct l_array_4_uint64_t _2598;    /* Address-exposed local */
  struct l_array_4_uint64_t _2599;    /* Address-exposed local */
  struct l_array_4_uint64_t _2600;    /* Address-exposed local */
  void* _2601;
  uint64_t _2602;
  void* _2603;
  void* _2604;
  void* _2605;
  uint64_t _2606;
  void* _2607;
  uint64_t _2608;
  void* _2609;
  uint8_t _2610;
  uint8_t _2611;
  uint8_t _2612;
  uint32_t _2613;
  uint64_t _2614;
  uint64_t _2614__PHI_TEMPORARY;
  uint32_t _2615;
  uint32_t _2615__PHI_TEMPORARY;
  uint64_t _2616;
  uint64_t _2617;
  void* _2618;
  uint8_t _2619;
  uint32_t _2620;
  uint64_t _2621;
  uint64_t _2622;
  uint32_t _2623;
  uint64_t _2624;
  uint32_t _2625;
  uint32_t _2625__PHI_TEMPORARY;
  uint64_t _2626;
  uint64_t _2627;
  uint64_t _2628;
  uint64_t _2629;
  void* _2630;
  uint64_t _2631;
  void* _2632;
  uint64_t _2633;
  void* _2634;
  uint64_t _2635;
  void* _2636;
  uint64_t _2637;
  uint64_t _2638;
  void* _2639;
  void* _2640;
  uint64_t _2641;
  void* _2642;
  uint64_t _2643;
  void* _2644;
  uint8_t _2645;
  uint8_t _2646;
  uint8_t _2647;
  uint32_t _2648;
  uint64_t _2649;
  uint64_t _2649__PHI_TEMPORARY;
  uint32_t _2650;
  uint32_t _2650__PHI_TEMPORARY;
  uint64_t _2651;
  uint64_t _2652;
  void* _2653;
  uint8_t _2654;
  uint32_t _2655;
  uint64_t _2656;
  uint64_t _2657;
  uint32_t _2658;
  uint64_t _2659;
  uint32_t _2660;
  uint32_t _2660__PHI_TEMPORARY;
  uint64_t _2661;
  uint64_t _2662;
  uint64_t _2663;
  uint64_t _2664;
  void* _2665;
  uint64_t _2666;
  void* _2667;
  uint64_t _2668;
  void* _2669;
  uint64_t _2670;
  void* _2671;
  uint64_t _2672;
  void* _2673;
  void* _2673__PHI_TEMPORARY;
  void* _2674;

  _2601 = ((&((uint8_t*)_2597)[((int64_t)32)]));
  _2602 = *(uint64_t*)_2601;
  _2603 = ((&((uint8_t*)_2597)[((int64_t)40)]));
  if (((_2602 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2675;
  } else {
    goto _2676;
  }

_2675:
  _2604 = *(void**)_2597;
  _2605 = ((&((uint8_t*)_2604)[((int64_t)16)]));
  _2606 = *(uint64_t*)_2605;
  _2607 = ((&((uint8_t*)_2604)[((int64_t)8)]));
  _2608 = *(uint64_t*)_2607;
  if ((((int64_t)_2608) > ((int64_t)_2606))) {
    goto _2677;
  } else {
    _2625__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2678;
  }

_2677:
  _2609 = *(void**)_2604;
  _2610 = *(uint8_t*)(((&((uint8_t*)_2609)[((int64_t)_2606)])));
  *(uint64_t*)_2605 = (llvm_add_u64(_2606, 1));
  _2611 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2610)), 0);
  _2612 = llvm_sub_u8(32, (llvm_shl_u8(_2611, 3)));
  _2613 = (((uint32_t)(uint8_t)_2610)) << 24;
  if ((((uint8_t)_2612) > ((uint8_t)((uint8_t)16)))) {
    _2625__PHI_TEMPORARY = _2613;   /* for PHI node */
    goto _2678;
  } else {
    _2614__PHI_TEMPORARY = 16;   /* for PHI node */
    _2615__PHI_TEMPORARY = _2613;   /* for PHI node */
    goto _2679;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2679:
  _2614 = _2614__PHI_TEMPORARY;
  _2615 = _2615__PHI_TEMPORARY;
  if (((((int64_t)_2614) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2614) < ((uint64_t)(((uint64_t)(uint8_t)_2612)))))) {
    _2625__PHI_TEMPORARY = _2615;   /* for PHI node */
    goto _2678;
  } else {
    goto _2680;
  }

_2680:
  _2616 = *(uint64_t*)_2605;
  _2617 = *(uint64_t*)_2607;
  if ((((int64_t)_2617) > ((int64_t)_2616))) {
    goto _2681;
  } else {
    _2625__PHI_TEMPORARY = _2615;   /* for PHI node */
    goto _2678;
  }

_2681:
  _2618 = *(void**)_2604;
  _2619 = *(uint8_t*)(((&((uint8_t*)_2618)[((int64_t)_2616)])));
  if ((((int8_t)_2619) > ((int8_t)((uint8_t)-65)))) {
    _2625__PHI_TEMPORARY = _2615;   /* for PHI node */
    goto _2678;
  } else {
    goto _2682;
  }

_2682:
  _2620 = llvm_select_u32((((int64_t)_2616) < ((int64_t)_2617)), (((uint32_t)(uint8_t)_2619)), 0);
  _2621 = *(uint64_t*)_2605;
  *(uint64_t*)_2605 = (llvm_add_u64(_2621, 1));
  _2622 = llvm_neg_u64(_2614);
  _2623 = _2615 | (llvm_select_u32((((int64_t)_2614) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2622) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2620, (((uint32_t)_2622)))))), (llvm_select_u32((((uint64_t)_2614) > ((uint64_t)UINT64_C(31))), 0, (_2620 << (((uint32_t)_2614)))))));
  _2624 = llvm_add_u64(_2614, -8);
  _2614__PHI_TEMPORARY = _2624;   /* for PHI node */
  _2615__PHI_TEMPORARY = _2623;   /* for PHI node */
  goto _2679;

  } while (1); /* end of syntactic loop '' */
_2678:
  _2625 = _2625__PHI_TEMPORARY;
  _2626 = *(uint64_t*)_2601;
  _2627 = *(uint64_t*)_2603;
  _2628 = jsyn_cbe_fshl_i64(_2627, _2626, 32);
  _2629 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2625)), _2627, 32);
  *(uint64_t*)_2601 = _2628;
  *(uint64_t*)_2603 = _2629;
  _2630 = ((&((uint8_t*)_2597)[((int64_t)56)]));
  _2631 = *(uint64_t*)_2630;
  _2632 = ((&((uint8_t*)_2597)[((int64_t)64)]));
  _2633 = *(uint64_t*)_2632;
  _2634 = ((&((uint8_t*)_2597)[((int64_t)72)]));
  _2635 = *(uint64_t*)_2634;
  _2636 = *(void**)_2597;
  _2637 = *(uint64_t*)(((&((uint8_t*)_2636)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2597)[((int64_t)48)]))) = _2631;
  *(uint64_t*)_2630 = _2633;
  *(uint64_t*)_2632 = _2635;
  *(uint64_t*)_2634 = _2637;
  _2638 = *(uint64_t*)_2601;
  if (((_2638 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2683;
  } else {
    goto _2684;
  }

_2683:
  _2639 = *(void**)_2597;
  _2640 = ((&((uint8_t*)_2639)[((int64_t)16)]));
  _2641 = *(uint64_t*)_2640;
  _2642 = ((&((uint8_t*)_2639)[((int64_t)8)]));
  _2643 = *(uint64_t*)_2642;
  if ((((int64_t)_2643) > ((int64_t)_2641))) {
    goto _2685;
  } else {
    _2660__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2686;
  }

_2685:
  _2644 = *(void**)_2639;
  _2645 = *(uint8_t*)(((&((uint8_t*)_2644)[((int64_t)_2641)])));
  *(uint64_t*)_2640 = (llvm_add_u64(_2641, 1));
  _2646 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2645)), 0);
  _2647 = llvm_sub_u8(32, (llvm_shl_u8(_2646, 3)));
  _2648 = (((uint32_t)(uint8_t)_2645)) << 24;
  if ((((uint8_t)_2647) > ((uint8_t)((uint8_t)16)))) {
    _2660__PHI_TEMPORARY = _2648;   /* for PHI node */
    goto _2686;
  } else {
    _2649__PHI_TEMPORARY = 16;   /* for PHI node */
    _2650__PHI_TEMPORARY = _2648;   /* for PHI node */
    goto _2687;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2687:
  _2649 = _2649__PHI_TEMPORARY;
  _2650 = _2650__PHI_TEMPORARY;
  if (((((int64_t)_2649) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2649) < ((uint64_t)(((uint64_t)(uint8_t)_2647)))))) {
    _2660__PHI_TEMPORARY = _2650;   /* for PHI node */
    goto _2686;
  } else {
    goto _2688;
  }

_2688:
  _2651 = *(uint64_t*)_2640;
  _2652 = *(uint64_t*)_2642;
  if ((((int64_t)_2652) > ((int64_t)_2651))) {
    goto _2689;
  } else {
    _2660__PHI_TEMPORARY = _2650;   /* for PHI node */
    goto _2686;
  }

_2689:
  _2653 = *(void**)_2639;
  _2654 = *(uint8_t*)(((&((uint8_t*)_2653)[((int64_t)_2651)])));
  if ((((int8_t)_2654) > ((int8_t)((uint8_t)-65)))) {
    _2660__PHI_TEMPORARY = _2650;   /* for PHI node */
    goto _2686;
  } else {
    goto _2690;
  }

_2690:
  _2655 = llvm_select_u32((((int64_t)_2651) < ((int64_t)_2652)), (((uint32_t)(uint8_t)_2654)), 0);
  _2656 = *(uint64_t*)_2640;
  *(uint64_t*)_2640 = (llvm_add_u64(_2656, 1));
  _2657 = llvm_neg_u64(_2649);
  _2658 = _2650 | (llvm_select_u32((((int64_t)_2649) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2657) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2655, (((uint32_t)_2657)))))), (llvm_select_u32((((uint64_t)_2649) > ((uint64_t)UINT64_C(31))), 0, (_2655 << (((uint32_t)_2649)))))));
  _2659 = llvm_add_u64(_2649, -8);
  _2649__PHI_TEMPORARY = _2659;   /* for PHI node */
  _2650__PHI_TEMPORARY = _2658;   /* for PHI node */
  goto _2687;

  } while (1); /* end of syntactic loop '' */
_2686:
  _2660 = _2660__PHI_TEMPORARY;
  _2661 = *(uint64_t*)_2601;
  _2662 = *(uint64_t*)_2603;
  _2663 = jsyn_cbe_fshl_i64(_2662, _2661, 32);
  _2664 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2660)), _2662, 32);
  *(uint64_t*)_2601 = _2663;
  *(uint64_t*)_2603 = _2664;
  _2665 = ((&((uint8_t*)_2597)[((int64_t)56)]));
  _2666 = *(uint64_t*)_2665;
  _2667 = ((&((uint8_t*)_2597)[((int64_t)64)]));
  _2668 = *(uint64_t*)_2667;
  _2669 = ((&((uint8_t*)_2597)[((int64_t)72)]));
  _2670 = *(uint64_t*)_2669;
  _2671 = *(void**)_2597;
  _2672 = *(uint64_t*)(((&((uint8_t*)_2671)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2597)[((int64_t)48)]))) = _2666;
  *(uint64_t*)_2665 = _2668;
  *(uint64_t*)_2667 = _2670;
  *(uint64_t*)_2669 = _2672;
  julia_emit_11((&_2598), _2596, _2597, 249, 1);
  _2673__PHI_TEMPORARY = (&_2598);   /* for PHI node */
  goto _2691;

_2691:
  _2673 = _2673__PHI_TEMPORARY;
  _2674 = memcpy(_2595, _2673, 32);
  return;
_2684:
  julia_emit_11((&_2599), _2596, _2597, 247, 1);
  _2673__PHI_TEMPORARY = (&_2599);   /* for PHI node */
  goto _2691;

_2676:
  julia_emit_11((&_2600), _2596, _2597, 708, 1);
  _2673__PHI_TEMPORARY = (&_2600);   /* for PHI node */
  goto _2691;

}


static void julia_lex_greater_26(void* _2692, void* _2693, void* _2694) {
  struct l_array_4_uint64_t _2695;    /* Address-exposed local */
  struct l_array_4_uint64_t _2696;    /* Address-exposed local */
  struct l_array_4_uint64_t _2697;    /* Address-exposed local */
  struct l_array_4_uint64_t _2698;    /* Address-exposed local */
  struct l_array_4_uint64_t _2699;    /* Address-exposed local */
  struct l_array_4_uint64_t _2700;    /* Address-exposed local */
  struct l_array_4_uint64_t _2701;    /* Address-exposed local */
  void* _2702;
  uint64_t _2703;
  void* _2704;
  void* _2705;
  void* _2706;
  uint64_t _2707;
  void* _2708;
  uint64_t _2709;
  void* _2710;
  uint8_t _2711;
  uint8_t _2712;
  uint8_t _2713;
  uint32_t _2714;
  uint64_t _2715;
  uint64_t _2715__PHI_TEMPORARY;
  uint32_t _2716;
  uint32_t _2716__PHI_TEMPORARY;
  uint64_t _2717;
  uint64_t _2718;
  void* _2719;
  uint8_t _2720;
  uint32_t _2721;
  uint64_t _2722;
  uint64_t _2723;
  uint32_t _2724;
  uint64_t _2725;
  uint32_t _2726;
  uint32_t _2726__PHI_TEMPORARY;
  uint64_t _2727;
  uint64_t _2728;
  uint64_t _2729;
  uint64_t _2730;
  void* _2731;
  uint64_t _2732;
  void* _2733;
  uint64_t _2734;
  void* _2735;
  uint64_t _2736;
  void* _2737;
  uint64_t _2738;
  uint64_t _2739;
  void* _2740;
  void* _2741;
  uint64_t _2742;
  void* _2743;
  uint64_t _2744;
  void* _2745;
  uint8_t _2746;
  uint8_t _2747;
  uint8_t _2748;
  uint32_t _2749;
  uint64_t _2750;
  uint64_t _2750__PHI_TEMPORARY;
  uint32_t _2751;
  uint32_t _2751__PHI_TEMPORARY;
  uint64_t _2752;
  uint64_t _2753;
  void* _2754;
  uint8_t _2755;
  uint32_t _2756;
  uint64_t _2757;
  uint64_t _2758;
  uint32_t _2759;
  uint64_t _2760;
  uint32_t _2761;
  uint32_t _2761__PHI_TEMPORARY;
  uint64_t _2762;
  uint64_t _2763;
  uint64_t _2764;
  uint64_t _2765;
  void* _2766;
  uint64_t _2767;
  void* _2768;
  uint64_t _2769;
  void* _2770;
  uint64_t _2771;
  void* _2772;
  uint64_t _2773;
  uint64_t _2774;
  void* _2775;
  void* _2776;
  uint64_t _2777;
  void* _2778;
  uint64_t _2779;
  void* _2780;
  uint8_t _2781;
  uint8_t _2782;
  uint8_t _2783;
  uint32_t _2784;
  uint64_t _2785;
  uint64_t _2785__PHI_TEMPORARY;
  uint32_t _2786;
  uint32_t _2786__PHI_TEMPORARY;
  uint64_t _2787;
  uint64_t _2788;
  void* _2789;
  uint8_t _2790;
  uint32_t _2791;
  uint64_t _2792;
  uint64_t _2793;
  uint32_t _2794;
  uint64_t _2795;
  uint32_t _2796;
  uint32_t _2796__PHI_TEMPORARY;
  uint64_t _2797;
  uint64_t _2798;
  uint64_t _2799;
  uint64_t _2800;
  void* _2801;
  uint64_t _2802;
  void* _2803;
  uint64_t _2804;
  void* _2805;
  uint64_t _2806;
  void* _2807;
  uint64_t _2808;
  void* _2809;
  void* _2809__PHI_TEMPORARY;
  void* _2810;
  uint64_t _2811;
  void* _2812;
  void* _2813;
  uint64_t _2814;
  void* _2815;
  uint64_t _2816;
  void* _2817;
  uint8_t _2818;
  uint8_t _2819;
  uint8_t _2820;
  uint32_t _2821;
  uint64_t _2822;
  uint64_t _2822__PHI_TEMPORARY;
  uint32_t _2823;
  uint32_t _2823__PHI_TEMPORARY;
  uint64_t _2824;
  uint64_t _2825;
  void* _2826;
  uint8_t _2827;
  uint32_t _2828;
  uint64_t _2829;
  uint64_t _2830;
  uint32_t _2831;
  uint64_t _2832;
  uint32_t _2833;
  uint32_t _2833__PHI_TEMPORARY;
  uint64_t _2834;
  uint64_t _2835;
  uint64_t _2836;
  uint64_t _2837;
  void* _2838;
  uint64_t _2839;
  void* _2840;
  uint64_t _2841;
  void* _2842;
  uint64_t _2843;
  void* _2844;
  uint64_t _2845;
  uint64_t _2846;
  void* _2847;
  void* _2848;
  uint64_t _2849;
  void* _2850;
  uint64_t _2851;
  void* _2852;
  uint8_t _2853;
  uint8_t _2854;
  uint8_t _2855;
  uint32_t _2856;
  uint64_t _2857;
  uint64_t _2857__PHI_TEMPORARY;
  uint32_t _2858;
  uint32_t _2858__PHI_TEMPORARY;
  uint64_t _2859;
  uint64_t _2860;
  void* _2861;
  uint8_t _2862;
  uint32_t _2863;
  uint64_t _2864;
  uint64_t _2865;
  uint32_t _2866;
  uint64_t _2867;
  uint32_t _2868;
  uint32_t _2868__PHI_TEMPORARY;
  uint64_t _2869;
  uint64_t _2870;
  uint64_t _2871;
  uint64_t _2872;
  void* _2873;
  uint64_t _2874;
  void* _2875;
  uint64_t _2876;
  void* _2877;
  uint64_t _2878;
  void* _2879;
  uint64_t _2880;
  uint64_t _2881;
  void* _2882;
  void* _2883;
  uint64_t _2884;
  void* _2885;
  uint64_t _2886;
  void* _2887;
  uint8_t _2888;
  uint8_t _2889;
  uint8_t _2890;
  uint32_t _2891;
  uint64_t _2892;
  uint64_t _2892__PHI_TEMPORARY;
  uint32_t _2893;
  uint32_t _2893__PHI_TEMPORARY;
  uint64_t _2894;
  uint64_t _2895;
  void* _2896;
  uint8_t _2897;
  uint32_t _2898;
  uint64_t _2899;
  uint64_t _2900;
  uint32_t _2901;
  uint64_t _2902;
  uint32_t _2903;
  uint32_t _2903__PHI_TEMPORARY;
  uint64_t _2904;
  uint64_t _2905;
  uint64_t _2906;
  uint64_t _2907;
  void* _2908;
  uint64_t _2909;
  void* _2910;
  uint64_t _2911;
  void* _2912;
  uint64_t _2913;
  void* _2914;
  uint64_t _2915;

  _2702 = ((&((uint8_t*)_2694)[((int64_t)32)]));
  _2703 = *(uint64_t*)_2702;
  _2704 = ((&((uint8_t*)_2694)[((int64_t)40)]));
  if (((_2703 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _2916;
  } else {
    goto _2917;
  }

_2916:
  _2705 = *(void**)_2694;
  _2706 = ((&((uint8_t*)_2705)[((int64_t)16)]));
  _2707 = *(uint64_t*)_2706;
  _2708 = ((&((uint8_t*)_2705)[((int64_t)8)]));
  _2709 = *(uint64_t*)_2708;
  if ((((int64_t)_2709) > ((int64_t)_2707))) {
    goto _2918;
  } else {
    _2726__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2919;
  }

_2918:
  _2710 = *(void**)_2705;
  _2711 = *(uint8_t*)(((&((uint8_t*)_2710)[((int64_t)_2707)])));
  *(uint64_t*)_2706 = (llvm_add_u64(_2707, 1));
  _2712 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2711)), 0);
  _2713 = llvm_sub_u8(32, (llvm_shl_u8(_2712, 3)));
  _2714 = (((uint32_t)(uint8_t)_2711)) << 24;
  if ((((uint8_t)_2713) > ((uint8_t)((uint8_t)16)))) {
    _2726__PHI_TEMPORARY = _2714;   /* for PHI node */
    goto _2919;
  } else {
    _2715__PHI_TEMPORARY = 16;   /* for PHI node */
    _2716__PHI_TEMPORARY = _2714;   /* for PHI node */
    goto _2920;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2920:
  _2715 = _2715__PHI_TEMPORARY;
  _2716 = _2716__PHI_TEMPORARY;
  if (((((int64_t)_2715) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2715) < ((uint64_t)(((uint64_t)(uint8_t)_2713)))))) {
    _2726__PHI_TEMPORARY = _2716;   /* for PHI node */
    goto _2919;
  } else {
    goto _2921;
  }

_2921:
  _2717 = *(uint64_t*)_2706;
  _2718 = *(uint64_t*)_2708;
  if ((((int64_t)_2718) > ((int64_t)_2717))) {
    goto _2922;
  } else {
    _2726__PHI_TEMPORARY = _2716;   /* for PHI node */
    goto _2919;
  }

_2922:
  _2719 = *(void**)_2705;
  _2720 = *(uint8_t*)(((&((uint8_t*)_2719)[((int64_t)_2717)])));
  if ((((int8_t)_2720) > ((int8_t)((uint8_t)-65)))) {
    _2726__PHI_TEMPORARY = _2716;   /* for PHI node */
    goto _2919;
  } else {
    goto _2923;
  }

_2923:
  _2721 = llvm_select_u32((((int64_t)_2717) < ((int64_t)_2718)), (((uint32_t)(uint8_t)_2720)), 0);
  _2722 = *(uint64_t*)_2706;
  *(uint64_t*)_2706 = (llvm_add_u64(_2722, 1));
  _2723 = llvm_neg_u64(_2715);
  _2724 = _2716 | (llvm_select_u32((((int64_t)_2715) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2723) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2721, (((uint32_t)_2723)))))), (llvm_select_u32((((uint64_t)_2715) > ((uint64_t)UINT64_C(31))), 0, (_2721 << (((uint32_t)_2715)))))));
  _2725 = llvm_add_u64(_2715, -8);
  _2715__PHI_TEMPORARY = _2725;   /* for PHI node */
  _2716__PHI_TEMPORARY = _2724;   /* for PHI node */
  goto _2920;

  } while (1); /* end of syntactic loop '' */
_2919:
  _2726 = _2726__PHI_TEMPORARY;
  _2727 = *(uint64_t*)_2702;
  _2728 = *(uint64_t*)_2704;
  _2729 = jsyn_cbe_fshl_i64(_2728, _2727, 32);
  _2730 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2726)), _2728, 32);
  *(uint64_t*)_2702 = _2729;
  *(uint64_t*)_2704 = _2730;
  _2731 = ((&((uint8_t*)_2694)[((int64_t)56)]));
  _2732 = *(uint64_t*)_2731;
  _2733 = ((&((uint8_t*)_2694)[((int64_t)64)]));
  _2734 = *(uint64_t*)_2733;
  _2735 = ((&((uint8_t*)_2694)[((int64_t)72)]));
  _2736 = *(uint64_t*)_2735;
  _2737 = *(void**)_2694;
  _2738 = *(uint64_t*)(((&((uint8_t*)_2737)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2694)[((int64_t)48)]))) = _2732;
  *(uint64_t*)_2731 = _2734;
  *(uint64_t*)_2733 = _2736;
  *(uint64_t*)_2735 = _2738;
  _2739 = *(uint64_t*)_2702;
  if (((_2739 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _2924;
  } else {
    goto _2925;
  }

_2924:
  _2740 = *(void**)_2694;
  _2741 = ((&((uint8_t*)_2740)[((int64_t)16)]));
  _2742 = *(uint64_t*)_2741;
  _2743 = ((&((uint8_t*)_2740)[((int64_t)8)]));
  _2744 = *(uint64_t*)_2743;
  if ((((int64_t)_2744) > ((int64_t)_2742))) {
    goto _2926;
  } else {
    _2761__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2927;
  }

_2926:
  _2745 = *(void**)_2740;
  _2746 = *(uint8_t*)(((&((uint8_t*)_2745)[((int64_t)_2742)])));
  *(uint64_t*)_2741 = (llvm_add_u64(_2742, 1));
  _2747 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2746)), 0);
  _2748 = llvm_sub_u8(32, (llvm_shl_u8(_2747, 3)));
  _2749 = (((uint32_t)(uint8_t)_2746)) << 24;
  if ((((uint8_t)_2748) > ((uint8_t)((uint8_t)16)))) {
    _2761__PHI_TEMPORARY = _2749;   /* for PHI node */
    goto _2927;
  } else {
    _2750__PHI_TEMPORARY = 16;   /* for PHI node */
    _2751__PHI_TEMPORARY = _2749;   /* for PHI node */
    goto _2928;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2928:
  _2750 = _2750__PHI_TEMPORARY;
  _2751 = _2751__PHI_TEMPORARY;
  if (((((int64_t)_2750) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2750) < ((uint64_t)(((uint64_t)(uint8_t)_2748)))))) {
    _2761__PHI_TEMPORARY = _2751;   /* for PHI node */
    goto _2927;
  } else {
    goto _2929;
  }

_2929:
  _2752 = *(uint64_t*)_2741;
  _2753 = *(uint64_t*)_2743;
  if ((((int64_t)_2753) > ((int64_t)_2752))) {
    goto _2930;
  } else {
    _2761__PHI_TEMPORARY = _2751;   /* for PHI node */
    goto _2927;
  }

_2930:
  _2754 = *(void**)_2740;
  _2755 = *(uint8_t*)(((&((uint8_t*)_2754)[((int64_t)_2752)])));
  if ((((int8_t)_2755) > ((int8_t)((uint8_t)-65)))) {
    _2761__PHI_TEMPORARY = _2751;   /* for PHI node */
    goto _2927;
  } else {
    goto _2931;
  }

_2931:
  _2756 = llvm_select_u32((((int64_t)_2752) < ((int64_t)_2753)), (((uint32_t)(uint8_t)_2755)), 0);
  _2757 = *(uint64_t*)_2741;
  *(uint64_t*)_2741 = (llvm_add_u64(_2757, 1));
  _2758 = llvm_neg_u64(_2750);
  _2759 = _2751 | (llvm_select_u32((((int64_t)_2750) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2758) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2756, (((uint32_t)_2758)))))), (llvm_select_u32((((uint64_t)_2750) > ((uint64_t)UINT64_C(31))), 0, (_2756 << (((uint32_t)_2750)))))));
  _2760 = llvm_add_u64(_2750, -8);
  _2750__PHI_TEMPORARY = _2760;   /* for PHI node */
  _2751__PHI_TEMPORARY = _2759;   /* for PHI node */
  goto _2928;

  } while (1); /* end of syntactic loop '' */
_2927:
  _2761 = _2761__PHI_TEMPORARY;
  _2762 = *(uint64_t*)_2702;
  _2763 = *(uint64_t*)_2704;
  _2764 = jsyn_cbe_fshl_i64(_2763, _2762, 32);
  _2765 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2761)), _2763, 32);
  *(uint64_t*)_2702 = _2764;
  *(uint64_t*)_2704 = _2765;
  _2766 = ((&((uint8_t*)_2694)[((int64_t)56)]));
  _2767 = *(uint64_t*)_2766;
  _2768 = ((&((uint8_t*)_2694)[((int64_t)64)]));
  _2769 = *(uint64_t*)_2768;
  _2770 = ((&((uint8_t*)_2694)[((int64_t)72)]));
  _2771 = *(uint64_t*)_2770;
  _2772 = *(void**)_2694;
  _2773 = *(uint64_t*)(((&((uint8_t*)_2772)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2694)[((int64_t)48)]))) = _2767;
  *(uint64_t*)_2766 = _2769;
  *(uint64_t*)_2768 = _2771;
  *(uint64_t*)_2770 = _2773;
  _2774 = *(uint64_t*)_2702;
  if (((_2774 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2932;
  } else {
    goto _2933;
  }

_2932:
  _2775 = *(void**)_2694;
  _2776 = ((&((uint8_t*)_2775)[((int64_t)16)]));
  _2777 = *(uint64_t*)_2776;
  _2778 = ((&((uint8_t*)_2775)[((int64_t)8)]));
  _2779 = *(uint64_t*)_2778;
  if ((((int64_t)_2779) > ((int64_t)_2777))) {
    goto _2934;
  } else {
    _2796__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2935;
  }

_2934:
  _2780 = *(void**)_2775;
  _2781 = *(uint8_t*)(((&((uint8_t*)_2780)[((int64_t)_2777)])));
  *(uint64_t*)_2776 = (llvm_add_u64(_2777, 1));
  _2782 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2781)), 0);
  _2783 = llvm_sub_u8(32, (llvm_shl_u8(_2782, 3)));
  _2784 = (((uint32_t)(uint8_t)_2781)) << 24;
  if ((((uint8_t)_2783) > ((uint8_t)((uint8_t)16)))) {
    _2796__PHI_TEMPORARY = _2784;   /* for PHI node */
    goto _2935;
  } else {
    _2785__PHI_TEMPORARY = 16;   /* for PHI node */
    _2786__PHI_TEMPORARY = _2784;   /* for PHI node */
    goto _2936;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2936:
  _2785 = _2785__PHI_TEMPORARY;
  _2786 = _2786__PHI_TEMPORARY;
  if (((((int64_t)_2785) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2785) < ((uint64_t)(((uint64_t)(uint8_t)_2783)))))) {
    _2796__PHI_TEMPORARY = _2786;   /* for PHI node */
    goto _2935;
  } else {
    goto _2937;
  }

_2937:
  _2787 = *(uint64_t*)_2776;
  _2788 = *(uint64_t*)_2778;
  if ((((int64_t)_2788) > ((int64_t)_2787))) {
    goto _2938;
  } else {
    _2796__PHI_TEMPORARY = _2786;   /* for PHI node */
    goto _2935;
  }

_2938:
  _2789 = *(void**)_2775;
  _2790 = *(uint8_t*)(((&((uint8_t*)_2789)[((int64_t)_2787)])));
  if ((((int8_t)_2790) > ((int8_t)((uint8_t)-65)))) {
    _2796__PHI_TEMPORARY = _2786;   /* for PHI node */
    goto _2935;
  } else {
    goto _2939;
  }

_2939:
  _2791 = llvm_select_u32((((int64_t)_2787) < ((int64_t)_2788)), (((uint32_t)(uint8_t)_2790)), 0);
  _2792 = *(uint64_t*)_2776;
  *(uint64_t*)_2776 = (llvm_add_u64(_2792, 1));
  _2793 = llvm_neg_u64(_2785);
  _2794 = _2786 | (llvm_select_u32((((int64_t)_2785) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2793) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2791, (((uint32_t)_2793)))))), (llvm_select_u32((((uint64_t)_2785) > ((uint64_t)UINT64_C(31))), 0, (_2791 << (((uint32_t)_2785)))))));
  _2795 = llvm_add_u64(_2785, -8);
  _2785__PHI_TEMPORARY = _2795;   /* for PHI node */
  _2786__PHI_TEMPORARY = _2794;   /* for PHI node */
  goto _2936;

  } while (1); /* end of syntactic loop '' */
_2935:
  _2796 = _2796__PHI_TEMPORARY;
  _2797 = *(uint64_t*)_2702;
  _2798 = *(uint64_t*)_2704;
  _2799 = jsyn_cbe_fshl_i64(_2798, _2797, 32);
  _2800 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2796)), _2798, 32);
  *(uint64_t*)_2702 = _2799;
  *(uint64_t*)_2704 = _2800;
  _2801 = ((&((uint8_t*)_2694)[((int64_t)56)]));
  _2802 = *(uint64_t*)_2801;
  _2803 = ((&((uint8_t*)_2694)[((int64_t)64)]));
  _2804 = *(uint64_t*)_2803;
  _2805 = ((&((uint8_t*)_2694)[((int64_t)72)]));
  _2806 = *(uint64_t*)_2805;
  _2807 = *(void**)_2694;
  _2808 = *(uint64_t*)(((&((uint8_t*)_2807)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2694)[((int64_t)48)]))) = _2802;
  *(uint64_t*)_2801 = _2804;
  *(uint64_t*)_2803 = _2806;
  *(uint64_t*)_2805 = _2808;
  julia_emit_11((&_2695), _2693, _2694, 71, 1);
  _2809__PHI_TEMPORARY = (&_2695);   /* for PHI node */
  goto _2940;

_2940:
  _2809 = _2809__PHI_TEMPORARY;
  _2810 = memcpy(_2692, _2809, 32);
  return;
_2933:
  julia_emit_11((&_2696), _2693, _2694, 673, 1);
  _2809__PHI_TEMPORARY = (&_2696);   /* for PHI node */
  goto _2940;

_2925:
  _2811 = *(uint64_t*)_2702;
  if (((_2811 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2941;
  } else {
    goto _2942;
  }

_2941:
  _2812 = *(void**)_2694;
  _2813 = ((&((uint8_t*)_2812)[((int64_t)16)]));
  _2814 = *(uint64_t*)_2813;
  _2815 = ((&((uint8_t*)_2812)[((int64_t)8)]));
  _2816 = *(uint64_t*)_2815;
  if ((((int64_t)_2816) > ((int64_t)_2814))) {
    goto _2943;
  } else {
    _2833__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2944;
  }

_2943:
  _2817 = *(void**)_2812;
  _2818 = *(uint8_t*)(((&((uint8_t*)_2817)[((int64_t)_2814)])));
  *(uint64_t*)_2813 = (llvm_add_u64(_2814, 1));
  _2819 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2818)), 0);
  _2820 = llvm_sub_u8(32, (llvm_shl_u8(_2819, 3)));
  _2821 = (((uint32_t)(uint8_t)_2818)) << 24;
  if ((((uint8_t)_2820) > ((uint8_t)((uint8_t)16)))) {
    _2833__PHI_TEMPORARY = _2821;   /* for PHI node */
    goto _2944;
  } else {
    _2822__PHI_TEMPORARY = 16;   /* for PHI node */
    _2823__PHI_TEMPORARY = _2821;   /* for PHI node */
    goto _2945;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2945:
  _2822 = _2822__PHI_TEMPORARY;
  _2823 = _2823__PHI_TEMPORARY;
  if (((((int64_t)_2822) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2822) < ((uint64_t)(((uint64_t)(uint8_t)_2820)))))) {
    _2833__PHI_TEMPORARY = _2823;   /* for PHI node */
    goto _2944;
  } else {
    goto _2946;
  }

_2946:
  _2824 = *(uint64_t*)_2813;
  _2825 = *(uint64_t*)_2815;
  if ((((int64_t)_2825) > ((int64_t)_2824))) {
    goto _2947;
  } else {
    _2833__PHI_TEMPORARY = _2823;   /* for PHI node */
    goto _2944;
  }

_2947:
  _2826 = *(void**)_2812;
  _2827 = *(uint8_t*)(((&((uint8_t*)_2826)[((int64_t)_2824)])));
  if ((((int8_t)_2827) > ((int8_t)((uint8_t)-65)))) {
    _2833__PHI_TEMPORARY = _2823;   /* for PHI node */
    goto _2944;
  } else {
    goto _2948;
  }

_2948:
  _2828 = llvm_select_u32((((int64_t)_2824) < ((int64_t)_2825)), (((uint32_t)(uint8_t)_2827)), 0);
  _2829 = *(uint64_t*)_2813;
  *(uint64_t*)_2813 = (llvm_add_u64(_2829, 1));
  _2830 = llvm_neg_u64(_2822);
  _2831 = _2823 | (llvm_select_u32((((int64_t)_2822) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2830) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2828, (((uint32_t)_2830)))))), (llvm_select_u32((((uint64_t)_2822) > ((uint64_t)UINT64_C(31))), 0, (_2828 << (((uint32_t)_2822)))))));
  _2832 = llvm_add_u64(_2822, -8);
  _2822__PHI_TEMPORARY = _2832;   /* for PHI node */
  _2823__PHI_TEMPORARY = _2831;   /* for PHI node */
  goto _2945;

  } while (1); /* end of syntactic loop '' */
_2944:
  _2833 = _2833__PHI_TEMPORARY;
  _2834 = *(uint64_t*)_2702;
  _2835 = *(uint64_t*)_2704;
  _2836 = jsyn_cbe_fshl_i64(_2835, _2834, 32);
  _2837 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2833)), _2835, 32);
  *(uint64_t*)_2702 = _2836;
  *(uint64_t*)_2704 = _2837;
  _2838 = ((&((uint8_t*)_2694)[((int64_t)56)]));
  _2839 = *(uint64_t*)_2838;
  _2840 = ((&((uint8_t*)_2694)[((int64_t)64)]));
  _2841 = *(uint64_t*)_2840;
  _2842 = ((&((uint8_t*)_2694)[((int64_t)72)]));
  _2843 = *(uint64_t*)_2842;
  _2844 = *(void**)_2694;
  _2845 = *(uint64_t*)(((&((uint8_t*)_2844)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2694)[((int64_t)48)]))) = _2839;
  *(uint64_t*)_2838 = _2841;
  *(uint64_t*)_2840 = _2843;
  *(uint64_t*)_2842 = _2845;
  julia_emit_11((&_2697), _2693, _2694, 71, 1);
  _2809__PHI_TEMPORARY = (&_2697);   /* for PHI node */
  goto _2940;

_2942:
  julia_emit_11((&_2698), _2693, _2694, 672, 1);
  _2809__PHI_TEMPORARY = (&_2698);   /* for PHI node */
  goto _2940;

_2917:
  _2846 = *(uint64_t*)_2702;
  if (((_2846 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2949;
  } else {
    goto _2950;
  }

_2949:
  _2847 = *(void**)_2694;
  _2848 = ((&((uint8_t*)_2847)[((int64_t)16)]));
  _2849 = *(uint64_t*)_2848;
  _2850 = ((&((uint8_t*)_2847)[((int64_t)8)]));
  _2851 = *(uint64_t*)_2850;
  if ((((int64_t)_2851) > ((int64_t)_2849))) {
    goto _2951;
  } else {
    _2868__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2952;
  }

_2951:
  _2852 = *(void**)_2847;
  _2853 = *(uint8_t*)(((&((uint8_t*)_2852)[((int64_t)_2849)])));
  *(uint64_t*)_2848 = (llvm_add_u64(_2849, 1));
  _2854 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2853)), 0);
  _2855 = llvm_sub_u8(32, (llvm_shl_u8(_2854, 3)));
  _2856 = (((uint32_t)(uint8_t)_2853)) << 24;
  if ((((uint8_t)_2855) > ((uint8_t)((uint8_t)16)))) {
    _2868__PHI_TEMPORARY = _2856;   /* for PHI node */
    goto _2952;
  } else {
    _2857__PHI_TEMPORARY = 16;   /* for PHI node */
    _2858__PHI_TEMPORARY = _2856;   /* for PHI node */
    goto _2953;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2953:
  _2857 = _2857__PHI_TEMPORARY;
  _2858 = _2858__PHI_TEMPORARY;
  if (((((int64_t)_2857) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2857) < ((uint64_t)(((uint64_t)(uint8_t)_2855)))))) {
    _2868__PHI_TEMPORARY = _2858;   /* for PHI node */
    goto _2952;
  } else {
    goto _2954;
  }

_2954:
  _2859 = *(uint64_t*)_2848;
  _2860 = *(uint64_t*)_2850;
  if ((((int64_t)_2860) > ((int64_t)_2859))) {
    goto _2955;
  } else {
    _2868__PHI_TEMPORARY = _2858;   /* for PHI node */
    goto _2952;
  }

_2955:
  _2861 = *(void**)_2847;
  _2862 = *(uint8_t*)(((&((uint8_t*)_2861)[((int64_t)_2859)])));
  if ((((int8_t)_2862) > ((int8_t)((uint8_t)-65)))) {
    _2868__PHI_TEMPORARY = _2858;   /* for PHI node */
    goto _2952;
  } else {
    goto _2956;
  }

_2956:
  _2863 = llvm_select_u32((((int64_t)_2859) < ((int64_t)_2860)), (((uint32_t)(uint8_t)_2862)), 0);
  _2864 = *(uint64_t*)_2848;
  *(uint64_t*)_2848 = (llvm_add_u64(_2864, 1));
  _2865 = llvm_neg_u64(_2857);
  _2866 = _2858 | (llvm_select_u32((((int64_t)_2857) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2865) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2863, (((uint32_t)_2865)))))), (llvm_select_u32((((uint64_t)_2857) > ((uint64_t)UINT64_C(31))), 0, (_2863 << (((uint32_t)_2857)))))));
  _2867 = llvm_add_u64(_2857, -8);
  _2857__PHI_TEMPORARY = _2867;   /* for PHI node */
  _2858__PHI_TEMPORARY = _2866;   /* for PHI node */
  goto _2953;

  } while (1); /* end of syntactic loop '' */
_2952:
  _2868 = _2868__PHI_TEMPORARY;
  _2869 = *(uint64_t*)_2702;
  _2870 = *(uint64_t*)_2704;
  _2871 = jsyn_cbe_fshl_i64(_2870, _2869, 32);
  _2872 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2868)), _2870, 32);
  *(uint64_t*)_2702 = _2871;
  *(uint64_t*)_2704 = _2872;
  _2873 = ((&((uint8_t*)_2694)[((int64_t)56)]));
  _2874 = *(uint64_t*)_2873;
  _2875 = ((&((uint8_t*)_2694)[((int64_t)64)]));
  _2876 = *(uint64_t*)_2875;
  _2877 = ((&((uint8_t*)_2694)[((int64_t)72)]));
  _2878 = *(uint64_t*)_2877;
  _2879 = *(void**)_2694;
  _2880 = *(uint64_t*)(((&((uint8_t*)_2879)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2694)[((int64_t)48)]))) = _2874;
  *(uint64_t*)_2873 = _2876;
  *(uint64_t*)_2875 = _2878;
  *(uint64_t*)_2877 = _2880;
  julia_emit_11((&_2699), _2693, _2694, 240, 1);
  _2809__PHI_TEMPORARY = (&_2699);   /* for PHI node */
  goto _2940;

_2950:
  _2881 = *(uint64_t*)_2702;
  if (((_2881 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _2957;
  } else {
    goto _2958;
  }

_2957:
  _2882 = *(void**)_2694;
  _2883 = ((&((uint8_t*)_2882)[((int64_t)16)]));
  _2884 = *(uint64_t*)_2883;
  _2885 = ((&((uint8_t*)_2882)[((int64_t)8)]));
  _2886 = *(uint64_t*)_2885;
  if ((((int64_t)_2886) > ((int64_t)_2884))) {
    goto _2959;
  } else {
    _2903__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2960;
  }

_2959:
  _2887 = *(void**)_2882;
  _2888 = *(uint8_t*)(((&((uint8_t*)_2887)[((int64_t)_2884)])));
  *(uint64_t*)_2883 = (llvm_add_u64(_2884, 1));
  _2889 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2888)), 0);
  _2890 = llvm_sub_u8(32, (llvm_shl_u8(_2889, 3)));
  _2891 = (((uint32_t)(uint8_t)_2888)) << 24;
  if ((((uint8_t)_2890) > ((uint8_t)((uint8_t)16)))) {
    _2903__PHI_TEMPORARY = _2891;   /* for PHI node */
    goto _2960;
  } else {
    _2892__PHI_TEMPORARY = 16;   /* for PHI node */
    _2893__PHI_TEMPORARY = _2891;   /* for PHI node */
    goto _2961;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2961:
  _2892 = _2892__PHI_TEMPORARY;
  _2893 = _2893__PHI_TEMPORARY;
  if (((((int64_t)_2892) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2892) < ((uint64_t)(((uint64_t)(uint8_t)_2890)))))) {
    _2903__PHI_TEMPORARY = _2893;   /* for PHI node */
    goto _2960;
  } else {
    goto _2962;
  }

_2962:
  _2894 = *(uint64_t*)_2883;
  _2895 = *(uint64_t*)_2885;
  if ((((int64_t)_2895) > ((int64_t)_2894))) {
    goto _2963;
  } else {
    _2903__PHI_TEMPORARY = _2893;   /* for PHI node */
    goto _2960;
  }

_2963:
  _2896 = *(void**)_2882;
  _2897 = *(uint8_t*)(((&((uint8_t*)_2896)[((int64_t)_2894)])));
  if ((((int8_t)_2897) > ((int8_t)((uint8_t)-65)))) {
    _2903__PHI_TEMPORARY = _2893;   /* for PHI node */
    goto _2960;
  } else {
    goto _2964;
  }

_2964:
  _2898 = llvm_select_u32((((int64_t)_2894) < ((int64_t)_2895)), (((uint32_t)(uint8_t)_2897)), 0);
  _2899 = *(uint64_t*)_2883;
  *(uint64_t*)_2883 = (llvm_add_u64(_2899, 1));
  _2900 = llvm_neg_u64(_2892);
  _2901 = _2893 | (llvm_select_u32((((int64_t)_2892) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2900) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2898, (((uint32_t)_2900)))))), (llvm_select_u32((((uint64_t)_2892) > ((uint64_t)UINT64_C(31))), 0, (_2898 << (((uint32_t)_2892)))))));
  _2902 = llvm_add_u64(_2892, -8);
  _2892__PHI_TEMPORARY = _2902;   /* for PHI node */
  _2893__PHI_TEMPORARY = _2901;   /* for PHI node */
  goto _2961;

  } while (1); /* end of syntactic loop '' */
_2960:
  _2903 = _2903__PHI_TEMPORARY;
  _2904 = *(uint64_t*)_2702;
  _2905 = *(uint64_t*)_2704;
  _2906 = jsyn_cbe_fshl_i64(_2905, _2904, 32);
  _2907 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2903)), _2905, 32);
  *(uint64_t*)_2702 = _2906;
  *(uint64_t*)_2704 = _2907;
  _2908 = ((&((uint8_t*)_2694)[((int64_t)56)]));
  _2909 = *(uint64_t*)_2908;
  _2910 = ((&((uint8_t*)_2694)[((int64_t)64)]));
  _2911 = *(uint64_t*)_2910;
  _2912 = ((&((uint8_t*)_2694)[((int64_t)72)]));
  _2913 = *(uint64_t*)_2912;
  _2914 = *(void**)_2694;
  _2915 = *(uint64_t*)(((&((uint8_t*)_2914)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2694)[((int64_t)48)]))) = _2909;
  *(uint64_t*)_2908 = _2911;
  *(uint64_t*)_2910 = _2913;
  *(uint64_t*)_2912 = _2915;
  julia_emit_11((&_2700), _2693, _2694, 237, 1);
  _2809__PHI_TEMPORARY = (&_2700);   /* for PHI node */
  goto _2940;

_2958:
  julia_emit_11((&_2701), _2693, _2694, 238, 1);
  _2809__PHI_TEMPORARY = (&_2701);   /* for PHI node */
  goto _2940;

}


static void julia_lex_less_27(void* _2965, void* _2966, void* _2967) {
  struct l_array_4_uint64_t _2968;    /* Address-exposed local */
  struct l_array_4_uint64_t _2969;    /* Address-exposed local */
  struct l_array_4_uint64_t _2970;    /* Address-exposed local */
  struct l_array_4_uint64_t _2971;    /* Address-exposed local */
  struct l_array_4_uint64_t _2972;    /* Address-exposed local */
  struct l_array_4_uint64_t _2973;    /* Address-exposed local */
  struct l_array_4_uint64_t _2974;    /* Address-exposed local */
  struct l_array_4_uint64_t _2975;    /* Address-exposed local */
  struct l_array_4_uint64_t _2976;    /* Address-exposed local */
  struct l_array_4_uint64_t _2977;    /* Address-exposed local */
  void* _2978;
  uint64_t _2979;
  void* _2980;
  void* _2981;
  void* _2982;
  uint64_t _2983;
  void* _2984;
  uint64_t _2985;
  void* _2986;
  uint8_t _2987;
  uint8_t _2988;
  uint8_t _2989;
  uint32_t _2990;
  uint64_t _2991;
  uint64_t _2991__PHI_TEMPORARY;
  uint32_t _2992;
  uint32_t _2992__PHI_TEMPORARY;
  uint64_t _2993;
  uint64_t _2994;
  void* _2995;
  uint8_t _2996;
  uint32_t _2997;
  uint64_t _2998;
  uint64_t _2999;
  uint32_t _3000;
  uint64_t _3001;
  uint32_t _3002;
  uint32_t _3002__PHI_TEMPORARY;
  uint64_t _3003;
  uint64_t _3004;
  uint64_t _3005;
  uint64_t _3006;
  void* _3007;
  uint64_t _3008;
  void* _3009;
  uint64_t _3010;
  void* _3011;
  uint64_t _3012;
  void* _3013;
  uint64_t _3014;
  uint64_t _3015;
  void* _3016;
  void* _3017;
  uint64_t _3018;
  void* _3019;
  uint64_t _3020;
  void* _3021;
  uint8_t _3022;
  uint8_t _3023;
  uint8_t _3024;
  uint32_t _3025;
  uint64_t _3026;
  uint64_t _3026__PHI_TEMPORARY;
  uint32_t _3027;
  uint32_t _3027__PHI_TEMPORARY;
  uint64_t _3028;
  uint64_t _3029;
  void* _3030;
  uint8_t _3031;
  uint32_t _3032;
  uint64_t _3033;
  uint64_t _3034;
  uint32_t _3035;
  uint64_t _3036;
  uint32_t _3037;
  uint32_t _3037__PHI_TEMPORARY;
  uint64_t _3038;
  uint64_t _3039;
  uint64_t _3040;
  uint64_t _3041;
  void* _3042;
  uint64_t _3043;
  void* _3044;
  uint64_t _3045;
  void* _3046;
  uint64_t _3047;
  void* _3048;
  uint64_t _3049;
  void* _3050;
  void* _3050__PHI_TEMPORARY;
  void* _3051;
  uint64_t _3052;
  void* _3053;
  void* _3054;
  uint64_t _3055;
  void* _3056;
  uint64_t _3057;
  void* _3058;
  uint8_t _3059;
  uint8_t _3060;
  uint8_t _3061;
  uint32_t _3062;
  uint64_t _3063;
  uint64_t _3063__PHI_TEMPORARY;
  uint32_t _3064;
  uint32_t _3064__PHI_TEMPORARY;
  uint64_t _3065;
  uint64_t _3066;
  void* _3067;
  uint8_t _3068;
  uint32_t _3069;
  uint64_t _3070;
  uint64_t _3071;
  uint32_t _3072;
  uint64_t _3073;
  uint32_t _3074;
  uint32_t _3074__PHI_TEMPORARY;
  uint64_t _3075;
  uint64_t _3076;
  uint64_t _3077;
  uint64_t _3078;
  void* _3079;
  uint64_t _3080;
  void* _3081;
  uint64_t _3082;
  void* _3083;
  uint64_t _3084;
  void* _3085;
  uint64_t _3086;
  uint64_t _3087;
  void* _3088;
  void* _3089;
  uint64_t _3090;
  void* _3091;
  uint64_t _3092;
  void* _3093;
  uint8_t _3094;
  uint8_t _3095;
  uint8_t _3096;
  uint32_t _3097;
  uint64_t _3098;
  uint64_t _3098__PHI_TEMPORARY;
  uint32_t _3099;
  uint32_t _3099__PHI_TEMPORARY;
  uint64_t _3100;
  uint64_t _3101;
  void* _3102;
  uint8_t _3103;
  uint32_t _3104;
  uint64_t _3105;
  uint64_t _3106;
  uint32_t _3107;
  uint64_t _3108;
  uint32_t _3109;
  uint32_t _3109__PHI_TEMPORARY;
  uint64_t _3110;
  uint64_t _3111;
  uint64_t _3112;
  uint64_t _3113;
  void* _3114;
  uint64_t _3115;
  void* _3116;
  uint64_t _3117;
  void* _3118;
  uint64_t _3119;
  void* _3120;
  uint64_t _3121;
  uint64_t _3122;
  void* _3123;
  void* _3124;
  uint64_t _3125;
  void* _3126;
  uint64_t _3127;
  void* _3128;
  uint8_t _3129;
  uint8_t _3130;
  uint8_t _3131;
  uint32_t _3132;
  uint64_t _3133;
  uint64_t _3133__PHI_TEMPORARY;
  uint32_t _3134;
  uint32_t _3134__PHI_TEMPORARY;
  uint64_t _3135;
  uint64_t _3136;
  void* _3137;
  uint8_t _3138;
  uint32_t _3139;
  uint64_t _3140;
  uint64_t _3141;
  uint32_t _3142;
  uint64_t _3143;
  uint32_t _3144;
  uint32_t _3144__PHI_TEMPORARY;
  uint64_t _3145;
  uint64_t _3146;
  uint64_t _3147;
  uint64_t _3148;
  void* _3149;
  uint64_t _3150;
  void* _3151;
  uint64_t _3152;
  void* _3153;
  uint64_t _3154;
  void* _3155;
  uint64_t _3156;
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
  void* _3186;
  uint64_t _3187;
  void* _3188;
  uint64_t _3189;
  void* _3190;
  uint64_t _3191;
  void* _3192;
  uint64_t _3193;
  void* _3194;
  void* _3195;
  uint64_t _3196;
  void* _3197;
  uint64_t _3198;
  void* _3199;
  uint8_t _3200;
  uint8_t _3201;
  uint8_t _3202;
  uint32_t _3203;
  uint64_t _3204;
  uint64_t _3204__PHI_TEMPORARY;
  uint32_t _3205;
  uint32_t _3205__PHI_TEMPORARY;
  uint64_t _3206;
  uint64_t _3207;
  void* _3208;
  uint8_t _3209;
  uint32_t _3210;
  uint64_t _3211;
  uint64_t _3212;
  uint32_t _3213;
  uint64_t _3214;
  uint32_t _3215;
  uint32_t _3215__PHI_TEMPORARY;
  uint64_t _3216;
  uint64_t _3217;
  uint64_t _3218;
  uint64_t _3219;
  uint64_t _3220;
  uint64_t _3221;
  uint64_t _3222;
  void* _3223;
  uint64_t _3224;
  uint64_t _3225;
  void* _3226;
  void* _3227;
  uint64_t _3228;
  void* _3229;
  uint64_t _3230;
  void* _3231;
  uint8_t _3232;
  uint8_t _3233;
  uint8_t _3234;
  uint32_t _3235;
  uint64_t _3236;
  uint64_t _3236__PHI_TEMPORARY;
  uint32_t _3237;
  uint32_t _3237__PHI_TEMPORARY;
  uint64_t _3238;
  uint64_t _3239;
  void* _3240;
  uint8_t _3241;
  uint32_t _3242;
  uint64_t _3243;
  uint64_t _3244;
  uint32_t _3245;
  uint64_t _3246;
  uint32_t _3247;
  uint32_t _3247__PHI_TEMPORARY;
  uint64_t _3248;
  uint64_t _3249;
  uint64_t _3250;
  uint64_t _3251;
  uint64_t _3252;
  uint64_t _3253;
  uint64_t _3254;
  void* _3255;
  uint64_t _3256;
  uint64_t _3257;
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
  uint64_t _3284;
  uint64_t _3285;
  uint64_t _3286;
  void* _3287;
  uint64_t _3288;
  uint64_t _3289;
  void* _3290;
  void* _3291;
  uint64_t _3292;
  void* _3293;
  uint64_t _3294;
  void* _3295;
  uint8_t _3296;
  uint8_t _3297;
  uint8_t _3298;
  uint32_t _3299;
  uint64_t _3300;
  uint64_t _3300__PHI_TEMPORARY;
  uint32_t _3301;
  uint32_t _3301__PHI_TEMPORARY;
  uint64_t _3302;
  uint64_t _3303;
  void* _3304;
  uint8_t _3305;
  uint32_t _3306;
  uint64_t _3307;
  uint64_t _3308;
  uint32_t _3309;
  uint64_t _3310;
  uint32_t _3311;
  uint32_t _3311__PHI_TEMPORARY;
  uint64_t _3312;
  uint64_t _3313;
  uint64_t _3314;
  uint64_t _3315;
  uint64_t _3316;
  uint64_t _3317;
  uint64_t _3318;
  void* _3319;
  uint64_t _3320;

  _2978 = ((&((uint8_t*)_2967)[((int64_t)32)]));
  _2979 = *(uint64_t*)_2978;
  _2980 = ((&((uint8_t*)_2967)[((int64_t)40)]));
  if (((_2979 & INT64_C(-4294967296)) == UINT64_C(4323455642275676160))) {
    goto _3321;
  } else {
    goto _3322;
  }

_3321:
  _2981 = *(void**)_2967;
  _2982 = ((&((uint8_t*)_2981)[((int64_t)16)]));
  _2983 = *(uint64_t*)_2982;
  _2984 = ((&((uint8_t*)_2981)[((int64_t)8)]));
  _2985 = *(uint64_t*)_2984;
  if ((((int64_t)_2985) > ((int64_t)_2983))) {
    goto _3323;
  } else {
    _3002__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3324;
  }

_3323:
  _2986 = *(void**)_2981;
  _2987 = *(uint8_t*)(((&((uint8_t*)_2986)[((int64_t)_2983)])));
  *(uint64_t*)_2982 = (llvm_add_u64(_2983, 1));
  _2988 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2987)), 0);
  _2989 = llvm_sub_u8(32, (llvm_shl_u8(_2988, 3)));
  _2990 = (((uint32_t)(uint8_t)_2987)) << 24;
  if ((((uint8_t)_2989) > ((uint8_t)((uint8_t)16)))) {
    _3002__PHI_TEMPORARY = _2990;   /* for PHI node */
    goto _3324;
  } else {
    _2991__PHI_TEMPORARY = 16;   /* for PHI node */
    _2992__PHI_TEMPORARY = _2990;   /* for PHI node */
    goto _3325;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3325:
  _2991 = _2991__PHI_TEMPORARY;
  _2992 = _2992__PHI_TEMPORARY;
  if (((((int64_t)_2991) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2991) < ((uint64_t)(((uint64_t)(uint8_t)_2989)))))) {
    _3002__PHI_TEMPORARY = _2992;   /* for PHI node */
    goto _3324;
  } else {
    goto _3326;
  }

_3326:
  _2993 = *(uint64_t*)_2982;
  _2994 = *(uint64_t*)_2984;
  if ((((int64_t)_2994) > ((int64_t)_2993))) {
    goto _3327;
  } else {
    _3002__PHI_TEMPORARY = _2992;   /* for PHI node */
    goto _3324;
  }

_3327:
  _2995 = *(void**)_2981;
  _2996 = *(uint8_t*)(((&((uint8_t*)_2995)[((int64_t)_2993)])));
  if ((((int8_t)_2996) > ((int8_t)((uint8_t)-65)))) {
    _3002__PHI_TEMPORARY = _2992;   /* for PHI node */
    goto _3324;
  } else {
    goto _3328;
  }

_3328:
  _2997 = llvm_select_u32((((int64_t)_2993) < ((int64_t)_2994)), (((uint32_t)(uint8_t)_2996)), 0);
  _2998 = *(uint64_t*)_2982;
  *(uint64_t*)_2982 = (llvm_add_u64(_2998, 1));
  _2999 = llvm_neg_u64(_2991);
  _3000 = _2992 | (llvm_select_u32((((int64_t)_2991) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2999) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2997, (((uint32_t)_2999)))))), (llvm_select_u32((((uint64_t)_2991) > ((uint64_t)UINT64_C(31))), 0, (_2997 << (((uint32_t)_2991)))))));
  _3001 = llvm_add_u64(_2991, -8);
  _2991__PHI_TEMPORARY = _3001;   /* for PHI node */
  _2992__PHI_TEMPORARY = _3000;   /* for PHI node */
  goto _3325;

  } while (1); /* end of syntactic loop '' */
_3324:
  _3002 = _3002__PHI_TEMPORARY;
  _3003 = *(uint64_t*)_2978;
  _3004 = *(uint64_t*)_2980;
  _3005 = jsyn_cbe_fshl_i64(_3004, _3003, 32);
  _3006 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3002)), _3004, 32);
  *(uint64_t*)_2978 = _3005;
  *(uint64_t*)_2980 = _3006;
  _3007 = ((&((uint8_t*)_2967)[((int64_t)56)]));
  _3008 = *(uint64_t*)_3007;
  _3009 = ((&((uint8_t*)_2967)[((int64_t)64)]));
  _3010 = *(uint64_t*)_3009;
  _3011 = ((&((uint8_t*)_2967)[((int64_t)72)]));
  _3012 = *(uint64_t*)_3011;
  _3013 = *(void**)_2967;
  _3014 = *(uint64_t*)(((&((uint8_t*)_3013)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2967)[((int64_t)48)]))) = _3008;
  *(uint64_t*)_3007 = _3010;
  *(uint64_t*)_3009 = _3012;
  *(uint64_t*)_3011 = _3014;
  _3015 = *(uint64_t*)_2978;
  if (((_3015 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3329;
  } else {
    goto _3330;
  }

_3329:
  _3016 = *(void**)_2967;
  _3017 = ((&((uint8_t*)_3016)[((int64_t)16)]));
  _3018 = *(uint64_t*)_3017;
  _3019 = ((&((uint8_t*)_3016)[((int64_t)8)]));
  _3020 = *(uint64_t*)_3019;
  if ((((int64_t)_3020) > ((int64_t)_3018))) {
    goto _3331;
  } else {
    _3037__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3332;
  }

_3331:
  _3021 = *(void**)_3016;
  _3022 = *(uint8_t*)(((&((uint8_t*)_3021)[((int64_t)_3018)])));
  *(uint64_t*)_3017 = (llvm_add_u64(_3018, 1));
  _3023 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3022)), 0);
  _3024 = llvm_sub_u8(32, (llvm_shl_u8(_3023, 3)));
  _3025 = (((uint32_t)(uint8_t)_3022)) << 24;
  if ((((uint8_t)_3024) > ((uint8_t)((uint8_t)16)))) {
    _3037__PHI_TEMPORARY = _3025;   /* for PHI node */
    goto _3332;
  } else {
    _3026__PHI_TEMPORARY = 16;   /* for PHI node */
    _3027__PHI_TEMPORARY = _3025;   /* for PHI node */
    goto _3333;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3333:
  _3026 = _3026__PHI_TEMPORARY;
  _3027 = _3027__PHI_TEMPORARY;
  if (((((int64_t)_3026) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3026) < ((uint64_t)(((uint64_t)(uint8_t)_3024)))))) {
    _3037__PHI_TEMPORARY = _3027;   /* for PHI node */
    goto _3332;
  } else {
    goto _3334;
  }

_3334:
  _3028 = *(uint64_t*)_3017;
  _3029 = *(uint64_t*)_3019;
  if ((((int64_t)_3029) > ((int64_t)_3028))) {
    goto _3335;
  } else {
    _3037__PHI_TEMPORARY = _3027;   /* for PHI node */
    goto _3332;
  }

_3335:
  _3030 = *(void**)_3016;
  _3031 = *(uint8_t*)(((&((uint8_t*)_3030)[((int64_t)_3028)])));
  if ((((int8_t)_3031) > ((int8_t)((uint8_t)-65)))) {
    _3037__PHI_TEMPORARY = _3027;   /* for PHI node */
    goto _3332;
  } else {
    goto _3336;
  }

_3336:
  _3032 = llvm_select_u32((((int64_t)_3028) < ((int64_t)_3029)), (((uint32_t)(uint8_t)_3031)), 0);
  _3033 = *(uint64_t*)_3017;
  *(uint64_t*)_3017 = (llvm_add_u64(_3033, 1));
  _3034 = llvm_neg_u64(_3026);
  _3035 = _3027 | (llvm_select_u32((((int64_t)_3026) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3034) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3032, (((uint32_t)_3034)))))), (llvm_select_u32((((uint64_t)_3026) > ((uint64_t)UINT64_C(31))), 0, (_3032 << (((uint32_t)_3026)))))));
  _3036 = llvm_add_u64(_3026, -8);
  _3026__PHI_TEMPORARY = _3036;   /* for PHI node */
  _3027__PHI_TEMPORARY = _3035;   /* for PHI node */
  goto _3333;

  } while (1); /* end of syntactic loop '' */
_3332:
  _3037 = _3037__PHI_TEMPORARY;
  _3038 = *(uint64_t*)_2978;
  _3039 = *(uint64_t*)_2980;
  _3040 = jsyn_cbe_fshl_i64(_3039, _3038, 32);
  _3041 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3037)), _3039, 32);
  *(uint64_t*)_2978 = _3040;
  *(uint64_t*)_2980 = _3041;
  _3042 = ((&((uint8_t*)_2967)[((int64_t)56)]));
  _3043 = *(uint64_t*)_3042;
  _3044 = ((&((uint8_t*)_2967)[((int64_t)64)]));
  _3045 = *(uint64_t*)_3044;
  _3046 = ((&((uint8_t*)_2967)[((int64_t)72)]));
  _3047 = *(uint64_t*)_3046;
  _3048 = *(void**)_2967;
  _3049 = *(uint64_t*)(((&((uint8_t*)_3048)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2967)[((int64_t)48)]))) = _3043;
  *(uint64_t*)_3042 = _3045;
  *(uint64_t*)_3044 = _3047;
  *(uint64_t*)_3046 = _3049;
  julia_emit_11((&_2968), _2966, _2967, 71, 1);
  _3050__PHI_TEMPORARY = (&_2968);   /* for PHI node */
  goto _3337;

_3337:
  _3050 = _3050__PHI_TEMPORARY;
  _3051 = memcpy(_2965, _3050, 32);
  return;
_3330:
  julia_emit_11((&_2969), _2966, _2967, 671, 1);
  _3050__PHI_TEMPORARY = (&_2969);   /* for PHI node */
  goto _3337;

_3322:
  _3052 = *(uint64_t*)_2978;
  if (((_3052 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3338;
  } else {
    goto _3339;
  }

_3338:
  _3053 = *(void**)_2967;
  _3054 = ((&((uint8_t*)_3053)[((int64_t)16)]));
  _3055 = *(uint64_t*)_3054;
  _3056 = ((&((uint8_t*)_3053)[((int64_t)8)]));
  _3057 = *(uint64_t*)_3056;
  if ((((int64_t)_3057) > ((int64_t)_3055))) {
    goto _3340;
  } else {
    _3074__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3341;
  }

_3340:
  _3058 = *(void**)_3053;
  _3059 = *(uint8_t*)(((&((uint8_t*)_3058)[((int64_t)_3055)])));
  *(uint64_t*)_3054 = (llvm_add_u64(_3055, 1));
  _3060 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3059)), 0);
  _3061 = llvm_sub_u8(32, (llvm_shl_u8(_3060, 3)));
  _3062 = (((uint32_t)(uint8_t)_3059)) << 24;
  if ((((uint8_t)_3061) > ((uint8_t)((uint8_t)16)))) {
    _3074__PHI_TEMPORARY = _3062;   /* for PHI node */
    goto _3341;
  } else {
    _3063__PHI_TEMPORARY = 16;   /* for PHI node */
    _3064__PHI_TEMPORARY = _3062;   /* for PHI node */
    goto _3342;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3342:
  _3063 = _3063__PHI_TEMPORARY;
  _3064 = _3064__PHI_TEMPORARY;
  if (((((int64_t)_3063) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3063) < ((uint64_t)(((uint64_t)(uint8_t)_3061)))))) {
    _3074__PHI_TEMPORARY = _3064;   /* for PHI node */
    goto _3341;
  } else {
    goto _3343;
  }

_3343:
  _3065 = *(uint64_t*)_3054;
  _3066 = *(uint64_t*)_3056;
  if ((((int64_t)_3066) > ((int64_t)_3065))) {
    goto _3344;
  } else {
    _3074__PHI_TEMPORARY = _3064;   /* for PHI node */
    goto _3341;
  }

_3344:
  _3067 = *(void**)_3053;
  _3068 = *(uint8_t*)(((&((uint8_t*)_3067)[((int64_t)_3065)])));
  if ((((int8_t)_3068) > ((int8_t)((uint8_t)-65)))) {
    _3074__PHI_TEMPORARY = _3064;   /* for PHI node */
    goto _3341;
  } else {
    goto _3345;
  }

_3345:
  _3069 = llvm_select_u32((((int64_t)_3065) < ((int64_t)_3066)), (((uint32_t)(uint8_t)_3068)), 0);
  _3070 = *(uint64_t*)_3054;
  *(uint64_t*)_3054 = (llvm_add_u64(_3070, 1));
  _3071 = llvm_neg_u64(_3063);
  _3072 = _3064 | (llvm_select_u32((((int64_t)_3063) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3071) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3069, (((uint32_t)_3071)))))), (llvm_select_u32((((uint64_t)_3063) > ((uint64_t)UINT64_C(31))), 0, (_3069 << (((uint32_t)_3063)))))));
  _3073 = llvm_add_u64(_3063, -8);
  _3063__PHI_TEMPORARY = _3073;   /* for PHI node */
  _3064__PHI_TEMPORARY = _3072;   /* for PHI node */
  goto _3342;

  } while (1); /* end of syntactic loop '' */
_3341:
  _3074 = _3074__PHI_TEMPORARY;
  _3075 = *(uint64_t*)_2978;
  _3076 = *(uint64_t*)_2980;
  _3077 = jsyn_cbe_fshl_i64(_3076, _3075, 32);
  _3078 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3074)), _3076, 32);
  *(uint64_t*)_2978 = _3077;
  *(uint64_t*)_2980 = _3078;
  _3079 = ((&((uint8_t*)_2967)[((int64_t)56)]));
  _3080 = *(uint64_t*)_3079;
  _3081 = ((&((uint8_t*)_2967)[((int64_t)64)]));
  _3082 = *(uint64_t*)_3081;
  _3083 = ((&((uint8_t*)_2967)[((int64_t)72)]));
  _3084 = *(uint64_t*)_3083;
  _3085 = *(void**)_2967;
  _3086 = *(uint64_t*)(((&((uint8_t*)_3085)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2967)[((int64_t)48)]))) = _3080;
  *(uint64_t*)_3079 = _3082;
  *(uint64_t*)_3081 = _3084;
  *(uint64_t*)_3083 = _3086;
  julia_emit_11((&_2970), _2966, _2967, 242, 1);
  _3050__PHI_TEMPORARY = (&_2970);   /* for PHI node */
  goto _3337;

_3339:
  _3087 = *(uint64_t*)_2978;
  if (((_3087 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _3346;
  } else {
    goto _3347;
  }

_3346:
  _3088 = *(void**)_2967;
  _3089 = ((&((uint8_t*)_3088)[((int64_t)16)]));
  _3090 = *(uint64_t*)_3089;
  _3091 = ((&((uint8_t*)_3088)[((int64_t)8)]));
  _3092 = *(uint64_t*)_3091;
  if ((((int64_t)_3092) > ((int64_t)_3090))) {
    goto _3348;
  } else {
    _3109__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3349;
  }

_3348:
  _3093 = *(void**)_3088;
  _3094 = *(uint8_t*)(((&((uint8_t*)_3093)[((int64_t)_3090)])));
  *(uint64_t*)_3089 = (llvm_add_u64(_3090, 1));
  _3095 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3094)), 0);
  _3096 = llvm_sub_u8(32, (llvm_shl_u8(_3095, 3)));
  _3097 = (((uint32_t)(uint8_t)_3094)) << 24;
  if ((((uint8_t)_3096) > ((uint8_t)((uint8_t)16)))) {
    _3109__PHI_TEMPORARY = _3097;   /* for PHI node */
    goto _3349;
  } else {
    _3098__PHI_TEMPORARY = 16;   /* for PHI node */
    _3099__PHI_TEMPORARY = _3097;   /* for PHI node */
    goto _3350;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3350:
  _3098 = _3098__PHI_TEMPORARY;
  _3099 = _3099__PHI_TEMPORARY;
  if (((((int64_t)_3098) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3098) < ((uint64_t)(((uint64_t)(uint8_t)_3096)))))) {
    _3109__PHI_TEMPORARY = _3099;   /* for PHI node */
    goto _3349;
  } else {
    goto _3351;
  }

_3351:
  _3100 = *(uint64_t*)_3089;
  _3101 = *(uint64_t*)_3091;
  if ((((int64_t)_3101) > ((int64_t)_3100))) {
    goto _3352;
  } else {
    _3109__PHI_TEMPORARY = _3099;   /* for PHI node */
    goto _3349;
  }

_3352:
  _3102 = *(void**)_3088;
  _3103 = *(uint8_t*)(((&((uint8_t*)_3102)[((int64_t)_3100)])));
  if ((((int8_t)_3103) > ((int8_t)((uint8_t)-65)))) {
    _3109__PHI_TEMPORARY = _3099;   /* for PHI node */
    goto _3349;
  } else {
    goto _3353;
  }

_3353:
  _3104 = llvm_select_u32((((int64_t)_3100) < ((int64_t)_3101)), (((uint32_t)(uint8_t)_3103)), 0);
  _3105 = *(uint64_t*)_3089;
  *(uint64_t*)_3089 = (llvm_add_u64(_3105, 1));
  _3106 = llvm_neg_u64(_3098);
  _3107 = _3099 | (llvm_select_u32((((int64_t)_3098) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3106) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3104, (((uint32_t)_3106)))))), (llvm_select_u32((((uint64_t)_3098) > ((uint64_t)UINT64_C(31))), 0, (_3104 << (((uint32_t)_3098)))))));
  _3108 = llvm_add_u64(_3098, -8);
  _3098__PHI_TEMPORARY = _3108;   /* for PHI node */
  _3099__PHI_TEMPORARY = _3107;   /* for PHI node */
  goto _3350;

  } while (1); /* end of syntactic loop '' */
_3349:
  _3109 = _3109__PHI_TEMPORARY;
  _3110 = *(uint64_t*)_2978;
  _3111 = *(uint64_t*)_2980;
  _3112 = jsyn_cbe_fshl_i64(_3111, _3110, 32);
  _3113 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3109)), _3111, 32);
  *(uint64_t*)_2978 = _3112;
  *(uint64_t*)_2980 = _3113;
  _3114 = ((&((uint8_t*)_2967)[((int64_t)56)]));
  _3115 = *(uint64_t*)_3114;
  _3116 = ((&((uint8_t*)_2967)[((int64_t)64)]));
  _3117 = *(uint64_t*)_3116;
  _3118 = ((&((uint8_t*)_2967)[((int64_t)72)]));
  _3119 = *(uint64_t*)_3118;
  _3120 = *(void**)_2967;
  _3121 = *(uint64_t*)(((&((uint8_t*)_3120)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2967)[((int64_t)48)]))) = _3115;
  *(uint64_t*)_3114 = _3117;
  *(uint64_t*)_3116 = _3119;
  *(uint64_t*)_3118 = _3121;
  julia_emit_11((&_2971), _2966, _2967, 236, 1);
  _3050__PHI_TEMPORARY = (&_2971);   /* for PHI node */
  goto _3337;

_3347:
  _3122 = *(uint64_t*)_2978;
  if (((_3122 & INT64_C(-4294967296)) == UINT64_C(8935141660703064064))) {
    goto _3354;
  } else {
    goto _3355;
  }

_3354:
  _3123 = *(void**)_2967;
  _3124 = ((&((uint8_t*)_3123)[((int64_t)16)]));
  _3125 = *(uint64_t*)_3124;
  _3126 = ((&((uint8_t*)_3123)[((int64_t)8)]));
  _3127 = *(uint64_t*)_3126;
  if ((((int64_t)_3127) > ((int64_t)_3125))) {
    goto _3356;
  } else {
    _3144__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3357;
  }

_3356:
  _3128 = *(void**)_3123;
  _3129 = *(uint8_t*)(((&((uint8_t*)_3128)[((int64_t)_3125)])));
  *(uint64_t*)_3124 = (llvm_add_u64(_3125, 1));
  _3130 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3129)), 0);
  _3131 = llvm_sub_u8(32, (llvm_shl_u8(_3130, 3)));
  _3132 = (((uint32_t)(uint8_t)_3129)) << 24;
  if ((((uint8_t)_3131) > ((uint8_t)((uint8_t)16)))) {
    _3144__PHI_TEMPORARY = _3132;   /* for PHI node */
    goto _3357;
  } else {
    _3133__PHI_TEMPORARY = 16;   /* for PHI node */
    _3134__PHI_TEMPORARY = _3132;   /* for PHI node */
    goto _3358;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3358:
  _3133 = _3133__PHI_TEMPORARY;
  _3134 = _3134__PHI_TEMPORARY;
  if (((((int64_t)_3133) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3133) < ((uint64_t)(((uint64_t)(uint8_t)_3131)))))) {
    _3144__PHI_TEMPORARY = _3134;   /* for PHI node */
    goto _3357;
  } else {
    goto _3359;
  }

_3359:
  _3135 = *(uint64_t*)_3124;
  _3136 = *(uint64_t*)_3126;
  if ((((int64_t)_3136) > ((int64_t)_3135))) {
    goto _3360;
  } else {
    _3144__PHI_TEMPORARY = _3134;   /* for PHI node */
    goto _3357;
  }

_3360:
  _3137 = *(void**)_3123;
  _3138 = *(uint8_t*)(((&((uint8_t*)_3137)[((int64_t)_3135)])));
  if ((((int8_t)_3138) > ((int8_t)((uint8_t)-65)))) {
    _3144__PHI_TEMPORARY = _3134;   /* for PHI node */
    goto _3357;
  } else {
    goto _3361;
  }

_3361:
  _3139 = llvm_select_u32((((int64_t)_3135) < ((int64_t)_3136)), (((uint32_t)(uint8_t)_3138)), 0);
  _3140 = *(uint64_t*)_3124;
  *(uint64_t*)_3124 = (llvm_add_u64(_3140, 1));
  _3141 = llvm_neg_u64(_3133);
  _3142 = _3134 | (llvm_select_u32((((int64_t)_3133) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3141) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3139, (((uint32_t)_3141)))))), (llvm_select_u32((((uint64_t)_3133) > ((uint64_t)UINT64_C(31))), 0, (_3139 << (((uint32_t)_3133)))))));
  _3143 = llvm_add_u64(_3133, -8);
  _3133__PHI_TEMPORARY = _3143;   /* for PHI node */
  _3134__PHI_TEMPORARY = _3142;   /* for PHI node */
  goto _3358;

  } while (1); /* end of syntactic loop '' */
_3357:
  _3144 = _3144__PHI_TEMPORARY;
  _3145 = *(uint64_t*)_2978;
  _3146 = *(uint64_t*)_2980;
  _3147 = jsyn_cbe_fshl_i64(_3146, _3145, 32);
  _3148 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3144)), _3146, 32);
  *(uint64_t*)_2978 = _3147;
  *(uint64_t*)_2980 = _3148;
  _3149 = ((&((uint8_t*)_2967)[((int64_t)56)]));
  _3150 = *(uint64_t*)_3149;
  _3151 = ((&((uint8_t*)_2967)[((int64_t)64)]));
  _3152 = *(uint64_t*)_3151;
  _3153 = ((&((uint8_t*)_2967)[((int64_t)72)]));
  _3154 = *(uint64_t*)_3153;
  _3155 = *(void**)_2967;
  _3156 = *(uint64_t*)(((&((uint8_t*)_3155)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2967)[((int64_t)48)]))) = _3150;
  *(uint64_t*)_3149 = _3152;
  *(uint64_t*)_3151 = _3154;
  *(uint64_t*)_3153 = _3156;
  julia_emit_11((&_2972), _2966, _2967, 524, 1);
  _3050__PHI_TEMPORARY = (&_2972);   /* for PHI node */
  goto _3337;

_3355:
  _3157 = *(uint64_t*)_2978;
  _3158 = *(uint64_t*)_2980;
  if ((llvm_select_bool(((_3157 & INT64_C(-4294967296)) != UINT64_C(3242591731706757120)), 1, ((_3158 & INT64_C(4294967295)) != UINT64_C(754974720))))) {
    goto _3362;
  } else {
    goto _3363;
  }

_3363:
  _3159 = *(void**)_2967;
  _3160 = ((&((uint8_t*)_3159)[((int64_t)16)]));
  _3161 = *(uint64_t*)_3160;
  _3162 = ((&((uint8_t*)_3159)[((int64_t)8)]));
  _3163 = *(uint64_t*)_3162;
  if ((((int64_t)_3163) > ((int64_t)_3161))) {
    goto _3364;
  } else {
    _3180__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3365;
  }

_3364:
  _3164 = *(void**)_3159;
  _3165 = *(uint8_t*)(((&((uint8_t*)_3164)[((int64_t)_3161)])));
  *(uint64_t*)_3160 = (llvm_add_u64(_3161, 1));
  _3166 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3165)), 0);
  _3167 = llvm_sub_u8(32, (llvm_shl_u8(_3166, 3)));
  _3168 = (((uint32_t)(uint8_t)_3165)) << 24;
  if ((((uint8_t)_3167) > ((uint8_t)((uint8_t)16)))) {
    _3180__PHI_TEMPORARY = _3168;   /* for PHI node */
    goto _3365;
  } else {
    _3169__PHI_TEMPORARY = 16;   /* for PHI node */
    _3170__PHI_TEMPORARY = _3168;   /* for PHI node */
    goto _3366;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3366:
  _3169 = _3169__PHI_TEMPORARY;
  _3170 = _3170__PHI_TEMPORARY;
  if (((((int64_t)_3169) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3169) < ((uint64_t)(((uint64_t)(uint8_t)_3167)))))) {
    _3180__PHI_TEMPORARY = _3170;   /* for PHI node */
    goto _3365;
  } else {
    goto _3367;
  }

_3367:
  _3171 = *(uint64_t*)_3160;
  _3172 = *(uint64_t*)_3162;
  if ((((int64_t)_3172) > ((int64_t)_3171))) {
    goto _3368;
  } else {
    _3180__PHI_TEMPORARY = _3170;   /* for PHI node */
    goto _3365;
  }

_3368:
  _3173 = *(void**)_3159;
  _3174 = *(uint8_t*)(((&((uint8_t*)_3173)[((int64_t)_3171)])));
  if ((((int8_t)_3174) > ((int8_t)((uint8_t)-65)))) {
    _3180__PHI_TEMPORARY = _3170;   /* for PHI node */
    goto _3365;
  } else {
    goto _3369;
  }

_3369:
  _3175 = llvm_select_u32((((int64_t)_3171) < ((int64_t)_3172)), (((uint32_t)(uint8_t)_3174)), 0);
  _3176 = *(uint64_t*)_3160;
  *(uint64_t*)_3160 = (llvm_add_u64(_3176, 1));
  _3177 = llvm_neg_u64(_3169);
  _3178 = _3170 | (llvm_select_u32((((int64_t)_3169) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3177) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3175, (((uint32_t)_3177)))))), (llvm_select_u32((((uint64_t)_3169) > ((uint64_t)UINT64_C(31))), 0, (_3175 << (((uint32_t)_3169)))))));
  _3179 = llvm_add_u64(_3169, -8);
  _3169__PHI_TEMPORARY = _3179;   /* for PHI node */
  _3170__PHI_TEMPORARY = _3178;   /* for PHI node */
  goto _3366;

  } while (1); /* end of syntactic loop '' */
_3365:
  _3180 = _3180__PHI_TEMPORARY;
  _3181 = *(uint64_t*)_2978;
  _3182 = *(uint64_t*)_2980;
  _3183 = jsyn_cbe_fshl_i64(_3182, _3181, 32);
  _3184 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3180)), _3182, 32);
  *(uint64_t*)_2978 = _3183;
  *(uint64_t*)_2980 = _3184;
  _3185 = ((&((uint8_t*)_2967)[((int64_t)48)]));
  _3186 = ((&((uint8_t*)_2967)[((int64_t)56)]));
  _3187 = *(uint64_t*)_3186;
  _3188 = ((&((uint8_t*)_2967)[((int64_t)64)]));
  _3189 = *(uint64_t*)_3188;
  _3190 = ((&((uint8_t*)_2967)[((int64_t)72)]));
  _3191 = *(uint64_t*)_3190;
  _3192 = *(void**)_2967;
  _3193 = *(uint64_t*)(((&((uint8_t*)_3192)[((int64_t)16)])));
  *(uint64_t*)_3185 = _3187;
  *(uint64_t*)_3186 = _3189;
  *(uint64_t*)_3188 = _3191;
  *(uint64_t*)_3190 = _3193;
  _3194 = *(void**)_2967;
  _3195 = ((&((uint8_t*)_3194)[((int64_t)16)]));
  _3196 = *(uint64_t*)_3195;
  _3197 = ((&((uint8_t*)_3194)[((int64_t)8)]));
  _3198 = *(uint64_t*)_3197;
  if ((((int64_t)_3198) > ((int64_t)_3196))) {
    goto _3370;
  } else {
    _3215__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3371;
  }

_3370:
  _3199 = *(void**)_3194;
  _3200 = *(uint8_t*)(((&((uint8_t*)_3199)[((int64_t)_3196)])));
  *(uint64_t*)_3195 = (llvm_add_u64(_3196, 1));
  _3201 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3200)), 0);
  _3202 = llvm_sub_u8(32, (llvm_shl_u8(_3201, 3)));
  _3203 = (((uint32_t)(uint8_t)_3200)) << 24;
  if ((((uint8_t)_3202) > ((uint8_t)((uint8_t)16)))) {
    _3215__PHI_TEMPORARY = _3203;   /* for PHI node */
    goto _3371;
  } else {
    _3204__PHI_TEMPORARY = 16;   /* for PHI node */
    _3205__PHI_TEMPORARY = _3203;   /* for PHI node */
    goto _3372;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3372:
  _3204 = _3204__PHI_TEMPORARY;
  _3205 = _3205__PHI_TEMPORARY;
  if (((((int64_t)_3204) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3204) < ((uint64_t)(((uint64_t)(uint8_t)_3202)))))) {
    _3215__PHI_TEMPORARY = _3205;   /* for PHI node */
    goto _3371;
  } else {
    goto _3373;
  }

_3373:
  _3206 = *(uint64_t*)_3195;
  _3207 = *(uint64_t*)_3197;
  if ((((int64_t)_3207) > ((int64_t)_3206))) {
    goto _3374;
  } else {
    _3215__PHI_TEMPORARY = _3205;   /* for PHI node */
    goto _3371;
  }

_3374:
  _3208 = *(void**)_3194;
  _3209 = *(uint8_t*)(((&((uint8_t*)_3208)[((int64_t)_3206)])));
  if ((((int8_t)_3209) > ((int8_t)((uint8_t)-65)))) {
    _3215__PHI_TEMPORARY = _3205;   /* for PHI node */
    goto _3371;
  } else {
    goto _3375;
  }

_3375:
  _3210 = llvm_select_u32((((int64_t)_3206) < ((int64_t)_3207)), (((uint32_t)(uint8_t)_3209)), 0);
  _3211 = *(uint64_t*)_3195;
  *(uint64_t*)_3195 = (llvm_add_u64(_3211, 1));
  _3212 = llvm_neg_u64(_3204);
  _3213 = _3205 | (llvm_select_u32((((int64_t)_3204) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3212) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3210, (((uint32_t)_3212)))))), (llvm_select_u32((((uint64_t)_3204) > ((uint64_t)UINT64_C(31))), 0, (_3210 << (((uint32_t)_3204)))))));
  _3214 = llvm_add_u64(_3204, -8);
  _3204__PHI_TEMPORARY = _3214;   /* for PHI node */
  _3205__PHI_TEMPORARY = _3213;   /* for PHI node */
  goto _3372;

  } while (1); /* end of syntactic loop '' */
_3371:
  _3215 = _3215__PHI_TEMPORARY;
  _3216 = *(uint64_t*)_2978;
  _3217 = *(uint64_t*)_2980;
  _3218 = jsyn_cbe_fshl_i64(_3217, _3216, 32);
  _3219 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3215)), _3217, 32);
  *(uint64_t*)_2978 = _3218;
  *(uint64_t*)_2980 = _3219;
  _3220 = *(uint64_t*)_3186;
  _3221 = *(uint64_t*)_3188;
  _3222 = *(uint64_t*)_3190;
  _3223 = *(void**)_2967;
  _3224 = *(uint64_t*)(((&((uint8_t*)_3223)[((int64_t)16)])));
  *(uint64_t*)_3185 = _3220;
  *(uint64_t*)_3186 = _3221;
  *(uint64_t*)_3188 = _3222;
  *(uint64_t*)_3190 = _3224;
  _3225 = *(uint64_t*)_2978;
  if (((_3225 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _3376;
  } else {
    goto _3377;
  }

_3376:
  _3226 = *(void**)_2967;
  _3227 = ((&((uint8_t*)_3226)[((int64_t)16)]));
  _3228 = *(uint64_t*)_3227;
  _3229 = ((&((uint8_t*)_3226)[((int64_t)8)]));
  _3230 = *(uint64_t*)_3229;
  if ((((int64_t)_3230) > ((int64_t)_3228))) {
    goto _3378;
  } else {
    _3247__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3379;
  }

_3378:
  _3231 = *(void**)_3226;
  _3232 = *(uint8_t*)(((&((uint8_t*)_3231)[((int64_t)_3228)])));
  *(uint64_t*)_3227 = (llvm_add_u64(_3228, 1));
  _3233 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3232)), 0);
  _3234 = llvm_sub_u8(32, (llvm_shl_u8(_3233, 3)));
  _3235 = (((uint32_t)(uint8_t)_3232)) << 24;
  if ((((uint8_t)_3234) > ((uint8_t)((uint8_t)16)))) {
    _3247__PHI_TEMPORARY = _3235;   /* for PHI node */
    goto _3379;
  } else {
    _3236__PHI_TEMPORARY = 16;   /* for PHI node */
    _3237__PHI_TEMPORARY = _3235;   /* for PHI node */
    goto _3380;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3380:
  _3236 = _3236__PHI_TEMPORARY;
  _3237 = _3237__PHI_TEMPORARY;
  if (((((int64_t)_3236) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3236) < ((uint64_t)(((uint64_t)(uint8_t)_3234)))))) {
    _3247__PHI_TEMPORARY = _3237;   /* for PHI node */
    goto _3379;
  } else {
    goto _3381;
  }

_3381:
  _3238 = *(uint64_t*)_3227;
  _3239 = *(uint64_t*)_3229;
  if ((((int64_t)_3239) > ((int64_t)_3238))) {
    goto _3382;
  } else {
    _3247__PHI_TEMPORARY = _3237;   /* for PHI node */
    goto _3379;
  }

_3382:
  _3240 = *(void**)_3226;
  _3241 = *(uint8_t*)(((&((uint8_t*)_3240)[((int64_t)_3238)])));
  if ((((int8_t)_3241) > ((int8_t)((uint8_t)-65)))) {
    _3247__PHI_TEMPORARY = _3237;   /* for PHI node */
    goto _3379;
  } else {
    goto _3383;
  }

_3383:
  _3242 = llvm_select_u32((((int64_t)_3238) < ((int64_t)_3239)), (((uint32_t)(uint8_t)_3241)), 0);
  _3243 = *(uint64_t*)_3227;
  *(uint64_t*)_3227 = (llvm_add_u64(_3243, 1));
  _3244 = llvm_neg_u64(_3236);
  _3245 = _3237 | (llvm_select_u32((((int64_t)_3236) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3244) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3242, (((uint32_t)_3244)))))), (llvm_select_u32((((uint64_t)_3236) > ((uint64_t)UINT64_C(31))), 0, (_3242 << (((uint32_t)_3236)))))));
  _3246 = llvm_add_u64(_3236, -8);
  _3236__PHI_TEMPORARY = _3246;   /* for PHI node */
  _3237__PHI_TEMPORARY = _3245;   /* for PHI node */
  goto _3380;

  } while (1); /* end of syntactic loop '' */
_3379:
  _3247 = _3247__PHI_TEMPORARY;
  _3248 = *(uint64_t*)_2978;
  _3249 = *(uint64_t*)_2980;
  _3250 = jsyn_cbe_fshl_i64(_3249, _3248, 32);
  _3251 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3247)), _3249, 32);
  *(uint64_t*)_2978 = _3250;
  *(uint64_t*)_2980 = _3251;
  _3252 = *(uint64_t*)_3186;
  _3253 = *(uint64_t*)_3188;
  _3254 = *(uint64_t*)_3190;
  _3255 = *(void**)_2967;
  _3256 = *(uint64_t*)(((&((uint8_t*)_3255)[((int64_t)16)])));
  *(uint64_t*)_3185 = _3252;
  *(uint64_t*)_3186 = _3253;
  *(uint64_t*)_3188 = _3254;
  *(uint64_t*)_3190 = _3256;
  julia_emit_11((&_2973), _2966, _2967, 66, 1);
  _3050__PHI_TEMPORARY = (&_2973);   /* for PHI node */
  goto _3337;

_3377:
  _3257 = *(uint64_t*)_2978;
  if (((_3257 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _3384;
  } else {
    goto _3385;
  }

_3384:
  _3258 = *(void**)_2967;
  _3259 = ((&((uint8_t*)_3258)[((int64_t)16)]));
  _3260 = *(uint64_t*)_3259;
  _3261 = ((&((uint8_t*)_3258)[((int64_t)8)]));
  _3262 = *(uint64_t*)_3261;
  if ((((int64_t)_3262) > ((int64_t)_3260))) {
    goto _3386;
  } else {
    _3279__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3387;
  }

_3386:
  _3263 = *(void**)_3258;
  _3264 = *(uint8_t*)(((&((uint8_t*)_3263)[((int64_t)_3260)])));
  *(uint64_t*)_3259 = (llvm_add_u64(_3260, 1));
  _3265 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3264)), 0);
  _3266 = llvm_sub_u8(32, (llvm_shl_u8(_3265, 3)));
  _3267 = (((uint32_t)(uint8_t)_3264)) << 24;
  if ((((uint8_t)_3266) > ((uint8_t)((uint8_t)16)))) {
    _3279__PHI_TEMPORARY = _3267;   /* for PHI node */
    goto _3387;
  } else {
    _3268__PHI_TEMPORARY = 16;   /* for PHI node */
    _3269__PHI_TEMPORARY = _3267;   /* for PHI node */
    goto _3388;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3388:
  _3268 = _3268__PHI_TEMPORARY;
  _3269 = _3269__PHI_TEMPORARY;
  if (((((int64_t)_3268) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3268) < ((uint64_t)(((uint64_t)(uint8_t)_3266)))))) {
    _3279__PHI_TEMPORARY = _3269;   /* for PHI node */
    goto _3387;
  } else {
    goto _3389;
  }

_3389:
  _3270 = *(uint64_t*)_3259;
  _3271 = *(uint64_t*)_3261;
  if ((((int64_t)_3271) > ((int64_t)_3270))) {
    goto _3390;
  } else {
    _3279__PHI_TEMPORARY = _3269;   /* for PHI node */
    goto _3387;
  }

_3390:
  _3272 = *(void**)_3258;
  _3273 = *(uint8_t*)(((&((uint8_t*)_3272)[((int64_t)_3270)])));
  if ((((int8_t)_3273) > ((int8_t)((uint8_t)-65)))) {
    _3279__PHI_TEMPORARY = _3269;   /* for PHI node */
    goto _3387;
  } else {
    goto _3391;
  }

_3391:
  _3274 = llvm_select_u32((((int64_t)_3270) < ((int64_t)_3271)), (((uint32_t)(uint8_t)_3273)), 0);
  _3275 = *(uint64_t*)_3259;
  *(uint64_t*)_3259 = (llvm_add_u64(_3275, 1));
  _3276 = llvm_neg_u64(_3268);
  _3277 = _3269 | (llvm_select_u32((((int64_t)_3268) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3276) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3274, (((uint32_t)_3276)))))), (llvm_select_u32((((uint64_t)_3268) > ((uint64_t)UINT64_C(31))), 0, (_3274 << (((uint32_t)_3268)))))));
  _3278 = llvm_add_u64(_3268, -8);
  _3268__PHI_TEMPORARY = _3278;   /* for PHI node */
  _3269__PHI_TEMPORARY = _3277;   /* for PHI node */
  goto _3388;

  } while (1); /* end of syntactic loop '' */
_3387:
  _3279 = _3279__PHI_TEMPORARY;
  _3280 = *(uint64_t*)_2978;
  _3281 = *(uint64_t*)_2980;
  _3282 = jsyn_cbe_fshl_i64(_3281, _3280, 32);
  _3283 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3279)), _3281, 32);
  *(uint64_t*)_2978 = _3282;
  *(uint64_t*)_2980 = _3283;
  _3284 = *(uint64_t*)_3186;
  _3285 = *(uint64_t*)_3188;
  _3286 = *(uint64_t*)_3190;
  _3287 = *(void**)_2967;
  _3288 = *(uint64_t*)(((&((uint8_t*)_3287)[((int64_t)16)])));
  *(uint64_t*)_3185 = _3284;
  *(uint64_t*)_3186 = _3285;
  *(uint64_t*)_3188 = _3286;
  *(uint64_t*)_3190 = _3288;
  julia_emit_11((&_2974), _2966, _2967, 82, 1);
  _3050__PHI_TEMPORARY = (&_2974);   /* for PHI node */
  goto _3337;

_3385:
  _3289 = *(uint64_t*)_2978;
  if (((_3289 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _3392;
  } else {
    goto _3393;
  }

_3392:
  _3290 = *(void**)_2967;
  _3291 = ((&((uint8_t*)_3290)[((int64_t)16)]));
  _3292 = *(uint64_t*)_3291;
  _3293 = ((&((uint8_t*)_3290)[((int64_t)8)]));
  _3294 = *(uint64_t*)_3293;
  if ((((int64_t)_3294) > ((int64_t)_3292))) {
    goto _3394;
  } else {
    _3311__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3395;
  }

_3394:
  _3295 = *(void**)_3290;
  _3296 = *(uint8_t*)(((&((uint8_t*)_3295)[((int64_t)_3292)])));
  *(uint64_t*)_3291 = (llvm_add_u64(_3292, 1));
  _3297 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3296)), 0);
  _3298 = llvm_sub_u8(32, (llvm_shl_u8(_3297, 3)));
  _3299 = (((uint32_t)(uint8_t)_3296)) << 24;
  if ((((uint8_t)_3298) > ((uint8_t)((uint8_t)16)))) {
    _3311__PHI_TEMPORARY = _3299;   /* for PHI node */
    goto _3395;
  } else {
    _3300__PHI_TEMPORARY = 16;   /* for PHI node */
    _3301__PHI_TEMPORARY = _3299;   /* for PHI node */
    goto _3396;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3396:
  _3300 = _3300__PHI_TEMPORARY;
  _3301 = _3301__PHI_TEMPORARY;
  if (((((int64_t)_3300) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3300) < ((uint64_t)(((uint64_t)(uint8_t)_3298)))))) {
    _3311__PHI_TEMPORARY = _3301;   /* for PHI node */
    goto _3395;
  } else {
    goto _3397;
  }

_3397:
  _3302 = *(uint64_t*)_3291;
  _3303 = *(uint64_t*)_3293;
  if ((((int64_t)_3303) > ((int64_t)_3302))) {
    goto _3398;
  } else {
    _3311__PHI_TEMPORARY = _3301;   /* for PHI node */
    goto _3395;
  }

_3398:
  _3304 = *(void**)_3290;
  _3305 = *(uint8_t*)(((&((uint8_t*)_3304)[((int64_t)_3302)])));
  if ((((int8_t)_3305) > ((int8_t)((uint8_t)-65)))) {
    _3311__PHI_TEMPORARY = _3301;   /* for PHI node */
    goto _3395;
  } else {
    goto _3399;
  }

_3399:
  _3306 = llvm_select_u32((((int64_t)_3302) < ((int64_t)_3303)), (((uint32_t)(uint8_t)_3305)), 0);
  _3307 = *(uint64_t*)_3291;
  *(uint64_t*)_3291 = (llvm_add_u64(_3307, 1));
  _3308 = llvm_neg_u64(_3300);
  _3309 = _3301 | (llvm_select_u32((((int64_t)_3300) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3308) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3306, (((uint32_t)_3308)))))), (llvm_select_u32((((uint64_t)_3300) > ((uint64_t)UINT64_C(31))), 0, (_3306 << (((uint32_t)_3300)))))));
  _3310 = llvm_add_u64(_3300, -8);
  _3300__PHI_TEMPORARY = _3310;   /* for PHI node */
  _3301__PHI_TEMPORARY = _3309;   /* for PHI node */
  goto _3396;

  } while (1); /* end of syntactic loop '' */
_3395:
  _3311 = _3311__PHI_TEMPORARY;
  _3312 = *(uint64_t*)_2978;
  _3313 = *(uint64_t*)_2980;
  _3314 = jsyn_cbe_fshl_i64(_3313, _3312, 32);
  _3315 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3311)), _3313, 32);
  *(uint64_t*)_2978 = _3314;
  *(uint64_t*)_2980 = _3315;
  _3316 = *(uint64_t*)_3186;
  _3317 = *(uint64_t*)_3188;
  _3318 = *(uint64_t*)_3190;
  _3319 = *(void**)_2967;
  _3320 = *(uint64_t*)(((&((uint8_t*)_3319)[((int64_t)16)])));
  *(uint64_t*)_3185 = _3316;
  *(uint64_t*)_3186 = _3317;
  *(uint64_t*)_3188 = _3318;
  *(uint64_t*)_3190 = _3320;
  julia_emit_11((&_2975), _2966, _2967, 66, 1);
  _3050__PHI_TEMPORARY = (&_2975);   /* for PHI node */
  goto _3337;

_3393:
  julia_emit_11((&_2976), _2966, _2967, 81, 1);
  _3050__PHI_TEMPORARY = (&_2976);   /* for PHI node */
  goto _3337;

_3362:
  julia_emit_11((&_2977), _2966, _2967, 239, 1);
  _3050__PHI_TEMPORARY = (&_2977);   /* for PHI node */
  goto _3337;

}


static void julia_lex_colon_28(void* _3400, void* _3401, void* _3402) {
  struct l_array_4_uint64_t _3403;    /* Address-exposed local */
  struct l_array_4_uint64_t _3404;    /* Address-exposed local */
  struct l_array_4_uint64_t _3405;    /* Address-exposed local */
  void* _3406;
  uint64_t _3407;
  void* _3408;
  void* _3409;
  void* _3410;
  uint64_t _3411;
  void* _3412;
  uint64_t _3413;
  void* _3414;
  uint8_t _3415;
  uint8_t _3416;
  uint8_t _3417;
  uint32_t _3418;
  uint64_t _3419;
  uint64_t _3419__PHI_TEMPORARY;
  uint32_t _3420;
  uint32_t _3420__PHI_TEMPORARY;
  uint64_t _3421;
  uint64_t _3422;
  void* _3423;
  uint8_t _3424;
  uint32_t _3425;
  uint64_t _3426;
  uint64_t _3427;
  uint32_t _3428;
  uint64_t _3429;
  uint32_t _3430;
  uint32_t _3430__PHI_TEMPORARY;
  uint64_t _3431;
  uint64_t _3432;
  uint64_t _3433;
  uint64_t _3434;
  void* _3435;
  uint64_t _3436;
  void* _3437;
  uint64_t _3438;
  void* _3439;
  uint64_t _3440;
  void* _3441;
  uint64_t _3442;
  void* _3443;
  void* _3443__PHI_TEMPORARY;
  void* _3444;
  uint64_t _3445;
  void* _3446;
  void* _3447;
  uint64_t _3448;
  void* _3449;
  uint64_t _3450;
  void* _3451;
  uint8_t _3452;
  uint8_t _3453;
  uint8_t _3454;
  uint32_t _3455;
  uint64_t _3456;
  uint64_t _3456__PHI_TEMPORARY;
  uint32_t _3457;
  uint32_t _3457__PHI_TEMPORARY;
  uint64_t _3458;
  uint64_t _3459;
  void* _3460;
  uint8_t _3461;
  uint32_t _3462;
  uint64_t _3463;
  uint64_t _3464;
  uint32_t _3465;
  uint64_t _3466;
  uint32_t _3467;
  uint32_t _3467__PHI_TEMPORARY;
  uint64_t _3468;
  uint64_t _3469;
  uint64_t _3470;
  uint64_t _3471;
  void* _3472;
  uint64_t _3473;
  void* _3474;
  uint64_t _3475;
  void* _3476;
  uint64_t _3477;
  void* _3478;
  uint64_t _3479;

  _3406 = ((&((uint8_t*)_3402)[((int64_t)32)]));
  _3407 = *(uint64_t*)_3406;
  _3408 = ((&((uint8_t*)_3402)[((int64_t)40)]));
  if (((_3407 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _3480;
  } else {
    goto _3481;
  }

_3480:
  _3409 = *(void**)_3402;
  _3410 = ((&((uint8_t*)_3409)[((int64_t)16)]));
  _3411 = *(uint64_t*)_3410;
  _3412 = ((&((uint8_t*)_3409)[((int64_t)8)]));
  _3413 = *(uint64_t*)_3412;
  if ((((int64_t)_3413) > ((int64_t)_3411))) {
    goto _3482;
  } else {
    _3430__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3483;
  }

_3482:
  _3414 = *(void**)_3409;
  _3415 = *(uint8_t*)(((&((uint8_t*)_3414)[((int64_t)_3411)])));
  *(uint64_t*)_3410 = (llvm_add_u64(_3411, 1));
  _3416 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3415)), 0);
  _3417 = llvm_sub_u8(32, (llvm_shl_u8(_3416, 3)));
  _3418 = (((uint32_t)(uint8_t)_3415)) << 24;
  if ((((uint8_t)_3417) > ((uint8_t)((uint8_t)16)))) {
    _3430__PHI_TEMPORARY = _3418;   /* for PHI node */
    goto _3483;
  } else {
    _3419__PHI_TEMPORARY = 16;   /* for PHI node */
    _3420__PHI_TEMPORARY = _3418;   /* for PHI node */
    goto _3484;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3484:
  _3419 = _3419__PHI_TEMPORARY;
  _3420 = _3420__PHI_TEMPORARY;
  if (((((int64_t)_3419) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3419) < ((uint64_t)(((uint64_t)(uint8_t)_3417)))))) {
    _3430__PHI_TEMPORARY = _3420;   /* for PHI node */
    goto _3483;
  } else {
    goto _3485;
  }

_3485:
  _3421 = *(uint64_t*)_3410;
  _3422 = *(uint64_t*)_3412;
  if ((((int64_t)_3422) > ((int64_t)_3421))) {
    goto _3486;
  } else {
    _3430__PHI_TEMPORARY = _3420;   /* for PHI node */
    goto _3483;
  }

_3486:
  _3423 = *(void**)_3409;
  _3424 = *(uint8_t*)(((&((uint8_t*)_3423)[((int64_t)_3421)])));
  if ((((int8_t)_3424) > ((int8_t)((uint8_t)-65)))) {
    _3430__PHI_TEMPORARY = _3420;   /* for PHI node */
    goto _3483;
  } else {
    goto _3487;
  }

_3487:
  _3425 = llvm_select_u32((((int64_t)_3421) < ((int64_t)_3422)), (((uint32_t)(uint8_t)_3424)), 0);
  _3426 = *(uint64_t*)_3410;
  *(uint64_t*)_3410 = (llvm_add_u64(_3426, 1));
  _3427 = llvm_neg_u64(_3419);
  _3428 = _3420 | (llvm_select_u32((((int64_t)_3419) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3427) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3425, (((uint32_t)_3427)))))), (llvm_select_u32((((uint64_t)_3419) > ((uint64_t)UINT64_C(31))), 0, (_3425 << (((uint32_t)_3419)))))));
  _3429 = llvm_add_u64(_3419, -8);
  _3419__PHI_TEMPORARY = _3429;   /* for PHI node */
  _3420__PHI_TEMPORARY = _3428;   /* for PHI node */
  goto _3484;

  } while (1); /* end of syntactic loop '' */
_3483:
  _3430 = _3430__PHI_TEMPORARY;
  _3431 = *(uint64_t*)_3406;
  _3432 = *(uint64_t*)_3408;
  _3433 = jsyn_cbe_fshl_i64(_3432, _3431, 32);
  _3434 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3430)), _3432, 32);
  *(uint64_t*)_3406 = _3433;
  *(uint64_t*)_3408 = _3434;
  _3435 = ((&((uint8_t*)_3402)[((int64_t)56)]));
  _3436 = *(uint64_t*)_3435;
  _3437 = ((&((uint8_t*)_3402)[((int64_t)64)]));
  _3438 = *(uint64_t*)_3437;
  _3439 = ((&((uint8_t*)_3402)[((int64_t)72)]));
  _3440 = *(uint64_t*)_3439;
  _3441 = *(void**)_3402;
  _3442 = *(uint64_t*)(((&((uint8_t*)_3441)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3402)[((int64_t)48)]))) = _3436;
  *(uint64_t*)_3435 = _3438;
  *(uint64_t*)_3437 = _3440;
  *(uint64_t*)_3439 = _3442;
  julia_emit_11((&_3403), _3401, _3402, 705, 1);
  _3443__PHI_TEMPORARY = (&_3403);   /* for PHI node */
  goto _3488;

_3488:
  _3443 = _3443__PHI_TEMPORARY;
  _3444 = memcpy(_3400, _3443, 32);
  return;
_3481:
  _3445 = *(uint64_t*)_3406;
  if (((_3445 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3489;
  } else {
    goto _3490;
  }

_3489:
  _3446 = *(void**)_3402;
  _3447 = ((&((uint8_t*)_3446)[((int64_t)16)]));
  _3448 = *(uint64_t*)_3447;
  _3449 = ((&((uint8_t*)_3446)[((int64_t)8)]));
  _3450 = *(uint64_t*)_3449;
  if ((((int64_t)_3450) > ((int64_t)_3448))) {
    goto _3491;
  } else {
    _3467__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3492;
  }

_3491:
  _3451 = *(void**)_3446;
  _3452 = *(uint8_t*)(((&((uint8_t*)_3451)[((int64_t)_3448)])));
  *(uint64_t*)_3447 = (llvm_add_u64(_3448, 1));
  _3453 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3452)), 0);
  _3454 = llvm_sub_u8(32, (llvm_shl_u8(_3453, 3)));
  _3455 = (((uint32_t)(uint8_t)_3452)) << 24;
  if ((((uint8_t)_3454) > ((uint8_t)((uint8_t)16)))) {
    _3467__PHI_TEMPORARY = _3455;   /* for PHI node */
    goto _3492;
  } else {
    _3456__PHI_TEMPORARY = 16;   /* for PHI node */
    _3457__PHI_TEMPORARY = _3455;   /* for PHI node */
    goto _3493;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3493:
  _3456 = _3456__PHI_TEMPORARY;
  _3457 = _3457__PHI_TEMPORARY;
  if (((((int64_t)_3456) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3456) < ((uint64_t)(((uint64_t)(uint8_t)_3454)))))) {
    _3467__PHI_TEMPORARY = _3457;   /* for PHI node */
    goto _3492;
  } else {
    goto _3494;
  }

_3494:
  _3458 = *(uint64_t*)_3447;
  _3459 = *(uint64_t*)_3449;
  if ((((int64_t)_3459) > ((int64_t)_3458))) {
    goto _3495;
  } else {
    _3467__PHI_TEMPORARY = _3457;   /* for PHI node */
    goto _3492;
  }

_3495:
  _3460 = *(void**)_3446;
  _3461 = *(uint8_t*)(((&((uint8_t*)_3460)[((int64_t)_3458)])));
  if ((((int8_t)_3461) > ((int8_t)((uint8_t)-65)))) {
    _3467__PHI_TEMPORARY = _3457;   /* for PHI node */
    goto _3492;
  } else {
    goto _3496;
  }

_3496:
  _3462 = llvm_select_u32((((int64_t)_3458) < ((int64_t)_3459)), (((uint32_t)(uint8_t)_3461)), 0);
  _3463 = *(uint64_t*)_3447;
  *(uint64_t*)_3447 = (llvm_add_u64(_3463, 1));
  _3464 = llvm_neg_u64(_3456);
  _3465 = _3457 | (llvm_select_u32((((int64_t)_3456) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3464) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3462, (((uint32_t)_3464)))))), (llvm_select_u32((((uint64_t)_3456) > ((uint64_t)UINT64_C(31))), 0, (_3462 << (((uint32_t)_3456)))))));
  _3466 = llvm_add_u64(_3456, -8);
  _3456__PHI_TEMPORARY = _3466;   /* for PHI node */
  _3457__PHI_TEMPORARY = _3465;   /* for PHI node */
  goto _3493;

  } while (1); /* end of syntactic loop '' */
_3492:
  _3467 = _3467__PHI_TEMPORARY;
  _3468 = *(uint64_t*)_3406;
  _3469 = *(uint64_t*)_3408;
  _3470 = jsyn_cbe_fshl_i64(_3469, _3468, 32);
  _3471 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3467)), _3469, 32);
  *(uint64_t*)_3406 = _3470;
  *(uint64_t*)_3408 = _3471;
  _3472 = ((&((uint8_t*)_3402)[((int64_t)56)]));
  _3473 = *(uint64_t*)_3472;
  _3474 = ((&((uint8_t*)_3402)[((int64_t)64)]));
  _3475 = *(uint64_t*)_3474;
  _3476 = ((&((uint8_t*)_3402)[((int64_t)72)]));
  _3477 = *(uint64_t*)_3476;
  _3478 = *(void**)_3402;
  _3479 = *(uint64_t*)(((&((uint8_t*)_3478)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3402)[((int64_t)48)]))) = _3473;
  *(uint64_t*)_3472 = _3475;
  *(uint64_t*)_3474 = _3477;
  *(uint64_t*)_3476 = _3479;
  julia_emit_11((&_3404), _3401, _3402, 73, 1);
  _3443__PHI_TEMPORARY = (&_3404);   /* for PHI node */
  goto _3488;

_3490:
  julia_emit_11((&_3405), _3401, _3402, 526, 1);
  _3443__PHI_TEMPORARY = (&_3405);   /* for PHI node */
  goto _3488;

}


static void julia_lex_bar_29(void* _3497, void* _3498, void* _3499) {
  struct l_array_4_uint64_t _3500;    /* Address-exposed local */
  struct l_array_4_uint64_t _3501;    /* Address-exposed local */
  struct l_array_4_uint64_t _3502;    /* Address-exposed local */
  struct l_array_4_uint64_t _3503;    /* Address-exposed local */
  void* _3504;
  uint64_t _3505;
  void* _3506;
  void* _3507;
  void* _3508;
  uint64_t _3509;
  void* _3510;
  uint64_t _3511;
  void* _3512;
  uint8_t _3513;
  uint8_t _3514;
  uint8_t _3515;
  uint32_t _3516;
  uint64_t _3517;
  uint64_t _3517__PHI_TEMPORARY;
  uint32_t _3518;
  uint32_t _3518__PHI_TEMPORARY;
  uint64_t _3519;
  uint64_t _3520;
  void* _3521;
  uint8_t _3522;
  uint32_t _3523;
  uint64_t _3524;
  uint64_t _3525;
  uint32_t _3526;
  uint64_t _3527;
  uint32_t _3528;
  uint32_t _3528__PHI_TEMPORARY;
  uint64_t _3529;
  uint64_t _3530;
  uint64_t _3531;
  uint64_t _3532;
  void* _3533;
  uint64_t _3534;
  void* _3535;
  uint64_t _3536;
  void* _3537;
  uint64_t _3538;
  void* _3539;
  uint64_t _3540;
  void* _3541;
  void* _3541__PHI_TEMPORARY;
  void* _3542;
  uint64_t _3543;
  void* _3544;
  void* _3545;
  uint64_t _3546;
  void* _3547;
  uint64_t _3548;
  void* _3549;
  uint8_t _3550;
  uint8_t _3551;
  uint8_t _3552;
  uint32_t _3553;
  uint64_t _3554;
  uint64_t _3554__PHI_TEMPORARY;
  uint32_t _3555;
  uint32_t _3555__PHI_TEMPORARY;
  uint64_t _3556;
  uint64_t _3557;
  void* _3558;
  uint8_t _3559;
  uint32_t _3560;
  uint64_t _3561;
  uint64_t _3562;
  uint32_t _3563;
  uint64_t _3564;
  uint32_t _3565;
  uint32_t _3565__PHI_TEMPORARY;
  uint64_t _3566;
  uint64_t _3567;
  uint64_t _3568;
  uint64_t _3569;
  void* _3570;
  uint64_t _3571;
  void* _3572;
  uint64_t _3573;
  void* _3574;
  uint64_t _3575;
  void* _3576;
  uint64_t _3577;
  uint64_t _3578;
  void* _3579;
  void* _3580;
  uint64_t _3581;
  void* _3582;
  uint64_t _3583;
  void* _3584;
  uint8_t _3585;
  uint8_t _3586;
  uint8_t _3587;
  uint32_t _3588;
  uint64_t _3589;
  uint64_t _3589__PHI_TEMPORARY;
  uint32_t _3590;
  uint32_t _3590__PHI_TEMPORARY;
  uint64_t _3591;
  uint64_t _3592;
  void* _3593;
  uint8_t _3594;
  uint32_t _3595;
  uint64_t _3596;
  uint64_t _3597;
  uint32_t _3598;
  uint64_t _3599;
  uint32_t _3600;
  uint32_t _3600__PHI_TEMPORARY;
  uint64_t _3601;
  uint64_t _3602;
  uint64_t _3603;
  uint64_t _3604;
  void* _3605;
  uint64_t _3606;
  void* _3607;
  uint64_t _3608;
  void* _3609;
  uint64_t _3610;
  void* _3611;
  uint64_t _3612;

  _3504 = ((&((uint8_t*)_3499)[((int64_t)32)]));
  _3505 = *(uint64_t*)_3504;
  _3506 = ((&((uint8_t*)_3499)[((int64_t)40)]));
  if (((_3505 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3613;
  } else {
    goto _3614;
  }

_3613:
  _3507 = *(void**)_3499;
  _3508 = ((&((uint8_t*)_3507)[((int64_t)16)]));
  _3509 = *(uint64_t*)_3508;
  _3510 = ((&((uint8_t*)_3507)[((int64_t)8)]));
  _3511 = *(uint64_t*)_3510;
  if ((((int64_t)_3511) > ((int64_t)_3509))) {
    goto _3615;
  } else {
    _3528__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3616;
  }

_3615:
  _3512 = *(void**)_3507;
  _3513 = *(uint8_t*)(((&((uint8_t*)_3512)[((int64_t)_3509)])));
  *(uint64_t*)_3508 = (llvm_add_u64(_3509, 1));
  _3514 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3513)), 0);
  _3515 = llvm_sub_u8(32, (llvm_shl_u8(_3514, 3)));
  _3516 = (((uint32_t)(uint8_t)_3513)) << 24;
  if ((((uint8_t)_3515) > ((uint8_t)((uint8_t)16)))) {
    _3528__PHI_TEMPORARY = _3516;   /* for PHI node */
    goto _3616;
  } else {
    _3517__PHI_TEMPORARY = 16;   /* for PHI node */
    _3518__PHI_TEMPORARY = _3516;   /* for PHI node */
    goto _3617;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3617:
  _3517 = _3517__PHI_TEMPORARY;
  _3518 = _3518__PHI_TEMPORARY;
  if (((((int64_t)_3517) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3517) < ((uint64_t)(((uint64_t)(uint8_t)_3515)))))) {
    _3528__PHI_TEMPORARY = _3518;   /* for PHI node */
    goto _3616;
  } else {
    goto _3618;
  }

_3618:
  _3519 = *(uint64_t*)_3508;
  _3520 = *(uint64_t*)_3510;
  if ((((int64_t)_3520) > ((int64_t)_3519))) {
    goto _3619;
  } else {
    _3528__PHI_TEMPORARY = _3518;   /* for PHI node */
    goto _3616;
  }

_3619:
  _3521 = *(void**)_3507;
  _3522 = *(uint8_t*)(((&((uint8_t*)_3521)[((int64_t)_3519)])));
  if ((((int8_t)_3522) > ((int8_t)((uint8_t)-65)))) {
    _3528__PHI_TEMPORARY = _3518;   /* for PHI node */
    goto _3616;
  } else {
    goto _3620;
  }

_3620:
  _3523 = llvm_select_u32((((int64_t)_3519) < ((int64_t)_3520)), (((uint32_t)(uint8_t)_3522)), 0);
  _3524 = *(uint64_t*)_3508;
  *(uint64_t*)_3508 = (llvm_add_u64(_3524, 1));
  _3525 = llvm_neg_u64(_3517);
  _3526 = _3518 | (llvm_select_u32((((int64_t)_3517) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3525) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3523, (((uint32_t)_3525)))))), (llvm_select_u32((((uint64_t)_3517) > ((uint64_t)UINT64_C(31))), 0, (_3523 << (((uint32_t)_3517)))))));
  _3527 = llvm_add_u64(_3517, -8);
  _3517__PHI_TEMPORARY = _3527;   /* for PHI node */
  _3518__PHI_TEMPORARY = _3526;   /* for PHI node */
  goto _3617;

  } while (1); /* end of syntactic loop '' */
_3616:
  _3528 = _3528__PHI_TEMPORARY;
  _3529 = *(uint64_t*)_3504;
  _3530 = *(uint64_t*)_3506;
  _3531 = jsyn_cbe_fshl_i64(_3530, _3529, 32);
  _3532 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3528)), _3530, 32);
  *(uint64_t*)_3504 = _3531;
  *(uint64_t*)_3506 = _3532;
  _3533 = ((&((uint8_t*)_3499)[((int64_t)56)]));
  _3534 = *(uint64_t*)_3533;
  _3535 = ((&((uint8_t*)_3499)[((int64_t)64)]));
  _3536 = *(uint64_t*)_3535;
  _3537 = ((&((uint8_t*)_3499)[((int64_t)72)]));
  _3538 = *(uint64_t*)_3537;
  _3539 = *(void**)_3499;
  _3540 = *(uint64_t*)(((&((uint8_t*)_3539)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3499)[((int64_t)48)]))) = _3534;
  *(uint64_t*)_3533 = _3536;
  *(uint64_t*)_3535 = _3538;
  *(uint64_t*)_3537 = _3540;
  julia_emit_11((&_3500), _3498, _3499, 71, 1);
  _3541__PHI_TEMPORARY = (&_3500);   /* for PHI node */
  goto _3621;

_3621:
  _3541 = _3541__PHI_TEMPORARY;
  _3542 = memcpy(_3497, _3541, 32);
  return;
_3614:
  _3543 = *(uint64_t*)_3504;
  if (((_3543 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _3622;
  } else {
    goto _3623;
  }

_3622:
  _3544 = *(void**)_3499;
  _3545 = ((&((uint8_t*)_3544)[((int64_t)16)]));
  _3546 = *(uint64_t*)_3545;
  _3547 = ((&((uint8_t*)_3544)[((int64_t)8)]));
  _3548 = *(uint64_t*)_3547;
  if ((((int64_t)_3548) > ((int64_t)_3546))) {
    goto _3624;
  } else {
    _3565__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3625;
  }

_3624:
  _3549 = *(void**)_3544;
  _3550 = *(uint8_t*)(((&((uint8_t*)_3549)[((int64_t)_3546)])));
  *(uint64_t*)_3545 = (llvm_add_u64(_3546, 1));
  _3551 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3550)), 0);
  _3552 = llvm_sub_u8(32, (llvm_shl_u8(_3551, 3)));
  _3553 = (((uint32_t)(uint8_t)_3550)) << 24;
  if ((((uint8_t)_3552) > ((uint8_t)((uint8_t)16)))) {
    _3565__PHI_TEMPORARY = _3553;   /* for PHI node */
    goto _3625;
  } else {
    _3554__PHI_TEMPORARY = 16;   /* for PHI node */
    _3555__PHI_TEMPORARY = _3553;   /* for PHI node */
    goto _3626;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3626:
  _3554 = _3554__PHI_TEMPORARY;
  _3555 = _3555__PHI_TEMPORARY;
  if (((((int64_t)_3554) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3554) < ((uint64_t)(((uint64_t)(uint8_t)_3552)))))) {
    _3565__PHI_TEMPORARY = _3555;   /* for PHI node */
    goto _3625;
  } else {
    goto _3627;
  }

_3627:
  _3556 = *(uint64_t*)_3545;
  _3557 = *(uint64_t*)_3547;
  if ((((int64_t)_3557) > ((int64_t)_3556))) {
    goto _3628;
  } else {
    _3565__PHI_TEMPORARY = _3555;   /* for PHI node */
    goto _3625;
  }

_3628:
  _3558 = *(void**)_3544;
  _3559 = *(uint8_t*)(((&((uint8_t*)_3558)[((int64_t)_3556)])));
  if ((((int8_t)_3559) > ((int8_t)((uint8_t)-65)))) {
    _3565__PHI_TEMPORARY = _3555;   /* for PHI node */
    goto _3625;
  } else {
    goto _3629;
  }

_3629:
  _3560 = llvm_select_u32((((int64_t)_3556) < ((int64_t)_3557)), (((uint32_t)(uint8_t)_3559)), 0);
  _3561 = *(uint64_t*)_3545;
  *(uint64_t*)_3545 = (llvm_add_u64(_3561, 1));
  _3562 = llvm_neg_u64(_3554);
  _3563 = _3555 | (llvm_select_u32((((int64_t)_3554) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3562) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3560, (((uint32_t)_3562)))))), (llvm_select_u32((((uint64_t)_3554) > ((uint64_t)UINT64_C(31))), 0, (_3560 << (((uint32_t)_3554)))))));
  _3564 = llvm_add_u64(_3554, -8);
  _3554__PHI_TEMPORARY = _3564;   /* for PHI node */
  _3555__PHI_TEMPORARY = _3563;   /* for PHI node */
  goto _3626;

  } while (1); /* end of syntactic loop '' */
_3625:
  _3565 = _3565__PHI_TEMPORARY;
  _3566 = *(uint64_t*)_3504;
  _3567 = *(uint64_t*)_3506;
  _3568 = jsyn_cbe_fshl_i64(_3567, _3566, 32);
  _3569 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3565)), _3567, 32);
  *(uint64_t*)_3504 = _3568;
  *(uint64_t*)_3506 = _3569;
  _3570 = ((&((uint8_t*)_3499)[((int64_t)56)]));
  _3571 = *(uint64_t*)_3570;
  _3572 = ((&((uint8_t*)_3499)[((int64_t)64)]));
  _3573 = *(uint64_t*)_3572;
  _3574 = ((&((uint8_t*)_3499)[((int64_t)72)]));
  _3575 = *(uint64_t*)_3574;
  _3576 = *(void**)_3499;
  _3577 = *(uint64_t*)(((&((uint8_t*)_3576)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3499)[((int64_t)48)]))) = _3571;
  *(uint64_t*)_3570 = _3573;
  *(uint64_t*)_3572 = _3575;
  *(uint64_t*)_3574 = _3577;
  julia_emit_11((&_3501), _3498, _3499, 525, 1);
  _3541__PHI_TEMPORARY = (&_3501);   /* for PHI node */
  goto _3621;

_3623:
  _3578 = *(uint64_t*)_3504;
  if (((_3578 & INT64_C(-4294967296)) == UINT64_C(8935141660703064064))) {
    goto _3630;
  } else {
    goto _3631;
  }

_3630:
  _3579 = *(void**)_3499;
  _3580 = ((&((uint8_t*)_3579)[((int64_t)16)]));
  _3581 = *(uint64_t*)_3580;
  _3582 = ((&((uint8_t*)_3579)[((int64_t)8)]));
  _3583 = *(uint64_t*)_3582;
  if ((((int64_t)_3583) > ((int64_t)_3581))) {
    goto _3632;
  } else {
    _3600__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3633;
  }

_3632:
  _3584 = *(void**)_3579;
  _3585 = *(uint8_t*)(((&((uint8_t*)_3584)[((int64_t)_3581)])));
  *(uint64_t*)_3580 = (llvm_add_u64(_3581, 1));
  _3586 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3585)), 0);
  _3587 = llvm_sub_u8(32, (llvm_shl_u8(_3586, 3)));
  _3588 = (((uint32_t)(uint8_t)_3585)) << 24;
  if ((((uint8_t)_3587) > ((uint8_t)((uint8_t)16)))) {
    _3600__PHI_TEMPORARY = _3588;   /* for PHI node */
    goto _3633;
  } else {
    _3589__PHI_TEMPORARY = 16;   /* for PHI node */
    _3590__PHI_TEMPORARY = _3588;   /* for PHI node */
    goto _3634;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3634:
  _3589 = _3589__PHI_TEMPORARY;
  _3590 = _3590__PHI_TEMPORARY;
  if (((((int64_t)_3589) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3589) < ((uint64_t)(((uint64_t)(uint8_t)_3587)))))) {
    _3600__PHI_TEMPORARY = _3590;   /* for PHI node */
    goto _3633;
  } else {
    goto _3635;
  }

_3635:
  _3591 = *(uint64_t*)_3580;
  _3592 = *(uint64_t*)_3582;
  if ((((int64_t)_3592) > ((int64_t)_3591))) {
    goto _3636;
  } else {
    _3600__PHI_TEMPORARY = _3590;   /* for PHI node */
    goto _3633;
  }

_3636:
  _3593 = *(void**)_3579;
  _3594 = *(uint8_t*)(((&((uint8_t*)_3593)[((int64_t)_3591)])));
  if ((((int8_t)_3594) > ((int8_t)((uint8_t)-65)))) {
    _3600__PHI_TEMPORARY = _3590;   /* for PHI node */
    goto _3633;
  } else {
    goto _3637;
  }

_3637:
  _3595 = llvm_select_u32((((int64_t)_3591) < ((int64_t)_3592)), (((uint32_t)(uint8_t)_3594)), 0);
  _3596 = *(uint64_t*)_3580;
  *(uint64_t*)_3580 = (llvm_add_u64(_3596, 1));
  _3597 = llvm_neg_u64(_3589);
  _3598 = _3590 | (llvm_select_u32((((int64_t)_3589) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3597) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3595, (((uint32_t)_3597)))))), (llvm_select_u32((((uint64_t)_3589) > ((uint64_t)UINT64_C(31))), 0, (_3595 << (((uint32_t)_3589)))))));
  _3599 = llvm_add_u64(_3589, -8);
  _3589__PHI_TEMPORARY = _3599;   /* for PHI node */
  _3590__PHI_TEMPORARY = _3598;   /* for PHI node */
  goto _3634;

  } while (1); /* end of syntactic loop '' */
_3633:
  _3600 = _3600__PHI_TEMPORARY;
  _3601 = *(uint64_t*)_3504;
  _3602 = *(uint64_t*)_3506;
  _3603 = jsyn_cbe_fshl_i64(_3602, _3601, 32);
  _3604 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3600)), _3602, 32);
  *(uint64_t*)_3504 = _3603;
  *(uint64_t*)_3506 = _3604;
  _3605 = ((&((uint8_t*)_3499)[((int64_t)56)]));
  _3606 = *(uint64_t*)_3605;
  _3607 = ((&((uint8_t*)_3499)[((int64_t)64)]));
  _3608 = *(uint64_t*)_3607;
  _3609 = ((&((uint8_t*)_3499)[((int64_t)72)]));
  _3610 = *(uint64_t*)_3609;
  _3611 = *(void**)_3499;
  _3612 = *(uint64_t*)(((&((uint8_t*)_3611)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3499)[((int64_t)48)]))) = _3606;
  *(uint64_t*)_3605 = _3608;
  *(uint64_t*)_3607 = _3610;
  *(uint64_t*)_3609 = _3612;
  julia_emit_11((&_3502), _3498, _3499, 232, 1);
  _3541__PHI_TEMPORARY = (&_3502);   /* for PHI node */
  goto _3621;

_3631:
  julia_emit_11((&_3503), _3498, _3499, 542, 1);
  _3541__PHI_TEMPORARY = (&_3503);   /* for PHI node */
  goto _3621;

}


static void julia_lex_amper_30(void* _3638, void* _3639, void* _3640) {
  struct l_array_4_uint64_t _3641;    /* Address-exposed local */
  struct l_array_4_uint64_t _3642;    /* Address-exposed local */
  struct l_array_4_uint64_t _3643;    /* Address-exposed local */
  void* _3644;
  uint64_t _3645;
  void* _3646;
  void* _3647;
  void* _3648;
  uint64_t _3649;
  void* _3650;
  uint64_t _3651;
  void* _3652;
  uint8_t _3653;
  uint8_t _3654;
  uint8_t _3655;
  uint32_t _3656;
  uint64_t _3657;
  uint64_t _3657__PHI_TEMPORARY;
  uint32_t _3658;
  uint32_t _3658__PHI_TEMPORARY;
  uint64_t _3659;
  uint64_t _3660;
  void* _3661;
  uint8_t _3662;
  uint32_t _3663;
  uint64_t _3664;
  uint64_t _3665;
  uint32_t _3666;
  uint64_t _3667;
  uint32_t _3668;
  uint32_t _3668__PHI_TEMPORARY;
  uint64_t _3669;
  uint64_t _3670;
  uint64_t _3671;
  uint64_t _3672;
  void* _3673;
  uint64_t _3674;
  void* _3675;
  uint64_t _3676;
  void* _3677;
  uint64_t _3678;
  void* _3679;
  uint64_t _3680;
  void* _3681;
  void* _3681__PHI_TEMPORARY;
  void* _3682;
  uint64_t _3683;
  void* _3684;
  void* _3685;
  uint64_t _3686;
  void* _3687;
  uint64_t _3688;
  void* _3689;
  uint8_t _3690;
  uint8_t _3691;
  uint8_t _3692;
  uint32_t _3693;
  uint64_t _3694;
  uint64_t _3694__PHI_TEMPORARY;
  uint32_t _3695;
  uint32_t _3695__PHI_TEMPORARY;
  uint64_t _3696;
  uint64_t _3697;
  void* _3698;
  uint8_t _3699;
  uint32_t _3700;
  uint64_t _3701;
  uint64_t _3702;
  uint32_t _3703;
  uint64_t _3704;
  uint32_t _3705;
  uint32_t _3705__PHI_TEMPORARY;
  uint64_t _3706;
  uint64_t _3707;
  uint64_t _3708;
  uint64_t _3709;
  void* _3710;
  uint64_t _3711;
  void* _3712;
  uint64_t _3713;
  void* _3714;
  uint64_t _3715;
  void* _3716;
  uint64_t _3717;

  _3644 = ((&((uint8_t*)_3640)[((int64_t)32)]));
  _3645 = *(uint64_t*)_3644;
  _3646 = ((&((uint8_t*)_3640)[((int64_t)40)]));
  if (((_3645 & INT64_C(-4294967296)) == UINT64_C(2738188573441261568))) {
    goto _3718;
  } else {
    goto _3719;
  }

_3718:
  _3647 = *(void**)_3640;
  _3648 = ((&((uint8_t*)_3647)[((int64_t)16)]));
  _3649 = *(uint64_t*)_3648;
  _3650 = ((&((uint8_t*)_3647)[((int64_t)8)]));
  _3651 = *(uint64_t*)_3650;
  if ((((int64_t)_3651) > ((int64_t)_3649))) {
    goto _3720;
  } else {
    _3668__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3721;
  }

_3720:
  _3652 = *(void**)_3647;
  _3653 = *(uint8_t*)(((&((uint8_t*)_3652)[((int64_t)_3649)])));
  *(uint64_t*)_3648 = (llvm_add_u64(_3649, 1));
  _3654 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3653)), 0);
  _3655 = llvm_sub_u8(32, (llvm_shl_u8(_3654, 3)));
  _3656 = (((uint32_t)(uint8_t)_3653)) << 24;
  if ((((uint8_t)_3655) > ((uint8_t)((uint8_t)16)))) {
    _3668__PHI_TEMPORARY = _3656;   /* for PHI node */
    goto _3721;
  } else {
    _3657__PHI_TEMPORARY = 16;   /* for PHI node */
    _3658__PHI_TEMPORARY = _3656;   /* for PHI node */
    goto _3722;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3722:
  _3657 = _3657__PHI_TEMPORARY;
  _3658 = _3658__PHI_TEMPORARY;
  if (((((int64_t)_3657) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3657) < ((uint64_t)(((uint64_t)(uint8_t)_3655)))))) {
    _3668__PHI_TEMPORARY = _3658;   /* for PHI node */
    goto _3721;
  } else {
    goto _3723;
  }

_3723:
  _3659 = *(uint64_t*)_3648;
  _3660 = *(uint64_t*)_3650;
  if ((((int64_t)_3660) > ((int64_t)_3659))) {
    goto _3724;
  } else {
    _3668__PHI_TEMPORARY = _3658;   /* for PHI node */
    goto _3721;
  }

_3724:
  _3661 = *(void**)_3647;
  _3662 = *(uint8_t*)(((&((uint8_t*)_3661)[((int64_t)_3659)])));
  if ((((int8_t)_3662) > ((int8_t)((uint8_t)-65)))) {
    _3668__PHI_TEMPORARY = _3658;   /* for PHI node */
    goto _3721;
  } else {
    goto _3725;
  }

_3725:
  _3663 = llvm_select_u32((((int64_t)_3659) < ((int64_t)_3660)), (((uint32_t)(uint8_t)_3662)), 0);
  _3664 = *(uint64_t*)_3648;
  *(uint64_t*)_3648 = (llvm_add_u64(_3664, 1));
  _3665 = llvm_neg_u64(_3657);
  _3666 = _3658 | (llvm_select_u32((((int64_t)_3657) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3665) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3663, (((uint32_t)_3665)))))), (llvm_select_u32((((uint64_t)_3657) > ((uint64_t)UINT64_C(31))), 0, (_3663 << (((uint32_t)_3657)))))));
  _3667 = llvm_add_u64(_3657, -8);
  _3657__PHI_TEMPORARY = _3667;   /* for PHI node */
  _3658__PHI_TEMPORARY = _3666;   /* for PHI node */
  goto _3722;

  } while (1); /* end of syntactic loop '' */
_3721:
  _3668 = _3668__PHI_TEMPORARY;
  _3669 = *(uint64_t*)_3644;
  _3670 = *(uint64_t*)_3646;
  _3671 = jsyn_cbe_fshl_i64(_3670, _3669, 32);
  _3672 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3668)), _3670, 32);
  *(uint64_t*)_3644 = _3671;
  *(uint64_t*)_3646 = _3672;
  _3673 = ((&((uint8_t*)_3640)[((int64_t)56)]));
  _3674 = *(uint64_t*)_3673;
  _3675 = ((&((uint8_t*)_3640)[((int64_t)64)]));
  _3676 = *(uint64_t*)_3675;
  _3677 = ((&((uint8_t*)_3640)[((int64_t)72)]));
  _3678 = *(uint64_t*)_3677;
  _3679 = *(void**)_3640;
  _3680 = *(uint64_t*)(((&((uint8_t*)_3679)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3640)[((int64_t)48)]))) = _3674;
  *(uint64_t*)_3673 = _3676;
  *(uint64_t*)_3675 = _3678;
  *(uint64_t*)_3677 = _3680;
  julia_emit_11((&_3641), _3639, _3640, 234, 1);
  _3681__PHI_TEMPORARY = (&_3641);   /* for PHI node */
  goto _3726;

_3726:
  _3681 = _3681__PHI_TEMPORARY;
  _3682 = memcpy(_3638, _3681, 32);
  return;
_3719:
  _3683 = *(uint64_t*)_3644;
  if (((_3683 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3727;
  } else {
    goto _3728;
  }

_3727:
  _3684 = *(void**)_3640;
  _3685 = ((&((uint8_t*)_3684)[((int64_t)16)]));
  _3686 = *(uint64_t*)_3685;
  _3687 = ((&((uint8_t*)_3684)[((int64_t)8)]));
  _3688 = *(uint64_t*)_3687;
  if ((((int64_t)_3688) > ((int64_t)_3686))) {
    goto _3729;
  } else {
    _3705__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3730;
  }

_3729:
  _3689 = *(void**)_3684;
  _3690 = *(uint8_t*)(((&((uint8_t*)_3689)[((int64_t)_3686)])));
  *(uint64_t*)_3685 = (llvm_add_u64(_3686, 1));
  _3691 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3690)), 0);
  _3692 = llvm_sub_u8(32, (llvm_shl_u8(_3691, 3)));
  _3693 = (((uint32_t)(uint8_t)_3690)) << 24;
  if ((((uint8_t)_3692) > ((uint8_t)((uint8_t)16)))) {
    _3705__PHI_TEMPORARY = _3693;   /* for PHI node */
    goto _3730;
  } else {
    _3694__PHI_TEMPORARY = 16;   /* for PHI node */
    _3695__PHI_TEMPORARY = _3693;   /* for PHI node */
    goto _3731;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3731:
  _3694 = _3694__PHI_TEMPORARY;
  _3695 = _3695__PHI_TEMPORARY;
  if (((((int64_t)_3694) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3694) < ((uint64_t)(((uint64_t)(uint8_t)_3692)))))) {
    _3705__PHI_TEMPORARY = _3695;   /* for PHI node */
    goto _3730;
  } else {
    goto _3732;
  }

_3732:
  _3696 = *(uint64_t*)_3685;
  _3697 = *(uint64_t*)_3687;
  if ((((int64_t)_3697) > ((int64_t)_3696))) {
    goto _3733;
  } else {
    _3705__PHI_TEMPORARY = _3695;   /* for PHI node */
    goto _3730;
  }

_3733:
  _3698 = *(void**)_3684;
  _3699 = *(uint8_t*)(((&((uint8_t*)_3698)[((int64_t)_3696)])));
  if ((((int8_t)_3699) > ((int8_t)((uint8_t)-65)))) {
    _3705__PHI_TEMPORARY = _3695;   /* for PHI node */
    goto _3730;
  } else {
    goto _3734;
  }

_3734:
  _3700 = llvm_select_u32((((int64_t)_3696) < ((int64_t)_3697)), (((uint32_t)(uint8_t)_3699)), 0);
  _3701 = *(uint64_t*)_3685;
  *(uint64_t*)_3685 = (llvm_add_u64(_3701, 1));
  _3702 = llvm_neg_u64(_3694);
  _3703 = _3695 | (llvm_select_u32((((int64_t)_3694) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3702) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3700, (((uint32_t)_3702)))))), (llvm_select_u32((((uint64_t)_3694) > ((uint64_t)UINT64_C(31))), 0, (_3700 << (((uint32_t)_3694)))))));
  _3704 = llvm_add_u64(_3694, -8);
  _3694__PHI_TEMPORARY = _3704;   /* for PHI node */
  _3695__PHI_TEMPORARY = _3703;   /* for PHI node */
  goto _3731;

  } while (1); /* end of syntactic loop '' */
_3730:
  _3705 = _3705__PHI_TEMPORARY;
  _3706 = *(uint64_t*)_3644;
  _3707 = *(uint64_t*)_3646;
  _3708 = jsyn_cbe_fshl_i64(_3707, _3706, 32);
  _3709 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3705)), _3707, 32);
  *(uint64_t*)_3644 = _3708;
  *(uint64_t*)_3646 = _3709;
  _3710 = ((&((uint8_t*)_3640)[((int64_t)56)]));
  _3711 = *(uint64_t*)_3710;
  _3712 = ((&((uint8_t*)_3640)[((int64_t)64)]));
  _3713 = *(uint64_t*)_3712;
  _3714 = ((&((uint8_t*)_3640)[((int64_t)72)]));
  _3715 = *(uint64_t*)_3714;
  _3716 = *(void**)_3640;
  _3717 = *(uint64_t*)(((&((uint8_t*)_3716)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3640)[((int64_t)48)]))) = _3711;
  *(uint64_t*)_3710 = _3713;
  *(uint64_t*)_3712 = _3715;
  *(uint64_t*)_3714 = _3717;
  julia_emit_11((&_3642), _3639, _3640, 71, 1);
  _3681__PHI_TEMPORARY = (&_3642);   /* for PHI node */
  goto _3726;

_3728:
  julia_emit_11((&_3643), _3639, _3640, 600, 1);
  _3681__PHI_TEMPORARY = (&_3643);   /* for PHI node */
  goto _3726;

}


static void julia__growend_internalNOT_OC__31(void* _3735, void* _3736, int64_t _3737, int64_t _3738) {
  __PREFIXALIGN__(16) struct l_array_4_uint64_t _3739 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _3740;
  void* _3741;
  void* _3742;
  void* _3743;
  void* _3744;
  void* _3745;
  uint64_t _3746;
  void* _3747;
  void* _3748;
  uint64_t _3749;
  uint64_t _3750;
  uint64_t _3751;
  uint64_t _3752;
  uint64_t _3753;
  uint64_t _3753__PHI_TEMPORARY;
  void* _3754;
  void* _3754__PHI_TEMPORARY;
  void* _3755;
  void* _3756;
  uint64_t _3757;
  uint64_t _3758;
  uint64_t _3759;
  void* _3760;
  void* _3761;
  void* _3762;
  void* _3763;
  struct l_array_1_void_KC_ _3764;
  void* _3765;
  void* _3766;
  uint64_t _3767;
  uint64_t _3768;
  void* _3769;
  struct l_array_1_void_KC_ _3770;
  void* _3771;
  void* _3772;
  uint64_t _3773;
  void* _3774;
  void* _3775;
  uint64_t _3776;
  void* _3777;
  void* _3778;
  void* _3779;
  uint64_t _3780;
  uint64_t _3781;
  uint64_t _3782;
  void* _3783;
  void* _3784;

  _3740 = memset((&_3739), 0, 32);
  *((uint64_t*)&_3739) = 8;
  _3741 = *(void**)_3735;
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)8)]))) = _3741;
  *(void**)_3735 = (&_3739);
  _3742 = ((&((uint8_t*)_3735)[((int64_t)16)]));
  _3743 = *(void**)_3736;
  _3744 = ((&((uint8_t*)_3736)[((int64_t)8)]));
  _3745 = *(void**)_3744;
  _3746 = llvm_add_u64(_3738, _3737);
  _3747 = ((&((uint8_t*)_3745)[((int64_t)8)]));
  _3748 = *(void**)_3747;
  _3749 = llvm_sub_u64((((uint64_t)(uintptr_t)_3743)), (((uint64_t)(uintptr_t)_3748)));
  _3750 = llvm_lshr_u64(_3749, 4);
  _3751 = llvm_add_u64(_3750, _3746);
  _3752 = *(uint64_t*)_3745;
  if ((((int64_t)_3752) < ((int64_t)(llvm_add_u64(_3750, _3738))))) {
    goto _3785;
  } else {
    goto _3786;
  }

_3787:
  _3753 = _3753__PHI_TEMPORARY;
  _3754 = _3754__PHI_TEMPORARY;
  _3755 = *(void**)(((&((uint8_t*)_3754)[((int64_t)8)])));
  _3756 = ((&((uint8_t*)_3755)[((int64_t)_3753)]));
  if ((_3738 == UINT64_C(0))) {
    goto _3788;
  } else {
    goto _3789;
  }

_3789:
  _3757 = llvm_add_u64(_3738, -1);
  _3758 = *(uint64_t*)_3754;
  _3759 = _3757 << 4;
  if ((llvm_select_bool((((uint64_t)(llvm_add_u64(_3757, _3758))) < ((uint64_t)(_3758 << 1))), (((uint64_t)(llvm_sub_u64((((uint64_t)(uintptr_t)(((&((uint8_t*)_3756)[((int64_t)_3759)]))))), (((uint64_t)(uintptr_t)_3755))))) < ((uint64_t)(_3758 << 4))), 0))) {
    goto _3790;
  } else {
    goto _3791;
  }

_3792:
  _3760 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)336)])));
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)24)]))) = _3745;
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)16)]))) = _3754;
  julia_throw_inexacterror_6(_3735, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)]))), _3760, _3780);
  __builtin_unreachable();

_3793:
  _3761 = memmove(_3756, _3743, _3780);
  goto _3788;

_3788:
  _3762 = *(void**)_3736;
  _3763 = *(void**)_3744;
  if (((_3743 == _3762) & (_3745 == _3763))) {
    goto _3794;
  } else {
    goto _3795;
  }

_3795:
  _3764 = julia_ConcurrencyViolationError_43(_3735, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)424)]))));
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)16)]))) = ((_3764.array[0]));
  _3765 = *(void**)(((&((uint8_t*)_3735)[((int64_t)16)])));
  _3766 = jsk_ijl_gc_small_alloc(_3765, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)456)])))));
  *(void**)(((&((uint8_t*)_3766)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)456)])));
  *(void**)_3766 = ((_3764.array[0]));
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_3766);
  __builtin_unreachable();

_3794:
  *(void**)_3736 = _3756;
  *(void**)(((&((uint8_t*)_3736)[((int64_t)8)]))) = _3754;
  _3767 = *(volatile uint64_t*)(((&((uint8_t*)_3736)[((int64_t)-8)])));
  if (((_3767 & 3) == UINT64_C(3))) {
    goto _3796;
  } else {
    goto _3797;
  }

_3796:
  _3768 = *(volatile uint64_t*)(((&((uint8_t*)_3754)[((int64_t)-8)])));
  if ((((_3767 & 12) == UINT64_C(4)) | ((_3768 & 1) == UINT64_C(0)))) {
    goto _3798;
  } else {
    goto _3797;
  }

_3798:
  jsk_ijl_gc_queue_root(_3736);
  goto _3797;

_3797:
  _3769 = *(void**)(((&((uint8_t*)(&_3739))[((int64_t)8)])));
  *(void**)_3735 = _3769;
  return;
_3785:
  _3770 = julia_ConcurrencyViolationError_43(_3735, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)488)]))));
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)16)]))) = ((_3770.array[0]));
  _3771 = *(void**)(((&((uint8_t*)_3735)[((int64_t)16)])));
  _3772 = jsk_ijl_gc_small_alloc(_3771, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)456)])))));
  *(void**)(((&((uint8_t*)_3772)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)456)])));
  *(void**)_3772 = ((_3770.array[0]));
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_3772);
  __builtin_unreachable();

_3786:
  if ((((int64_t)(llvm_sdiv_u64((llvm_mul_u64(_3746, 5)), 4))) < ((int64_t)_3750))) {
    goto _3799;
  } else {
    goto _3800;
  }

_3799:
  _3773 = (llvm_sdiv_u64(_3746, 8)) << 4;
  _3753__PHI_TEMPORARY = _3773;   /* for PHI node */
  _3754__PHI_TEMPORARY = _3745;   /* for PHI node */
  goto _3787;

_3791:
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)16)]))) = _3754;
  _3774 = *(void**)(((&((uint8_t*)_3735)[((int64_t)16)])));
  _3775 = jsk_ijl_gc_small_alloc(_3774, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)520)])))));
  *(void**)(((&((uint8_t*)_3775)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)520)])));
  *(void**)_3775 = _3756;
  *(void**)(((&((uint8_t*)_3775)[((int64_t)8)]))) = _3754;
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_bounds_error_int(_3775, _3738);
  __builtin_unreachable();

_3790:
  _3776 = *(uint64_t*)_3745;
  _3777 = *(void**)_3747;
  if ((llvm_select_bool((((uint64_t)(llvm_add_u64(_3757, _3776))) < ((uint64_t)(_3776 << 1))), (((uint64_t)(llvm_sub_u64((((uint64_t)(uintptr_t)(((&((uint8_t*)_3743)[((int64_t)_3759)]))))), (((uint64_t)(uintptr_t)_3777))))) < ((uint64_t)(_3776 << 4))), 0))) {
    goto _3801;
  } else {
    goto _3802;
  }

_3802:
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)24)]))) = _3745;
  _3778 = *(void**)(((&((uint8_t*)_3735)[((int64_t)16)])));
  _3779 = jsk_ijl_gc_small_alloc(_3778, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)520)])))));
  *(void**)(((&((uint8_t*)_3779)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)520)])));
  *(void**)_3779 = _3743;
  *(void**)(((&((uint8_t*)_3779)[((int64_t)8)]))) = _3745;
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)24)]))) = ((void*)/*NULL*/0);
  jsk_ijl_bounds_error_int(_3779, _3738);
  __builtin_unreachable();

_3801:
  _3780 = _3738 << 4;
  if ((((int64_t)_3780) > ((int64_t)UINT64_C(18446744073709551615)))) {
    goto _3793;
  } else {
    goto _3792;
  }

_3800:
  _3781 = llvm_OC_ctlz_OC_i64(_3752, 0);
  _3782 = llvm_OC_smax_OC_i64(_3751, (llvm_add_u64(_3752, (llvm_add_u64((3 << (llvm_lshr_u64((llvm_mul_u64((llvm_sub_u64(64, _3781)), 7)), 3))), (llvm_sdiv_u64(_3752, 8)))))));
  if ((_3782 == UINT64_C(0))) {
    _3753__PHI_TEMPORARY = _3749;   /* for PHI node */
    _3754__PHI_TEMPORARY = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)104)])));   /* for PHI node */
    goto _3787;
  } else {
    goto _3803;
  }

_3803:
  if ((((uint64_t)_3782) < ((uint64_t)UINT64_C(576460752303423488)))) {
    goto _3804;
  } else {
    goto _3805;
  }

_3805:
  jsk_jl_argument_error((&_j_str_invalidSP_OC_GenericMemorySP_OC_sizDOT_OC_DOT_OC_DOT_OC_YY_OC_56));
  __builtin_unreachable();

_3804:
  _3783 = *(void**)_3742;
  *(void**)(((&((uint8_t*)(&_3739))[((int64_t)24)]))) = _3745;
  _3784 = jsk_jl_alloc_genericmemory_unchecked(_3783, (_3782 << 4), (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)552)]))));
  *(uint64_t*)_3784 = _3782;
  _3753__PHI_TEMPORARY = _3749;   /* for PHI node */
  _3754__PHI_TEMPORARY = _3784;   /* for PHI node */
  goto _3787;

}


static void julia_lex_division_32(void* _3806, void* _3807, void* _3808) {
  struct l_array_4_uint64_t _3809;    /* Address-exposed local */
  struct l_array_4_uint64_t _3810;    /* Address-exposed local */
  void* _3811;
  uint64_t _3812;
  void* _3813;
  void* _3814;
  void* _3815;
  uint64_t _3816;
  void* _3817;
  uint64_t _3818;
  void* _3819;
  uint8_t _3820;
  uint8_t _3821;
  uint8_t _3822;
  uint32_t _3823;
  uint64_t _3824;
  uint64_t _3824__PHI_TEMPORARY;
  uint32_t _3825;
  uint32_t _3825__PHI_TEMPORARY;
  uint64_t _3826;
  uint64_t _3827;
  void* _3828;
  uint8_t _3829;
  uint32_t _3830;
  uint64_t _3831;
  uint64_t _3832;
  uint32_t _3833;
  uint64_t _3834;
  uint32_t _3835;
  uint32_t _3835__PHI_TEMPORARY;
  uint64_t _3836;
  uint64_t _3837;
  uint64_t _3838;
  uint64_t _3839;
  void* _3840;
  uint64_t _3841;
  void* _3842;
  uint64_t _3843;
  void* _3844;
  uint64_t _3845;
  void* _3846;
  uint64_t _3847;
  void* _3848;
  void* _3848__PHI_TEMPORARY;
  void* _3849;

  _3811 = ((&((uint8_t*)_3808)[((int64_t)32)]));
  _3812 = *(uint64_t*)_3811;
  _3813 = ((&((uint8_t*)_3808)[((int64_t)40)]));
  if (((_3812 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3850;
  } else {
    goto _3851;
  }

_3850:
  _3814 = *(void**)_3808;
  _3815 = ((&((uint8_t*)_3814)[((int64_t)16)]));
  _3816 = *(uint64_t*)_3815;
  _3817 = ((&((uint8_t*)_3814)[((int64_t)8)]));
  _3818 = *(uint64_t*)_3817;
  if ((((int64_t)_3818) > ((int64_t)_3816))) {
    goto _3852;
  } else {
    _3835__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3853;
  }

_3852:
  _3819 = *(void**)_3814;
  _3820 = *(uint8_t*)(((&((uint8_t*)_3819)[((int64_t)_3816)])));
  *(uint64_t*)_3815 = (llvm_add_u64(_3816, 1));
  _3821 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3820)), 0);
  _3822 = llvm_sub_u8(32, (llvm_shl_u8(_3821, 3)));
  _3823 = (((uint32_t)(uint8_t)_3820)) << 24;
  if ((((uint8_t)_3822) > ((uint8_t)((uint8_t)16)))) {
    _3835__PHI_TEMPORARY = _3823;   /* for PHI node */
    goto _3853;
  } else {
    _3824__PHI_TEMPORARY = 16;   /* for PHI node */
    _3825__PHI_TEMPORARY = _3823;   /* for PHI node */
    goto _3854;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3854:
  _3824 = _3824__PHI_TEMPORARY;
  _3825 = _3825__PHI_TEMPORARY;
  if (((((int64_t)_3824) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3824) < ((uint64_t)(((uint64_t)(uint8_t)_3822)))))) {
    _3835__PHI_TEMPORARY = _3825;   /* for PHI node */
    goto _3853;
  } else {
    goto _3855;
  }

_3855:
  _3826 = *(uint64_t*)_3815;
  _3827 = *(uint64_t*)_3817;
  if ((((int64_t)_3827) > ((int64_t)_3826))) {
    goto _3856;
  } else {
    _3835__PHI_TEMPORARY = _3825;   /* for PHI node */
    goto _3853;
  }

_3856:
  _3828 = *(void**)_3814;
  _3829 = *(uint8_t*)(((&((uint8_t*)_3828)[((int64_t)_3826)])));
  if ((((int8_t)_3829) > ((int8_t)((uint8_t)-65)))) {
    _3835__PHI_TEMPORARY = _3825;   /* for PHI node */
    goto _3853;
  } else {
    goto _3857;
  }

_3857:
  _3830 = llvm_select_u32((((int64_t)_3826) < ((int64_t)_3827)), (((uint32_t)(uint8_t)_3829)), 0);
  _3831 = *(uint64_t*)_3815;
  *(uint64_t*)_3815 = (llvm_add_u64(_3831, 1));
  _3832 = llvm_neg_u64(_3824);
  _3833 = _3825 | (llvm_select_u32((((int64_t)_3824) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3832) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3830, (((uint32_t)_3832)))))), (llvm_select_u32((((uint64_t)_3824) > ((uint64_t)UINT64_C(31))), 0, (_3830 << (((uint32_t)_3824)))))));
  _3834 = llvm_add_u64(_3824, -8);
  _3824__PHI_TEMPORARY = _3834;   /* for PHI node */
  _3825__PHI_TEMPORARY = _3833;   /* for PHI node */
  goto _3854;

  } while (1); /* end of syntactic loop '' */
_3853:
  _3835 = _3835__PHI_TEMPORARY;
  _3836 = *(uint64_t*)_3811;
  _3837 = *(uint64_t*)_3813;
  _3838 = jsyn_cbe_fshl_i64(_3837, _3836, 32);
  _3839 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3835)), _3837, 32);
  *(uint64_t*)_3811 = _3838;
  *(uint64_t*)_3813 = _3839;
  _3840 = ((&((uint8_t*)_3808)[((int64_t)56)]));
  _3841 = *(uint64_t*)_3840;
  _3842 = ((&((uint8_t*)_3808)[((int64_t)64)]));
  _3843 = *(uint64_t*)_3842;
  _3844 = ((&((uint8_t*)_3808)[((int64_t)72)]));
  _3845 = *(uint64_t*)_3844;
  _3846 = *(void**)_3808;
  _3847 = *(uint64_t*)(((&((uint8_t*)_3846)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3808)[((int64_t)48)]))) = _3841;
  *(uint64_t*)_3840 = _3843;
  *(uint64_t*)_3842 = _3845;
  *(uint64_t*)_3844 = _3847;
  julia_emit_11((&_3809), _3807, _3808, 71, 1);
  _3848__PHI_TEMPORARY = (&_3809);   /* for PHI node */
  goto _3858;

_3858:
  _3848 = _3848__PHI_TEMPORARY;
  _3849 = memcpy(_3806, _3848, 32);
  return;
_3851:
  julia_emit_11((&_3810), _3807, _3808, 594, 1);
  _3848__PHI_TEMPORARY = (&_3810);   /* for PHI node */
  goto _3858;

}


static void julia_lex_quote_33(void* _3859, void* _3860, void* _3861) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _3862 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _3863;
  void* _3864;
  struct l_array_4_uint64_t _3865;    /* Address-exposed local */
  struct l_array_4_uint64_t _3866;    /* Address-exposed local */
  uint16_t _3867;
  bool _3868;
  bool _3868__PHI_TEMPORARY;
  uint8_t _3869;
  void* _3870;
  uint64_t _3871;
  void* _3872;
  uint64_t _3873;
  bool _3874;
  uint8_t _3875;
  void* _3876;
  void* _3877;
  void* _3878;
  void* _3879;
  uint64_t _3880;
  uint64_t _3881;
  void* _3882;
  uint64_t _3883;
  void* _3884;
  void* _3885;
  void* _3886;
  void* _3887;
  uint64_t _3888;
  void* _3889;
  uint64_t _3890;
  void* _3891;
  uint8_t _3892;
  uint8_t _3893;
  uint8_t _3894;
  uint32_t _3895;
  uint64_t _3896;
  uint64_t _3896__PHI_TEMPORARY;
  uint32_t _3897;
  uint32_t _3897__PHI_TEMPORARY;
  uint64_t _3898;
  uint64_t _3899;
  void* _3900;
  uint8_t _3901;
  uint32_t _3902;
  uint64_t _3903;
  uint64_t _3904;
  uint32_t _3905;
  uint64_t _3906;
  uint32_t _3907;
  uint32_t _3907__PHI_TEMPORARY;
  uint64_t _3908;
  uint64_t _3909;
  uint64_t _3910;
  uint64_t _3911;
  void* _3912;
  void* _3913;
  uint64_t _3914;
  void* _3915;
  uint64_t _3916;
  void* _3917;
  uint64_t _3918;
  void* _3919;
  uint64_t _3920;
  void* _3921;
  void* _3922;
  uint64_t _3923;
  void* _3924;
  uint64_t _3925;
  void* _3926;
  uint8_t _3927;
  uint8_t _3928;
  uint8_t _3929;
  uint32_t _3930;
  uint64_t _3931;
  uint64_t _3931__PHI_TEMPORARY;
  uint32_t _3932;
  uint32_t _3932__PHI_TEMPORARY;
  uint64_t _3933;
  uint64_t _3934;
  void* _3935;
  uint8_t _3936;
  uint32_t _3937;
  uint64_t _3938;
  uint64_t _3939;
  uint32_t _3940;
  uint64_t _3941;
  uint32_t _3942;
  uint32_t _3942__PHI_TEMPORARY;
  uint64_t _3943;
  uint64_t _3944;
  uint64_t _3945;
  uint64_t _3946;
  uint64_t _3947;
  uint64_t _3948;
  uint64_t _3949;
  void* _3950;
  uint64_t _3951;
  void* _3952;
  void* _3952__PHI_TEMPORARY;
  void* _3953;
  void* _3954;

  _3863 = memset((&_3862), 0, 24);
  *((uint64_t*)&_3862) = 4;
  _3864 = *(void**)_3860;
  *(void**)(((&((uint8_t*)(&_3862))[((int64_t)8)]))) = _3864;
  *(void**)_3860 = (&_3862);
  _3867 = *(uint16_t*)(((&((uint8_t*)_3861)[((int64_t)16)])));
  if (((_3867 == ((uint16_t)3)) | (((uint16_t)(llvm_add_u16(_3867, -34))) < ((uint16_t)((uint16_t)9))))) {
    _3868__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3955;
  } else {
    goto _3956;
  }

_3956:
  switch (_3867) {
  default:
    goto _3957;
  case ((uint16_t)252):
    _3868__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3955;
  case ((uint16_t)253):
    _3868__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3955;
  case ((uint16_t)706):
    _3868__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3955;
  }

_3957:
  _3868__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _3955;

_3955:
  _3868 = _3868__PHI_TEMPORARY;
  _3869 = ((uint8_t)(bool)_3868);
  _3870 = ((&((uint8_t*)_3861)[((int64_t)32)]));
  _3871 = *(uint64_t*)_3870;
  _3872 = ((&((uint8_t*)_3861)[((int64_t)40)]));
  _3873 = *(uint64_t*)_3872;
  _3874 = llvm_select_bool(((_3871 & INT64_C(-4294967296)) == UINT64_C(2449958197289549824)), ((_3873 & INT64_C(4294967295)) == UINT64_C(570425344)), 0);
  _3875 = ((uint8_t)(bool)_3874);
  _3876 = *(void**)(((&((uint8_t*)_3861)[((int64_t)24)])));
  _3877 = *(void**)_3876;
  _3878 = *(void**)(((&((uint8_t*)_3876)[((int64_t)8)])));
  _3879 = ((&((uint8_t*)_3876)[((int64_t)16)]));
  _3880 = *(uint64_t*)_3879;
  _3881 = llvm_add_u64(_3880, 1);
  _3882 = *(void**)(((&((uint8_t*)_3878)[((int64_t)8)])));
  _3883 = *(uint64_t*)_3878;
  if ((((int64_t)_3883) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_3877)), (((uint64_t)(uintptr_t)_3882)))), 4)), 1)), _3880))))) {
    goto _3958;
  } else {
    goto _3959;
  }

_3958:
  *(void**)(((&((uint8_t*)(&_3862))[((int64_t)16)]))) = _3876;
  julia__growend_internalNOT_OC__31(_3860, _3876, 1, _3880);
  goto _3959;

_3959:
  *(uint64_t*)_3879 = _3881;
  _3884 = *(void**)_3876;
  _3885 = ((&((uint8_t*)_3884)[((int64_t)(_3880 << 4))]));
  *(uint8_t*)_3885 = _3875;
  *(uint8_t*)(((&((uint8_t*)_3885)[((int64_t)1)]))) = _3869;
  *(uint32_t*)(((&((uint8_t*)_3885)[((int64_t)4)]))) = 570425344;
  *(uint64_t*)(((&((uint8_t*)_3885)[((int64_t)8)]))) = 0;
  if (_3874) {
    goto _3960;
  } else {
    goto _3961;
  }

_3960:
  _3886 = *(void**)_3861;
  _3887 = ((&((uint8_t*)_3886)[((int64_t)16)]));
  _3888 = *(uint64_t*)_3887;
  _3889 = ((&((uint8_t*)_3886)[((int64_t)8)]));
  _3890 = *(uint64_t*)_3889;
  if ((((int64_t)_3890) > ((int64_t)_3888))) {
    goto _3962;
  } else {
    _3907__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3963;
  }

_3962:
  _3891 = *(void**)_3886;
  _3892 = *(uint8_t*)(((&((uint8_t*)_3891)[((int64_t)_3888)])));
  *(uint64_t*)_3887 = (llvm_add_u64(_3888, 1));
  _3893 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3892)), 0);
  _3894 = llvm_sub_u8(32, (llvm_shl_u8(_3893, 3)));
  _3895 = (((uint32_t)(uint8_t)_3892)) << 24;
  if ((((uint8_t)_3894) > ((uint8_t)((uint8_t)16)))) {
    _3907__PHI_TEMPORARY = _3895;   /* for PHI node */
    goto _3963;
  } else {
    _3896__PHI_TEMPORARY = 16;   /* for PHI node */
    _3897__PHI_TEMPORARY = _3895;   /* for PHI node */
    goto _3964;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3964:
  _3896 = _3896__PHI_TEMPORARY;
  _3897 = _3897__PHI_TEMPORARY;
  if (((((int64_t)_3896) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3896) < ((uint64_t)(((uint64_t)(uint8_t)_3894)))))) {
    _3907__PHI_TEMPORARY = _3897;   /* for PHI node */
    goto _3963;
  } else {
    goto _3965;
  }

_3965:
  _3898 = *(uint64_t*)_3887;
  _3899 = *(uint64_t*)_3889;
  if ((((int64_t)_3899) > ((int64_t)_3898))) {
    goto _3966;
  } else {
    _3907__PHI_TEMPORARY = _3897;   /* for PHI node */
    goto _3963;
  }

_3966:
  _3900 = *(void**)_3886;
  _3901 = *(uint8_t*)(((&((uint8_t*)_3900)[((int64_t)_3898)])));
  if ((((int8_t)_3901) > ((int8_t)((uint8_t)-65)))) {
    _3907__PHI_TEMPORARY = _3897;   /* for PHI node */
    goto _3963;
  } else {
    goto _3967;
  }

_3967:
  _3902 = llvm_select_u32((((int64_t)_3898) < ((int64_t)_3899)), (((uint32_t)(uint8_t)_3901)), 0);
  _3903 = *(uint64_t*)_3887;
  *(uint64_t*)_3887 = (llvm_add_u64(_3903, 1));
  _3904 = llvm_neg_u64(_3896);
  _3905 = _3897 | (llvm_select_u32((((int64_t)_3896) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3904) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3902, (((uint32_t)_3904)))))), (llvm_select_u32((((uint64_t)_3896) > ((uint64_t)UINT64_C(31))), 0, (_3902 << (((uint32_t)_3896)))))));
  _3906 = llvm_add_u64(_3896, -8);
  _3896__PHI_TEMPORARY = _3906;   /* for PHI node */
  _3897__PHI_TEMPORARY = _3905;   /* for PHI node */
  goto _3964;

  } while (1); /* end of syntactic loop '' */
_3963:
  _3907 = _3907__PHI_TEMPORARY;
  _3908 = *(uint64_t*)_3870;
  _3909 = *(uint64_t*)_3872;
  _3910 = jsyn_cbe_fshl_i64(_3909, _3908, 32);
  _3911 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3907)), _3909, 32);
  *(uint64_t*)_3870 = _3910;
  *(uint64_t*)_3872 = _3911;
  _3912 = ((&((uint8_t*)_3861)[((int64_t)48)]));
  _3913 = ((&((uint8_t*)_3861)[((int64_t)56)]));
  _3914 = *(uint64_t*)_3913;
  _3915 = ((&((uint8_t*)_3861)[((int64_t)64)]));
  _3916 = *(uint64_t*)_3915;
  _3917 = ((&((uint8_t*)_3861)[((int64_t)72)]));
  _3918 = *(uint64_t*)_3917;
  _3919 = *(void**)_3861;
  _3920 = *(uint64_t*)(((&((uint8_t*)_3919)[((int64_t)16)])));
  *(uint64_t*)_3912 = _3914;
  *(uint64_t*)_3913 = _3916;
  *(uint64_t*)_3915 = _3918;
  *(uint64_t*)_3917 = _3920;
  _3921 = *(void**)_3861;
  _3922 = ((&((uint8_t*)_3921)[((int64_t)16)]));
  _3923 = *(uint64_t*)_3922;
  _3924 = ((&((uint8_t*)_3921)[((int64_t)8)]));
  _3925 = *(uint64_t*)_3924;
  if ((((int64_t)_3925) > ((int64_t)_3923))) {
    goto _3968;
  } else {
    _3942__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3969;
  }

_3968:
  _3926 = *(void**)_3921;
  _3927 = *(uint8_t*)(((&((uint8_t*)_3926)[((int64_t)_3923)])));
  *(uint64_t*)_3922 = (llvm_add_u64(_3923, 1));
  _3928 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3927)), 0);
  _3929 = llvm_sub_u8(32, (llvm_shl_u8(_3928, 3)));
  _3930 = (((uint32_t)(uint8_t)_3927)) << 24;
  if ((((uint8_t)_3929) > ((uint8_t)((uint8_t)16)))) {
    _3942__PHI_TEMPORARY = _3930;   /* for PHI node */
    goto _3969;
  } else {
    _3931__PHI_TEMPORARY = 16;   /* for PHI node */
    _3932__PHI_TEMPORARY = _3930;   /* for PHI node */
    goto _3970;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3970:
  _3931 = _3931__PHI_TEMPORARY;
  _3932 = _3932__PHI_TEMPORARY;
  if (((((int64_t)_3931) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3931) < ((uint64_t)(((uint64_t)(uint8_t)_3929)))))) {
    _3942__PHI_TEMPORARY = _3932;   /* for PHI node */
    goto _3969;
  } else {
    goto _3971;
  }

_3971:
  _3933 = *(uint64_t*)_3922;
  _3934 = *(uint64_t*)_3924;
  if ((((int64_t)_3934) > ((int64_t)_3933))) {
    goto _3972;
  } else {
    _3942__PHI_TEMPORARY = _3932;   /* for PHI node */
    goto _3969;
  }

_3972:
  _3935 = *(void**)_3921;
  _3936 = *(uint8_t*)(((&((uint8_t*)_3935)[((int64_t)_3933)])));
  if ((((int8_t)_3936) > ((int8_t)((uint8_t)-65)))) {
    _3942__PHI_TEMPORARY = _3932;   /* for PHI node */
    goto _3969;
  } else {
    goto _3973;
  }

_3973:
  _3937 = llvm_select_u32((((int64_t)_3933) < ((int64_t)_3934)), (((uint32_t)(uint8_t)_3936)), 0);
  _3938 = *(uint64_t*)_3922;
  *(uint64_t*)_3922 = (llvm_add_u64(_3938, 1));
  _3939 = llvm_neg_u64(_3931);
  _3940 = _3932 | (llvm_select_u32((((int64_t)_3931) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3939) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3937, (((uint32_t)_3939)))))), (llvm_select_u32((((uint64_t)_3931) > ((uint64_t)UINT64_C(31))), 0, (_3937 << (((uint32_t)_3931)))))));
  _3941 = llvm_add_u64(_3931, -8);
  _3931__PHI_TEMPORARY = _3941;   /* for PHI node */
  _3932__PHI_TEMPORARY = _3940;   /* for PHI node */
  goto _3970;

  } while (1); /* end of syntactic loop '' */
_3969:
  _3942 = _3942__PHI_TEMPORARY;
  _3943 = *(uint64_t*)_3870;
  _3944 = *(uint64_t*)_3872;
  _3945 = jsyn_cbe_fshl_i64(_3944, _3943, 32);
  _3946 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3942)), _3944, 32);
  *(uint64_t*)_3870 = _3945;
  *(uint64_t*)_3872 = _3946;
  _3947 = *(uint64_t*)_3913;
  _3948 = *(uint64_t*)_3915;
  _3949 = *(uint64_t*)_3917;
  _3950 = *(void**)_3861;
  _3951 = *(uint64_t*)(((&((uint8_t*)_3950)[((int64_t)16)])));
  *(uint64_t*)_3912 = _3947;
  *(uint64_t*)_3913 = _3948;
  *(uint64_t*)_3915 = _3949;
  *(uint64_t*)_3917 = _3951;
  julia_emit_11((&_3865), _3860, _3861, 63, 1);
  _3952__PHI_TEMPORARY = (&_3865);   /* for PHI node */
  goto _3974;

_3974:
  _3952 = _3952__PHI_TEMPORARY;
  _3953 = memcpy(_3859, _3952, 32);
  _3954 = *(void**)(((&((uint8_t*)(&_3862))[((int64_t)8)])));
  *(void**)_3860 = _3954;
  return;
_3961:
  julia_emit_11((&_3866), _3860, _3861, 62, 1);
  _3952__PHI_TEMPORARY = (&_3866);   /* for PHI node */
  goto _3974;

}


static void julia_lex_percent_34(void* _3975, void* _3976, void* _3977) {
  struct l_array_4_uint64_t _3978;    /* Address-exposed local */
  struct l_array_4_uint64_t _3979;    /* Address-exposed local */
  void* _3980;
  uint64_t _3981;
  void* _3982;
  void* _3983;
  void* _3984;
  uint64_t _3985;
  void* _3986;
  uint64_t _3987;
  void* _3988;
  uint8_t _3989;
  uint8_t _3990;
  uint8_t _3991;
  uint32_t _3992;
  uint64_t _3993;
  uint64_t _3993__PHI_TEMPORARY;
  uint32_t _3994;
  uint32_t _3994__PHI_TEMPORARY;
  uint64_t _3995;
  uint64_t _3996;
  void* _3997;
  uint8_t _3998;
  uint32_t _3999;
  uint64_t _4000;
  uint64_t _4001;
  uint32_t _4002;
  uint64_t _4003;
  uint32_t _4004;
  uint32_t _4004__PHI_TEMPORARY;
  uint64_t _4005;
  uint64_t _4006;
  uint64_t _4007;
  uint64_t _4008;
  void* _4009;
  uint64_t _4010;
  void* _4011;
  uint64_t _4012;
  void* _4013;
  uint64_t _4014;
  void* _4015;
  uint64_t _4016;
  void* _4017;
  void* _4017__PHI_TEMPORARY;
  void* _4018;

  _3980 = ((&((uint8_t*)_3977)[((int64_t)32)]));
  _3981 = *(uint64_t*)_3980;
  _3982 = ((&((uint8_t*)_3977)[((int64_t)40)]));
  if (((_3981 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4019;
  } else {
    goto _4020;
  }

_4019:
  _3983 = *(void**)_3977;
  _3984 = ((&((uint8_t*)_3983)[((int64_t)16)]));
  _3985 = *(uint64_t*)_3984;
  _3986 = ((&((uint8_t*)_3983)[((int64_t)8)]));
  _3987 = *(uint64_t*)_3986;
  if ((((int64_t)_3987) > ((int64_t)_3985))) {
    goto _4021;
  } else {
    _4004__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4022;
  }

_4021:
  _3988 = *(void**)_3983;
  _3989 = *(uint8_t*)(((&((uint8_t*)_3988)[((int64_t)_3985)])));
  *(uint64_t*)_3984 = (llvm_add_u64(_3985, 1));
  _3990 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3989)), 0);
  _3991 = llvm_sub_u8(32, (llvm_shl_u8(_3990, 3)));
  _3992 = (((uint32_t)(uint8_t)_3989)) << 24;
  if ((((uint8_t)_3991) > ((uint8_t)((uint8_t)16)))) {
    _4004__PHI_TEMPORARY = _3992;   /* for PHI node */
    goto _4022;
  } else {
    _3993__PHI_TEMPORARY = 16;   /* for PHI node */
    _3994__PHI_TEMPORARY = _3992;   /* for PHI node */
    goto _4023;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4023:
  _3993 = _3993__PHI_TEMPORARY;
  _3994 = _3994__PHI_TEMPORARY;
  if (((((int64_t)_3993) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3993) < ((uint64_t)(((uint64_t)(uint8_t)_3991)))))) {
    _4004__PHI_TEMPORARY = _3994;   /* for PHI node */
    goto _4022;
  } else {
    goto _4024;
  }

_4024:
  _3995 = *(uint64_t*)_3984;
  _3996 = *(uint64_t*)_3986;
  if ((((int64_t)_3996) > ((int64_t)_3995))) {
    goto _4025;
  } else {
    _4004__PHI_TEMPORARY = _3994;   /* for PHI node */
    goto _4022;
  }

_4025:
  _3997 = *(void**)_3983;
  _3998 = *(uint8_t*)(((&((uint8_t*)_3997)[((int64_t)_3995)])));
  if ((((int8_t)_3998) > ((int8_t)((uint8_t)-65)))) {
    _4004__PHI_TEMPORARY = _3994;   /* for PHI node */
    goto _4022;
  } else {
    goto _4026;
  }

_4026:
  _3999 = llvm_select_u32((((int64_t)_3995) < ((int64_t)_3996)), (((uint32_t)(uint8_t)_3998)), 0);
  _4000 = *(uint64_t*)_3984;
  *(uint64_t*)_3984 = (llvm_add_u64(_4000, 1));
  _4001 = llvm_neg_u64(_3993);
  _4002 = _3994 | (llvm_select_u32((((int64_t)_3993) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4001) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3999, (((uint32_t)_4001)))))), (llvm_select_u32((((uint64_t)_3993) > ((uint64_t)UINT64_C(31))), 0, (_3999 << (((uint32_t)_3993)))))));
  _4003 = llvm_add_u64(_3993, -8);
  _3993__PHI_TEMPORARY = _4003;   /* for PHI node */
  _3994__PHI_TEMPORARY = _4002;   /* for PHI node */
  goto _4023;

  } while (1); /* end of syntactic loop '' */
_4022:
  _4004 = _4004__PHI_TEMPORARY;
  _4005 = *(uint64_t*)_3980;
  _4006 = *(uint64_t*)_3982;
  _4007 = jsyn_cbe_fshl_i64(_4006, _4005, 32);
  _4008 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4004)), _4006, 32);
  *(uint64_t*)_3980 = _4007;
  *(uint64_t*)_3982 = _4008;
  _4009 = ((&((uint8_t*)_3977)[((int64_t)56)]));
  _4010 = *(uint64_t*)_4009;
  _4011 = ((&((uint8_t*)_3977)[((int64_t)64)]));
  _4012 = *(uint64_t*)_4011;
  _4013 = ((&((uint8_t*)_3977)[((int64_t)72)]));
  _4014 = *(uint64_t*)_4013;
  _4015 = *(void**)_3977;
  _4016 = *(uint64_t*)(((&((uint8_t*)_4015)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3977)[((int64_t)48)]))) = _4010;
  *(uint64_t*)_4009 = _4012;
  *(uint64_t*)_4011 = _4014;
  *(uint64_t*)_4013 = _4016;
  julia_emit_11((&_3978), _3976, _3977, 71, 1);
  _4017__PHI_TEMPORARY = (&_3978);   /* for PHI node */
  goto _4027;

_4027:
  _4017 = _4017__PHI_TEMPORARY;
  _4018 = memcpy(_3975, _4017, 32);
  return;
_4020:
  julia_emit_11((&_3979), _3976, _3977, 595, 1);
  _4017__PHI_TEMPORARY = (&_3979);   /* for PHI node */
  goto _4027;

}


static void julia_lex_forwardslash_35(void* _4028, void* _4029, void* _4030) {
  struct l_array_4_uint64_t _4031;    /* Address-exposed local */
  struct l_array_4_uint64_t _4032;    /* Address-exposed local */
  struct l_array_4_uint64_t _4033;    /* Address-exposed local */
  struct l_array_4_uint64_t _4034;    /* Address-exposed local */
  void* _4035;
  uint64_t _4036;
  void* _4037;
  void* _4038;
  void* _4039;
  uint64_t _4040;
  void* _4041;
  uint64_t _4042;
  void* _4043;
  uint8_t _4044;
  uint8_t _4045;
  uint8_t _4046;
  uint32_t _4047;
  uint64_t _4048;
  uint64_t _4048__PHI_TEMPORARY;
  uint32_t _4049;
  uint32_t _4049__PHI_TEMPORARY;
  uint64_t _4050;
  uint64_t _4051;
  void* _4052;
  uint8_t _4053;
  uint32_t _4054;
  uint64_t _4055;
  uint64_t _4056;
  uint32_t _4057;
  uint64_t _4058;
  uint32_t _4059;
  uint32_t _4059__PHI_TEMPORARY;
  uint64_t _4060;
  uint64_t _4061;
  uint64_t _4062;
  uint64_t _4063;
  void* _4064;
  uint64_t _4065;
  void* _4066;
  uint64_t _4067;
  void* _4068;
  uint64_t _4069;
  void* _4070;
  uint64_t _4071;
  uint64_t _4072;
  void* _4073;
  void* _4074;
  uint64_t _4075;
  void* _4076;
  uint64_t _4077;
  void* _4078;
  uint8_t _4079;
  uint8_t _4080;
  uint8_t _4081;
  uint32_t _4082;
  uint64_t _4083;
  uint64_t _4083__PHI_TEMPORARY;
  uint32_t _4084;
  uint32_t _4084__PHI_TEMPORARY;
  uint64_t _4085;
  uint64_t _4086;
  void* _4087;
  uint8_t _4088;
  uint32_t _4089;
  uint64_t _4090;
  uint64_t _4091;
  uint32_t _4092;
  uint64_t _4093;
  uint32_t _4094;
  uint32_t _4094__PHI_TEMPORARY;
  uint64_t _4095;
  uint64_t _4096;
  uint64_t _4097;
  uint64_t _4098;
  void* _4099;
  uint64_t _4100;
  void* _4101;
  uint64_t _4102;
  void* _4103;
  uint64_t _4104;
  void* _4105;
  uint64_t _4106;
  void* _4107;
  void* _4107__PHI_TEMPORARY;
  void* _4108;
  uint64_t _4109;
  void* _4110;
  void* _4111;
  uint64_t _4112;
  void* _4113;
  uint64_t _4114;
  void* _4115;
  uint8_t _4116;
  uint8_t _4117;
  uint8_t _4118;
  uint32_t _4119;
  uint64_t _4120;
  uint64_t _4120__PHI_TEMPORARY;
  uint32_t _4121;
  uint32_t _4121__PHI_TEMPORARY;
  uint64_t _4122;
  uint64_t _4123;
  void* _4124;
  uint8_t _4125;
  uint32_t _4126;
  uint64_t _4127;
  uint64_t _4128;
  uint32_t _4129;
  uint64_t _4130;
  uint32_t _4131;
  uint32_t _4131__PHI_TEMPORARY;
  uint64_t _4132;
  uint64_t _4133;
  uint64_t _4134;
  uint64_t _4135;
  void* _4136;
  uint64_t _4137;
  void* _4138;
  uint64_t _4139;
  void* _4140;
  uint64_t _4141;
  void* _4142;
  uint64_t _4143;

  _4035 = ((&((uint8_t*)_4030)[((int64_t)32)]));
  _4036 = *(uint64_t*)_4035;
  _4037 = ((&((uint8_t*)_4030)[((int64_t)40)]));
  if (((_4036 & INT64_C(-4294967296)) == UINT64_C(3386706919782612992))) {
    goto _4144;
  } else {
    goto _4145;
  }

_4144:
  _4038 = *(void**)_4030;
  _4039 = ((&((uint8_t*)_4038)[((int64_t)16)]));
  _4040 = *(uint64_t*)_4039;
  _4041 = ((&((uint8_t*)_4038)[((int64_t)8)]));
  _4042 = *(uint64_t*)_4041;
  if ((((int64_t)_4042) > ((int64_t)_4040))) {
    goto _4146;
  } else {
    _4059__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4147;
  }

_4146:
  _4043 = *(void**)_4038;
  _4044 = *(uint8_t*)(((&((uint8_t*)_4043)[((int64_t)_4040)])));
  *(uint64_t*)_4039 = (llvm_add_u64(_4040, 1));
  _4045 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4044)), 0);
  _4046 = llvm_sub_u8(32, (llvm_shl_u8(_4045, 3)));
  _4047 = (((uint32_t)(uint8_t)_4044)) << 24;
  if ((((uint8_t)_4046) > ((uint8_t)((uint8_t)16)))) {
    _4059__PHI_TEMPORARY = _4047;   /* for PHI node */
    goto _4147;
  } else {
    _4048__PHI_TEMPORARY = 16;   /* for PHI node */
    _4049__PHI_TEMPORARY = _4047;   /* for PHI node */
    goto _4148;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4148:
  _4048 = _4048__PHI_TEMPORARY;
  _4049 = _4049__PHI_TEMPORARY;
  if (((((int64_t)_4048) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4048) < ((uint64_t)(((uint64_t)(uint8_t)_4046)))))) {
    _4059__PHI_TEMPORARY = _4049;   /* for PHI node */
    goto _4147;
  } else {
    goto _4149;
  }

_4149:
  _4050 = *(uint64_t*)_4039;
  _4051 = *(uint64_t*)_4041;
  if ((((int64_t)_4051) > ((int64_t)_4050))) {
    goto _4150;
  } else {
    _4059__PHI_TEMPORARY = _4049;   /* for PHI node */
    goto _4147;
  }

_4150:
  _4052 = *(void**)_4038;
  _4053 = *(uint8_t*)(((&((uint8_t*)_4052)[((int64_t)_4050)])));
  if ((((int8_t)_4053) > ((int8_t)((uint8_t)-65)))) {
    _4059__PHI_TEMPORARY = _4049;   /* for PHI node */
    goto _4147;
  } else {
    goto _4151;
  }

_4151:
  _4054 = llvm_select_u32((((int64_t)_4050) < ((int64_t)_4051)), (((uint32_t)(uint8_t)_4053)), 0);
  _4055 = *(uint64_t*)_4039;
  *(uint64_t*)_4039 = (llvm_add_u64(_4055, 1));
  _4056 = llvm_neg_u64(_4048);
  _4057 = _4049 | (llvm_select_u32((((int64_t)_4048) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4056) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4054, (((uint32_t)_4056)))))), (llvm_select_u32((((uint64_t)_4048) > ((uint64_t)UINT64_C(31))), 0, (_4054 << (((uint32_t)_4048)))))));
  _4058 = llvm_add_u64(_4048, -8);
  _4048__PHI_TEMPORARY = _4058;   /* for PHI node */
  _4049__PHI_TEMPORARY = _4057;   /* for PHI node */
  goto _4148;

  } while (1); /* end of syntactic loop '' */
_4147:
  _4059 = _4059__PHI_TEMPORARY;
  _4060 = *(uint64_t*)_4035;
  _4061 = *(uint64_t*)_4037;
  _4062 = jsyn_cbe_fshl_i64(_4061, _4060, 32);
  _4063 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4059)), _4061, 32);
  *(uint64_t*)_4035 = _4062;
  *(uint64_t*)_4037 = _4063;
  _4064 = ((&((uint8_t*)_4030)[((int64_t)56)]));
  _4065 = *(uint64_t*)_4064;
  _4066 = ((&((uint8_t*)_4030)[((int64_t)64)]));
  _4067 = *(uint64_t*)_4066;
  _4068 = ((&((uint8_t*)_4030)[((int64_t)72)]));
  _4069 = *(uint64_t*)_4068;
  _4070 = *(void**)_4030;
  _4071 = *(uint64_t*)(((&((uint8_t*)_4070)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4030)[((int64_t)48)]))) = _4065;
  *(uint64_t*)_4064 = _4067;
  *(uint64_t*)_4066 = _4069;
  *(uint64_t*)_4068 = _4071;
  _4072 = *(uint64_t*)_4035;
  if (((_4072 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4152;
  } else {
    goto _4153;
  }

_4152:
  _4073 = *(void**)_4030;
  _4074 = ((&((uint8_t*)_4073)[((int64_t)16)]));
  _4075 = *(uint64_t*)_4074;
  _4076 = ((&((uint8_t*)_4073)[((int64_t)8)]));
  _4077 = *(uint64_t*)_4076;
  if ((((int64_t)_4077) > ((int64_t)_4075))) {
    goto _4154;
  } else {
    _4094__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4155;
  }

_4154:
  _4078 = *(void**)_4073;
  _4079 = *(uint8_t*)(((&((uint8_t*)_4078)[((int64_t)_4075)])));
  *(uint64_t*)_4074 = (llvm_add_u64(_4075, 1));
  _4080 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4079)), 0);
  _4081 = llvm_sub_u8(32, (llvm_shl_u8(_4080, 3)));
  _4082 = (((uint32_t)(uint8_t)_4079)) << 24;
  if ((((uint8_t)_4081) > ((uint8_t)((uint8_t)16)))) {
    _4094__PHI_TEMPORARY = _4082;   /* for PHI node */
    goto _4155;
  } else {
    _4083__PHI_TEMPORARY = 16;   /* for PHI node */
    _4084__PHI_TEMPORARY = _4082;   /* for PHI node */
    goto _4156;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4156:
  _4083 = _4083__PHI_TEMPORARY;
  _4084 = _4084__PHI_TEMPORARY;
  if (((((int64_t)_4083) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4083) < ((uint64_t)(((uint64_t)(uint8_t)_4081)))))) {
    _4094__PHI_TEMPORARY = _4084;   /* for PHI node */
    goto _4155;
  } else {
    goto _4157;
  }

_4157:
  _4085 = *(uint64_t*)_4074;
  _4086 = *(uint64_t*)_4076;
  if ((((int64_t)_4086) > ((int64_t)_4085))) {
    goto _4158;
  } else {
    _4094__PHI_TEMPORARY = _4084;   /* for PHI node */
    goto _4155;
  }

_4158:
  _4087 = *(void**)_4073;
  _4088 = *(uint8_t*)(((&((uint8_t*)_4087)[((int64_t)_4085)])));
  if ((((int8_t)_4088) > ((int8_t)((uint8_t)-65)))) {
    _4094__PHI_TEMPORARY = _4084;   /* for PHI node */
    goto _4155;
  } else {
    goto _4159;
  }

_4159:
  _4089 = llvm_select_u32((((int64_t)_4085) < ((int64_t)_4086)), (((uint32_t)(uint8_t)_4088)), 0);
  _4090 = *(uint64_t*)_4074;
  *(uint64_t*)_4074 = (llvm_add_u64(_4090, 1));
  _4091 = llvm_neg_u64(_4083);
  _4092 = _4084 | (llvm_select_u32((((int64_t)_4083) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4091) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4089, (((uint32_t)_4091)))))), (llvm_select_u32((((uint64_t)_4083) > ((uint64_t)UINT64_C(31))), 0, (_4089 << (((uint32_t)_4083)))))));
  _4093 = llvm_add_u64(_4083, -8);
  _4083__PHI_TEMPORARY = _4093;   /* for PHI node */
  _4084__PHI_TEMPORARY = _4092;   /* for PHI node */
  goto _4156;

  } while (1); /* end of syntactic loop '' */
_4155:
  _4094 = _4094__PHI_TEMPORARY;
  _4095 = *(uint64_t*)_4035;
  _4096 = *(uint64_t*)_4037;
  _4097 = jsyn_cbe_fshl_i64(_4096, _4095, 32);
  _4098 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4094)), _4096, 32);
  *(uint64_t*)_4035 = _4097;
  *(uint64_t*)_4037 = _4098;
  _4099 = ((&((uint8_t*)_4030)[((int64_t)56)]));
  _4100 = *(uint64_t*)_4099;
  _4101 = ((&((uint8_t*)_4030)[((int64_t)64)]));
  _4102 = *(uint64_t*)_4101;
  _4103 = ((&((uint8_t*)_4030)[((int64_t)72)]));
  _4104 = *(uint64_t*)_4103;
  _4105 = *(void**)_4030;
  _4106 = *(uint64_t*)(((&((uint8_t*)_4105)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4030)[((int64_t)48)]))) = _4100;
  *(uint64_t*)_4099 = _4102;
  *(uint64_t*)_4101 = _4104;
  *(uint64_t*)_4103 = _4106;
  julia_emit_11((&_4031), _4029, _4030, 71, 1);
  _4107__PHI_TEMPORARY = (&_4031);   /* for PHI node */
  goto _4160;

_4160:
  _4107 = _4107__PHI_TEMPORARY;
  _4108 = memcpy(_4028, _4107, 32);
  return;
_4153:
  julia_emit_11((&_4032), _4029, _4030, 670, 1);
  _4107__PHI_TEMPORARY = (&_4032);   /* for PHI node */
  goto _4160;

_4145:
  _4109 = *(uint64_t*)_4035;
  if (((_4109 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4161;
  } else {
    goto _4162;
  }

_4161:
  _4110 = *(void**)_4030;
  _4111 = ((&((uint8_t*)_4110)[((int64_t)16)]));
  _4112 = *(uint64_t*)_4111;
  _4113 = ((&((uint8_t*)_4110)[((int64_t)8)]));
  _4114 = *(uint64_t*)_4113;
  if ((((int64_t)_4114) > ((int64_t)_4112))) {
    goto _4163;
  } else {
    _4131__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4164;
  }

_4163:
  _4115 = *(void**)_4110;
  _4116 = *(uint8_t*)(((&((uint8_t*)_4115)[((int64_t)_4112)])));
  *(uint64_t*)_4111 = (llvm_add_u64(_4112, 1));
  _4117 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4116)), 0);
  _4118 = llvm_sub_u8(32, (llvm_shl_u8(_4117, 3)));
  _4119 = (((uint32_t)(uint8_t)_4116)) << 24;
  if ((((uint8_t)_4118) > ((uint8_t)((uint8_t)16)))) {
    _4131__PHI_TEMPORARY = _4119;   /* for PHI node */
    goto _4164;
  } else {
    _4120__PHI_TEMPORARY = 16;   /* for PHI node */
    _4121__PHI_TEMPORARY = _4119;   /* for PHI node */
    goto _4165;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4165:
  _4120 = _4120__PHI_TEMPORARY;
  _4121 = _4121__PHI_TEMPORARY;
  if (((((int64_t)_4120) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4120) < ((uint64_t)(((uint64_t)(uint8_t)_4118)))))) {
    _4131__PHI_TEMPORARY = _4121;   /* for PHI node */
    goto _4164;
  } else {
    goto _4166;
  }

_4166:
  _4122 = *(uint64_t*)_4111;
  _4123 = *(uint64_t*)_4113;
  if ((((int64_t)_4123) > ((int64_t)_4122))) {
    goto _4167;
  } else {
    _4131__PHI_TEMPORARY = _4121;   /* for PHI node */
    goto _4164;
  }

_4167:
  _4124 = *(void**)_4110;
  _4125 = *(uint8_t*)(((&((uint8_t*)_4124)[((int64_t)_4122)])));
  if ((((int8_t)_4125) > ((int8_t)((uint8_t)-65)))) {
    _4131__PHI_TEMPORARY = _4121;   /* for PHI node */
    goto _4164;
  } else {
    goto _4168;
  }

_4168:
  _4126 = llvm_select_u32((((int64_t)_4122) < ((int64_t)_4123)), (((uint32_t)(uint8_t)_4125)), 0);
  _4127 = *(uint64_t*)_4111;
  *(uint64_t*)_4111 = (llvm_add_u64(_4127, 1));
  _4128 = llvm_neg_u64(_4120);
  _4129 = _4121 | (llvm_select_u32((((int64_t)_4120) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4128) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4126, (((uint32_t)_4128)))))), (llvm_select_u32((((uint64_t)_4120) > ((uint64_t)UINT64_C(31))), 0, (_4126 << (((uint32_t)_4120)))))));
  _4130 = llvm_add_u64(_4120, -8);
  _4120__PHI_TEMPORARY = _4130;   /* for PHI node */
  _4121__PHI_TEMPORARY = _4129;   /* for PHI node */
  goto _4165;

  } while (1); /* end of syntactic loop '' */
_4164:
  _4131 = _4131__PHI_TEMPORARY;
  _4132 = *(uint64_t*)_4035;
  _4133 = *(uint64_t*)_4037;
  _4134 = jsyn_cbe_fshl_i64(_4133, _4132, 32);
  _4135 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4131)), _4133, 32);
  *(uint64_t*)_4035 = _4134;
  *(uint64_t*)_4037 = _4135;
  _4136 = ((&((uint8_t*)_4030)[((int64_t)56)]));
  _4137 = *(uint64_t*)_4136;
  _4138 = ((&((uint8_t*)_4030)[((int64_t)64)]));
  _4139 = *(uint64_t*)_4138;
  _4140 = ((&((uint8_t*)_4030)[((int64_t)72)]));
  _4141 = *(uint64_t*)_4140;
  _4142 = *(void**)_4030;
  _4143 = *(uint64_t*)(((&((uint8_t*)_4142)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4030)[((int64_t)48)]))) = _4137;
  *(uint64_t*)_4136 = _4139;
  *(uint64_t*)_4138 = _4141;
  *(uint64_t*)_4140 = _4143;
  julia_emit_11((&_4033), _4029, _4030, 71, 1);
  _4107__PHI_TEMPORARY = (&_4033);   /* for PHI node */
  goto _4160;

_4162:
  julia_emit_11((&_4034), _4029, _4030, 593, 1);
  _4107__PHI_TEMPORARY = (&_4034);   /* for PHI node */
  goto _4160;

}


static void julia_lex_backslash_36(void* _4169, void* _4170, void* _4171) {
  struct l_array_4_uint64_t _4172;    /* Address-exposed local */
  struct l_array_4_uint64_t _4173;    /* Address-exposed local */
  void* _4174;
  uint64_t _4175;
  void* _4176;
  void* _4177;
  void* _4178;
  uint64_t _4179;
  void* _4180;
  uint64_t _4181;
  void* _4182;
  uint8_t _4183;
  uint8_t _4184;
  uint8_t _4185;
  uint32_t _4186;
  uint64_t _4187;
  uint64_t _4187__PHI_TEMPORARY;
  uint32_t _4188;
  uint32_t _4188__PHI_TEMPORARY;
  uint64_t _4189;
  uint64_t _4190;
  void* _4191;
  uint8_t _4192;
  uint32_t _4193;
  uint64_t _4194;
  uint64_t _4195;
  uint32_t _4196;
  uint64_t _4197;
  uint32_t _4198;
  uint32_t _4198__PHI_TEMPORARY;
  uint64_t _4199;
  uint64_t _4200;
  uint64_t _4201;
  uint64_t _4202;
  void* _4203;
  uint64_t _4204;
  void* _4205;
  uint64_t _4206;
  void* _4207;
  uint64_t _4208;
  void* _4209;
  uint64_t _4210;
  void* _4211;
  void* _4211__PHI_TEMPORARY;
  void* _4212;

  _4174 = ((&((uint8_t*)_4171)[((int64_t)32)]));
  _4175 = *(uint64_t*)_4174;
  _4176 = ((&((uint8_t*)_4171)[((int64_t)40)]));
  if (((_4175 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4213;
  } else {
    goto _4214;
  }

_4213:
  _4177 = *(void**)_4171;
  _4178 = ((&((uint8_t*)_4177)[((int64_t)16)]));
  _4179 = *(uint64_t*)_4178;
  _4180 = ((&((uint8_t*)_4177)[((int64_t)8)]));
  _4181 = *(uint64_t*)_4180;
  if ((((int64_t)_4181) > ((int64_t)_4179))) {
    goto _4215;
  } else {
    _4198__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4216;
  }

_4215:
  _4182 = *(void**)_4177;
  _4183 = *(uint8_t*)(((&((uint8_t*)_4182)[((int64_t)_4179)])));
  *(uint64_t*)_4178 = (llvm_add_u64(_4179, 1));
  _4184 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4183)), 0);
  _4185 = llvm_sub_u8(32, (llvm_shl_u8(_4184, 3)));
  _4186 = (((uint32_t)(uint8_t)_4183)) << 24;
  if ((((uint8_t)_4185) > ((uint8_t)((uint8_t)16)))) {
    _4198__PHI_TEMPORARY = _4186;   /* for PHI node */
    goto _4216;
  } else {
    _4187__PHI_TEMPORARY = 16;   /* for PHI node */
    _4188__PHI_TEMPORARY = _4186;   /* for PHI node */
    goto _4217;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4217:
  _4187 = _4187__PHI_TEMPORARY;
  _4188 = _4188__PHI_TEMPORARY;
  if (((((int64_t)_4187) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4187) < ((uint64_t)(((uint64_t)(uint8_t)_4185)))))) {
    _4198__PHI_TEMPORARY = _4188;   /* for PHI node */
    goto _4216;
  } else {
    goto _4218;
  }

_4218:
  _4189 = *(uint64_t*)_4178;
  _4190 = *(uint64_t*)_4180;
  if ((((int64_t)_4190) > ((int64_t)_4189))) {
    goto _4219;
  } else {
    _4198__PHI_TEMPORARY = _4188;   /* for PHI node */
    goto _4216;
  }

_4219:
  _4191 = *(void**)_4177;
  _4192 = *(uint8_t*)(((&((uint8_t*)_4191)[((int64_t)_4189)])));
  if ((((int8_t)_4192) > ((int8_t)((uint8_t)-65)))) {
    _4198__PHI_TEMPORARY = _4188;   /* for PHI node */
    goto _4216;
  } else {
    goto _4220;
  }

_4220:
  _4193 = llvm_select_u32((((int64_t)_4189) < ((int64_t)_4190)), (((uint32_t)(uint8_t)_4192)), 0);
  _4194 = *(uint64_t*)_4178;
  *(uint64_t*)_4178 = (llvm_add_u64(_4194, 1));
  _4195 = llvm_neg_u64(_4187);
  _4196 = _4188 | (llvm_select_u32((((int64_t)_4187) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4195) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4193, (((uint32_t)_4195)))))), (llvm_select_u32((((uint64_t)_4187) > ((uint64_t)UINT64_C(31))), 0, (_4193 << (((uint32_t)_4187)))))));
  _4197 = llvm_add_u64(_4187, -8);
  _4187__PHI_TEMPORARY = _4197;   /* for PHI node */
  _4188__PHI_TEMPORARY = _4196;   /* for PHI node */
  goto _4217;

  } while (1); /* end of syntactic loop '' */
_4216:
  _4198 = _4198__PHI_TEMPORARY;
  _4199 = *(uint64_t*)_4174;
  _4200 = *(uint64_t*)_4176;
  _4201 = jsyn_cbe_fshl_i64(_4200, _4199, 32);
  _4202 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4198)), _4200, 32);
  *(uint64_t*)_4174 = _4201;
  *(uint64_t*)_4176 = _4202;
  _4203 = ((&((uint8_t*)_4171)[((int64_t)56)]));
  _4204 = *(uint64_t*)_4203;
  _4205 = ((&((uint8_t*)_4171)[((int64_t)64)]));
  _4206 = *(uint64_t*)_4205;
  _4207 = ((&((uint8_t*)_4171)[((int64_t)72)]));
  _4208 = *(uint64_t*)_4207;
  _4209 = *(void**)_4171;
  _4210 = *(uint64_t*)(((&((uint8_t*)_4209)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4171)[((int64_t)48)]))) = _4204;
  *(uint64_t*)_4203 = _4206;
  *(uint64_t*)_4205 = _4208;
  *(uint64_t*)_4207 = _4210;
  julia_emit_11((&_4172), _4170, _4171, 71, 1);
  _4211__PHI_TEMPORARY = (&_4172);   /* for PHI node */
  goto _4221;

_4221:
  _4211 = _4211__PHI_TEMPORARY;
  _4212 = memcpy(_4169, _4211, 32);
  return;
_4214:
  julia_emit_11((&_4173), _4170, _4171, 599, 1);
  _4211__PHI_TEMPORARY = (&_4173);   /* for PHI node */
  goto _4221;

}


static void julia_lex_dot_37(void* _4222, void* _4223, void* _4224) {
  struct l_array_4_uint64_t _4225;    /* Address-exposed local */
  struct l_array_4_uint64_t _4226;    /* Address-exposed local */
  struct l_array_4_uint64_t _4227;    /* Address-exposed local */
  struct l_array_4_uint64_t _4228;    /* Address-exposed local */
  struct l_array_4_uint64_t _4229;    /* Address-exposed local */
  struct l_array_4_uint64_t _4230;    /* Address-exposed local */
  struct l_array_4_uint64_t _4231;    /* Address-exposed local */
  struct l_array_4_uint64_t _4232;    /* Address-exposed local */
  void* _4233;
  uint64_t _4234;
  void* _4235;
  void* _4236;
  void* _4237;
  uint64_t _4238;
  void* _4239;
  uint64_t _4240;
  void* _4241;
  uint8_t _4242;
  uint8_t _4243;
  uint8_t _4244;
  uint32_t _4245;
  uint64_t _4246;
  uint64_t _4246__PHI_TEMPORARY;
  uint32_t _4247;
  uint32_t _4247__PHI_TEMPORARY;
  uint64_t _4248;
  uint64_t _4249;
  void* _4250;
  uint8_t _4251;
  uint32_t _4252;
  uint64_t _4253;
  uint64_t _4254;
  uint32_t _4255;
  uint64_t _4256;
  uint32_t _4257;
  uint32_t _4257__PHI_TEMPORARY;
  uint64_t _4258;
  uint64_t _4259;
  uint64_t _4260;
  uint64_t _4261;
  void* _4262;
  uint64_t _4263;
  void* _4264;
  uint64_t _4265;
  void* _4266;
  uint64_t _4267;
  void* _4268;
  uint64_t _4269;
  uint64_t _4270;
  void* _4271;
  void* _4272;
  uint64_t _4273;
  void* _4274;
  uint64_t _4275;
  void* _4276;
  uint8_t _4277;
  uint8_t _4278;
  uint8_t _4279;
  uint32_t _4280;
  uint64_t _4281;
  uint64_t _4281__PHI_TEMPORARY;
  uint32_t _4282;
  uint32_t _4282__PHI_TEMPORARY;
  uint64_t _4283;
  uint64_t _4284;
  void* _4285;
  uint8_t _4286;
  uint32_t _4287;
  uint64_t _4288;
  uint64_t _4289;
  uint32_t _4290;
  uint64_t _4291;
  uint32_t _4292;
  uint32_t _4292__PHI_TEMPORARY;
  uint64_t _4293;
  uint64_t _4294;
  uint64_t _4295;
  uint64_t _4296;
  void* _4297;
  uint64_t _4298;
  void* _4299;
  uint64_t _4300;
  void* _4301;
  uint64_t _4302;
  void* _4303;
  uint64_t _4304;
  uint16_t _4305;
  void* _4306;
  void* _4306__PHI_TEMPORARY;
  void* _4307;
  uint64_t _4308;
  uint64_t _4309;
  uint8_t _4310;
  void* _4311;
  void* _4312;
  uint64_t _4313;
  void* _4314;
  uint64_t _4315;
  void* _4316;
  uint8_t _4317;
  uint8_t _4318;
  uint8_t _4319;
  uint32_t _4320;
  uint64_t _4321;
  uint64_t _4321__PHI_TEMPORARY;
  uint32_t _4322;
  uint32_t _4322__PHI_TEMPORARY;
  uint64_t _4323;
  uint64_t _4324;
  void* _4325;
  uint8_t _4326;
  uint32_t _4327;
  uint64_t _4328;
  uint64_t _4329;
  uint32_t _4330;
  uint64_t _4331;
  uint32_t _4332;
  uint32_t _4332__PHI_TEMPORARY;
  uint64_t _4333;
  uint64_t _4334;
  uint64_t _4335;
  uint64_t _4336;
  void* _4337;
  uint64_t _4338;
  void* _4339;
  uint64_t _4340;
  void* _4341;
  uint64_t _4342;
  void* _4343;
  uint64_t _4344;
  uint16_t _4345;
  uint64_t _4346;
  uint64_t _4347;
  uint16_t _4348;

  _4233 = ((&((uint8_t*)_4224)[((int64_t)32)]));
  _4234 = *(uint64_t*)_4233;
  _4235 = ((&((uint8_t*)_4224)[((int64_t)40)]));
  if (((_4234 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _4349;
  } else {
    goto _4350;
  }

_4349:
  _4236 = *(void**)_4224;
  _4237 = ((&((uint8_t*)_4236)[((int64_t)16)]));
  _4238 = *(uint64_t*)_4237;
  _4239 = ((&((uint8_t*)_4236)[((int64_t)8)]));
  _4240 = *(uint64_t*)_4239;
  if ((((int64_t)_4240) > ((int64_t)_4238))) {
    goto _4351;
  } else {
    _4257__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4352;
  }

_4351:
  _4241 = *(void**)_4236;
  _4242 = *(uint8_t*)(((&((uint8_t*)_4241)[((int64_t)_4238)])));
  *(uint64_t*)_4237 = (llvm_add_u64(_4238, 1));
  _4243 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4242)), 0);
  _4244 = llvm_sub_u8(32, (llvm_shl_u8(_4243, 3)));
  _4245 = (((uint32_t)(uint8_t)_4242)) << 24;
  if ((((uint8_t)_4244) > ((uint8_t)((uint8_t)16)))) {
    _4257__PHI_TEMPORARY = _4245;   /* for PHI node */
    goto _4352;
  } else {
    _4246__PHI_TEMPORARY = 16;   /* for PHI node */
    _4247__PHI_TEMPORARY = _4245;   /* for PHI node */
    goto _4353;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4353:
  _4246 = _4246__PHI_TEMPORARY;
  _4247 = _4247__PHI_TEMPORARY;
  if (((((int64_t)_4246) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4246) < ((uint64_t)(((uint64_t)(uint8_t)_4244)))))) {
    _4257__PHI_TEMPORARY = _4247;   /* for PHI node */
    goto _4352;
  } else {
    goto _4354;
  }

_4354:
  _4248 = *(uint64_t*)_4237;
  _4249 = *(uint64_t*)_4239;
  if ((((int64_t)_4249) > ((int64_t)_4248))) {
    goto _4355;
  } else {
    _4257__PHI_TEMPORARY = _4247;   /* for PHI node */
    goto _4352;
  }

_4355:
  _4250 = *(void**)_4236;
  _4251 = *(uint8_t*)(((&((uint8_t*)_4250)[((int64_t)_4248)])));
  if ((((int8_t)_4251) > ((int8_t)((uint8_t)-65)))) {
    _4257__PHI_TEMPORARY = _4247;   /* for PHI node */
    goto _4352;
  } else {
    goto _4356;
  }

_4356:
  _4252 = llvm_select_u32((((int64_t)_4248) < ((int64_t)_4249)), (((uint32_t)(uint8_t)_4251)), 0);
  _4253 = *(uint64_t*)_4237;
  *(uint64_t*)_4237 = (llvm_add_u64(_4253, 1));
  _4254 = llvm_neg_u64(_4246);
  _4255 = _4247 | (llvm_select_u32((((int64_t)_4246) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4254) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4252, (((uint32_t)_4254)))))), (llvm_select_u32((((uint64_t)_4246) > ((uint64_t)UINT64_C(31))), 0, (_4252 << (((uint32_t)_4246)))))));
  _4256 = llvm_add_u64(_4246, -8);
  _4246__PHI_TEMPORARY = _4256;   /* for PHI node */
  _4247__PHI_TEMPORARY = _4255;   /* for PHI node */
  goto _4353;

  } while (1); /* end of syntactic loop '' */
_4352:
  _4257 = _4257__PHI_TEMPORARY;
  _4258 = *(uint64_t*)_4233;
  _4259 = *(uint64_t*)_4235;
  _4260 = jsyn_cbe_fshl_i64(_4259, _4258, 32);
  _4261 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4257)), _4259, 32);
  *(uint64_t*)_4233 = _4260;
  *(uint64_t*)_4235 = _4261;
  _4262 = ((&((uint8_t*)_4224)[((int64_t)56)]));
  _4263 = *(uint64_t*)_4262;
  _4264 = ((&((uint8_t*)_4224)[((int64_t)64)]));
  _4265 = *(uint64_t*)_4264;
  _4266 = ((&((uint8_t*)_4224)[((int64_t)72)]));
  _4267 = *(uint64_t*)_4266;
  _4268 = *(void**)_4224;
  _4269 = *(uint64_t*)(((&((uint8_t*)_4268)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4224)[((int64_t)48)]))) = _4263;
  *(uint64_t*)_4262 = _4265;
  *(uint64_t*)_4264 = _4267;
  *(uint64_t*)_4266 = _4269;
  _4270 = *(uint64_t*)_4233;
  if (((_4270 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _4357;
  } else {
    goto _4358;
  }

_4357:
  _4271 = *(void**)_4224;
  _4272 = ((&((uint8_t*)_4271)[((int64_t)16)]));
  _4273 = *(uint64_t*)_4272;
  _4274 = ((&((uint8_t*)_4271)[((int64_t)8)]));
  _4275 = *(uint64_t*)_4274;
  if ((((int64_t)_4275) > ((int64_t)_4273))) {
    goto _4359;
  } else {
    _4292__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4360;
  }

_4359:
  _4276 = *(void**)_4271;
  _4277 = *(uint8_t*)(((&((uint8_t*)_4276)[((int64_t)_4273)])));
  *(uint64_t*)_4272 = (llvm_add_u64(_4273, 1));
  _4278 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4277)), 0);
  _4279 = llvm_sub_u8(32, (llvm_shl_u8(_4278, 3)));
  _4280 = (((uint32_t)(uint8_t)_4277)) << 24;
  if ((((uint8_t)_4279) > ((uint8_t)((uint8_t)16)))) {
    _4292__PHI_TEMPORARY = _4280;   /* for PHI node */
    goto _4360;
  } else {
    _4281__PHI_TEMPORARY = 16;   /* for PHI node */
    _4282__PHI_TEMPORARY = _4280;   /* for PHI node */
    goto _4361;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4361:
  _4281 = _4281__PHI_TEMPORARY;
  _4282 = _4282__PHI_TEMPORARY;
  if (((((int64_t)_4281) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4281) < ((uint64_t)(((uint64_t)(uint8_t)_4279)))))) {
    _4292__PHI_TEMPORARY = _4282;   /* for PHI node */
    goto _4360;
  } else {
    goto _4362;
  }

_4362:
  _4283 = *(uint64_t*)_4272;
  _4284 = *(uint64_t*)_4274;
  if ((((int64_t)_4284) > ((int64_t)_4283))) {
    goto _4363;
  } else {
    _4292__PHI_TEMPORARY = _4282;   /* for PHI node */
    goto _4360;
  }

_4363:
  _4285 = *(void**)_4271;
  _4286 = *(uint8_t*)(((&((uint8_t*)_4285)[((int64_t)_4283)])));
  if ((((int8_t)_4286) > ((int8_t)((uint8_t)-65)))) {
    _4292__PHI_TEMPORARY = _4282;   /* for PHI node */
    goto _4360;
  } else {
    goto _4364;
  }

_4364:
  _4287 = llvm_select_u32((((int64_t)_4283) < ((int64_t)_4284)), (((uint32_t)(uint8_t)_4286)), 0);
  _4288 = *(uint64_t*)_4272;
  *(uint64_t*)_4272 = (llvm_add_u64(_4288, 1));
  _4289 = llvm_neg_u64(_4281);
  _4290 = _4282 | (llvm_select_u32((((int64_t)_4281) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4289) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4287, (((uint32_t)_4289)))))), (llvm_select_u32((((uint64_t)_4281) > ((uint64_t)UINT64_C(31))), 0, (_4287 << (((uint32_t)_4281)))))));
  _4291 = llvm_add_u64(_4281, -8);
  _4281__PHI_TEMPORARY = _4291;   /* for PHI node */
  _4282__PHI_TEMPORARY = _4290;   /* for PHI node */
  goto _4361;

  } while (1); /* end of syntactic loop '' */
_4360:
  _4292 = _4292__PHI_TEMPORARY;
  _4293 = *(uint64_t*)_4233;
  _4294 = *(uint64_t*)_4235;
  _4295 = jsyn_cbe_fshl_i64(_4294, _4293, 32);
  _4296 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4292)), _4294, 32);
  *(uint64_t*)_4233 = _4295;
  *(uint64_t*)_4235 = _4296;
  _4297 = ((&((uint8_t*)_4224)[((int64_t)56)]));
  _4298 = *(uint64_t*)_4297;
  _4299 = ((&((uint8_t*)_4224)[((int64_t)64)]));
  _4300 = *(uint64_t*)_4299;
  _4301 = ((&((uint8_t*)_4224)[((int64_t)72)]));
  _4302 = *(uint64_t*)_4301;
  _4303 = *(void**)_4224;
  _4304 = *(uint64_t*)(((&((uint8_t*)_4303)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4224)[((int64_t)48)]))) = _4298;
  *(uint64_t*)_4297 = _4300;
  *(uint64_t*)_4299 = _4302;
  *(uint64_t*)_4301 = _4304;
  _4305 = *(uint16_t*)(((&((uint8_t*)_4224)[((int64_t)16)])));
  if ((_4305 == ((uint16_t)53))) {
    goto _4365;
  } else {
    goto _4366;
  }

_4367:
  _4306 = _4306__PHI_TEMPORARY;
  _4307 = memcpy(_4222, _4306, 32);
  return;
_4365:
  julia_emit_11((&_4225), _4223, _4224, 3, 1);
  _4306__PHI_TEMPORARY = (&_4225);   /* for PHI node */
  goto _4367;

_4366:
  julia_emit_11((&_4226), _4223, _4224, 68, 1);
  _4306__PHI_TEMPORARY = (&_4226);   /* for PHI node */
  goto _4367;

_4358:
  _4308 = *(uint64_t*)_4233;
  _4309 = llvm_lshr_u64(_4308, 32);
  switch ((((uint32_t)_4309))) {
  default:
    goto _4368;
  case 1056964608u:
    goto _4369;
  case 603979776u:
    goto _4369;
  case 973078528u:
    goto _4369;
  case 654311424u:
    goto _4369;
  }

_4368:
  _4310 = julia_is_operator_start_char_14(_4223, (((uint32_t)_4309)));
  if ((((bool)_4310&1u))) {
    goto _4370;
  } else {
    goto _4369;
  }

_4370:
  _4311 = *(void**)_4224;
  _4312 = ((&((uint8_t*)_4311)[((int64_t)16)]));
  _4313 = *(uint64_t*)_4312;
  _4314 = ((&((uint8_t*)_4311)[((int64_t)8)]));
  _4315 = *(uint64_t*)_4314;
  if ((((int64_t)_4315) > ((int64_t)_4313))) {
    goto _4371;
  } else {
    _4332__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4372;
  }

_4371:
  _4316 = *(void**)_4311;
  _4317 = *(uint8_t*)(((&((uint8_t*)_4316)[((int64_t)_4313)])));
  *(uint64_t*)_4312 = (llvm_add_u64(_4313, 1));
  _4318 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4317)), 0);
  _4319 = llvm_sub_u8(32, (llvm_shl_u8(_4318, 3)));
  _4320 = (((uint32_t)(uint8_t)_4317)) << 24;
  if ((((uint8_t)_4319) > ((uint8_t)((uint8_t)16)))) {
    _4332__PHI_TEMPORARY = _4320;   /* for PHI node */
    goto _4372;
  } else {
    _4321__PHI_TEMPORARY = 16;   /* for PHI node */
    _4322__PHI_TEMPORARY = _4320;   /* for PHI node */
    goto _4373;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4373:
  _4321 = _4321__PHI_TEMPORARY;
  _4322 = _4322__PHI_TEMPORARY;
  if (((((int64_t)_4321) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4321) < ((uint64_t)(((uint64_t)(uint8_t)_4319)))))) {
    _4332__PHI_TEMPORARY = _4322;   /* for PHI node */
    goto _4372;
  } else {
    goto _4374;
  }

_4374:
  _4323 = *(uint64_t*)_4312;
  _4324 = *(uint64_t*)_4314;
  if ((((int64_t)_4324) > ((int64_t)_4323))) {
    goto _4375;
  } else {
    _4332__PHI_TEMPORARY = _4322;   /* for PHI node */
    goto _4372;
  }

_4375:
  _4325 = *(void**)_4311;
  _4326 = *(uint8_t*)(((&((uint8_t*)_4325)[((int64_t)_4323)])));
  if ((((int8_t)_4326) > ((int8_t)((uint8_t)-65)))) {
    _4332__PHI_TEMPORARY = _4322;   /* for PHI node */
    goto _4372;
  } else {
    goto _4376;
  }

_4376:
  _4327 = llvm_select_u32((((int64_t)_4323) < ((int64_t)_4324)), (((uint32_t)(uint8_t)_4326)), 0);
  _4328 = *(uint64_t*)_4312;
  *(uint64_t*)_4312 = (llvm_add_u64(_4328, 1));
  _4329 = llvm_neg_u64(_4321);
  _4330 = _4322 | (llvm_select_u32((((int64_t)_4321) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4329) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4327, (((uint32_t)_4329)))))), (llvm_select_u32((((uint64_t)_4321) > ((uint64_t)UINT64_C(31))), 0, (_4327 << (((uint32_t)_4321)))))));
  _4331 = llvm_add_u64(_4321, -8);
  _4321__PHI_TEMPORARY = _4331;   /* for PHI node */
  _4322__PHI_TEMPORARY = _4330;   /* for PHI node */
  goto _4373;

  } while (1); /* end of syntactic loop '' */
_4372:
  _4332 = _4332__PHI_TEMPORARY;
  _4333 = *(uint64_t*)_4233;
  _4334 = *(uint64_t*)_4235;
  _4335 = jsyn_cbe_fshl_i64(_4334, _4333, 32);
  _4336 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4332)), _4334, 32);
  *(uint64_t*)_4233 = _4335;
  *(uint64_t*)_4235 = _4336;
  _4337 = ((&((uint8_t*)_4224)[((int64_t)56)]));
  _4338 = *(uint64_t*)_4337;
  _4339 = ((&((uint8_t*)_4224)[((int64_t)64)]));
  _4340 = *(uint64_t*)_4339;
  _4341 = ((&((uint8_t*)_4224)[((int64_t)72)]));
  _4342 = *(uint64_t*)_4341;
  _4343 = *(void**)_4224;
  _4344 = *(uint64_t*)(((&((uint8_t*)_4343)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4224)[((int64_t)48)]))) = _4338;
  *(uint64_t*)_4337 = _4340;
  *(uint64_t*)_4339 = _4342;
  *(uint64_t*)_4341 = _4344;
  julia_emit_11((&_4227), _4223, _4224, 66, 1);
  _4306__PHI_TEMPORARY = (&_4227);   /* for PHI node */
  goto _4367;

_4369:
  _4345 = *(uint16_t*)(((&((uint8_t*)_4224)[((int64_t)16)])));
  if ((_4345 == ((uint16_t)53))) {
    goto _4377;
  } else {
    goto _4378;
  }

_4377:
  julia_emit_11((&_4228), _4223, _4224, 3, 1);
  _4306__PHI_TEMPORARY = (&_4228);   /* for PHI node */
  goto _4367;

_4378:
  julia_emit_11((&_4229), _4223, _4224, 527, 1);
  _4306__PHI_TEMPORARY = (&_4229);   /* for PHI node */
  goto _4367;

_4350:
  _4346 = *(uint64_t*)_4233;
  _4347 = llvm_lshr_u64(_4346, 32);
  if ((((((uint64_t)_4346) < ((uint64_t)UINT64_C(3458764518115508224))) & (_4347 != UINT64_C(805306368))) | ((((uint64_t)_4346) > ((uint64_t)UINT64_C(4107282860161892351))) & (_4347 != UINT64_C(956301312))))) {
    goto _4379;
  } else {
    goto _4380;
  }

_4380:
  julia_lex_digit_41((&_4230), _4223, _4224, 48);
  _4306__PHI_TEMPORARY = (&_4230);   /* for PHI node */
  goto _4367;

_4379:
  _4348 = *(uint16_t*)(((&((uint8_t*)_4224)[((int64_t)16)])));
  if ((_4348 == ((uint16_t)53))) {
    goto _4381;
  } else {
    goto _4382;
  }

_4381:
  julia_emit_11((&_4231), _4223, _4224, 3, 1);
  _4306__PHI_TEMPORARY = (&_4231);   /* for PHI node */
  goto _4367;

_4382:
  julia_emit_11((&_4232), _4223, _4224, 707, 1);
  _4306__PHI_TEMPORARY = (&_4232);   /* for PHI node */
  goto _4367;

}


static void julia_lex_plus_38(void* _4383, void* _4384, void* _4385) {
  struct l_array_4_uint64_t _4386;    /* Address-exposed local */
  struct l_array_4_uint64_t _4387;    /* Address-exposed local */
  struct l_array_4_uint64_t _4388;    /* Address-exposed local */
  void* _4389;
  uint64_t _4390;
  void* _4391;
  void* _4392;
  void* _4393;
  uint64_t _4394;
  void* _4395;
  uint64_t _4396;
  void* _4397;
  uint8_t _4398;
  uint8_t _4399;
  uint8_t _4400;
  uint32_t _4401;
  uint64_t _4402;
  uint64_t _4402__PHI_TEMPORARY;
  uint32_t _4403;
  uint32_t _4403__PHI_TEMPORARY;
  uint64_t _4404;
  uint64_t _4405;
  void* _4406;
  uint8_t _4407;
  uint32_t _4408;
  uint64_t _4409;
  uint64_t _4410;
  uint32_t _4411;
  uint64_t _4412;
  uint32_t _4413;
  uint32_t _4413__PHI_TEMPORARY;
  uint64_t _4414;
  uint64_t _4415;
  uint64_t _4416;
  uint64_t _4417;
  void* _4418;
  uint64_t _4419;
  void* _4420;
  uint64_t _4421;
  void* _4422;
  uint64_t _4423;
  void* _4424;
  uint64_t _4425;
  void* _4426;
  void* _4426__PHI_TEMPORARY;
  void* _4427;
  uint64_t _4428;
  void* _4429;
  void* _4430;
  uint64_t _4431;
  void* _4432;
  uint64_t _4433;
  void* _4434;
  uint8_t _4435;
  uint8_t _4436;
  uint8_t _4437;
  uint32_t _4438;
  uint64_t _4439;
  uint64_t _4439__PHI_TEMPORARY;
  uint32_t _4440;
  uint32_t _4440__PHI_TEMPORARY;
  uint64_t _4441;
  uint64_t _4442;
  void* _4443;
  uint8_t _4444;
  uint32_t _4445;
  uint64_t _4446;
  uint64_t _4447;
  uint32_t _4448;
  uint64_t _4449;
  uint32_t _4450;
  uint32_t _4450__PHI_TEMPORARY;
  uint64_t _4451;
  uint64_t _4452;
  uint64_t _4453;
  uint64_t _4454;
  void* _4455;
  uint64_t _4456;
  void* _4457;
  uint64_t _4458;
  void* _4459;
  uint64_t _4460;
  void* _4461;
  uint64_t _4462;

  _4389 = ((&((uint8_t*)_4385)[((int64_t)32)]));
  _4390 = *(uint64_t*)_4389;
  _4391 = ((&((uint8_t*)_4385)[((int64_t)40)]));
  if (((_4390 & INT64_C(-4294967296)) == UINT64_C(3098476543630901248))) {
    goto _4463;
  } else {
    goto _4464;
  }

_4463:
  _4392 = *(void**)_4385;
  _4393 = ((&((uint8_t*)_4392)[((int64_t)16)]));
  _4394 = *(uint64_t*)_4393;
  _4395 = ((&((uint8_t*)_4392)[((int64_t)8)]));
  _4396 = *(uint64_t*)_4395;
  if ((((int64_t)_4396) > ((int64_t)_4394))) {
    goto _4465;
  } else {
    _4413__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4466;
  }

_4465:
  _4397 = *(void**)_4392;
  _4398 = *(uint8_t*)(((&((uint8_t*)_4397)[((int64_t)_4394)])));
  *(uint64_t*)_4393 = (llvm_add_u64(_4394, 1));
  _4399 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4398)), 0);
  _4400 = llvm_sub_u8(32, (llvm_shl_u8(_4399, 3)));
  _4401 = (((uint32_t)(uint8_t)_4398)) << 24;
  if ((((uint8_t)_4400) > ((uint8_t)((uint8_t)16)))) {
    _4413__PHI_TEMPORARY = _4401;   /* for PHI node */
    goto _4466;
  } else {
    _4402__PHI_TEMPORARY = 16;   /* for PHI node */
    _4403__PHI_TEMPORARY = _4401;   /* for PHI node */
    goto _4467;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4467:
  _4402 = _4402__PHI_TEMPORARY;
  _4403 = _4403__PHI_TEMPORARY;
  if (((((int64_t)_4402) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4402) < ((uint64_t)(((uint64_t)(uint8_t)_4400)))))) {
    _4413__PHI_TEMPORARY = _4403;   /* for PHI node */
    goto _4466;
  } else {
    goto _4468;
  }

_4468:
  _4404 = *(uint64_t*)_4393;
  _4405 = *(uint64_t*)_4395;
  if ((((int64_t)_4405) > ((int64_t)_4404))) {
    goto _4469;
  } else {
    _4413__PHI_TEMPORARY = _4403;   /* for PHI node */
    goto _4466;
  }

_4469:
  _4406 = *(void**)_4392;
  _4407 = *(uint8_t*)(((&((uint8_t*)_4406)[((int64_t)_4404)])));
  if ((((int8_t)_4407) > ((int8_t)((uint8_t)-65)))) {
    _4413__PHI_TEMPORARY = _4403;   /* for PHI node */
    goto _4466;
  } else {
    goto _4470;
  }

_4470:
  _4408 = llvm_select_u32((((int64_t)_4404) < ((int64_t)_4405)), (((uint32_t)(uint8_t)_4407)), 0);
  _4409 = *(uint64_t*)_4393;
  *(uint64_t*)_4393 = (llvm_add_u64(_4409, 1));
  _4410 = llvm_neg_u64(_4402);
  _4411 = _4403 | (llvm_select_u32((((int64_t)_4402) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4410) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4408, (((uint32_t)_4410)))))), (llvm_select_u32((((uint64_t)_4402) > ((uint64_t)UINT64_C(31))), 0, (_4408 << (((uint32_t)_4402)))))));
  _4412 = llvm_add_u64(_4402, -8);
  _4402__PHI_TEMPORARY = _4412;   /* for PHI node */
  _4403__PHI_TEMPORARY = _4411;   /* for PHI node */
  goto _4467;

  } while (1); /* end of syntactic loop '' */
_4466:
  _4413 = _4413__PHI_TEMPORARY;
  _4414 = *(uint64_t*)_4389;
  _4415 = *(uint64_t*)_4391;
  _4416 = jsyn_cbe_fshl_i64(_4415, _4414, 32);
  _4417 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4413)), _4415, 32);
  *(uint64_t*)_4389 = _4416;
  *(uint64_t*)_4391 = _4417;
  _4418 = ((&((uint8_t*)_4385)[((int64_t)56)]));
  _4419 = *(uint64_t*)_4418;
  _4420 = ((&((uint8_t*)_4385)[((int64_t)64)]));
  _4421 = *(uint64_t*)_4420;
  _4422 = ((&((uint8_t*)_4385)[((int64_t)72)]));
  _4423 = *(uint64_t*)_4422;
  _4424 = *(void**)_4385;
  _4425 = *(uint64_t*)(((&((uint8_t*)_4424)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4385)[((int64_t)48)]))) = _4419;
  *(uint64_t*)_4418 = _4421;
  *(uint64_t*)_4420 = _4423;
  *(uint64_t*)_4422 = _4425;
  julia_emit_11((&_4386), _4384, _4385, 537, 1);
  _4426__PHI_TEMPORARY = (&_4386);   /* for PHI node */
  goto _4471;

_4471:
  _4426 = _4426__PHI_TEMPORARY;
  _4427 = memcpy(_4383, _4426, 32);
  return;
_4464:
  _4428 = *(uint64_t*)_4389;
  if (((_4428 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4472;
  } else {
    goto _4473;
  }

_4472:
  _4429 = *(void**)_4385;
  _4430 = ((&((uint8_t*)_4429)[((int64_t)16)]));
  _4431 = *(uint64_t*)_4430;
  _4432 = ((&((uint8_t*)_4429)[((int64_t)8)]));
  _4433 = *(uint64_t*)_4432;
  if ((((int64_t)_4433) > ((int64_t)_4431))) {
    goto _4474;
  } else {
    _4450__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4475;
  }

_4474:
  _4434 = *(void**)_4429;
  _4435 = *(uint8_t*)(((&((uint8_t*)_4434)[((int64_t)_4431)])));
  *(uint64_t*)_4430 = (llvm_add_u64(_4431, 1));
  _4436 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4435)), 0);
  _4437 = llvm_sub_u8(32, (llvm_shl_u8(_4436, 3)));
  _4438 = (((uint32_t)(uint8_t)_4435)) << 24;
  if ((((uint8_t)_4437) > ((uint8_t)((uint8_t)16)))) {
    _4450__PHI_TEMPORARY = _4438;   /* for PHI node */
    goto _4475;
  } else {
    _4439__PHI_TEMPORARY = 16;   /* for PHI node */
    _4440__PHI_TEMPORARY = _4438;   /* for PHI node */
    goto _4476;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4476:
  _4439 = _4439__PHI_TEMPORARY;
  _4440 = _4440__PHI_TEMPORARY;
  if (((((int64_t)_4439) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4439) < ((uint64_t)(((uint64_t)(uint8_t)_4437)))))) {
    _4450__PHI_TEMPORARY = _4440;   /* for PHI node */
    goto _4475;
  } else {
    goto _4477;
  }

_4477:
  _4441 = *(uint64_t*)_4430;
  _4442 = *(uint64_t*)_4432;
  if ((((int64_t)_4442) > ((int64_t)_4441))) {
    goto _4478;
  } else {
    _4450__PHI_TEMPORARY = _4440;   /* for PHI node */
    goto _4475;
  }

_4478:
  _4443 = *(void**)_4429;
  _4444 = *(uint8_t*)(((&((uint8_t*)_4443)[((int64_t)_4441)])));
  if ((((int8_t)_4444) > ((int8_t)((uint8_t)-65)))) {
    _4450__PHI_TEMPORARY = _4440;   /* for PHI node */
    goto _4475;
  } else {
    goto _4479;
  }

_4479:
  _4445 = llvm_select_u32((((int64_t)_4441) < ((int64_t)_4442)), (((uint32_t)(uint8_t)_4444)), 0);
  _4446 = *(uint64_t*)_4430;
  *(uint64_t*)_4430 = (llvm_add_u64(_4446, 1));
  _4447 = llvm_neg_u64(_4439);
  _4448 = _4440 | (llvm_select_u32((((int64_t)_4439) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4447) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4445, (((uint32_t)_4447)))))), (llvm_select_u32((((uint64_t)_4439) > ((uint64_t)UINT64_C(31))), 0, (_4445 << (((uint32_t)_4439)))))));
  _4449 = llvm_add_u64(_4439, -8);
  _4439__PHI_TEMPORARY = _4449;   /* for PHI node */
  _4440__PHI_TEMPORARY = _4448;   /* for PHI node */
  goto _4476;

  } while (1); /* end of syntactic loop '' */
_4475:
  _4450 = _4450__PHI_TEMPORARY;
  _4451 = *(uint64_t*)_4389;
  _4452 = *(uint64_t*)_4391;
  _4453 = jsyn_cbe_fshl_i64(_4452, _4451, 32);
  _4454 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4450)), _4452, 32);
  *(uint64_t*)_4389 = _4453;
  *(uint64_t*)_4391 = _4454;
  _4455 = ((&((uint8_t*)_4385)[((int64_t)56)]));
  _4456 = *(uint64_t*)_4455;
  _4457 = ((&((uint8_t*)_4385)[((int64_t)64)]));
  _4458 = *(uint64_t*)_4457;
  _4459 = ((&((uint8_t*)_4385)[((int64_t)72)]));
  _4460 = *(uint64_t*)_4459;
  _4461 = *(void**)_4385;
  _4462 = *(uint64_t*)(((&((uint8_t*)_4461)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4385)[((int64_t)48)]))) = _4456;
  *(uint64_t*)_4455 = _4458;
  *(uint64_t*)_4457 = _4460;
  *(uint64_t*)_4459 = _4462;
  julia_emit_11((&_4387), _4384, _4385, 71, 1);
  _4426__PHI_TEMPORARY = (&_4387);   /* for PHI node */
  goto _4471;

_4473:
  julia_emit_11((&_4388), _4384, _4385, 535, 1);
  _4426__PHI_TEMPORARY = (&_4388);   /* for PHI node */
  goto _4471;

}


static void julia_lex_minus_39(void* _4480, void* _4481, void* _4482) {
  struct l_array_4_uint64_t _4483;    /* Address-exposed local */
  struct l_array_4_uint64_t _4484;    /* Address-exposed local */
  struct l_array_4_uint64_t _4485;    /* Address-exposed local */
  struct l_array_4_uint64_t _4486;    /* Address-exposed local */
  struct l_array_4_uint64_t _4487;    /* Address-exposed local */
  void* _4488;
  uint64_t _4489;
  void* _4490;
  void* _4491;
  void* _4492;
  uint64_t _4493;
  void* _4494;
  uint64_t _4495;
  void* _4496;
  uint8_t _4497;
  uint8_t _4498;
  uint8_t _4499;
  uint32_t _4500;
  uint64_t _4501;
  uint64_t _4501__PHI_TEMPORARY;
  uint32_t _4502;
  uint32_t _4502__PHI_TEMPORARY;
  uint64_t _4503;
  uint64_t _4504;
  void* _4505;
  uint8_t _4506;
  uint32_t _4507;
  uint64_t _4508;
  uint64_t _4509;
  uint32_t _4510;
  uint64_t _4511;
  uint32_t _4512;
  uint32_t _4512__PHI_TEMPORARY;
  uint64_t _4513;
  uint64_t _4514;
  uint64_t _4515;
  uint64_t _4516;
  void* _4517;
  uint64_t _4518;
  void* _4519;
  uint64_t _4520;
  void* _4521;
  uint64_t _4522;
  void* _4523;
  uint64_t _4524;
  uint64_t _4525;
  void* _4526;
  void* _4527;
  uint64_t _4528;
  void* _4529;
  uint64_t _4530;
  void* _4531;
  uint8_t _4532;
  uint8_t _4533;
  uint8_t _4534;
  uint32_t _4535;
  uint64_t _4536;
  uint64_t _4536__PHI_TEMPORARY;
  uint32_t _4537;
  uint32_t _4537__PHI_TEMPORARY;
  uint64_t _4538;
  uint64_t _4539;
  void* _4540;
  uint8_t _4541;
  uint32_t _4542;
  uint64_t _4543;
  uint64_t _4544;
  uint32_t _4545;
  uint64_t _4546;
  uint32_t _4547;
  uint32_t _4547__PHI_TEMPORARY;
  uint64_t _4548;
  uint64_t _4549;
  uint64_t _4550;
  uint64_t _4551;
  void* _4552;
  uint64_t _4553;
  void* _4554;
  uint64_t _4555;
  void* _4556;
  uint64_t _4557;
  void* _4558;
  uint64_t _4559;
  void* _4560;
  void* _4560__PHI_TEMPORARY;
  void* _4561;
  uint16_t _4562;
  uint64_t _4563;
  void* _4564;
  void* _4565;
  uint64_t _4566;
  void* _4567;
  uint64_t _4568;
  void* _4569;
  uint8_t _4570;
  uint8_t _4571;
  uint8_t _4572;
  uint32_t _4573;
  uint64_t _4574;
  uint64_t _4574__PHI_TEMPORARY;
  uint32_t _4575;
  uint32_t _4575__PHI_TEMPORARY;
  uint64_t _4576;
  uint64_t _4577;
  void* _4578;
  uint8_t _4579;
  uint32_t _4580;
  uint64_t _4581;
  uint64_t _4582;
  uint32_t _4583;
  uint64_t _4584;
  uint32_t _4585;
  uint32_t _4585__PHI_TEMPORARY;
  uint64_t _4586;
  uint64_t _4587;
  uint64_t _4588;
  uint64_t _4589;
  void* _4590;
  uint64_t _4591;
  void* _4592;
  uint64_t _4593;
  void* _4594;
  uint64_t _4595;
  void* _4596;
  uint64_t _4597;
  uint64_t _4598;
  void* _4599;
  void* _4600;
  uint64_t _4601;
  void* _4602;
  uint64_t _4603;
  void* _4604;
  uint8_t _4605;
  uint8_t _4606;
  uint8_t _4607;
  uint32_t _4608;
  uint64_t _4609;
  uint64_t _4609__PHI_TEMPORARY;
  uint32_t _4610;
  uint32_t _4610__PHI_TEMPORARY;
  uint64_t _4611;
  uint64_t _4612;
  void* _4613;
  uint8_t _4614;
  uint32_t _4615;
  uint64_t _4616;
  uint64_t _4617;
  uint32_t _4618;
  uint64_t _4619;
  uint32_t _4620;
  uint32_t _4620__PHI_TEMPORARY;
  uint64_t _4621;
  uint64_t _4622;
  uint64_t _4623;
  uint64_t _4624;
  void* _4625;
  uint64_t _4626;
  void* _4627;
  uint64_t _4628;
  void* _4629;
  uint64_t _4630;
  void* _4631;
  uint64_t _4632;

  _4488 = ((&((uint8_t*)_4482)[((int64_t)32)]));
  _4489 = *(uint64_t*)_4488;
  _4490 = ((&((uint8_t*)_4482)[((int64_t)40)]));
  if (((_4489 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _4633;
  } else {
    goto _4634;
  }

_4633:
  _4491 = *(void**)_4482;
  _4492 = ((&((uint8_t*)_4491)[((int64_t)16)]));
  _4493 = *(uint64_t*)_4492;
  _4494 = ((&((uint8_t*)_4491)[((int64_t)8)]));
  _4495 = *(uint64_t*)_4494;
  if ((((int64_t)_4495) > ((int64_t)_4493))) {
    goto _4635;
  } else {
    _4512__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4636;
  }

_4635:
  _4496 = *(void**)_4491;
  _4497 = *(uint8_t*)(((&((uint8_t*)_4496)[((int64_t)_4493)])));
  *(uint64_t*)_4492 = (llvm_add_u64(_4493, 1));
  _4498 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4497)), 0);
  _4499 = llvm_sub_u8(32, (llvm_shl_u8(_4498, 3)));
  _4500 = (((uint32_t)(uint8_t)_4497)) << 24;
  if ((((uint8_t)_4499) > ((uint8_t)((uint8_t)16)))) {
    _4512__PHI_TEMPORARY = _4500;   /* for PHI node */
    goto _4636;
  } else {
    _4501__PHI_TEMPORARY = 16;   /* for PHI node */
    _4502__PHI_TEMPORARY = _4500;   /* for PHI node */
    goto _4637;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4637:
  _4501 = _4501__PHI_TEMPORARY;
  _4502 = _4502__PHI_TEMPORARY;
  if (((((int64_t)_4501) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4501) < ((uint64_t)(((uint64_t)(uint8_t)_4499)))))) {
    _4512__PHI_TEMPORARY = _4502;   /* for PHI node */
    goto _4636;
  } else {
    goto _4638;
  }

_4638:
  _4503 = *(uint64_t*)_4492;
  _4504 = *(uint64_t*)_4494;
  if ((((int64_t)_4504) > ((int64_t)_4503))) {
    goto _4639;
  } else {
    _4512__PHI_TEMPORARY = _4502;   /* for PHI node */
    goto _4636;
  }

_4639:
  _4505 = *(void**)_4491;
  _4506 = *(uint8_t*)(((&((uint8_t*)_4505)[((int64_t)_4503)])));
  if ((((int8_t)_4506) > ((int8_t)((uint8_t)-65)))) {
    _4512__PHI_TEMPORARY = _4502;   /* for PHI node */
    goto _4636;
  } else {
    goto _4640;
  }

_4640:
  _4507 = llvm_select_u32((((int64_t)_4503) < ((int64_t)_4504)), (((uint32_t)(uint8_t)_4506)), 0);
  _4508 = *(uint64_t*)_4492;
  *(uint64_t*)_4492 = (llvm_add_u64(_4508, 1));
  _4509 = llvm_neg_u64(_4501);
  _4510 = _4502 | (llvm_select_u32((((int64_t)_4501) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4509) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4507, (((uint32_t)_4509)))))), (llvm_select_u32((((uint64_t)_4501) > ((uint64_t)UINT64_C(31))), 0, (_4507 << (((uint32_t)_4501)))))));
  _4511 = llvm_add_u64(_4501, -8);
  _4501__PHI_TEMPORARY = _4511;   /* for PHI node */
  _4502__PHI_TEMPORARY = _4510;   /* for PHI node */
  goto _4637;

  } while (1); /* end of syntactic loop '' */
_4636:
  _4512 = _4512__PHI_TEMPORARY;
  _4513 = *(uint64_t*)_4488;
  _4514 = *(uint64_t*)_4490;
  _4515 = jsyn_cbe_fshl_i64(_4514, _4513, 32);
  _4516 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4512)), _4514, 32);
  *(uint64_t*)_4488 = _4515;
  *(uint64_t*)_4490 = _4516;
  _4517 = ((&((uint8_t*)_4482)[((int64_t)56)]));
  _4518 = *(uint64_t*)_4517;
  _4519 = ((&((uint8_t*)_4482)[((int64_t)64)]));
  _4520 = *(uint64_t*)_4519;
  _4521 = ((&((uint8_t*)_4482)[((int64_t)72)]));
  _4522 = *(uint64_t*)_4521;
  _4523 = *(void**)_4482;
  _4524 = *(uint64_t*)(((&((uint8_t*)_4523)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4482)[((int64_t)48)]))) = _4518;
  *(uint64_t*)_4517 = _4520;
  *(uint64_t*)_4519 = _4522;
  *(uint64_t*)_4521 = _4524;
  _4525 = *(uint64_t*)_4488;
  if (((_4525 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _4641;
  } else {
    goto _4642;
  }

_4641:
  _4526 = *(void**)_4482;
  _4527 = ((&((uint8_t*)_4526)[((int64_t)16)]));
  _4528 = *(uint64_t*)_4527;
  _4529 = ((&((uint8_t*)_4526)[((int64_t)8)]));
  _4530 = *(uint64_t*)_4529;
  if ((((int64_t)_4530) > ((int64_t)_4528))) {
    goto _4643;
  } else {
    _4547__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4644;
  }

_4643:
  _4531 = *(void**)_4526;
  _4532 = *(uint8_t*)(((&((uint8_t*)_4531)[((int64_t)_4528)])));
  *(uint64_t*)_4527 = (llvm_add_u64(_4528, 1));
  _4533 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4532)), 0);
  _4534 = llvm_sub_u8(32, (llvm_shl_u8(_4533, 3)));
  _4535 = (((uint32_t)(uint8_t)_4532)) << 24;
  if ((((uint8_t)_4534) > ((uint8_t)((uint8_t)16)))) {
    _4547__PHI_TEMPORARY = _4535;   /* for PHI node */
    goto _4644;
  } else {
    _4536__PHI_TEMPORARY = 16;   /* for PHI node */
    _4537__PHI_TEMPORARY = _4535;   /* for PHI node */
    goto _4645;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4645:
  _4536 = _4536__PHI_TEMPORARY;
  _4537 = _4537__PHI_TEMPORARY;
  if (((((int64_t)_4536) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4536) < ((uint64_t)(((uint64_t)(uint8_t)_4534)))))) {
    _4547__PHI_TEMPORARY = _4537;   /* for PHI node */
    goto _4644;
  } else {
    goto _4646;
  }

_4646:
  _4538 = *(uint64_t*)_4527;
  _4539 = *(uint64_t*)_4529;
  if ((((int64_t)_4539) > ((int64_t)_4538))) {
    goto _4647;
  } else {
    _4547__PHI_TEMPORARY = _4537;   /* for PHI node */
    goto _4644;
  }

_4647:
  _4540 = *(void**)_4526;
  _4541 = *(uint8_t*)(((&((uint8_t*)_4540)[((int64_t)_4538)])));
  if ((((int8_t)_4541) > ((int8_t)((uint8_t)-65)))) {
    _4547__PHI_TEMPORARY = _4537;   /* for PHI node */
    goto _4644;
  } else {
    goto _4648;
  }

_4648:
  _4542 = llvm_select_u32((((int64_t)_4538) < ((int64_t)_4539)), (((uint32_t)(uint8_t)_4541)), 0);
  _4543 = *(uint64_t*)_4527;
  *(uint64_t*)_4527 = (llvm_add_u64(_4543, 1));
  _4544 = llvm_neg_u64(_4536);
  _4545 = _4537 | (llvm_select_u32((((int64_t)_4536) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4544) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4542, (((uint32_t)_4544)))))), (llvm_select_u32((((uint64_t)_4536) > ((uint64_t)UINT64_C(31))), 0, (_4542 << (((uint32_t)_4536)))))));
  _4546 = llvm_add_u64(_4536, -8);
  _4536__PHI_TEMPORARY = _4546;   /* for PHI node */
  _4537__PHI_TEMPORARY = _4545;   /* for PHI node */
  goto _4645;

  } while (1); /* end of syntactic loop '' */
_4644:
  _4547 = _4547__PHI_TEMPORARY;
  _4548 = *(uint64_t*)_4488;
  _4549 = *(uint64_t*)_4490;
  _4550 = jsyn_cbe_fshl_i64(_4549, _4548, 32);
  _4551 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4547)), _4549, 32);
  *(uint64_t*)_4488 = _4550;
  *(uint64_t*)_4490 = _4551;
  _4552 = ((&((uint8_t*)_4482)[((int64_t)56)]));
  _4553 = *(uint64_t*)_4552;
  _4554 = ((&((uint8_t*)_4482)[((int64_t)64)]));
  _4555 = *(uint64_t*)_4554;
  _4556 = ((&((uint8_t*)_4482)[((int64_t)72)]));
  _4557 = *(uint64_t*)_4556;
  _4558 = *(void**)_4482;
  _4559 = *(uint64_t*)(((&((uint8_t*)_4558)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4482)[((int64_t)48)]))) = _4553;
  *(uint64_t*)_4552 = _4555;
  *(uint64_t*)_4554 = _4557;
  *(uint64_t*)_4556 = _4559;
  julia_emit_11((&_4483), _4481, _4482, 80, 1);
  _4560__PHI_TEMPORARY = (&_4483);   /* for PHI node */
  goto _4649;

_4649:
  _4560 = _4560__PHI_TEMPORARY;
  _4561 = memcpy(_4480, _4560, 32);
  return;
_4642:
  julia_emit_11((&_4484), _4481, _4482, 66, 1);
  _4560__PHI_TEMPORARY = (&_4484);   /* for PHI node */
  goto _4649;

_4634:
  _4562 = *(uint16_t*)(((&((uint8_t*)_4482)[((int64_t)16)])));
  if ((_4562 == ((uint16_t)707))) {
    goto _4650;
  } else {
    goto _4651;
  }

_4651:
  _4563 = *(uint64_t*)_4488;
  if (((_4563 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _4652;
  } else {
    goto _4650;
  }

_4652:
  _4564 = *(void**)_4482;
  _4565 = ((&((uint8_t*)_4564)[((int64_t)16)]));
  _4566 = *(uint64_t*)_4565;
  _4567 = ((&((uint8_t*)_4564)[((int64_t)8)]));
  _4568 = *(uint64_t*)_4567;
  if ((((int64_t)_4568) > ((int64_t)_4566))) {
    goto _4653;
  } else {
    _4585__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4654;
  }

_4653:
  _4569 = *(void**)_4564;
  _4570 = *(uint8_t*)(((&((uint8_t*)_4569)[((int64_t)_4566)])));
  *(uint64_t*)_4565 = (llvm_add_u64(_4566, 1));
  _4571 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4570)), 0);
  _4572 = llvm_sub_u8(32, (llvm_shl_u8(_4571, 3)));
  _4573 = (((uint32_t)(uint8_t)_4570)) << 24;
  if ((((uint8_t)_4572) > ((uint8_t)((uint8_t)16)))) {
    _4585__PHI_TEMPORARY = _4573;   /* for PHI node */
    goto _4654;
  } else {
    _4574__PHI_TEMPORARY = 16;   /* for PHI node */
    _4575__PHI_TEMPORARY = _4573;   /* for PHI node */
    goto _4655;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4655:
  _4574 = _4574__PHI_TEMPORARY;
  _4575 = _4575__PHI_TEMPORARY;
  if (((((int64_t)_4574) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4574) < ((uint64_t)(((uint64_t)(uint8_t)_4572)))))) {
    _4585__PHI_TEMPORARY = _4575;   /* for PHI node */
    goto _4654;
  } else {
    goto _4656;
  }

_4656:
  _4576 = *(uint64_t*)_4565;
  _4577 = *(uint64_t*)_4567;
  if ((((int64_t)_4577) > ((int64_t)_4576))) {
    goto _4657;
  } else {
    _4585__PHI_TEMPORARY = _4575;   /* for PHI node */
    goto _4654;
  }

_4657:
  _4578 = *(void**)_4564;
  _4579 = *(uint8_t*)(((&((uint8_t*)_4578)[((int64_t)_4576)])));
  if ((((int8_t)_4579) > ((int8_t)((uint8_t)-65)))) {
    _4585__PHI_TEMPORARY = _4575;   /* for PHI node */
    goto _4654;
  } else {
    goto _4658;
  }

_4658:
  _4580 = llvm_select_u32((((int64_t)_4576) < ((int64_t)_4577)), (((uint32_t)(uint8_t)_4579)), 0);
  _4581 = *(uint64_t*)_4565;
  *(uint64_t*)_4565 = (llvm_add_u64(_4581, 1));
  _4582 = llvm_neg_u64(_4574);
  _4583 = _4575 | (llvm_select_u32((((int64_t)_4574) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4582) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4580, (((uint32_t)_4582)))))), (llvm_select_u32((((uint64_t)_4574) > ((uint64_t)UINT64_C(31))), 0, (_4580 << (((uint32_t)_4574)))))));
  _4584 = llvm_add_u64(_4574, -8);
  _4574__PHI_TEMPORARY = _4584;   /* for PHI node */
  _4575__PHI_TEMPORARY = _4583;   /* for PHI node */
  goto _4655;

  } while (1); /* end of syntactic loop '' */
_4654:
  _4585 = _4585__PHI_TEMPORARY;
  _4586 = *(uint64_t*)_4488;
  _4587 = *(uint64_t*)_4490;
  _4588 = jsyn_cbe_fshl_i64(_4587, _4586, 32);
  _4589 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4585)), _4587, 32);
  *(uint64_t*)_4488 = _4588;
  *(uint64_t*)_4490 = _4589;
  _4590 = ((&((uint8_t*)_4482)[((int64_t)56)]));
  _4591 = *(uint64_t*)_4590;
  _4592 = ((&((uint8_t*)_4482)[((int64_t)64)]));
  _4593 = *(uint64_t*)_4592;
  _4594 = ((&((uint8_t*)_4482)[((int64_t)72)]));
  _4595 = *(uint64_t*)_4594;
  _4596 = *(void**)_4482;
  _4597 = *(uint64_t*)(((&((uint8_t*)_4596)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4482)[((int64_t)48)]))) = _4591;
  *(uint64_t*)_4590 = _4593;
  *(uint64_t*)_4592 = _4595;
  *(uint64_t*)_4594 = _4597;
  julia_emit_11((&_4485), _4481, _4482, 711, 1);
  _4560__PHI_TEMPORARY = (&_4485);   /* for PHI node */
  goto _4649;

_4650:
  _4598 = *(uint64_t*)_4488;
  if (((_4598 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4659;
  } else {
    goto _4660;
  }

_4659:
  _4599 = *(void**)_4482;
  _4600 = ((&((uint8_t*)_4599)[((int64_t)16)]));
  _4601 = *(uint64_t*)_4600;
  _4602 = ((&((uint8_t*)_4599)[((int64_t)8)]));
  _4603 = *(uint64_t*)_4602;
  if ((((int64_t)_4603) > ((int64_t)_4601))) {
    goto _4661;
  } else {
    _4620__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4662;
  }

_4661:
  _4604 = *(void**)_4599;
  _4605 = *(uint8_t*)(((&((uint8_t*)_4604)[((int64_t)_4601)])));
  *(uint64_t*)_4600 = (llvm_add_u64(_4601, 1));
  _4606 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4605)), 0);
  _4607 = llvm_sub_u8(32, (llvm_shl_u8(_4606, 3)));
  _4608 = (((uint32_t)(uint8_t)_4605)) << 24;
  if ((((uint8_t)_4607) > ((uint8_t)((uint8_t)16)))) {
    _4620__PHI_TEMPORARY = _4608;   /* for PHI node */
    goto _4662;
  } else {
    _4609__PHI_TEMPORARY = 16;   /* for PHI node */
    _4610__PHI_TEMPORARY = _4608;   /* for PHI node */
    goto _4663;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4663:
  _4609 = _4609__PHI_TEMPORARY;
  _4610 = _4610__PHI_TEMPORARY;
  if (((((int64_t)_4609) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4609) < ((uint64_t)(((uint64_t)(uint8_t)_4607)))))) {
    _4620__PHI_TEMPORARY = _4610;   /* for PHI node */
    goto _4662;
  } else {
    goto _4664;
  }

_4664:
  _4611 = *(uint64_t*)_4600;
  _4612 = *(uint64_t*)_4602;
  if ((((int64_t)_4612) > ((int64_t)_4611))) {
    goto _4665;
  } else {
    _4620__PHI_TEMPORARY = _4610;   /* for PHI node */
    goto _4662;
  }

_4665:
  _4613 = *(void**)_4599;
  _4614 = *(uint8_t*)(((&((uint8_t*)_4613)[((int64_t)_4611)])));
  if ((((int8_t)_4614) > ((int8_t)((uint8_t)-65)))) {
    _4620__PHI_TEMPORARY = _4610;   /* for PHI node */
    goto _4662;
  } else {
    goto _4666;
  }

_4666:
  _4615 = llvm_select_u32((((int64_t)_4611) < ((int64_t)_4612)), (((uint32_t)(uint8_t)_4614)), 0);
  _4616 = *(uint64_t*)_4600;
  *(uint64_t*)_4600 = (llvm_add_u64(_4616, 1));
  _4617 = llvm_neg_u64(_4609);
  _4618 = _4610 | (llvm_select_u32((((int64_t)_4609) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4617) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4615, (((uint32_t)_4617)))))), (llvm_select_u32((((uint64_t)_4609) > ((uint64_t)UINT64_C(31))), 0, (_4615 << (((uint32_t)_4609)))))));
  _4619 = llvm_add_u64(_4609, -8);
  _4609__PHI_TEMPORARY = _4619;   /* for PHI node */
  _4610__PHI_TEMPORARY = _4618;   /* for PHI node */
  goto _4663;

  } while (1); /* end of syntactic loop '' */
_4662:
  _4620 = _4620__PHI_TEMPORARY;
  _4621 = *(uint64_t*)_4488;
  _4622 = *(uint64_t*)_4490;
  _4623 = jsyn_cbe_fshl_i64(_4622, _4621, 32);
  _4624 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4620)), _4622, 32);
  *(uint64_t*)_4488 = _4623;
  *(uint64_t*)_4490 = _4624;
  _4625 = ((&((uint8_t*)_4482)[((int64_t)56)]));
  _4626 = *(uint64_t*)_4625;
  _4627 = ((&((uint8_t*)_4482)[((int64_t)64)]));
  _4628 = *(uint64_t*)_4627;
  _4629 = ((&((uint8_t*)_4482)[((int64_t)72)]));
  _4630 = *(uint64_t*)_4629;
  _4631 = *(void**)_4482;
  _4632 = *(uint64_t*)(((&((uint8_t*)_4631)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4482)[((int64_t)48)]))) = _4626;
  *(uint64_t*)_4625 = _4628;
  *(uint64_t*)_4627 = _4630;
  *(uint64_t*)_4629 = _4632;
  julia_emit_11((&_4486), _4481, _4482, 71, 1);
  _4560__PHI_TEMPORARY = (&_4486);   /* for PHI node */
  goto _4649;

_4660:
  julia_emit_11((&_4487), _4481, _4482, 536, 1);
  _4560__PHI_TEMPORARY = (&_4487);   /* for PHI node */
  goto _4649;

}


static void julia_lex_backtick_40(void* _4667, void* _4668, void* _4669) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _4670 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _4671;
  void* _4672;
  struct l_array_4_uint64_t _4673;    /* Address-exposed local */
  struct l_array_4_uint64_t _4674;    /* Address-exposed local */
  void* _4675;
  uint64_t _4676;
  void* _4677;
  uint64_t _4678;
  bool _4679;
  uint8_t _4680;
  void* _4681;
  void* _4682;
  void* _4683;
  void* _4684;
  uint64_t _4685;
  uint64_t _4686;
  void* _4687;
  uint64_t _4688;
  void* _4689;
  void* _4690;
  void* _4691;
  void* _4692;
  uint64_t _4693;
  void* _4694;
  uint64_t _4695;
  void* _4696;
  uint8_t _4697;
  uint8_t _4698;
  uint8_t _4699;
  uint32_t _4700;
  uint64_t _4701;
  uint64_t _4701__PHI_TEMPORARY;
  uint32_t _4702;
  uint32_t _4702__PHI_TEMPORARY;
  uint64_t _4703;
  uint64_t _4704;
  void* _4705;
  uint8_t _4706;
  uint32_t _4707;
  uint64_t _4708;
  uint64_t _4709;
  uint32_t _4710;
  uint64_t _4711;
  uint32_t _4712;
  uint32_t _4712__PHI_TEMPORARY;
  uint64_t _4713;
  uint64_t _4714;
  uint64_t _4715;
  uint64_t _4716;
  void* _4717;
  void* _4718;
  uint64_t _4719;
  void* _4720;
  uint64_t _4721;
  void* _4722;
  uint64_t _4723;
  void* _4724;
  uint64_t _4725;
  void* _4726;
  void* _4727;
  uint64_t _4728;
  void* _4729;
  uint64_t _4730;
  void* _4731;
  uint8_t _4732;
  uint8_t _4733;
  uint8_t _4734;
  uint32_t _4735;
  uint64_t _4736;
  uint64_t _4736__PHI_TEMPORARY;
  uint32_t _4737;
  uint32_t _4737__PHI_TEMPORARY;
  uint64_t _4738;
  uint64_t _4739;
  void* _4740;
  uint8_t _4741;
  uint32_t _4742;
  uint64_t _4743;
  uint64_t _4744;
  uint32_t _4745;
  uint64_t _4746;
  uint32_t _4747;
  uint32_t _4747__PHI_TEMPORARY;
  uint64_t _4748;
  uint64_t _4749;
  uint64_t _4750;
  uint64_t _4751;
  uint64_t _4752;
  uint64_t _4753;
  uint64_t _4754;
  void* _4755;
  uint64_t _4756;
  void* _4757;
  void* _4757__PHI_TEMPORARY;
  void* _4758;
  void* _4759;

  _4671 = memset((&_4670), 0, 24);
  *((uint64_t*)&_4670) = 4;
  _4672 = *(void**)_4668;
  *(void**)(((&((uint8_t*)(&_4670))[((int64_t)8)]))) = _4672;
  *(void**)_4668 = (&_4670);
  _4675 = ((&((uint8_t*)_4669)[((int64_t)32)]));
  _4676 = *(uint64_t*)_4675;
  _4677 = ((&((uint8_t*)_4669)[((int64_t)40)]));
  _4678 = *(uint64_t*)_4677;
  _4679 = llvm_select_bool(((_4676 & INT64_C(-4294967296)) == UINT64_C(6917529027641081856)), ((_4678 & INT64_C(4294967295)) == UINT64_C(1610612736)), 0);
  _4680 = ((uint8_t)(bool)_4679);
  _4681 = *(void**)(((&((uint8_t*)_4669)[((int64_t)24)])));
  _4682 = *(void**)_4681;
  _4683 = *(void**)(((&((uint8_t*)_4681)[((int64_t)8)])));
  _4684 = ((&((uint8_t*)_4681)[((int64_t)16)]));
  _4685 = *(uint64_t*)_4684;
  _4686 = llvm_add_u64(_4685, 1);
  _4687 = *(void**)(((&((uint8_t*)_4683)[((int64_t)8)])));
  _4688 = *(uint64_t*)_4683;
  if ((((int64_t)_4688) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_4682)), (((uint64_t)(uintptr_t)_4687)))), 4)), 1)), _4685))))) {
    goto _4760;
  } else {
    goto _4761;
  }

_4760:
  *(void**)(((&((uint8_t*)(&_4670))[((int64_t)16)]))) = _4681;
  julia__growend_internalNOT_OC__31(_4668, _4681, 1, _4685);
  goto _4761;

_4761:
  *(uint64_t*)_4684 = _4686;
  _4689 = *(void**)_4681;
  _4690 = ((&((uint8_t*)_4689)[((int64_t)(_4685 << 4))]));
  *(uint8_t*)_4690 = _4680;
  *(uint8_t*)(((&((uint8_t*)_4690)[((int64_t)1)]))) = 1;
  *(uint32_t*)(((&((uint8_t*)_4690)[((int64_t)4)]))) = 1610612736u;
  *(uint64_t*)(((&((uint8_t*)_4690)[((int64_t)8)]))) = 0;
  if (_4679) {
    goto _4762;
  } else {
    goto _4763;
  }

_4762:
  _4691 = *(void**)_4669;
  _4692 = ((&((uint8_t*)_4691)[((int64_t)16)]));
  _4693 = *(uint64_t*)_4692;
  _4694 = ((&((uint8_t*)_4691)[((int64_t)8)]));
  _4695 = *(uint64_t*)_4694;
  if ((((int64_t)_4695) > ((int64_t)_4693))) {
    goto _4764;
  } else {
    _4712__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4765;
  }

_4764:
  _4696 = *(void**)_4691;
  _4697 = *(uint8_t*)(((&((uint8_t*)_4696)[((int64_t)_4693)])));
  *(uint64_t*)_4692 = (llvm_add_u64(_4693, 1));
  _4698 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4697)), 0);
  _4699 = llvm_sub_u8(32, (llvm_shl_u8(_4698, 3)));
  _4700 = (((uint32_t)(uint8_t)_4697)) << 24;
  if ((((uint8_t)_4699) > ((uint8_t)((uint8_t)16)))) {
    _4712__PHI_TEMPORARY = _4700;   /* for PHI node */
    goto _4765;
  } else {
    _4701__PHI_TEMPORARY = 16;   /* for PHI node */
    _4702__PHI_TEMPORARY = _4700;   /* for PHI node */
    goto _4766;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4766:
  _4701 = _4701__PHI_TEMPORARY;
  _4702 = _4702__PHI_TEMPORARY;
  if (((((int64_t)_4701) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4701) < ((uint64_t)(((uint64_t)(uint8_t)_4699)))))) {
    _4712__PHI_TEMPORARY = _4702;   /* for PHI node */
    goto _4765;
  } else {
    goto _4767;
  }

_4767:
  _4703 = *(uint64_t*)_4692;
  _4704 = *(uint64_t*)_4694;
  if ((((int64_t)_4704) > ((int64_t)_4703))) {
    goto _4768;
  } else {
    _4712__PHI_TEMPORARY = _4702;   /* for PHI node */
    goto _4765;
  }

_4768:
  _4705 = *(void**)_4691;
  _4706 = *(uint8_t*)(((&((uint8_t*)_4705)[((int64_t)_4703)])));
  if ((((int8_t)_4706) > ((int8_t)((uint8_t)-65)))) {
    _4712__PHI_TEMPORARY = _4702;   /* for PHI node */
    goto _4765;
  } else {
    goto _4769;
  }

_4769:
  _4707 = llvm_select_u32((((int64_t)_4703) < ((int64_t)_4704)), (((uint32_t)(uint8_t)_4706)), 0);
  _4708 = *(uint64_t*)_4692;
  *(uint64_t*)_4692 = (llvm_add_u64(_4708, 1));
  _4709 = llvm_neg_u64(_4701);
  _4710 = _4702 | (llvm_select_u32((((int64_t)_4701) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4709) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4707, (((uint32_t)_4709)))))), (llvm_select_u32((((uint64_t)_4701) > ((uint64_t)UINT64_C(31))), 0, (_4707 << (((uint32_t)_4701)))))));
  _4711 = llvm_add_u64(_4701, -8);
  _4701__PHI_TEMPORARY = _4711;   /* for PHI node */
  _4702__PHI_TEMPORARY = _4710;   /* for PHI node */
  goto _4766;

  } while (1); /* end of syntactic loop '' */
_4765:
  _4712 = _4712__PHI_TEMPORARY;
  _4713 = *(uint64_t*)_4675;
  _4714 = *(uint64_t*)_4677;
  _4715 = jsyn_cbe_fshl_i64(_4714, _4713, 32);
  _4716 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4712)), _4714, 32);
  *(uint64_t*)_4675 = _4715;
  *(uint64_t*)_4677 = _4716;
  _4717 = ((&((uint8_t*)_4669)[((int64_t)48)]));
  _4718 = ((&((uint8_t*)_4669)[((int64_t)56)]));
  _4719 = *(uint64_t*)_4718;
  _4720 = ((&((uint8_t*)_4669)[((int64_t)64)]));
  _4721 = *(uint64_t*)_4720;
  _4722 = ((&((uint8_t*)_4669)[((int64_t)72)]));
  _4723 = *(uint64_t*)_4722;
  _4724 = *(void**)_4669;
  _4725 = *(uint64_t*)(((&((uint8_t*)_4724)[((int64_t)16)])));
  *(uint64_t*)_4717 = _4719;
  *(uint64_t*)_4718 = _4721;
  *(uint64_t*)_4720 = _4723;
  *(uint64_t*)_4722 = _4725;
  _4726 = *(void**)_4669;
  _4727 = ((&((uint8_t*)_4726)[((int64_t)16)]));
  _4728 = *(uint64_t*)_4727;
  _4729 = ((&((uint8_t*)_4726)[((int64_t)8)]));
  _4730 = *(uint64_t*)_4729;
  if ((((int64_t)_4730) > ((int64_t)_4728))) {
    goto _4770;
  } else {
    _4747__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4771;
  }

_4770:
  _4731 = *(void**)_4726;
  _4732 = *(uint8_t*)(((&((uint8_t*)_4731)[((int64_t)_4728)])));
  *(uint64_t*)_4727 = (llvm_add_u64(_4728, 1));
  _4733 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4732)), 0);
  _4734 = llvm_sub_u8(32, (llvm_shl_u8(_4733, 3)));
  _4735 = (((uint32_t)(uint8_t)_4732)) << 24;
  if ((((uint8_t)_4734) > ((uint8_t)((uint8_t)16)))) {
    _4747__PHI_TEMPORARY = _4735;   /* for PHI node */
    goto _4771;
  } else {
    _4736__PHI_TEMPORARY = 16;   /* for PHI node */
    _4737__PHI_TEMPORARY = _4735;   /* for PHI node */
    goto _4772;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4772:
  _4736 = _4736__PHI_TEMPORARY;
  _4737 = _4737__PHI_TEMPORARY;
  if (((((int64_t)_4736) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4736) < ((uint64_t)(((uint64_t)(uint8_t)_4734)))))) {
    _4747__PHI_TEMPORARY = _4737;   /* for PHI node */
    goto _4771;
  } else {
    goto _4773;
  }

_4773:
  _4738 = *(uint64_t*)_4727;
  _4739 = *(uint64_t*)_4729;
  if ((((int64_t)_4739) > ((int64_t)_4738))) {
    goto _4774;
  } else {
    _4747__PHI_TEMPORARY = _4737;   /* for PHI node */
    goto _4771;
  }

_4774:
  _4740 = *(void**)_4726;
  _4741 = *(uint8_t*)(((&((uint8_t*)_4740)[((int64_t)_4738)])));
  if ((((int8_t)_4741) > ((int8_t)((uint8_t)-65)))) {
    _4747__PHI_TEMPORARY = _4737;   /* for PHI node */
    goto _4771;
  } else {
    goto _4775;
  }

_4775:
  _4742 = llvm_select_u32((((int64_t)_4738) < ((int64_t)_4739)), (((uint32_t)(uint8_t)_4741)), 0);
  _4743 = *(uint64_t*)_4727;
  *(uint64_t*)_4727 = (llvm_add_u64(_4743, 1));
  _4744 = llvm_neg_u64(_4736);
  _4745 = _4737 | (llvm_select_u32((((int64_t)_4736) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4744) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4742, (((uint32_t)_4744)))))), (llvm_select_u32((((uint64_t)_4736) > ((uint64_t)UINT64_C(31))), 0, (_4742 << (((uint32_t)_4736)))))));
  _4746 = llvm_add_u64(_4736, -8);
  _4736__PHI_TEMPORARY = _4746;   /* for PHI node */
  _4737__PHI_TEMPORARY = _4745;   /* for PHI node */
  goto _4772;

  } while (1); /* end of syntactic loop '' */
_4771:
  _4747 = _4747__PHI_TEMPORARY;
  _4748 = *(uint64_t*)_4675;
  _4749 = *(uint64_t*)_4677;
  _4750 = jsyn_cbe_fshl_i64(_4749, _4748, 32);
  _4751 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4747)), _4749, 32);
  *(uint64_t*)_4675 = _4750;
  *(uint64_t*)_4677 = _4751;
  _4752 = *(uint64_t*)_4718;
  _4753 = *(uint64_t*)_4720;
  _4754 = *(uint64_t*)_4722;
  _4755 = *(void**)_4669;
  _4756 = *(uint64_t*)(((&((uint8_t*)_4755)[((int64_t)16)])));
  *(uint64_t*)_4717 = _4752;
  *(uint64_t*)_4718 = _4753;
  *(uint64_t*)_4720 = _4754;
  *(uint64_t*)_4722 = _4756;
  julia_emit_11((&_4673), _4668, _4669, 65, 1);
  _4757__PHI_TEMPORARY = (&_4673);   /* for PHI node */
  goto _4776;

_4776:
  _4757 = _4757__PHI_TEMPORARY;
  _4758 = memcpy(_4667, _4757, 32);
  _4759 = *(void**)(((&((uint8_t*)(&_4670))[((int64_t)8)])));
  *(void**)_4668 = _4759;
  return;
_4763:
  julia_emit_11((&_4674), _4668, _4669, 64, 1);
  _4757__PHI_TEMPORARY = (&_4674);   /* for PHI node */
  goto _4776;

}


static void julia_lex_digit_41(void* _4777, void* _4778, void* _4779, uint16_t _4780) {
  struct l_array_4_uint64_t _4781;    /* Address-exposed local */
  struct l_array_4_uint64_t _4782;    /* Address-exposed local */
  struct l_array_4_uint64_t _4783;    /* Address-exposed local */
  struct l_array_4_uint64_t _4784;    /* Address-exposed local */
  struct l_array_4_uint64_t _4785;    /* Address-exposed local */
  struct l_array_4_uint64_t _4786;    /* Address-exposed local */
  struct l_array_4_uint64_t _4787;    /* Address-exposed local */
  struct l_array_4_uint64_t _4788;    /* Address-exposed local */
  struct l_array_4_uint64_t _4789;    /* Address-exposed local */
  struct l_array_4_uint64_t _4790;    /* Address-exposed local */
  struct l_array_4_uint64_t _4791;    /* Address-exposed local */
  struct l_array_4_uint64_t _4792;    /* Address-exposed local */
  struct l_array_4_uint64_t _4793;    /* Address-exposed local */
  struct l_array_4_uint64_t _4794;    /* Address-exposed local */
  uint8_t _4795;
  void* _4796;
  uint64_t _4797;
  void* _4798;
  uint64_t _4799;
  uint64_t _4800;
  uint32_t _4801;
  void* _4802;
  void* _4802__PHI_TEMPORARY;
  void* _4803;
  void* _4804;
  void* _4805;
  uint64_t _4806;
  void* _4807;
  uint64_t _4808;
  void* _4809;
  uint8_t _4810;
  uint8_t _4811;
  uint8_t _4812;
  uint32_t _4813;
  uint64_t _4814;
  uint64_t _4814__PHI_TEMPORARY;
  uint32_t _4815;
  uint32_t _4815__PHI_TEMPORARY;
  uint64_t _4816;
  uint64_t _4817;
  void* _4818;
  uint8_t _4819;
  uint32_t _4820;
  uint64_t _4821;
  uint64_t _4822;
  uint32_t _4823;
  uint64_t _4824;
  uint32_t _4825;
  uint32_t _4825__PHI_TEMPORARY;
  uint64_t _4826;
  uint64_t _4827;
  uint64_t _4828;
  uint64_t _4829;
  void* _4830;
  uint64_t _4831;
  void* _4832;
  uint64_t _4833;
  void* _4834;
  uint64_t _4835;
  void* _4836;
  uint64_t _4837;
  uint8_t _4838;
  void* _4839;
  void* _4840;
  uint64_t _4841;
  void* _4842;
  uint64_t _4843;
  void* _4844;
  uint8_t _4845;
  uint8_t _4846;
  uint8_t _4847;
  uint32_t _4848;
  uint64_t _4849;
  uint64_t _4849__PHI_TEMPORARY;
  uint32_t _4850;
  uint32_t _4850__PHI_TEMPORARY;
  uint64_t _4851;
  uint64_t _4852;
  void* _4853;
  uint8_t _4854;
  uint32_t _4855;
  uint64_t _4856;
  uint64_t _4857;
  uint32_t _4858;
  uint64_t _4859;
  uint32_t _4860;
  uint32_t _4860__PHI_TEMPORARY;
  uint64_t _4861;
  uint64_t _4862;
  uint64_t _4863;
  uint64_t _4864;
  void* _4865;
  uint64_t _4866;
  void* _4867;
  uint64_t _4868;
  void* _4869;
  uint64_t _4870;
  void* _4871;
  uint64_t _4872;
  void* _4873;
  void* _4874;
  uint64_t _4875;
  void* _4876;
  uint64_t _4877;
  void* _4878;
  uint8_t _4879;
  uint8_t _4880;
  uint8_t _4881;
  uint32_t _4882;
  uint64_t _4883;
  uint64_t _4883__PHI_TEMPORARY;
  uint32_t _4884;
  uint32_t _4884__PHI_TEMPORARY;
  uint64_t _4885;
  uint64_t _4886;
  void* _4887;
  uint8_t _4888;
  uint32_t _4889;
  uint64_t _4890;
  uint64_t _4891;
  uint32_t _4892;
  uint64_t _4893;
  uint32_t _4894;
  uint32_t _4894__PHI_TEMPORARY;
  uint64_t _4895;
  uint64_t _4896;
  uint64_t _4897;
  uint64_t _4898;
  void* _4899;
  void* _4900;
  uint64_t _4901;
  void* _4902;
  uint64_t _4903;
  void* _4904;
  uint64_t _4905;
  void* _4906;
  uint64_t _4907;
  uint64_t _4908;
  void* _4909;
  void* _4910;
  uint64_t _4911;
  void* _4912;
  uint64_t _4913;
  void* _4914;
  uint8_t _4915;
  uint8_t _4916;
  uint8_t _4917;
  uint32_t _4918;
  uint64_t _4919;
  uint64_t _4919__PHI_TEMPORARY;
  uint32_t _4920;
  uint32_t _4920__PHI_TEMPORARY;
  uint64_t _4921;
  uint64_t _4922;
  void* _4923;
  uint8_t _4924;
  uint32_t _4925;
  uint64_t _4926;
  uint64_t _4927;
  uint32_t _4928;
  uint64_t _4929;
  uint32_t _4930;
  uint32_t _4930__PHI_TEMPORARY;
  uint64_t _4931;
  uint64_t _4932;
  uint64_t _4933;
  uint64_t _4934;
  uint64_t _4935;
  uint64_t _4936;
  uint64_t _4937;
  void* _4938;
  uint64_t _4939;
  uint8_t _4940;
  uint64_t _4941;
  uint64_t _4942;
  uint32_t _4943;
  uint64_t _4944;
  uint32_t _4945;
  uint16_t _4946;
  void* _4947;
  void* _4948;
  uint64_t _4949;
  void* _4950;
  uint64_t _4951;
  void* _4952;
  uint8_t _4953;
  uint8_t _4954;
  uint8_t _4955;
  uint32_t _4956;
  uint64_t _4957;
  uint64_t _4957__PHI_TEMPORARY;
  uint32_t _4958;
  uint32_t _4958__PHI_TEMPORARY;
  uint64_t _4959;
  uint64_t _4960;
  void* _4961;
  uint8_t _4962;
  uint32_t _4963;
  uint64_t _4964;
  uint64_t _4965;
  uint32_t _4966;
  uint64_t _4967;
  uint32_t _4968;
  uint32_t _4968__PHI_TEMPORARY;
  uint64_t _4969;
  uint64_t _4970;
  uint64_t _4971;
  uint64_t _4972;
  uint64_t _4973;
  uint64_t _4974;
  uint64_t _4975;
  void* _4976;
  uint64_t _4977;
  uint64_t _4978;
  void* _4979;
  void* _4980;
  uint64_t _4981;
  void* _4982;
  uint64_t _4983;
  void* _4984;
  uint8_t _4985;
  uint8_t _4986;
  uint8_t _4987;
  uint32_t _4988;
  uint64_t _4989;
  uint64_t _4989__PHI_TEMPORARY;
  uint32_t _4990;
  uint32_t _4990__PHI_TEMPORARY;
  uint64_t _4991;
  uint64_t _4992;
  void* _4993;
  uint8_t _4994;
  uint32_t _4995;
  uint64_t _4996;
  uint64_t _4997;
  uint32_t _4998;
  uint64_t _4999;
  uint32_t _5000;
  uint32_t _5000__PHI_TEMPORARY;
  bool _5001;
  bool _5001__PHI_TEMPORARY;
  uint64_t _5002;
  uint64_t _5003;
  uint64_t _5004;
  uint64_t _5005;
  uint64_t _5006;
  uint64_t _5007;
  uint64_t _5008;
  void* _5009;
  uint64_t _5010;
  bool _5011;
  bool _5011__PHI_TEMPORARY;
  uint64_t _5012;
  uint64_t _5013;
  void* _5014;
  void* _5015;
  uint64_t _5016;
  void* _5017;
  uint64_t _5018;
  void* _5019;
  uint8_t _5020;
  uint8_t _5021;
  uint8_t _5022;
  uint32_t _5023;
  uint64_t _5024;
  uint64_t _5024__PHI_TEMPORARY;
  uint32_t _5025;
  uint32_t _5025__PHI_TEMPORARY;
  uint64_t _5026;
  uint64_t _5027;
  void* _5028;
  uint8_t _5029;
  uint32_t _5030;
  uint64_t _5031;
  uint64_t _5032;
  uint32_t _5033;
  uint64_t _5034;
  uint64_t _5035;
  uint64_t _5036;
  uint32_t _5037;
  uint8_t _5038;
  void* _5039;
  void* _5040;
  uint64_t _5041;
  void* _5042;
  uint64_t _5043;
  void* _5044;
  uint8_t _5045;
  uint8_t _5046;
  uint8_t _5047;
  uint32_t _5048;
  uint64_t _5049;
  uint64_t _5049__PHI_TEMPORARY;
  uint32_t _5050;
  uint32_t _5050__PHI_TEMPORARY;
  uint64_t _5051;
  uint64_t _5052;
  void* _5053;
  uint8_t _5054;
  uint32_t _5055;
  uint64_t _5056;
  uint64_t _5057;
  uint32_t _5058;
  uint64_t _5059;
  uint32_t _5060;
  uint32_t _5060__PHI_TEMPORARY;
  uint64_t _5061;
  uint64_t _5062;
  uint64_t _5063;
  uint64_t _5064;
  uint64_t _5065;
  uint64_t _5066;
  uint64_t _5067;
  void* _5068;
  uint64_t _5069;
  uint8_t _5070;
  void* _5071;
  void* _5072;
  uint64_t _5073;
  void* _5074;
  uint64_t _5075;
  void* _5076;
  uint8_t _5077;
  uint8_t _5078;
  uint8_t _5079;
  uint32_t _5080;
  uint64_t _5081;
  uint64_t _5081__PHI_TEMPORARY;
  uint32_t _5082;
  uint32_t _5082__PHI_TEMPORARY;
  uint64_t _5083;
  uint64_t _5084;
  void* _5085;
  uint8_t _5086;
  uint32_t _5087;
  uint64_t _5088;
  uint64_t _5089;
  uint32_t _5090;
  uint64_t _5091;
  uint32_t _5092;
  uint32_t _5092__PHI_TEMPORARY;
  uint64_t _5093;
  uint64_t _5094;
  uint64_t _5095;
  uint64_t _5096;
  uint64_t _5097;
  uint64_t _5098;
  uint64_t _5099;
  void* _5100;
  uint64_t _5101;
  uint32_t _5102;
  uint64_t _5103;
  uint32_t _5104;
  uint32_t _5105;
  uint64_t _5106;
  bool _5107;
  bool _5108;
  uint32_t _5109;
  uint32_t _5110;
  uint32_t _5111;
  uint32_t _5112;
  uint32_t _5112__PHI_TEMPORARY;
  uint32_t _5113;
  uint16_t _5114;
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
  void* _5141;
  void* _5142;
  uint64_t _5143;
  void* _5144;
  uint64_t _5145;
  void* _5146;
  uint64_t _5147;
  void* _5148;
  uint64_t _5149;
  uint64_t _5150;
  void* _5151;
  void* _5152;
  uint64_t _5153;
  void* _5154;
  uint64_t _5155;
  void* _5156;
  uint8_t _5157;
  uint8_t _5158;
  uint8_t _5159;
  uint32_t _5160;
  uint64_t _5161;
  uint64_t _5161__PHI_TEMPORARY;
  uint32_t _5162;
  uint32_t _5162__PHI_TEMPORARY;
  uint64_t _5163;
  uint64_t _5164;
  void* _5165;
  uint8_t _5166;
  uint32_t _5167;
  uint64_t _5168;
  uint64_t _5169;
  uint32_t _5170;
  uint64_t _5171;
  uint32_t _5172;
  uint32_t _5172__PHI_TEMPORARY;
  bool _5173;
  bool _5173__PHI_TEMPORARY;
  uint64_t _5174;
  uint64_t _5175;
  uint64_t _5176;
  uint64_t _5177;
  uint64_t _5178;
  uint64_t _5179;
  uint64_t _5180;
  void* _5181;
  uint64_t _5182;
  bool _5183;
  bool _5183__PHI_TEMPORARY;
  uint64_t _5184;
  uint64_t _5185;
  void* _5186;
  void* _5187;
  uint64_t _5188;
  void* _5189;
  uint64_t _5190;
  void* _5191;
  uint8_t _5192;
  uint8_t _5193;
  uint8_t _5194;
  uint32_t _5195;
  uint64_t _5196;
  uint64_t _5196__PHI_TEMPORARY;
  uint32_t _5197;
  uint32_t _5197__PHI_TEMPORARY;
  uint64_t _5198;
  uint64_t _5199;
  void* _5200;
  uint8_t _5201;
  uint32_t _5202;
  uint64_t _5203;
  uint64_t _5204;
  uint32_t _5205;
  uint64_t _5206;
  uint64_t _5207;
  uint64_t _5208;
  uint32_t _5209;
  uint8_t _5210;
  uint64_t _5211;
  void* _5212;
  void* _5213;
  uint64_t _5214;
  void* _5215;
  uint64_t _5216;
  void* _5217;
  uint8_t _5218;
  uint8_t _5219;
  uint8_t _5220;
  uint32_t _5221;
  uint64_t _5222;
  uint64_t _5222__PHI_TEMPORARY;
  uint32_t _5223;
  uint32_t _5223__PHI_TEMPORARY;
  uint64_t _5224;
  uint64_t _5225;
  void* _5226;
  uint8_t _5227;
  uint32_t _5228;
  uint64_t _5229;
  uint64_t _5230;
  uint32_t _5231;
  uint64_t _5232;
  uint32_t _5233;
  uint32_t _5233__PHI_TEMPORARY;
  uint64_t _5234;
  uint64_t _5235;
  uint64_t _5236;
  uint64_t _5237;
  uint64_t _5238;
  uint64_t _5239;
  uint64_t _5240;
  void* _5241;
  uint64_t _5242;
  void* _5243;
  uint64_t _5244;
  void* _5245;
  uint64_t _5246;
  uint64_t _5247;
  void* _5248;
  void* _5249;
  uint64_t _5250;
  void* _5251;
  uint64_t _5252;
  void* _5253;
  uint8_t _5254;
  uint8_t _5255;
  uint8_t _5256;
  uint32_t _5257;
  uint64_t _5258;
  uint64_t _5258__PHI_TEMPORARY;
  uint32_t _5259;
  uint32_t _5259__PHI_TEMPORARY;
  uint64_t _5260;
  uint64_t _5261;
  void* _5262;
  uint8_t _5263;
  uint32_t _5264;
  uint64_t _5265;
  uint64_t _5266;
  uint32_t _5267;
  uint64_t _5268;
  uint32_t _5269;
  uint32_t _5269__PHI_TEMPORARY;
  uint64_t _5270;
  uint64_t _5271;
  uint64_t _5272;
  uint64_t _5273;
  uint64_t _5274;
  void* _5275;
  uint64_t _5276;
  void* _5277;
  uint64_t _5278;
  void* _5279;
  uint64_t _5280;
  uint8_t _5281;
  uint64_t _5282;
  bool _5283;
  uint64_t _5284;
  bool _5285;
  void* _5286;
  void* _5287;
  uint64_t _5288;
  void* _5289;
  uint64_t _5290;
  void* _5291;
  uint8_t _5292;
  uint8_t _5293;
  uint8_t _5294;
  uint32_t _5295;
  uint64_t _5296;
  uint64_t _5296__PHI_TEMPORARY;
  uint32_t _5297;
  uint32_t _5297__PHI_TEMPORARY;
  uint64_t _5298;
  uint64_t _5299;
  void* _5300;
  uint8_t _5301;
  uint32_t _5302;
  uint64_t _5303;
  uint64_t _5304;
  uint32_t _5305;
  uint64_t _5306;
  uint32_t _5307;
  uint32_t _5307__PHI_TEMPORARY;
  uint64_t _5308;
  uint64_t _5309;
  uint64_t _5310;
  uint64_t _5311;
  uint64_t _5312;
  uint64_t _5313;
  uint64_t _5314;
  void* _5315;
  uint64_t _5316;
  uint8_t _5317;
  bool _5318;
  bool _5319;
  bool _5319__PHI_TEMPORARY;
  bool _5320;
  bool _5320__PHI_TEMPORARY;
  uint64_t _5321;
  void* _5322;
  void* _5323;
  uint64_t _5324;
  void* _5325;
  uint64_t _5326;
  void* _5327;
  uint8_t _5328;
  uint8_t _5329;
  uint8_t _5330;
  uint32_t _5331;
  uint64_t _5332;
  uint64_t _5332__PHI_TEMPORARY;
  uint32_t _5333;
  uint32_t _5333__PHI_TEMPORARY;
  uint64_t _5334;
  uint64_t _5335;
  void* _5336;
  uint8_t _5337;
  uint32_t _5338;
  uint64_t _5339;
  uint64_t _5340;
  uint32_t _5341;
  uint64_t _5342;
  uint32_t _5343;
  uint32_t _5343__PHI_TEMPORARY;
  uint64_t _5344;
  uint64_t _5345;
  uint64_t _5346;
  uint64_t _5347;
  uint64_t _5348;
  uint64_t _5349;
  uint64_t _5350;
  void* _5351;
  uint64_t _5352;
  uint64_t _5353;
  void* _5354;
  void* _5355;
  uint64_t _5356;
  void* _5357;
  uint64_t _5358;
  void* _5359;
  uint8_t _5360;
  uint8_t _5361;
  uint8_t _5362;
  uint32_t _5363;
  uint64_t _5364;
  uint64_t _5364__PHI_TEMPORARY;
  uint32_t _5365;
  uint32_t _5365__PHI_TEMPORARY;
  uint64_t _5366;
  uint64_t _5367;
  void* _5368;
  uint8_t _5369;
  uint32_t _5370;
  uint64_t _5371;
  uint64_t _5372;
  uint32_t _5373;
  uint64_t _5374;
  uint32_t _5375;
  uint32_t _5375__PHI_TEMPORARY;
  uint64_t _5376;
  uint64_t _5377;
  uint64_t _5378;
  uint64_t _5379;
  uint64_t _5380;
  uint64_t _5381;
  uint64_t _5382;
  void* _5383;
  uint64_t _5384;
  uint8_t _5385;
  uint16_t _5386;
  uint16_t _5386__PHI_TEMPORARY;
  bool _5387;
  void* _5388;
  void* _5389;
  uint64_t _5390;
  void* _5391;
  uint64_t _5392;
  void* _5393;
  uint8_t _5394;
  uint8_t _5395;
  uint8_t _5396;
  uint32_t _5397;
  uint64_t _5398;
  uint64_t _5398__PHI_TEMPORARY;
  uint32_t _5399;
  uint32_t _5399__PHI_TEMPORARY;
  uint64_t _5400;
  uint64_t _5401;
  void* _5402;
  uint8_t _5403;
  uint32_t _5404;
  uint64_t _5405;
  uint64_t _5406;
  uint32_t _5407;
  uint64_t _5408;
  uint32_t _5409;
  uint32_t _5409__PHI_TEMPORARY;
  uint64_t _5410;
  uint64_t _5411;
  uint64_t _5412;
  uint64_t _5413;
  uint64_t _5414;
  void* _5415;
  uint64_t _5416;
  void* _5417;
  uint64_t _5418;
  void* _5419;
  uint64_t _5420;
  uint8_t _5421;
  bool _5422;
  void* _5423;
  void* _5424;
  uint64_t _5425;
  void* _5426;
  uint64_t _5427;
  void* _5428;
  uint8_t _5429;
  uint8_t _5430;
  uint8_t _5431;
  uint32_t _5432;
  uint64_t _5433;
  uint64_t _5433__PHI_TEMPORARY;
  uint32_t _5434;
  uint32_t _5434__PHI_TEMPORARY;
  uint64_t _5435;
  uint64_t _5436;
  void* _5437;
  uint8_t _5438;
  uint32_t _5439;
  uint64_t _5440;
  uint64_t _5441;
  uint32_t _5442;
  uint64_t _5443;
  uint32_t _5444;
  uint32_t _5444__PHI_TEMPORARY;
  uint64_t _5445;
  uint64_t _5446;
  uint64_t _5447;
  uint64_t _5448;
  uint64_t _5449;
  void* _5450;
  uint64_t _5451;
  void* _5452;
  uint64_t _5453;
  void* _5454;
  uint64_t _5455;
  uint8_t _5456;
  bool _5457;
  bool _5458;
  bool _5458__PHI_TEMPORARY;
  bool _5459;
  bool _5459__PHI_TEMPORARY;
  bool _5460;
  bool _5460__PHI_TEMPORARY;
  uint16_t _5461;
  uint16_t _5461__PHI_TEMPORARY;
  uint64_t _5462;
  uint64_t _5463;
  uint32_t _5464;
  uint32_t _5465;
  uint64_t _5466;
  uint32_t _5467;
  uint32_t _5468;
  uint64_t _5469;
  bool _5470;
  bool _5471;
  uint32_t _5472;
  uint32_t _5473;
  uint32_t _5474;
  uint32_t _5475;
  uint32_t _5475__PHI_TEMPORARY;
  uint32_t _5476;
  uint64_t _5477;
  uint8_t _5478;
  void* _5479;
  void* _5480;
  uint64_t _5481;
  void* _5482;
  uint64_t _5483;
  void* _5484;
  uint8_t _5485;
  uint8_t _5486;
  uint8_t _5487;
  uint32_t _5488;
  uint64_t _5489;
  uint64_t _5489__PHI_TEMPORARY;
  uint32_t _5490;
  uint32_t _5490__PHI_TEMPORARY;
  uint64_t _5491;
  uint64_t _5492;
  void* _5493;
  uint8_t _5494;
  uint32_t _5495;
  uint64_t _5496;
  uint64_t _5497;
  uint32_t _5498;
  uint64_t _5499;
  uint32_t _5500;
  uint32_t _5500__PHI_TEMPORARY;
  uint64_t _5501;
  uint64_t _5502;
  uint64_t _5503;
  uint64_t _5504;
  uint64_t _5505;
  void* _5506;
  uint64_t _5507;
  void* _5508;
  uint64_t _5509;
  void* _5510;
  uint64_t _5511;
  uint16_t _5512;
  uint16_t _5512__PHI_TEMPORARY;

  _4795 = julia_accept_number_44(_4778, _4779);
  _4796 = ((&((uint8_t*)_4779)[((int64_t)32)]));
  _4797 = *(uint64_t*)_4796;
  _4798 = ((&((uint8_t*)_4779)[((int64_t)40)]));
  _4799 = llvm_lshr_u64(_4797, 32);
  _4800 = *(uint64_t*)_4798;
  _4801 = ((uint32_t)_4800);
  switch ((((uint32_t)_4799))) {
  default:
    goto _5513;
  case 771751936u:
    goto _5514;
  case 1694498816u:
    goto _5515;
  case 1711276032u:
    goto _5515;
  case 1157627904u:
    goto _5515;
  }

_5514:
  if ((_4801 == 771751936u)) {
    goto _5516;
  } else {
    goto _5517;
  }

_5518:
  _4802 = _4802__PHI_TEMPORARY;
  _4803 = memcpy(_4777, _4802, 32);
  return;
_5516:
  julia_emit_11((&_4781), _4778, _4779, _4780, 1);
  _4802__PHI_TEMPORARY = (&_4781);   /* for PHI node */
  goto _5518;

_5517:
  if ((_4780 == ((uint16_t)48))) {
    goto _5519;
  } else {
    goto _5520;
  }

_5519:
  _4804 = *(void**)_4779;
  _4805 = ((&((uint8_t*)_4804)[((int64_t)16)]));
  _4806 = *(uint64_t*)_4805;
  _4807 = ((&((uint8_t*)_4804)[((int64_t)8)]));
  _4808 = *(uint64_t*)_4807;
  if ((((int64_t)_4808) > ((int64_t)_4806))) {
    goto _5521;
  } else {
    _4825__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5522;
  }

_5521:
  _4809 = *(void**)_4804;
  _4810 = *(uint8_t*)(((&((uint8_t*)_4809)[((int64_t)_4806)])));
  *(uint64_t*)_4805 = (llvm_add_u64(_4806, 1));
  _4811 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4810)), 0);
  _4812 = llvm_sub_u8(32, (llvm_shl_u8(_4811, 3)));
  _4813 = (((uint32_t)(uint8_t)_4810)) << 24;
  if ((((uint8_t)_4812) > ((uint8_t)((uint8_t)16)))) {
    _4825__PHI_TEMPORARY = _4813;   /* for PHI node */
    goto _5522;
  } else {
    _4814__PHI_TEMPORARY = 16;   /* for PHI node */
    _4815__PHI_TEMPORARY = _4813;   /* for PHI node */
    goto _5523;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5523:
  _4814 = _4814__PHI_TEMPORARY;
  _4815 = _4815__PHI_TEMPORARY;
  if (((((int64_t)_4814) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4814) < ((uint64_t)(((uint64_t)(uint8_t)_4812)))))) {
    _4825__PHI_TEMPORARY = _4815;   /* for PHI node */
    goto _5522;
  } else {
    goto _5524;
  }

_5524:
  _4816 = *(uint64_t*)_4805;
  _4817 = *(uint64_t*)_4807;
  if ((((int64_t)_4817) > ((int64_t)_4816))) {
    goto _5525;
  } else {
    _4825__PHI_TEMPORARY = _4815;   /* for PHI node */
    goto _5522;
  }

_5525:
  _4818 = *(void**)_4804;
  _4819 = *(uint8_t*)(((&((uint8_t*)_4818)[((int64_t)_4816)])));
  if ((((int8_t)_4819) > ((int8_t)((uint8_t)-65)))) {
    _4825__PHI_TEMPORARY = _4815;   /* for PHI node */
    goto _5522;
  } else {
    goto _5526;
  }

_5526:
  _4820 = llvm_select_u32((((int64_t)_4816) < ((int64_t)_4817)), (((uint32_t)(uint8_t)_4819)), 0);
  _4821 = *(uint64_t*)_4805;
  *(uint64_t*)_4805 = (llvm_add_u64(_4821, 1));
  _4822 = llvm_neg_u64(_4814);
  _4823 = _4815 | (llvm_select_u32((((int64_t)_4814) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4822) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4820, (((uint32_t)_4822)))))), (llvm_select_u32((((uint64_t)_4814) > ((uint64_t)UINT64_C(31))), 0, (_4820 << (((uint32_t)_4814)))))));
  _4824 = llvm_add_u64(_4814, -8);
  _4814__PHI_TEMPORARY = _4824;   /* for PHI node */
  _4815__PHI_TEMPORARY = _4823;   /* for PHI node */
  goto _5523;

  } while (1); /* end of syntactic loop '' */
_5522:
  _4825 = _4825__PHI_TEMPORARY;
  _4826 = *(uint64_t*)_4796;
  _4827 = *(uint64_t*)_4798;
  _4828 = jsyn_cbe_fshl_i64(_4827, _4826, 32);
  _4829 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4825)), _4827, 32);
  *(uint64_t*)_4796 = _4828;
  *(uint64_t*)_4798 = _4829;
  _4830 = ((&((uint8_t*)_4779)[((int64_t)56)]));
  _4831 = *(uint64_t*)_4830;
  _4832 = ((&((uint8_t*)_4779)[((int64_t)64)]));
  _4833 = *(uint64_t*)_4832;
  _4834 = ((&((uint8_t*)_4779)[((int64_t)72)]));
  _4835 = *(uint64_t*)_4834;
  _4836 = *(void**)_4779;
  _4837 = *(uint64_t*)(((&((uint8_t*)_4836)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4779)[((int64_t)48)]))) = _4831;
  *(uint64_t*)_4830 = _4833;
  *(uint64_t*)_4832 = _4835;
  *(uint64_t*)_4834 = _4837;
  julia_emit_11((&_4782), _4778, _4779, 754, 1);
  _4802__PHI_TEMPORARY = (&_4782);   /* for PHI node */
  goto _5518;

_5520:
  switch (_4801) {
  default:
    goto _5527;
  case 1056964608u:
    goto _5528;
  case 603979776u:
    goto _5528;
  case 973078528u:
    goto _5528;
  case 654311424u:
    goto _5528;
  }

_5527:
  _4838 = julia_is_operator_start_char_14(_4778, _4801);
  if ((((bool)_4838&1u))) {
    goto _5529;
  } else {
    goto _5528;
  }

_5529:
  _4839 = *(void**)_4779;
  _4840 = ((&((uint8_t*)_4839)[((int64_t)16)]));
  _4841 = *(uint64_t*)_4840;
  _4842 = ((&((uint8_t*)_4839)[((int64_t)8)]));
  _4843 = *(uint64_t*)_4842;
  if ((((int64_t)_4843) > ((int64_t)_4841))) {
    goto _5530;
  } else {
    _4860__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5531;
  }

_5530:
  _4844 = *(void**)_4839;
  _4845 = *(uint8_t*)(((&((uint8_t*)_4844)[((int64_t)_4841)])));
  *(uint64_t*)_4840 = (llvm_add_u64(_4841, 1));
  _4846 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4845)), 0);
  _4847 = llvm_sub_u8(32, (llvm_shl_u8(_4846, 3)));
  _4848 = (((uint32_t)(uint8_t)_4845)) << 24;
  if ((((uint8_t)_4847) > ((uint8_t)((uint8_t)16)))) {
    _4860__PHI_TEMPORARY = _4848;   /* for PHI node */
    goto _5531;
  } else {
    _4849__PHI_TEMPORARY = 16;   /* for PHI node */
    _4850__PHI_TEMPORARY = _4848;   /* for PHI node */
    goto _5532;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5532:
  _4849 = _4849__PHI_TEMPORARY;
  _4850 = _4850__PHI_TEMPORARY;
  if (((((int64_t)_4849) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4849) < ((uint64_t)(((uint64_t)(uint8_t)_4847)))))) {
    _4860__PHI_TEMPORARY = _4850;   /* for PHI node */
    goto _5531;
  } else {
    goto _5533;
  }

_5533:
  _4851 = *(uint64_t*)_4840;
  _4852 = *(uint64_t*)_4842;
  if ((((int64_t)_4852) > ((int64_t)_4851))) {
    goto _5534;
  } else {
    _4860__PHI_TEMPORARY = _4850;   /* for PHI node */
    goto _5531;
  }

_5534:
  _4853 = *(void**)_4839;
  _4854 = *(uint8_t*)(((&((uint8_t*)_4853)[((int64_t)_4851)])));
  if ((((int8_t)_4854) > ((int8_t)((uint8_t)-65)))) {
    _4860__PHI_TEMPORARY = _4850;   /* for PHI node */
    goto _5531;
  } else {
    goto _5535;
  }

_5535:
  _4855 = llvm_select_u32((((int64_t)_4851) < ((int64_t)_4852)), (((uint32_t)(uint8_t)_4854)), 0);
  _4856 = *(uint64_t*)_4840;
  *(uint64_t*)_4840 = (llvm_add_u64(_4856, 1));
  _4857 = llvm_neg_u64(_4849);
  _4858 = _4850 | (llvm_select_u32((((int64_t)_4849) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4857) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4855, (((uint32_t)_4857)))))), (llvm_select_u32((((uint64_t)_4849) > ((uint64_t)UINT64_C(31))), 0, (_4855 << (((uint32_t)_4849)))))));
  _4859 = llvm_add_u64(_4849, -8);
  _4849__PHI_TEMPORARY = _4859;   /* for PHI node */
  _4850__PHI_TEMPORARY = _4858;   /* for PHI node */
  goto _5532;

  } while (1); /* end of syntactic loop '' */
_5531:
  _4860 = _4860__PHI_TEMPORARY;
  _4861 = *(uint64_t*)_4796;
  _4862 = *(uint64_t*)_4798;
  _4863 = jsyn_cbe_fshl_i64(_4862, _4861, 32);
  _4864 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4860)), _4862, 32);
  *(uint64_t*)_4796 = _4863;
  *(uint64_t*)_4798 = _4864;
  _4865 = ((&((uint8_t*)_4779)[((int64_t)56)]));
  _4866 = *(uint64_t*)_4865;
  _4867 = ((&((uint8_t*)_4779)[((int64_t)64)]));
  _4868 = *(uint64_t*)_4867;
  _4869 = ((&((uint8_t*)_4779)[((int64_t)72)]));
  _4870 = *(uint64_t*)_4869;
  _4871 = *(void**)_4779;
  _4872 = *(uint64_t*)(((&((uint8_t*)_4871)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4779)[((int64_t)48)]))) = _4866;
  *(uint64_t*)_4865 = _4868;
  *(uint64_t*)_4867 = _4870;
  *(uint64_t*)_4869 = _4872;
  julia_emit_11((&_4783), _4778, _4779, 756, 1);
  _4802__PHI_TEMPORARY = (&_4783);   /* for PHI node */
  goto _5518;

_5528:
  _4873 = *(void**)_4779;
  _4874 = ((&((uint8_t*)_4873)[((int64_t)16)]));
  _4875 = *(uint64_t*)_4874;
  _4876 = ((&((uint8_t*)_4873)[((int64_t)8)]));
  _4877 = *(uint64_t*)_4876;
  if ((((int64_t)_4877) > ((int64_t)_4875))) {
    goto _5536;
  } else {
    _4894__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5537;
  }

_5536:
  _4878 = *(void**)_4873;
  _4879 = *(uint8_t*)(((&((uint8_t*)_4878)[((int64_t)_4875)])));
  *(uint64_t*)_4874 = (llvm_add_u64(_4875, 1));
  _4880 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4879)), 0);
  _4881 = llvm_sub_u8(32, (llvm_shl_u8(_4880, 3)));
  _4882 = (((uint32_t)(uint8_t)_4879)) << 24;
  if ((((uint8_t)_4881) > ((uint8_t)((uint8_t)16)))) {
    _4894__PHI_TEMPORARY = _4882;   /* for PHI node */
    goto _5537;
  } else {
    _4883__PHI_TEMPORARY = 16;   /* for PHI node */
    _4884__PHI_TEMPORARY = _4882;   /* for PHI node */
    goto _5538;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5538:
  _4883 = _4883__PHI_TEMPORARY;
  _4884 = _4884__PHI_TEMPORARY;
  if (((((int64_t)_4883) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4883) < ((uint64_t)(((uint64_t)(uint8_t)_4881)))))) {
    _4894__PHI_TEMPORARY = _4884;   /* for PHI node */
    goto _5537;
  } else {
    goto _5539;
  }

_5539:
  _4885 = *(uint64_t*)_4874;
  _4886 = *(uint64_t*)_4876;
  if ((((int64_t)_4886) > ((int64_t)_4885))) {
    goto _5540;
  } else {
    _4894__PHI_TEMPORARY = _4884;   /* for PHI node */
    goto _5537;
  }

_5540:
  _4887 = *(void**)_4873;
  _4888 = *(uint8_t*)(((&((uint8_t*)_4887)[((int64_t)_4885)])));
  if ((((int8_t)_4888) > ((int8_t)((uint8_t)-65)))) {
    _4894__PHI_TEMPORARY = _4884;   /* for PHI node */
    goto _5537;
  } else {
    goto _5541;
  }

_5541:
  _4889 = llvm_select_u32((((int64_t)_4885) < ((int64_t)_4886)), (((uint32_t)(uint8_t)_4888)), 0);
  _4890 = *(uint64_t*)_4874;
  *(uint64_t*)_4874 = (llvm_add_u64(_4890, 1));
  _4891 = llvm_neg_u64(_4883);
  _4892 = _4884 | (llvm_select_u32((((int64_t)_4883) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4891) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4889, (((uint32_t)_4891)))))), (llvm_select_u32((((uint64_t)_4883) > ((uint64_t)UINT64_C(31))), 0, (_4889 << (((uint32_t)_4883)))))));
  _4893 = llvm_add_u64(_4883, -8);
  _4883__PHI_TEMPORARY = _4893;   /* for PHI node */
  _4884__PHI_TEMPORARY = _4892;   /* for PHI node */
  goto _5538;

  } while (1); /* end of syntactic loop '' */
_5537:
  _4894 = _4894__PHI_TEMPORARY;
  _4895 = *(uint64_t*)_4796;
  _4896 = *(uint64_t*)_4798;
  _4897 = jsyn_cbe_fshl_i64(_4896, _4895, 32);
  _4898 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4894)), _4896, 32);
  *(uint64_t*)_4796 = _4897;
  *(uint64_t*)_4798 = _4898;
  _4899 = ((&((uint8_t*)_4779)[((int64_t)48)]));
  _4900 = ((&((uint8_t*)_4779)[((int64_t)56)]));
  _4901 = *(uint64_t*)_4900;
  _4902 = ((&((uint8_t*)_4779)[((int64_t)64)]));
  _4903 = *(uint64_t*)_4902;
  _4904 = ((&((uint8_t*)_4779)[((int64_t)72)]));
  _4905 = *(uint64_t*)_4904;
  _4906 = *(void**)_4779;
  _4907 = *(uint64_t*)(((&((uint8_t*)_4906)[((int64_t)16)])));
  *(uint64_t*)_4899 = _4901;
  *(uint64_t*)_4900 = _4903;
  *(uint64_t*)_4902 = _4905;
  *(uint64_t*)_4904 = _4907;
  _4908 = *(uint64_t*)_4796;
  if (((_4908 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920))) {
    goto _5542;
  } else {
    goto _5543;
  }

_5542:
  _4909 = *(void**)_4779;
  _4910 = ((&((uint8_t*)_4909)[((int64_t)16)]));
  _4911 = *(uint64_t*)_4910;
  _4912 = ((&((uint8_t*)_4909)[((int64_t)8)]));
  _4913 = *(uint64_t*)_4912;
  if ((((int64_t)_4913) > ((int64_t)_4911))) {
    goto _5544;
  } else {
    _4930__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5545;
  }

_5544:
  _4914 = *(void**)_4909;
  _4915 = *(uint8_t*)(((&((uint8_t*)_4914)[((int64_t)_4911)])));
  *(uint64_t*)_4910 = (llvm_add_u64(_4911, 1));
  _4916 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4915)), 0);
  _4917 = llvm_sub_u8(32, (llvm_shl_u8(_4916, 3)));
  _4918 = (((uint32_t)(uint8_t)_4915)) << 24;
  if ((((uint8_t)_4917) > ((uint8_t)((uint8_t)16)))) {
    _4930__PHI_TEMPORARY = _4918;   /* for PHI node */
    goto _5545;
  } else {
    _4919__PHI_TEMPORARY = 16;   /* for PHI node */
    _4920__PHI_TEMPORARY = _4918;   /* for PHI node */
    goto _5546;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5546:
  _4919 = _4919__PHI_TEMPORARY;
  _4920 = _4920__PHI_TEMPORARY;
  if (((((int64_t)_4919) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4919) < ((uint64_t)(((uint64_t)(uint8_t)_4917)))))) {
    _4930__PHI_TEMPORARY = _4920;   /* for PHI node */
    goto _5545;
  } else {
    goto _5547;
  }

_5547:
  _4921 = *(uint64_t*)_4910;
  _4922 = *(uint64_t*)_4912;
  if ((((int64_t)_4922) > ((int64_t)_4921))) {
    goto _5548;
  } else {
    _4930__PHI_TEMPORARY = _4920;   /* for PHI node */
    goto _5545;
  }

_5548:
  _4923 = *(void**)_4909;
  _4924 = *(uint8_t*)(((&((uint8_t*)_4923)[((int64_t)_4921)])));
  if ((((int8_t)_4924) > ((int8_t)((uint8_t)-65)))) {
    _4930__PHI_TEMPORARY = _4920;   /* for PHI node */
    goto _5545;
  } else {
    goto _5549;
  }

_5549:
  _4925 = llvm_select_u32((((int64_t)_4921) < ((int64_t)_4922)), (((uint32_t)(uint8_t)_4924)), 0);
  _4926 = *(uint64_t*)_4910;
  *(uint64_t*)_4910 = (llvm_add_u64(_4926, 1));
  _4927 = llvm_neg_u64(_4919);
  _4928 = _4920 | (llvm_select_u32((((int64_t)_4919) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4927) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4925, (((uint32_t)_4927)))))), (llvm_select_u32((((uint64_t)_4919) > ((uint64_t)UINT64_C(31))), 0, (_4925 << (((uint32_t)_4919)))))));
  _4929 = llvm_add_u64(_4919, -8);
  _4919__PHI_TEMPORARY = _4929;   /* for PHI node */
  _4920__PHI_TEMPORARY = _4928;   /* for PHI node */
  goto _5546;

  } while (1); /* end of syntactic loop '' */
_5545:
  _4930 = _4930__PHI_TEMPORARY;
  _4931 = *(uint64_t*)_4796;
  _4932 = *(uint64_t*)_4798;
  _4933 = jsyn_cbe_fshl_i64(_4932, _4931, 32);
  _4934 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4930)), _4932, 32);
  *(uint64_t*)_4796 = _4933;
  *(uint64_t*)_4798 = _4934;
  _4935 = *(uint64_t*)_4900;
  _4936 = *(uint64_t*)_4902;
  _4937 = *(uint64_t*)_4904;
  _4938 = *(void**)_4779;
  _4939 = *(uint64_t*)(((&((uint8_t*)_4938)[((int64_t)16)])));
  *(uint64_t*)_4899 = _4935;
  *(uint64_t*)_4900 = _4936;
  *(uint64_t*)_4902 = _4937;
  *(uint64_t*)_4904 = _4939;
  julia_emit_11((&_4784), _4778, _4779, 754, 1);
  _4802__PHI_TEMPORARY = (&_4784);   /* for PHI node */
  goto _5518;

_5543:
  _4940 = julia_accept_number_44(_4778, _4779);
  _4941 = *(uint64_t*)_4796;
  _4942 = llvm_lshr_u64(_4941, 32);
  _4943 = ((uint32_t)_4942);
  _4944 = *(uint64_t*)_4798;
  _4945 = ((uint32_t)_4944);
  switch ((((uint32_t)_4942))) {
  default:
    goto _5550;
  case 1694498816u:
    goto _5551;
  case 1711276032u:
    goto _5551;
  case 1157627904u:
    goto _5551;
  }

_5551:
  if (((((uint32_t)(llvm_add_u32(_4945, -805306368))) < ((uint32_t)150994945u)) | (_4945 == 721420288u))) {
    goto _5552;
  } else {
    goto _5553;
  }

_5553:
  switch (_4945) {
  default:
    goto _5550;
  case 3800601088u:
    goto _5552;
  case 754974720u:
    goto _5552;
  }

_5552:
  _4946 = llvm_select_u16((_4942 == UINT64_C(1711276032)), 49, 48);
  _4947 = *(void**)_4779;
  _4948 = ((&((uint8_t*)_4947)[((int64_t)16)]));
  _4949 = *(uint64_t*)_4948;
  _4950 = ((&((uint8_t*)_4947)[((int64_t)8)]));
  _4951 = *(uint64_t*)_4950;
  if ((((int64_t)_4951) > ((int64_t)_4949))) {
    goto _5554;
  } else {
    _4968__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5555;
  }

_5554:
  _4952 = *(void**)_4947;
  _4953 = *(uint8_t*)(((&((uint8_t*)_4952)[((int64_t)_4949)])));
  *(uint64_t*)_4948 = (llvm_add_u64(_4949, 1));
  _4954 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4953)), 0);
  _4955 = llvm_sub_u8(32, (llvm_shl_u8(_4954, 3)));
  _4956 = (((uint32_t)(uint8_t)_4953)) << 24;
  if ((((uint8_t)_4955) > ((uint8_t)((uint8_t)16)))) {
    _4968__PHI_TEMPORARY = _4956;   /* for PHI node */
    goto _5555;
  } else {
    _4957__PHI_TEMPORARY = 16;   /* for PHI node */
    _4958__PHI_TEMPORARY = _4956;   /* for PHI node */
    goto _5556;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5556:
  _4957 = _4957__PHI_TEMPORARY;
  _4958 = _4958__PHI_TEMPORARY;
  if (((((int64_t)_4957) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4957) < ((uint64_t)(((uint64_t)(uint8_t)_4955)))))) {
    _4968__PHI_TEMPORARY = _4958;   /* for PHI node */
    goto _5555;
  } else {
    goto _5557;
  }

_5557:
  _4959 = *(uint64_t*)_4948;
  _4960 = *(uint64_t*)_4950;
  if ((((int64_t)_4960) > ((int64_t)_4959))) {
    goto _5558;
  } else {
    _4968__PHI_TEMPORARY = _4958;   /* for PHI node */
    goto _5555;
  }

_5558:
  _4961 = *(void**)_4947;
  _4962 = *(uint8_t*)(((&((uint8_t*)_4961)[((int64_t)_4959)])));
  if ((((int8_t)_4962) > ((int8_t)((uint8_t)-65)))) {
    _4968__PHI_TEMPORARY = _4958;   /* for PHI node */
    goto _5555;
  } else {
    goto _5559;
  }

_5559:
  _4963 = llvm_select_u32((((int64_t)_4959) < ((int64_t)_4960)), (((uint32_t)(uint8_t)_4962)), 0);
  _4964 = *(uint64_t*)_4948;
  *(uint64_t*)_4948 = (llvm_add_u64(_4964, 1));
  _4965 = llvm_neg_u64(_4957);
  _4966 = _4958 | (llvm_select_u32((((int64_t)_4957) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4965) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4963, (((uint32_t)_4965)))))), (llvm_select_u32((((uint64_t)_4957) > ((uint64_t)UINT64_C(31))), 0, (_4963 << (((uint32_t)_4957)))))));
  _4967 = llvm_add_u64(_4957, -8);
  _4957__PHI_TEMPORARY = _4967;   /* for PHI node */
  _4958__PHI_TEMPORARY = _4966;   /* for PHI node */
  goto _5556;

  } while (1); /* end of syntactic loop '' */
_5555:
  _4968 = _4968__PHI_TEMPORARY;
  _4969 = *(uint64_t*)_4796;
  _4970 = *(uint64_t*)_4798;
  _4971 = jsyn_cbe_fshl_i64(_4970, _4969, 32);
  _4972 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4968)), _4970, 32);
  *(uint64_t*)_4796 = _4971;
  *(uint64_t*)_4798 = _4972;
  _4973 = *(uint64_t*)_4900;
  _4974 = *(uint64_t*)_4902;
  _4975 = *(uint64_t*)_4904;
  _4976 = *(void**)_4779;
  _4977 = *(uint64_t*)(((&((uint8_t*)_4976)[((int64_t)16)])));
  *(uint64_t*)_4899 = _4973;
  *(uint64_t*)_4900 = _4974;
  *(uint64_t*)_4902 = _4975;
  *(uint64_t*)_4904 = _4977;
  _4978 = *(uint64_t*)_4796;
  switch ((((uint32_t)(llvm_lshr_u64(_4978, 32))))) {
  default:
    _5011__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5560;
  case 721420288u:
    goto _5561;
  case 3800601088u:
    goto _5561;
  case 754974720u:
    goto _5561;
  }

_5561:
  _4979 = *(void**)_4779;
  _4980 = ((&((uint8_t*)_4979)[((int64_t)16)]));
  _4981 = *(uint64_t*)_4980;
  _4982 = ((&((uint8_t*)_4979)[((int64_t)8)]));
  _4983 = *(uint64_t*)_4982;
  if ((((int64_t)_4983) > ((int64_t)_4981))) {
    goto _5562;
  } else {
    _5000__PHI_TEMPORARY = -1;   /* for PHI node */
    _5001__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5563;
  }

_5562:
  _4984 = *(void**)_4979;
  _4985 = *(uint8_t*)(((&((uint8_t*)_4984)[((int64_t)_4981)])));
  *(uint64_t*)_4980 = (llvm_add_u64(_4981, 1));
  _4986 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4985)), 0);
  _4987 = llvm_sub_u8(32, (llvm_shl_u8(_4986, 3)));
  _4988 = (((uint32_t)(uint8_t)_4985)) << 24;
  if ((((uint8_t)_4987) > ((uint8_t)((uint8_t)16)))) {
    _5000__PHI_TEMPORARY = _4988;   /* for PHI node */
    _5001__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5563;
  } else {
    _4989__PHI_TEMPORARY = 16;   /* for PHI node */
    _4990__PHI_TEMPORARY = _4988;   /* for PHI node */
    goto _5564;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5564:
  _4989 = _4989__PHI_TEMPORARY;
  _4990 = _4990__PHI_TEMPORARY;
  if (((((int64_t)_4989) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4989) < ((uint64_t)(((uint64_t)(uint8_t)_4987)))))) {
    _5000__PHI_TEMPORARY = _4990;   /* for PHI node */
    _5001__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5563;
  } else {
    goto _5565;
  }

_5565:
  _4991 = *(uint64_t*)_4980;
  _4992 = *(uint64_t*)_4982;
  if ((((int64_t)_4992) > ((int64_t)_4991))) {
    goto _5566;
  } else {
    _5000__PHI_TEMPORARY = _4990;   /* for PHI node */
    _5001__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5563;
  }

_5566:
  _4993 = *(void**)_4979;
  _4994 = *(uint8_t*)(((&((uint8_t*)_4993)[((int64_t)_4991)])));
  if ((((int8_t)_4994) > ((int8_t)((uint8_t)-65)))) {
    _5000__PHI_TEMPORARY = _4990;   /* for PHI node */
    _5001__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5563;
  } else {
    goto _5567;
  }

_5567:
  _4995 = llvm_select_u32((((int64_t)_4991) < ((int64_t)_4992)), (((uint32_t)(uint8_t)_4994)), 0);
  _4996 = *(uint64_t*)_4980;
  *(uint64_t*)_4980 = (llvm_add_u64(_4996, 1));
  _4997 = llvm_neg_u64(_4989);
  _4998 = _4990 | (llvm_select_u32((((int64_t)_4989) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4997) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4995, (((uint32_t)_4997)))))), (llvm_select_u32((((uint64_t)_4989) > ((uint64_t)UINT64_C(31))), 0, (_4995 << (((uint32_t)_4989)))))));
  _4999 = llvm_add_u64(_4989, -8);
  _4989__PHI_TEMPORARY = _4999;   /* for PHI node */
  _4990__PHI_TEMPORARY = _4998;   /* for PHI node */
  goto _5564;

  } while (1); /* end of syntactic loop '' */
_5563:
  _5000 = _5000__PHI_TEMPORARY;
  _5001 = _5001__PHI_TEMPORARY;
  _5002 = *(uint64_t*)_4796;
  _5003 = *(uint64_t*)_4798;
  _5004 = jsyn_cbe_fshl_i64(_5003, _5002, 32);
  _5005 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5000)), _5003, 32);
  *(uint64_t*)_4796 = _5004;
  *(uint64_t*)_4798 = _5005;
  _5006 = *(uint64_t*)_4900;
  _5007 = *(uint64_t*)_4902;
  _5008 = *(uint64_t*)_4904;
  _5009 = *(void**)_4779;
  _5010 = *(uint64_t*)(((&((uint8_t*)_5009)[((int64_t)16)])));
  *(uint64_t*)_4899 = _5006;
  *(uint64_t*)_4900 = _5007;
  *(uint64_t*)_4902 = _5008;
  *(uint64_t*)_4904 = _5010;
  _5011__PHI_TEMPORARY = _5001;   /* for PHI node */
  goto _5560;

_5560:
  _5011 = _5011__PHI_TEMPORARY;
  _5012 = *(uint64_t*)_4796;
  _5013 = llvm_lshr_u64(_5012, 32);
  if ((((((uint64_t)_5012) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5013 != UINT64_C(805306368))) | ((((uint64_t)_5012) > ((uint64_t)UINT64_C(4107282860161892351))) & (_5013 != UINT64_C(956301312))))) {
    goto _5568;
  } else {
    goto _5569;
  }

_5569:
  _5014 = *(void**)_4779;
  _5015 = ((&((uint8_t*)_5014)[((int64_t)16)]));
  _5016 = *(uint64_t*)_5015;
  _5017 = ((&((uint8_t*)_5014)[((int64_t)8)]));
  _5018 = *(uint64_t*)_5017;
  if ((((int64_t)_5018) > ((int64_t)_5016))) {
    goto _5570;
  } else {
    _5000__PHI_TEMPORARY = -1;   /* for PHI node */
    _5001__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5563;
  }

_5570:
  _5019 = *(void**)_5014;
  _5020 = *(uint8_t*)(((&((uint8_t*)_5019)[((int64_t)_5016)])));
  *(uint64_t*)_5015 = (llvm_add_u64(_5016, 1));
  _5021 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5020)), 0);
  _5022 = llvm_sub_u8(32, (llvm_shl_u8(_5021, 3)));
  _5023 = (((uint32_t)(uint8_t)_5020)) << 24;
  if ((((uint8_t)_5022) > ((uint8_t)((uint8_t)16)))) {
    _5000__PHI_TEMPORARY = _5023;   /* for PHI node */
    _5001__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5563;
  } else {
    _5024__PHI_TEMPORARY = 16;   /* for PHI node */
    _5025__PHI_TEMPORARY = _5023;   /* for PHI node */
    goto _5571;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5571:
  _5024 = _5024__PHI_TEMPORARY;
  _5025 = _5025__PHI_TEMPORARY;
  if (((((int64_t)_5024) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5024) < ((uint64_t)(((uint64_t)(uint8_t)_5022)))))) {
    _5000__PHI_TEMPORARY = _5025;   /* for PHI node */
    _5001__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5563;
  } else {
    goto _5572;
  }

_5572:
  _5026 = *(uint64_t*)_5015;
  _5027 = *(uint64_t*)_5017;
  if ((((int64_t)_5027) > ((int64_t)_5026))) {
    goto _5573;
  } else {
    _5000__PHI_TEMPORARY = _5025;   /* for PHI node */
    _5001__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5563;
  }

_5573:
  _5028 = *(void**)_5014;
  _5029 = *(uint8_t*)(((&((uint8_t*)_5028)[((int64_t)_5026)])));
  if ((((int8_t)_5029) > ((int8_t)((uint8_t)-65)))) {
    _5000__PHI_TEMPORARY = _5025;   /* for PHI node */
    _5001__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5563;
  } else {
    goto _5574;
  }

_5574:
  _5030 = llvm_select_u32((((int64_t)_5026) < ((int64_t)_5027)), (((uint32_t)(uint8_t)_5029)), 0);
  _5031 = *(uint64_t*)_5015;
  *(uint64_t*)_5015 = (llvm_add_u64(_5031, 1));
  _5032 = llvm_neg_u64(_5024);
  _5033 = _5025 | (llvm_select_u32((((int64_t)_5024) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5032) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5030, (((uint32_t)_5032)))))), (llvm_select_u32((((uint64_t)_5024) > ((uint64_t)UINT64_C(31))), 0, (_5030 << (((uint32_t)_5024)))))));
  _5034 = llvm_add_u64(_5024, -8);
  _5024__PHI_TEMPORARY = _5034;   /* for PHI node */
  _5025__PHI_TEMPORARY = _5033;   /* for PHI node */
  goto _5571;

  } while (1); /* end of syntactic loop '' */
_5568:
  if (_5011) {
    goto _5575;
  } else {
    goto _5576;
  }

_5576:
  _5035 = *(uint64_t*)_4796;
  _5036 = *(uint64_t*)_4798;
  _5037 = ((uint32_t)_5036);
  if (((_5035 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5577;
  } else {
    _5512__PHI_TEMPORARY = _4946;   /* for PHI node */
    goto _5578;
  }

_5577:
  switch (_5037) {
  default:
    goto _5579;
  case 1056964608u:
    goto _5580;
  case 603979776u:
    goto _5580;
  case 973078528u:
    goto _5580;
  case 654311424u:
    goto _5580;
  }

_5579:
  _5038 = julia_is_operator_start_char_14(_4778, _5037);
  if ((((bool)_5038&1u))) {
    _5512__PHI_TEMPORARY = _4946;   /* for PHI node */
    goto _5578;
  } else {
    goto _5580;
  }

_5580:
  _5039 = *(void**)_4779;
  _5040 = ((&((uint8_t*)_5039)[((int64_t)16)]));
  _5041 = *(uint64_t*)_5040;
  _5042 = ((&((uint8_t*)_5039)[((int64_t)8)]));
  _5043 = *(uint64_t*)_5042;
  if ((((int64_t)_5043) > ((int64_t)_5041))) {
    goto _5581;
  } else {
    _5060__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5582;
  }

_5581:
  _5044 = *(void**)_5039;
  _5045 = *(uint8_t*)(((&((uint8_t*)_5044)[((int64_t)_5041)])));
  *(uint64_t*)_5040 = (llvm_add_u64(_5041, 1));
  _5046 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5045)), 0);
  _5047 = llvm_sub_u8(32, (llvm_shl_u8(_5046, 3)));
  _5048 = (((uint32_t)(uint8_t)_5045)) << 24;
  if ((((uint8_t)_5047) > ((uint8_t)((uint8_t)16)))) {
    _5060__PHI_TEMPORARY = _5048;   /* for PHI node */
    goto _5582;
  } else {
    _5049__PHI_TEMPORARY = 16;   /* for PHI node */
    _5050__PHI_TEMPORARY = _5048;   /* for PHI node */
    goto _5583;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5583:
  _5049 = _5049__PHI_TEMPORARY;
  _5050 = _5050__PHI_TEMPORARY;
  if (((((int64_t)_5049) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5049) < ((uint64_t)(((uint64_t)(uint8_t)_5047)))))) {
    _5060__PHI_TEMPORARY = _5050;   /* for PHI node */
    goto _5582;
  } else {
    goto _5584;
  }

_5584:
  _5051 = *(uint64_t*)_5040;
  _5052 = *(uint64_t*)_5042;
  if ((((int64_t)_5052) > ((int64_t)_5051))) {
    goto _5585;
  } else {
    _5060__PHI_TEMPORARY = _5050;   /* for PHI node */
    goto _5582;
  }

_5585:
  _5053 = *(void**)_5039;
  _5054 = *(uint8_t*)(((&((uint8_t*)_5053)[((int64_t)_5051)])));
  if ((((int8_t)_5054) > ((int8_t)((uint8_t)-65)))) {
    _5060__PHI_TEMPORARY = _5050;   /* for PHI node */
    goto _5582;
  } else {
    goto _5586;
  }

_5586:
  _5055 = llvm_select_u32((((int64_t)_5051) < ((int64_t)_5052)), (((uint32_t)(uint8_t)_5054)), 0);
  _5056 = *(uint64_t*)_5040;
  *(uint64_t*)_5040 = (llvm_add_u64(_5056, 1));
  _5057 = llvm_neg_u64(_5049);
  _5058 = _5050 | (llvm_select_u32((((int64_t)_5049) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5057) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5055, (((uint32_t)_5057)))))), (llvm_select_u32((((uint64_t)_5049) > ((uint64_t)UINT64_C(31))), 0, (_5055 << (((uint32_t)_5049)))))));
  _5059 = llvm_add_u64(_5049, -8);
  _5049__PHI_TEMPORARY = _5059;   /* for PHI node */
  _5050__PHI_TEMPORARY = _5058;   /* for PHI node */
  goto _5583;

  } while (1); /* end of syntactic loop '' */
_5582:
  _5060 = _5060__PHI_TEMPORARY;
  _5061 = *(uint64_t*)_4796;
  _5062 = *(uint64_t*)_4798;
  _5063 = jsyn_cbe_fshl_i64(_5062, _5061, 32);
  _5064 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5060)), _5062, 32);
  *(uint64_t*)_4796 = _5063;
  *(uint64_t*)_4798 = _5064;
  _5065 = *(uint64_t*)_4900;
  _5066 = *(uint64_t*)_4902;
  _5067 = *(uint64_t*)_4904;
  _5068 = *(void**)_4779;
  _5069 = *(uint64_t*)(((&((uint8_t*)_5068)[((int64_t)16)])));
  *(uint64_t*)_4899 = _5065;
  *(uint64_t*)_4900 = _5066;
  *(uint64_t*)_4902 = _5067;
  *(uint64_t*)_4904 = _5069;
  julia_emit_11((&_4785), _4778, _4779, 754, 1);
  _4802__PHI_TEMPORARY = (&_4785);   /* for PHI node */
  goto _5518;

_5575:
  julia_emit_11((&_4787), _4778, _4779, 754, 1);
  _4802__PHI_TEMPORARY = (&_4787);   /* for PHI node */
  goto _5518;

_5550:
  if ((llvm_select_bool((_4942 != UINT64_C(771751936)), 1, (_4945 == 771751936u)))) {
    goto _5587;
  } else {
    goto _5588;
  }

_5588:
  switch (_4945) {
  default:
    goto _5589;
  case 1056964608u:
    goto _5590;
  case 603979776u:
    goto _5590;
  case 973078528u:
    goto _5590;
  case 654311424u:
    goto _5590;
  }

_5589:
  _5070 = julia_is_operator_start_char_14(_4778, _4945);
  if ((((bool)_5070&1u))) {
    goto _5587;
  } else {
    goto _5590;
  }

_5590:
  _5071 = *(void**)_4779;
  _5072 = ((&((uint8_t*)_5071)[((int64_t)16)]));
  _5073 = *(uint64_t*)_5072;
  _5074 = ((&((uint8_t*)_5071)[((int64_t)8)]));
  _5075 = *(uint64_t*)_5074;
  if ((((int64_t)_5075) > ((int64_t)_5073))) {
    goto _5591;
  } else {
    _5092__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5592;
  }

_5591:
  _5076 = *(void**)_5071;
  _5077 = *(uint8_t*)(((&((uint8_t*)_5076)[((int64_t)_5073)])));
  *(uint64_t*)_5072 = (llvm_add_u64(_5073, 1));
  _5078 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5077)), 0);
  _5079 = llvm_sub_u8(32, (llvm_shl_u8(_5078, 3)));
  _5080 = (((uint32_t)(uint8_t)_5077)) << 24;
  if ((((uint8_t)_5079) > ((uint8_t)((uint8_t)16)))) {
    _5092__PHI_TEMPORARY = _5080;   /* for PHI node */
    goto _5592;
  } else {
    _5081__PHI_TEMPORARY = 16;   /* for PHI node */
    _5082__PHI_TEMPORARY = _5080;   /* for PHI node */
    goto _5593;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5593:
  _5081 = _5081__PHI_TEMPORARY;
  _5082 = _5082__PHI_TEMPORARY;
  if (((((int64_t)_5081) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5081) < ((uint64_t)(((uint64_t)(uint8_t)_5079)))))) {
    _5092__PHI_TEMPORARY = _5082;   /* for PHI node */
    goto _5592;
  } else {
    goto _5594;
  }

_5594:
  _5083 = *(uint64_t*)_5072;
  _5084 = *(uint64_t*)_5074;
  if ((((int64_t)_5084) > ((int64_t)_5083))) {
    goto _5595;
  } else {
    _5092__PHI_TEMPORARY = _5082;   /* for PHI node */
    goto _5592;
  }

_5595:
  _5085 = *(void**)_5071;
  _5086 = *(uint8_t*)(((&((uint8_t*)_5085)[((int64_t)_5083)])));
  if ((((int8_t)_5086) > ((int8_t)((uint8_t)-65)))) {
    _5092__PHI_TEMPORARY = _5082;   /* for PHI node */
    goto _5592;
  } else {
    goto _5596;
  }

_5596:
  _5087 = llvm_select_u32((((int64_t)_5083) < ((int64_t)_5084)), (((uint32_t)(uint8_t)_5086)), 0);
  _5088 = *(uint64_t*)_5072;
  *(uint64_t*)_5072 = (llvm_add_u64(_5088, 1));
  _5089 = llvm_neg_u64(_5081);
  _5090 = _5082 | (llvm_select_u32((((int64_t)_5081) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5089) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5087, (((uint32_t)_5089)))))), (llvm_select_u32((((uint64_t)_5081) > ((uint64_t)UINT64_C(31))), 0, (_5087 << (((uint32_t)_5081)))))));
  _5091 = llvm_add_u64(_5081, -8);
  _5081__PHI_TEMPORARY = _5091;   /* for PHI node */
  _5082__PHI_TEMPORARY = _5090;   /* for PHI node */
  goto _5593;

  } while (1); /* end of syntactic loop '' */
_5592:
  _5092 = _5092__PHI_TEMPORARY;
  _5093 = *(uint64_t*)_4796;
  _5094 = *(uint64_t*)_4798;
  _5095 = jsyn_cbe_fshl_i64(_5094, _5093, 32);
  _5096 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5092)), _5094, 32);
  *(uint64_t*)_4796 = _5095;
  *(uint64_t*)_4798 = _5096;
  _5097 = *(uint64_t*)_4900;
  _5098 = *(uint64_t*)_4902;
  _5099 = *(uint64_t*)_4904;
  _5100 = *(void**)_4779;
  _5101 = *(uint64_t*)(((&((uint8_t*)_5100)[((int64_t)16)])));
  *(uint64_t*)_4899 = _5097;
  *(uint64_t*)_4900 = _5098;
  *(uint64_t*)_4902 = _5099;
  *(uint64_t*)_4904 = _5101;
  julia_emit_11((&_4788), _4778, _4779, 754, 1);
  _4802__PHI_TEMPORARY = (&_4788);   /* for PHI node */
  goto _5518;

_5587:
  if (((_4942 == UINT64_C(4294967295)) | (((bool)_4940&1u)))) {
    _5512__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _5578;
  } else {
    goto _5597;
  }

_5597:
  _5102 = llvm_OC_ctlz_OC_i32((_4943 ^ -1), 0);
  _5103 = ((uint64_t)(uint32_t)_5102);
  _5104 = llvm_OC_cttz_OC_i32(_4943, 0);
  _5105 = _5104 & 56;
  _5106 = ((uint64_t)(uint32_t)_5105);
  _5107 = llvm_select_bool((((uint32_t)_5104) < ((uint32_t)32u)), ((llvm_lshr_u32(((_4943 & 12632256) ^ 8421504), _5105)) != 0u), 0);
  _5108 = (((_4943 & -33554432) == 3221225472u) | ((_4943 & -2097152) == 3766484992u)) | ((_4943 & -1048576) == 4034920448u);
  if (((((((_5102 == 1u) | (((uint64_t)(llvm_add_u64((_5103 << 3), _5106))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_4941) > ((uint64_t)UINT64_C(17122614315006820351))) & (_4942 != UINT64_C(3986669312))) & (((((uint64_t)_4941) < ((uint64_t)UINT64_C(17185876919829135360))) & (_4942 != UINT64_C(4001398784))) | ((((uint64_t)_4941) > ((uint64_t)UINT64_C(17622514693983698943))) & (_4942 != UINT64_C(4103061439)))))) | (_4942 == UINT64_C(4036993714))) | _5107) | _5108)) {
    goto _5598;
  } else {
    goto _5599;
  }

_5599:
  _5109 = llvm_lshr_u32(_4943, 24);
  if ((((int64_t)_4941) < ((int64_t)UINT64_C(0)))) {
    goto _5600;
  } else {
    _5112__PHI_TEMPORARY = _5109;   /* for PHI node */
    goto _5601;
  }

_5600:
  if ((((_5102 == 1u) | (((uint64_t)(llvm_add_u64((_5103 << 3), _5106))) > ((uint64_t)UINT64_C(32)))) | (_5107 | _5108))) {
    goto _5602;
  } else {
    goto _5603;
  }

_5602:
  julia_throw_invalid_char_12(_4778, _4943);
  __builtin_unreachable();

_5603:
  _5110 = llvm_select_u32((((uint32_t)_5104) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _5102)) & _4943), _5105)), 0);
  _5111 = (((_5110 & 127) | ((llvm_lshr_u32(_5110, 2)) & 8128)) | ((llvm_lshr_u32(_5110, 4)) & 520192)) | ((llvm_lshr_u32(_5110, 6)) & 33292288);
  _5112__PHI_TEMPORARY = _5111;   /* for PHI node */
  goto _5601;

_5601:
  _5112 = _5112__PHI_TEMPORARY;
  _5113 = jsk_jl_id_start_char(_5112);
  if ((_5113 == 0u)) {
    goto _5598;
  } else {
    goto _5604;
  }

_5598:
  switch ((((uint32_t)_4942))) {
  default:
    _5512__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _5578;
  case 671088640u:
    goto _5604;
  case 1526726656u:
    goto _5604;
  case 2063597568u:
    goto _5604;
  case 1073741824u:
    goto _5604;
  case 1610612736u:
    goto _5604;
  case 570425344u:
    goto _5604;
  }

_5604:
  julia_emit_11((&_4789), _4778, _4779, 757, 1);
  _4802__PHI_TEMPORARY = (&_4789);   /* for PHI node */
  goto _5518;

_5515:
  if (((((uint32_t)(llvm_add_u32(_4801, -805306368))) < ((uint32_t)150994945u)) | (_4801 == 721420288u))) {
    goto _5605;
  } else {
    goto _5606;
  }

_5606:
  switch (_4801) {
  default:
    goto _5513;
  case 3800601088u:
    goto _5605;
  case 754974720u:
    goto _5605;
  }

_5605:
  _5114 = llvm_select_u16((_4799 == UINT64_C(1711276032)), 49, 48);
  _5115 = *(void**)_4779;
  _5116 = ((&((uint8_t*)_5115)[((int64_t)16)]));
  _5117 = *(uint64_t*)_5116;
  _5118 = ((&((uint8_t*)_5115)[((int64_t)8)]));
  _5119 = *(uint64_t*)_5118;
  if ((((int64_t)_5119) > ((int64_t)_5117))) {
    goto _5607;
  } else {
    _5136__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5608;
  }

_5607:
  _5120 = *(void**)_5115;
  _5121 = *(uint8_t*)(((&((uint8_t*)_5120)[((int64_t)_5117)])));
  *(uint64_t*)_5116 = (llvm_add_u64(_5117, 1));
  _5122 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5121)), 0);
  _5123 = llvm_sub_u8(32, (llvm_shl_u8(_5122, 3)));
  _5124 = (((uint32_t)(uint8_t)_5121)) << 24;
  if ((((uint8_t)_5123) > ((uint8_t)((uint8_t)16)))) {
    _5136__PHI_TEMPORARY = _5124;   /* for PHI node */
    goto _5608;
  } else {
    _5125__PHI_TEMPORARY = 16;   /* for PHI node */
    _5126__PHI_TEMPORARY = _5124;   /* for PHI node */
    goto _5609;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5609:
  _5125 = _5125__PHI_TEMPORARY;
  _5126 = _5126__PHI_TEMPORARY;
  if (((((int64_t)_5125) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5125) < ((uint64_t)(((uint64_t)(uint8_t)_5123)))))) {
    _5136__PHI_TEMPORARY = _5126;   /* for PHI node */
    goto _5608;
  } else {
    goto _5610;
  }

_5610:
  _5127 = *(uint64_t*)_5116;
  _5128 = *(uint64_t*)_5118;
  if ((((int64_t)_5128) > ((int64_t)_5127))) {
    goto _5611;
  } else {
    _5136__PHI_TEMPORARY = _5126;   /* for PHI node */
    goto _5608;
  }

_5611:
  _5129 = *(void**)_5115;
  _5130 = *(uint8_t*)(((&((uint8_t*)_5129)[((int64_t)_5127)])));
  if ((((int8_t)_5130) > ((int8_t)((uint8_t)-65)))) {
    _5136__PHI_TEMPORARY = _5126;   /* for PHI node */
    goto _5608;
  } else {
    goto _5612;
  }

_5612:
  _5131 = llvm_select_u32((((int64_t)_5127) < ((int64_t)_5128)), (((uint32_t)(uint8_t)_5130)), 0);
  _5132 = *(uint64_t*)_5116;
  *(uint64_t*)_5116 = (llvm_add_u64(_5132, 1));
  _5133 = llvm_neg_u64(_5125);
  _5134 = _5126 | (llvm_select_u32((((int64_t)_5125) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5133) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5131, (((uint32_t)_5133)))))), (llvm_select_u32((((uint64_t)_5125) > ((uint64_t)UINT64_C(31))), 0, (_5131 << (((uint32_t)_5125)))))));
  _5135 = llvm_add_u64(_5125, -8);
  _5125__PHI_TEMPORARY = _5135;   /* for PHI node */
  _5126__PHI_TEMPORARY = _5134;   /* for PHI node */
  goto _5609;

  } while (1); /* end of syntactic loop '' */
_5608:
  _5136 = _5136__PHI_TEMPORARY;
  _5137 = *(uint64_t*)_4796;
  _5138 = *(uint64_t*)_4798;
  _5139 = jsyn_cbe_fshl_i64(_5138, _5137, 32);
  _5140 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5136)), _5138, 32);
  *(uint64_t*)_4796 = _5139;
  *(uint64_t*)_4798 = _5140;
  _5141 = ((&((uint8_t*)_4779)[((int64_t)48)]));
  _5142 = ((&((uint8_t*)_4779)[((int64_t)56)]));
  _5143 = *(uint64_t*)_5142;
  _5144 = ((&((uint8_t*)_4779)[((int64_t)64)]));
  _5145 = *(uint64_t*)_5144;
  _5146 = ((&((uint8_t*)_4779)[((int64_t)72)]));
  _5147 = *(uint64_t*)_5146;
  _5148 = *(void**)_4779;
  _5149 = *(uint64_t*)(((&((uint8_t*)_5148)[((int64_t)16)])));
  *(uint64_t*)_5141 = _5143;
  *(uint64_t*)_5142 = _5145;
  *(uint64_t*)_5144 = _5147;
  *(uint64_t*)_5146 = _5149;
  _5150 = *(uint64_t*)_4796;
  switch ((((uint32_t)(llvm_lshr_u64(_5150, 32))))) {
  default:
    _5183__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5613;
  case 721420288u:
    goto _5614;
  case 3800601088u:
    goto _5614;
  case 754974720u:
    goto _5614;
  }

_5614:
  _5151 = *(void**)_4779;
  _5152 = ((&((uint8_t*)_5151)[((int64_t)16)]));
  _5153 = *(uint64_t*)_5152;
  _5154 = ((&((uint8_t*)_5151)[((int64_t)8)]));
  _5155 = *(uint64_t*)_5154;
  if ((((int64_t)_5155) > ((int64_t)_5153))) {
    goto _5615;
  } else {
    _5172__PHI_TEMPORARY = -1;   /* for PHI node */
    _5173__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5616;
  }

_5615:
  _5156 = *(void**)_5151;
  _5157 = *(uint8_t*)(((&((uint8_t*)_5156)[((int64_t)_5153)])));
  *(uint64_t*)_5152 = (llvm_add_u64(_5153, 1));
  _5158 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5157)), 0);
  _5159 = llvm_sub_u8(32, (llvm_shl_u8(_5158, 3)));
  _5160 = (((uint32_t)(uint8_t)_5157)) << 24;
  if ((((uint8_t)_5159) > ((uint8_t)((uint8_t)16)))) {
    _5172__PHI_TEMPORARY = _5160;   /* for PHI node */
    _5173__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5616;
  } else {
    _5161__PHI_TEMPORARY = 16;   /* for PHI node */
    _5162__PHI_TEMPORARY = _5160;   /* for PHI node */
    goto _5617;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5617:
  _5161 = _5161__PHI_TEMPORARY;
  _5162 = _5162__PHI_TEMPORARY;
  if (((((int64_t)_5161) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5161) < ((uint64_t)(((uint64_t)(uint8_t)_5159)))))) {
    _5172__PHI_TEMPORARY = _5162;   /* for PHI node */
    _5173__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5616;
  } else {
    goto _5618;
  }

_5618:
  _5163 = *(uint64_t*)_5152;
  _5164 = *(uint64_t*)_5154;
  if ((((int64_t)_5164) > ((int64_t)_5163))) {
    goto _5619;
  } else {
    _5172__PHI_TEMPORARY = _5162;   /* for PHI node */
    _5173__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5616;
  }

_5619:
  _5165 = *(void**)_5151;
  _5166 = *(uint8_t*)(((&((uint8_t*)_5165)[((int64_t)_5163)])));
  if ((((int8_t)_5166) > ((int8_t)((uint8_t)-65)))) {
    _5172__PHI_TEMPORARY = _5162;   /* for PHI node */
    _5173__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5616;
  } else {
    goto _5620;
  }

_5620:
  _5167 = llvm_select_u32((((int64_t)_5163) < ((int64_t)_5164)), (((uint32_t)(uint8_t)_5166)), 0);
  _5168 = *(uint64_t*)_5152;
  *(uint64_t*)_5152 = (llvm_add_u64(_5168, 1));
  _5169 = llvm_neg_u64(_5161);
  _5170 = _5162 | (llvm_select_u32((((int64_t)_5161) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5169) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5167, (((uint32_t)_5169)))))), (llvm_select_u32((((uint64_t)_5161) > ((uint64_t)UINT64_C(31))), 0, (_5167 << (((uint32_t)_5161)))))));
  _5171 = llvm_add_u64(_5161, -8);
  _5161__PHI_TEMPORARY = _5171;   /* for PHI node */
  _5162__PHI_TEMPORARY = _5170;   /* for PHI node */
  goto _5617;

  } while (1); /* end of syntactic loop '' */
_5616:
  _5172 = _5172__PHI_TEMPORARY;
  _5173 = _5173__PHI_TEMPORARY;
  _5174 = *(uint64_t*)_4796;
  _5175 = *(uint64_t*)_4798;
  _5176 = jsyn_cbe_fshl_i64(_5175, _5174, 32);
  _5177 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5172)), _5175, 32);
  *(uint64_t*)_4796 = _5176;
  *(uint64_t*)_4798 = _5177;
  _5178 = *(uint64_t*)_5142;
  _5179 = *(uint64_t*)_5144;
  _5180 = *(uint64_t*)_5146;
  _5181 = *(void**)_4779;
  _5182 = *(uint64_t*)(((&((uint8_t*)_5181)[((int64_t)16)])));
  *(uint64_t*)_5141 = _5178;
  *(uint64_t*)_5142 = _5179;
  *(uint64_t*)_5144 = _5180;
  *(uint64_t*)_5146 = _5182;
  _5183__PHI_TEMPORARY = _5173;   /* for PHI node */
  goto _5613;

_5613:
  _5183 = _5183__PHI_TEMPORARY;
  _5184 = *(uint64_t*)_4796;
  _5185 = llvm_lshr_u64(_5184, 32);
  if ((((((uint64_t)_5184) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5185 != UINT64_C(805306368))) | ((((uint64_t)_5184) > ((uint64_t)UINT64_C(4107282860161892351))) & (_5185 != UINT64_C(956301312))))) {
    goto _5621;
  } else {
    goto _5622;
  }

_5622:
  _5186 = *(void**)_4779;
  _5187 = ((&((uint8_t*)_5186)[((int64_t)16)]));
  _5188 = *(uint64_t*)_5187;
  _5189 = ((&((uint8_t*)_5186)[((int64_t)8)]));
  _5190 = *(uint64_t*)_5189;
  if ((((int64_t)_5190) > ((int64_t)_5188))) {
    goto _5623;
  } else {
    _5172__PHI_TEMPORARY = -1;   /* for PHI node */
    _5173__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5616;
  }

_5623:
  _5191 = *(void**)_5186;
  _5192 = *(uint8_t*)(((&((uint8_t*)_5191)[((int64_t)_5188)])));
  *(uint64_t*)_5187 = (llvm_add_u64(_5188, 1));
  _5193 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5192)), 0);
  _5194 = llvm_sub_u8(32, (llvm_shl_u8(_5193, 3)));
  _5195 = (((uint32_t)(uint8_t)_5192)) << 24;
  if ((((uint8_t)_5194) > ((uint8_t)((uint8_t)16)))) {
    _5172__PHI_TEMPORARY = _5195;   /* for PHI node */
    _5173__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5616;
  } else {
    _5196__PHI_TEMPORARY = 16;   /* for PHI node */
    _5197__PHI_TEMPORARY = _5195;   /* for PHI node */
    goto _5624;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5624:
  _5196 = _5196__PHI_TEMPORARY;
  _5197 = _5197__PHI_TEMPORARY;
  if (((((int64_t)_5196) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5196) < ((uint64_t)(((uint64_t)(uint8_t)_5194)))))) {
    _5172__PHI_TEMPORARY = _5197;   /* for PHI node */
    _5173__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5616;
  } else {
    goto _5625;
  }

_5625:
  _5198 = *(uint64_t*)_5187;
  _5199 = *(uint64_t*)_5189;
  if ((((int64_t)_5199) > ((int64_t)_5198))) {
    goto _5626;
  } else {
    _5172__PHI_TEMPORARY = _5197;   /* for PHI node */
    _5173__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5616;
  }

_5626:
  _5200 = *(void**)_5186;
  _5201 = *(uint8_t*)(((&((uint8_t*)_5200)[((int64_t)_5198)])));
  if ((((int8_t)_5201) > ((int8_t)((uint8_t)-65)))) {
    _5172__PHI_TEMPORARY = _5197;   /* for PHI node */
    _5173__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5616;
  } else {
    goto _5627;
  }

_5627:
  _5202 = llvm_select_u32((((int64_t)_5198) < ((int64_t)_5199)), (((uint32_t)(uint8_t)_5201)), 0);
  _5203 = *(uint64_t*)_5187;
  *(uint64_t*)_5187 = (llvm_add_u64(_5203, 1));
  _5204 = llvm_neg_u64(_5196);
  _5205 = _5197 | (llvm_select_u32((((int64_t)_5196) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5204) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5202, (((uint32_t)_5204)))))), (llvm_select_u32((((uint64_t)_5196) > ((uint64_t)UINT64_C(31))), 0, (_5202 << (((uint32_t)_5196)))))));
  _5206 = llvm_add_u64(_5196, -8);
  _5196__PHI_TEMPORARY = _5206;   /* for PHI node */
  _5197__PHI_TEMPORARY = _5205;   /* for PHI node */
  goto _5624;

  } while (1); /* end of syntactic loop '' */
_5621:
  if (_5183) {
    goto _5628;
  } else {
    goto _5629;
  }

_5629:
  _5207 = *(uint64_t*)_4796;
  _5208 = *(uint64_t*)_4798;
  _5209 = ((uint32_t)_5208);
  if (((_5207 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5630;
  } else {
    _5512__PHI_TEMPORARY = _5114;   /* for PHI node */
    goto _5578;
  }

_5630:
  switch (_5209) {
  default:
    goto _5631;
  case 1056964608u:
    goto _5632;
  case 603979776u:
    goto _5632;
  case 973078528u:
    goto _5632;
  case 654311424u:
    goto _5632;
  }

_5631:
  _5210 = julia_is_operator_start_char_14(_4778, _5209);
  if ((((bool)_5210&1u))) {
    _5512__PHI_TEMPORARY = _5114;   /* for PHI node */
    goto _5578;
  } else {
    goto _5632;
  }

_5632:
  _5211 = *(uint64_t*)_4796;
  if (((_5211 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5633;
  } else {
    goto _5634;
  }

_5633:
  _5212 = *(void**)_4779;
  _5213 = ((&((uint8_t*)_5212)[((int64_t)16)]));
  _5214 = *(uint64_t*)_5213;
  _5215 = ((&((uint8_t*)_5212)[((int64_t)8)]));
  _5216 = *(uint64_t*)_5215;
  if ((((int64_t)_5216) > ((int64_t)_5214))) {
    goto _5635;
  } else {
    _5233__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5636;
  }

_5635:
  _5217 = *(void**)_5212;
  _5218 = *(uint8_t*)(((&((uint8_t*)_5217)[((int64_t)_5214)])));
  *(uint64_t*)_5213 = (llvm_add_u64(_5214, 1));
  _5219 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5218)), 0);
  _5220 = llvm_sub_u8(32, (llvm_shl_u8(_5219, 3)));
  _5221 = (((uint32_t)(uint8_t)_5218)) << 24;
  if ((((uint8_t)_5220) > ((uint8_t)((uint8_t)16)))) {
    _5233__PHI_TEMPORARY = _5221;   /* for PHI node */
    goto _5636;
  } else {
    _5222__PHI_TEMPORARY = 16;   /* for PHI node */
    _5223__PHI_TEMPORARY = _5221;   /* for PHI node */
    goto _5637;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5637:
  _5222 = _5222__PHI_TEMPORARY;
  _5223 = _5223__PHI_TEMPORARY;
  if (((((int64_t)_5222) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5222) < ((uint64_t)(((uint64_t)(uint8_t)_5220)))))) {
    _5233__PHI_TEMPORARY = _5223;   /* for PHI node */
    goto _5636;
  } else {
    goto _5638;
  }

_5638:
  _5224 = *(uint64_t*)_5213;
  _5225 = *(uint64_t*)_5215;
  if ((((int64_t)_5225) > ((int64_t)_5224))) {
    goto _5639;
  } else {
    _5233__PHI_TEMPORARY = _5223;   /* for PHI node */
    goto _5636;
  }

_5639:
  _5226 = *(void**)_5212;
  _5227 = *(uint8_t*)(((&((uint8_t*)_5226)[((int64_t)_5224)])));
  if ((((int8_t)_5227) > ((int8_t)((uint8_t)-65)))) {
    _5233__PHI_TEMPORARY = _5223;   /* for PHI node */
    goto _5636;
  } else {
    goto _5640;
  }

_5640:
  _5228 = llvm_select_u32((((int64_t)_5224) < ((int64_t)_5225)), (((uint32_t)(uint8_t)_5227)), 0);
  _5229 = *(uint64_t*)_5213;
  *(uint64_t*)_5213 = (llvm_add_u64(_5229, 1));
  _5230 = llvm_neg_u64(_5222);
  _5231 = _5223 | (llvm_select_u32((((int64_t)_5222) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5230) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5228, (((uint32_t)_5230)))))), (llvm_select_u32((((uint64_t)_5222) > ((uint64_t)UINT64_C(31))), 0, (_5228 << (((uint32_t)_5222)))))));
  _5232 = llvm_add_u64(_5222, -8);
  _5222__PHI_TEMPORARY = _5232;   /* for PHI node */
  _5223__PHI_TEMPORARY = _5231;   /* for PHI node */
  goto _5637;

  } while (1); /* end of syntactic loop '' */
_5636:
  _5233 = _5233__PHI_TEMPORARY;
  _5234 = *(uint64_t*)_4796;
  _5235 = *(uint64_t*)_4798;
  _5236 = jsyn_cbe_fshl_i64(_5235, _5234, 32);
  _5237 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5233)), _5235, 32);
  *(uint64_t*)_4796 = _5236;
  *(uint64_t*)_4798 = _5237;
  _5238 = *(uint64_t*)_5142;
  _5239 = *(uint64_t*)_5144;
  _5240 = *(uint64_t*)_5146;
  _5241 = *(void**)_4779;
  _5242 = *(uint64_t*)(((&((uint8_t*)_5241)[((int64_t)16)])));
  *(uint64_t*)_5141 = _5238;
  *(uint64_t*)_5142 = _5239;
  *(uint64_t*)_5144 = _5240;
  *(uint64_t*)_5146 = _5242;
  goto _5634;

_5634:
  julia_emit_11((&_4790), _4778, _4779, 754, 1);
  _4802__PHI_TEMPORARY = (&_4790);   /* for PHI node */
  goto _5518;

_5628:
  julia_emit_11((&_4791), _4778, _4779, 754, 1);
  _4802__PHI_TEMPORARY = (&_4791);   /* for PHI node */
  goto _5518;

_5513:
  _5243 = ((&((uint8_t*)_4779)[((int64_t)48)]));
  _5244 = *(uint64_t*)_5243;
  _5245 = ((&((uint8_t*)_4779)[((int64_t)56)]));
  _5246 = *(uint64_t*)(((&((uint8_t*)_4779)[((int64_t)8)])));
  if (((llvm_sub_u64(_5244, _5246)) == UINT64_C(1))) {
    goto _5641;
  } else {
    _5512__PHI_TEMPORARY = _4780;   /* for PHI node */
    goto _5578;
  }

_5641:
  _5247 = *(uint64_t*)_4796;
  if (((_5247 & INT64_C(4294967295)) == UINT64_C(805306368))) {
    goto _5642;
  } else {
    _5512__PHI_TEMPORARY = _4780;   /* for PHI node */
    goto _5578;
  }

_5642:
  switch ((((uint32_t)_4799))) {
  default:
    _5458__PHI_TEMPORARY = 1;   /* for PHI node */
    _5460__PHI_TEMPORARY = 0;   /* for PHI node */
    _5461__PHI_TEMPORARY = _4780;   /* for PHI node */
    goto _5643;
  case 2013265920u:
    goto _5644;
  case 1644167168u:
    goto _5645;
  case 1862270976u:
    goto _5646;
  }

_5644:
  _5248 = *(void**)_4779;
  _5249 = ((&((uint8_t*)_5248)[((int64_t)16)]));
  _5250 = *(uint64_t*)_5249;
  _5251 = ((&((uint8_t*)_5248)[((int64_t)8)]));
  _5252 = *(uint64_t*)_5251;
  if ((((int64_t)_5252) > ((int64_t)_5250))) {
    goto _5647;
  } else {
    _5269__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5648;
  }

_5647:
  _5253 = *(void**)_5248;
  _5254 = *(uint8_t*)(((&((uint8_t*)_5253)[((int64_t)_5250)])));
  *(uint64_t*)_5249 = (llvm_add_u64(_5250, 1));
  _5255 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5254)), 0);
  _5256 = llvm_sub_u8(32, (llvm_shl_u8(_5255, 3)));
  _5257 = (((uint32_t)(uint8_t)_5254)) << 24;
  if ((((uint8_t)_5256) > ((uint8_t)((uint8_t)16)))) {
    _5269__PHI_TEMPORARY = _5257;   /* for PHI node */
    goto _5648;
  } else {
    _5258__PHI_TEMPORARY = 16;   /* for PHI node */
    _5259__PHI_TEMPORARY = _5257;   /* for PHI node */
    goto _5649;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5649:
  _5258 = _5258__PHI_TEMPORARY;
  _5259 = _5259__PHI_TEMPORARY;
  if (((((int64_t)_5258) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5258) < ((uint64_t)(((uint64_t)(uint8_t)_5256)))))) {
    _5269__PHI_TEMPORARY = _5259;   /* for PHI node */
    goto _5648;
  } else {
    goto _5650;
  }

_5650:
  _5260 = *(uint64_t*)_5249;
  _5261 = *(uint64_t*)_5251;
  if ((((int64_t)_5261) > ((int64_t)_5260))) {
    goto _5651;
  } else {
    _5269__PHI_TEMPORARY = _5259;   /* for PHI node */
    goto _5648;
  }

_5651:
  _5262 = *(void**)_5248;
  _5263 = *(uint8_t*)(((&((uint8_t*)_5262)[((int64_t)_5260)])));
  if ((((int8_t)_5263) > ((int8_t)((uint8_t)-65)))) {
    _5269__PHI_TEMPORARY = _5259;   /* for PHI node */
    goto _5648;
  } else {
    goto _5652;
  }

_5652:
  _5264 = llvm_select_u32((((int64_t)_5260) < ((int64_t)_5261)), (((uint32_t)(uint8_t)_5263)), 0);
  _5265 = *(uint64_t*)_5249;
  *(uint64_t*)_5249 = (llvm_add_u64(_5265, 1));
  _5266 = llvm_neg_u64(_5258);
  _5267 = _5259 | (llvm_select_u32((((int64_t)_5258) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5266) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5264, (((uint32_t)_5266)))))), (llvm_select_u32((((uint64_t)_5258) > ((uint64_t)UINT64_C(31))), 0, (_5264 << (((uint32_t)_5258)))))));
  _5268 = llvm_add_u64(_5258, -8);
  _5258__PHI_TEMPORARY = _5268;   /* for PHI node */
  _5259__PHI_TEMPORARY = _5267;   /* for PHI node */
  goto _5649;

  } while (1); /* end of syntactic loop '' */
_5648:
  _5269 = _5269__PHI_TEMPORARY;
  _5270 = *(uint64_t*)_4796;
  _5271 = *(uint64_t*)_4798;
  _5272 = jsyn_cbe_fshl_i64(_5271, _5270, 32);
  _5273 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5269)), _5271, 32);
  *(uint64_t*)_4796 = _5272;
  *(uint64_t*)_4798 = _5273;
  _5274 = *(uint64_t*)_5245;
  _5275 = ((&((uint8_t*)_4779)[((int64_t)64)]));
  _5276 = *(uint64_t*)_5275;
  _5277 = ((&((uint8_t*)_4779)[((int64_t)72)]));
  _5278 = *(uint64_t*)_5277;
  _5279 = *(void**)_4779;
  _5280 = *(uint64_t*)(((&((uint8_t*)_5279)[((int64_t)16)])));
  *(uint64_t*)_5243 = _5274;
  *(uint64_t*)_5245 = _5276;
  *(uint64_t*)_5275 = _5278;
  *(uint64_t*)_5277 = _5280;
  _5281 = julia_accept_number_45(_4778, _4779);
  _5282 = *(uint64_t*)_4796;
  _5283 = ((bool)_5281&1u);
  if (((_5282 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5653;
  } else {
    _5319__PHI_TEMPORARY = _5283;   /* for PHI node */
    _5320__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5654;
  }

_5653:
  _5284 = *(uint64_t*)_4798;
  _5285 = ((bool)_5281&1u);
  if (((_5284 & INT64_C(4294967295)) == UINT64_C(771751936))) {
    _5319__PHI_TEMPORARY = _5285;   /* for PHI node */
    _5320__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5654;
  } else {
    goto _5655;
  }

_5655:
  _5286 = *(void**)_4779;
  _5287 = ((&((uint8_t*)_5286)[((int64_t)16)]));
  _5288 = *(uint64_t*)_5287;
  _5289 = ((&((uint8_t*)_5286)[((int64_t)8)]));
  _5290 = *(uint64_t*)_5289;
  if ((((int64_t)_5290) > ((int64_t)_5288))) {
    goto _5656;
  } else {
    _5307__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5657;
  }

_5656:
  _5291 = *(void**)_5286;
  _5292 = *(uint8_t*)(((&((uint8_t*)_5291)[((int64_t)_5288)])));
  *(uint64_t*)_5287 = (llvm_add_u64(_5288, 1));
  _5293 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5292)), 0);
  _5294 = llvm_sub_u8(32, (llvm_shl_u8(_5293, 3)));
  _5295 = (((uint32_t)(uint8_t)_5292)) << 24;
  if ((((uint8_t)_5294) > ((uint8_t)((uint8_t)16)))) {
    _5307__PHI_TEMPORARY = _5295;   /* for PHI node */
    goto _5657;
  } else {
    _5296__PHI_TEMPORARY = 16;   /* for PHI node */
    _5297__PHI_TEMPORARY = _5295;   /* for PHI node */
    goto _5658;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5658:
  _5296 = _5296__PHI_TEMPORARY;
  _5297 = _5297__PHI_TEMPORARY;
  if (((((int64_t)_5296) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5296) < ((uint64_t)(((uint64_t)(uint8_t)_5294)))))) {
    _5307__PHI_TEMPORARY = _5297;   /* for PHI node */
    goto _5657;
  } else {
    goto _5659;
  }

_5659:
  _5298 = *(uint64_t*)_5287;
  _5299 = *(uint64_t*)_5289;
  if ((((int64_t)_5299) > ((int64_t)_5298))) {
    goto _5660;
  } else {
    _5307__PHI_TEMPORARY = _5297;   /* for PHI node */
    goto _5657;
  }

_5660:
  _5300 = *(void**)_5286;
  _5301 = *(uint8_t*)(((&((uint8_t*)_5300)[((int64_t)_5298)])));
  if ((((int8_t)_5301) > ((int8_t)((uint8_t)-65)))) {
    _5307__PHI_TEMPORARY = _5297;   /* for PHI node */
    goto _5657;
  } else {
    goto _5661;
  }

_5661:
  _5302 = llvm_select_u32((((int64_t)_5298) < ((int64_t)_5299)), (((uint32_t)(uint8_t)_5301)), 0);
  _5303 = *(uint64_t*)_5287;
  *(uint64_t*)_5287 = (llvm_add_u64(_5303, 1));
  _5304 = llvm_neg_u64(_5296);
  _5305 = _5297 | (llvm_select_u32((((int64_t)_5296) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5304) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5302, (((uint32_t)_5304)))))), (llvm_select_u32((((uint64_t)_5296) > ((uint64_t)UINT64_C(31))), 0, (_5302 << (((uint32_t)_5296)))))));
  _5306 = llvm_add_u64(_5296, -8);
  _5296__PHI_TEMPORARY = _5306;   /* for PHI node */
  _5297__PHI_TEMPORARY = _5305;   /* for PHI node */
  goto _5658;

  } while (1); /* end of syntactic loop '' */
_5657:
  _5307 = _5307__PHI_TEMPORARY;
  _5308 = *(uint64_t*)_4796;
  _5309 = *(uint64_t*)_4798;
  _5310 = jsyn_cbe_fshl_i64(_5309, _5308, 32);
  _5311 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5307)), _5309, 32);
  *(uint64_t*)_4796 = _5310;
  *(uint64_t*)_4798 = _5311;
  _5312 = *(uint64_t*)_5245;
  _5313 = *(uint64_t*)_5275;
  _5314 = *(uint64_t*)_5277;
  _5315 = *(void**)_4779;
  _5316 = *(uint64_t*)(((&((uint8_t*)_5315)[((int64_t)16)])));
  *(uint64_t*)_5243 = _5312;
  *(uint64_t*)_5245 = _5313;
  *(uint64_t*)_5275 = _5314;
  *(uint64_t*)_5277 = _5316;
  _5317 = julia_accept_number_45(_4778, _4779);
  _5318 = ((bool)(llvm_or_u8(_5281, _5317))&1u);
  _5319__PHI_TEMPORARY = _5318;   /* for PHI node */
  _5320__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _5654;

_5654:
  _5319 = _5319__PHI_TEMPORARY;
  _5320 = _5320__PHI_TEMPORARY;
  _5321 = *(uint64_t*)_4796;
  if (((_5321 & INT64_C(-2305843013508661248)) == UINT64_C(5764607523034234880))) {
    goto _5662;
  } else {
    goto _5663;
  }

_5662:
  _5322 = *(void**)_4779;
  _5323 = ((&((uint8_t*)_5322)[((int64_t)16)]));
  _5324 = *(uint64_t*)_5323;
  _5325 = ((&((uint8_t*)_5322)[((int64_t)8)]));
  _5326 = *(uint64_t*)_5325;
  if ((((int64_t)_5326) > ((int64_t)_5324))) {
    goto _5664;
  } else {
    _5343__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5665;
  }

_5664:
  _5327 = *(void**)_5322;
  _5328 = *(uint8_t*)(((&((uint8_t*)_5327)[((int64_t)_5324)])));
  *(uint64_t*)_5323 = (llvm_add_u64(_5324, 1));
  _5329 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5328)), 0);
  _5330 = llvm_sub_u8(32, (llvm_shl_u8(_5329, 3)));
  _5331 = (((uint32_t)(uint8_t)_5328)) << 24;
  if ((((uint8_t)_5330) > ((uint8_t)((uint8_t)16)))) {
    _5343__PHI_TEMPORARY = _5331;   /* for PHI node */
    goto _5665;
  } else {
    _5332__PHI_TEMPORARY = 16;   /* for PHI node */
    _5333__PHI_TEMPORARY = _5331;   /* for PHI node */
    goto _5666;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5666:
  _5332 = _5332__PHI_TEMPORARY;
  _5333 = _5333__PHI_TEMPORARY;
  if (((((int64_t)_5332) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5332) < ((uint64_t)(((uint64_t)(uint8_t)_5330)))))) {
    _5343__PHI_TEMPORARY = _5333;   /* for PHI node */
    goto _5665;
  } else {
    goto _5667;
  }

_5667:
  _5334 = *(uint64_t*)_5323;
  _5335 = *(uint64_t*)_5325;
  if ((((int64_t)_5335) > ((int64_t)_5334))) {
    goto _5668;
  } else {
    _5343__PHI_TEMPORARY = _5333;   /* for PHI node */
    goto _5665;
  }

_5668:
  _5336 = *(void**)_5322;
  _5337 = *(uint8_t*)(((&((uint8_t*)_5336)[((int64_t)_5334)])));
  if ((((int8_t)_5337) > ((int8_t)((uint8_t)-65)))) {
    _5343__PHI_TEMPORARY = _5333;   /* for PHI node */
    goto _5665;
  } else {
    goto _5669;
  }

_5669:
  _5338 = llvm_select_u32((((int64_t)_5334) < ((int64_t)_5335)), (((uint32_t)(uint8_t)_5337)), 0);
  _5339 = *(uint64_t*)_5323;
  *(uint64_t*)_5323 = (llvm_add_u64(_5339, 1));
  _5340 = llvm_neg_u64(_5332);
  _5341 = _5333 | (llvm_select_u32((((int64_t)_5332) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5340) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5338, (((uint32_t)_5340)))))), (llvm_select_u32((((uint64_t)_5332) > ((uint64_t)UINT64_C(31))), 0, (_5338 << (((uint32_t)_5332)))))));
  _5342 = llvm_add_u64(_5332, -8);
  _5332__PHI_TEMPORARY = _5342;   /* for PHI node */
  _5333__PHI_TEMPORARY = _5341;   /* for PHI node */
  goto _5666;

  } while (1); /* end of syntactic loop '' */
_5665:
  _5343 = _5343__PHI_TEMPORARY;
  _5344 = *(uint64_t*)_4796;
  _5345 = *(uint64_t*)_4798;
  _5346 = jsyn_cbe_fshl_i64(_5345, _5344, 32);
  _5347 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5343)), _5345, 32);
  *(uint64_t*)_4796 = _5346;
  *(uint64_t*)_4798 = _5347;
  _5348 = *(uint64_t*)_5245;
  _5349 = *(uint64_t*)_5275;
  _5350 = *(uint64_t*)_5277;
  _5351 = *(void**)_4779;
  _5352 = *(uint64_t*)(((&((uint8_t*)_5351)[((int64_t)16)])));
  *(uint64_t*)_5243 = _5348;
  *(uint64_t*)_5245 = _5349;
  *(uint64_t*)_5275 = _5350;
  *(uint64_t*)_5277 = _5352;
  _5353 = *(uint64_t*)_4796;
  switch ((((uint32_t)(llvm_lshr_u64(_5353, 32))))) {
  default:
    goto _5670;
  case 721420288u:
    goto _5671;
  case 3800601088u:
    goto _5671;
  case 754974720u:
    goto _5671;
  }

_5671:
  _5354 = *(void**)_4779;
  _5355 = ((&((uint8_t*)_5354)[((int64_t)16)]));
  _5356 = *(uint64_t*)_5355;
  _5357 = ((&((uint8_t*)_5354)[((int64_t)8)]));
  _5358 = *(uint64_t*)_5357;
  if ((((int64_t)_5358) > ((int64_t)_5356))) {
    goto _5672;
  } else {
    _5375__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5673;
  }

_5672:
  _5359 = *(void**)_5354;
  _5360 = *(uint8_t*)(((&((uint8_t*)_5359)[((int64_t)_5356)])));
  *(uint64_t*)_5355 = (llvm_add_u64(_5356, 1));
  _5361 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5360)), 0);
  _5362 = llvm_sub_u8(32, (llvm_shl_u8(_5361, 3)));
  _5363 = (((uint32_t)(uint8_t)_5360)) << 24;
  if ((((uint8_t)_5362) > ((uint8_t)((uint8_t)16)))) {
    _5375__PHI_TEMPORARY = _5363;   /* for PHI node */
    goto _5673;
  } else {
    _5364__PHI_TEMPORARY = 16;   /* for PHI node */
    _5365__PHI_TEMPORARY = _5363;   /* for PHI node */
    goto _5674;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5674:
  _5364 = _5364__PHI_TEMPORARY;
  _5365 = _5365__PHI_TEMPORARY;
  if (((((int64_t)_5364) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5364) < ((uint64_t)(((uint64_t)(uint8_t)_5362)))))) {
    _5375__PHI_TEMPORARY = _5365;   /* for PHI node */
    goto _5673;
  } else {
    goto _5675;
  }

_5675:
  _5366 = *(uint64_t*)_5355;
  _5367 = *(uint64_t*)_5357;
  if ((((int64_t)_5367) > ((int64_t)_5366))) {
    goto _5676;
  } else {
    _5375__PHI_TEMPORARY = _5365;   /* for PHI node */
    goto _5673;
  }

_5676:
  _5368 = *(void**)_5354;
  _5369 = *(uint8_t*)(((&((uint8_t*)_5368)[((int64_t)_5366)])));
  if ((((int8_t)_5369) > ((int8_t)((uint8_t)-65)))) {
    _5375__PHI_TEMPORARY = _5365;   /* for PHI node */
    goto _5673;
  } else {
    goto _5677;
  }

_5677:
  _5370 = llvm_select_u32((((int64_t)_5366) < ((int64_t)_5367)), (((uint32_t)(uint8_t)_5369)), 0);
  _5371 = *(uint64_t*)_5355;
  *(uint64_t*)_5355 = (llvm_add_u64(_5371, 1));
  _5372 = llvm_neg_u64(_5364);
  _5373 = _5365 | (llvm_select_u32((((int64_t)_5364) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5372) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5370, (((uint32_t)_5372)))))), (llvm_select_u32((((uint64_t)_5364) > ((uint64_t)UINT64_C(31))), 0, (_5370 << (((uint32_t)_5364)))))));
  _5374 = llvm_add_u64(_5364, -8);
  _5364__PHI_TEMPORARY = _5374;   /* for PHI node */
  _5365__PHI_TEMPORARY = _5373;   /* for PHI node */
  goto _5674;

  } while (1); /* end of syntactic loop '' */
_5673:
  _5375 = _5375__PHI_TEMPORARY;
  _5376 = *(uint64_t*)_4796;
  _5377 = *(uint64_t*)_4798;
  _5378 = jsyn_cbe_fshl_i64(_5377, _5376, 32);
  _5379 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5375)), _5377, 32);
  *(uint64_t*)_4796 = _5378;
  *(uint64_t*)_4798 = _5379;
  _5380 = *(uint64_t*)_5245;
  _5381 = *(uint64_t*)_5275;
  _5382 = *(uint64_t*)_5277;
  _5383 = *(void**)_4779;
  _5384 = *(uint64_t*)(((&((uint8_t*)_5383)[((int64_t)16)])));
  *(uint64_t*)_5243 = _5380;
  *(uint64_t*)_5245 = _5381;
  *(uint64_t*)_5275 = _5382;
  *(uint64_t*)_5277 = _5384;
  goto _5670;

_5670:
  _5385 = julia_accept_number_44(_4778, _4779);
  if ((llvm_select_bool((((bool)_5385&1u)), _5319, 0))) {
    _5386__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _5678;
  } else {
    goto _5679;
  }

_5679:
  julia_emit_11((&_4792), _4778, _4779, 754, 1);
  _4802__PHI_TEMPORARY = (&_4792);   /* for PHI node */
  goto _5518;

_5663:
  if (_5320) {
    _5386__PHI_TEMPORARY = 46;   /* for PHI node */
    goto _5678;
  } else {
    goto _5680;
  }

_5680:
  julia_emit_11((&_4794), _4778, _4779, 755, 1);
  _4802__PHI_TEMPORARY = (&_4794);   /* for PHI node */
  goto _5518;

_5678:
  _5386 = _5386__PHI_TEMPORARY;
  _5387 = _5320 ^ 1;
  _5458__PHI_TEMPORARY = _5387;   /* for PHI node */
  _5459__PHI_TEMPORARY = _5319;   /* for PHI node */
  _5460__PHI_TEMPORARY = 1;   /* for PHI node */
  _5461__PHI_TEMPORARY = _5386;   /* for PHI node */
  goto _5643;

_5645:
  _5388 = *(void**)_4779;
  _5389 = ((&((uint8_t*)_5388)[((int64_t)16)]));
  _5390 = *(uint64_t*)_5389;
  _5391 = ((&((uint8_t*)_5388)[((int64_t)8)]));
  _5392 = *(uint64_t*)_5391;
  if ((((int64_t)_5392) > ((int64_t)_5390))) {
    goto _5681;
  } else {
    _5409__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5682;
  }

_5681:
  _5393 = *(void**)_5388;
  _5394 = *(uint8_t*)(((&((uint8_t*)_5393)[((int64_t)_5390)])));
  *(uint64_t*)_5389 = (llvm_add_u64(_5390, 1));
  _5395 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5394)), 0);
  _5396 = llvm_sub_u8(32, (llvm_shl_u8(_5395, 3)));
  _5397 = (((uint32_t)(uint8_t)_5394)) << 24;
  if ((((uint8_t)_5396) > ((uint8_t)((uint8_t)16)))) {
    _5409__PHI_TEMPORARY = _5397;   /* for PHI node */
    goto _5682;
  } else {
    _5398__PHI_TEMPORARY = 16;   /* for PHI node */
    _5399__PHI_TEMPORARY = _5397;   /* for PHI node */
    goto _5683;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5683:
  _5398 = _5398__PHI_TEMPORARY;
  _5399 = _5399__PHI_TEMPORARY;
  if (((((int64_t)_5398) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5398) < ((uint64_t)(((uint64_t)(uint8_t)_5396)))))) {
    _5409__PHI_TEMPORARY = _5399;   /* for PHI node */
    goto _5682;
  } else {
    goto _5684;
  }

_5684:
  _5400 = *(uint64_t*)_5389;
  _5401 = *(uint64_t*)_5391;
  if ((((int64_t)_5401) > ((int64_t)_5400))) {
    goto _5685;
  } else {
    _5409__PHI_TEMPORARY = _5399;   /* for PHI node */
    goto _5682;
  }

_5685:
  _5402 = *(void**)_5388;
  _5403 = *(uint8_t*)(((&((uint8_t*)_5402)[((int64_t)_5400)])));
  if ((((int8_t)_5403) > ((int8_t)((uint8_t)-65)))) {
    _5409__PHI_TEMPORARY = _5399;   /* for PHI node */
    goto _5682;
  } else {
    goto _5686;
  }

_5686:
  _5404 = llvm_select_u32((((int64_t)_5400) < ((int64_t)_5401)), (((uint32_t)(uint8_t)_5403)), 0);
  _5405 = *(uint64_t*)_5389;
  *(uint64_t*)_5389 = (llvm_add_u64(_5405, 1));
  _5406 = llvm_neg_u64(_5398);
  _5407 = _5399 | (llvm_select_u32((((int64_t)_5398) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5406) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5404, (((uint32_t)_5406)))))), (llvm_select_u32((((uint64_t)_5398) > ((uint64_t)UINT64_C(31))), 0, (_5404 << (((uint32_t)_5398)))))));
  _5408 = llvm_add_u64(_5398, -8);
  _5398__PHI_TEMPORARY = _5408;   /* for PHI node */
  _5399__PHI_TEMPORARY = _5407;   /* for PHI node */
  goto _5683;

  } while (1); /* end of syntactic loop '' */
_5682:
  _5409 = _5409__PHI_TEMPORARY;
  _5410 = *(uint64_t*)_4796;
  _5411 = *(uint64_t*)_4798;
  _5412 = jsyn_cbe_fshl_i64(_5411, _5410, 32);
  _5413 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5409)), _5411, 32);
  *(uint64_t*)_4796 = _5412;
  *(uint64_t*)_4798 = _5413;
  _5414 = *(uint64_t*)_5245;
  _5415 = ((&((uint8_t*)_4779)[((int64_t)64)]));
  _5416 = *(uint64_t*)_5415;
  _5417 = ((&((uint8_t*)_4779)[((int64_t)72)]));
  _5418 = *(uint64_t*)_5417;
  _5419 = *(void**)_4779;
  _5420 = *(uint64_t*)(((&((uint8_t*)_5419)[((int64_t)16)])));
  *(uint64_t*)_5243 = _5414;
  *(uint64_t*)_5245 = _5416;
  *(uint64_t*)_5415 = _5418;
  *(uint64_t*)_5417 = _5420;
  _5421 = julia_accept_number_46(_4778, _4779);
  _5422 = ((bool)_5421&1u);
  _5458__PHI_TEMPORARY = 0;   /* for PHI node */
  _5459__PHI_TEMPORARY = _5422;   /* for PHI node */
  _5460__PHI_TEMPORARY = 1;   /* for PHI node */
  _5461__PHI_TEMPORARY = 45;   /* for PHI node */
  goto _5643;

_5646:
  _5423 = *(void**)_4779;
  _5424 = ((&((uint8_t*)_5423)[((int64_t)16)]));
  _5425 = *(uint64_t*)_5424;
  _5426 = ((&((uint8_t*)_5423)[((int64_t)8)]));
  _5427 = *(uint64_t*)_5426;
  if ((((int64_t)_5427) > ((int64_t)_5425))) {
    goto _5687;
  } else {
    _5444__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5688;
  }

_5687:
  _5428 = *(void**)_5423;
  _5429 = *(uint8_t*)(((&((uint8_t*)_5428)[((int64_t)_5425)])));
  *(uint64_t*)_5424 = (llvm_add_u64(_5425, 1));
  _5430 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5429)), 0);
  _5431 = llvm_sub_u8(32, (llvm_shl_u8(_5430, 3)));
  _5432 = (((uint32_t)(uint8_t)_5429)) << 24;
  if ((((uint8_t)_5431) > ((uint8_t)((uint8_t)16)))) {
    _5444__PHI_TEMPORARY = _5432;   /* for PHI node */
    goto _5688;
  } else {
    _5433__PHI_TEMPORARY = 16;   /* for PHI node */
    _5434__PHI_TEMPORARY = _5432;   /* for PHI node */
    goto _5689;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5689:
  _5433 = _5433__PHI_TEMPORARY;
  _5434 = _5434__PHI_TEMPORARY;
  if (((((int64_t)_5433) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5433) < ((uint64_t)(((uint64_t)(uint8_t)_5431)))))) {
    _5444__PHI_TEMPORARY = _5434;   /* for PHI node */
    goto _5688;
  } else {
    goto _5690;
  }

_5690:
  _5435 = *(uint64_t*)_5424;
  _5436 = *(uint64_t*)_5426;
  if ((((int64_t)_5436) > ((int64_t)_5435))) {
    goto _5691;
  } else {
    _5444__PHI_TEMPORARY = _5434;   /* for PHI node */
    goto _5688;
  }

_5691:
  _5437 = *(void**)_5423;
  _5438 = *(uint8_t*)(((&((uint8_t*)_5437)[((int64_t)_5435)])));
  if ((((int8_t)_5438) > ((int8_t)((uint8_t)-65)))) {
    _5444__PHI_TEMPORARY = _5434;   /* for PHI node */
    goto _5688;
  } else {
    goto _5692;
  }

_5692:
  _5439 = llvm_select_u32((((int64_t)_5435) < ((int64_t)_5436)), (((uint32_t)(uint8_t)_5438)), 0);
  _5440 = *(uint64_t*)_5424;
  *(uint64_t*)_5424 = (llvm_add_u64(_5440, 1));
  _5441 = llvm_neg_u64(_5433);
  _5442 = _5434 | (llvm_select_u32((((int64_t)_5433) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5441) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5439, (((uint32_t)_5441)))))), (llvm_select_u32((((uint64_t)_5433) > ((uint64_t)UINT64_C(31))), 0, (_5439 << (((uint32_t)_5433)))))));
  _5443 = llvm_add_u64(_5433, -8);
  _5433__PHI_TEMPORARY = _5443;   /* for PHI node */
  _5434__PHI_TEMPORARY = _5442;   /* for PHI node */
  goto _5689;

  } while (1); /* end of syntactic loop '' */
_5688:
  _5444 = _5444__PHI_TEMPORARY;
  _5445 = *(uint64_t*)_4796;
  _5446 = *(uint64_t*)_4798;
  _5447 = jsyn_cbe_fshl_i64(_5446, _5445, 32);
  _5448 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5444)), _5446, 32);
  *(uint64_t*)_4796 = _5447;
  *(uint64_t*)_4798 = _5448;
  _5449 = *(uint64_t*)_5245;
  _5450 = ((&((uint8_t*)_4779)[((int64_t)64)]));
  _5451 = *(uint64_t*)_5450;
  _5452 = ((&((uint8_t*)_4779)[((int64_t)72)]));
  _5453 = *(uint64_t*)_5452;
  _5454 = *(void**)_4779;
  _5455 = *(uint64_t*)(((&((uint8_t*)_5454)[((int64_t)16)])));
  *(uint64_t*)_5243 = _5449;
  *(uint64_t*)_5245 = _5451;
  *(uint64_t*)_5450 = _5453;
  *(uint64_t*)_5452 = _5455;
  _5456 = julia_accept_number_47(_4778, _4779);
  _5457 = ((bool)_5456&1u);
  _5458__PHI_TEMPORARY = 0;   /* for PHI node */
  _5459__PHI_TEMPORARY = _5457;   /* for PHI node */
  _5460__PHI_TEMPORARY = 1;   /* for PHI node */
  _5461__PHI_TEMPORARY = 47;   /* for PHI node */
  goto _5643;

_5643:
  _5458 = _5458__PHI_TEMPORARY;
  _5459 = _5459__PHI_TEMPORARY;
  _5460 = _5460__PHI_TEMPORARY;
  _5461 = _5461__PHI_TEMPORARY;
  if (_5458) {
    _5512__PHI_TEMPORARY = _5461;   /* for PHI node */
    goto _5578;
  } else {
    goto _5693;
  }

_5693:
  _5462 = *(uint64_t*)_4796;
  _5463 = llvm_lshr_u64(_5462, 32);
  _5464 = ((uint32_t)_5463);
  if (_5460) {
    goto _5694;
  } else {
    goto _5695;
  }

_5696:
  if ((((((uint64_t)_5462) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5463 != UINT64_C(805306368))) | ((((uint64_t)_5462) > ((uint64_t)UINT64_C(4107282860161892351))) & (_5463 != UINT64_C(956301312))))) {
    goto _5697;
  } else {
    goto _5698;
  }

_5697:
  if ((_5463 == UINT64_C(4294967295))) {
    _5512__PHI_TEMPORARY = _5461;   /* for PHI node */
    goto _5578;
  } else {
    goto _5699;
  }

_5699:
  _5465 = llvm_OC_ctlz_OC_i32((_5464 ^ -1), 0);
  _5466 = ((uint64_t)(uint32_t)_5465);
  _5467 = llvm_OC_cttz_OC_i32(_5464, 0);
  _5468 = _5467 & 56;
  _5469 = ((uint64_t)(uint32_t)_5468);
  _5470 = llvm_select_bool((((uint32_t)_5467) < ((uint32_t)32u)), ((llvm_lshr_u32(((_5464 & 12632256) ^ 8421504), _5468)) != 0u), 0);
  _5471 = (((_5464 & -33554432) == 3221225472u) | ((_5464 & -2097152) == 3766484992u)) | ((_5464 & -1048576) == 4034920448u);
  if ((llvm_select_bool((((((_5465 == 1u) | (((uint64_t)(llvm_add_u64((_5466 << 3), _5469))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_5462) > ((uint64_t)UINT64_C(17122614315006820351))) & (_5463 != UINT64_C(3986669312))) & (((((uint64_t)_5462) < ((uint64_t)UINT64_C(17185876919829135360))) & (_5463 != UINT64_C(4001398784))) | ((((uint64_t)_5462) > ((uint64_t)UINT64_C(17622514693983698943))) & (_5463 != UINT64_C(4103061439)))))) | _5470) | _5471), 1, (_5463 == UINT64_C(4036993714))))) {
    _5512__PHI_TEMPORARY = _5461;   /* for PHI node */
    goto _5578;
  } else {
    goto _5700;
  }

_5700:
  _5472 = llvm_lshr_u32(_5464, 24);
  if ((((int64_t)_5462) < ((int64_t)UINT64_C(0)))) {
    goto _5701;
  } else {
    _5475__PHI_TEMPORARY = _5472;   /* for PHI node */
    goto _5702;
  }

_5701:
  if ((((_5465 == 1u) | (((uint64_t)(llvm_add_u64((_5466 << 3), _5469))) > ((uint64_t)UINT64_C(32)))) | (_5470 | _5471))) {
    goto _5703;
  } else {
    goto _5704;
  }

_5703:
  julia_throw_invalid_char_12(_4778, _5464);
  __builtin_unreachable();

_5704:
  _5473 = llvm_select_u32((((uint32_t)_5467) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _5465)) & _5464), _5468)), 0);
  _5474 = (((_5473 & 127) | ((llvm_lshr_u32(_5473, 2)) & 8128)) | ((llvm_lshr_u32(_5473, 4)) & 520192)) | ((llvm_lshr_u32(_5473, 6)) & 33292288);
  _5475__PHI_TEMPORARY = _5474;   /* for PHI node */
  goto _5702;

_5702:
  _5475 = _5475__PHI_TEMPORARY;
  _5476 = jsk_jl_id_start_char(_5475);
  if ((_5476 == 0u)) {
    _5512__PHI_TEMPORARY = _5461;   /* for PHI node */
    goto _5578;
  } else {
    goto _5698;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5698:
  _5477 = *(uint64_t*)_4796;
  _5478 = julia_YY_OC_lex_digitYY_OC_YY_OC_0_48(_4778, (((uint32_t)(llvm_lshr_u64(_5477, 32)))));
  if ((((bool)_5478&1u))) {
    goto _5705;
  } else {
    goto _5706;
  }

_5705:
  _5479 = *(void**)_4779;
  _5480 = ((&((uint8_t*)_5479)[((int64_t)16)]));
  _5481 = *(uint64_t*)_5480;
  _5482 = ((&((uint8_t*)_5479)[((int64_t)8)]));
  _5483 = *(uint64_t*)_5482;
  if ((((int64_t)_5483) > ((int64_t)_5481))) {
    goto _5707;
  } else {
    _5500__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5708;
  }

_5707:
  _5484 = *(void**)_5479;
  _5485 = *(uint8_t*)(((&((uint8_t*)_5484)[((int64_t)_5481)])));
  *(uint64_t*)_5480 = (llvm_add_u64(_5481, 1));
  _5486 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5485)), 0);
  _5487 = llvm_sub_u8(32, (llvm_shl_u8(_5486, 3)));
  _5488 = (((uint32_t)(uint8_t)_5485)) << 24;
  if ((((uint8_t)_5487) > ((uint8_t)((uint8_t)16)))) {
    _5500__PHI_TEMPORARY = _5488;   /* for PHI node */
    goto _5708;
  } else {
    _5489__PHI_TEMPORARY = 16;   /* for PHI node */
    _5490__PHI_TEMPORARY = _5488;   /* for PHI node */
    goto _5709;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5709:
  _5489 = _5489__PHI_TEMPORARY;
  _5490 = _5490__PHI_TEMPORARY;
  if (((((int64_t)_5489) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5489) < ((uint64_t)(((uint64_t)(uint8_t)_5487)))))) {
    _5500__PHI_TEMPORARY = _5490;   /* for PHI node */
    goto _5708;
  } else {
    goto _5710;
  }

_5710:
  _5491 = *(uint64_t*)_5480;
  _5492 = *(uint64_t*)_5482;
  if ((((int64_t)_5492) > ((int64_t)_5491))) {
    goto _5711;
  } else {
    _5500__PHI_TEMPORARY = _5490;   /* for PHI node */
    goto _5708;
  }

_5711:
  _5493 = *(void**)_5479;
  _5494 = *(uint8_t*)(((&((uint8_t*)_5493)[((int64_t)_5491)])));
  if ((((int8_t)_5494) > ((int8_t)((uint8_t)-65)))) {
    _5500__PHI_TEMPORARY = _5490;   /* for PHI node */
    goto _5708;
  } else {
    goto _5712;
  }

_5712:
  _5495 = llvm_select_u32((((int64_t)_5491) < ((int64_t)_5492)), (((uint32_t)(uint8_t)_5494)), 0);
  _5496 = *(uint64_t*)_5480;
  *(uint64_t*)_5480 = (llvm_add_u64(_5496, 1));
  _5497 = llvm_neg_u64(_5489);
  _5498 = _5490 | (llvm_select_u32((((int64_t)_5489) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5497) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5495, (((uint32_t)_5497)))))), (llvm_select_u32((((uint64_t)_5489) > ((uint64_t)UINT64_C(31))), 0, (_5495 << (((uint32_t)_5489)))))));
  _5499 = llvm_add_u64(_5489, -8);
  _5489__PHI_TEMPORARY = _5499;   /* for PHI node */
  _5490__PHI_TEMPORARY = _5498;   /* for PHI node */
  goto _5709;

  } while (1); /* end of syntactic loop '' */
_5708:
  _5500 = _5500__PHI_TEMPORARY;
  _5501 = *(uint64_t*)_4796;
  _5502 = *(uint64_t*)_4798;
  _5503 = jsyn_cbe_fshl_i64(_5502, _5501, 32);
  _5504 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5500)), _5502, 32);
  *(uint64_t*)_4796 = _5503;
  *(uint64_t*)_4798 = _5504;
  _5505 = *(uint64_t*)_5245;
  _5506 = ((&((uint8_t*)_4779)[((int64_t)64)]));
  _5507 = *(uint64_t*)_5506;
  _5508 = ((&((uint8_t*)_4779)[((int64_t)72)]));
  _5509 = *(uint64_t*)_5508;
  _5510 = *(void**)_4779;
  _5511 = *(uint64_t*)(((&((uint8_t*)_5510)[((int64_t)16)])));
  *(uint64_t*)_5243 = _5505;
  *(uint64_t*)_5245 = _5507;
  *(uint64_t*)_5506 = _5509;
  *(uint64_t*)_5508 = _5511;
  goto _5698;

  } while (1); /* end of syntactic loop '' */
_5706:
  julia_emit_11((&_4793), _4778, _4779, 754, 1);
  _4802__PHI_TEMPORARY = (&_4793);   /* for PHI node */
  goto _5518;

_5578:
  _5512 = _5512__PHI_TEMPORARY;
  julia_emit_11((&_4786), _4778, _4779, _5512, 1);
  _4802__PHI_TEMPORARY = (&_4786);   /* for PHI node */
  goto _5518;

_5695:
  jsk_ijl_undefined_var_error((((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)584)]))), (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)616)]))));
  __builtin_unreachable();

_5694:
  if (_5459) {
    goto _5696;
  } else {
    goto _5698;
  }

}


static uint8_t julia_isopsuffix_42(void* _5713, uint32_t _5714) {
  bool _5715;
  bool _5715__PHI_TEMPORARY;
  uint32_t _5716;
  uint64_t _5717;
  uint32_t _5718;
  uint32_t _5719;
  uint64_t _5720;
  bool _5721;
  bool _5722;
  uint32_t _5723;
  uint32_t _5724;
  uint32_t _5725;
  uint32_t _5726;
  uint32_t _5726__PHI_TEMPORARY;
  uint32_t _5727;
  uint32_t _5728;
  uint32_t _5729;

  if ((_5714 == 4294967295u)) {
    _5715__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5730;
  } else {
    goto _5731;
  }

_5732:
  if ((((bool)(((uint32_t)(llvm_lshr_u32(1122337, _5728))))&1u))) {
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  } else {
    goto _5733;
  }

_5734:
  if ((((bool)(llvm_lshr_u64(INT64_C(137438953535), (((uint64_t)(uint32_t)_5729))))&1u))) {
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  } else {
    goto _5733;
  }

_5730:
  _5715 = _5715__PHI_TEMPORARY;
  return (((uint8_t)(bool)_5715));
_5731:
  _5716 = llvm_OC_ctlz_OC_i32((_5714 ^ -1), 0);
  _5717 = ((uint64_t)(uint32_t)_5716);
  _5718 = llvm_OC_cttz_OC_i32(_5714, 0);
  _5719 = _5718 & 56;
  _5720 = ((uint64_t)(uint32_t)_5719);
  _5721 = llvm_select_bool((((uint32_t)_5718) < ((uint32_t)32u)), ((llvm_lshr_u32(((_5714 & 12632256) ^ 8421504), _5719)) != 0u), 0);
  _5722 = (((_5714 & -33554432) == 3221225472u) | ((_5714 & -2097152) == 3766484992u)) | ((_5714 & -1048576) == 4034920448u);
  if ((((((_5716 == 1u) | (((uint64_t)(llvm_add_u64((_5717 << 3), _5720))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_5714) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_5714, 191905856))) < ((uint32_t)4193304640u)))) | _5721) | _5722)) {
    _5715__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5730;
  } else {
    goto _5735;
  }

_5735:
  _5723 = llvm_lshr_u32(_5714, 24);
  if ((((int32_t)_5714) < ((int32_t)0u))) {
    goto _5736;
  } else {
    _5726__PHI_TEMPORARY = _5723;   /* for PHI node */
    goto _5737;
  }

_5736:
  if ((((_5716 == 1u) | (((uint64_t)(llvm_add_u64((_5717 << 3), _5720))) > ((uint64_t)UINT64_C(32)))) | (_5721 | _5722))) {
    goto _5738;
  } else {
    goto _5739;
  }

_5738:
  julia_throw_invalid_char_12(_5713, _5714);
  __builtin_unreachable();

_5739:
  _5724 = llvm_select_u32((((uint32_t)_5718) < ((uint32_t)32u)), (llvm_lshr_u32((_5714 & (llvm_lshr_u32(-1, _5716))), _5719)), 0);
  _5725 = (((_5724 & 127) | ((llvm_lshr_u32(_5724, 2)) & 8128)) | ((llvm_lshr_u32(_5724, 4)) & 520192)) | ((llvm_lshr_u32(_5724, 6)) & 33292288);
  _5726__PHI_TEMPORARY = _5725;   /* for PHI node */
  goto _5737;

_5737:
  _5726 = _5726__PHI_TEMPORARY;
  if ((((uint32_t)(llvm_add_u32(_5726, -161))) < ((uint32_t)1113951u))) {
    goto _5740;
  } else {
    _5715__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5730;
  }

_5740:
  _5727 = jsk_utf8proc_category(_5726);
  if (((((uint32_t)(llvm_add_u32(_5727, -6))) < ((uint32_t)3u)) | ((_5726 & 2097150) == 178u))) {
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  } else {
    goto _5741;
  }

_5741:
  switch (_5726) {
  default:
    goto _5742;
  case 185u:
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  case 688u:
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  }

_5742:
  if ((llvm_select_bool((llvm_select_bool(((_5726 & 2097150) == 690u), 1, (((uint32_t)(llvm_add_u32(_5726, -695))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_5726, -737))) < ((uint32_t)3u))))) {
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  } else {
    goto _5743;
  }

_5743:
  switch (_5726) {
  default:
    goto _5744;
  case 7468u:
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  case 7470u:
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  }

_5744:
  if ((llvm_select_bool(((llvm_select_bool(((llvm_select_bool(((llvm_select_bool((llvm_select_bool(((llvm_select_bool(((_5726 & 2097150) == 7472u), 1, (((uint32_t)(llvm_add_u32(_5726, -7475))) < ((uint32_t)8u)))) | (_5726 == 7484u)), 1, (((uint32_t)(llvm_add_u32(_5726, -7486))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_5726, -7495))) < ((uint32_t)3u)))) | (_5726 == 7501u)), 1, (((uint32_t)(llvm_add_u32(_5726, -7503))) < ((uint32_t)2u)))) | (_5726 == 7506u)), 1, (((uint32_t)(llvm_add_u32(_5726, -7510))) < ((uint32_t)3u)))) | (_5726 == 7515u)), 1, (((uint32_t)(llvm_add_u32(_5726, -7517))) < ((uint32_t)14u))))) {
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  } else {
    goto _5745;
  }

_5745:
  switch (_5726) {
  default:
    goto _5746;
  case 7580u:
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  case 7584u:
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  }

_5746:
  if ((((uint32_t)(llvm_add_u32(_5726, -7589))) < ((uint32_t)2u))) {
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  } else {
    goto _5747;
  }

_5747:
  _5728 = llvm_add_u32(_5726, -7595);
  if ((((uint32_t)_5728) < ((uint32_t)21u))) {
    goto _5732;
  } else {
    goto _5748;
  }

_5748:
  _5729 = llvm_add_u32(_5726, -8242);
  if ((((uint32_t)_5729) < ((uint32_t)38u))) {
    goto _5734;
  } else {
    goto _5733;
  }

_5733:
  if (((llvm_select_bool(((llvm_select_bool(((_5726 & 2097150) == 8304u), 1, (((uint32_t)(llvm_add_u32(_5726, -8308))) < ((uint32_t)27u)))) | ((_5726 & 2097148) == 8336u)), 1, (((uint32_t)(llvm_add_u32(_5726, -8341))) < ((uint32_t)8u)))) | ((_5726 & 2097150) == 11388u))) {
    _5715__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5730;
  } else {
    goto _5749;
  }

_5749:
  _5715__PHI_TEMPORARY = (((uint32_t)(llvm_add_u32(_5726, -42779))) < ((uint32_t)3u));   /* for PHI node */
  goto _5730;

}


static struct l_array_1_void_KC_ julia_ConcurrencyViolationError_43(void* _5750, void* _5751) {
  struct l_array_1_void_KC_ _5752;

  _5752 = llvm_ctor_ptra1(((void*)/*NULL*/0));
  _5752.array[0] = _5751;
  return _5752;
}


static uint8_t julia_accept_number_44(void* _5753, void* _5754) {
  uint8_t _5755;
  uint8_t _5755__PHI_TEMPORARY;
  void* _5756;
  uint64_t _5757;
  void* _5758;
  uint64_t _5759;
  uint64_t _5760;
  void* _5761;
  void* _5762;
  uint64_t _5763;
  void* _5764;
  uint64_t _5765;
  void* _5766;
  uint8_t _5767;
  uint8_t _5768;
  uint8_t _5769;
  uint32_t _5770;
  uint64_t _5771;
  uint64_t _5771__PHI_TEMPORARY;
  uint32_t _5772;
  uint32_t _5772__PHI_TEMPORARY;
  uint64_t _5773;
  uint64_t _5774;
  void* _5775;
  uint8_t _5776;
  uint32_t _5777;
  uint64_t _5778;
  uint64_t _5779;
  uint32_t _5780;
  uint64_t _5781;
  uint32_t _5782;
  uint32_t _5782__PHI_TEMPORARY;
  uint64_t _5783;
  uint64_t _5784;
  uint64_t _5785;
  uint64_t _5786;
  void* _5787;
  uint64_t _5788;
  void* _5789;
  uint64_t _5790;
  void* _5791;
  uint64_t _5792;
  void* _5793;
  uint64_t _5794;

  _5755__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _5795;

  do {     /* Syntactic loop '' to make GCC happy */
_5795:
  _5755 = _5755__PHI_TEMPORARY;
  _5756 = ((&((uint8_t*)_5754)[((int64_t)32)]));
  _5757 = *(uint64_t*)_5756;
  _5758 = ((&((uint8_t*)_5754)[((int64_t)40)]));
  _5759 = llvm_lshr_u64(_5757, 32);
  if ((_5759 == UINT64_C(1593835520))) {
    goto _5796;
  } else {
    goto _5797;
  }

_5796:
  _5760 = *(uint64_t*)_5758;
  if ((((uint32_t)(llvm_add_u32((((uint32_t)_5760)), -805306368))) < ((uint32_t)150994945u))) {
    goto _5797;
  } else {
    goto _5798;
  }

_5797:
  if (((((((uint64_t)_5757) > ((uint64_t)UINT64_C(3458764518115508223))) | (_5759 == UINT64_C(805306368))) & ((((uint64_t)_5757) < ((uint64_t)UINT64_C(4107282860161892352))) | (_5759 == UINT64_C(956301312)))) | (_5759 == UINT64_C(1593835520)))) {
    goto _5799;
  } else {
    goto _5798;
  }

_5799:
  _5761 = *(void**)_5754;
  _5762 = ((&((uint8_t*)_5761)[((int64_t)16)]));
  _5763 = *(uint64_t*)_5762;
  _5764 = ((&((uint8_t*)_5761)[((int64_t)8)]));
  _5765 = *(uint64_t*)_5764;
  if ((((int64_t)_5765) > ((int64_t)_5763))) {
    goto _5800;
  } else {
    _5782__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5801;
  }

_5800:
  _5766 = *(void**)_5761;
  _5767 = *(uint8_t*)(((&((uint8_t*)_5766)[((int64_t)_5763)])));
  *(uint64_t*)_5762 = (llvm_add_u64(_5763, 1));
  _5768 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5767)), 0);
  _5769 = llvm_sub_u8(32, (llvm_shl_u8(_5768, 3)));
  _5770 = (((uint32_t)(uint8_t)_5767)) << 24;
  if ((((uint8_t)_5769) > ((uint8_t)((uint8_t)16)))) {
    _5782__PHI_TEMPORARY = _5770;   /* for PHI node */
    goto _5801;
  } else {
    _5771__PHI_TEMPORARY = 16;   /* for PHI node */
    _5772__PHI_TEMPORARY = _5770;   /* for PHI node */
    goto _5802;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5802:
  _5771 = _5771__PHI_TEMPORARY;
  _5772 = _5772__PHI_TEMPORARY;
  if (((((int64_t)_5771) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5771) < ((uint64_t)(((uint64_t)(uint8_t)_5769)))))) {
    _5782__PHI_TEMPORARY = _5772;   /* for PHI node */
    goto _5801;
  } else {
    goto _5803;
  }

_5803:
  _5773 = *(uint64_t*)_5762;
  _5774 = *(uint64_t*)_5764;
  if ((((int64_t)_5774) > ((int64_t)_5773))) {
    goto _5804;
  } else {
    _5782__PHI_TEMPORARY = _5772;   /* for PHI node */
    goto _5801;
  }

_5804:
  _5775 = *(void**)_5761;
  _5776 = *(uint8_t*)(((&((uint8_t*)_5775)[((int64_t)_5773)])));
  if ((((int8_t)_5776) > ((int8_t)((uint8_t)-65)))) {
    _5782__PHI_TEMPORARY = _5772;   /* for PHI node */
    goto _5801;
  } else {
    goto _5805;
  }

_5805:
  _5777 = llvm_select_u32((((int64_t)_5773) < ((int64_t)_5774)), (((uint32_t)(uint8_t)_5776)), 0);
  _5778 = *(uint64_t*)_5762;
  *(uint64_t*)_5762 = (llvm_add_u64(_5778, 1));
  _5779 = llvm_neg_u64(_5771);
  _5780 = _5772 | (llvm_select_u32((((int64_t)_5771) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5779) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5777, (((uint32_t)_5779)))))), (llvm_select_u32((((uint64_t)_5771) > ((uint64_t)UINT64_C(31))), 0, (_5777 << (((uint32_t)_5771)))))));
  _5781 = llvm_add_u64(_5771, -8);
  _5771__PHI_TEMPORARY = _5781;   /* for PHI node */
  _5772__PHI_TEMPORARY = _5780;   /* for PHI node */
  goto _5802;

  } while (1); /* end of syntactic loop '' */
_5801:
  _5782 = _5782__PHI_TEMPORARY;
  _5783 = *(uint64_t*)_5756;
  _5784 = *(uint64_t*)_5758;
  _5785 = jsyn_cbe_fshl_i64(_5784, _5783, 32);
  _5786 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5782)), _5784, 32);
  *(uint64_t*)_5756 = _5785;
  *(uint64_t*)_5758 = _5786;
  _5787 = ((&((uint8_t*)_5754)[((int64_t)56)]));
  _5788 = *(uint64_t*)_5787;
  _5789 = ((&((uint8_t*)_5754)[((int64_t)64)]));
  _5790 = *(uint64_t*)_5789;
  _5791 = ((&((uint8_t*)_5754)[((int64_t)72)]));
  _5792 = *(uint64_t*)_5791;
  _5793 = *(void**)_5754;
  _5794 = *(uint64_t*)(((&((uint8_t*)_5793)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5754)[((int64_t)48)]))) = _5788;
  *(uint64_t*)_5787 = _5790;
  *(uint64_t*)_5789 = _5792;
  *(uint64_t*)_5791 = _5794;
  _5755__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _5795;

  } while (1); /* end of syntactic loop '' */
_5798:
  return _5755;
}


static uint8_t julia_accept_number_45(void* _5806, void* _5807) {
  uint8_t _5808;
  uint8_t _5808__PHI_TEMPORARY;
  void* _5809;
  uint64_t _5810;
  uint64_t _5811;
  void* _5812;
  uint64_t _5813;
  uint64_t _5814;
  uint32_t _5815;
  void* _5816;
  void* _5817;
  uint64_t _5818;
  void* _5819;
  uint64_t _5820;
  void* _5821;
  uint8_t _5822;
  uint8_t _5823;
  uint8_t _5824;
  uint32_t _5825;
  uint64_t _5826;
  uint64_t _5826__PHI_TEMPORARY;
  uint32_t _5827;
  uint32_t _5827__PHI_TEMPORARY;
  uint64_t _5828;
  uint64_t _5829;
  void* _5830;
  uint8_t _5831;
  uint32_t _5832;
  uint64_t _5833;
  uint64_t _5834;
  uint32_t _5835;
  uint64_t _5836;
  uint32_t _5837;
  uint32_t _5837__PHI_TEMPORARY;
  uint64_t _5838;
  uint64_t _5839;
  uint64_t _5840;
  uint64_t _5841;
  void* _5842;
  uint64_t _5843;
  void* _5844;
  uint64_t _5845;
  void* _5846;
  uint64_t _5847;
  void* _5848;
  uint64_t _5849;

  _5808__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _5850;

  do {     /* Syntactic loop '' to make GCC happy */
_5850:
  _5808 = _5808__PHI_TEMPORARY;
  _5809 = ((&((uint8_t*)_5807)[((int64_t)32)]));
  _5810 = *(uint64_t*)_5809;
  _5811 = ((uint64_t)_5810);
  _5812 = ((&((uint8_t*)_5807)[((int64_t)40)]));
  _5813 = llvm_lshr_u64(_5811, 32);
  _5814 = *(uint64_t*)_5812;
  _5815 = ((uint32_t)_5814);
  if ((llvm_select_bool((llvm_select_bool((_5813 != UINT64_C(1593835520)), 1, ((((uint32_t)(llvm_add_u32(_5815, -805306368))) < ((uint32_t)150994945u)) | (((uint32_t)(llvm_add_u32(_5815, 2667577344u))) < ((uint32_t)83886081u))))), 1, (((uint32_t)(llvm_add_u32(_5815, 3204448256u))) < ((uint32_t)83886081u))))) {
    goto _5851;
  } else {
    goto _5852;
  }

_5851:
  if ((((((uint64_t)_5811) > ((uint64_t)UINT64_C(3458764518115508223))) | (_5813 == UINT64_C(805306368))) & ((((uint64_t)_5811) < ((uint64_t)UINT64_C(4107282860161892352))) | (_5813 == UINT64_C(956301312))))) {
    goto _5853;
  } else {
    goto _5854;
  }

_5854:
  if (((((uint64_t)_5811) < ((uint64_t)UINT64_C(6989586625973977088))) & (_5813 != UINT64_C(1627389952)))) {
    goto _5855;
  } else {
    goto _5856;
  }

_5856:
  if (((((uint64_t)_5811) < ((uint64_t)UINT64_C(7349874591868649472))) | (_5813 == UINT64_C(1711276032)))) {
    goto _5853;
  } else {
    goto _5855;
  }

_5855:
  if (((((uint64_t)_5811) < ((uint64_t)UINT64_C(4683743616760283136))) & (_5813 != UINT64_C(1090519040)))) {
    goto _5857;
  } else {
    goto _5858;
  }

_5858:
  if ((((uint64_t)_5811) < ((uint64_t)UINT64_C(5044031582654955520)))) {
    goto _5853;
  } else {
    goto _5859;
  }

_5859:
  switch ((((uint32_t)_5813))) {
  default:
    goto _5852;
  case 1593835520u:
    goto _5853;
  case 1174405120u:
    goto _5853;
  }

_5857:
  if ((_5813 != UINT64_C(1593835520))) {
    goto _5852;
  } else {
    goto _5853;
  }

_5853:
  _5816 = *(void**)_5807;
  _5817 = ((&((uint8_t*)_5816)[((int64_t)16)]));
  _5818 = *(uint64_t*)_5817;
  _5819 = ((&((uint8_t*)_5816)[((int64_t)8)]));
  _5820 = *(uint64_t*)_5819;
  if ((((int64_t)_5820) > ((int64_t)_5818))) {
    goto _5860;
  } else {
    _5837__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5861;
  }

_5860:
  _5821 = *(void**)_5816;
  _5822 = *(uint8_t*)(((&((uint8_t*)_5821)[((int64_t)_5818)])));
  *(uint64_t*)_5817 = (llvm_add_u64(_5818, 1));
  _5823 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5822)), 0);
  _5824 = llvm_sub_u8(32, (llvm_shl_u8(_5823, 3)));
  _5825 = (((uint32_t)(uint8_t)_5822)) << 24;
  if ((((uint8_t)_5824) > ((uint8_t)((uint8_t)16)))) {
    _5837__PHI_TEMPORARY = _5825;   /* for PHI node */
    goto _5861;
  } else {
    _5826__PHI_TEMPORARY = 16;   /* for PHI node */
    _5827__PHI_TEMPORARY = _5825;   /* for PHI node */
    goto _5862;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5862:
  _5826 = _5826__PHI_TEMPORARY;
  _5827 = _5827__PHI_TEMPORARY;
  if (((((int64_t)_5826) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5826) < ((uint64_t)(((uint64_t)(uint8_t)_5824)))))) {
    _5837__PHI_TEMPORARY = _5827;   /* for PHI node */
    goto _5861;
  } else {
    goto _5863;
  }

_5863:
  _5828 = *(uint64_t*)_5817;
  _5829 = *(uint64_t*)_5819;
  if ((((int64_t)_5829) > ((int64_t)_5828))) {
    goto _5864;
  } else {
    _5837__PHI_TEMPORARY = _5827;   /* for PHI node */
    goto _5861;
  }

_5864:
  _5830 = *(void**)_5816;
  _5831 = *(uint8_t*)(((&((uint8_t*)_5830)[((int64_t)_5828)])));
  if ((((int8_t)_5831) > ((int8_t)((uint8_t)-65)))) {
    _5837__PHI_TEMPORARY = _5827;   /* for PHI node */
    goto _5861;
  } else {
    goto _5865;
  }

_5865:
  _5832 = llvm_select_u32((((int64_t)_5828) < ((int64_t)_5829)), (((uint32_t)(uint8_t)_5831)), 0);
  _5833 = *(uint64_t*)_5817;
  *(uint64_t*)_5817 = (llvm_add_u64(_5833, 1));
  _5834 = llvm_neg_u64(_5826);
  _5835 = _5827 | (llvm_select_u32((((int64_t)_5826) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5834) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5832, (((uint32_t)_5834)))))), (llvm_select_u32((((uint64_t)_5826) > ((uint64_t)UINT64_C(31))), 0, (_5832 << (((uint32_t)_5826)))))));
  _5836 = llvm_add_u64(_5826, -8);
  _5826__PHI_TEMPORARY = _5836;   /* for PHI node */
  _5827__PHI_TEMPORARY = _5835;   /* for PHI node */
  goto _5862;

  } while (1); /* end of syntactic loop '' */
_5861:
  _5837 = _5837__PHI_TEMPORARY;
  _5838 = *(uint64_t*)_5809;
  _5839 = *(uint64_t*)_5812;
  _5840 = jsyn_cbe_fshl_i64(_5839, _5838, 32);
  _5841 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5837)), _5839, 32);
  *(uint64_t*)_5809 = _5840;
  *(uint64_t*)_5812 = _5841;
  _5842 = ((&((uint8_t*)_5807)[((int64_t)56)]));
  _5843 = *(uint64_t*)_5842;
  _5844 = ((&((uint8_t*)_5807)[((int64_t)64)]));
  _5845 = *(uint64_t*)_5844;
  _5846 = ((&((uint8_t*)_5807)[((int64_t)72)]));
  _5847 = *(uint64_t*)_5846;
  _5848 = *(void**)_5807;
  _5849 = *(uint64_t*)(((&((uint8_t*)_5848)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5807)[((int64_t)48)]))) = _5843;
  *(uint64_t*)_5842 = _5845;
  *(uint64_t*)_5844 = _5847;
  *(uint64_t*)_5846 = _5849;
  _5808__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _5850;

  } while (1); /* end of syntactic loop '' */
_5852:
  return _5808;
}


static uint8_t julia_accept_number_46(void* _5866, void* _5867) {
  uint8_t _5868;
  uint8_t _5868__PHI_TEMPORARY;
  void* _5869;
  uint64_t _5870;
  void* _5871;
  uint64_t _5872;
  void* _5873;
  void* _5874;
  uint64_t _5875;
  void* _5876;
  uint64_t _5877;
  void* _5878;
  uint8_t _5879;
  uint8_t _5880;
  uint8_t _5881;
  uint32_t _5882;
  uint64_t _5883;
  uint64_t _5883__PHI_TEMPORARY;
  uint32_t _5884;
  uint32_t _5884__PHI_TEMPORARY;
  uint64_t _5885;
  uint64_t _5886;
  void* _5887;
  uint8_t _5888;
  uint32_t _5889;
  uint64_t _5890;
  uint64_t _5891;
  uint32_t _5892;
  uint64_t _5893;
  uint32_t _5894;
  uint32_t _5894__PHI_TEMPORARY;
  uint64_t _5895;
  uint64_t _5896;
  uint64_t _5897;
  uint64_t _5898;
  void* _5899;
  uint64_t _5900;
  void* _5901;
  uint64_t _5902;
  void* _5903;
  uint64_t _5904;
  void* _5905;
  uint64_t _5906;

  _5868__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _5907;

  do {     /* Syntactic loop '' to make GCC happy */
_5907:
  _5868 = _5868__PHI_TEMPORARY;
  _5869 = ((&((uint8_t*)_5867)[((int64_t)32)]));
  _5870 = *(uint64_t*)_5869;
  _5871 = ((&((uint8_t*)_5867)[((int64_t)40)]));
  if (((_5870 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920))) {
    goto _5908;
  } else {
    goto _5909;
  }

_5908:
  _5872 = *(uint64_t*)_5871;
  if (((_5872 & INT64_C(4278190079)) == UINT64_C(805306368))) {
    goto _5909;
  } else {
    goto _5910;
  }

_5909:
  if ((((_5870 & INT64_C(-72057598332895232)) == UINT64_C(3458764513820540928)) | ((_5870 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920)))) {
    goto _5911;
  } else {
    goto _5910;
  }

_5911:
  _5873 = *(void**)_5867;
  _5874 = ((&((uint8_t*)_5873)[((int64_t)16)]));
  _5875 = *(uint64_t*)_5874;
  _5876 = ((&((uint8_t*)_5873)[((int64_t)8)]));
  _5877 = *(uint64_t*)_5876;
  if ((((int64_t)_5877) > ((int64_t)_5875))) {
    goto _5912;
  } else {
    _5894__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5913;
  }

_5912:
  _5878 = *(void**)_5873;
  _5879 = *(uint8_t*)(((&((uint8_t*)_5878)[((int64_t)_5875)])));
  *(uint64_t*)_5874 = (llvm_add_u64(_5875, 1));
  _5880 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5879)), 0);
  _5881 = llvm_sub_u8(32, (llvm_shl_u8(_5880, 3)));
  _5882 = (((uint32_t)(uint8_t)_5879)) << 24;
  if ((((uint8_t)_5881) > ((uint8_t)((uint8_t)16)))) {
    _5894__PHI_TEMPORARY = _5882;   /* for PHI node */
    goto _5913;
  } else {
    _5883__PHI_TEMPORARY = 16;   /* for PHI node */
    _5884__PHI_TEMPORARY = _5882;   /* for PHI node */
    goto _5914;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5914:
  _5883 = _5883__PHI_TEMPORARY;
  _5884 = _5884__PHI_TEMPORARY;
  if (((((int64_t)_5883) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5883) < ((uint64_t)(((uint64_t)(uint8_t)_5881)))))) {
    _5894__PHI_TEMPORARY = _5884;   /* for PHI node */
    goto _5913;
  } else {
    goto _5915;
  }

_5915:
  _5885 = *(uint64_t*)_5874;
  _5886 = *(uint64_t*)_5876;
  if ((((int64_t)_5886) > ((int64_t)_5885))) {
    goto _5916;
  } else {
    _5894__PHI_TEMPORARY = _5884;   /* for PHI node */
    goto _5913;
  }

_5916:
  _5887 = *(void**)_5873;
  _5888 = *(uint8_t*)(((&((uint8_t*)_5887)[((int64_t)_5885)])));
  if ((((int8_t)_5888) > ((int8_t)((uint8_t)-65)))) {
    _5894__PHI_TEMPORARY = _5884;   /* for PHI node */
    goto _5913;
  } else {
    goto _5917;
  }

_5917:
  _5889 = llvm_select_u32((((int64_t)_5885) < ((int64_t)_5886)), (((uint32_t)(uint8_t)_5888)), 0);
  _5890 = *(uint64_t*)_5874;
  *(uint64_t*)_5874 = (llvm_add_u64(_5890, 1));
  _5891 = llvm_neg_u64(_5883);
  _5892 = _5884 | (llvm_select_u32((((int64_t)_5883) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5891) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5889, (((uint32_t)_5891)))))), (llvm_select_u32((((uint64_t)_5883) > ((uint64_t)UINT64_C(31))), 0, (_5889 << (((uint32_t)_5883)))))));
  _5893 = llvm_add_u64(_5883, -8);
  _5883__PHI_TEMPORARY = _5893;   /* for PHI node */
  _5884__PHI_TEMPORARY = _5892;   /* for PHI node */
  goto _5914;

  } while (1); /* end of syntactic loop '' */
_5913:
  _5894 = _5894__PHI_TEMPORARY;
  _5895 = *(uint64_t*)_5869;
  _5896 = *(uint64_t*)_5871;
  _5897 = jsyn_cbe_fshl_i64(_5896, _5895, 32);
  _5898 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5894)), _5896, 32);
  *(uint64_t*)_5869 = _5897;
  *(uint64_t*)_5871 = _5898;
  _5899 = ((&((uint8_t*)_5867)[((int64_t)56)]));
  _5900 = *(uint64_t*)_5899;
  _5901 = ((&((uint8_t*)_5867)[((int64_t)64)]));
  _5902 = *(uint64_t*)_5901;
  _5903 = ((&((uint8_t*)_5867)[((int64_t)72)]));
  _5904 = *(uint64_t*)_5903;
  _5905 = *(void**)_5867;
  _5906 = *(uint64_t*)(((&((uint8_t*)_5905)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5867)[((int64_t)48)]))) = _5900;
  *(uint64_t*)_5899 = _5902;
  *(uint64_t*)_5901 = _5904;
  *(uint64_t*)_5903 = _5906;
  _5868__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _5907;

  } while (1); /* end of syntactic loop '' */
_5910:
  return _5868;
}


static uint8_t julia_accept_number_47(void* _5918, void* _5919) {
  uint8_t _5920;
  uint8_t _5920__PHI_TEMPORARY;
  void* _5921;
  uint64_t _5922;
  uint64_t _5923;
  void* _5924;
  uint64_t _5925;
  uint64_t _5926;
  void* _5927;
  void* _5928;
  uint64_t _5929;
  void* _5930;
  uint64_t _5931;
  void* _5932;
  uint8_t _5933;
  uint8_t _5934;
  uint8_t _5935;
  uint32_t _5936;
  uint64_t _5937;
  uint64_t _5937__PHI_TEMPORARY;
  uint32_t _5938;
  uint32_t _5938__PHI_TEMPORARY;
  uint64_t _5939;
  uint64_t _5940;
  void* _5941;
  uint8_t _5942;
  uint32_t _5943;
  uint64_t _5944;
  uint64_t _5945;
  uint32_t _5946;
  uint64_t _5947;
  uint32_t _5948;
  uint32_t _5948__PHI_TEMPORARY;
  uint64_t _5949;
  uint64_t _5950;
  uint64_t _5951;
  uint64_t _5952;
  void* _5953;
  uint64_t _5954;
  void* _5955;
  uint64_t _5956;
  void* _5957;
  uint64_t _5958;
  void* _5959;
  uint64_t _5960;

  _5920__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _5961;

  do {     /* Syntactic loop '' to make GCC happy */
_5961:
  _5920 = _5920__PHI_TEMPORARY;
  _5921 = ((&((uint8_t*)_5919)[((int64_t)32)]));
  _5922 = *(uint64_t*)_5921;
  _5923 = ((uint64_t)_5922);
  _5924 = ((&((uint8_t*)_5919)[((int64_t)40)]));
  _5925 = llvm_lshr_u64(_5923, 32);
  if ((_5925 == UINT64_C(1593835520))) {
    goto _5962;
  } else {
    goto _5963;
  }

_5962:
  _5926 = *(uint64_t*)_5924;
  if ((((uint32_t)(llvm_add_u32((((uint32_t)_5926)), -805306368))) < ((uint32_t)117440513u))) {
    goto _5963;
  } else {
    goto _5964;
  }

_5963:
  if (((((uint64_t)_5923) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5925 != UINT64_C(805306368)))) {
    goto _5965;
  } else {
    goto _5966;
  }

_5966:
  if ((((uint64_t)_5923) < ((uint64_t)UINT64_C(3963167672086036480)))) {
    goto _5967;
  } else {
    goto _5968;
  }

_5968:
  switch ((((uint32_t)_5925))) {
  default:
    goto _5964;
  case 1593835520u:
    goto _5967;
  case 922746880u:
    goto _5967;
  }

_5965:
  if ((_5925 == UINT64_C(1593835520))) {
    goto _5967;
  } else {
    goto _5964;
  }

_5967:
  _5927 = *(void**)_5919;
  _5928 = ((&((uint8_t*)_5927)[((int64_t)16)]));
  _5929 = *(uint64_t*)_5928;
  _5930 = ((&((uint8_t*)_5927)[((int64_t)8)]));
  _5931 = *(uint64_t*)_5930;
  if ((((int64_t)_5931) > ((int64_t)_5929))) {
    goto _5969;
  } else {
    _5948__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5970;
  }

_5969:
  _5932 = *(void**)_5927;
  _5933 = *(uint8_t*)(((&((uint8_t*)_5932)[((int64_t)_5929)])));
  *(uint64_t*)_5928 = (llvm_add_u64(_5929, 1));
  _5934 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5933)), 0);
  _5935 = llvm_sub_u8(32, (llvm_shl_u8(_5934, 3)));
  _5936 = (((uint32_t)(uint8_t)_5933)) << 24;
  if ((((uint8_t)_5935) > ((uint8_t)((uint8_t)16)))) {
    _5948__PHI_TEMPORARY = _5936;   /* for PHI node */
    goto _5970;
  } else {
    _5937__PHI_TEMPORARY = 16;   /* for PHI node */
    _5938__PHI_TEMPORARY = _5936;   /* for PHI node */
    goto _5971;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5971:
  _5937 = _5937__PHI_TEMPORARY;
  _5938 = _5938__PHI_TEMPORARY;
  if (((((int64_t)_5937) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5937) < ((uint64_t)(((uint64_t)(uint8_t)_5935)))))) {
    _5948__PHI_TEMPORARY = _5938;   /* for PHI node */
    goto _5970;
  } else {
    goto _5972;
  }

_5972:
  _5939 = *(uint64_t*)_5928;
  _5940 = *(uint64_t*)_5930;
  if ((((int64_t)_5940) > ((int64_t)_5939))) {
    goto _5973;
  } else {
    _5948__PHI_TEMPORARY = _5938;   /* for PHI node */
    goto _5970;
  }

_5973:
  _5941 = *(void**)_5927;
  _5942 = *(uint8_t*)(((&((uint8_t*)_5941)[((int64_t)_5939)])));
  if ((((int8_t)_5942) > ((int8_t)((uint8_t)-65)))) {
    _5948__PHI_TEMPORARY = _5938;   /* for PHI node */
    goto _5970;
  } else {
    goto _5974;
  }

_5974:
  _5943 = llvm_select_u32((((int64_t)_5939) < ((int64_t)_5940)), (((uint32_t)(uint8_t)_5942)), 0);
  _5944 = *(uint64_t*)_5928;
  *(uint64_t*)_5928 = (llvm_add_u64(_5944, 1));
  _5945 = llvm_neg_u64(_5937);
  _5946 = _5938 | (llvm_select_u32((((int64_t)_5937) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5945) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5943, (((uint32_t)_5945)))))), (llvm_select_u32((((uint64_t)_5937) > ((uint64_t)UINT64_C(31))), 0, (_5943 << (((uint32_t)_5937)))))));
  _5947 = llvm_add_u64(_5937, -8);
  _5937__PHI_TEMPORARY = _5947;   /* for PHI node */
  _5938__PHI_TEMPORARY = _5946;   /* for PHI node */
  goto _5971;

  } while (1); /* end of syntactic loop '' */
_5970:
  _5948 = _5948__PHI_TEMPORARY;
  _5949 = *(uint64_t*)_5921;
  _5950 = *(uint64_t*)_5924;
  _5951 = jsyn_cbe_fshl_i64(_5950, _5949, 32);
  _5952 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5948)), _5950, 32);
  *(uint64_t*)_5921 = _5951;
  *(uint64_t*)_5924 = _5952;
  _5953 = ((&((uint8_t*)_5919)[((int64_t)56)]));
  _5954 = *(uint64_t*)_5953;
  _5955 = ((&((uint8_t*)_5919)[((int64_t)64)]));
  _5956 = *(uint64_t*)_5955;
  _5957 = ((&((uint8_t*)_5919)[((int64_t)72)]));
  _5958 = *(uint64_t*)_5957;
  _5959 = *(void**)_5919;
  _5960 = *(uint64_t*)(((&((uint8_t*)_5959)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5919)[((int64_t)48)]))) = _5954;
  *(uint64_t*)_5953 = _5956;
  *(uint64_t*)_5955 = _5958;
  *(uint64_t*)_5957 = _5960;
  _5920__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _5961;

  } while (1); /* end of syntactic loop '' */
_5964:
  return _5920;
}


static uint8_t julia_YY_OC_lex_digitYY_OC_YY_OC_0_48(void* _5975, uint32_t _5976) {
  uint8_t _5977;
  uint8_t _5977__PHI_TEMPORARY;
  uint32_t _5978;
  uint64_t _5979;
  uint32_t _5980;
  uint32_t _5981;
  uint64_t _5982;
  bool _5983;
  bool _5984;
  uint32_t _5985;
  uint32_t _5986;
  uint32_t _5987;
  uint32_t _5988;
  uint32_t _5988__PHI_TEMPORARY;
  uint32_t _5989;
  uint8_t _5990;

  if ((((uint32_t)(llvm_add_u32(_5976, -805306368))) < ((uint32_t)150994945u))) {
    _5977__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5991;
  } else {
    goto _5992;
  }

_5991:
  _5977 = _5977__PHI_TEMPORARY;
  return _5977;
_5992:
  if ((_5976 == 4294967295u)) {
    _5977__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5991;
  } else {
    goto _5993;
  }

_5993:
  _5978 = llvm_OC_ctlz_OC_i32((_5976 ^ -1), 0);
  _5979 = ((uint64_t)(uint32_t)_5978);
  _5980 = llvm_OC_cttz_OC_i32(_5976, 0);
  _5981 = _5980 & 56;
  _5982 = ((uint64_t)(uint32_t)_5981);
  _5983 = llvm_select_bool((((uint32_t)_5980) < ((uint32_t)32u)), ((llvm_lshr_u32(((_5976 & 12632256) ^ 8421504), _5981)) != 0u), 0);
  _5984 = (((_5976 & -33554432) == 3221225472u) | ((_5976 & -2097152) == 3766484992u)) | ((_5976 & -1048576) == 4034920448u);
  if (((((((uint32_t)_5976) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_5976, 293568512))) < ((uint32_t)101662656u))) & (((((_5978 == 1u) | (((uint64_t)(llvm_add_u64((_5979 << 3), _5982))) > ((uint64_t)UINT64_C(32)))) | _5983) | _5984) ^ 1)) & (_5976 != 4036993714u))) {
    goto _5994;
  } else {
    _5977__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5991;
  }

_5994:
  _5985 = llvm_lshr_u32(_5976, 24);
  if ((((int32_t)_5976) < ((int32_t)0u))) {
    goto _5995;
  } else {
    _5988__PHI_TEMPORARY = _5985;   /* for PHI node */
    goto _5996;
  }

_5995:
  if ((((_5978 == 1u) | (((uint64_t)(llvm_add_u64((_5979 << 3), _5982))) > ((uint64_t)UINT64_C(32)))) | (_5983 | _5984))) {
    goto _5997;
  } else {
    goto _5998;
  }

_5997:
  julia_throw_invalid_char_12(_5975, _5976);
  __builtin_unreachable();

_5998:
  _5986 = llvm_select_u32((((uint32_t)_5980) < ((uint32_t)32u)), (llvm_lshr_u32((_5976 & (llvm_lshr_u32(-1, _5978))), _5981)), 0);
  _5987 = (((_5986 & 127) | ((llvm_lshr_u32(_5986, 2)) & 8128)) | ((llvm_lshr_u32(_5986, 4)) & 520192)) | ((llvm_lshr_u32(_5986, 6)) & 33292288);
  _5988__PHI_TEMPORARY = _5987;   /* for PHI node */
  goto _5996;

_5996:
  _5988 = _5988__PHI_TEMPORARY;
  _5989 = jsk_jl_id_start_char(_5988);
  _5990 = ((uint8_t)(bool)(_5989 != 0u));
  _5977__PHI_TEMPORARY = _5990;   /* for PHI node */
  goto _5991;

}

#undef bool
#undef __noreturn
#undef __forceinline
#undef __ATTRIBUTELIST__
#undef __PREFIXALIGN__
#undef __POSTFIXALIGN__
#undef __HIDDEN__
