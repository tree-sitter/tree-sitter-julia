// GENERATED from JuliaSyntax (Julia) by script/jsyntax/regenerate.sh (juliac --trim --output-bc, llvm-cbe,
// kgen.py): do not edit. Entry: jsk_jsyn_space_prefix; support: runtime.c.
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
#define __PREFIXALIGN__(X) __declspec(align(X))
#define __POSTFIXALIGN__(X)
#else
#define __PREFIXALIGN__(X)
#define __POSTFIXALIGN__(X) __attribute__((aligned(X)))
#endif



/* Global Declarations */

/* Types Declarations */
struct l_unnamed_1;
struct l_array_597_uint32_t;
struct l_array_597_uint16_t;
struct l_unnamed_2;
struct l_array_39_uint16_t;
struct l_array_39_uint64_t;
struct l_unnamed_3;
struct l_array_128_uint8_t;
struct l_array_108_uint8_t;
struct l_array_1024_uint8_t;
struct l_array_672_uint8_t;
struct l_array_1_void_KC_;
struct l_array_3_uint64_t;
struct l_array_4_uint64_t;
struct l_array_1_uint64_t;

/* Function definitions */

/* Types Definitions */
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
struct l_array_128_uint8_t {
  uint8_t array[128];
};
struct l_array_108_uint8_t {
  uint8_t array[108];
};
struct l_array_1024_uint8_t {
  uint8_t array[1024];
};
struct l_array_672_uint8_t {
  uint8_t array[672];
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
const static struct l_unnamed_1 _j_constYY_OC_134;
const static struct l_unnamed_2 _j_constYY_OC_135;
const static struct l_unnamed_3 _j_constYY_OC_138;
const static struct l_array_39_uint16_t _j_constYY_OC_139;
const static struct l_array_128_uint8_t _j_constYY_OC_140;
const static struct l_array_108_uint8_t _j_str_invalidSP_OC_GenericMemorySP_OC_sizDOT_OC_DOT_OC_DOT_OC_YY_OC_29DOT_OC_790;
static __PREFIXALIGN__(16) struct l_array_672_uint8_t jsk_dummy_objs __POSTFIXALIGN__(16);

/* Function Declarations */
uint32_t jsk_jsyn_space_prefix(void* _1, void* _2, uint64_t _3);
void* jsk_ijl_gc_small_alloc(void* _5939, uint32_t _5940, uint32_t _5941, uint64_t _5942) __ATTRIBUTELIST__((nothrow, alloc_size(2)));
static void julia_next_token_4444(void* _31, void* _32, void* _33, uint8_t _34);
static void julia_lex_string_chunk_4628(void* _90, void* _91, void* _92);
uint64_t jsyn_cbe_fshl_i64(uint64_t _5943, uint64_t _5944, uint64_t _5945) __ATTRIBUTELIST__((nothrow));
static __noreturn void julia_throw_boundserror_4642(void* _1201, void* _1202, void* _1203) __ATTRIBUTELIST__((noinline));
static __noreturn void julia__throw_argerror_2601(void* _1204, void* _1205) __ATTRIBUTELIST__((noinline));
__noreturn void jsk_ijl_throw(void* _5946);
void jsk_ijl_gc_queue_root(void* _5947);
static struct l_array_1_void_KC_ julia_ConcurrencyViolationError_2826(void* _1206, void* _1207);
static uint8_t julia_YY_OC_lex_digitYY_OC_YY_OC_0_4503(void* _1209, uint32_t _1210);
static uint8_t julia_accept_number_4515(void* _1233, void* _1234);
static void julia_lex_backtick_4528(void* _1293, void* _1294, void* _1295);
static void julia_lex_plus_4544(void* _1403, void* _1404, void* _1405);
static void julia_lex_backslash_4554(void* _1500, void* _1501, void* _1502);
static void julia_lex_forwardslash_4558(void* _1553, void* _1554, void* _1555);
static void julia_lex_quote_4566(void* _1694, void* _1695, void* _1696);
static void julia_lex_division_4571(void* _1810, void* _1811, void* _1812);
static void julia_lex_amper_4575(void* _1863, void* _1864, void* _1865);
static void julia_lex_less_4587(void* _1960, void* _1961, void* _1962);
static void julia_lex_greater_4591(void* _2395, void* _2396, void* _2397);
static void julia_lex_exclaim_4595(void* _2668, void* _2669, void* _2670);
static void julia_lex_equal_4599(void* _2765, void* _2766, void* _2767);
static void julia_lex_circumflex_4615(void* _2906, void* _2907, void* _2908);
static void julia_lex_whitespace_4623(void* _2959, void* _2960, void* _2961, uint32_t _2962);
__noreturn void jsk_ijl_undefined_var_error(void* _5948, void* _5949);
__noreturn void jsk_ijl_bounds_error_int(void* _5950, uint64_t _5951);
__noreturn void jsk_jl_argument_error(void* _5952);
void* jsk_jl_alloc_genericmemory_unchecked(void* _5953, uint64_t _5954, void* _5955) __ATTRIBUTELIST__((nothrow));
static __noreturn void julia_throw_inexacterror_2498(void* _3045, void* _3046, void* _3047, int64_t _3048);
static __noreturn void julia_throw_invalid_char_2796(void* _3049, uint32_t _3050) __ATTRIBUTELIST__((noinline));
static struct l_array_1_void_KC_ julia_AssertionError_2940(void* _3051, void* _3052);
static void julia__next_token_4450(void* _3054, void* _3055, void* _3056, uint32_t _3057);
static void julia_emit_4484(void* _3275, void* _3276, void* _3277, uint16_t _3278, uint8_t _3279);
static uint8_t julia_isopsuffix_4488(void* _3335, uint32_t _3336);
static void julia_lex_digit_4491(void* _3372, void* _3373, void* _3374, uint16_t _3375);
static uint8_t julia_accept_number_4506(void* _4308, void* _4309);
static uint8_t julia_accept_number_4509(void* _4365, void* _4366);
static uint8_t julia_accept_number_4512(void* _4417, void* _4418);
static uint8_t julia_is_operator_start_char_4518(void* _4470, uint32_t _4471);
static void julia_lex_identifier_4521(void* _4503, void* _4504, void* _4505, uint32_t _4506);
static void julia__growend_internalNOT_OC__4533(void* _4711, void* _4712, int64_t _4713, int64_t _4714);
static void julia_lex_minus_4540(void* _4782, void* _4783, void* _4784);
static void julia_lex_dot_4548(void* _4969, void* _4970, void* _4971);
static void julia_lex_percent_4562(void* _5130, void* _5131, void* _5132);
static void julia_lex_bar_4579(void* _5183, void* _5184, void* _5185);
static void julia_lex_colon_4583(void* _5324, void* _5325, void* _5326);
static void julia_lex_comment_4603(void* _5421, void* _5422, void* _5423);
static void julia_lex_xor_4607(void* _5599, void* _5600, void* _5601);
static void julia_lex_dollar_4611(void* _5652, void* _5653, void* _5654);
static void julia_lex_star_4619(void* _5705, void* _5706, void* _5707);
static uint8_t julia_is_never_id_char_4645(void* _5802, uint32_t _5803);
static void* julia_Lexer_4648(void* _5839, void* _5840, void* _5841);
__noreturn void jsk_throw(void);
uint32_t jsk_utf8proc_category(uint32_t _5956);
uint32_t jsk_jl_id_char(uint32_t _5957);
uint32_t jsk_jl_id_start_char(uint32_t _5958);
uint8_t jsk_utf8proc_grapheme_break_stateful(uint32_t _5959, uint32_t _5960, void* _5961);
void* jsyn_cbe_thread_pointer(void);
void jsyn_cbe_sev(void);
void jsyn_cbe_wfe(void);


/* Global Variable Definitions and Initialization */
static const struct l_unnamed_1 _j_constYY_OC_134 = { 0, 1, 654311424, 0 };
static const struct l_unnamed_2 _j_constYY_OC_135 = { { { -1029308416, -1028915200, -1028587520, -1028194304, -1013514240, -1011417088, -830013440, -494885376, -494822144, -494564608, -494497792, -494497536, -494497280, -494497024, -494496768, -494495232, -494494976, -494494720, -494494464, -494494208, -494493696, -494493184, -494492928, -494492672, -494492160, -494491392, -494491136, -494490880, -494490624, -494490112, -494488064, -494487808, -494487040, -494486784, -494486528, -494486272, -494436352, -494436096, -494435328, -494434816, -494434560, -494434048, -494433536, -494433280, -494433024, -494432768, -494432512, -494432256, -494431744, -494431232, -494429696, -494429440, -494429184, -494428928, -494428160, -494427648, -494423040, -494422784, -494422528, -494422272, -494422016, -494421760, -494421504, -494421248, -494420992, -494420736, -494420480, -494420224, -494368768, -494368512, -494368256, -494368000, -494367744, -494367488, -494366208, -494365952, -494365696, -494364928, -494364672, -494364416, -494364160, -494363904, -494363648, -494363392, -494361600, -494361344, -494361088, -494360832, -494360576, -494360320, -494360064, -494356736, -494356480, -494355968, -494355712, -494355200, -494354944, -494305280, -494305024, -494304768, -494304512, -494304256, -494304000, -494303744, -494303488, -494303232, -494302976, -494302720, -494302464, -494302208, -494301952, -494301696, -494301440, -494301184, -494300928, -494300672, -494300416, -494300160, -494299904, -494299648, -494299392, -494299136, -494298880, -494298624, -494298368, -494298112, -494297856, -494297600, -494297344, -494297088, -494296832, -494296576, -494296320, -494296064, -494295808, -494295552, -494295296, -494295040, -494294784, -494294528, -494294272, -494294016, -494293760, -494293504, -494293248, -494292992, -494292736, -494292480, -494292224, -494291968, -494291712, -494291456, -494291200, -494290944, -494290688, -494290432, -494290176, -494289920, -494289664, -494289408, -494289152, -494239744, -494239488, -494239232, -494238976, -494238720, -494238464, -494238208, -494237952, -494237696, -494237440, -494237184, -494236928, -494236416, -494236160, -494235904, -494235648, -494235392, -494235136, -494234880, -494234624, -494234368, -494234112, -494233856, -494233600, -494233344, -494233088, -494232832, -494232576, -494232064, -494231808, -494231552, -494231296, -494231040, -494230784, -494229248, -494228480, -494227968, -494227456, -494227200, -494226944, -494226688, -494226432, -494226176, -494225920, -494225664, -494224640, -494224384, -494224128, -494173184, -494172928, -494172672, -494172416, -494171904, -494171648, -494171392, -494171136, -494170880, -494170624, -494170368, -494170112, -494169856, -494169600, -494169344, -494168832, -494168576, -494168320, -494168064, -494167808, -494167552, -494167296, -494167040, -494166784, -494166528, -494166272, -494166016, -494165760, -494165504, -494165248, -494164992, -494164736, -494164480, -494164224, -494163968, -494163712, -494163456, -494163200, -494162944, -494162688, -494162432, -494162176, -494161920, -494161664, -494161408, -494161152, -494160896, -494160640, -494160384, -494160128, -494159872, -494159616, -494159360, -494159104, -494158848, -494158592, -494158336, -494158080, -494092544, -493439232, -492862976, -492861696, -492861440, -492861184, -492859136, -492858880, -492858112, -492857856, -492857600, -492851200, -492850944, -492849920, -492849664, -492849408, -492848896, -492848640, -492848384, -492848128, -492847872, -492847616, -492847360, -492535808, -492535552, -492535296, -492535040, -492534784, -492534528, -492534272, -492534016, -492533760, -492533504, -492533248, -492532992, -492532736, -492532480, -492532224, -492531968, -492531712, -492531456, -492531200, -492530944, -492530688, -492530432, -492530176, -492529920, -492529664, -492528384, -492528128, -492527872, -492527616, -492469248, -492468992, -492468736, -492468480, -492468224, -492467968, -492467712, -492467456, -492467200, -492466944, -492466688, -492466432, -492466176, -492465920, -492465664, -492465408, -492465152, -492464896, -492464640, -492464384, -492464128, -492463872, -492463616, -492463360, -492463104, -492462848, -492462592, -492462336, -492462080, -492461824, -492461568, -492461312, -492461056, -492460800, -492460544, -492460288, -492460032, -492459776, -492459520, -492459264, -492459008, -492458752, -492458496, -492458240, -492457984, -492456192, -492455424, -492390656, -492390400, -492389376, -492388864, -492388608, -492339200, -492338944, -492330752, -492330240, -492329984, -492329728, -492325888, -492325376, -492325120, -492324352, -492324096, -492271872, -492271616, -492266240, -492265728, -492264960, -492264704, -492264448, -492264192, -492263936, -492263680, -492263424, -492263168, -492262912, -492262656, -492262400, -492262144, -492261888, -492261376, -492261120, -492260864, -492260608, -492260352, -492260096, -492259840, -492259584, -492259328, -492259072, -492258816, -492258560, -492258304, -492258048, -492208128, -492207872, -492207616, -492207360, -492207104, -492206848, -492205568, -492205312, -492205056, -492204800, -492204544, -492204288, -492204032, -492203776, -492203520, -492203264, -492203008, -492202752, -492202496, -492202240, -492201984, -492201472, -492201216, -492200960, -492200704, -492200448, -492200192, -492199936, -492199680, -492199424, -492199168, -492198400, -492198144, -492197376, -492197120, -492196864, -492196608, -492196352, -492196096, -492195840, -492195584, -492195328, -492195072, -492194816, -492194560, -492194304, -492194048, -492193792, -492193536, -492193280, -492193024, -492192768, -492192512, -492192256, -492192000, -492142592, -492142336, -492142080, -492141824, -492141568, -492141312, -492141056, -492140800, -492140544, -492140288, -492140032, -492139776, -492139520, -492139264, -492139008, -492138752, -492138496, -492138240, -492137984, -492137728, -492137472, -492137216, -492136960, -492136704, -492136448, -492136192, -492135936, -492135680, -492135424, -492135168, -492134912, -492134656, -492134400, -492134144, -492133888, -492133632, -492133376, -492133120, -492132864, -492132608, -492132352, -492132096, -492131840, -492131584, -492131328, -492131072, -492130816, -492130560, -492130304, -492130048, -492129792, -492129536, -492129280, -492129024, -492128768, -492128512, -492128256, -492128000, -492127744, -492127488, -492127232, -492126976, -492126720, -492126464, -492077056, -492076800, -492076544, -492076288, -492076032, -492075776, -492075520, -492075264, -492075008, -492074752, -492074496, -492074240, -492073984, -492073728, -492073472, -492073216, -492072960, -492072704, -492072448, -492072192, -492071936, -492071680, -492071424, -492071168, -492070912, -492070656, -492070144, -492066304, -492066048, -492062976, -492062720, -492062464, -492062208, -491999232, -491998976, -491998720, -491998464, -491998208, -491997952, -491997696, -491997440, -491997184, -491996928, -491996672, -491996416, -491996160, -491995904, -491995648, -491995392, -491945984, -491945728, -491945472, -491945216, -491944960, -491944192, -491943936, -491943680, -491943424, -491943168, -491942912, -272652032, -272651776, -272651520, -272651264, -257973582 } }, { { 591, 712, 546, 596, 598, 594, 596, 528, 529, 614, 83, 675, 84, 676, 85, 86, 87, 207, 208, 88, 89, 90, 91, 92, 93, 209, 210, 211, 212, 94, 228, 227, 229, 230, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 96, 95, 97, 98, 99, 100, 223, 224, 205, 206, 225, 226, 101, 677, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 251, 254, 263, 255, 256, 264, 536, 547, 548, 611, 597, 612, 713, 714, 715, 262, 613, 265, 266, 602, 544, 601, 543, 267, 549, 268, 269, 270, 271, 615, 272, 274, 273, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 550, 286, 287, 288, 289, 75, 77, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 248, 246, 250, 300, 243, 241, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 259, 329, 260, 330, 257, 331, 258, 332, 261, 333, 662, 551, 334, 335, 336, 337, 610, 545, 538, 539, 603, 604, 605, 606, 607, 338, 540, 541, 608, 609, 519, 520, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 552, 616, 553, 617, 596, 618, 619, 620, 621, 622, 623, 350, 554, 624, 351, 352, 625, 555, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 530, 533, 532, 531, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 668, 663, 521, 556, 392, 393, 626, 394, 665, 666, 667, 678, 679, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 680, 681, 682, 683, 130, 131, 132, 133, 134, 135, 684, 685, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 686, 150, 151, 687, 688, 152, 689, 153, 690, 154, 155, 691, 692, 156, 157, 693, 694, 158, 159, 695, 696, 160, 161, 697, 698, 162, 699, 163, 700, 164, 165, 166, 167, 168, 169, 170, 171, 701, 702, 172, 194, 196, 395, 627, 628, 629, 630, 396, 397, 398, 399, 400, 401, 173, 631, 632, 557, 558, 633, 559, 664, 669, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 634, 635, 636, 637, 638, 639, 640, 641, 642, 573, 574, 643, 644, 645, 646, 575, 576, 647, 648, 577, 578, 649, 579, 650, 651, 580, 581, 652, 582, 653, 583, 654, 584, 585, 655, 656, 586, 657, 587, 658, 659, 660, 588, 589, 590, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 76, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 661, 522, 523, 515, 516, 517, 518, 175, 174, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 195, 197, 198, 199, 200, 201, 202, 203, 703, 204, 704, 231 } } };
static const struct l_unnamed_3 _j_constYY_OC_138 = { { { 51, 143, 294, 302, 4579, 5572, 6642, 9825, 12468, 21081, 22578, 176741, 681477, 2268462, 2692139, 3199080, 3652212, 13077548, 13667919, 16437426, 18529925, 22652359, 24385093, 24388997, 180983078, 193478228, 247957548, 316161620, 452089221, 558969123, 609900110, 659117172, INT64_C(6759166361), INT64_C(14684293509), INT64_C(37166318708), INT64_C(119676385957), INT64_C(229180581358), INT64_C(18220771321541), INT64_C(72092551894405) } }, { { 35, 12, 17, 252, 36, 33, 14, 253, 19, 26, 42, 31, 41, 8, 9, 29, 10, 20, 21, 38, 23, 27, 706, 28, 32, 13, 16, 18, 22, 40, 24, 25, 30, 37, 34, 11, 15, 39, 7 } } };
static const struct l_array_39_uint16_t _j_constYY_OC_139 = { { 35, 12, 17, 252, 36, 33, 14, 253, 19, 26, 42, 31, 41, 8, 9, 29, 10, 20, 21, 38, 23, 27, 706, 28, 32, 13, 16, 18, 22, 40, 24, 25, 30, 37, 34, 11, 15, 39, 7 } };
static const struct l_array_128_uint8_t _j_constYY_OC_140 = { "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x00\x00\x00\x00\x00\x00\x00\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x00\x00\x00\x00\x01\x00\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x00\x00\x00\x00" };
static const struct l_array_108_uint8_t _j_str_invalidSP_OC_GenericMemorySP_OC_sizDOT_OC_DOT_OC_DOT_OC_YY_OC_29DOT_OC_790 = { "invalid GenericMemory size: the number of elements is either negative or too large for system address width" };
static const __PREFIXALIGN__(16) struct l_array_1024_uint8_t jl_small_typeof __POSTFIXALIGN__(16);
static __PREFIXALIGN__(16) struct l_array_672_uint8_t jsk_dummy_objs __POSTFIXALIGN__(16);


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
static __forceinline uint64_t llvm_OC_smax_OC_i64(int64_t a, int64_t b) {
  uint64_t r;
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
static __forceinline uint32_t llvm_OC_bswap_OC_i32(uint32_t a) {
  uint32_t r;
  int i;
  r = 0;
  int bitwidth = 32;
  for (i = 0; i < bitwidth/8; i++)
    r |= ((a >> (i*8)) & 0xff) << (bitwidth - (i+1)*8);
  return r;
}
static __forceinline uint32_t llvm_OC_umax_OC_i32(uint32_t a, uint32_t b) {
  uint32_t r;
  r = a > b ? a : b;
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
  _12 = julia_Lexer_4648(_1, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)40)]))), _11);
  *(void**)(((&((uint8_t*)(&_4))[((int64_t)16)]))) = _12;
  julia_next_token_4444((&_7), _1, _12, 1);
  _13 = *((uint16_t*)&_7);
  if ((_13 == ((uint16_t)707))) {
    goto _24;
  } else {
    goto _25;
  }

_24:
  julia_next_token_4444((&_8), _1, _12, 1);
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
  julia_next_token_4444((&_9), _1, _12, 1);
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


static void julia_next_token_4444(void* _31, void* _32, void* _33, uint8_t _34) {
  struct l_array_4_uint64_t _35;    /* Address-exposed local */
  struct l_array_4_uint64_t _36;    /* Address-exposed local */
  uint64_t _37;
  void* _38;
  uint64_t _39;
  void* _40;
  void* _40__PHI_TEMPORARY;
  void* _41;
  void* _42;
  void* _43;
  uint64_t _44;
  void* _45;
  uint64_t _46;
  void* _47;
  uint8_t _48;
  uint8_t _49;
  uint8_t _50;
  uint32_t _51;
  uint64_t _52;
  uint64_t _52__PHI_TEMPORARY;
  uint32_t _53;
  uint32_t _53__PHI_TEMPORARY;
  uint64_t _54;
  uint64_t _55;
  void* _56;
  uint8_t _57;
  uint32_t _58;
  uint64_t _59;
  uint64_t _60;
  uint32_t _61;
  uint64_t _62;
  uint32_t _63;
  uint32_t _63__PHI_TEMPORARY;
  void* _64;
  uint64_t _65;
  void* _66;
  uint64_t _67;
  uint64_t _68;
  uint64_t _69;
  void* _70;
  uint64_t _71;
  void* _72;
  uint64_t _73;
  void* _74;
  uint64_t _75;
  void* _76;
  uint64_t _77;
  uint64_t _78;

  if ((((bool)_34&1u))) {
    goto _79;
  } else {
    goto _80;
  }

_79:
  _37 = *(uint64_t*)(((&((uint8_t*)_33)[((int64_t)48)])));
  *(uint64_t*)(((&((uint8_t*)_33)[((int64_t)8)]))) = _37;
  goto _80;

_80:
  _38 = *(void**)(((&((uint8_t*)_33)[((int64_t)24)])));
  _39 = *(uint64_t*)(((&((uint8_t*)_38)[((int64_t)16)])));
  if ((_39 == UINT64_C(0))) {
    goto _81;
  } else {
    goto _82;
  }

_83:
  _40 = _40__PHI_TEMPORARY;
  _41 = memcpy(_31, _40, 32);
  return;
_82:
  julia_lex_string_chunk_4628((&_35), _32, _33);
  _40__PHI_TEMPORARY = (&_35);   /* for PHI node */
  goto _83;

_81:
  _42 = *(void**)_33;
  _43 = ((&((uint8_t*)_42)[((int64_t)16)]));
  _44 = *(uint64_t*)_43;
  _45 = ((&((uint8_t*)_42)[((int64_t)8)]));
  _46 = *(uint64_t*)_45;
  if ((((int64_t)_46) > ((int64_t)_44))) {
    goto _84;
  } else {
    _63__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _85;
  }

_84:
  _47 = *(void**)_42;
  _48 = *(uint8_t*)(((&((uint8_t*)_47)[((int64_t)_44)])));
  *(uint64_t*)_43 = (llvm_add_u64(_44, 1));
  _49 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_48)), 0);
  _50 = llvm_sub_u8(32, (llvm_shl_u8(_49, 3)));
  _51 = (((uint32_t)(uint8_t)_48)) << 24;
  if ((((uint8_t)_50) > ((uint8_t)((uint8_t)16)))) {
    _63__PHI_TEMPORARY = _51;   /* for PHI node */
    goto _85;
  } else {
    _52__PHI_TEMPORARY = 16;   /* for PHI node */
    _53__PHI_TEMPORARY = _51;   /* for PHI node */
    goto _86;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_86:
  _52 = _52__PHI_TEMPORARY;
  _53 = _53__PHI_TEMPORARY;
  if (((((int64_t)_52) < ((int64_t)UINT64_C(0))) | (((uint64_t)_52) < ((uint64_t)(((uint64_t)(uint8_t)_50)))))) {
    _63__PHI_TEMPORARY = _53;   /* for PHI node */
    goto _85;
  } else {
    goto _87;
  }

_87:
  _54 = *(uint64_t*)_43;
  _55 = *(uint64_t*)_45;
  if ((((int64_t)_55) > ((int64_t)_54))) {
    goto _88;
  } else {
    _63__PHI_TEMPORARY = _53;   /* for PHI node */
    goto _85;
  }

_88:
  _56 = *(void**)_42;
  _57 = *(uint8_t*)(((&((uint8_t*)_56)[((int64_t)_54)])));
  if ((((int8_t)_57) > ((int8_t)((uint8_t)-65)))) {
    _63__PHI_TEMPORARY = _53;   /* for PHI node */
    goto _85;
  } else {
    goto _89;
  }

_89:
  _58 = llvm_select_u32((((int64_t)_54) < ((int64_t)_55)), (((uint32_t)(uint8_t)_57)), 0);
  _59 = *(uint64_t*)_43;
  *(uint64_t*)_43 = (llvm_add_u64(_59, 1));
  _60 = llvm_neg_u64(_52);
  _61 = _53 | (llvm_select_u32((((int64_t)_52) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_60) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_58, (((uint32_t)_60)))))), (llvm_select_u32((((uint64_t)_52) > ((uint64_t)UINT64_C(31))), 0, (_58 << (((uint32_t)_52)))))));
  _62 = llvm_add_u64(_52, -8);
  _52__PHI_TEMPORARY = _62;   /* for PHI node */
  _53__PHI_TEMPORARY = _61;   /* for PHI node */
  goto _86;

  } while (1); /* end of syntactic loop '' */
_85:
  _63 = _63__PHI_TEMPORARY;
  _64 = ((&((uint8_t*)_33)[((int64_t)32)]));
  _65 = *(uint64_t*)_64;
  _66 = ((&((uint8_t*)_33)[((int64_t)40)]));
  _67 = *(uint64_t*)_66;
  _68 = jsyn_cbe_fshl_i64(_67, _65, 32);
  _69 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_63)), _67, 32);
  *(uint64_t*)_64 = _68;
  *(uint64_t*)_66 = _69;
  _70 = ((&((uint8_t*)_33)[((int64_t)56)]));
  _71 = *(uint64_t*)_70;
  _72 = ((&((uint8_t*)_33)[((int64_t)64)]));
  _73 = *(uint64_t*)_72;
  _74 = ((&((uint8_t*)_33)[((int64_t)72)]));
  _75 = *(uint64_t*)_74;
  _76 = *(void**)_33;
  _77 = *(uint64_t*)(((&((uint8_t*)_76)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_33)[((int64_t)48)]))) = _71;
  *(uint64_t*)_70 = _73;
  *(uint64_t*)_72 = _75;
  *(uint64_t*)_74 = _77;
  _78 = *(uint64_t*)_64;
  julia__next_token_4450((&_36), _32, _33, (((uint32_t)_78)));
  _40__PHI_TEMPORARY = (&_36);   /* for PHI node */
  goto _83;

}


static void julia_lex_string_chunk_4628(void* _90, void* _91, void* _92) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _93 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _94;
  void* _95;
  struct l_array_4_uint64_t _96;    /* Address-exposed local */
  struct l_array_1_uint64_t _97;    /* Address-exposed local */
  struct l_array_4_uint64_t _98;    /* Address-exposed local */
  struct l_array_1_uint64_t _99;    /* Address-exposed local */
  struct l_array_4_uint64_t _100;    /* Address-exposed local */
  struct l_array_4_uint64_t _101;    /* Address-exposed local */
  struct l_array_1_uint64_t _102;    /* Address-exposed local */
  struct l_array_4_uint64_t _103;    /* Address-exposed local */
  struct l_array_4_uint64_t _104;    /* Address-exposed local */
  struct l_array_4_uint64_t _105;    /* Address-exposed local */
  struct l_array_4_uint64_t _106;    /* Address-exposed local */
  struct l_array_4_uint64_t _107;    /* Address-exposed local */
  struct l_array_4_uint64_t _108;    /* Address-exposed local */
  struct l_array_4_uint64_t _109;    /* Address-exposed local */
  struct l_array_4_uint64_t _110;    /* Address-exposed local */
  struct l_array_4_uint64_t _111;    /* Address-exposed local */
  struct l_array_1_uint64_t _112;    /* Address-exposed local */
  void* _113;
  void* _114;
  uint64_t _115;
  void* _116;
  void* _117;
  uint8_t _118;
  uint8_t _119;
  uint32_t _120;
  uint64_t _121;
  void* _122;
  void* _123;
  uint64_t _124;
  void* _125;
  uint64_t _126;
  void* _127;
  uint8_t _128;
  uint8_t _129;
  uint8_t _130;
  uint32_t _131;
  uint64_t _132;
  uint64_t _132__PHI_TEMPORARY;
  uint32_t _133;
  uint32_t _133__PHI_TEMPORARY;
  uint64_t _134;
  uint64_t _135;
  void* _136;
  uint8_t _137;
  uint32_t _138;
  uint64_t _139;
  uint64_t _140;
  uint32_t _141;
  uint64_t _142;
  uint32_t _143;
  uint32_t _143__PHI_TEMPORARY;
  void* _144;
  uint64_t _145;
  void* _146;
  uint64_t _147;
  uint64_t _148;
  uint64_t _149;
  void* _150;
  uint64_t _151;
  void* _152;
  uint64_t _153;
  void* _154;
  uint64_t _155;
  void* _156;
  uint64_t _157;
  uint64_t _158;
  uint32_t _159;
  void* _160;
  uint64_t _161;
  void* _162;
  void* _163;
  void* _164;
  void* _164__PHI_TEMPORARY;
  void* _165;
  void* _166;
  void* _167;
  uint64_t _168;
  void* _169;
  void* _170;
  void* _171;
  uint64_t _172;
  void* _173;
  uint64_t _174;
  uint32_t _175;
  void* _176;
  uint16_t _177;
  uint64_t _178;
  uint64_t _179;
  uint32_t _180;
  void* _181;
  void* _182;
  uint64_t _183;
  void* _184;
  uint64_t _185;
  void* _186;
  uint8_t _187;
  uint8_t _188;
  uint8_t _189;
  uint32_t _190;
  uint64_t _191;
  uint64_t _191__PHI_TEMPORARY;
  uint32_t _192;
  uint32_t _192__PHI_TEMPORARY;
  uint64_t _193;
  uint64_t _194;
  void* _195;
  uint8_t _196;
  uint32_t _197;
  uint64_t _198;
  uint64_t _199;
  uint32_t _200;
  uint64_t _201;
  uint32_t _202;
  uint32_t _202__PHI_TEMPORARY;
  uint64_t _203;
  uint64_t _204;
  uint64_t _205;
  uint64_t _206;
  void* _207;
  uint64_t _208;
  void* _209;
  uint64_t _210;
  void* _211;
  uint64_t _212;
  void* _213;
  uint64_t _214;
  void* _215;
  uint64_t _216;
  void* _217;
  void* _218;
  uint32_t _219;
  uint64_t _220;
  uint32_t _221;
  uint32_t _222;
  uint64_t _223;
  bool _224;
  bool _225;
  uint32_t _226;
  uint32_t _227;
  uint32_t _228;
  uint32_t _229;
  uint32_t _229__PHI_TEMPORARY;
  uint32_t _230;
  void* _231;
  void* _232;
  uint64_t _233;
  void* _234;
  uint64_t _235;
  void* _236;
  uint8_t _237;
  uint8_t _238;
  uint8_t _239;
  uint32_t _240;
  uint64_t _241;
  uint64_t _241__PHI_TEMPORARY;
  uint32_t _242;
  uint32_t _242__PHI_TEMPORARY;
  uint64_t _243;
  uint64_t _244;
  void* _245;
  uint8_t _246;
  uint32_t _247;
  uint64_t _248;
  uint64_t _249;
  uint32_t _250;
  uint64_t _251;
  uint32_t _252;
  uint32_t _252__PHI_TEMPORARY;
  uint64_t _253;
  uint64_t _254;
  uint64_t _255;
  uint64_t _256;
  void* _257;
  uint64_t _258;
  void* _259;
  uint64_t _260;
  void* _261;
  uint64_t _262;
  void* _263;
  uint64_t _264;
  uint64_t _265;
  uint8_t _266;
  bool _267;
  uint8_t _268;
  bool _269;
  bool _270;
  bool _270__PHI_TEMPORARY;
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
  uint64_t _293;
  uint64_t _294;
  uint64_t _295;
  uint64_t _296;
  void* _297;
  uint64_t _298;
  void* _299;
  uint64_t _300;
  void* _301;
  uint64_t _302;
  void* _303;
  uint64_t _304;
  uint32_t _305;
  uint32_t _305__PHI_TEMPORARY;
  bool _306;
  void* _307;
  void* _308;
  uint64_t _309;
  void* _310;
  uint64_t _311;
  void* _312;
  uint8_t _313;
  uint8_t _314;
  uint8_t _315;
  uint32_t _316;
  uint64_t _317;
  uint64_t _317__PHI_TEMPORARY;
  uint32_t _318;
  uint32_t _318__PHI_TEMPORARY;
  uint64_t _319;
  uint64_t _320;
  void* _321;
  uint8_t _322;
  uint32_t _323;
  uint64_t _324;
  uint64_t _325;
  uint32_t _326;
  uint64_t _327;
  uint32_t _328;
  uint32_t _328__PHI_TEMPORARY;
  uint64_t _329;
  uint64_t _330;
  uint64_t _331;
  uint64_t _332;
  void* _333;
  uint64_t _334;
  void* _335;
  uint64_t _336;
  void* _337;
  uint64_t _338;
  void* _339;
  uint64_t _340;
  uint64_t _341;
  uint32_t _342;
  void* _343;
  void* _344;
  uint64_t _345;
  void* _346;
  uint64_t _347;
  void* _348;
  uint8_t _349;
  uint8_t _350;
  uint8_t _351;
  uint32_t _352;
  uint64_t _353;
  uint64_t _353__PHI_TEMPORARY;
  uint32_t _354;
  uint32_t _354__PHI_TEMPORARY;
  uint64_t _355;
  uint64_t _356;
  void* _357;
  uint8_t _358;
  uint32_t _359;
  uint64_t _360;
  uint64_t _361;
  uint32_t _362;
  uint64_t _363;
  uint32_t _364;
  uint32_t _364__PHI_TEMPORARY;
  uint64_t _365;
  uint64_t _366;
  uint64_t _367;
  uint64_t _368;
  void* _369;
  void* _370;
  uint64_t _371;
  void* _372;
  uint64_t _373;
  void* _374;
  uint64_t _375;
  void* _376;
  uint64_t _377;
  void* _378;
  void* _379;
  uint64_t _380;
  void* _381;
  uint64_t _382;
  void* _383;
  uint8_t _384;
  uint8_t _385;
  uint8_t _386;
  uint32_t _387;
  uint64_t _388;
  uint64_t _388__PHI_TEMPORARY;
  uint32_t _389;
  uint32_t _389__PHI_TEMPORARY;
  uint64_t _390;
  uint64_t _391;
  void* _392;
  uint8_t _393;
  uint32_t _394;
  uint64_t _395;
  uint64_t _396;
  uint32_t _397;
  uint64_t _398;
  uint32_t _399;
  uint32_t _399__PHI_TEMPORARY;
  uint64_t _400;
  uint64_t _401;
  uint64_t _402;
  uint64_t _403;
  uint64_t _404;
  uint64_t _405;
  uint64_t _406;
  void* _407;
  uint64_t _408;
  uint64_t _409;
  void* _410;
  void* _411;
  uint64_t _412;
  void* _413;
  uint64_t _414;
  void* _415;
  uint8_t _416;
  uint8_t _417;
  uint8_t _418;
  uint32_t _419;
  uint64_t _420;
  uint64_t _420__PHI_TEMPORARY;
  uint32_t _421;
  uint32_t _421__PHI_TEMPORARY;
  uint64_t _422;
  uint64_t _423;
  void* _424;
  uint8_t _425;
  uint32_t _426;
  uint64_t _427;
  uint64_t _428;
  uint32_t _429;
  uint64_t _430;
  uint32_t _431;
  uint32_t _431__PHI_TEMPORARY;
  uint64_t _432;
  uint64_t _433;
  uint64_t _434;
  uint64_t _435;
  uint64_t _436;
  uint64_t _437;
  uint64_t _438;
  void* _439;
  uint64_t _440;
  uint64_t _441;
  void* _442;
  void* _443;
  uint64_t _444;
  void* _445;
  uint64_t _446;
  void* _447;
  uint8_t _448;
  uint8_t _449;
  uint8_t _450;
  uint32_t _451;
  uint64_t _452;
  uint64_t _452__PHI_TEMPORARY;
  uint32_t _453;
  uint32_t _453__PHI_TEMPORARY;
  uint64_t _454;
  uint64_t _455;
  void* _456;
  uint8_t _457;
  uint32_t _458;
  uint64_t _459;
  uint64_t _460;
  uint32_t _461;
  uint64_t _462;
  bool _463;
  uint64_t _464;
  uint64_t _465;
  uint64_t _466;
  uint64_t _466__PHI_TEMPORARY;
  uint16_t _467;
  uint64_t _468;
  void* _469;
  void* _470;
  uint64_t _471;
  void* _472;
  uint64_t _473;
  void* _474;
  uint8_t _475;
  uint8_t _476;
  uint8_t _477;
  uint32_t _478;
  uint64_t _479;
  uint64_t _479__PHI_TEMPORARY;
  uint32_t _480;
  uint32_t _480__PHI_TEMPORARY;
  uint64_t _481;
  uint64_t _482;
  void* _483;
  uint8_t _484;
  uint32_t _485;
  uint64_t _486;
  uint64_t _487;
  uint32_t _488;
  uint64_t _489;
  uint32_t _490;
  uint32_t _490__PHI_TEMPORARY;
  uint64_t _491;
  uint64_t _492;
  uint64_t _493;
  uint64_t _494;
  void* _495;
  uint64_t _496;
  void* _497;
  uint64_t _498;
  void* _499;
  uint64_t _500;
  void* _501;
  uint64_t _502;
  void* _503;
  void* _504;
  uint64_t _505;
  uint64_t _506;
  uint64_t _507;
  uint64_t _507__PHI_TEMPORARY;
  void* _508;
  void* _509;
  uint64_t _510;
  void* _511;
  uint64_t _512;
  void* _513;
  uint8_t _514;
  uint8_t _515;
  uint8_t _516;
  uint32_t _517;
  uint64_t _518;
  uint64_t _518__PHI_TEMPORARY;
  uint32_t _519;
  uint32_t _519__PHI_TEMPORARY;
  uint64_t _520;
  uint64_t _521;
  void* _522;
  uint8_t _523;
  uint32_t _524;
  uint64_t _525;
  uint64_t _526;
  uint32_t _527;
  uint64_t _528;
  uint32_t _529;
  uint32_t _529__PHI_TEMPORARY;
  uint64_t _530;
  uint64_t _531;
  uint64_t _532;
  uint64_t _533;
  void* _534;
  void* _535;
  uint64_t _536;
  void* _537;
  uint64_t _538;
  void* _539;
  uint64_t _540;
  void* _541;
  uint64_t _542;
  void* _543;
  void* _544;
  uint64_t _545;
  void* _546;
  uint64_t _547;
  void* _548;
  uint8_t _549;
  uint8_t _550;
  uint8_t _551;
  uint32_t _552;
  uint64_t _553;
  uint64_t _553__PHI_TEMPORARY;
  uint32_t _554;
  uint32_t _554__PHI_TEMPORARY;
  uint64_t _555;
  uint64_t _556;
  void* _557;
  uint8_t _558;
  uint32_t _559;
  uint64_t _560;
  uint64_t _561;
  uint32_t _562;
  uint64_t _563;
  uint32_t _564;
  uint32_t _564__PHI_TEMPORARY;
  uint64_t _565;
  uint64_t _566;
  uint64_t _567;
  uint64_t _568;
  uint64_t _569;
  uint64_t _570;
  uint64_t _571;
  void* _572;
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
  bool _605;
  bool _605__PHI_TEMPORARY;
  uint64_t _606;
  uint64_t _606__PHI_TEMPORARY;
  uint64_t _607;
  uint64_t _607__PHI_TEMPORARY;
  uint64_t _608;
  uint64_t _609;
  uint32_t _610;
  bool _611;
  uint64_t _612;
  uint32_t _613;
  uint32_t _614;
  uint32_t _614__PHI_TEMPORARY;
  void* _615;
  void* _616;
  uint64_t _617;
  void* _618;
  uint64_t _619;
  void* _620;
  uint8_t _621;
  uint8_t _622;
  uint8_t _623;
  uint32_t _624;
  uint64_t _625;
  uint64_t _625__PHI_TEMPORARY;
  uint32_t _626;
  uint32_t _626__PHI_TEMPORARY;
  uint64_t _627;
  uint64_t _628;
  void* _629;
  uint8_t _630;
  uint32_t _631;
  uint64_t _632;
  uint64_t _633;
  uint32_t _634;
  uint64_t _635;
  uint32_t _636;
  uint32_t _636__PHI_TEMPORARY;
  uint64_t _637;
  uint64_t _638;
  uint64_t _639;
  uint64_t _640;
  void* _641;
  void* _642;
  uint64_t _643;
  void* _644;
  uint64_t _645;
  void* _646;
  uint64_t _647;
  void* _648;
  uint64_t _649;
  uint64_t _650;
  uint64_t _651;
  uint64_t _652;
  void* _653;
  void* _654;
  uint64_t _655;
  void* _656;
  uint64_t _657;
  void* _658;
  uint8_t _659;
  uint8_t _660;
  uint8_t _661;
  uint32_t _662;
  uint64_t _663;
  uint64_t _663__PHI_TEMPORARY;
  uint32_t _664;
  uint32_t _664__PHI_TEMPORARY;
  uint64_t _665;
  uint64_t _666;
  void* _667;
  uint8_t _668;
  uint32_t _669;
  uint64_t _670;
  uint64_t _671;
  uint32_t _672;
  uint64_t _673;
  uint32_t _674;
  uint32_t _674__PHI_TEMPORARY;
  uint64_t _675;
  uint64_t _676;
  uint64_t _677;
  uint64_t _678;
  uint64_t _679;
  uint64_t _680;
  uint64_t _681;
  void* _682;
  uint64_t _683;
  void* _684;
  void* _685;
  uint64_t _686;
  void* _687;
  uint64_t _688;
  void* _689;
  uint8_t _690;
  uint8_t _691;
  uint8_t _692;
  uint32_t _693;
  uint64_t _694;
  uint64_t _694__PHI_TEMPORARY;
  uint32_t _695;
  uint32_t _695__PHI_TEMPORARY;
  uint64_t _696;
  uint64_t _697;
  void* _698;
  uint8_t _699;
  uint32_t _700;
  uint64_t _701;
  uint64_t _702;
  uint32_t _703;
  uint64_t _704;
  uint32_t _705;
  uint32_t _705__PHI_TEMPORARY;
  uint64_t _706;
  uint64_t _707;
  uint64_t _708;
  uint64_t _709;
  void* _710;
  void* _711;
  uint64_t _712;
  void* _713;
  uint64_t _714;
  void* _715;
  uint64_t _716;
  void* _717;
  uint64_t _718;
  uint64_t _719;
  uint32_t _720;
  uint64_t _721;
  uint64_t _721__PHI_TEMPORARY;
  uint64_t _722;
  uint64_t _723;
  void* _724;
  void* _725;
  uint64_t _726;
  void* _727;
  uint64_t _728;
  void* _729;
  uint8_t _730;
  uint8_t _731;
  uint8_t _732;
  uint32_t _733;
  uint64_t _734;
  uint64_t _734__PHI_TEMPORARY;
  uint32_t _735;
  uint32_t _735__PHI_TEMPORARY;
  uint64_t _736;
  uint64_t _737;
  void* _738;
  uint8_t _739;
  uint32_t _740;
  uint64_t _741;
  uint64_t _742;
  uint32_t _743;
  uint64_t _744;
  uint32_t _745;
  uint32_t _745__PHI_TEMPORARY;
  uint64_t _746;
  uint64_t _747;
  uint64_t _748;
  uint64_t _749;
  uint64_t _750;
  uint64_t _751;
  uint64_t _752;
  void* _753;
  uint64_t _754;
  uint64_t _755;
  void* _756;
  void* _757;
  uint64_t _758;
  void* _759;
  uint64_t _760;
  void* _761;
  uint8_t _762;
  uint8_t _763;
  uint8_t _764;
  uint32_t _765;
  uint64_t _766;
  uint64_t _766__PHI_TEMPORARY;
  uint32_t _767;
  uint32_t _767__PHI_TEMPORARY;
  uint64_t _768;
  uint64_t _769;
  void* _770;
  uint8_t _771;
  uint32_t _772;
  uint64_t _773;
  uint64_t _774;
  uint32_t _775;
  uint64_t _776;
  uint32_t _777;
  uint32_t _777__PHI_TEMPORARY;
  uint64_t _778;
  uint64_t _779;
  uint64_t _780;
  uint64_t _781;
  uint64_t _782;
  uint64_t _783;
  uint64_t _784;
  void* _785;
  uint64_t _786;
  uint64_t _787;
  uint64_t _788;
  uint64_t _789;
  uint64_t _790;
  uint64_t _791;
  uint64_t _791__PHI_TEMPORARY;
  uint64_t _792;
  uint64_t _792__PHI_TEMPORARY;
  uint32_t _793;
  uint32_t _794;
  uint32_t _795;
  bool _796;
  bool _797;
  bool _797__PHI_TEMPORARY;
  uint64_t _798;
  uint64_t _798__PHI_TEMPORARY;
  uint64_t _799;
  uint64_t _799__PHI_TEMPORARY;
  uint64_t _800;
  uint64_t _801;
  uint32_t _802;
  bool _803;
  void* _804;
  void* _805;
  uint64_t _806;
  void* _807;
  uint64_t _808;
  void* _809;
  uint8_t _810;
  uint8_t _811;
  uint8_t _812;
  uint32_t _813;
  uint64_t _814;
  uint64_t _814__PHI_TEMPORARY;
  uint32_t _815;
  uint32_t _815__PHI_TEMPORARY;
  uint64_t _816;
  uint64_t _817;
  void* _818;
  uint8_t _819;
  uint32_t _820;
  uint64_t _821;
  uint64_t _822;
  uint32_t _823;
  uint64_t _824;
  uint32_t _825;
  uint32_t _825__PHI_TEMPORARY;
  uint64_t _826;
  uint64_t _827;
  uint64_t _828;
  uint64_t _829;
  void* _830;
  void* _831;
  uint64_t _832;
  void* _833;
  uint64_t _834;
  void* _835;
  uint64_t _836;
  void* _837;
  uint64_t _838;
  uint64_t _839;
  uint64_t _840;
  uint64_t _841;
  void* _842;
  void* _843;
  uint64_t _844;
  void* _845;
  uint64_t _846;
  void* _847;
  uint8_t _848;
  uint8_t _849;
  uint8_t _850;
  uint32_t _851;
  uint64_t _852;
  uint64_t _852__PHI_TEMPORARY;
  uint32_t _853;
  uint32_t _853__PHI_TEMPORARY;
  uint64_t _854;
  uint64_t _855;
  void* _856;
  uint8_t _857;
  uint32_t _858;
  uint64_t _859;
  uint64_t _860;
  uint32_t _861;
  uint64_t _862;
  uint32_t _863;
  uint32_t _863__PHI_TEMPORARY;
  uint64_t _864;
  uint64_t _865;
  uint64_t _866;
  uint64_t _867;
  uint64_t _868;
  uint64_t _869;
  uint64_t _870;
  void* _871;
  uint64_t _872;
  uint64_t _873;
  uint64_t _874;
  uint64_t _875;
  uint64_t _875__PHI_TEMPORARY;
  uint64_t _876;
  void* _877;
  void* _878;
  uint64_t _879;
  void* _880;
  uint64_t _881;
  void* _882;
  uint8_t _883;
  uint8_t _884;
  uint8_t _885;
  uint32_t _886;
  uint64_t _887;
  uint64_t _887__PHI_TEMPORARY;
  uint32_t _888;
  uint32_t _888__PHI_TEMPORARY;
  uint64_t _889;
  uint64_t _890;
  void* _891;
  uint8_t _892;
  uint32_t _893;
  uint64_t _894;
  uint64_t _895;
  uint32_t _896;
  uint64_t _897;
  uint32_t _898;
  uint32_t _898__PHI_TEMPORARY;
  uint64_t _899;
  uint64_t _900;
  uint64_t _901;
  uint64_t _902;
  void* _903;
  void* _904;
  uint64_t _905;
  void* _906;
  uint64_t _907;
  void* _908;
  uint64_t _909;
  void* _910;
  uint64_t _911;
  uint64_t _912;
  uint32_t _913;
  void* _914;
  void* _915;
  uint64_t _916;
  void* _917;
  uint64_t _918;
  void* _919;
  uint8_t _920;
  uint8_t _921;
  uint8_t _922;
  uint32_t _923;
  uint64_t _924;
  uint64_t _924__PHI_TEMPORARY;
  uint32_t _925;
  uint32_t _925__PHI_TEMPORARY;
  uint64_t _926;
  uint64_t _927;
  void* _928;
  uint8_t _929;
  uint32_t _930;
  uint64_t _931;
  uint64_t _932;
  uint32_t _933;
  uint64_t _934;
  uint32_t _935;
  uint32_t _935__PHI_TEMPORARY;
  uint64_t _936;
  uint64_t _937;
  uint64_t _938;
  uint64_t _939;
  uint64_t _940;
  uint64_t _941;
  uint64_t _942;
  void* _943;
  uint64_t _944;
  uint64_t _945;
  uint32_t _946;
  uint32_t _947;
  uint32_t _947__PHI_TEMPORARY;
  uint64_t _948;
  uint64_t _949;
  uint64_t _950;
  uint64_t _951;
  uint64_t _952;
  uint64_t _952__PHI_TEMPORARY;
  uint64_t _953;
  uint64_t _953__PHI_TEMPORARY;
  uint32_t _954;
  uint32_t _955;
  uint32_t _956;
  bool _957;
  bool _958;
  bool _958__PHI_TEMPORARY;
  uint64_t _959;
  uint64_t _959__PHI_TEMPORARY;
  uint64_t _960;
  uint64_t _960__PHI_TEMPORARY;
  struct l_array_1_void_KC_ _961;
  void* _962;
  void* _963;
  uint16_t _964;
  uint16_t _964__PHI_TEMPORARY;

  _94 = memset((&_93), 0, 24);
  *((uint64_t*)&_93) = 4;
  _95 = *(void**)_91;
  *(void**)(((&((uint8_t*)(&_93))[((int64_t)8)]))) = _95;
  *(void**)_91 = (&_93);
  _113 = ((&((uint8_t*)_92)[((int64_t)24)]));
  _114 = *(void**)_113;
  _115 = *(uint64_t*)(((&((uint8_t*)_114)[((int64_t)16)])));
  if ((_115 == UINT64_C(0))) {
    goto _965;
  } else {
    goto _966;
  }

_965:
  *((uint64_t*)&_112) = _115;
  *(void**)(((&((uint8_t*)(&_93))[((int64_t)16)]))) = _114;
  julia_throw_boundserror_4642(_91, _114, (&_112));
  __builtin_unreachable();

_966:
  _116 = *(void**)_114;
  _117 = ((&((uint8_t*)_116)[((int64_t)(_115 << 4))]));
  _118 = *(uint8_t*)(((&((uint8_t*)_117)[((int64_t)-16)])));
  _119 = *(uint8_t*)(((&((uint8_t*)_117)[((int64_t)-15)])));
  _120 = *(uint32_t*)(((&((uint8_t*)_117)[((int64_t)-12)])));
  _121 = *(uint64_t*)(((&((uint8_t*)_117)[((int64_t)-8)])));
  if ((((int64_t)_121) < ((int64_t)UINT64_C(1)))) {
    goto _967;
  } else {
    goto _968;
  }

_968:
  _122 = *(void**)_92;
  _123 = ((&((uint8_t*)_122)[((int64_t)16)]));
  _124 = *(uint64_t*)_123;
  _125 = ((&((uint8_t*)_122)[((int64_t)8)]));
  _126 = *(uint64_t*)_125;
  if ((((int64_t)_126) > ((int64_t)_124))) {
    goto _969;
  } else {
    _143__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _970;
  }

_969:
  _127 = *(void**)_122;
  _128 = *(uint8_t*)(((&((uint8_t*)_127)[((int64_t)_124)])));
  *(uint64_t*)_123 = (llvm_add_u64(_124, 1));
  _129 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_128)), 0);
  _130 = llvm_sub_u8(32, (llvm_shl_u8(_129, 3)));
  _131 = (((uint32_t)(uint8_t)_128)) << 24;
  if ((((uint8_t)_130) > ((uint8_t)((uint8_t)16)))) {
    _143__PHI_TEMPORARY = _131;   /* for PHI node */
    goto _970;
  } else {
    _132__PHI_TEMPORARY = 16;   /* for PHI node */
    _133__PHI_TEMPORARY = _131;   /* for PHI node */
    goto _971;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_971:
  _132 = _132__PHI_TEMPORARY;
  _133 = _133__PHI_TEMPORARY;
  if (((((int64_t)_132) < ((int64_t)UINT64_C(0))) | (((uint64_t)_132) < ((uint64_t)(((uint64_t)(uint8_t)_130)))))) {
    _143__PHI_TEMPORARY = _133;   /* for PHI node */
    goto _970;
  } else {
    goto _972;
  }

_972:
  _134 = *(uint64_t*)_123;
  _135 = *(uint64_t*)_125;
  if ((((int64_t)_135) > ((int64_t)_134))) {
    goto _973;
  } else {
    _143__PHI_TEMPORARY = _133;   /* for PHI node */
    goto _970;
  }

_973:
  _136 = *(void**)_122;
  _137 = *(uint8_t*)(((&((uint8_t*)_136)[((int64_t)_134)])));
  if ((((int8_t)_137) > ((int8_t)((uint8_t)-65)))) {
    _143__PHI_TEMPORARY = _133;   /* for PHI node */
    goto _970;
  } else {
    goto _974;
  }

_974:
  _138 = llvm_select_u32((((int64_t)_134) < ((int64_t)_135)), (((uint32_t)(uint8_t)_137)), 0);
  _139 = *(uint64_t*)_123;
  *(uint64_t*)_123 = (llvm_add_u64(_139, 1));
  _140 = llvm_neg_u64(_132);
  _141 = _133 | (llvm_select_u32((((int64_t)_132) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_140) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_138, (((uint32_t)_140)))))), (llvm_select_u32((((uint64_t)_132) > ((uint64_t)UINT64_C(31))), 0, (_138 << (((uint32_t)_132)))))));
  _142 = llvm_add_u64(_132, -8);
  _132__PHI_TEMPORARY = _142;   /* for PHI node */
  _133__PHI_TEMPORARY = _141;   /* for PHI node */
  goto _971;

  } while (1); /* end of syntactic loop '' */
_970:
  _143 = _143__PHI_TEMPORARY;
  _144 = ((&((uint8_t*)_92)[((int64_t)32)]));
  _145 = *(uint64_t*)_144;
  _146 = ((&((uint8_t*)_92)[((int64_t)40)]));
  _147 = *(uint64_t*)_146;
  _148 = jsyn_cbe_fshl_i64(_147, _145, 32);
  _149 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_143)), _147, 32);
  *(uint64_t*)_144 = _148;
  *(uint64_t*)_146 = _149;
  _150 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _151 = *(uint64_t*)_150;
  _152 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _153 = *(uint64_t*)_152;
  _154 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _155 = *(uint64_t*)_154;
  _156 = *(void**)_92;
  _157 = *(uint64_t*)(((&((uint8_t*)_156)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_92)[((int64_t)48)]))) = _151;
  *(uint64_t*)_150 = _153;
  *(uint64_t*)_152 = _155;
  *(uint64_t*)_154 = _157;
  _158 = *(uint64_t*)_144;
  _159 = ((uint32_t)_158);
  switch (_159) {
  default:
    goto _975;
  case 671088640u:
    goto _976;
  case 687865856u:
    goto _977;
  }

_976:
  _160 = *(void**)_113;
  _161 = *(uint64_t*)(((&((uint8_t*)_160)[((int64_t)16)])));
  if ((_161 == UINT64_C(0))) {
    goto _978;
  } else {
    goto _979;
  }

_978:
  *((uint64_t*)&_97) = _161;
  *(void**)(((&((uint8_t*)(&_93))[((int64_t)16)]))) = _160;
  julia_throw_boundserror_4642(_91, _160, (&_97));
  __builtin_unreachable();

_979:
  _162 = *(void**)_160;
  _163 = ((&((uint8_t*)_162)[((int64_t)(_161 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_163)[((int64_t)-16)]))) = _118;
  *(uint8_t*)(((&((uint8_t*)_163)[((int64_t)-15)]))) = _119;
  *(uint32_t*)(((&((uint8_t*)_163)[((int64_t)-12)]))) = _120;
  *(uint64_t*)(((&((uint8_t*)_163)[((int64_t)-8)]))) = (llvm_add_u64(_121, 1));
  julia_emit_4484((&_96), _91, _92, 60, 1);
  _164__PHI_TEMPORARY = (&_96);   /* for PHI node */
  goto _980;

_980:
  _164 = _164__PHI_TEMPORARY;
  _165 = memcpy(_90, _164, 32);
  _166 = *(void**)(((&((uint8_t*)(&_93))[((int64_t)8)])));
  *(void**)_91 = _166;
  return;
_977:
  _167 = *(void**)_113;
  _168 = *(uint64_t*)(((&((uint8_t*)_167)[((int64_t)16)])));
  if ((_168 == UINT64_C(0))) {
    goto _981;
  } else {
    goto _982;
  }

_981:
  *((uint64_t*)&_99) = _168;
  *(void**)(((&((uint8_t*)(&_93))[((int64_t)16)]))) = _167;
  julia_throw_boundserror_4642(_91, _167, (&_99));
  __builtin_unreachable();

_982:
  _169 = *(void**)_167;
  _170 = ((&((uint8_t*)_169)[((int64_t)(_168 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_170)[((int64_t)-16)]))) = _118;
  *(uint8_t*)(((&((uint8_t*)_170)[((int64_t)-15)]))) = _119;
  *(uint32_t*)(((&((uint8_t*)_170)[((int64_t)-12)]))) = _120;
  *(uint64_t*)(((&((uint8_t*)_170)[((int64_t)-8)]))) = (llvm_add_u64(_121, -1));
  julia_emit_4484((&_98), _91, _92, 61, 1);
  _164__PHI_TEMPORARY = (&_98);   /* for PHI node */
  goto _980;

_975:
  julia__next_token_4450((&_100), _91, _92, _159);
  _164__PHI_TEMPORARY = (&_100);   /* for PHI node */
  goto _980;

_967:
  _171 = ((&((uint8_t*)_92)[((int64_t)32)]));
  _172 = *(uint64_t*)_171;
  _173 = ((&((uint8_t*)_92)[((int64_t)40)]));
  _174 = llvm_lshr_u64(_172, 32);
  _175 = ((uint32_t)_174);
  _176 = ((&((uint8_t*)_92)[((int64_t)16)]));
  _177 = *(uint16_t*)_176;
  switch (_177) {
  default:
    _305__PHI_TEMPORARY = _175;   /* for PHI node */
    goto _983;
  case ((uint16_t)534):
    goto _984;
  case ((uint16_t)3):
    goto _985;
  }

_984:
  _178 = *(uint64_t*)_171;
  _179 = llvm_lshr_u64(_178, 32);
  _180 = ((uint32_t)_179);
  switch (_180) {
  default:
    goto _986;
  case 671088640u:
    goto _987;
  case 4294967295u:
    _305__PHI_TEMPORARY = _180;   /* for PHI node */
    goto _983;
  }

_987:
  _181 = *(void**)_92;
  _182 = ((&((uint8_t*)_181)[((int64_t)16)]));
  _183 = *(uint64_t*)_182;
  _184 = ((&((uint8_t*)_181)[((int64_t)8)]));
  _185 = *(uint64_t*)_184;
  if ((((int64_t)_185) > ((int64_t)_183))) {
    goto _988;
  } else {
    _202__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _989;
  }

_988:
  _186 = *(void**)_181;
  _187 = *(uint8_t*)(((&((uint8_t*)_186)[((int64_t)_183)])));
  *(uint64_t*)_182 = (llvm_add_u64(_183, 1));
  _188 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_187)), 0);
  _189 = llvm_sub_u8(32, (llvm_shl_u8(_188, 3)));
  _190 = (((uint32_t)(uint8_t)_187)) << 24;
  if ((((uint8_t)_189) > ((uint8_t)((uint8_t)16)))) {
    _202__PHI_TEMPORARY = _190;   /* for PHI node */
    goto _989;
  } else {
    _191__PHI_TEMPORARY = 16;   /* for PHI node */
    _192__PHI_TEMPORARY = _190;   /* for PHI node */
    goto _990;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_990:
  _191 = _191__PHI_TEMPORARY;
  _192 = _192__PHI_TEMPORARY;
  if (((((int64_t)_191) < ((int64_t)UINT64_C(0))) | (((uint64_t)_191) < ((uint64_t)(((uint64_t)(uint8_t)_189)))))) {
    _202__PHI_TEMPORARY = _192;   /* for PHI node */
    goto _989;
  } else {
    goto _991;
  }

_991:
  _193 = *(uint64_t*)_182;
  _194 = *(uint64_t*)_184;
  if ((((int64_t)_194) > ((int64_t)_193))) {
    goto _992;
  } else {
    _202__PHI_TEMPORARY = _192;   /* for PHI node */
    goto _989;
  }

_992:
  _195 = *(void**)_181;
  _196 = *(uint8_t*)(((&((uint8_t*)_195)[((int64_t)_193)])));
  if ((((int8_t)_196) > ((int8_t)((uint8_t)-65)))) {
    _202__PHI_TEMPORARY = _192;   /* for PHI node */
    goto _989;
  } else {
    goto _993;
  }

_993:
  _197 = llvm_select_u32((((int64_t)_193) < ((int64_t)_194)), (((uint32_t)(uint8_t)_196)), 0);
  _198 = *(uint64_t*)_182;
  *(uint64_t*)_182 = (llvm_add_u64(_198, 1));
  _199 = llvm_neg_u64(_191);
  _200 = _192 | (llvm_select_u32((((int64_t)_191) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_199) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_197, (((uint32_t)_199)))))), (llvm_select_u32((((uint64_t)_191) > ((uint64_t)UINT64_C(31))), 0, (_197 << (((uint32_t)_191)))))));
  _201 = llvm_add_u64(_191, -8);
  _191__PHI_TEMPORARY = _201;   /* for PHI node */
  _192__PHI_TEMPORARY = _200;   /* for PHI node */
  goto _990;

  } while (1); /* end of syntactic loop '' */
_989:
  _202 = _202__PHI_TEMPORARY;
  _203 = *(uint64_t*)_171;
  _204 = *(uint64_t*)_173;
  _205 = jsyn_cbe_fshl_i64(_204, _203, 32);
  _206 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_202)), _204, 32);
  *(uint64_t*)_171 = _205;
  *(uint64_t*)_173 = _206;
  _207 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _208 = *(uint64_t*)_207;
  _209 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _210 = *(uint64_t*)_209;
  _211 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _212 = *(uint64_t*)_211;
  _213 = *(void**)_92;
  _214 = *(uint64_t*)(((&((uint8_t*)_213)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_92)[((int64_t)48)]))) = _208;
  *(uint64_t*)_207 = _210;
  *(uint64_t*)_209 = _212;
  *(uint64_t*)_211 = _214;
  _215 = *(void**)_113;
  _216 = *(uint64_t*)(((&((uint8_t*)_215)[((int64_t)16)])));
  if ((_216 == UINT64_C(0))) {
    goto _994;
  } else {
    goto _995;
  }

_994:
  *((uint64_t*)&_102) = _216;
  *(void**)(((&((uint8_t*)(&_93))[((int64_t)16)]))) = _215;
  julia_throw_boundserror_4642(_91, _215, (&_102));
  __builtin_unreachable();

_995:
  _217 = *(void**)_215;
  _218 = ((&((uint8_t*)_217)[((int64_t)(_216 << 4))]));
  *(uint8_t*)(((&((uint8_t*)_218)[((int64_t)-16)]))) = _118;
  *(uint8_t*)(((&((uint8_t*)_218)[((int64_t)-15)]))) = _119;
  *(uint32_t*)(((&((uint8_t*)_218)[((int64_t)-12)]))) = _120;
  *(uint64_t*)(((&((uint8_t*)_218)[((int64_t)-8)]))) = (llvm_add_u64(_121, 1));
  julia_emit_4484((&_101), _91, _92, 60, 1);
  _164__PHI_TEMPORARY = (&_101);   /* for PHI node */
  goto _980;

_986:
  _219 = llvm_OC_ctlz_OC_i32((_180 ^ -1), 0);
  _220 = ((uint64_t)(uint32_t)_219);
  _221 = llvm_OC_cttz_OC_i32(_180, 0);
  _222 = _221 & 56;
  _223 = ((uint64_t)(uint32_t)_222);
  _224 = llvm_select_bool((((uint32_t)_221) < ((uint32_t)32u)), ((llvm_lshr_u32(((_180 & 12632256) ^ 8421504), _222)) != 0u), 0);
  _225 = (((_180 & -33554432) == 3221225472u) | ((_180 & -2097152) == 3766484992u)) | ((_180 & -1048576) == 4034920448u);
  if (((((((_219 == 1u) | (((uint64_t)(llvm_add_u64((_220 << 3), _223))) > ((uint64_t)UINT64_C(32)))) | ((((uint64_t)_178) > ((uint64_t)UINT64_C(17122614319301787647))) & (((uint32_t)(llvm_add_u32(_180, 191905856))) < ((uint32_t)4193304640u)))) | (_179 == UINT64_C(4036993714))) | _224) | _225)) {
    _305__PHI_TEMPORARY = _180;   /* for PHI node */
    goto _983;
  } else {
    goto _996;
  }

_996:
  _226 = llvm_lshr_u32(_180, 24);
  if ((((int64_t)_178) < ((int64_t)UINT64_C(0)))) {
    goto _997;
  } else {
    _229__PHI_TEMPORARY = _226;   /* for PHI node */
    goto _998;
  }

_997:
  if ((((_219 == 1u) | (((uint64_t)(llvm_add_u64((_220 << 3), _223))) > ((uint64_t)UINT64_C(32)))) | (_224 | _225))) {
    goto _999;
  } else {
    goto _1000;
  }

_999:
  julia_throw_invalid_char_2796(_91, _180);
  __builtin_unreachable();

_1000:
  _227 = llvm_select_u32((((uint32_t)_221) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _219)) & _180), _222)), 0);
  _228 = (((_227 & 127) | ((llvm_lshr_u32(_227, 2)) & 8128)) | ((llvm_lshr_u32(_227, 4)) & 520192)) | ((llvm_lshr_u32(_227, 6)) & 33292288);
  _229__PHI_TEMPORARY = _228;   /* for PHI node */
  goto _998;

_998:
  _229 = _229__PHI_TEMPORARY;
  _230 = jsk_jl_id_start_char(_229);
  if ((_230 == 0u)) {
    _305__PHI_TEMPORARY = _180;   /* for PHI node */
    goto _983;
  } else {
    goto _1001;
  }

_1001:
  _231 = *(void**)_92;
  _232 = ((&((uint8_t*)_231)[((int64_t)16)]));
  _233 = *(uint64_t*)_232;
  _234 = ((&((uint8_t*)_231)[((int64_t)8)]));
  _235 = *(uint64_t*)_234;
  if ((((int64_t)_235) > ((int64_t)_233))) {
    goto _1002;
  } else {
    _252__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1003;
  }

_1002:
  _236 = *(void**)_231;
  _237 = *(uint8_t*)(((&((uint8_t*)_236)[((int64_t)_233)])));
  *(uint64_t*)_232 = (llvm_add_u64(_233, 1));
  _238 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_237)), 0);
  _239 = llvm_sub_u8(32, (llvm_shl_u8(_238, 3)));
  _240 = (((uint32_t)(uint8_t)_237)) << 24;
  if ((((uint8_t)_239) > ((uint8_t)((uint8_t)16)))) {
    _252__PHI_TEMPORARY = _240;   /* for PHI node */
    goto _1003;
  } else {
    _241__PHI_TEMPORARY = 16;   /* for PHI node */
    _242__PHI_TEMPORARY = _240;   /* for PHI node */
    goto _1004;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1004:
  _241 = _241__PHI_TEMPORARY;
  _242 = _242__PHI_TEMPORARY;
  if (((((int64_t)_241) < ((int64_t)UINT64_C(0))) | (((uint64_t)_241) < ((uint64_t)(((uint64_t)(uint8_t)_239)))))) {
    _252__PHI_TEMPORARY = _242;   /* for PHI node */
    goto _1003;
  } else {
    goto _1005;
  }

_1005:
  _243 = *(uint64_t*)_232;
  _244 = *(uint64_t*)_234;
  if ((((int64_t)_244) > ((int64_t)_243))) {
    goto _1006;
  } else {
    _252__PHI_TEMPORARY = _242;   /* for PHI node */
    goto _1003;
  }

_1006:
  _245 = *(void**)_231;
  _246 = *(uint8_t*)(((&((uint8_t*)_245)[((int64_t)_243)])));
  if ((((int8_t)_246) > ((int8_t)((uint8_t)-65)))) {
    _252__PHI_TEMPORARY = _242;   /* for PHI node */
    goto _1003;
  } else {
    goto _1007;
  }

_1007:
  _247 = llvm_select_u32((((int64_t)_243) < ((int64_t)_244)), (((uint32_t)(uint8_t)_246)), 0);
  _248 = *(uint64_t*)_232;
  *(uint64_t*)_232 = (llvm_add_u64(_248, 1));
  _249 = llvm_neg_u64(_241);
  _250 = _242 | (llvm_select_u32((((int64_t)_241) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_249) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_247, (((uint32_t)_249)))))), (llvm_select_u32((((uint64_t)_241) > ((uint64_t)UINT64_C(31))), 0, (_247 << (((uint32_t)_241)))))));
  _251 = llvm_add_u64(_241, -8);
  _241__PHI_TEMPORARY = _251;   /* for PHI node */
  _242__PHI_TEMPORARY = _250;   /* for PHI node */
  goto _1004;

  } while (1); /* end of syntactic loop '' */
_1003:
  _252 = _252__PHI_TEMPORARY;
  _253 = *(uint64_t*)_171;
  _254 = *(uint64_t*)_173;
  _255 = jsyn_cbe_fshl_i64(_254, _253, 32);
  _256 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_252)), _254, 32);
  *(uint64_t*)_171 = _255;
  *(uint64_t*)_173 = _256;
  _257 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _258 = *(uint64_t*)_257;
  _259 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _260 = *(uint64_t*)_259;
  _261 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _262 = *(uint64_t*)_261;
  _263 = *(void**)_92;
  _264 = *(uint64_t*)(((&((uint8_t*)_263)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_92)[((int64_t)48)]))) = _258;
  *(uint64_t*)_257 = _260;
  *(uint64_t*)_259 = _262;
  *(uint64_t*)_261 = _264;
  _265 = *(uint64_t*)_171;
  julia_lex_identifier_4521((&_103), _91, _92, (((uint32_t)_265)));
  _164__PHI_TEMPORARY = (&_103);   /* for PHI node */
  goto _980;

_985:
  if ((_174 == UINT64_C(4294967295))) {
    _305__PHI_TEMPORARY = _175;   /* for PHI node */
    goto _983;
  } else {
    goto _1008;
  }

_1008:
  _266 = julia_is_operator_start_char_4518(_91, _175);
  _267 = ((bool)_266&1u);
  if ((((bool)_266&1u))) {
    _270__PHI_TEMPORARY = _267;   /* for PHI node */
    goto _1009;
  } else {
    goto _1010;
  }

_1010:
  _268 = julia_is_never_id_char_4645(_91, _175);
  _269 = ((bool)_268&1u);
  _270__PHI_TEMPORARY = _269;   /* for PHI node */
  goto _1009;

_1009:
  _270 = _270__PHI_TEMPORARY;
  if (_270) {
    _305__PHI_TEMPORARY = _175;   /* for PHI node */
    goto _983;
  } else {
    goto _1011;
  }

_1011:
  _271 = *(void**)_92;
  _272 = ((&((uint8_t*)_271)[((int64_t)16)]));
  _273 = *(uint64_t*)_272;
  _274 = ((&((uint8_t*)_271)[((int64_t)8)]));
  _275 = *(uint64_t*)_274;
  if ((((int64_t)_275) > ((int64_t)_273))) {
    goto _1012;
  } else {
    _292__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1013;
  }

_1012:
  _276 = *(void**)_271;
  _277 = *(uint8_t*)(((&((uint8_t*)_276)[((int64_t)_273)])));
  *(uint64_t*)_272 = (llvm_add_u64(_273, 1));
  _278 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_277)), 0);
  _279 = llvm_sub_u8(32, (llvm_shl_u8(_278, 3)));
  _280 = (((uint32_t)(uint8_t)_277)) << 24;
  if ((((uint8_t)_279) > ((uint8_t)((uint8_t)16)))) {
    _292__PHI_TEMPORARY = _280;   /* for PHI node */
    goto _1013;
  } else {
    _281__PHI_TEMPORARY = 16;   /* for PHI node */
    _282__PHI_TEMPORARY = _280;   /* for PHI node */
    goto _1014;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1014:
  _281 = _281__PHI_TEMPORARY;
  _282 = _282__PHI_TEMPORARY;
  if (((((int64_t)_281) < ((int64_t)UINT64_C(0))) | (((uint64_t)_281) < ((uint64_t)(((uint64_t)(uint8_t)_279)))))) {
    _292__PHI_TEMPORARY = _282;   /* for PHI node */
    goto _1013;
  } else {
    goto _1015;
  }

_1015:
  _283 = *(uint64_t*)_272;
  _284 = *(uint64_t*)_274;
  if ((((int64_t)_284) > ((int64_t)_283))) {
    goto _1016;
  } else {
    _292__PHI_TEMPORARY = _282;   /* for PHI node */
    goto _1013;
  }

_1016:
  _285 = *(void**)_271;
  _286 = *(uint8_t*)(((&((uint8_t*)_285)[((int64_t)_283)])));
  if ((((int8_t)_286) > ((int8_t)((uint8_t)-65)))) {
    _292__PHI_TEMPORARY = _282;   /* for PHI node */
    goto _1013;
  } else {
    goto _1017;
  }

_1017:
  _287 = llvm_select_u32((((int64_t)_283) < ((int64_t)_284)), (((uint32_t)(uint8_t)_286)), 0);
  _288 = *(uint64_t*)_272;
  *(uint64_t*)_272 = (llvm_add_u64(_288, 1));
  _289 = llvm_neg_u64(_281);
  _290 = _282 | (llvm_select_u32((((int64_t)_281) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_289) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_287, (((uint32_t)_289)))))), (llvm_select_u32((((uint64_t)_281) > ((uint64_t)UINT64_C(31))), 0, (_287 << (((uint32_t)_281)))))));
  _291 = llvm_add_u64(_281, -8);
  _281__PHI_TEMPORARY = _291;   /* for PHI node */
  _282__PHI_TEMPORARY = _290;   /* for PHI node */
  goto _1014;

  } while (1); /* end of syntactic loop '' */
_1013:
  _292 = _292__PHI_TEMPORARY;
  _293 = *(uint64_t*)_171;
  _294 = *(uint64_t*)_173;
  _295 = jsyn_cbe_fshl_i64(_294, _293, 32);
  _296 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_292)), _294, 32);
  *(uint64_t*)_171 = _295;
  *(uint64_t*)_173 = _296;
  _297 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _298 = *(uint64_t*)_297;
  _299 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _300 = *(uint64_t*)_299;
  _301 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _302 = *(uint64_t*)_301;
  _303 = *(void**)_92;
  _304 = *(uint64_t*)(((&((uint8_t*)_303)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_92)[((int64_t)48)]))) = _298;
  *(uint64_t*)_297 = _300;
  *(uint64_t*)_299 = _302;
  *(uint64_t*)_301 = _304;
  julia_emit_4484((&_111), _91, _92, 758, 1);
  _164__PHI_TEMPORARY = (&_111);   /* for PHI node */
  goto _980;

_983:
  _305 = _305__PHI_TEMPORARY;
  if ((_305 == 4294967295u)) {
    goto _1018;
  } else {
    goto _1019;
  }

_1018:
  julia_emit_4484((&_104), _91, _92, 752, 1);
  _164__PHI_TEMPORARY = (&_104);   /* for PHI node */
  goto _980;

_1019:
  _306 = ((bool)_119&1u);
  if (((_305 != 603979776u) | _306)) {
    goto _1020;
  } else {
    goto _1021;
  }

_1021:
  _307 = *(void**)_92;
  _308 = ((&((uint8_t*)_307)[((int64_t)16)]));
  _309 = *(uint64_t*)_308;
  _310 = ((&((uint8_t*)_307)[((int64_t)8)]));
  _311 = *(uint64_t*)_310;
  if ((((int64_t)_311) > ((int64_t)_309))) {
    goto _1022;
  } else {
    _328__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1023;
  }

_1022:
  _312 = *(void**)_307;
  _313 = *(uint8_t*)(((&((uint8_t*)_312)[((int64_t)_309)])));
  *(uint64_t*)_308 = (llvm_add_u64(_309, 1));
  _314 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_313)), 0);
  _315 = llvm_sub_u8(32, (llvm_shl_u8(_314, 3)));
  _316 = (((uint32_t)(uint8_t)_313)) << 24;
  if ((((uint8_t)_315) > ((uint8_t)((uint8_t)16)))) {
    _328__PHI_TEMPORARY = _316;   /* for PHI node */
    goto _1023;
  } else {
    _317__PHI_TEMPORARY = 16;   /* for PHI node */
    _318__PHI_TEMPORARY = _316;   /* for PHI node */
    goto _1024;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1024:
  _317 = _317__PHI_TEMPORARY;
  _318 = _318__PHI_TEMPORARY;
  if (((((int64_t)_317) < ((int64_t)UINT64_C(0))) | (((uint64_t)_317) < ((uint64_t)(((uint64_t)(uint8_t)_315)))))) {
    _328__PHI_TEMPORARY = _318;   /* for PHI node */
    goto _1023;
  } else {
    goto _1025;
  }

_1025:
  _319 = *(uint64_t*)_308;
  _320 = *(uint64_t*)_310;
  if ((((int64_t)_320) > ((int64_t)_319))) {
    goto _1026;
  } else {
    _328__PHI_TEMPORARY = _318;   /* for PHI node */
    goto _1023;
  }

_1026:
  _321 = *(void**)_307;
  _322 = *(uint8_t*)(((&((uint8_t*)_321)[((int64_t)_319)])));
  if ((((int8_t)_322) > ((int8_t)((uint8_t)-65)))) {
    _328__PHI_TEMPORARY = _318;   /* for PHI node */
    goto _1023;
  } else {
    goto _1027;
  }

_1027:
  _323 = llvm_select_u32((((int64_t)_319) < ((int64_t)_320)), (((uint32_t)(uint8_t)_322)), 0);
  _324 = *(uint64_t*)_308;
  *(uint64_t*)_308 = (llvm_add_u64(_324, 1));
  _325 = llvm_neg_u64(_317);
  _326 = _318 | (llvm_select_u32((((int64_t)_317) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_325) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_323, (((uint32_t)_325)))))), (llvm_select_u32((((uint64_t)_317) > ((uint64_t)UINT64_C(31))), 0, (_323 << (((uint32_t)_317)))))));
  _327 = llvm_add_u64(_317, -8);
  _317__PHI_TEMPORARY = _327;   /* for PHI node */
  _318__PHI_TEMPORARY = _326;   /* for PHI node */
  goto _1024;

  } while (1); /* end of syntactic loop '' */
_1023:
  _328 = _328__PHI_TEMPORARY;
  _329 = *(uint64_t*)_171;
  _330 = *(uint64_t*)_173;
  _331 = jsyn_cbe_fshl_i64(_330, _329, 32);
  _332 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_328)), _330, 32);
  *(uint64_t*)_171 = _331;
  *(uint64_t*)_173 = _332;
  _333 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _334 = *(uint64_t*)_333;
  _335 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _336 = *(uint64_t*)_335;
  _337 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _338 = *(uint64_t*)_337;
  _339 = *(void**)_92;
  _340 = *(uint64_t*)(((&((uint8_t*)_339)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_92)[((int64_t)48)]))) = _334;
  *(uint64_t*)_333 = _336;
  *(uint64_t*)_335 = _338;
  *(uint64_t*)_337 = _340;
  julia_emit_4484((&_105), _91, _92, 534, 1);
  _164__PHI_TEMPORARY = (&_105);   /* for PHI node */
  goto _980;

_1020:
  if (((_305 != 1543503872u) | _306)) {
    goto _1028;
  } else {
    goto _1029;
  }

_1029:
  _341 = *(uint64_t*)_173;
  _342 = ((uint32_t)_341);
  switch (_342) {
  default:
    goto _1028;
  case 218103808u:
    goto _1030;
  case 167772160u:
    goto _1030;
  }

_1030:
  _343 = *(void**)_92;
  _344 = ((&((uint8_t*)_343)[((int64_t)16)]));
  _345 = *(uint64_t*)_344;
  _346 = ((&((uint8_t*)_343)[((int64_t)8)]));
  _347 = *(uint64_t*)_346;
  if ((((int64_t)_347) > ((int64_t)_345))) {
    goto _1031;
  } else {
    _364__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1032;
  }

_1031:
  _348 = *(void**)_343;
  _349 = *(uint8_t*)(((&((uint8_t*)_348)[((int64_t)_345)])));
  *(uint64_t*)_344 = (llvm_add_u64(_345, 1));
  _350 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_349)), 0);
  _351 = llvm_sub_u8(32, (llvm_shl_u8(_350, 3)));
  _352 = (((uint32_t)(uint8_t)_349)) << 24;
  if ((((uint8_t)_351) > ((uint8_t)((uint8_t)16)))) {
    _364__PHI_TEMPORARY = _352;   /* for PHI node */
    goto _1032;
  } else {
    _353__PHI_TEMPORARY = 16;   /* for PHI node */
    _354__PHI_TEMPORARY = _352;   /* for PHI node */
    goto _1033;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1033:
  _353 = _353__PHI_TEMPORARY;
  _354 = _354__PHI_TEMPORARY;
  if (((((int64_t)_353) < ((int64_t)UINT64_C(0))) | (((uint64_t)_353) < ((uint64_t)(((uint64_t)(uint8_t)_351)))))) {
    _364__PHI_TEMPORARY = _354;   /* for PHI node */
    goto _1032;
  } else {
    goto _1034;
  }

_1034:
  _355 = *(uint64_t*)_344;
  _356 = *(uint64_t*)_346;
  if ((((int64_t)_356) > ((int64_t)_355))) {
    goto _1035;
  } else {
    _364__PHI_TEMPORARY = _354;   /* for PHI node */
    goto _1032;
  }

_1035:
  _357 = *(void**)_343;
  _358 = *(uint8_t*)(((&((uint8_t*)_357)[((int64_t)_355)])));
  if ((((int8_t)_358) > ((int8_t)((uint8_t)-65)))) {
    _364__PHI_TEMPORARY = _354;   /* for PHI node */
    goto _1032;
  } else {
    goto _1036;
  }

_1036:
  _359 = llvm_select_u32((((int64_t)_355) < ((int64_t)_356)), (((uint32_t)(uint8_t)_358)), 0);
  _360 = *(uint64_t*)_344;
  *(uint64_t*)_344 = (llvm_add_u64(_360, 1));
  _361 = llvm_neg_u64(_353);
  _362 = _354 | (llvm_select_u32((((int64_t)_353) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_361) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_359, (((uint32_t)_361)))))), (llvm_select_u32((((uint64_t)_353) > ((uint64_t)UINT64_C(31))), 0, (_359 << (((uint32_t)_353)))))));
  _363 = llvm_add_u64(_353, -8);
  _353__PHI_TEMPORARY = _363;   /* for PHI node */
  _354__PHI_TEMPORARY = _362;   /* for PHI node */
  goto _1033;

  } while (1); /* end of syntactic loop '' */
_1032:
  _364 = _364__PHI_TEMPORARY;
  _365 = *(uint64_t*)_171;
  _366 = *(uint64_t*)_173;
  _367 = jsyn_cbe_fshl_i64(_366, _365, 32);
  _368 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_364)), _366, 32);
  *(uint64_t*)_171 = _367;
  *(uint64_t*)_173 = _368;
  _369 = ((&((uint8_t*)_92)[((int64_t)48)]));
  _370 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _371 = *(uint64_t*)_370;
  _372 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _373 = *(uint64_t*)_372;
  _374 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _375 = *(uint64_t*)_374;
  _376 = *(void**)_92;
  _377 = *(uint64_t*)(((&((uint8_t*)_376)[((int64_t)16)])));
  *(uint64_t*)_369 = _371;
  *(uint64_t*)_370 = _373;
  *(uint64_t*)_372 = _375;
  *(uint64_t*)_374 = _377;
  _378 = *(void**)_92;
  _379 = ((&((uint8_t*)_378)[((int64_t)16)]));
  _380 = *(uint64_t*)_379;
  _381 = ((&((uint8_t*)_378)[((int64_t)8)]));
  _382 = *(uint64_t*)_381;
  if ((((int64_t)_382) > ((int64_t)_380))) {
    goto _1037;
  } else {
    _399__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1038;
  }

_1037:
  _383 = *(void**)_378;
  _384 = *(uint8_t*)(((&((uint8_t*)_383)[((int64_t)_380)])));
  *(uint64_t*)_379 = (llvm_add_u64(_380, 1));
  _385 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_384)), 0);
  _386 = llvm_sub_u8(32, (llvm_shl_u8(_385, 3)));
  _387 = (((uint32_t)(uint8_t)_384)) << 24;
  if ((((uint8_t)_386) > ((uint8_t)((uint8_t)16)))) {
    _399__PHI_TEMPORARY = _387;   /* for PHI node */
    goto _1038;
  } else {
    _388__PHI_TEMPORARY = 16;   /* for PHI node */
    _389__PHI_TEMPORARY = _387;   /* for PHI node */
    goto _1039;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1039:
  _388 = _388__PHI_TEMPORARY;
  _389 = _389__PHI_TEMPORARY;
  if (((((int64_t)_388) < ((int64_t)UINT64_C(0))) | (((uint64_t)_388) < ((uint64_t)(((uint64_t)(uint8_t)_386)))))) {
    _399__PHI_TEMPORARY = _389;   /* for PHI node */
    goto _1038;
  } else {
    goto _1040;
  }

_1040:
  _390 = *(uint64_t*)_379;
  _391 = *(uint64_t*)_381;
  if ((((int64_t)_391) > ((int64_t)_390))) {
    goto _1041;
  } else {
    _399__PHI_TEMPORARY = _389;   /* for PHI node */
    goto _1038;
  }

_1041:
  _392 = *(void**)_378;
  _393 = *(uint8_t*)(((&((uint8_t*)_392)[((int64_t)_390)])));
  if ((((int8_t)_393) > ((int8_t)((uint8_t)-65)))) {
    _399__PHI_TEMPORARY = _389;   /* for PHI node */
    goto _1038;
  } else {
    goto _1042;
  }

_1042:
  _394 = llvm_select_u32((((int64_t)_390) < ((int64_t)_391)), (((uint32_t)(uint8_t)_393)), 0);
  _395 = *(uint64_t*)_379;
  *(uint64_t*)_379 = (llvm_add_u64(_395, 1));
  _396 = llvm_neg_u64(_388);
  _397 = _389 | (llvm_select_u32((((int64_t)_388) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_396) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_394, (((uint32_t)_396)))))), (llvm_select_u32((((uint64_t)_388) > ((uint64_t)UINT64_C(31))), 0, (_394 << (((uint32_t)_388)))))));
  _398 = llvm_add_u64(_388, -8);
  _388__PHI_TEMPORARY = _398;   /* for PHI node */
  _389__PHI_TEMPORARY = _397;   /* for PHI node */
  goto _1039;

  } while (1); /* end of syntactic loop '' */
_1038:
  _399 = _399__PHI_TEMPORARY;
  _400 = *(uint64_t*)_171;
  _401 = *(uint64_t*)_173;
  _402 = jsyn_cbe_fshl_i64(_401, _400, 32);
  _403 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_399)), _401, 32);
  *(uint64_t*)_171 = _402;
  *(uint64_t*)_173 = _403;
  _404 = *(uint64_t*)_370;
  _405 = *(uint64_t*)_372;
  _406 = *(uint64_t*)_374;
  _407 = *(void**)_92;
  _408 = *(uint64_t*)(((&((uint8_t*)_407)[((int64_t)16)])));
  *(uint64_t*)_369 = _404;
  *(uint64_t*)_370 = _405;
  *(uint64_t*)_372 = _406;
  *(uint64_t*)_374 = _408;
  if ((_342 == 218103808u)) {
    goto _1043;
  } else {
    goto _1044;
  }

_1043:
  _409 = *(uint64_t*)_171;
  if (((_409 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1045;
  } else {
    goto _1044;
  }

_1045:
  _410 = *(void**)_92;
  _411 = ((&((uint8_t*)_410)[((int64_t)16)]));
  _412 = *(uint64_t*)_411;
  _413 = ((&((uint8_t*)_410)[((int64_t)8)]));
  _414 = *(uint64_t*)_413;
  if ((((int64_t)_414) > ((int64_t)_412))) {
    goto _1046;
  } else {
    _431__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1047;
  }

_1046:
  _415 = *(void**)_410;
  _416 = *(uint8_t*)(((&((uint8_t*)_415)[((int64_t)_412)])));
  *(uint64_t*)_411 = (llvm_add_u64(_412, 1));
  _417 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_416)), 0);
  _418 = llvm_sub_u8(32, (llvm_shl_u8(_417, 3)));
  _419 = (((uint32_t)(uint8_t)_416)) << 24;
  if ((((uint8_t)_418) > ((uint8_t)((uint8_t)16)))) {
    _431__PHI_TEMPORARY = _419;   /* for PHI node */
    goto _1047;
  } else {
    _420__PHI_TEMPORARY = 16;   /* for PHI node */
    _421__PHI_TEMPORARY = _419;   /* for PHI node */
    goto _1048;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1048:
  _420 = _420__PHI_TEMPORARY;
  _421 = _421__PHI_TEMPORARY;
  if (((((int64_t)_420) < ((int64_t)UINT64_C(0))) | (((uint64_t)_420) < ((uint64_t)(((uint64_t)(uint8_t)_418)))))) {
    _431__PHI_TEMPORARY = _421;   /* for PHI node */
    goto _1047;
  } else {
    goto _1049;
  }

_1049:
  _422 = *(uint64_t*)_411;
  _423 = *(uint64_t*)_413;
  if ((((int64_t)_423) > ((int64_t)_422))) {
    goto _1050;
  } else {
    _431__PHI_TEMPORARY = _421;   /* for PHI node */
    goto _1047;
  }

_1050:
  _424 = *(void**)_410;
  _425 = *(uint8_t*)(((&((uint8_t*)_424)[((int64_t)_422)])));
  if ((((int8_t)_425) > ((int8_t)((uint8_t)-65)))) {
    _431__PHI_TEMPORARY = _421;   /* for PHI node */
    goto _1047;
  } else {
    goto _1051;
  }

_1051:
  _426 = llvm_select_u32((((int64_t)_422) < ((int64_t)_423)), (((uint32_t)(uint8_t)_425)), 0);
  _427 = *(uint64_t*)_411;
  *(uint64_t*)_411 = (llvm_add_u64(_427, 1));
  _428 = llvm_neg_u64(_420);
  _429 = _421 | (llvm_select_u32((((int64_t)_420) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_428) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_426, (((uint32_t)_428)))))), (llvm_select_u32((((uint64_t)_420) > ((uint64_t)UINT64_C(31))), 0, (_426 << (((uint32_t)_420)))))));
  _430 = llvm_add_u64(_420, -8);
  _420__PHI_TEMPORARY = _430;   /* for PHI node */
  _421__PHI_TEMPORARY = _429;   /* for PHI node */
  goto _1048;

  } while (1); /* end of syntactic loop '' */
_1047:
  _431 = _431__PHI_TEMPORARY;
  _432 = *(uint64_t*)_171;
  _433 = *(uint64_t*)_173;
  _434 = jsyn_cbe_fshl_i64(_433, _432, 32);
  _435 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_431)), _433, 32);
  *(uint64_t*)_171 = _434;
  *(uint64_t*)_173 = _435;
  _436 = *(uint64_t*)_370;
  _437 = *(uint64_t*)_372;
  _438 = *(uint64_t*)_374;
  _439 = *(void**)_92;
  _440 = *(uint64_t*)(((&((uint8_t*)_439)[((int64_t)16)])));
  *(uint64_t*)_369 = _436;
  *(uint64_t*)_370 = _437;
  *(uint64_t*)_372 = _438;
  *(uint64_t*)_374 = _440;
  goto _1044;

_1044:
  _441 = *(uint64_t*)_171;
  switch ((((uint32_t)(llvm_lshr_u64(_441, 32))))) {
  default:
    goto _1052;
  case 536870912u:
    goto _1053;
  case 150994944u:
    goto _1053;
  }

_1052:
  julia_emit_4484((&_106), _91, _92, 1, 1);
  _164__PHI_TEMPORARY = (&_106);   /* for PHI node */
  goto _980;

_1053:
  _442 = *(void**)_92;
  _443 = ((&((uint8_t*)_442)[((int64_t)16)]));
  _444 = *(uint64_t*)_443;
  _445 = ((&((uint8_t*)_442)[((int64_t)8)]));
  _446 = *(uint64_t*)_445;
  if ((((int64_t)_446) > ((int64_t)_444))) {
    goto _1054;
  } else {
    _431__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1047;
  }

_1054:
  _447 = *(void**)_442;
  _448 = *(uint8_t*)(((&((uint8_t*)_447)[((int64_t)_444)])));
  *(uint64_t*)_443 = (llvm_add_u64(_444, 1));
  _449 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_448)), 0);
  _450 = llvm_sub_u8(32, (llvm_shl_u8(_449, 3)));
  _451 = (((uint32_t)(uint8_t)_448)) << 24;
  if ((((uint8_t)_450) > ((uint8_t)((uint8_t)16)))) {
    _431__PHI_TEMPORARY = _451;   /* for PHI node */
    goto _1047;
  } else {
    _452__PHI_TEMPORARY = 16;   /* for PHI node */
    _453__PHI_TEMPORARY = _451;   /* for PHI node */
    goto _1055;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1055:
  _452 = _452__PHI_TEMPORARY;
  _453 = _453__PHI_TEMPORARY;
  if (((((int64_t)_452) < ((int64_t)UINT64_C(0))) | (((uint64_t)_452) < ((uint64_t)(((uint64_t)(uint8_t)_450)))))) {
    _431__PHI_TEMPORARY = _453;   /* for PHI node */
    goto _1047;
  } else {
    goto _1056;
  }

_1056:
  _454 = *(uint64_t*)_443;
  _455 = *(uint64_t*)_445;
  if ((((int64_t)_455) > ((int64_t)_454))) {
    goto _1057;
  } else {
    _431__PHI_TEMPORARY = _453;   /* for PHI node */
    goto _1047;
  }

_1057:
  _456 = *(void**)_442;
  _457 = *(uint8_t*)(((&((uint8_t*)_456)[((int64_t)_454)])));
  if ((((int8_t)_457) > ((int8_t)((uint8_t)-65)))) {
    _431__PHI_TEMPORARY = _453;   /* for PHI node */
    goto _1047;
  } else {
    goto _1058;
  }

_1058:
  _458 = llvm_select_u32((((int64_t)_454) < ((int64_t)_455)), (((uint32_t)(uint8_t)_457)), 0);
  _459 = *(uint64_t*)_443;
  *(uint64_t*)_443 = (llvm_add_u64(_459, 1));
  _460 = llvm_neg_u64(_452);
  _461 = _453 | (llvm_select_u32((((int64_t)_452) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_460) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_458, (((uint32_t)_460)))))), (llvm_select_u32((((uint64_t)_452) > ((uint64_t)UINT64_C(31))), 0, (_458 << (((uint32_t)_452)))))));
  _462 = llvm_add_u64(_452, -8);
  _452__PHI_TEMPORARY = _462;   /* for PHI node */
  _453__PHI_TEMPORARY = _461;   /* for PHI node */
  goto _1055;

  } while (1); /* end of syntactic loop '' */
_1028:
  if ((_305 == _120)) {
    goto _1059;
  } else {
    goto _1060;
  }

_1059:
  _463 = ((bool)_118&1u);
  _464 = *(uint64_t*)_171;
  if (_463) {
    goto _1061;
  } else {
    _466__PHI_TEMPORARY = _464;   /* for PHI node */
    goto _1062;
  }

_1061:
  _465 = *(uint64_t*)_173;
  if ((llvm_select_bool((_120 == (((uint32_t)(llvm_lshr_u64(_464, 32))))), (_120 == (((uint32_t)_465))), 0))) {
    _466__PHI_TEMPORARY = _465;   /* for PHI node */
    goto _1062;
  } else {
    goto _1060;
  }

_1062:
  _466 = _466__PHI_TEMPORARY;
  if ((_120 == (((uint32_t)(llvm_lshr_u64(_466, 32)))))) {
    goto _1063;
  } else {
    goto _1060;
  }

_1063:
  _467 = *(uint16_t*)_176;
  if ((llvm_select_bool((_120 == 654311424u), (_467 == ((uint16_t)709)), 0))) {
    goto _1064;
  } else {
    goto _1065;
  }

_1064:
  _468 = *(uint64_t*)_173;
  if (((_468 & INT64_C(4294967295)) == UINT64_C(654311424))) {
    goto _1066;
  } else {
    goto _1065;
  }

_1066:
  _469 = *(void**)_92;
  _470 = ((&((uint8_t*)_469)[((int64_t)16)]));
  _471 = *(uint64_t*)_470;
  _472 = ((&((uint8_t*)_469)[((int64_t)8)]));
  _473 = *(uint64_t*)_472;
  if ((((int64_t)_473) > ((int64_t)_471))) {
    goto _1067;
  } else {
    _490__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1068;
  }

_1067:
  _474 = *(void**)_469;
  _475 = *(uint8_t*)(((&((uint8_t*)_474)[((int64_t)_471)])));
  *(uint64_t*)_470 = (llvm_add_u64(_471, 1));
  _476 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_475)), 0);
  _477 = llvm_sub_u8(32, (llvm_shl_u8(_476, 3)));
  _478 = (((uint32_t)(uint8_t)_475)) << 24;
  if ((((uint8_t)_477) > ((uint8_t)((uint8_t)16)))) {
    _490__PHI_TEMPORARY = _478;   /* for PHI node */
    goto _1068;
  } else {
    _479__PHI_TEMPORARY = 16;   /* for PHI node */
    _480__PHI_TEMPORARY = _478;   /* for PHI node */
    goto _1069;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1069:
  _479 = _479__PHI_TEMPORARY;
  _480 = _480__PHI_TEMPORARY;
  if (((((int64_t)_479) < ((int64_t)UINT64_C(0))) | (((uint64_t)_479) < ((uint64_t)(((uint64_t)(uint8_t)_477)))))) {
    _490__PHI_TEMPORARY = _480;   /* for PHI node */
    goto _1068;
  } else {
    goto _1070;
  }

_1070:
  _481 = *(uint64_t*)_470;
  _482 = *(uint64_t*)_472;
  if ((((int64_t)_482) > ((int64_t)_481))) {
    goto _1071;
  } else {
    _490__PHI_TEMPORARY = _480;   /* for PHI node */
    goto _1068;
  }

_1071:
  _483 = *(void**)_469;
  _484 = *(uint8_t*)(((&((uint8_t*)_483)[((int64_t)_481)])));
  if ((((int8_t)_484) > ((int8_t)((uint8_t)-65)))) {
    _490__PHI_TEMPORARY = _480;   /* for PHI node */
    goto _1068;
  } else {
    goto _1072;
  }

_1072:
  _485 = llvm_select_u32((((int64_t)_481) < ((int64_t)_482)), (((uint32_t)(uint8_t)_484)), 0);
  _486 = *(uint64_t*)_470;
  *(uint64_t*)_470 = (llvm_add_u64(_486, 1));
  _487 = llvm_neg_u64(_479);
  _488 = _480 | (llvm_select_u32((((int64_t)_479) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_487) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_485, (((uint32_t)_487)))))), (llvm_select_u32((((uint64_t)_479) > ((uint64_t)UINT64_C(31))), 0, (_485 << (((uint32_t)_479)))))));
  _489 = llvm_add_u64(_479, -8);
  _479__PHI_TEMPORARY = _489;   /* for PHI node */
  _480__PHI_TEMPORARY = _488;   /* for PHI node */
  goto _1069;

  } while (1); /* end of syntactic loop '' */
_1068:
  _490 = _490__PHI_TEMPORARY;
  _491 = *(uint64_t*)_171;
  _492 = *(uint64_t*)_173;
  _493 = jsyn_cbe_fshl_i64(_492, _491, 32);
  _494 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_490)), _492, 32);
  *(uint64_t*)_171 = _493;
  *(uint64_t*)_173 = _494;
  _495 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _496 = *(uint64_t*)_495;
  _497 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _498 = *(uint64_t*)_497;
  _499 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _500 = *(uint64_t*)_499;
  _501 = *(void**)_92;
  _502 = *(uint64_t*)(((&((uint8_t*)_501)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_92)[((int64_t)48)]))) = _496;
  *(uint64_t*)_495 = _498;
  *(uint64_t*)_497 = _500;
  *(uint64_t*)_499 = _502;
  julia_emit_4484((&_107), _91, _92, 51, 1);
  _164__PHI_TEMPORARY = (&_107);   /* for PHI node */
  goto _980;

_1065:
  _503 = *(void**)_113;
  _504 = ((&((uint8_t*)_503)[((int64_t)16)]));
  _505 = *(uint64_t*)_504;
  if ((_505 == UINT64_C(0))) {
    goto _1073;
  } else {
    goto _1074;
  }

_1073:
  julia__throw_argerror_2601(_91, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)488)]))));
  __builtin_unreachable();

_1074:
  _506 = llvm_add_u64(_505, -1);
  _507__PHI_TEMPORARY = _505;   /* for PHI node */
  goto _1075;

  do {     /* Syntactic loop '' to make GCC happy */
_1075:
  _507 = _507__PHI_TEMPORARY;
  if ((_507 == _505)) {
    goto _1076;
  } else {
    _507__PHI_TEMPORARY = (llvm_add_u64(_507, 1));   /* for PHI node */
    goto _1075;
  }

  } while (1); /* end of syntactic loop '' */
_1076:
  *(uint64_t*)_504 = _506;
  _508 = *(void**)_92;
  _509 = ((&((uint8_t*)_508)[((int64_t)16)]));
  _510 = *(uint64_t*)_509;
  _511 = ((&((uint8_t*)_508)[((int64_t)8)]));
  _512 = *(uint64_t*)_511;
  if ((((int64_t)_512) > ((int64_t)_510))) {
    goto _1077;
  } else {
    _529__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1078;
  }

_1077:
  _513 = *(void**)_508;
  _514 = *(uint8_t*)(((&((uint8_t*)_513)[((int64_t)_510)])));
  *(uint64_t*)_509 = (llvm_add_u64(_510, 1));
  _515 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_514)), 0);
  _516 = llvm_sub_u8(32, (llvm_shl_u8(_515, 3)));
  _517 = (((uint32_t)(uint8_t)_514)) << 24;
  if ((((uint8_t)_516) > ((uint8_t)((uint8_t)16)))) {
    _529__PHI_TEMPORARY = _517;   /* for PHI node */
    goto _1078;
  } else {
    _518__PHI_TEMPORARY = 16;   /* for PHI node */
    _519__PHI_TEMPORARY = _517;   /* for PHI node */
    goto _1079;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1079:
  _518 = _518__PHI_TEMPORARY;
  _519 = _519__PHI_TEMPORARY;
  if (((((int64_t)_518) < ((int64_t)UINT64_C(0))) | (((uint64_t)_518) < ((uint64_t)(((uint64_t)(uint8_t)_516)))))) {
    _529__PHI_TEMPORARY = _519;   /* for PHI node */
    goto _1078;
  } else {
    goto _1080;
  }

_1080:
  _520 = *(uint64_t*)_509;
  _521 = *(uint64_t*)_511;
  if ((((int64_t)_521) > ((int64_t)_520))) {
    goto _1081;
  } else {
    _529__PHI_TEMPORARY = _519;   /* for PHI node */
    goto _1078;
  }

_1081:
  _522 = *(void**)_508;
  _523 = *(uint8_t*)(((&((uint8_t*)_522)[((int64_t)_520)])));
  if ((((int8_t)_523) > ((int8_t)((uint8_t)-65)))) {
    _529__PHI_TEMPORARY = _519;   /* for PHI node */
    goto _1078;
  } else {
    goto _1082;
  }

_1082:
  _524 = llvm_select_u32((((int64_t)_520) < ((int64_t)_521)), (((uint32_t)(uint8_t)_523)), 0);
  _525 = *(uint64_t*)_509;
  *(uint64_t*)_509 = (llvm_add_u64(_525, 1));
  _526 = llvm_neg_u64(_518);
  _527 = _519 | (llvm_select_u32((((int64_t)_518) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_526) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_524, (((uint32_t)_526)))))), (llvm_select_u32((((uint64_t)_518) > ((uint64_t)UINT64_C(31))), 0, (_524 << (((uint32_t)_518)))))));
  _528 = llvm_add_u64(_518, -8);
  _518__PHI_TEMPORARY = _528;   /* for PHI node */
  _519__PHI_TEMPORARY = _527;   /* for PHI node */
  goto _1079;

  } while (1); /* end of syntactic loop '' */
_1078:
  _529 = _529__PHI_TEMPORARY;
  _530 = *(uint64_t*)_171;
  _531 = *(uint64_t*)_173;
  _532 = jsyn_cbe_fshl_i64(_531, _530, 32);
  _533 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_529)), _531, 32);
  *(uint64_t*)_171 = _532;
  *(uint64_t*)_173 = _533;
  _534 = ((&((uint8_t*)_92)[((int64_t)48)]));
  _535 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _536 = *(uint64_t*)_535;
  _537 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _538 = *(uint64_t*)_537;
  _539 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _540 = *(uint64_t*)_539;
  _541 = *(void**)_92;
  _542 = *(uint64_t*)(((&((uint8_t*)_541)[((int64_t)16)])));
  *(uint64_t*)_534 = _536;
  *(uint64_t*)_535 = _538;
  *(uint64_t*)_537 = _540;
  *(uint64_t*)_539 = _542;
  if (_463) {
    goto _1083;
  } else {
    goto _1084;
  }

_1083:
  _543 = *(void**)_92;
  _544 = ((&((uint8_t*)_543)[((int64_t)16)]));
  _545 = *(uint64_t*)_544;
  _546 = ((&((uint8_t*)_543)[((int64_t)8)]));
  _547 = *(uint64_t*)_546;
  if ((((int64_t)_547) > ((int64_t)_545))) {
    goto _1085;
  } else {
    _564__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1086;
  }

_1085:
  _548 = *(void**)_543;
  _549 = *(uint8_t*)(((&((uint8_t*)_548)[((int64_t)_545)])));
  *(uint64_t*)_544 = (llvm_add_u64(_545, 1));
  _550 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_549)), 0);
  _551 = llvm_sub_u8(32, (llvm_shl_u8(_550, 3)));
  _552 = (((uint32_t)(uint8_t)_549)) << 24;
  if ((((uint8_t)_551) > ((uint8_t)((uint8_t)16)))) {
    _564__PHI_TEMPORARY = _552;   /* for PHI node */
    goto _1086;
  } else {
    _553__PHI_TEMPORARY = 16;   /* for PHI node */
    _554__PHI_TEMPORARY = _552;   /* for PHI node */
    goto _1087;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1087:
  _553 = _553__PHI_TEMPORARY;
  _554 = _554__PHI_TEMPORARY;
  if (((((int64_t)_553) < ((int64_t)UINT64_C(0))) | (((uint64_t)_553) < ((uint64_t)(((uint64_t)(uint8_t)_551)))))) {
    _564__PHI_TEMPORARY = _554;   /* for PHI node */
    goto _1086;
  } else {
    goto _1088;
  }

_1088:
  _555 = *(uint64_t*)_544;
  _556 = *(uint64_t*)_546;
  if ((((int64_t)_556) > ((int64_t)_555))) {
    goto _1089;
  } else {
    _564__PHI_TEMPORARY = _554;   /* for PHI node */
    goto _1086;
  }

_1089:
  _557 = *(void**)_543;
  _558 = *(uint8_t*)(((&((uint8_t*)_557)[((int64_t)_555)])));
  if ((((int8_t)_558) > ((int8_t)((uint8_t)-65)))) {
    _564__PHI_TEMPORARY = _554;   /* for PHI node */
    goto _1086;
  } else {
    goto _1090;
  }

_1090:
  _559 = llvm_select_u32((((int64_t)_555) < ((int64_t)_556)), (((uint32_t)(uint8_t)_558)), 0);
  _560 = *(uint64_t*)_544;
  *(uint64_t*)_544 = (llvm_add_u64(_560, 1));
  _561 = llvm_neg_u64(_553);
  _562 = _554 | (llvm_select_u32((((int64_t)_553) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_561) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_559, (((uint32_t)_561)))))), (llvm_select_u32((((uint64_t)_553) > ((uint64_t)UINT64_C(31))), 0, (_559 << (((uint32_t)_553)))))));
  _563 = llvm_add_u64(_553, -8);
  _553__PHI_TEMPORARY = _563;   /* for PHI node */
  _554__PHI_TEMPORARY = _562;   /* for PHI node */
  goto _1087;

  } while (1); /* end of syntactic loop '' */
_1086:
  _564 = _564__PHI_TEMPORARY;
  _565 = *(uint64_t*)_171;
  _566 = *(uint64_t*)_173;
  _567 = jsyn_cbe_fshl_i64(_566, _565, 32);
  _568 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_564)), _566, 32);
  *(uint64_t*)_171 = _567;
  *(uint64_t*)_173 = _568;
  _569 = *(uint64_t*)_535;
  _570 = *(uint64_t*)_537;
  _571 = *(uint64_t*)_539;
  _572 = *(void**)_92;
  _573 = *(uint64_t*)(((&((uint8_t*)_572)[((int64_t)16)])));
  *(uint64_t*)_534 = _569;
  *(uint64_t*)_535 = _570;
  *(uint64_t*)_537 = _571;
  *(uint64_t*)_539 = _573;
  _574 = *(void**)_92;
  _575 = ((&((uint8_t*)_574)[((int64_t)16)]));
  _576 = *(uint64_t*)_575;
  _577 = ((&((uint8_t*)_574)[((int64_t)8)]));
  _578 = *(uint64_t*)_577;
  if ((((int64_t)_578) > ((int64_t)_576))) {
    goto _1091;
  } else {
    _595__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1092;
  }

_1091:
  _579 = *(void**)_574;
  _580 = *(uint8_t*)(((&((uint8_t*)_579)[((int64_t)_576)])));
  *(uint64_t*)_575 = (llvm_add_u64(_576, 1));
  _581 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_580)), 0);
  _582 = llvm_sub_u8(32, (llvm_shl_u8(_581, 3)));
  _583 = (((uint32_t)(uint8_t)_580)) << 24;
  if ((((uint8_t)_582) > ((uint8_t)((uint8_t)16)))) {
    _595__PHI_TEMPORARY = _583;   /* for PHI node */
    goto _1092;
  } else {
    _584__PHI_TEMPORARY = 16;   /* for PHI node */
    _585__PHI_TEMPORARY = _583;   /* for PHI node */
    goto _1093;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1093:
  _584 = _584__PHI_TEMPORARY;
  _585 = _585__PHI_TEMPORARY;
  if (((((int64_t)_584) < ((int64_t)UINT64_C(0))) | (((uint64_t)_584) < ((uint64_t)(((uint64_t)(uint8_t)_582)))))) {
    _595__PHI_TEMPORARY = _585;   /* for PHI node */
    goto _1092;
  } else {
    goto _1094;
  }

_1094:
  _586 = *(uint64_t*)_575;
  _587 = *(uint64_t*)_577;
  if ((((int64_t)_587) > ((int64_t)_586))) {
    goto _1095;
  } else {
    _595__PHI_TEMPORARY = _585;   /* for PHI node */
    goto _1092;
  }

_1095:
  _588 = *(void**)_574;
  _589 = *(uint8_t*)(((&((uint8_t*)_588)[((int64_t)_586)])));
  if ((((int8_t)_589) > ((int8_t)((uint8_t)-65)))) {
    _595__PHI_TEMPORARY = _585;   /* for PHI node */
    goto _1092;
  } else {
    goto _1096;
  }

_1096:
  _590 = llvm_select_u32((((int64_t)_586) < ((int64_t)_587)), (((uint32_t)(uint8_t)_589)), 0);
  _591 = *(uint64_t*)_575;
  *(uint64_t*)_575 = (llvm_add_u64(_591, 1));
  _592 = llvm_neg_u64(_584);
  _593 = _585 | (llvm_select_u32((((int64_t)_584) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_592) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_590, (((uint32_t)_592)))))), (llvm_select_u32((((uint64_t)_584) > ((uint64_t)UINT64_C(31))), 0, (_590 << (((uint32_t)_584)))))));
  _594 = llvm_add_u64(_584, -8);
  _584__PHI_TEMPORARY = _594;   /* for PHI node */
  _585__PHI_TEMPORARY = _593;   /* for PHI node */
  goto _1093;

  } while (1); /* end of syntactic loop '' */
_1092:
  _595 = _595__PHI_TEMPORARY;
  _596 = *(uint64_t*)_171;
  _597 = *(uint64_t*)_173;
  _598 = jsyn_cbe_fshl_i64(_597, _596, 32);
  _599 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_595)), _597, 32);
  *(uint64_t*)_171 = _598;
  *(uint64_t*)_173 = _599;
  _600 = *(uint64_t*)_535;
  _601 = *(uint64_t*)_537;
  _602 = *(uint64_t*)_539;
  _603 = *(void**)_92;
  _604 = *(uint64_t*)(((&((uint8_t*)_603)[((int64_t)16)])));
  *(uint64_t*)_534 = _600;
  *(uint64_t*)_535 = _601;
  *(uint64_t*)_537 = _602;
  *(uint64_t*)_539 = _604;
  julia_emit_4484((&_108), _91, _92, (llvm_select_u16((_120 == 570425344u), 63, 65)), 1);
  _164__PHI_TEMPORARY = (&_108);   /* for PHI node */
  goto _980;

_1084:
  julia_emit_4484((&_109), _91, _92, (llvm_select_u16((_120 == 570425344u), 62, (llvm_select_u16((_120 == 1610612736u), 64, 709)))), 0);
  _164__PHI_TEMPORARY = (&_109);   /* for PHI node */
  goto _980;

_1060:
  if (_306) {
    _605__PHI_TEMPORARY = 1;   /* for PHI node */
    _606__PHI_TEMPORARY = 0;   /* for PHI node */
    _607__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1097;
  } else {
    _797__PHI_TEMPORARY = 1;   /* for PHI node */
    _798__PHI_TEMPORARY = 0;   /* for PHI node */
    _799__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1098;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1097:
  _605 = _605__PHI_TEMPORARY;
  _606 = _606__PHI_TEMPORARY;
  _607 = _607__PHI_TEMPORARY;
  _608 = *(uint64_t*)_171;
  _609 = llvm_lshr_u64(_608, 32);
  _610 = ((uint32_t)_609);
  _611 = ((bool)_118&1u);
  if (_611) {
    goto _1099;
  } else {
    _614__PHI_TEMPORARY = _610;   /* for PHI node */
    goto _1100;
  }

_1099:
  _612 = *(uint64_t*)_173;
  if ((llvm_select_bool((_120 == _610), (_120 == (((uint32_t)_612))), 0))) {
    goto _1101;
  } else {
    goto _1102;
  }

_1102:
  if ((_609 == UINT64_C(4294967295))) {
    _958__PHI_TEMPORARY = _605;   /* for PHI node */
    _959__PHI_TEMPORARY = _606;   /* for PHI node */
    _960__PHI_TEMPORARY = _607;   /* for PHI node */
    goto _1103;
  } else {
    goto _1104;
  }

_1101:
  _613 = ((uint32_t)(llvm_lshr_u64(_612, 32)));
  _614__PHI_TEMPORARY = _613;   /* for PHI node */
  goto _1100;

_1100:
  _614 = _614__PHI_TEMPORARY;
  if ((llvm_select_bool((_120 == _614), 1, (_609 == UINT64_C(4294967295))))) {
    _958__PHI_TEMPORARY = _605;   /* for PHI node */
    _959__PHI_TEMPORARY = _606;   /* for PHI node */
    _960__PHI_TEMPORARY = _607;   /* for PHI node */
    goto _1103;
  } else {
    goto _1104;
  }

_1104:
  if (_611) {
    goto _1105;
  } else {
    goto _1106;
  }

_1105:
  switch ((((uint32_t)_609))) {
  default:
    goto _1106;
  case 218103808u:
    goto _1107;
  case 167772160u:
    goto _1107;
  }

_1106:
  _684 = *(void**)_92;
  _685 = ((&((uint8_t*)_684)[((int64_t)16)]));
  _686 = *(uint64_t*)_685;
  _687 = ((&((uint8_t*)_684)[((int64_t)8)]));
  _688 = *(uint64_t*)_687;
  if ((((int64_t)_688) > ((int64_t)_686))) {
    goto _1108;
  } else {
    _705__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1109;
  }

_1108:
  _689 = *(void**)_684;
  _690 = *(uint8_t*)(((&((uint8_t*)_689)[((int64_t)_686)])));
  *(uint64_t*)_685 = (llvm_add_u64(_686, 1));
  _691 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_690)), 0);
  _692 = llvm_sub_u8(32, (llvm_shl_u8(_691, 3)));
  _693 = (((uint32_t)(uint8_t)_690)) << 24;
  if ((((uint8_t)_692) > ((uint8_t)((uint8_t)16)))) {
    _705__PHI_TEMPORARY = _693;   /* for PHI node */
    goto _1109;
  } else {
    _694__PHI_TEMPORARY = 16;   /* for PHI node */
    _695__PHI_TEMPORARY = _693;   /* for PHI node */
    goto _1110;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1110:
  _694 = _694__PHI_TEMPORARY;
  _695 = _695__PHI_TEMPORARY;
  if (((((int64_t)_694) < ((int64_t)UINT64_C(0))) | (((uint64_t)_694) < ((uint64_t)(((uint64_t)(uint8_t)_692)))))) {
    _705__PHI_TEMPORARY = _695;   /* for PHI node */
    goto _1109;
  } else {
    goto _1111;
  }

_1111:
  _696 = *(uint64_t*)_685;
  _697 = *(uint64_t*)_687;
  if ((((int64_t)_697) > ((int64_t)_696))) {
    goto _1112;
  } else {
    _705__PHI_TEMPORARY = _695;   /* for PHI node */
    goto _1109;
  }

_1112:
  _698 = *(void**)_684;
  _699 = *(uint8_t*)(((&((uint8_t*)_698)[((int64_t)_696)])));
  if ((((int8_t)_699) > ((int8_t)((uint8_t)-65)))) {
    _705__PHI_TEMPORARY = _695;   /* for PHI node */
    goto _1109;
  } else {
    goto _1113;
  }

_1113:
  _700 = llvm_select_u32((((int64_t)_696) < ((int64_t)_697)), (((uint32_t)(uint8_t)_699)), 0);
  _701 = *(uint64_t*)_685;
  *(uint64_t*)_685 = (llvm_add_u64(_701, 1));
  _702 = llvm_neg_u64(_694);
  _703 = _695 | (llvm_select_u32((((int64_t)_694) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_702) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_700, (((uint32_t)_702)))))), (llvm_select_u32((((uint64_t)_694) > ((uint64_t)UINT64_C(31))), 0, (_700 << (((uint32_t)_694)))))));
  _704 = llvm_add_u64(_694, -8);
  _694__PHI_TEMPORARY = _704;   /* for PHI node */
  _695__PHI_TEMPORARY = _703;   /* for PHI node */
  goto _1110;

  } while (1); /* end of syntactic loop '' */
_1109:
  _705 = _705__PHI_TEMPORARY;
  _706 = *(uint64_t*)_171;
  _707 = *(uint64_t*)_173;
  _708 = jsyn_cbe_fshl_i64(_707, _706, 32);
  _709 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_705)), _707, 32);
  *(uint64_t*)_171 = _708;
  *(uint64_t*)_173 = _709;
  _710 = ((&((uint8_t*)_92)[((int64_t)48)]));
  _711 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _712 = *(uint64_t*)_711;
  _713 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _714 = *(uint64_t*)_713;
  _715 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _716 = *(uint64_t*)_715;
  _717 = *(void**)_92;
  _718 = *(uint64_t*)(((&((uint8_t*)_717)[((int64_t)16)])));
  *(uint64_t*)_710 = _712;
  *(uint64_t*)_711 = _714;
  *(uint64_t*)_713 = _716;
  *(uint64_t*)_715 = _718;
  _719 = *(uint64_t*)_171;
  _720 = ((uint32_t)_719);
  switch (_720) {
  default:
    goto _1114;
  case 1543503872u:
    _721__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1115;
  case 167772160u:
    _791__PHI_TEMPORARY = 0;   /* for PHI node */
    _792__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1116;
  case 3800082944u:
    goto _1117;
  case 3800083200u:
    goto _1117;
  case 3800083712u:
    goto _1117;
  case 3800083968u:
    goto _1117;
  case 3800083456u:
    goto _1118;
  case 3800147456u:
    goto _1119;
  case 3800147712u:
    goto _1119;
  case 3800147968u:
    goto _1119;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1115:
  _721 = _721__PHI_TEMPORARY;
  _722 = *(uint64_t*)_171;
  _723 = llvm_lshr_u64(_722, 32);
  if ((_723 == UINT64_C(1543503872))) {
    goto _1120;
  } else {
    goto _1121;
  }

_1120:
  _724 = *(void**)_92;
  _725 = ((&((uint8_t*)_724)[((int64_t)16)]));
  _726 = *(uint64_t*)_725;
  _727 = ((&((uint8_t*)_724)[((int64_t)8)]));
  _728 = *(uint64_t*)_727;
  if ((((int64_t)_728) > ((int64_t)_726))) {
    goto _1122;
  } else {
    _745__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1123;
  }

_1122:
  _729 = *(void**)_724;
  _730 = *(uint8_t*)(((&((uint8_t*)_729)[((int64_t)_726)])));
  *(uint64_t*)_725 = (llvm_add_u64(_726, 1));
  _731 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_730)), 0);
  _732 = llvm_sub_u8(32, (llvm_shl_u8(_731, 3)));
  _733 = (((uint32_t)(uint8_t)_730)) << 24;
  if ((((uint8_t)_732) > ((uint8_t)((uint8_t)16)))) {
    _745__PHI_TEMPORARY = _733;   /* for PHI node */
    goto _1123;
  } else {
    _734__PHI_TEMPORARY = 16;   /* for PHI node */
    _735__PHI_TEMPORARY = _733;   /* for PHI node */
    goto _1124;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1124:
  _734 = _734__PHI_TEMPORARY;
  _735 = _735__PHI_TEMPORARY;
  if (((((int64_t)_734) < ((int64_t)UINT64_C(0))) | (((uint64_t)_734) < ((uint64_t)(((uint64_t)(uint8_t)_732)))))) {
    _745__PHI_TEMPORARY = _735;   /* for PHI node */
    goto _1123;
  } else {
    goto _1125;
  }

_1125:
  _736 = *(uint64_t*)_725;
  _737 = *(uint64_t*)_727;
  if ((((int64_t)_737) > ((int64_t)_736))) {
    goto _1126;
  } else {
    _745__PHI_TEMPORARY = _735;   /* for PHI node */
    goto _1123;
  }

_1126:
  _738 = *(void**)_724;
  _739 = *(uint8_t*)(((&((uint8_t*)_738)[((int64_t)_736)])));
  if ((((int8_t)_739) > ((int8_t)((uint8_t)-65)))) {
    _745__PHI_TEMPORARY = _735;   /* for PHI node */
    goto _1123;
  } else {
    goto _1127;
  }

_1127:
  _740 = llvm_select_u32((((int64_t)_736) < ((int64_t)_737)), (((uint32_t)(uint8_t)_739)), 0);
  _741 = *(uint64_t*)_725;
  *(uint64_t*)_725 = (llvm_add_u64(_741, 1));
  _742 = llvm_neg_u64(_734);
  _743 = _735 | (llvm_select_u32((((int64_t)_734) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_742) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_740, (((uint32_t)_742)))))), (llvm_select_u32((((uint64_t)_734) > ((uint64_t)UINT64_C(31))), 0, (_740 << (((uint32_t)_734)))))));
  _744 = llvm_add_u64(_734, -8);
  _734__PHI_TEMPORARY = _744;   /* for PHI node */
  _735__PHI_TEMPORARY = _743;   /* for PHI node */
  goto _1124;

  } while (1); /* end of syntactic loop '' */
_1123:
  _745 = _745__PHI_TEMPORARY;
  _746 = *(uint64_t*)_171;
  _747 = *(uint64_t*)_173;
  _748 = jsyn_cbe_fshl_i64(_747, _746, 32);
  _749 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_745)), _747, 32);
  *(uint64_t*)_171 = _748;
  *(uint64_t*)_173 = _749;
  _750 = *(uint64_t*)_711;
  _751 = *(uint64_t*)_713;
  _752 = *(uint64_t*)_715;
  _753 = *(void**)_92;
  _754 = *(uint64_t*)(((&((uint8_t*)_753)[((int64_t)16)])));
  *(uint64_t*)_710 = _750;
  *(uint64_t*)_711 = _751;
  *(uint64_t*)_713 = _752;
  *(uint64_t*)_715 = _754;
  _755 = llvm_add_u64(_721, 1);
  _721__PHI_TEMPORARY = _755;   /* for PHI node */
  goto _1115;

  } while (1); /* end of syntactic loop '' */
_1121:
  if ((llvm_select_bool((_120 != (((uint32_t)_723))), 1, ((_721 & 1) == UINT64_C(0))))) {
    goto _1128;
  } else {
    goto _1129;
  }

_1129:
  _756 = *(void**)_92;
  _757 = ((&((uint8_t*)_756)[((int64_t)16)]));
  _758 = *(uint64_t*)_757;
  _759 = ((&((uint8_t*)_756)[((int64_t)8)]));
  _760 = *(uint64_t*)_759;
  if ((((int64_t)_760) > ((int64_t)_758))) {
    goto _1130;
  } else {
    _777__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1131;
  }

_1130:
  _761 = *(void**)_756;
  _762 = *(uint8_t*)(((&((uint8_t*)_761)[((int64_t)_758)])));
  *(uint64_t*)_757 = (llvm_add_u64(_758, 1));
  _763 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_762)), 0);
  _764 = llvm_sub_u8(32, (llvm_shl_u8(_763, 3)));
  _765 = (((uint32_t)(uint8_t)_762)) << 24;
  if ((((uint8_t)_764) > ((uint8_t)((uint8_t)16)))) {
    _777__PHI_TEMPORARY = _765;   /* for PHI node */
    goto _1131;
  } else {
    _766__PHI_TEMPORARY = 16;   /* for PHI node */
    _767__PHI_TEMPORARY = _765;   /* for PHI node */
    goto _1132;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1132:
  _766 = _766__PHI_TEMPORARY;
  _767 = _767__PHI_TEMPORARY;
  if (((((int64_t)_766) < ((int64_t)UINT64_C(0))) | (((uint64_t)_766) < ((uint64_t)(((uint64_t)(uint8_t)_764)))))) {
    _777__PHI_TEMPORARY = _767;   /* for PHI node */
    goto _1131;
  } else {
    goto _1133;
  }

_1133:
  _768 = *(uint64_t*)_757;
  _769 = *(uint64_t*)_759;
  if ((((int64_t)_769) > ((int64_t)_768))) {
    goto _1134;
  } else {
    _777__PHI_TEMPORARY = _767;   /* for PHI node */
    goto _1131;
  }

_1134:
  _770 = *(void**)_756;
  _771 = *(uint8_t*)(((&((uint8_t*)_770)[((int64_t)_768)])));
  if ((((int8_t)_771) > ((int8_t)((uint8_t)-65)))) {
    _777__PHI_TEMPORARY = _767;   /* for PHI node */
    goto _1131;
  } else {
    goto _1135;
  }

_1135:
  _772 = llvm_select_u32((((int64_t)_768) < ((int64_t)_769)), (((uint32_t)(uint8_t)_771)), 0);
  _773 = *(uint64_t*)_757;
  *(uint64_t*)_757 = (llvm_add_u64(_773, 1));
  _774 = llvm_neg_u64(_766);
  _775 = _767 | (llvm_select_u32((((int64_t)_766) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_774) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_772, (((uint32_t)_774)))))), (llvm_select_u32((((uint64_t)_766) > ((uint64_t)UINT64_C(31))), 0, (_772 << (((uint32_t)_766)))))));
  _776 = llvm_add_u64(_766, -8);
  _766__PHI_TEMPORARY = _776;   /* for PHI node */
  _767__PHI_TEMPORARY = _775;   /* for PHI node */
  goto _1132;

  } while (1); /* end of syntactic loop '' */
_1131:
  _777 = _777__PHI_TEMPORARY;
  _778 = *(uint64_t*)_171;
  _779 = *(uint64_t*)_173;
  _780 = jsyn_cbe_fshl_i64(_779, _778, 32);
  _781 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_777)), _779, 32);
  *(uint64_t*)_171 = _780;
  *(uint64_t*)_173 = _781;
  _782 = *(uint64_t*)_711;
  _783 = *(uint64_t*)_713;
  _784 = *(uint64_t*)_715;
  _785 = *(void**)_92;
  _786 = *(uint64_t*)(((&((uint8_t*)_785)[((int64_t)16)])));
  *(uint64_t*)_710 = _782;
  *(uint64_t*)_711 = _783;
  *(uint64_t*)_713 = _784;
  *(uint64_t*)_715 = _786;
  goto _1128;

_1128:
  switch (_720) {
  default:
    goto _1114;
  case 167772160u:
    _791__PHI_TEMPORARY = 0;   /* for PHI node */
    _792__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1116;
  case 3800082944u:
    goto _1117;
  case 3800083200u:
    goto _1117;
  case 3800083712u:
    goto _1117;
  case 3800083968u:
    goto _1117;
  case 3800083456u:
    goto _1118;
  case 3800147456u:
    goto _1119;
  case 3800147712u:
    goto _1119;
  case 3800147968u:
    goto _1119;
  }

_1119:
  _789 = llvm_add_u64(_607, 1);
  _791__PHI_TEMPORARY = _606;   /* for PHI node */
  _792__PHI_TEMPORARY = _789;   /* for PHI node */
  goto _1116;

_1118:
  _787 = llvm_add_u64(_606, -1);
  _791__PHI_TEMPORARY = _787;   /* for PHI node */
  _792__PHI_TEMPORARY = _607;   /* for PHI node */
  goto _1116;

_1117:
  _790 = llvm_add_u64(_606, 1);
  _791__PHI_TEMPORARY = _790;   /* for PHI node */
  _792__PHI_TEMPORARY = _607;   /* for PHI node */
  goto _1116;

_1114:
  _788 = llvm_add_u64(_607, (((int64_t)(bool)0-(_720 == 3800148224u))));
  _791__PHI_TEMPORARY = _606;   /* for PHI node */
  _792__PHI_TEMPORARY = _788;   /* for PHI node */
  goto _1116;

_1116:
  _791 = _791__PHI_TEMPORARY;
  _792 = _792__PHI_TEMPORARY;
  _793 = llvm_OC_ctlz_OC_i32((_720 ^ -1), 0);
  _794 = llvm_OC_cttz_OC_i32(_720, 0);
  _795 = _794 & 56;
  _796 = _605 & (((((_793 != 1u) & (((uint32_t)(llvm_add_u32((_793 << 3), _795))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_794) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_720 & 12632256) ^ 8421504), _795)) == 0u)))) & ((((_720 & -33554432) != 3221225472u) & ((_720 & -2097152) != 3766484992u)) & ((_720 & -1048576) != 4034920448u))) & ((((uint32_t)_720) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_720, 293568512))) < ((uint32_t)101662656u))));
  _605__PHI_TEMPORARY = _796;   /* for PHI node */
  _606__PHI_TEMPORARY = _791;   /* for PHI node */
  _607__PHI_TEMPORARY = _792;   /* for PHI node */
  goto _1097;

  } while (1); /* end of syntactic loop '' */
_1107:
  _615 = *(void**)_92;
  _616 = ((&((uint8_t*)_615)[((int64_t)16)]));
  _617 = *(uint64_t*)_616;
  _618 = ((&((uint8_t*)_615)[((int64_t)8)]));
  _619 = *(uint64_t*)_618;
  if ((((int64_t)_619) > ((int64_t)_617))) {
    goto _1136;
  } else {
    _636__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1137;
  }

_1136:
  _620 = *(void**)_615;
  _621 = *(uint8_t*)(((&((uint8_t*)_620)[((int64_t)_617)])));
  *(uint64_t*)_616 = (llvm_add_u64(_617, 1));
  _622 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_621)), 0);
  _623 = llvm_sub_u8(32, (llvm_shl_u8(_622, 3)));
  _624 = (((uint32_t)(uint8_t)_621)) << 24;
  if ((((uint8_t)_623) > ((uint8_t)((uint8_t)16)))) {
    _636__PHI_TEMPORARY = _624;   /* for PHI node */
    goto _1137;
  } else {
    _625__PHI_TEMPORARY = 16;   /* for PHI node */
    _626__PHI_TEMPORARY = _624;   /* for PHI node */
    goto _1138;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1138:
  _625 = _625__PHI_TEMPORARY;
  _626 = _626__PHI_TEMPORARY;
  if (((((int64_t)_625) < ((int64_t)UINT64_C(0))) | (((uint64_t)_625) < ((uint64_t)(((uint64_t)(uint8_t)_623)))))) {
    _636__PHI_TEMPORARY = _626;   /* for PHI node */
    goto _1137;
  } else {
    goto _1139;
  }

_1139:
  _627 = *(uint64_t*)_616;
  _628 = *(uint64_t*)_618;
  if ((((int64_t)_628) > ((int64_t)_627))) {
    goto _1140;
  } else {
    _636__PHI_TEMPORARY = _626;   /* for PHI node */
    goto _1137;
  }

_1140:
  _629 = *(void**)_615;
  _630 = *(uint8_t*)(((&((uint8_t*)_629)[((int64_t)_627)])));
  if ((((int8_t)_630) > ((int8_t)((uint8_t)-65)))) {
    _636__PHI_TEMPORARY = _626;   /* for PHI node */
    goto _1137;
  } else {
    goto _1141;
  }

_1141:
  _631 = llvm_select_u32((((int64_t)_627) < ((int64_t)_628)), (((uint32_t)(uint8_t)_630)), 0);
  _632 = *(uint64_t*)_616;
  *(uint64_t*)_616 = (llvm_add_u64(_632, 1));
  _633 = llvm_neg_u64(_625);
  _634 = _626 | (llvm_select_u32((((int64_t)_625) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_633) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_631, (((uint32_t)_633)))))), (llvm_select_u32((((uint64_t)_625) > ((uint64_t)UINT64_C(31))), 0, (_631 << (((uint32_t)_625)))))));
  _635 = llvm_add_u64(_625, -8);
  _625__PHI_TEMPORARY = _635;   /* for PHI node */
  _626__PHI_TEMPORARY = _634;   /* for PHI node */
  goto _1138;

  } while (1); /* end of syntactic loop '' */
_1137:
  _636 = _636__PHI_TEMPORARY;
  _637 = *(uint64_t*)_171;
  _638 = *(uint64_t*)_173;
  _639 = jsyn_cbe_fshl_i64(_638, _637, 32);
  _640 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_636)), _638, 32);
  *(uint64_t*)_171 = _639;
  *(uint64_t*)_173 = _640;
  _641 = ((&((uint8_t*)_92)[((int64_t)48)]));
  _642 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _643 = *(uint64_t*)_642;
  _644 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _645 = *(uint64_t*)_644;
  _646 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _647 = *(uint64_t*)_646;
  _648 = *(void**)_92;
  _649 = *(uint64_t*)(((&((uint8_t*)_648)[((int64_t)16)])));
  *(uint64_t*)_641 = _643;
  *(uint64_t*)_642 = _645;
  *(uint64_t*)_644 = _647;
  *(uint64_t*)_646 = _649;
  _650 = llvm_select_u64((_609 == UINT64_C(167772160)), 0, _606);
  _651 = llvm_select_u64((_609 == UINT64_C(167772160)), 0, _607);
  if ((_609 == UINT64_C(218103808))) {
    goto _1142;
  } else {
    _958__PHI_TEMPORARY = _605;   /* for PHI node */
    _959__PHI_TEMPORARY = _650;   /* for PHI node */
    _960__PHI_TEMPORARY = _651;   /* for PHI node */
    goto _1103;
  }

_1142:
  _652 = *(uint64_t*)_171;
  if (((_652 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1143;
  } else {
    _958__PHI_TEMPORARY = _605;   /* for PHI node */
    _959__PHI_TEMPORARY = _606;   /* for PHI node */
    _960__PHI_TEMPORARY = _607;   /* for PHI node */
    goto _1103;
  }

_1143:
  _653 = *(void**)_92;
  _654 = ((&((uint8_t*)_653)[((int64_t)16)]));
  _655 = *(uint64_t*)_654;
  _656 = ((&((uint8_t*)_653)[((int64_t)8)]));
  _657 = *(uint64_t*)_656;
  if ((((int64_t)_657) > ((int64_t)_655))) {
    goto _1144;
  } else {
    _674__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1145;
  }

_1144:
  _658 = *(void**)_653;
  _659 = *(uint8_t*)(((&((uint8_t*)_658)[((int64_t)_655)])));
  *(uint64_t*)_654 = (llvm_add_u64(_655, 1));
  _660 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_659)), 0);
  _661 = llvm_sub_u8(32, (llvm_shl_u8(_660, 3)));
  _662 = (((uint32_t)(uint8_t)_659)) << 24;
  if ((((uint8_t)_661) > ((uint8_t)((uint8_t)16)))) {
    _674__PHI_TEMPORARY = _662;   /* for PHI node */
    goto _1145;
  } else {
    _663__PHI_TEMPORARY = 16;   /* for PHI node */
    _664__PHI_TEMPORARY = _662;   /* for PHI node */
    goto _1146;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1146:
  _663 = _663__PHI_TEMPORARY;
  _664 = _664__PHI_TEMPORARY;
  if (((((int64_t)_663) < ((int64_t)UINT64_C(0))) | (((uint64_t)_663) < ((uint64_t)(((uint64_t)(uint8_t)_661)))))) {
    _674__PHI_TEMPORARY = _664;   /* for PHI node */
    goto _1145;
  } else {
    goto _1147;
  }

_1147:
  _665 = *(uint64_t*)_654;
  _666 = *(uint64_t*)_656;
  if ((((int64_t)_666) > ((int64_t)_665))) {
    goto _1148;
  } else {
    _674__PHI_TEMPORARY = _664;   /* for PHI node */
    goto _1145;
  }

_1148:
  _667 = *(void**)_653;
  _668 = *(uint8_t*)(((&((uint8_t*)_667)[((int64_t)_665)])));
  if ((((int8_t)_668) > ((int8_t)((uint8_t)-65)))) {
    _674__PHI_TEMPORARY = _664;   /* for PHI node */
    goto _1145;
  } else {
    goto _1149;
  }

_1149:
  _669 = llvm_select_u32((((int64_t)_665) < ((int64_t)_666)), (((uint32_t)(uint8_t)_668)), 0);
  _670 = *(uint64_t*)_654;
  *(uint64_t*)_654 = (llvm_add_u64(_670, 1));
  _671 = llvm_neg_u64(_663);
  _672 = _664 | (llvm_select_u32((((int64_t)_663) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_671) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_669, (((uint32_t)_671)))))), (llvm_select_u32((((uint64_t)_663) > ((uint64_t)UINT64_C(31))), 0, (_669 << (((uint32_t)_663)))))));
  _673 = llvm_add_u64(_663, -8);
  _663__PHI_TEMPORARY = _673;   /* for PHI node */
  _664__PHI_TEMPORARY = _672;   /* for PHI node */
  goto _1146;

  } while (1); /* end of syntactic loop '' */
_1145:
  _674 = _674__PHI_TEMPORARY;
  _675 = *(uint64_t*)_171;
  _676 = *(uint64_t*)_173;
  _677 = jsyn_cbe_fshl_i64(_676, _675, 32);
  _678 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_674)), _676, 32);
  *(uint64_t*)_171 = _677;
  *(uint64_t*)_173 = _678;
  _679 = *(uint64_t*)_642;
  _680 = *(uint64_t*)_644;
  _681 = *(uint64_t*)_646;
  _682 = *(void**)_92;
  _683 = *(uint64_t*)(((&((uint8_t*)_682)[((int64_t)16)])));
  *(uint64_t*)_641 = _679;
  *(uint64_t*)_642 = _680;
  *(uint64_t*)_644 = _681;
  *(uint64_t*)_646 = _683;
  _958__PHI_TEMPORARY = _605;   /* for PHI node */
  _959__PHI_TEMPORARY = 0;   /* for PHI node */
  _960__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1103;

  do {     /* Syntactic loop '' to make GCC happy */
_1098:
  _797 = _797__PHI_TEMPORARY;
  _798 = _798__PHI_TEMPORARY;
  _799 = _799__PHI_TEMPORARY;
  _800 = *(uint64_t*)_171;
  _801 = llvm_lshr_u64(_800, 32);
  _802 = ((uint32_t)_801);
  switch ((((uint32_t)_801))) {
  default:
    goto _1150;
  case 603979776u:
    _958__PHI_TEMPORARY = _797;   /* for PHI node */
    _959__PHI_TEMPORARY = _798;   /* for PHI node */
    _960__PHI_TEMPORARY = _799;   /* for PHI node */
    goto _1103;
  case 4294967295u:
    _958__PHI_TEMPORARY = _797;   /* for PHI node */
    _959__PHI_TEMPORARY = _798;   /* for PHI node */
    _960__PHI_TEMPORARY = _799;   /* for PHI node */
    goto _1103;
  }

_1150:
  _803 = ((bool)_118&1u);
  if (_803) {
    goto _1151;
  } else {
    goto _1152;
  }

_1151:
  switch ((((uint32_t)_801))) {
  default:
    goto _1152;
  case 218103808u:
    goto _1153;
  case 167772160u:
    goto _1153;
  }

_1152:
  if ((_120 == _802)) {
    goto _1154;
  } else {
    goto _1155;
  }

_1154:
  _873 = *(uint64_t*)_171;
  if (_803) {
    goto _1156;
  } else {
    _875__PHI_TEMPORARY = _873;   /* for PHI node */
    goto _1157;
  }

_1156:
  _874 = *(uint64_t*)_173;
  if ((llvm_select_bool((_120 == (((uint32_t)(llvm_lshr_u64(_873, 32))))), (_120 == (((uint32_t)_874))), 0))) {
    _875__PHI_TEMPORARY = _874;   /* for PHI node */
    goto _1157;
  } else {
    goto _1155;
  }

_1157:
  _875 = _875__PHI_TEMPORARY;
  if ((_120 == (((uint32_t)(llvm_lshr_u64(_875, 32)))))) {
    _958__PHI_TEMPORARY = _797;   /* for PHI node */
    _959__PHI_TEMPORARY = _798;   /* for PHI node */
    _960__PHI_TEMPORARY = _799;   /* for PHI node */
    goto _1103;
  } else {
    goto _1155;
  }

_1155:
  if ((_801 == UINT64_C(1543503872))) {
    goto _1158;
  } else {
    goto _1159;
  }

_1158:
  _876 = *(uint64_t*)_173;
  switch ((((uint32_t)_876))) {
  default:
    goto _1159;
  case 167772160u:
    goto _1160;
  case 218103808u:
    goto _1161;
  }

_1159:
  _877 = *(void**)_92;
  _878 = ((&((uint8_t*)_877)[((int64_t)16)]));
  _879 = *(uint64_t*)_878;
  _880 = ((&((uint8_t*)_877)[((int64_t)8)]));
  _881 = *(uint64_t*)_880;
  if ((((int64_t)_881) > ((int64_t)_879))) {
    goto _1162;
  } else {
    _898__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1163;
  }

_1162:
  _882 = *(void**)_877;
  _883 = *(uint8_t*)(((&((uint8_t*)_882)[((int64_t)_879)])));
  *(uint64_t*)_878 = (llvm_add_u64(_879, 1));
  _884 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_883)), 0);
  _885 = llvm_sub_u8(32, (llvm_shl_u8(_884, 3)));
  _886 = (((uint32_t)(uint8_t)_883)) << 24;
  if ((((uint8_t)_885) > ((uint8_t)((uint8_t)16)))) {
    _898__PHI_TEMPORARY = _886;   /* for PHI node */
    goto _1163;
  } else {
    _887__PHI_TEMPORARY = 16;   /* for PHI node */
    _888__PHI_TEMPORARY = _886;   /* for PHI node */
    goto _1164;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1164:
  _887 = _887__PHI_TEMPORARY;
  _888 = _888__PHI_TEMPORARY;
  if (((((int64_t)_887) < ((int64_t)UINT64_C(0))) | (((uint64_t)_887) < ((uint64_t)(((uint64_t)(uint8_t)_885)))))) {
    _898__PHI_TEMPORARY = _888;   /* for PHI node */
    goto _1163;
  } else {
    goto _1165;
  }

_1165:
  _889 = *(uint64_t*)_878;
  _890 = *(uint64_t*)_880;
  if ((((int64_t)_890) > ((int64_t)_889))) {
    goto _1166;
  } else {
    _898__PHI_TEMPORARY = _888;   /* for PHI node */
    goto _1163;
  }

_1166:
  _891 = *(void**)_877;
  _892 = *(uint8_t*)(((&((uint8_t*)_891)[((int64_t)_889)])));
  if ((((int8_t)_892) > ((int8_t)((uint8_t)-65)))) {
    _898__PHI_TEMPORARY = _888;   /* for PHI node */
    goto _1163;
  } else {
    goto _1167;
  }

_1167:
  _893 = llvm_select_u32((((int64_t)_889) < ((int64_t)_890)), (((uint32_t)(uint8_t)_892)), 0);
  _894 = *(uint64_t*)_878;
  *(uint64_t*)_878 = (llvm_add_u64(_894, 1));
  _895 = llvm_neg_u64(_887);
  _896 = _888 | (llvm_select_u32((((int64_t)_887) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_895) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_893, (((uint32_t)_895)))))), (llvm_select_u32((((uint64_t)_887) > ((uint64_t)UINT64_C(31))), 0, (_893 << (((uint32_t)_887)))))));
  _897 = llvm_add_u64(_887, -8);
  _887__PHI_TEMPORARY = _897;   /* for PHI node */
  _888__PHI_TEMPORARY = _896;   /* for PHI node */
  goto _1164;

  } while (1); /* end of syntactic loop '' */
_1163:
  _898 = _898__PHI_TEMPORARY;
  _899 = *(uint64_t*)_171;
  _900 = *(uint64_t*)_173;
  _901 = jsyn_cbe_fshl_i64(_900, _899, 32);
  _902 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_898)), _900, 32);
  *(uint64_t*)_171 = _901;
  *(uint64_t*)_173 = _902;
  _903 = ((&((uint8_t*)_92)[((int64_t)48)]));
  _904 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _905 = *(uint64_t*)_904;
  _906 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _907 = *(uint64_t*)_906;
  _908 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _909 = *(uint64_t*)_908;
  _910 = *(void**)_92;
  _911 = *(uint64_t*)(((&((uint8_t*)_910)[((int64_t)16)])));
  *(uint64_t*)_903 = _905;
  *(uint64_t*)_904 = _907;
  *(uint64_t*)_906 = _909;
  *(uint64_t*)_908 = _911;
  _912 = *(uint64_t*)_171;
  _913 = ((uint32_t)_912);
  if ((_913 == 1543503872u)) {
    goto _1168;
  } else {
    _947__PHI_TEMPORARY = _913;   /* for PHI node */
    goto _1169;
  }

_1168:
  _914 = *(void**)_92;
  _915 = ((&((uint8_t*)_914)[((int64_t)16)]));
  _916 = *(uint64_t*)_915;
  _917 = ((&((uint8_t*)_914)[((int64_t)8)]));
  _918 = *(uint64_t*)_917;
  if ((((int64_t)_918) > ((int64_t)_916))) {
    goto _1170;
  } else {
    _935__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1171;
  }

_1170:
  _919 = *(void**)_914;
  _920 = *(uint8_t*)(((&((uint8_t*)_919)[((int64_t)_916)])));
  *(uint64_t*)_915 = (llvm_add_u64(_916, 1));
  _921 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_920)), 0);
  _922 = llvm_sub_u8(32, (llvm_shl_u8(_921, 3)));
  _923 = (((uint32_t)(uint8_t)_920)) << 24;
  if ((((uint8_t)_922) > ((uint8_t)((uint8_t)16)))) {
    _935__PHI_TEMPORARY = _923;   /* for PHI node */
    goto _1171;
  } else {
    _924__PHI_TEMPORARY = 16;   /* for PHI node */
    _925__PHI_TEMPORARY = _923;   /* for PHI node */
    goto _1172;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1172:
  _924 = _924__PHI_TEMPORARY;
  _925 = _925__PHI_TEMPORARY;
  if (((((int64_t)_924) < ((int64_t)UINT64_C(0))) | (((uint64_t)_924) < ((uint64_t)(((uint64_t)(uint8_t)_922)))))) {
    _935__PHI_TEMPORARY = _925;   /* for PHI node */
    goto _1171;
  } else {
    goto _1173;
  }

_1173:
  _926 = *(uint64_t*)_915;
  _927 = *(uint64_t*)_917;
  if ((((int64_t)_927) > ((int64_t)_926))) {
    goto _1174;
  } else {
    _935__PHI_TEMPORARY = _925;   /* for PHI node */
    goto _1171;
  }

_1174:
  _928 = *(void**)_914;
  _929 = *(uint8_t*)(((&((uint8_t*)_928)[((int64_t)_926)])));
  if ((((int8_t)_929) > ((int8_t)((uint8_t)-65)))) {
    _935__PHI_TEMPORARY = _925;   /* for PHI node */
    goto _1171;
  } else {
    goto _1175;
  }

_1175:
  _930 = llvm_select_u32((((int64_t)_926) < ((int64_t)_927)), (((uint32_t)(uint8_t)_929)), 0);
  _931 = *(uint64_t*)_915;
  *(uint64_t*)_915 = (llvm_add_u64(_931, 1));
  _932 = llvm_neg_u64(_924);
  _933 = _925 | (llvm_select_u32((((int64_t)_924) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_932) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_930, (((uint32_t)_932)))))), (llvm_select_u32((((uint64_t)_924) > ((uint64_t)UINT64_C(31))), 0, (_930 << (((uint32_t)_924)))))));
  _934 = llvm_add_u64(_924, -8);
  _924__PHI_TEMPORARY = _934;   /* for PHI node */
  _925__PHI_TEMPORARY = _933;   /* for PHI node */
  goto _1172;

  } while (1); /* end of syntactic loop '' */
_1171:
  _935 = _935__PHI_TEMPORARY;
  _936 = *(uint64_t*)_171;
  _937 = *(uint64_t*)_173;
  _938 = jsyn_cbe_fshl_i64(_937, _936, 32);
  _939 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_935)), _937, 32);
  *(uint64_t*)_171 = _938;
  *(uint64_t*)_173 = _939;
  _940 = *(uint64_t*)_904;
  _941 = *(uint64_t*)_906;
  _942 = *(uint64_t*)_908;
  _943 = *(void**)_92;
  _944 = *(uint64_t*)(((&((uint8_t*)_943)[((int64_t)16)])));
  *(uint64_t*)_903 = _940;
  *(uint64_t*)_904 = _941;
  *(uint64_t*)_906 = _942;
  *(uint64_t*)_908 = _944;
  _945 = *(uint64_t*)_171;
  _946 = ((uint32_t)_945);
  if ((_946 == 4294967295u)) {
    _958__PHI_TEMPORARY = _797;   /* for PHI node */
    _959__PHI_TEMPORARY = _798;   /* for PHI node */
    _960__PHI_TEMPORARY = _799;   /* for PHI node */
    goto _1103;
  } else {
    _947__PHI_TEMPORARY = _946;   /* for PHI node */
    goto _1169;
  }

_1169:
  _947 = _947__PHI_TEMPORARY;
  switch (_947) {
  default:
    goto _1176;
  case 167772160u:
    _952__PHI_TEMPORARY = 0;   /* for PHI node */
    _953__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1177;
  case 3800083968u:
    goto _1178;
  case 3800083712u:
    goto _1178;
  case 3800083200u:
    goto _1178;
  case 3800082944u:
    goto _1178;
  case 3800083456u:
    goto _1179;
  case 3800147968u:
    goto _1180;
  case 3800147712u:
    goto _1180;
  case 3800147456u:
    goto _1180;
  }

_1180:
  _950 = llvm_add_u64(_799, 1);
  _952__PHI_TEMPORARY = _798;   /* for PHI node */
  _953__PHI_TEMPORARY = _950;   /* for PHI node */
  goto _1177;

_1179:
  _948 = llvm_add_u64(_798, -1);
  _952__PHI_TEMPORARY = _948;   /* for PHI node */
  _953__PHI_TEMPORARY = _799;   /* for PHI node */
  goto _1177;

_1178:
  _951 = llvm_add_u64(_798, 1);
  _952__PHI_TEMPORARY = _951;   /* for PHI node */
  _953__PHI_TEMPORARY = _799;   /* for PHI node */
  goto _1177;

_1176:
  _949 = llvm_add_u64(_799, (((int64_t)(bool)0-(_947 == 3800148224u))));
  _952__PHI_TEMPORARY = _798;   /* for PHI node */
  _953__PHI_TEMPORARY = _949;   /* for PHI node */
  goto _1177;

_1177:
  _952 = _952__PHI_TEMPORARY;
  _953 = _953__PHI_TEMPORARY;
  _954 = llvm_OC_ctlz_OC_i32((_947 ^ -1), 0);
  _955 = llvm_OC_cttz_OC_i32(_947, 0);
  _956 = _955 & 56;
  _957 = _797 & (((((_954 != 1u) & (((uint32_t)(llvm_add_u32((_954 << 3), _956))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_955) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_947 & 12632256) ^ 8421504), _956)) == 0u)))) & ((((_947 & -33554432) != 3221225472u) & ((_947 & -2097152) != 3766484992u)) & ((_947 & -1048576) != 4034920448u))) & ((((uint32_t)_947) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_947, 293568512))) < ((uint32_t)101662656u))));
  _797__PHI_TEMPORARY = _957;   /* for PHI node */
  _798__PHI_TEMPORARY = _952;   /* for PHI node */
  _799__PHI_TEMPORARY = _953;   /* for PHI node */
  goto _1098;

  } while (1); /* end of syntactic loop '' */
_1153:
  _804 = *(void**)_92;
  _805 = ((&((uint8_t*)_804)[((int64_t)16)]));
  _806 = *(uint64_t*)_805;
  _807 = ((&((uint8_t*)_804)[((int64_t)8)]));
  _808 = *(uint64_t*)_807;
  if ((((int64_t)_808) > ((int64_t)_806))) {
    goto _1181;
  } else {
    _825__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1182;
  }

_1181:
  _809 = *(void**)_804;
  _810 = *(uint8_t*)(((&((uint8_t*)_809)[((int64_t)_806)])));
  *(uint64_t*)_805 = (llvm_add_u64(_806, 1));
  _811 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_810)), 0);
  _812 = llvm_sub_u8(32, (llvm_shl_u8(_811, 3)));
  _813 = (((uint32_t)(uint8_t)_810)) << 24;
  if ((((uint8_t)_812) > ((uint8_t)((uint8_t)16)))) {
    _825__PHI_TEMPORARY = _813;   /* for PHI node */
    goto _1182;
  } else {
    _814__PHI_TEMPORARY = 16;   /* for PHI node */
    _815__PHI_TEMPORARY = _813;   /* for PHI node */
    goto _1183;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1183:
  _814 = _814__PHI_TEMPORARY;
  _815 = _815__PHI_TEMPORARY;
  if (((((int64_t)_814) < ((int64_t)UINT64_C(0))) | (((uint64_t)_814) < ((uint64_t)(((uint64_t)(uint8_t)_812)))))) {
    _825__PHI_TEMPORARY = _815;   /* for PHI node */
    goto _1182;
  } else {
    goto _1184;
  }

_1184:
  _816 = *(uint64_t*)_805;
  _817 = *(uint64_t*)_807;
  if ((((int64_t)_817) > ((int64_t)_816))) {
    goto _1185;
  } else {
    _825__PHI_TEMPORARY = _815;   /* for PHI node */
    goto _1182;
  }

_1185:
  _818 = *(void**)_804;
  _819 = *(uint8_t*)(((&((uint8_t*)_818)[((int64_t)_816)])));
  if ((((int8_t)_819) > ((int8_t)((uint8_t)-65)))) {
    _825__PHI_TEMPORARY = _815;   /* for PHI node */
    goto _1182;
  } else {
    goto _1186;
  }

_1186:
  _820 = llvm_select_u32((((int64_t)_816) < ((int64_t)_817)), (((uint32_t)(uint8_t)_819)), 0);
  _821 = *(uint64_t*)_805;
  *(uint64_t*)_805 = (llvm_add_u64(_821, 1));
  _822 = llvm_neg_u64(_814);
  _823 = _815 | (llvm_select_u32((((int64_t)_814) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_822) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_820, (((uint32_t)_822)))))), (llvm_select_u32((((uint64_t)_814) > ((uint64_t)UINT64_C(31))), 0, (_820 << (((uint32_t)_814)))))));
  _824 = llvm_add_u64(_814, -8);
  _814__PHI_TEMPORARY = _824;   /* for PHI node */
  _815__PHI_TEMPORARY = _823;   /* for PHI node */
  goto _1183;

  } while (1); /* end of syntactic loop '' */
_1182:
  _825 = _825__PHI_TEMPORARY;
  _826 = *(uint64_t*)_171;
  _827 = *(uint64_t*)_173;
  _828 = jsyn_cbe_fshl_i64(_827, _826, 32);
  _829 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_825)), _827, 32);
  *(uint64_t*)_171 = _828;
  *(uint64_t*)_173 = _829;
  _830 = ((&((uint8_t*)_92)[((int64_t)48)]));
  _831 = ((&((uint8_t*)_92)[((int64_t)56)]));
  _832 = *(uint64_t*)_831;
  _833 = ((&((uint8_t*)_92)[((int64_t)64)]));
  _834 = *(uint64_t*)_833;
  _835 = ((&((uint8_t*)_92)[((int64_t)72)]));
  _836 = *(uint64_t*)_835;
  _837 = *(void**)_92;
  _838 = *(uint64_t*)(((&((uint8_t*)_837)[((int64_t)16)])));
  *(uint64_t*)_830 = _832;
  *(uint64_t*)_831 = _834;
  *(uint64_t*)_833 = _836;
  *(uint64_t*)_835 = _838;
  _839 = llvm_select_u64((_801 == UINT64_C(167772160)), 0, _798);
  _840 = llvm_select_u64((_801 == UINT64_C(167772160)), 0, _799);
  if ((_801 == UINT64_C(218103808))) {
    goto _1187;
  } else {
    _958__PHI_TEMPORARY = _797;   /* for PHI node */
    _959__PHI_TEMPORARY = _839;   /* for PHI node */
    _960__PHI_TEMPORARY = _840;   /* for PHI node */
    goto _1103;
  }

_1187:
  _841 = *(uint64_t*)_171;
  if (((_841 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1188;
  } else {
    _958__PHI_TEMPORARY = _797;   /* for PHI node */
    _959__PHI_TEMPORARY = _798;   /* for PHI node */
    _960__PHI_TEMPORARY = _799;   /* for PHI node */
    goto _1103;
  }

_1188:
  _842 = *(void**)_92;
  _843 = ((&((uint8_t*)_842)[((int64_t)16)]));
  _844 = *(uint64_t*)_843;
  _845 = ((&((uint8_t*)_842)[((int64_t)8)]));
  _846 = *(uint64_t*)_845;
  if ((((int64_t)_846) > ((int64_t)_844))) {
    goto _1189;
  } else {
    _863__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1190;
  }

_1189:
  _847 = *(void**)_842;
  _848 = *(uint8_t*)(((&((uint8_t*)_847)[((int64_t)_844)])));
  *(uint64_t*)_843 = (llvm_add_u64(_844, 1));
  _849 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_848)), 0);
  _850 = llvm_sub_u8(32, (llvm_shl_u8(_849, 3)));
  _851 = (((uint32_t)(uint8_t)_848)) << 24;
  if ((((uint8_t)_850) > ((uint8_t)((uint8_t)16)))) {
    _863__PHI_TEMPORARY = _851;   /* for PHI node */
    goto _1190;
  } else {
    _852__PHI_TEMPORARY = 16;   /* for PHI node */
    _853__PHI_TEMPORARY = _851;   /* for PHI node */
    goto _1191;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1191:
  _852 = _852__PHI_TEMPORARY;
  _853 = _853__PHI_TEMPORARY;
  if (((((int64_t)_852) < ((int64_t)UINT64_C(0))) | (((uint64_t)_852) < ((uint64_t)(((uint64_t)(uint8_t)_850)))))) {
    _863__PHI_TEMPORARY = _853;   /* for PHI node */
    goto _1190;
  } else {
    goto _1192;
  }

_1192:
  _854 = *(uint64_t*)_843;
  _855 = *(uint64_t*)_845;
  if ((((int64_t)_855) > ((int64_t)_854))) {
    goto _1193;
  } else {
    _863__PHI_TEMPORARY = _853;   /* for PHI node */
    goto _1190;
  }

_1193:
  _856 = *(void**)_842;
  _857 = *(uint8_t*)(((&((uint8_t*)_856)[((int64_t)_854)])));
  if ((((int8_t)_857) > ((int8_t)((uint8_t)-65)))) {
    _863__PHI_TEMPORARY = _853;   /* for PHI node */
    goto _1190;
  } else {
    goto _1194;
  }

_1194:
  _858 = llvm_select_u32((((int64_t)_854) < ((int64_t)_855)), (((uint32_t)(uint8_t)_857)), 0);
  _859 = *(uint64_t*)_843;
  *(uint64_t*)_843 = (llvm_add_u64(_859, 1));
  _860 = llvm_neg_u64(_852);
  _861 = _853 | (llvm_select_u32((((int64_t)_852) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_860) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_858, (((uint32_t)_860)))))), (llvm_select_u32((((uint64_t)_852) > ((uint64_t)UINT64_C(31))), 0, (_858 << (((uint32_t)_852)))))));
  _862 = llvm_add_u64(_852, -8);
  _852__PHI_TEMPORARY = _862;   /* for PHI node */
  _853__PHI_TEMPORARY = _861;   /* for PHI node */
  goto _1191;

  } while (1); /* end of syntactic loop '' */
_1190:
  _863 = _863__PHI_TEMPORARY;
  _864 = *(uint64_t*)_171;
  _865 = *(uint64_t*)_173;
  _866 = jsyn_cbe_fshl_i64(_865, _864, 32);
  _867 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_863)), _865, 32);
  *(uint64_t*)_171 = _866;
  *(uint64_t*)_173 = _867;
  _868 = *(uint64_t*)_831;
  _869 = *(uint64_t*)_833;
  _870 = *(uint64_t*)_835;
  _871 = *(void**)_92;
  _872 = *(uint64_t*)(((&((uint8_t*)_871)[((int64_t)16)])));
  *(uint64_t*)_830 = _868;
  *(uint64_t*)_831 = _869;
  *(uint64_t*)_833 = _870;
  *(uint64_t*)_835 = _872;
  _958__PHI_TEMPORARY = _797;   /* for PHI node */
  _959__PHI_TEMPORARY = 0;   /* for PHI node */
  _960__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1103;

_1161:
  if (((_876 & INT64_C(-4294967296)) == UINT64_C(720575940379279360))) {
    goto _1160;
  } else {
    _958__PHI_TEMPORARY = _797;   /* for PHI node */
    _959__PHI_TEMPORARY = _798;   /* for PHI node */
    _960__PHI_TEMPORARY = _799;   /* for PHI node */
    goto _1103;
  }

_1160:
  _958__PHI_TEMPORARY = _797;   /* for PHI node */
  _959__PHI_TEMPORARY = 0;   /* for PHI node */
  _960__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1103;

_1103:
  _958 = _958__PHI_TEMPORARY;
  _959 = _959__PHI_TEMPORARY;
  _960 = _960__PHI_TEMPORARY;
  if (_958) {
    goto _1195;
  } else {
    _964__PHI_TEMPORARY = 762;   /* for PHI node */
    goto _1196;
  }

_1195:
  if ((_120 == 654311424u)) {
    _964__PHI_TEMPORARY = 51;   /* for PHI node */
    goto _1196;
  } else {
    goto _1197;
  }

_1197:
  if ((llvm_select_bool((_959 == UINT64_C(0)), (_960 == UINT64_C(0)), 0))) {
    goto _1198;
  } else {
    _964__PHI_TEMPORARY = 766;   /* for PHI node */
    goto _1196;
  }

_1198:
  switch (_120) {
  default:
    goto _1199;
  case 570425344u:
    _964__PHI_TEMPORARY = 50;   /* for PHI node */
    goto _1196;
  case 1610612736u:
    goto _1200;
  }

_1199:
  _961 = julia_AssertionError_2940(_91, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)72)]))));
  *(void**)(((&((uint8_t*)(&_93))[((int64_t)16)]))) = ((_961.array[0]));
  _962 = *(void**)(((&((uint8_t*)_91)[((int64_t)16)])));
  _963 = jsk_ijl_gc_small_alloc(_962, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)552)])))));
  *(void**)(((&((uint8_t*)_963)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)552)])));
  *(void**)_963 = ((_961.array[0]));
  *(void**)(((&((uint8_t*)(&_93))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_963);
  __builtin_unreachable();

_1200:
  _964__PHI_TEMPORARY = 52;   /* for PHI node */
  goto _1196;

_1196:
  _964 = _964__PHI_TEMPORARY;
  julia_emit_4484((&_110), _91, _92, _964, 1);
  _164__PHI_TEMPORARY = (&_110);   /* for PHI node */
  goto _980;

}


static __noreturn void julia_throw_boundserror_4642(void* _1201, void* _1202, void* _1203) {
  jsk_throw();
  __builtin_unreachable();

}


static __noreturn void julia__throw_argerror_2601(void* _1204, void* _1205) {
  jsk_throw();
  __builtin_unreachable();

}


static struct l_array_1_void_KC_ julia_ConcurrencyViolationError_2826(void* _1206, void* _1207) {
  struct l_array_1_void_KC_ _1208;

  _1208 = llvm_ctor_ptra1(((void*)/*NULL*/0));
  _1208.array[0] = _1207;
  return _1208;
}


static uint8_t julia_YY_OC_lex_digitYY_OC_YY_OC_0_4503(void* _1209, uint32_t _1210) {
  uint8_t _1211;
  uint8_t _1211__PHI_TEMPORARY;
  uint32_t _1212;
  uint64_t _1213;
  uint32_t _1214;
  uint32_t _1215;
  uint64_t _1216;
  bool _1217;
  bool _1218;
  uint32_t _1219;
  uint32_t _1220;
  uint32_t _1221;
  uint32_t _1222;
  uint32_t _1222__PHI_TEMPORARY;
  uint32_t _1223;
  uint8_t _1224;

  if ((((uint32_t)(llvm_add_u32(_1210, -805306368))) < ((uint32_t)150994945u))) {
    _1211__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1225;
  } else {
    goto _1226;
  }

_1225:
  _1211 = _1211__PHI_TEMPORARY;
  return _1211;
_1226:
  if ((_1210 == 4294967295u)) {
    _1211__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1225;
  } else {
    goto _1227;
  }

_1227:
  _1212 = llvm_OC_ctlz_OC_i32((_1210 ^ -1), 0);
  _1213 = ((uint64_t)(uint32_t)_1212);
  _1214 = llvm_OC_cttz_OC_i32(_1210, 0);
  _1215 = _1214 & 56;
  _1216 = ((uint64_t)(uint32_t)_1215);
  _1217 = llvm_select_bool((((uint32_t)_1214) < ((uint32_t)32u)), ((llvm_lshr_u32(((_1210 & 12632256) ^ 8421504), _1215)) != 0u), 0);
  _1218 = (((_1210 & -33554432) == 3221225472u) | ((_1210 & -2097152) == 3766484992u)) | ((_1210 & -1048576) == 4034920448u);
  if (((((((uint32_t)_1210) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_1210, 293568512))) < ((uint32_t)101662656u))) & (((((_1212 == 1u) | (((uint64_t)(llvm_add_u64((_1213 << 3), _1216))) > ((uint64_t)UINT64_C(32)))) | _1217) | _1218) ^ 1)) & (_1210 != 4036993714u))) {
    goto _1228;
  } else {
    _1211__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _1225;
  }

_1228:
  _1219 = llvm_lshr_u32(_1210, 24);
  if ((((int32_t)_1210) < ((int32_t)0u))) {
    goto _1229;
  } else {
    _1222__PHI_TEMPORARY = _1219;   /* for PHI node */
    goto _1230;
  }

_1229:
  if ((((_1212 == 1u) | (((uint64_t)(llvm_add_u64((_1213 << 3), _1216))) > ((uint64_t)UINT64_C(32)))) | (_1217 | _1218))) {
    goto _1231;
  } else {
    goto _1232;
  }

_1231:
  julia_throw_invalid_char_2796(_1209, _1210);
  __builtin_unreachable();

_1232:
  _1220 = llvm_select_u32((((uint32_t)_1214) < ((uint32_t)32u)), (llvm_lshr_u32((_1210 & (llvm_lshr_u32(-1, _1212))), _1215)), 0);
  _1221 = (((_1220 & 127) | ((llvm_lshr_u32(_1220, 2)) & 8128)) | ((llvm_lshr_u32(_1220, 4)) & 520192)) | ((llvm_lshr_u32(_1220, 6)) & 33292288);
  _1222__PHI_TEMPORARY = _1221;   /* for PHI node */
  goto _1230;

_1230:
  _1222 = _1222__PHI_TEMPORARY;
  _1223 = jsk_jl_id_start_char(_1222);
  _1224 = ((uint8_t)(bool)(_1223 != 0u));
  _1211__PHI_TEMPORARY = _1224;   /* for PHI node */
  goto _1225;

}


static uint8_t julia_accept_number_4515(void* _1233, void* _1234) {
  uint8_t _1235;
  uint8_t _1235__PHI_TEMPORARY;
  void* _1236;
  uint64_t _1237;
  uint64_t _1238;
  void* _1239;
  uint64_t _1240;
  uint64_t _1241;
  uint32_t _1242;
  void* _1243;
  void* _1244;
  uint64_t _1245;
  void* _1246;
  uint64_t _1247;
  void* _1248;
  uint8_t _1249;
  uint8_t _1250;
  uint8_t _1251;
  uint32_t _1252;
  uint64_t _1253;
  uint64_t _1253__PHI_TEMPORARY;
  uint32_t _1254;
  uint32_t _1254__PHI_TEMPORARY;
  uint64_t _1255;
  uint64_t _1256;
  void* _1257;
  uint8_t _1258;
  uint32_t _1259;
  uint64_t _1260;
  uint64_t _1261;
  uint32_t _1262;
  uint64_t _1263;
  uint32_t _1264;
  uint32_t _1264__PHI_TEMPORARY;
  uint64_t _1265;
  uint64_t _1266;
  uint64_t _1267;
  uint64_t _1268;
  void* _1269;
  uint64_t _1270;
  void* _1271;
  uint64_t _1272;
  void* _1273;
  uint64_t _1274;
  void* _1275;
  uint64_t _1276;

  _1235__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1277;

  do {     /* Syntactic loop '' to make GCC happy */
_1277:
  _1235 = _1235__PHI_TEMPORARY;
  _1236 = ((&((uint8_t*)_1234)[((int64_t)32)]));
  _1237 = *(uint64_t*)_1236;
  _1238 = ((uint64_t)_1237);
  _1239 = ((&((uint8_t*)_1234)[((int64_t)40)]));
  _1240 = llvm_lshr_u64(_1238, 32);
  _1241 = *(uint64_t*)_1239;
  _1242 = ((uint32_t)_1241);
  if ((llvm_select_bool((llvm_select_bool((_1240 != UINT64_C(1593835520)), 1, ((((uint32_t)(llvm_add_u32(_1242, -805306368))) < ((uint32_t)150994945u)) | (((uint32_t)(llvm_add_u32(_1242, 2667577344u))) < ((uint32_t)83886081u))))), 1, (((uint32_t)(llvm_add_u32(_1242, 3204448256u))) < ((uint32_t)83886081u))))) {
    goto _1278;
  } else {
    goto _1279;
  }

_1278:
  if ((((((uint64_t)_1238) > ((uint64_t)UINT64_C(3458764518115508223))) | (_1240 == UINT64_C(805306368))) & ((((uint64_t)_1238) < ((uint64_t)UINT64_C(4107282860161892352))) | (_1240 == UINT64_C(956301312))))) {
    goto _1280;
  } else {
    goto _1281;
  }

_1281:
  if (((((uint64_t)_1238) < ((uint64_t)UINT64_C(6989586625973977088))) & (_1240 != UINT64_C(1627389952)))) {
    goto _1282;
  } else {
    goto _1283;
  }

_1283:
  if (((((uint64_t)_1238) < ((uint64_t)UINT64_C(7349874591868649472))) | (_1240 == UINT64_C(1711276032)))) {
    goto _1280;
  } else {
    goto _1282;
  }

_1282:
  if (((((uint64_t)_1238) < ((uint64_t)UINT64_C(4683743616760283136))) & (_1240 != UINT64_C(1090519040)))) {
    goto _1284;
  } else {
    goto _1285;
  }

_1285:
  if ((((uint64_t)_1238) < ((uint64_t)UINT64_C(5044031582654955520)))) {
    goto _1280;
  } else {
    goto _1286;
  }

_1286:
  switch ((((uint32_t)_1240))) {
  default:
    goto _1279;
  case 1593835520u:
    goto _1280;
  case 1174405120u:
    goto _1280;
  }

_1284:
  if ((_1240 != UINT64_C(1593835520))) {
    goto _1279;
  } else {
    goto _1280;
  }

_1280:
  _1243 = *(void**)_1234;
  _1244 = ((&((uint8_t*)_1243)[((int64_t)16)]));
  _1245 = *(uint64_t*)_1244;
  _1246 = ((&((uint8_t*)_1243)[((int64_t)8)]));
  _1247 = *(uint64_t*)_1246;
  if ((((int64_t)_1247) > ((int64_t)_1245))) {
    goto _1287;
  } else {
    _1264__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1288;
  }

_1287:
  _1248 = *(void**)_1243;
  _1249 = *(uint8_t*)(((&((uint8_t*)_1248)[((int64_t)_1245)])));
  *(uint64_t*)_1244 = (llvm_add_u64(_1245, 1));
  _1250 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1249)), 0);
  _1251 = llvm_sub_u8(32, (llvm_shl_u8(_1250, 3)));
  _1252 = (((uint32_t)(uint8_t)_1249)) << 24;
  if ((((uint8_t)_1251) > ((uint8_t)((uint8_t)16)))) {
    _1264__PHI_TEMPORARY = _1252;   /* for PHI node */
    goto _1288;
  } else {
    _1253__PHI_TEMPORARY = 16;   /* for PHI node */
    _1254__PHI_TEMPORARY = _1252;   /* for PHI node */
    goto _1289;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1289:
  _1253 = _1253__PHI_TEMPORARY;
  _1254 = _1254__PHI_TEMPORARY;
  if (((((int64_t)_1253) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1253) < ((uint64_t)(((uint64_t)(uint8_t)_1251)))))) {
    _1264__PHI_TEMPORARY = _1254;   /* for PHI node */
    goto _1288;
  } else {
    goto _1290;
  }

_1290:
  _1255 = *(uint64_t*)_1244;
  _1256 = *(uint64_t*)_1246;
  if ((((int64_t)_1256) > ((int64_t)_1255))) {
    goto _1291;
  } else {
    _1264__PHI_TEMPORARY = _1254;   /* for PHI node */
    goto _1288;
  }

_1291:
  _1257 = *(void**)_1243;
  _1258 = *(uint8_t*)(((&((uint8_t*)_1257)[((int64_t)_1255)])));
  if ((((int8_t)_1258) > ((int8_t)((uint8_t)-65)))) {
    _1264__PHI_TEMPORARY = _1254;   /* for PHI node */
    goto _1288;
  } else {
    goto _1292;
  }

_1292:
  _1259 = llvm_select_u32((((int64_t)_1255) < ((int64_t)_1256)), (((uint32_t)(uint8_t)_1258)), 0);
  _1260 = *(uint64_t*)_1244;
  *(uint64_t*)_1244 = (llvm_add_u64(_1260, 1));
  _1261 = llvm_neg_u64(_1253);
  _1262 = _1254 | (llvm_select_u32((((int64_t)_1253) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1261) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1259, (((uint32_t)_1261)))))), (llvm_select_u32((((uint64_t)_1253) > ((uint64_t)UINT64_C(31))), 0, (_1259 << (((uint32_t)_1253)))))));
  _1263 = llvm_add_u64(_1253, -8);
  _1253__PHI_TEMPORARY = _1263;   /* for PHI node */
  _1254__PHI_TEMPORARY = _1262;   /* for PHI node */
  goto _1289;

  } while (1); /* end of syntactic loop '' */
_1288:
  _1264 = _1264__PHI_TEMPORARY;
  _1265 = *(uint64_t*)_1236;
  _1266 = *(uint64_t*)_1239;
  _1267 = jsyn_cbe_fshl_i64(_1266, _1265, 32);
  _1268 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1264)), _1266, 32);
  *(uint64_t*)_1236 = _1267;
  *(uint64_t*)_1239 = _1268;
  _1269 = ((&((uint8_t*)_1234)[((int64_t)56)]));
  _1270 = *(uint64_t*)_1269;
  _1271 = ((&((uint8_t*)_1234)[((int64_t)64)]));
  _1272 = *(uint64_t*)_1271;
  _1273 = ((&((uint8_t*)_1234)[((int64_t)72)]));
  _1274 = *(uint64_t*)_1273;
  _1275 = *(void**)_1234;
  _1276 = *(uint64_t*)(((&((uint8_t*)_1275)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1234)[((int64_t)48)]))) = _1270;
  *(uint64_t*)_1269 = _1272;
  *(uint64_t*)_1271 = _1274;
  *(uint64_t*)_1273 = _1276;
  _1235__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _1277;

  } while (1); /* end of syntactic loop '' */
_1279:
  return _1235;
}


static void julia_lex_backtick_4528(void* _1293, void* _1294, void* _1295) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _1296 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _1297;
  void* _1298;
  struct l_array_4_uint64_t _1299;    /* Address-exposed local */
  struct l_array_4_uint64_t _1300;    /* Address-exposed local */
  void* _1301;
  uint64_t _1302;
  void* _1303;
  uint64_t _1304;
  bool _1305;
  uint8_t _1306;
  void* _1307;
  void* _1308;
  void* _1309;
  void* _1310;
  uint64_t _1311;
  uint64_t _1312;
  void* _1313;
  uint64_t _1314;
  void* _1315;
  void* _1316;
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
  void* _1383;
  void* _1383__PHI_TEMPORARY;
  void* _1384;
  void* _1385;

  _1297 = memset((&_1296), 0, 24);
  *((uint64_t*)&_1296) = 4;
  _1298 = *(void**)_1294;
  *(void**)(((&((uint8_t*)(&_1296))[((int64_t)8)]))) = _1298;
  *(void**)_1294 = (&_1296);
  _1301 = ((&((uint8_t*)_1295)[((int64_t)32)]));
  _1302 = *(uint64_t*)_1301;
  _1303 = ((&((uint8_t*)_1295)[((int64_t)40)]));
  _1304 = *(uint64_t*)_1303;
  _1305 = llvm_select_bool(((_1302 & INT64_C(-4294967296)) == UINT64_C(6917529027641081856)), ((_1304 & INT64_C(4294967295)) == UINT64_C(1610612736)), 0);
  _1306 = ((uint8_t)(bool)_1305);
  _1307 = *(void**)(((&((uint8_t*)_1295)[((int64_t)24)])));
  _1308 = *(void**)_1307;
  _1309 = *(void**)(((&((uint8_t*)_1307)[((int64_t)8)])));
  _1310 = ((&((uint8_t*)_1307)[((int64_t)16)]));
  _1311 = *(uint64_t*)_1310;
  _1312 = llvm_add_u64(_1311, 1);
  _1313 = *(void**)(((&((uint8_t*)_1309)[((int64_t)8)])));
  _1314 = *(uint64_t*)_1309;
  if ((((int64_t)_1314) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1308)), (((uint64_t)(uintptr_t)_1313)))), 4)), 1)), _1311))))) {
    goto _1386;
  } else {
    goto _1387;
  }

_1386:
  *(void**)(((&((uint8_t*)(&_1296))[((int64_t)16)]))) = _1307;
  julia__growend_internalNOT_OC__4533(_1294, _1307, 1, _1311);
  goto _1387;

_1387:
  *(uint64_t*)_1310 = _1312;
  _1315 = *(void**)_1307;
  _1316 = ((&((uint8_t*)_1315)[((int64_t)(_1311 << 4))]));
  *(uint8_t*)_1316 = _1306;
  *(uint8_t*)(((&((uint8_t*)_1316)[((int64_t)1)]))) = 1;
  *(uint32_t*)(((&((uint8_t*)_1316)[((int64_t)4)]))) = 1610612736u;
  *(uint64_t*)(((&((uint8_t*)_1316)[((int64_t)8)]))) = 0;
  if (_1305) {
    goto _1388;
  } else {
    goto _1389;
  }

_1388:
  _1317 = *(void**)_1295;
  _1318 = ((&((uint8_t*)_1317)[((int64_t)16)]));
  _1319 = *(uint64_t*)_1318;
  _1320 = ((&((uint8_t*)_1317)[((int64_t)8)]));
  _1321 = *(uint64_t*)_1320;
  if ((((int64_t)_1321) > ((int64_t)_1319))) {
    goto _1390;
  } else {
    _1338__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1391;
  }

_1390:
  _1322 = *(void**)_1317;
  _1323 = *(uint8_t*)(((&((uint8_t*)_1322)[((int64_t)_1319)])));
  *(uint64_t*)_1318 = (llvm_add_u64(_1319, 1));
  _1324 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1323)), 0);
  _1325 = llvm_sub_u8(32, (llvm_shl_u8(_1324, 3)));
  _1326 = (((uint32_t)(uint8_t)_1323)) << 24;
  if ((((uint8_t)_1325) > ((uint8_t)((uint8_t)16)))) {
    _1338__PHI_TEMPORARY = _1326;   /* for PHI node */
    goto _1391;
  } else {
    _1327__PHI_TEMPORARY = 16;   /* for PHI node */
    _1328__PHI_TEMPORARY = _1326;   /* for PHI node */
    goto _1392;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1392:
  _1327 = _1327__PHI_TEMPORARY;
  _1328 = _1328__PHI_TEMPORARY;
  if (((((int64_t)_1327) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1327) < ((uint64_t)(((uint64_t)(uint8_t)_1325)))))) {
    _1338__PHI_TEMPORARY = _1328;   /* for PHI node */
    goto _1391;
  } else {
    goto _1393;
  }

_1393:
  _1329 = *(uint64_t*)_1318;
  _1330 = *(uint64_t*)_1320;
  if ((((int64_t)_1330) > ((int64_t)_1329))) {
    goto _1394;
  } else {
    _1338__PHI_TEMPORARY = _1328;   /* for PHI node */
    goto _1391;
  }

_1394:
  _1331 = *(void**)_1317;
  _1332 = *(uint8_t*)(((&((uint8_t*)_1331)[((int64_t)_1329)])));
  if ((((int8_t)_1332) > ((int8_t)((uint8_t)-65)))) {
    _1338__PHI_TEMPORARY = _1328;   /* for PHI node */
    goto _1391;
  } else {
    goto _1395;
  }

_1395:
  _1333 = llvm_select_u32((((int64_t)_1329) < ((int64_t)_1330)), (((uint32_t)(uint8_t)_1332)), 0);
  _1334 = *(uint64_t*)_1318;
  *(uint64_t*)_1318 = (llvm_add_u64(_1334, 1));
  _1335 = llvm_neg_u64(_1327);
  _1336 = _1328 | (llvm_select_u32((((int64_t)_1327) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1335) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1333, (((uint32_t)_1335)))))), (llvm_select_u32((((uint64_t)_1327) > ((uint64_t)UINT64_C(31))), 0, (_1333 << (((uint32_t)_1327)))))));
  _1337 = llvm_add_u64(_1327, -8);
  _1327__PHI_TEMPORARY = _1337;   /* for PHI node */
  _1328__PHI_TEMPORARY = _1336;   /* for PHI node */
  goto _1392;

  } while (1); /* end of syntactic loop '' */
_1391:
  _1338 = _1338__PHI_TEMPORARY;
  _1339 = *(uint64_t*)_1301;
  _1340 = *(uint64_t*)_1303;
  _1341 = jsyn_cbe_fshl_i64(_1340, _1339, 32);
  _1342 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1338)), _1340, 32);
  *(uint64_t*)_1301 = _1341;
  *(uint64_t*)_1303 = _1342;
  _1343 = ((&((uint8_t*)_1295)[((int64_t)48)]));
  _1344 = ((&((uint8_t*)_1295)[((int64_t)56)]));
  _1345 = *(uint64_t*)_1344;
  _1346 = ((&((uint8_t*)_1295)[((int64_t)64)]));
  _1347 = *(uint64_t*)_1346;
  _1348 = ((&((uint8_t*)_1295)[((int64_t)72)]));
  _1349 = *(uint64_t*)_1348;
  _1350 = *(void**)_1295;
  _1351 = *(uint64_t*)(((&((uint8_t*)_1350)[((int64_t)16)])));
  *(uint64_t*)_1343 = _1345;
  *(uint64_t*)_1344 = _1347;
  *(uint64_t*)_1346 = _1349;
  *(uint64_t*)_1348 = _1351;
  _1352 = *(void**)_1295;
  _1353 = ((&((uint8_t*)_1352)[((int64_t)16)]));
  _1354 = *(uint64_t*)_1353;
  _1355 = ((&((uint8_t*)_1352)[((int64_t)8)]));
  _1356 = *(uint64_t*)_1355;
  if ((((int64_t)_1356) > ((int64_t)_1354))) {
    goto _1396;
  } else {
    _1373__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1397;
  }

_1396:
  _1357 = *(void**)_1352;
  _1358 = *(uint8_t*)(((&((uint8_t*)_1357)[((int64_t)_1354)])));
  *(uint64_t*)_1353 = (llvm_add_u64(_1354, 1));
  _1359 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1358)), 0);
  _1360 = llvm_sub_u8(32, (llvm_shl_u8(_1359, 3)));
  _1361 = (((uint32_t)(uint8_t)_1358)) << 24;
  if ((((uint8_t)_1360) > ((uint8_t)((uint8_t)16)))) {
    _1373__PHI_TEMPORARY = _1361;   /* for PHI node */
    goto _1397;
  } else {
    _1362__PHI_TEMPORARY = 16;   /* for PHI node */
    _1363__PHI_TEMPORARY = _1361;   /* for PHI node */
    goto _1398;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1398:
  _1362 = _1362__PHI_TEMPORARY;
  _1363 = _1363__PHI_TEMPORARY;
  if (((((int64_t)_1362) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1362) < ((uint64_t)(((uint64_t)(uint8_t)_1360)))))) {
    _1373__PHI_TEMPORARY = _1363;   /* for PHI node */
    goto _1397;
  } else {
    goto _1399;
  }

_1399:
  _1364 = *(uint64_t*)_1353;
  _1365 = *(uint64_t*)_1355;
  if ((((int64_t)_1365) > ((int64_t)_1364))) {
    goto _1400;
  } else {
    _1373__PHI_TEMPORARY = _1363;   /* for PHI node */
    goto _1397;
  }

_1400:
  _1366 = *(void**)_1352;
  _1367 = *(uint8_t*)(((&((uint8_t*)_1366)[((int64_t)_1364)])));
  if ((((int8_t)_1367) > ((int8_t)((uint8_t)-65)))) {
    _1373__PHI_TEMPORARY = _1363;   /* for PHI node */
    goto _1397;
  } else {
    goto _1401;
  }

_1401:
  _1368 = llvm_select_u32((((int64_t)_1364) < ((int64_t)_1365)), (((uint32_t)(uint8_t)_1367)), 0);
  _1369 = *(uint64_t*)_1353;
  *(uint64_t*)_1353 = (llvm_add_u64(_1369, 1));
  _1370 = llvm_neg_u64(_1362);
  _1371 = _1363 | (llvm_select_u32((((int64_t)_1362) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1370) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1368, (((uint32_t)_1370)))))), (llvm_select_u32((((uint64_t)_1362) > ((uint64_t)UINT64_C(31))), 0, (_1368 << (((uint32_t)_1362)))))));
  _1372 = llvm_add_u64(_1362, -8);
  _1362__PHI_TEMPORARY = _1372;   /* for PHI node */
  _1363__PHI_TEMPORARY = _1371;   /* for PHI node */
  goto _1398;

  } while (1); /* end of syntactic loop '' */
_1397:
  _1373 = _1373__PHI_TEMPORARY;
  _1374 = *(uint64_t*)_1301;
  _1375 = *(uint64_t*)_1303;
  _1376 = jsyn_cbe_fshl_i64(_1375, _1374, 32);
  _1377 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1373)), _1375, 32);
  *(uint64_t*)_1301 = _1376;
  *(uint64_t*)_1303 = _1377;
  _1378 = *(uint64_t*)_1344;
  _1379 = *(uint64_t*)_1346;
  _1380 = *(uint64_t*)_1348;
  _1381 = *(void**)_1295;
  _1382 = *(uint64_t*)(((&((uint8_t*)_1381)[((int64_t)16)])));
  *(uint64_t*)_1343 = _1378;
  *(uint64_t*)_1344 = _1379;
  *(uint64_t*)_1346 = _1380;
  *(uint64_t*)_1348 = _1382;
  julia_emit_4484((&_1299), _1294, _1295, 65, 1);
  _1383__PHI_TEMPORARY = (&_1299);   /* for PHI node */
  goto _1402;

_1402:
  _1383 = _1383__PHI_TEMPORARY;
  _1384 = memcpy(_1293, _1383, 32);
  _1385 = *(void**)(((&((uint8_t*)(&_1296))[((int64_t)8)])));
  *(void**)_1294 = _1385;
  return;
_1389:
  julia_emit_4484((&_1300), _1294, _1295, 64, 1);
  _1383__PHI_TEMPORARY = (&_1300);   /* for PHI node */
  goto _1402;

}


static void julia_lex_plus_4544(void* _1403, void* _1404, void* _1405) {
  struct l_array_4_uint64_t _1406;    /* Address-exposed local */
  struct l_array_4_uint64_t _1407;    /* Address-exposed local */
  struct l_array_4_uint64_t _1408;    /* Address-exposed local */
  void* _1409;
  uint64_t _1410;
  void* _1411;
  void* _1412;
  void* _1413;
  uint64_t _1414;
  void* _1415;
  uint64_t _1416;
  void* _1417;
  uint8_t _1418;
  uint8_t _1419;
  uint8_t _1420;
  uint32_t _1421;
  uint64_t _1422;
  uint64_t _1422__PHI_TEMPORARY;
  uint32_t _1423;
  uint32_t _1423__PHI_TEMPORARY;
  uint64_t _1424;
  uint64_t _1425;
  void* _1426;
  uint8_t _1427;
  uint32_t _1428;
  uint64_t _1429;
  uint64_t _1430;
  uint32_t _1431;
  uint64_t _1432;
  uint32_t _1433;
  uint32_t _1433__PHI_TEMPORARY;
  uint64_t _1434;
  uint64_t _1435;
  uint64_t _1436;
  uint64_t _1437;
  void* _1438;
  uint64_t _1439;
  void* _1440;
  uint64_t _1441;
  void* _1442;
  uint64_t _1443;
  void* _1444;
  uint64_t _1445;
  void* _1446;
  void* _1446__PHI_TEMPORARY;
  void* _1447;
  uint64_t _1448;
  void* _1449;
  void* _1450;
  uint64_t _1451;
  void* _1452;
  uint64_t _1453;
  void* _1454;
  uint8_t _1455;
  uint8_t _1456;
  uint8_t _1457;
  uint32_t _1458;
  uint64_t _1459;
  uint64_t _1459__PHI_TEMPORARY;
  uint32_t _1460;
  uint32_t _1460__PHI_TEMPORARY;
  uint64_t _1461;
  uint64_t _1462;
  void* _1463;
  uint8_t _1464;
  uint32_t _1465;
  uint64_t _1466;
  uint64_t _1467;
  uint32_t _1468;
  uint64_t _1469;
  uint32_t _1470;
  uint32_t _1470__PHI_TEMPORARY;
  uint64_t _1471;
  uint64_t _1472;
  uint64_t _1473;
  uint64_t _1474;
  void* _1475;
  uint64_t _1476;
  void* _1477;
  uint64_t _1478;
  void* _1479;
  uint64_t _1480;
  void* _1481;
  uint64_t _1482;

  _1409 = ((&((uint8_t*)_1405)[((int64_t)32)]));
  _1410 = *(uint64_t*)_1409;
  _1411 = ((&((uint8_t*)_1405)[((int64_t)40)]));
  if (((_1410 & INT64_C(-4294967296)) == UINT64_C(3098476543630901248))) {
    goto _1483;
  } else {
    goto _1484;
  }

_1483:
  _1412 = *(void**)_1405;
  _1413 = ((&((uint8_t*)_1412)[((int64_t)16)]));
  _1414 = *(uint64_t*)_1413;
  _1415 = ((&((uint8_t*)_1412)[((int64_t)8)]));
  _1416 = *(uint64_t*)_1415;
  if ((((int64_t)_1416) > ((int64_t)_1414))) {
    goto _1485;
  } else {
    _1433__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1486;
  }

_1485:
  _1417 = *(void**)_1412;
  _1418 = *(uint8_t*)(((&((uint8_t*)_1417)[((int64_t)_1414)])));
  *(uint64_t*)_1413 = (llvm_add_u64(_1414, 1));
  _1419 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1418)), 0);
  _1420 = llvm_sub_u8(32, (llvm_shl_u8(_1419, 3)));
  _1421 = (((uint32_t)(uint8_t)_1418)) << 24;
  if ((((uint8_t)_1420) > ((uint8_t)((uint8_t)16)))) {
    _1433__PHI_TEMPORARY = _1421;   /* for PHI node */
    goto _1486;
  } else {
    _1422__PHI_TEMPORARY = 16;   /* for PHI node */
    _1423__PHI_TEMPORARY = _1421;   /* for PHI node */
    goto _1487;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1487:
  _1422 = _1422__PHI_TEMPORARY;
  _1423 = _1423__PHI_TEMPORARY;
  if (((((int64_t)_1422) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1422) < ((uint64_t)(((uint64_t)(uint8_t)_1420)))))) {
    _1433__PHI_TEMPORARY = _1423;   /* for PHI node */
    goto _1486;
  } else {
    goto _1488;
  }

_1488:
  _1424 = *(uint64_t*)_1413;
  _1425 = *(uint64_t*)_1415;
  if ((((int64_t)_1425) > ((int64_t)_1424))) {
    goto _1489;
  } else {
    _1433__PHI_TEMPORARY = _1423;   /* for PHI node */
    goto _1486;
  }

_1489:
  _1426 = *(void**)_1412;
  _1427 = *(uint8_t*)(((&((uint8_t*)_1426)[((int64_t)_1424)])));
  if ((((int8_t)_1427) > ((int8_t)((uint8_t)-65)))) {
    _1433__PHI_TEMPORARY = _1423;   /* for PHI node */
    goto _1486;
  } else {
    goto _1490;
  }

_1490:
  _1428 = llvm_select_u32((((int64_t)_1424) < ((int64_t)_1425)), (((uint32_t)(uint8_t)_1427)), 0);
  _1429 = *(uint64_t*)_1413;
  *(uint64_t*)_1413 = (llvm_add_u64(_1429, 1));
  _1430 = llvm_neg_u64(_1422);
  _1431 = _1423 | (llvm_select_u32((((int64_t)_1422) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1430) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1428, (((uint32_t)_1430)))))), (llvm_select_u32((((uint64_t)_1422) > ((uint64_t)UINT64_C(31))), 0, (_1428 << (((uint32_t)_1422)))))));
  _1432 = llvm_add_u64(_1422, -8);
  _1422__PHI_TEMPORARY = _1432;   /* for PHI node */
  _1423__PHI_TEMPORARY = _1431;   /* for PHI node */
  goto _1487;

  } while (1); /* end of syntactic loop '' */
_1486:
  _1433 = _1433__PHI_TEMPORARY;
  _1434 = *(uint64_t*)_1409;
  _1435 = *(uint64_t*)_1411;
  _1436 = jsyn_cbe_fshl_i64(_1435, _1434, 32);
  _1437 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1433)), _1435, 32);
  *(uint64_t*)_1409 = _1436;
  *(uint64_t*)_1411 = _1437;
  _1438 = ((&((uint8_t*)_1405)[((int64_t)56)]));
  _1439 = *(uint64_t*)_1438;
  _1440 = ((&((uint8_t*)_1405)[((int64_t)64)]));
  _1441 = *(uint64_t*)_1440;
  _1442 = ((&((uint8_t*)_1405)[((int64_t)72)]));
  _1443 = *(uint64_t*)_1442;
  _1444 = *(void**)_1405;
  _1445 = *(uint64_t*)(((&((uint8_t*)_1444)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1405)[((int64_t)48)]))) = _1439;
  *(uint64_t*)_1438 = _1441;
  *(uint64_t*)_1440 = _1443;
  *(uint64_t*)_1442 = _1445;
  julia_emit_4484((&_1406), _1404, _1405, 537, 1);
  _1446__PHI_TEMPORARY = (&_1406);   /* for PHI node */
  goto _1491;

_1491:
  _1446 = _1446__PHI_TEMPORARY;
  _1447 = memcpy(_1403, _1446, 32);
  return;
_1484:
  _1448 = *(uint64_t*)_1409;
  if (((_1448 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _1492;
  } else {
    goto _1493;
  }

_1492:
  _1449 = *(void**)_1405;
  _1450 = ((&((uint8_t*)_1449)[((int64_t)16)]));
  _1451 = *(uint64_t*)_1450;
  _1452 = ((&((uint8_t*)_1449)[((int64_t)8)]));
  _1453 = *(uint64_t*)_1452;
  if ((((int64_t)_1453) > ((int64_t)_1451))) {
    goto _1494;
  } else {
    _1470__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1495;
  }

_1494:
  _1454 = *(void**)_1449;
  _1455 = *(uint8_t*)(((&((uint8_t*)_1454)[((int64_t)_1451)])));
  *(uint64_t*)_1450 = (llvm_add_u64(_1451, 1));
  _1456 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1455)), 0);
  _1457 = llvm_sub_u8(32, (llvm_shl_u8(_1456, 3)));
  _1458 = (((uint32_t)(uint8_t)_1455)) << 24;
  if ((((uint8_t)_1457) > ((uint8_t)((uint8_t)16)))) {
    _1470__PHI_TEMPORARY = _1458;   /* for PHI node */
    goto _1495;
  } else {
    _1459__PHI_TEMPORARY = 16;   /* for PHI node */
    _1460__PHI_TEMPORARY = _1458;   /* for PHI node */
    goto _1496;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1496:
  _1459 = _1459__PHI_TEMPORARY;
  _1460 = _1460__PHI_TEMPORARY;
  if (((((int64_t)_1459) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1459) < ((uint64_t)(((uint64_t)(uint8_t)_1457)))))) {
    _1470__PHI_TEMPORARY = _1460;   /* for PHI node */
    goto _1495;
  } else {
    goto _1497;
  }

_1497:
  _1461 = *(uint64_t*)_1450;
  _1462 = *(uint64_t*)_1452;
  if ((((int64_t)_1462) > ((int64_t)_1461))) {
    goto _1498;
  } else {
    _1470__PHI_TEMPORARY = _1460;   /* for PHI node */
    goto _1495;
  }

_1498:
  _1463 = *(void**)_1449;
  _1464 = *(uint8_t*)(((&((uint8_t*)_1463)[((int64_t)_1461)])));
  if ((((int8_t)_1464) > ((int8_t)((uint8_t)-65)))) {
    _1470__PHI_TEMPORARY = _1460;   /* for PHI node */
    goto _1495;
  } else {
    goto _1499;
  }

_1499:
  _1465 = llvm_select_u32((((int64_t)_1461) < ((int64_t)_1462)), (((uint32_t)(uint8_t)_1464)), 0);
  _1466 = *(uint64_t*)_1450;
  *(uint64_t*)_1450 = (llvm_add_u64(_1466, 1));
  _1467 = llvm_neg_u64(_1459);
  _1468 = _1460 | (llvm_select_u32((((int64_t)_1459) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1467) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1465, (((uint32_t)_1467)))))), (llvm_select_u32((((uint64_t)_1459) > ((uint64_t)UINT64_C(31))), 0, (_1465 << (((uint32_t)_1459)))))));
  _1469 = llvm_add_u64(_1459, -8);
  _1459__PHI_TEMPORARY = _1469;   /* for PHI node */
  _1460__PHI_TEMPORARY = _1468;   /* for PHI node */
  goto _1496;

  } while (1); /* end of syntactic loop '' */
_1495:
  _1470 = _1470__PHI_TEMPORARY;
  _1471 = *(uint64_t*)_1409;
  _1472 = *(uint64_t*)_1411;
  _1473 = jsyn_cbe_fshl_i64(_1472, _1471, 32);
  _1474 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1470)), _1472, 32);
  *(uint64_t*)_1409 = _1473;
  *(uint64_t*)_1411 = _1474;
  _1475 = ((&((uint8_t*)_1405)[((int64_t)56)]));
  _1476 = *(uint64_t*)_1475;
  _1477 = ((&((uint8_t*)_1405)[((int64_t)64)]));
  _1478 = *(uint64_t*)_1477;
  _1479 = ((&((uint8_t*)_1405)[((int64_t)72)]));
  _1480 = *(uint64_t*)_1479;
  _1481 = *(void**)_1405;
  _1482 = *(uint64_t*)(((&((uint8_t*)_1481)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1405)[((int64_t)48)]))) = _1476;
  *(uint64_t*)_1475 = _1478;
  *(uint64_t*)_1477 = _1480;
  *(uint64_t*)_1479 = _1482;
  julia_emit_4484((&_1407), _1404, _1405, 71, 1);
  _1446__PHI_TEMPORARY = (&_1407);   /* for PHI node */
  goto _1491;

_1493:
  julia_emit_4484((&_1408), _1404, _1405, 535, 1);
  _1446__PHI_TEMPORARY = (&_1408);   /* for PHI node */
  goto _1491;

}


static void julia_lex_backslash_4554(void* _1500, void* _1501, void* _1502) {
  struct l_array_4_uint64_t _1503;    /* Address-exposed local */
  struct l_array_4_uint64_t _1504;    /* Address-exposed local */
  void* _1505;
  uint64_t _1506;
  void* _1507;
  void* _1508;
  void* _1509;
  uint64_t _1510;
  void* _1511;
  uint64_t _1512;
  void* _1513;
  uint8_t _1514;
  uint8_t _1515;
  uint8_t _1516;
  uint32_t _1517;
  uint64_t _1518;
  uint64_t _1518__PHI_TEMPORARY;
  uint32_t _1519;
  uint32_t _1519__PHI_TEMPORARY;
  uint64_t _1520;
  uint64_t _1521;
  void* _1522;
  uint8_t _1523;
  uint32_t _1524;
  uint64_t _1525;
  uint64_t _1526;
  uint32_t _1527;
  uint64_t _1528;
  uint32_t _1529;
  uint32_t _1529__PHI_TEMPORARY;
  uint64_t _1530;
  uint64_t _1531;
  uint64_t _1532;
  uint64_t _1533;
  void* _1534;
  uint64_t _1535;
  void* _1536;
  uint64_t _1537;
  void* _1538;
  uint64_t _1539;
  void* _1540;
  uint64_t _1541;
  void* _1542;
  void* _1542__PHI_TEMPORARY;
  void* _1543;

  _1505 = ((&((uint8_t*)_1502)[((int64_t)32)]));
  _1506 = *(uint64_t*)_1505;
  _1507 = ((&((uint8_t*)_1502)[((int64_t)40)]));
  if (((_1506 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _1544;
  } else {
    goto _1545;
  }

_1544:
  _1508 = *(void**)_1502;
  _1509 = ((&((uint8_t*)_1508)[((int64_t)16)]));
  _1510 = *(uint64_t*)_1509;
  _1511 = ((&((uint8_t*)_1508)[((int64_t)8)]));
  _1512 = *(uint64_t*)_1511;
  if ((((int64_t)_1512) > ((int64_t)_1510))) {
    goto _1546;
  } else {
    _1529__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1547;
  }

_1546:
  _1513 = *(void**)_1508;
  _1514 = *(uint8_t*)(((&((uint8_t*)_1513)[((int64_t)_1510)])));
  *(uint64_t*)_1509 = (llvm_add_u64(_1510, 1));
  _1515 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1514)), 0);
  _1516 = llvm_sub_u8(32, (llvm_shl_u8(_1515, 3)));
  _1517 = (((uint32_t)(uint8_t)_1514)) << 24;
  if ((((uint8_t)_1516) > ((uint8_t)((uint8_t)16)))) {
    _1529__PHI_TEMPORARY = _1517;   /* for PHI node */
    goto _1547;
  } else {
    _1518__PHI_TEMPORARY = 16;   /* for PHI node */
    _1519__PHI_TEMPORARY = _1517;   /* for PHI node */
    goto _1548;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1548:
  _1518 = _1518__PHI_TEMPORARY;
  _1519 = _1519__PHI_TEMPORARY;
  if (((((int64_t)_1518) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1518) < ((uint64_t)(((uint64_t)(uint8_t)_1516)))))) {
    _1529__PHI_TEMPORARY = _1519;   /* for PHI node */
    goto _1547;
  } else {
    goto _1549;
  }

_1549:
  _1520 = *(uint64_t*)_1509;
  _1521 = *(uint64_t*)_1511;
  if ((((int64_t)_1521) > ((int64_t)_1520))) {
    goto _1550;
  } else {
    _1529__PHI_TEMPORARY = _1519;   /* for PHI node */
    goto _1547;
  }

_1550:
  _1522 = *(void**)_1508;
  _1523 = *(uint8_t*)(((&((uint8_t*)_1522)[((int64_t)_1520)])));
  if ((((int8_t)_1523) > ((int8_t)((uint8_t)-65)))) {
    _1529__PHI_TEMPORARY = _1519;   /* for PHI node */
    goto _1547;
  } else {
    goto _1551;
  }

_1551:
  _1524 = llvm_select_u32((((int64_t)_1520) < ((int64_t)_1521)), (((uint32_t)(uint8_t)_1523)), 0);
  _1525 = *(uint64_t*)_1509;
  *(uint64_t*)_1509 = (llvm_add_u64(_1525, 1));
  _1526 = llvm_neg_u64(_1518);
  _1527 = _1519 | (llvm_select_u32((((int64_t)_1518) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1526) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1524, (((uint32_t)_1526)))))), (llvm_select_u32((((uint64_t)_1518) > ((uint64_t)UINT64_C(31))), 0, (_1524 << (((uint32_t)_1518)))))));
  _1528 = llvm_add_u64(_1518, -8);
  _1518__PHI_TEMPORARY = _1528;   /* for PHI node */
  _1519__PHI_TEMPORARY = _1527;   /* for PHI node */
  goto _1548;

  } while (1); /* end of syntactic loop '' */
_1547:
  _1529 = _1529__PHI_TEMPORARY;
  _1530 = *(uint64_t*)_1505;
  _1531 = *(uint64_t*)_1507;
  _1532 = jsyn_cbe_fshl_i64(_1531, _1530, 32);
  _1533 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1529)), _1531, 32);
  *(uint64_t*)_1505 = _1532;
  *(uint64_t*)_1507 = _1533;
  _1534 = ((&((uint8_t*)_1502)[((int64_t)56)]));
  _1535 = *(uint64_t*)_1534;
  _1536 = ((&((uint8_t*)_1502)[((int64_t)64)]));
  _1537 = *(uint64_t*)_1536;
  _1538 = ((&((uint8_t*)_1502)[((int64_t)72)]));
  _1539 = *(uint64_t*)_1538;
  _1540 = *(void**)_1502;
  _1541 = *(uint64_t*)(((&((uint8_t*)_1540)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1502)[((int64_t)48)]))) = _1535;
  *(uint64_t*)_1534 = _1537;
  *(uint64_t*)_1536 = _1539;
  *(uint64_t*)_1538 = _1541;
  julia_emit_4484((&_1503), _1501, _1502, 71, 1);
  _1542__PHI_TEMPORARY = (&_1503);   /* for PHI node */
  goto _1552;

_1552:
  _1542 = _1542__PHI_TEMPORARY;
  _1543 = memcpy(_1500, _1542, 32);
  return;
_1545:
  julia_emit_4484((&_1504), _1501, _1502, 599, 1);
  _1542__PHI_TEMPORARY = (&_1504);   /* for PHI node */
  goto _1552;

}


static void julia_lex_forwardslash_4558(void* _1553, void* _1554, void* _1555) {
  struct l_array_4_uint64_t _1556;    /* Address-exposed local */
  struct l_array_4_uint64_t _1557;    /* Address-exposed local */
  struct l_array_4_uint64_t _1558;    /* Address-exposed local */
  struct l_array_4_uint64_t _1559;    /* Address-exposed local */
  void* _1560;
  uint64_t _1561;
  void* _1562;
  void* _1563;
  void* _1564;
  uint64_t _1565;
  void* _1566;
  uint64_t _1567;
  void* _1568;
  uint8_t _1569;
  uint8_t _1570;
  uint8_t _1571;
  uint32_t _1572;
  uint64_t _1573;
  uint64_t _1573__PHI_TEMPORARY;
  uint32_t _1574;
  uint32_t _1574__PHI_TEMPORARY;
  uint64_t _1575;
  uint64_t _1576;
  void* _1577;
  uint8_t _1578;
  uint32_t _1579;
  uint64_t _1580;
  uint64_t _1581;
  uint32_t _1582;
  uint64_t _1583;
  uint32_t _1584;
  uint32_t _1584__PHI_TEMPORARY;
  uint64_t _1585;
  uint64_t _1586;
  uint64_t _1587;
  uint64_t _1588;
  void* _1589;
  uint64_t _1590;
  void* _1591;
  uint64_t _1592;
  void* _1593;
  uint64_t _1594;
  void* _1595;
  uint64_t _1596;
  uint64_t _1597;
  void* _1598;
  void* _1599;
  uint64_t _1600;
  void* _1601;
  uint64_t _1602;
  void* _1603;
  uint8_t _1604;
  uint8_t _1605;
  uint8_t _1606;
  uint32_t _1607;
  uint64_t _1608;
  uint64_t _1608__PHI_TEMPORARY;
  uint32_t _1609;
  uint32_t _1609__PHI_TEMPORARY;
  uint64_t _1610;
  uint64_t _1611;
  void* _1612;
  uint8_t _1613;
  uint32_t _1614;
  uint64_t _1615;
  uint64_t _1616;
  uint32_t _1617;
  uint64_t _1618;
  uint32_t _1619;
  uint32_t _1619__PHI_TEMPORARY;
  uint64_t _1620;
  uint64_t _1621;
  uint64_t _1622;
  uint64_t _1623;
  void* _1624;
  uint64_t _1625;
  void* _1626;
  uint64_t _1627;
  void* _1628;
  uint64_t _1629;
  void* _1630;
  uint64_t _1631;
  void* _1632;
  void* _1632__PHI_TEMPORARY;
  void* _1633;
  uint64_t _1634;
  void* _1635;
  void* _1636;
  uint64_t _1637;
  void* _1638;
  uint64_t _1639;
  void* _1640;
  uint8_t _1641;
  uint8_t _1642;
  uint8_t _1643;
  uint32_t _1644;
  uint64_t _1645;
  uint64_t _1645__PHI_TEMPORARY;
  uint32_t _1646;
  uint32_t _1646__PHI_TEMPORARY;
  uint64_t _1647;
  uint64_t _1648;
  void* _1649;
  uint8_t _1650;
  uint32_t _1651;
  uint64_t _1652;
  uint64_t _1653;
  uint32_t _1654;
  uint64_t _1655;
  uint32_t _1656;
  uint32_t _1656__PHI_TEMPORARY;
  uint64_t _1657;
  uint64_t _1658;
  uint64_t _1659;
  uint64_t _1660;
  void* _1661;
  uint64_t _1662;
  void* _1663;
  uint64_t _1664;
  void* _1665;
  uint64_t _1666;
  void* _1667;
  uint64_t _1668;

  _1560 = ((&((uint8_t*)_1555)[((int64_t)32)]));
  _1561 = *(uint64_t*)_1560;
  _1562 = ((&((uint8_t*)_1555)[((int64_t)40)]));
  if (((_1561 & INT64_C(-4294967296)) == UINT64_C(3386706919782612992))) {
    goto _1669;
  } else {
    goto _1670;
  }

_1669:
  _1563 = *(void**)_1555;
  _1564 = ((&((uint8_t*)_1563)[((int64_t)16)]));
  _1565 = *(uint64_t*)_1564;
  _1566 = ((&((uint8_t*)_1563)[((int64_t)8)]));
  _1567 = *(uint64_t*)_1566;
  if ((((int64_t)_1567) > ((int64_t)_1565))) {
    goto _1671;
  } else {
    _1584__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1672;
  }

_1671:
  _1568 = *(void**)_1563;
  _1569 = *(uint8_t*)(((&((uint8_t*)_1568)[((int64_t)_1565)])));
  *(uint64_t*)_1564 = (llvm_add_u64(_1565, 1));
  _1570 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1569)), 0);
  _1571 = llvm_sub_u8(32, (llvm_shl_u8(_1570, 3)));
  _1572 = (((uint32_t)(uint8_t)_1569)) << 24;
  if ((((uint8_t)_1571) > ((uint8_t)((uint8_t)16)))) {
    _1584__PHI_TEMPORARY = _1572;   /* for PHI node */
    goto _1672;
  } else {
    _1573__PHI_TEMPORARY = 16;   /* for PHI node */
    _1574__PHI_TEMPORARY = _1572;   /* for PHI node */
    goto _1673;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1673:
  _1573 = _1573__PHI_TEMPORARY;
  _1574 = _1574__PHI_TEMPORARY;
  if (((((int64_t)_1573) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1573) < ((uint64_t)(((uint64_t)(uint8_t)_1571)))))) {
    _1584__PHI_TEMPORARY = _1574;   /* for PHI node */
    goto _1672;
  } else {
    goto _1674;
  }

_1674:
  _1575 = *(uint64_t*)_1564;
  _1576 = *(uint64_t*)_1566;
  if ((((int64_t)_1576) > ((int64_t)_1575))) {
    goto _1675;
  } else {
    _1584__PHI_TEMPORARY = _1574;   /* for PHI node */
    goto _1672;
  }

_1675:
  _1577 = *(void**)_1563;
  _1578 = *(uint8_t*)(((&((uint8_t*)_1577)[((int64_t)_1575)])));
  if ((((int8_t)_1578) > ((int8_t)((uint8_t)-65)))) {
    _1584__PHI_TEMPORARY = _1574;   /* for PHI node */
    goto _1672;
  } else {
    goto _1676;
  }

_1676:
  _1579 = llvm_select_u32((((int64_t)_1575) < ((int64_t)_1576)), (((uint32_t)(uint8_t)_1578)), 0);
  _1580 = *(uint64_t*)_1564;
  *(uint64_t*)_1564 = (llvm_add_u64(_1580, 1));
  _1581 = llvm_neg_u64(_1573);
  _1582 = _1574 | (llvm_select_u32((((int64_t)_1573) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1581) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1579, (((uint32_t)_1581)))))), (llvm_select_u32((((uint64_t)_1573) > ((uint64_t)UINT64_C(31))), 0, (_1579 << (((uint32_t)_1573)))))));
  _1583 = llvm_add_u64(_1573, -8);
  _1573__PHI_TEMPORARY = _1583;   /* for PHI node */
  _1574__PHI_TEMPORARY = _1582;   /* for PHI node */
  goto _1673;

  } while (1); /* end of syntactic loop '' */
_1672:
  _1584 = _1584__PHI_TEMPORARY;
  _1585 = *(uint64_t*)_1560;
  _1586 = *(uint64_t*)_1562;
  _1587 = jsyn_cbe_fshl_i64(_1586, _1585, 32);
  _1588 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1584)), _1586, 32);
  *(uint64_t*)_1560 = _1587;
  *(uint64_t*)_1562 = _1588;
  _1589 = ((&((uint8_t*)_1555)[((int64_t)56)]));
  _1590 = *(uint64_t*)_1589;
  _1591 = ((&((uint8_t*)_1555)[((int64_t)64)]));
  _1592 = *(uint64_t*)_1591;
  _1593 = ((&((uint8_t*)_1555)[((int64_t)72)]));
  _1594 = *(uint64_t*)_1593;
  _1595 = *(void**)_1555;
  _1596 = *(uint64_t*)(((&((uint8_t*)_1595)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1555)[((int64_t)48)]))) = _1590;
  *(uint64_t*)_1589 = _1592;
  *(uint64_t*)_1591 = _1594;
  *(uint64_t*)_1593 = _1596;
  _1597 = *(uint64_t*)_1560;
  if (((_1597 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _1677;
  } else {
    goto _1678;
  }

_1677:
  _1598 = *(void**)_1555;
  _1599 = ((&((uint8_t*)_1598)[((int64_t)16)]));
  _1600 = *(uint64_t*)_1599;
  _1601 = ((&((uint8_t*)_1598)[((int64_t)8)]));
  _1602 = *(uint64_t*)_1601;
  if ((((int64_t)_1602) > ((int64_t)_1600))) {
    goto _1679;
  } else {
    _1619__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1680;
  }

_1679:
  _1603 = *(void**)_1598;
  _1604 = *(uint8_t*)(((&((uint8_t*)_1603)[((int64_t)_1600)])));
  *(uint64_t*)_1599 = (llvm_add_u64(_1600, 1));
  _1605 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1604)), 0);
  _1606 = llvm_sub_u8(32, (llvm_shl_u8(_1605, 3)));
  _1607 = (((uint32_t)(uint8_t)_1604)) << 24;
  if ((((uint8_t)_1606) > ((uint8_t)((uint8_t)16)))) {
    _1619__PHI_TEMPORARY = _1607;   /* for PHI node */
    goto _1680;
  } else {
    _1608__PHI_TEMPORARY = 16;   /* for PHI node */
    _1609__PHI_TEMPORARY = _1607;   /* for PHI node */
    goto _1681;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1681:
  _1608 = _1608__PHI_TEMPORARY;
  _1609 = _1609__PHI_TEMPORARY;
  if (((((int64_t)_1608) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1608) < ((uint64_t)(((uint64_t)(uint8_t)_1606)))))) {
    _1619__PHI_TEMPORARY = _1609;   /* for PHI node */
    goto _1680;
  } else {
    goto _1682;
  }

_1682:
  _1610 = *(uint64_t*)_1599;
  _1611 = *(uint64_t*)_1601;
  if ((((int64_t)_1611) > ((int64_t)_1610))) {
    goto _1683;
  } else {
    _1619__PHI_TEMPORARY = _1609;   /* for PHI node */
    goto _1680;
  }

_1683:
  _1612 = *(void**)_1598;
  _1613 = *(uint8_t*)(((&((uint8_t*)_1612)[((int64_t)_1610)])));
  if ((((int8_t)_1613) > ((int8_t)((uint8_t)-65)))) {
    _1619__PHI_TEMPORARY = _1609;   /* for PHI node */
    goto _1680;
  } else {
    goto _1684;
  }

_1684:
  _1614 = llvm_select_u32((((int64_t)_1610) < ((int64_t)_1611)), (((uint32_t)(uint8_t)_1613)), 0);
  _1615 = *(uint64_t*)_1599;
  *(uint64_t*)_1599 = (llvm_add_u64(_1615, 1));
  _1616 = llvm_neg_u64(_1608);
  _1617 = _1609 | (llvm_select_u32((((int64_t)_1608) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1616) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1614, (((uint32_t)_1616)))))), (llvm_select_u32((((uint64_t)_1608) > ((uint64_t)UINT64_C(31))), 0, (_1614 << (((uint32_t)_1608)))))));
  _1618 = llvm_add_u64(_1608, -8);
  _1608__PHI_TEMPORARY = _1618;   /* for PHI node */
  _1609__PHI_TEMPORARY = _1617;   /* for PHI node */
  goto _1681;

  } while (1); /* end of syntactic loop '' */
_1680:
  _1619 = _1619__PHI_TEMPORARY;
  _1620 = *(uint64_t*)_1560;
  _1621 = *(uint64_t*)_1562;
  _1622 = jsyn_cbe_fshl_i64(_1621, _1620, 32);
  _1623 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1619)), _1621, 32);
  *(uint64_t*)_1560 = _1622;
  *(uint64_t*)_1562 = _1623;
  _1624 = ((&((uint8_t*)_1555)[((int64_t)56)]));
  _1625 = *(uint64_t*)_1624;
  _1626 = ((&((uint8_t*)_1555)[((int64_t)64)]));
  _1627 = *(uint64_t*)_1626;
  _1628 = ((&((uint8_t*)_1555)[((int64_t)72)]));
  _1629 = *(uint64_t*)_1628;
  _1630 = *(void**)_1555;
  _1631 = *(uint64_t*)(((&((uint8_t*)_1630)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1555)[((int64_t)48)]))) = _1625;
  *(uint64_t*)_1624 = _1627;
  *(uint64_t*)_1626 = _1629;
  *(uint64_t*)_1628 = _1631;
  julia_emit_4484((&_1556), _1554, _1555, 71, 1);
  _1632__PHI_TEMPORARY = (&_1556);   /* for PHI node */
  goto _1685;

_1685:
  _1632 = _1632__PHI_TEMPORARY;
  _1633 = memcpy(_1553, _1632, 32);
  return;
_1678:
  julia_emit_4484((&_1557), _1554, _1555, 670, 1);
  _1632__PHI_TEMPORARY = (&_1557);   /* for PHI node */
  goto _1685;

_1670:
  _1634 = *(uint64_t*)_1560;
  if (((_1634 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _1686;
  } else {
    goto _1687;
  }

_1686:
  _1635 = *(void**)_1555;
  _1636 = ((&((uint8_t*)_1635)[((int64_t)16)]));
  _1637 = *(uint64_t*)_1636;
  _1638 = ((&((uint8_t*)_1635)[((int64_t)8)]));
  _1639 = *(uint64_t*)_1638;
  if ((((int64_t)_1639) > ((int64_t)_1637))) {
    goto _1688;
  } else {
    _1656__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1689;
  }

_1688:
  _1640 = *(void**)_1635;
  _1641 = *(uint8_t*)(((&((uint8_t*)_1640)[((int64_t)_1637)])));
  *(uint64_t*)_1636 = (llvm_add_u64(_1637, 1));
  _1642 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1641)), 0);
  _1643 = llvm_sub_u8(32, (llvm_shl_u8(_1642, 3)));
  _1644 = (((uint32_t)(uint8_t)_1641)) << 24;
  if ((((uint8_t)_1643) > ((uint8_t)((uint8_t)16)))) {
    _1656__PHI_TEMPORARY = _1644;   /* for PHI node */
    goto _1689;
  } else {
    _1645__PHI_TEMPORARY = 16;   /* for PHI node */
    _1646__PHI_TEMPORARY = _1644;   /* for PHI node */
    goto _1690;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1690:
  _1645 = _1645__PHI_TEMPORARY;
  _1646 = _1646__PHI_TEMPORARY;
  if (((((int64_t)_1645) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1645) < ((uint64_t)(((uint64_t)(uint8_t)_1643)))))) {
    _1656__PHI_TEMPORARY = _1646;   /* for PHI node */
    goto _1689;
  } else {
    goto _1691;
  }

_1691:
  _1647 = *(uint64_t*)_1636;
  _1648 = *(uint64_t*)_1638;
  if ((((int64_t)_1648) > ((int64_t)_1647))) {
    goto _1692;
  } else {
    _1656__PHI_TEMPORARY = _1646;   /* for PHI node */
    goto _1689;
  }

_1692:
  _1649 = *(void**)_1635;
  _1650 = *(uint8_t*)(((&((uint8_t*)_1649)[((int64_t)_1647)])));
  if ((((int8_t)_1650) > ((int8_t)((uint8_t)-65)))) {
    _1656__PHI_TEMPORARY = _1646;   /* for PHI node */
    goto _1689;
  } else {
    goto _1693;
  }

_1693:
  _1651 = llvm_select_u32((((int64_t)_1647) < ((int64_t)_1648)), (((uint32_t)(uint8_t)_1650)), 0);
  _1652 = *(uint64_t*)_1636;
  *(uint64_t*)_1636 = (llvm_add_u64(_1652, 1));
  _1653 = llvm_neg_u64(_1645);
  _1654 = _1646 | (llvm_select_u32((((int64_t)_1645) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1653) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1651, (((uint32_t)_1653)))))), (llvm_select_u32((((uint64_t)_1645) > ((uint64_t)UINT64_C(31))), 0, (_1651 << (((uint32_t)_1645)))))));
  _1655 = llvm_add_u64(_1645, -8);
  _1645__PHI_TEMPORARY = _1655;   /* for PHI node */
  _1646__PHI_TEMPORARY = _1654;   /* for PHI node */
  goto _1690;

  } while (1); /* end of syntactic loop '' */
_1689:
  _1656 = _1656__PHI_TEMPORARY;
  _1657 = *(uint64_t*)_1560;
  _1658 = *(uint64_t*)_1562;
  _1659 = jsyn_cbe_fshl_i64(_1658, _1657, 32);
  _1660 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1656)), _1658, 32);
  *(uint64_t*)_1560 = _1659;
  *(uint64_t*)_1562 = _1660;
  _1661 = ((&((uint8_t*)_1555)[((int64_t)56)]));
  _1662 = *(uint64_t*)_1661;
  _1663 = ((&((uint8_t*)_1555)[((int64_t)64)]));
  _1664 = *(uint64_t*)_1663;
  _1665 = ((&((uint8_t*)_1555)[((int64_t)72)]));
  _1666 = *(uint64_t*)_1665;
  _1667 = *(void**)_1555;
  _1668 = *(uint64_t*)(((&((uint8_t*)_1667)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1555)[((int64_t)48)]))) = _1662;
  *(uint64_t*)_1661 = _1664;
  *(uint64_t*)_1663 = _1666;
  *(uint64_t*)_1665 = _1668;
  julia_emit_4484((&_1558), _1554, _1555, 71, 1);
  _1632__PHI_TEMPORARY = (&_1558);   /* for PHI node */
  goto _1685;

_1687:
  julia_emit_4484((&_1559), _1554, _1555, 593, 1);
  _1632__PHI_TEMPORARY = (&_1559);   /* for PHI node */
  goto _1685;

}


static void julia_lex_quote_4566(void* _1694, void* _1695, void* _1696) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _1697 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _1698;
  void* _1699;
  struct l_array_4_uint64_t _1700;    /* Address-exposed local */
  struct l_array_4_uint64_t _1701;    /* Address-exposed local */
  uint16_t _1702;
  bool _1703;
  bool _1703__PHI_TEMPORARY;
  uint8_t _1704;
  void* _1705;
  uint64_t _1706;
  void* _1707;
  uint64_t _1708;
  bool _1709;
  uint8_t _1710;
  void* _1711;
  void* _1712;
  void* _1713;
  void* _1714;
  uint64_t _1715;
  uint64_t _1716;
  void* _1717;
  uint64_t _1718;
  void* _1719;
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
  void* _1748;
  uint64_t _1749;
  void* _1750;
  uint64_t _1751;
  void* _1752;
  uint64_t _1753;
  void* _1754;
  uint64_t _1755;
  void* _1756;
  void* _1757;
  uint64_t _1758;
  void* _1759;
  uint64_t _1760;
  void* _1761;
  uint8_t _1762;
  uint8_t _1763;
  uint8_t _1764;
  uint32_t _1765;
  uint64_t _1766;
  uint64_t _1766__PHI_TEMPORARY;
  uint32_t _1767;
  uint32_t _1767__PHI_TEMPORARY;
  uint64_t _1768;
  uint64_t _1769;
  void* _1770;
  uint8_t _1771;
  uint32_t _1772;
  uint64_t _1773;
  uint64_t _1774;
  uint32_t _1775;
  uint64_t _1776;
  uint32_t _1777;
  uint32_t _1777__PHI_TEMPORARY;
  uint64_t _1778;
  uint64_t _1779;
  uint64_t _1780;
  uint64_t _1781;
  uint64_t _1782;
  uint64_t _1783;
  uint64_t _1784;
  void* _1785;
  uint64_t _1786;
  void* _1787;
  void* _1787__PHI_TEMPORARY;
  void* _1788;
  void* _1789;

  _1698 = memset((&_1697), 0, 24);
  *((uint64_t*)&_1697) = 4;
  _1699 = *(void**)_1695;
  *(void**)(((&((uint8_t*)(&_1697))[((int64_t)8)]))) = _1699;
  *(void**)_1695 = (&_1697);
  _1702 = *(uint16_t*)(((&((uint8_t*)_1696)[((int64_t)16)])));
  if (((_1702 == ((uint16_t)3)) | (((uint16_t)(llvm_add_u16(_1702, -34))) < ((uint16_t)((uint16_t)9))))) {
    _1703__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1790;
  } else {
    goto _1791;
  }

_1791:
  switch (_1702) {
  default:
    goto _1792;
  case ((uint16_t)252):
    _1703__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1790;
  case ((uint16_t)253):
    _1703__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1790;
  case ((uint16_t)706):
    _1703__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _1790;
  }

_1792:
  _1703__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _1790;

_1790:
  _1703 = _1703__PHI_TEMPORARY;
  _1704 = ((uint8_t)(bool)_1703);
  _1705 = ((&((uint8_t*)_1696)[((int64_t)32)]));
  _1706 = *(uint64_t*)_1705;
  _1707 = ((&((uint8_t*)_1696)[((int64_t)40)]));
  _1708 = *(uint64_t*)_1707;
  _1709 = llvm_select_bool(((_1706 & INT64_C(-4294967296)) == UINT64_C(2449958197289549824)), ((_1708 & INT64_C(4294967295)) == UINT64_C(570425344)), 0);
  _1710 = ((uint8_t)(bool)_1709);
  _1711 = *(void**)(((&((uint8_t*)_1696)[((int64_t)24)])));
  _1712 = *(void**)_1711;
  _1713 = *(void**)(((&((uint8_t*)_1711)[((int64_t)8)])));
  _1714 = ((&((uint8_t*)_1711)[((int64_t)16)]));
  _1715 = *(uint64_t*)_1714;
  _1716 = llvm_add_u64(_1715, 1);
  _1717 = *(void**)(((&((uint8_t*)_1713)[((int64_t)8)])));
  _1718 = *(uint64_t*)_1713;
  if ((((int64_t)_1718) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_1712)), (((uint64_t)(uintptr_t)_1717)))), 4)), 1)), _1715))))) {
    goto _1793;
  } else {
    goto _1794;
  }

_1793:
  *(void**)(((&((uint8_t*)(&_1697))[((int64_t)16)]))) = _1711;
  julia__growend_internalNOT_OC__4533(_1695, _1711, 1, _1715);
  goto _1794;

_1794:
  *(uint64_t*)_1714 = _1716;
  _1719 = *(void**)_1711;
  _1720 = ((&((uint8_t*)_1719)[((int64_t)(_1715 << 4))]));
  *(uint8_t*)_1720 = _1710;
  *(uint8_t*)(((&((uint8_t*)_1720)[((int64_t)1)]))) = _1704;
  *(uint32_t*)(((&((uint8_t*)_1720)[((int64_t)4)]))) = 570425344;
  *(uint64_t*)(((&((uint8_t*)_1720)[((int64_t)8)]))) = 0;
  if (_1709) {
    goto _1795;
  } else {
    goto _1796;
  }

_1795:
  _1721 = *(void**)_1696;
  _1722 = ((&((uint8_t*)_1721)[((int64_t)16)]));
  _1723 = *(uint64_t*)_1722;
  _1724 = ((&((uint8_t*)_1721)[((int64_t)8)]));
  _1725 = *(uint64_t*)_1724;
  if ((((int64_t)_1725) > ((int64_t)_1723))) {
    goto _1797;
  } else {
    _1742__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1798;
  }

_1797:
  _1726 = *(void**)_1721;
  _1727 = *(uint8_t*)(((&((uint8_t*)_1726)[((int64_t)_1723)])));
  *(uint64_t*)_1722 = (llvm_add_u64(_1723, 1));
  _1728 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1727)), 0);
  _1729 = llvm_sub_u8(32, (llvm_shl_u8(_1728, 3)));
  _1730 = (((uint32_t)(uint8_t)_1727)) << 24;
  if ((((uint8_t)_1729) > ((uint8_t)((uint8_t)16)))) {
    _1742__PHI_TEMPORARY = _1730;   /* for PHI node */
    goto _1798;
  } else {
    _1731__PHI_TEMPORARY = 16;   /* for PHI node */
    _1732__PHI_TEMPORARY = _1730;   /* for PHI node */
    goto _1799;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1799:
  _1731 = _1731__PHI_TEMPORARY;
  _1732 = _1732__PHI_TEMPORARY;
  if (((((int64_t)_1731) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1731) < ((uint64_t)(((uint64_t)(uint8_t)_1729)))))) {
    _1742__PHI_TEMPORARY = _1732;   /* for PHI node */
    goto _1798;
  } else {
    goto _1800;
  }

_1800:
  _1733 = *(uint64_t*)_1722;
  _1734 = *(uint64_t*)_1724;
  if ((((int64_t)_1734) > ((int64_t)_1733))) {
    goto _1801;
  } else {
    _1742__PHI_TEMPORARY = _1732;   /* for PHI node */
    goto _1798;
  }

_1801:
  _1735 = *(void**)_1721;
  _1736 = *(uint8_t*)(((&((uint8_t*)_1735)[((int64_t)_1733)])));
  if ((((int8_t)_1736) > ((int8_t)((uint8_t)-65)))) {
    _1742__PHI_TEMPORARY = _1732;   /* for PHI node */
    goto _1798;
  } else {
    goto _1802;
  }

_1802:
  _1737 = llvm_select_u32((((int64_t)_1733) < ((int64_t)_1734)), (((uint32_t)(uint8_t)_1736)), 0);
  _1738 = *(uint64_t*)_1722;
  *(uint64_t*)_1722 = (llvm_add_u64(_1738, 1));
  _1739 = llvm_neg_u64(_1731);
  _1740 = _1732 | (llvm_select_u32((((int64_t)_1731) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1739) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1737, (((uint32_t)_1739)))))), (llvm_select_u32((((uint64_t)_1731) > ((uint64_t)UINT64_C(31))), 0, (_1737 << (((uint32_t)_1731)))))));
  _1741 = llvm_add_u64(_1731, -8);
  _1731__PHI_TEMPORARY = _1741;   /* for PHI node */
  _1732__PHI_TEMPORARY = _1740;   /* for PHI node */
  goto _1799;

  } while (1); /* end of syntactic loop '' */
_1798:
  _1742 = _1742__PHI_TEMPORARY;
  _1743 = *(uint64_t*)_1705;
  _1744 = *(uint64_t*)_1707;
  _1745 = jsyn_cbe_fshl_i64(_1744, _1743, 32);
  _1746 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1742)), _1744, 32);
  *(uint64_t*)_1705 = _1745;
  *(uint64_t*)_1707 = _1746;
  _1747 = ((&((uint8_t*)_1696)[((int64_t)48)]));
  _1748 = ((&((uint8_t*)_1696)[((int64_t)56)]));
  _1749 = *(uint64_t*)_1748;
  _1750 = ((&((uint8_t*)_1696)[((int64_t)64)]));
  _1751 = *(uint64_t*)_1750;
  _1752 = ((&((uint8_t*)_1696)[((int64_t)72)]));
  _1753 = *(uint64_t*)_1752;
  _1754 = *(void**)_1696;
  _1755 = *(uint64_t*)(((&((uint8_t*)_1754)[((int64_t)16)])));
  *(uint64_t*)_1747 = _1749;
  *(uint64_t*)_1748 = _1751;
  *(uint64_t*)_1750 = _1753;
  *(uint64_t*)_1752 = _1755;
  _1756 = *(void**)_1696;
  _1757 = ((&((uint8_t*)_1756)[((int64_t)16)]));
  _1758 = *(uint64_t*)_1757;
  _1759 = ((&((uint8_t*)_1756)[((int64_t)8)]));
  _1760 = *(uint64_t*)_1759;
  if ((((int64_t)_1760) > ((int64_t)_1758))) {
    goto _1803;
  } else {
    _1777__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1804;
  }

_1803:
  _1761 = *(void**)_1756;
  _1762 = *(uint8_t*)(((&((uint8_t*)_1761)[((int64_t)_1758)])));
  *(uint64_t*)_1757 = (llvm_add_u64(_1758, 1));
  _1763 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1762)), 0);
  _1764 = llvm_sub_u8(32, (llvm_shl_u8(_1763, 3)));
  _1765 = (((uint32_t)(uint8_t)_1762)) << 24;
  if ((((uint8_t)_1764) > ((uint8_t)((uint8_t)16)))) {
    _1777__PHI_TEMPORARY = _1765;   /* for PHI node */
    goto _1804;
  } else {
    _1766__PHI_TEMPORARY = 16;   /* for PHI node */
    _1767__PHI_TEMPORARY = _1765;   /* for PHI node */
    goto _1805;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1805:
  _1766 = _1766__PHI_TEMPORARY;
  _1767 = _1767__PHI_TEMPORARY;
  if (((((int64_t)_1766) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1766) < ((uint64_t)(((uint64_t)(uint8_t)_1764)))))) {
    _1777__PHI_TEMPORARY = _1767;   /* for PHI node */
    goto _1804;
  } else {
    goto _1806;
  }

_1806:
  _1768 = *(uint64_t*)_1757;
  _1769 = *(uint64_t*)_1759;
  if ((((int64_t)_1769) > ((int64_t)_1768))) {
    goto _1807;
  } else {
    _1777__PHI_TEMPORARY = _1767;   /* for PHI node */
    goto _1804;
  }

_1807:
  _1770 = *(void**)_1756;
  _1771 = *(uint8_t*)(((&((uint8_t*)_1770)[((int64_t)_1768)])));
  if ((((int8_t)_1771) > ((int8_t)((uint8_t)-65)))) {
    _1777__PHI_TEMPORARY = _1767;   /* for PHI node */
    goto _1804;
  } else {
    goto _1808;
  }

_1808:
  _1772 = llvm_select_u32((((int64_t)_1768) < ((int64_t)_1769)), (((uint32_t)(uint8_t)_1771)), 0);
  _1773 = *(uint64_t*)_1757;
  *(uint64_t*)_1757 = (llvm_add_u64(_1773, 1));
  _1774 = llvm_neg_u64(_1766);
  _1775 = _1767 | (llvm_select_u32((((int64_t)_1766) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1774) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1772, (((uint32_t)_1774)))))), (llvm_select_u32((((uint64_t)_1766) > ((uint64_t)UINT64_C(31))), 0, (_1772 << (((uint32_t)_1766)))))));
  _1776 = llvm_add_u64(_1766, -8);
  _1766__PHI_TEMPORARY = _1776;   /* for PHI node */
  _1767__PHI_TEMPORARY = _1775;   /* for PHI node */
  goto _1805;

  } while (1); /* end of syntactic loop '' */
_1804:
  _1777 = _1777__PHI_TEMPORARY;
  _1778 = *(uint64_t*)_1705;
  _1779 = *(uint64_t*)_1707;
  _1780 = jsyn_cbe_fshl_i64(_1779, _1778, 32);
  _1781 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1777)), _1779, 32);
  *(uint64_t*)_1705 = _1780;
  *(uint64_t*)_1707 = _1781;
  _1782 = *(uint64_t*)_1748;
  _1783 = *(uint64_t*)_1750;
  _1784 = *(uint64_t*)_1752;
  _1785 = *(void**)_1696;
  _1786 = *(uint64_t*)(((&((uint8_t*)_1785)[((int64_t)16)])));
  *(uint64_t*)_1747 = _1782;
  *(uint64_t*)_1748 = _1783;
  *(uint64_t*)_1750 = _1784;
  *(uint64_t*)_1752 = _1786;
  julia_emit_4484((&_1700), _1695, _1696, 63, 1);
  _1787__PHI_TEMPORARY = (&_1700);   /* for PHI node */
  goto _1809;

_1809:
  _1787 = _1787__PHI_TEMPORARY;
  _1788 = memcpy(_1694, _1787, 32);
  _1789 = *(void**)(((&((uint8_t*)(&_1697))[((int64_t)8)])));
  *(void**)_1695 = _1789;
  return;
_1796:
  julia_emit_4484((&_1701), _1695, _1696, 62, 1);
  _1787__PHI_TEMPORARY = (&_1701);   /* for PHI node */
  goto _1809;

}


static void julia_lex_division_4571(void* _1810, void* _1811, void* _1812) {
  struct l_array_4_uint64_t _1813;    /* Address-exposed local */
  struct l_array_4_uint64_t _1814;    /* Address-exposed local */
  void* _1815;
  uint64_t _1816;
  void* _1817;
  void* _1818;
  void* _1819;
  uint64_t _1820;
  void* _1821;
  uint64_t _1822;
  void* _1823;
  uint8_t _1824;
  uint8_t _1825;
  uint8_t _1826;
  uint32_t _1827;
  uint64_t _1828;
  uint64_t _1828__PHI_TEMPORARY;
  uint32_t _1829;
  uint32_t _1829__PHI_TEMPORARY;
  uint64_t _1830;
  uint64_t _1831;
  void* _1832;
  uint8_t _1833;
  uint32_t _1834;
  uint64_t _1835;
  uint64_t _1836;
  uint32_t _1837;
  uint64_t _1838;
  uint32_t _1839;
  uint32_t _1839__PHI_TEMPORARY;
  uint64_t _1840;
  uint64_t _1841;
  uint64_t _1842;
  uint64_t _1843;
  void* _1844;
  uint64_t _1845;
  void* _1846;
  uint64_t _1847;
  void* _1848;
  uint64_t _1849;
  void* _1850;
  uint64_t _1851;
  void* _1852;
  void* _1852__PHI_TEMPORARY;
  void* _1853;

  _1815 = ((&((uint8_t*)_1812)[((int64_t)32)]));
  _1816 = *(uint64_t*)_1815;
  _1817 = ((&((uint8_t*)_1812)[((int64_t)40)]));
  if (((_1816 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _1854;
  } else {
    goto _1855;
  }

_1854:
  _1818 = *(void**)_1812;
  _1819 = ((&((uint8_t*)_1818)[((int64_t)16)]));
  _1820 = *(uint64_t*)_1819;
  _1821 = ((&((uint8_t*)_1818)[((int64_t)8)]));
  _1822 = *(uint64_t*)_1821;
  if ((((int64_t)_1822) > ((int64_t)_1820))) {
    goto _1856;
  } else {
    _1839__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1857;
  }

_1856:
  _1823 = *(void**)_1818;
  _1824 = *(uint8_t*)(((&((uint8_t*)_1823)[((int64_t)_1820)])));
  *(uint64_t*)_1819 = (llvm_add_u64(_1820, 1));
  _1825 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1824)), 0);
  _1826 = llvm_sub_u8(32, (llvm_shl_u8(_1825, 3)));
  _1827 = (((uint32_t)(uint8_t)_1824)) << 24;
  if ((((uint8_t)_1826) > ((uint8_t)((uint8_t)16)))) {
    _1839__PHI_TEMPORARY = _1827;   /* for PHI node */
    goto _1857;
  } else {
    _1828__PHI_TEMPORARY = 16;   /* for PHI node */
    _1829__PHI_TEMPORARY = _1827;   /* for PHI node */
    goto _1858;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1858:
  _1828 = _1828__PHI_TEMPORARY;
  _1829 = _1829__PHI_TEMPORARY;
  if (((((int64_t)_1828) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1828) < ((uint64_t)(((uint64_t)(uint8_t)_1826)))))) {
    _1839__PHI_TEMPORARY = _1829;   /* for PHI node */
    goto _1857;
  } else {
    goto _1859;
  }

_1859:
  _1830 = *(uint64_t*)_1819;
  _1831 = *(uint64_t*)_1821;
  if ((((int64_t)_1831) > ((int64_t)_1830))) {
    goto _1860;
  } else {
    _1839__PHI_TEMPORARY = _1829;   /* for PHI node */
    goto _1857;
  }

_1860:
  _1832 = *(void**)_1818;
  _1833 = *(uint8_t*)(((&((uint8_t*)_1832)[((int64_t)_1830)])));
  if ((((int8_t)_1833) > ((int8_t)((uint8_t)-65)))) {
    _1839__PHI_TEMPORARY = _1829;   /* for PHI node */
    goto _1857;
  } else {
    goto _1861;
  }

_1861:
  _1834 = llvm_select_u32((((int64_t)_1830) < ((int64_t)_1831)), (((uint32_t)(uint8_t)_1833)), 0);
  _1835 = *(uint64_t*)_1819;
  *(uint64_t*)_1819 = (llvm_add_u64(_1835, 1));
  _1836 = llvm_neg_u64(_1828);
  _1837 = _1829 | (llvm_select_u32((((int64_t)_1828) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1836) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1834, (((uint32_t)_1836)))))), (llvm_select_u32((((uint64_t)_1828) > ((uint64_t)UINT64_C(31))), 0, (_1834 << (((uint32_t)_1828)))))));
  _1838 = llvm_add_u64(_1828, -8);
  _1828__PHI_TEMPORARY = _1838;   /* for PHI node */
  _1829__PHI_TEMPORARY = _1837;   /* for PHI node */
  goto _1858;

  } while (1); /* end of syntactic loop '' */
_1857:
  _1839 = _1839__PHI_TEMPORARY;
  _1840 = *(uint64_t*)_1815;
  _1841 = *(uint64_t*)_1817;
  _1842 = jsyn_cbe_fshl_i64(_1841, _1840, 32);
  _1843 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1839)), _1841, 32);
  *(uint64_t*)_1815 = _1842;
  *(uint64_t*)_1817 = _1843;
  _1844 = ((&((uint8_t*)_1812)[((int64_t)56)]));
  _1845 = *(uint64_t*)_1844;
  _1846 = ((&((uint8_t*)_1812)[((int64_t)64)]));
  _1847 = *(uint64_t*)_1846;
  _1848 = ((&((uint8_t*)_1812)[((int64_t)72)]));
  _1849 = *(uint64_t*)_1848;
  _1850 = *(void**)_1812;
  _1851 = *(uint64_t*)(((&((uint8_t*)_1850)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1812)[((int64_t)48)]))) = _1845;
  *(uint64_t*)_1844 = _1847;
  *(uint64_t*)_1846 = _1849;
  *(uint64_t*)_1848 = _1851;
  julia_emit_4484((&_1813), _1811, _1812, 71, 1);
  _1852__PHI_TEMPORARY = (&_1813);   /* for PHI node */
  goto _1862;

_1862:
  _1852 = _1852__PHI_TEMPORARY;
  _1853 = memcpy(_1810, _1852, 32);
  return;
_1855:
  julia_emit_4484((&_1814), _1811, _1812, 594, 1);
  _1852__PHI_TEMPORARY = (&_1814);   /* for PHI node */
  goto _1862;

}


static void julia_lex_amper_4575(void* _1863, void* _1864, void* _1865) {
  struct l_array_4_uint64_t _1866;    /* Address-exposed local */
  struct l_array_4_uint64_t _1867;    /* Address-exposed local */
  struct l_array_4_uint64_t _1868;    /* Address-exposed local */
  void* _1869;
  uint64_t _1870;
  void* _1871;
  void* _1872;
  void* _1873;
  uint64_t _1874;
  void* _1875;
  uint64_t _1876;
  void* _1877;
  uint8_t _1878;
  uint8_t _1879;
  uint8_t _1880;
  uint32_t _1881;
  uint64_t _1882;
  uint64_t _1882__PHI_TEMPORARY;
  uint32_t _1883;
  uint32_t _1883__PHI_TEMPORARY;
  uint64_t _1884;
  uint64_t _1885;
  void* _1886;
  uint8_t _1887;
  uint32_t _1888;
  uint64_t _1889;
  uint64_t _1890;
  uint32_t _1891;
  uint64_t _1892;
  uint32_t _1893;
  uint32_t _1893__PHI_TEMPORARY;
  uint64_t _1894;
  uint64_t _1895;
  uint64_t _1896;
  uint64_t _1897;
  void* _1898;
  uint64_t _1899;
  void* _1900;
  uint64_t _1901;
  void* _1902;
  uint64_t _1903;
  void* _1904;
  uint64_t _1905;
  void* _1906;
  void* _1906__PHI_TEMPORARY;
  void* _1907;
  uint64_t _1908;
  void* _1909;
  void* _1910;
  uint64_t _1911;
  void* _1912;
  uint64_t _1913;
  void* _1914;
  uint8_t _1915;
  uint8_t _1916;
  uint8_t _1917;
  uint32_t _1918;
  uint64_t _1919;
  uint64_t _1919__PHI_TEMPORARY;
  uint32_t _1920;
  uint32_t _1920__PHI_TEMPORARY;
  uint64_t _1921;
  uint64_t _1922;
  void* _1923;
  uint8_t _1924;
  uint32_t _1925;
  uint64_t _1926;
  uint64_t _1927;
  uint32_t _1928;
  uint64_t _1929;
  uint32_t _1930;
  uint32_t _1930__PHI_TEMPORARY;
  uint64_t _1931;
  uint64_t _1932;
  uint64_t _1933;
  uint64_t _1934;
  void* _1935;
  uint64_t _1936;
  void* _1937;
  uint64_t _1938;
  void* _1939;
  uint64_t _1940;
  void* _1941;
  uint64_t _1942;

  _1869 = ((&((uint8_t*)_1865)[((int64_t)32)]));
  _1870 = *(uint64_t*)_1869;
  _1871 = ((&((uint8_t*)_1865)[((int64_t)40)]));
  if (((_1870 & INT64_C(-4294967296)) == UINT64_C(2738188573441261568))) {
    goto _1943;
  } else {
    goto _1944;
  }

_1943:
  _1872 = *(void**)_1865;
  _1873 = ((&((uint8_t*)_1872)[((int64_t)16)]));
  _1874 = *(uint64_t*)_1873;
  _1875 = ((&((uint8_t*)_1872)[((int64_t)8)]));
  _1876 = *(uint64_t*)_1875;
  if ((((int64_t)_1876) > ((int64_t)_1874))) {
    goto _1945;
  } else {
    _1893__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1946;
  }

_1945:
  _1877 = *(void**)_1872;
  _1878 = *(uint8_t*)(((&((uint8_t*)_1877)[((int64_t)_1874)])));
  *(uint64_t*)_1873 = (llvm_add_u64(_1874, 1));
  _1879 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1878)), 0);
  _1880 = llvm_sub_u8(32, (llvm_shl_u8(_1879, 3)));
  _1881 = (((uint32_t)(uint8_t)_1878)) << 24;
  if ((((uint8_t)_1880) > ((uint8_t)((uint8_t)16)))) {
    _1893__PHI_TEMPORARY = _1881;   /* for PHI node */
    goto _1946;
  } else {
    _1882__PHI_TEMPORARY = 16;   /* for PHI node */
    _1883__PHI_TEMPORARY = _1881;   /* for PHI node */
    goto _1947;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1947:
  _1882 = _1882__PHI_TEMPORARY;
  _1883 = _1883__PHI_TEMPORARY;
  if (((((int64_t)_1882) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1882) < ((uint64_t)(((uint64_t)(uint8_t)_1880)))))) {
    _1893__PHI_TEMPORARY = _1883;   /* for PHI node */
    goto _1946;
  } else {
    goto _1948;
  }

_1948:
  _1884 = *(uint64_t*)_1873;
  _1885 = *(uint64_t*)_1875;
  if ((((int64_t)_1885) > ((int64_t)_1884))) {
    goto _1949;
  } else {
    _1893__PHI_TEMPORARY = _1883;   /* for PHI node */
    goto _1946;
  }

_1949:
  _1886 = *(void**)_1872;
  _1887 = *(uint8_t*)(((&((uint8_t*)_1886)[((int64_t)_1884)])));
  if ((((int8_t)_1887) > ((int8_t)((uint8_t)-65)))) {
    _1893__PHI_TEMPORARY = _1883;   /* for PHI node */
    goto _1946;
  } else {
    goto _1950;
  }

_1950:
  _1888 = llvm_select_u32((((int64_t)_1884) < ((int64_t)_1885)), (((uint32_t)(uint8_t)_1887)), 0);
  _1889 = *(uint64_t*)_1873;
  *(uint64_t*)_1873 = (llvm_add_u64(_1889, 1));
  _1890 = llvm_neg_u64(_1882);
  _1891 = _1883 | (llvm_select_u32((((int64_t)_1882) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1890) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1888, (((uint32_t)_1890)))))), (llvm_select_u32((((uint64_t)_1882) > ((uint64_t)UINT64_C(31))), 0, (_1888 << (((uint32_t)_1882)))))));
  _1892 = llvm_add_u64(_1882, -8);
  _1882__PHI_TEMPORARY = _1892;   /* for PHI node */
  _1883__PHI_TEMPORARY = _1891;   /* for PHI node */
  goto _1947;

  } while (1); /* end of syntactic loop '' */
_1946:
  _1893 = _1893__PHI_TEMPORARY;
  _1894 = *(uint64_t*)_1869;
  _1895 = *(uint64_t*)_1871;
  _1896 = jsyn_cbe_fshl_i64(_1895, _1894, 32);
  _1897 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1893)), _1895, 32);
  *(uint64_t*)_1869 = _1896;
  *(uint64_t*)_1871 = _1897;
  _1898 = ((&((uint8_t*)_1865)[((int64_t)56)]));
  _1899 = *(uint64_t*)_1898;
  _1900 = ((&((uint8_t*)_1865)[((int64_t)64)]));
  _1901 = *(uint64_t*)_1900;
  _1902 = ((&((uint8_t*)_1865)[((int64_t)72)]));
  _1903 = *(uint64_t*)_1902;
  _1904 = *(void**)_1865;
  _1905 = *(uint64_t*)(((&((uint8_t*)_1904)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1865)[((int64_t)48)]))) = _1899;
  *(uint64_t*)_1898 = _1901;
  *(uint64_t*)_1900 = _1903;
  *(uint64_t*)_1902 = _1905;
  julia_emit_4484((&_1866), _1864, _1865, 234, 1);
  _1906__PHI_TEMPORARY = (&_1866);   /* for PHI node */
  goto _1951;

_1951:
  _1906 = _1906__PHI_TEMPORARY;
  _1907 = memcpy(_1863, _1906, 32);
  return;
_1944:
  _1908 = *(uint64_t*)_1869;
  if (((_1908 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _1952;
  } else {
    goto _1953;
  }

_1952:
  _1909 = *(void**)_1865;
  _1910 = ((&((uint8_t*)_1909)[((int64_t)16)]));
  _1911 = *(uint64_t*)_1910;
  _1912 = ((&((uint8_t*)_1909)[((int64_t)8)]));
  _1913 = *(uint64_t*)_1912;
  if ((((int64_t)_1913) > ((int64_t)_1911))) {
    goto _1954;
  } else {
    _1930__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _1955;
  }

_1954:
  _1914 = *(void**)_1909;
  _1915 = *(uint8_t*)(((&((uint8_t*)_1914)[((int64_t)_1911)])));
  *(uint64_t*)_1910 = (llvm_add_u64(_1911, 1));
  _1916 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1915)), 0);
  _1917 = llvm_sub_u8(32, (llvm_shl_u8(_1916, 3)));
  _1918 = (((uint32_t)(uint8_t)_1915)) << 24;
  if ((((uint8_t)_1917) > ((uint8_t)((uint8_t)16)))) {
    _1930__PHI_TEMPORARY = _1918;   /* for PHI node */
    goto _1955;
  } else {
    _1919__PHI_TEMPORARY = 16;   /* for PHI node */
    _1920__PHI_TEMPORARY = _1918;   /* for PHI node */
    goto _1956;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_1956:
  _1919 = _1919__PHI_TEMPORARY;
  _1920 = _1920__PHI_TEMPORARY;
  if (((((int64_t)_1919) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1919) < ((uint64_t)(((uint64_t)(uint8_t)_1917)))))) {
    _1930__PHI_TEMPORARY = _1920;   /* for PHI node */
    goto _1955;
  } else {
    goto _1957;
  }

_1957:
  _1921 = *(uint64_t*)_1910;
  _1922 = *(uint64_t*)_1912;
  if ((((int64_t)_1922) > ((int64_t)_1921))) {
    goto _1958;
  } else {
    _1930__PHI_TEMPORARY = _1920;   /* for PHI node */
    goto _1955;
  }

_1958:
  _1923 = *(void**)_1909;
  _1924 = *(uint8_t*)(((&((uint8_t*)_1923)[((int64_t)_1921)])));
  if ((((int8_t)_1924) > ((int8_t)((uint8_t)-65)))) {
    _1930__PHI_TEMPORARY = _1920;   /* for PHI node */
    goto _1955;
  } else {
    goto _1959;
  }

_1959:
  _1925 = llvm_select_u32((((int64_t)_1921) < ((int64_t)_1922)), (((uint32_t)(uint8_t)_1924)), 0);
  _1926 = *(uint64_t*)_1910;
  *(uint64_t*)_1910 = (llvm_add_u64(_1926, 1));
  _1927 = llvm_neg_u64(_1919);
  _1928 = _1920 | (llvm_select_u32((((int64_t)_1919) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1927) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1925, (((uint32_t)_1927)))))), (llvm_select_u32((((uint64_t)_1919) > ((uint64_t)UINT64_C(31))), 0, (_1925 << (((uint32_t)_1919)))))));
  _1929 = llvm_add_u64(_1919, -8);
  _1919__PHI_TEMPORARY = _1929;   /* for PHI node */
  _1920__PHI_TEMPORARY = _1928;   /* for PHI node */
  goto _1956;

  } while (1); /* end of syntactic loop '' */
_1955:
  _1930 = _1930__PHI_TEMPORARY;
  _1931 = *(uint64_t*)_1869;
  _1932 = *(uint64_t*)_1871;
  _1933 = jsyn_cbe_fshl_i64(_1932, _1931, 32);
  _1934 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1930)), _1932, 32);
  *(uint64_t*)_1869 = _1933;
  *(uint64_t*)_1871 = _1934;
  _1935 = ((&((uint8_t*)_1865)[((int64_t)56)]));
  _1936 = *(uint64_t*)_1935;
  _1937 = ((&((uint8_t*)_1865)[((int64_t)64)]));
  _1938 = *(uint64_t*)_1937;
  _1939 = ((&((uint8_t*)_1865)[((int64_t)72)]));
  _1940 = *(uint64_t*)_1939;
  _1941 = *(void**)_1865;
  _1942 = *(uint64_t*)(((&((uint8_t*)_1941)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1865)[((int64_t)48)]))) = _1936;
  *(uint64_t*)_1935 = _1938;
  *(uint64_t*)_1937 = _1940;
  *(uint64_t*)_1939 = _1942;
  julia_emit_4484((&_1867), _1864, _1865, 71, 1);
  _1906__PHI_TEMPORARY = (&_1867);   /* for PHI node */
  goto _1951;

_1953:
  julia_emit_4484((&_1868), _1864, _1865, 600, 1);
  _1906__PHI_TEMPORARY = (&_1868);   /* for PHI node */
  goto _1951;

}


static void julia_lex_less_4587(void* _1960, void* _1961, void* _1962) {
  struct l_array_4_uint64_t _1963;    /* Address-exposed local */
  struct l_array_4_uint64_t _1964;    /* Address-exposed local */
  struct l_array_4_uint64_t _1965;    /* Address-exposed local */
  struct l_array_4_uint64_t _1966;    /* Address-exposed local */
  struct l_array_4_uint64_t _1967;    /* Address-exposed local */
  struct l_array_4_uint64_t _1968;    /* Address-exposed local */
  struct l_array_4_uint64_t _1969;    /* Address-exposed local */
  struct l_array_4_uint64_t _1970;    /* Address-exposed local */
  struct l_array_4_uint64_t _1971;    /* Address-exposed local */
  struct l_array_4_uint64_t _1972;    /* Address-exposed local */
  void* _1973;
  uint64_t _1974;
  void* _1975;
  void* _1976;
  void* _1977;
  uint64_t _1978;
  void* _1979;
  uint64_t _1980;
  void* _1981;
  uint8_t _1982;
  uint8_t _1983;
  uint8_t _1984;
  uint32_t _1985;
  uint64_t _1986;
  uint64_t _1986__PHI_TEMPORARY;
  uint32_t _1987;
  uint32_t _1987__PHI_TEMPORARY;
  uint64_t _1988;
  uint64_t _1989;
  void* _1990;
  uint8_t _1991;
  uint32_t _1992;
  uint64_t _1993;
  uint64_t _1994;
  uint32_t _1995;
  uint64_t _1996;
  uint32_t _1997;
  uint32_t _1997__PHI_TEMPORARY;
  uint64_t _1998;
  uint64_t _1999;
  uint64_t _2000;
  uint64_t _2001;
  void* _2002;
  uint64_t _2003;
  void* _2004;
  uint64_t _2005;
  void* _2006;
  uint64_t _2007;
  void* _2008;
  uint64_t _2009;
  uint64_t _2010;
  void* _2011;
  void* _2012;
  uint64_t _2013;
  void* _2014;
  uint64_t _2015;
  void* _2016;
  uint8_t _2017;
  uint8_t _2018;
  uint8_t _2019;
  uint32_t _2020;
  uint64_t _2021;
  uint64_t _2021__PHI_TEMPORARY;
  uint32_t _2022;
  uint32_t _2022__PHI_TEMPORARY;
  uint64_t _2023;
  uint64_t _2024;
  void* _2025;
  uint8_t _2026;
  uint32_t _2027;
  uint64_t _2028;
  uint64_t _2029;
  uint32_t _2030;
  uint64_t _2031;
  uint32_t _2032;
  uint32_t _2032__PHI_TEMPORARY;
  uint64_t _2033;
  uint64_t _2034;
  uint64_t _2035;
  uint64_t _2036;
  void* _2037;
  uint64_t _2038;
  void* _2039;
  uint64_t _2040;
  void* _2041;
  uint64_t _2042;
  void* _2043;
  uint64_t _2044;
  void* _2045;
  void* _2045__PHI_TEMPORARY;
  void* _2046;
  uint64_t _2047;
  void* _2048;
  void* _2049;
  uint64_t _2050;
  void* _2051;
  uint64_t _2052;
  void* _2053;
  uint8_t _2054;
  uint8_t _2055;
  uint8_t _2056;
  uint32_t _2057;
  uint64_t _2058;
  uint64_t _2058__PHI_TEMPORARY;
  uint32_t _2059;
  uint32_t _2059__PHI_TEMPORARY;
  uint64_t _2060;
  uint64_t _2061;
  void* _2062;
  uint8_t _2063;
  uint32_t _2064;
  uint64_t _2065;
  uint64_t _2066;
  uint32_t _2067;
  uint64_t _2068;
  uint32_t _2069;
  uint32_t _2069__PHI_TEMPORARY;
  uint64_t _2070;
  uint64_t _2071;
  uint64_t _2072;
  uint64_t _2073;
  void* _2074;
  uint64_t _2075;
  void* _2076;
  uint64_t _2077;
  void* _2078;
  uint64_t _2079;
  void* _2080;
  uint64_t _2081;
  uint64_t _2082;
  void* _2083;
  void* _2084;
  uint64_t _2085;
  void* _2086;
  uint64_t _2087;
  void* _2088;
  uint8_t _2089;
  uint8_t _2090;
  uint8_t _2091;
  uint32_t _2092;
  uint64_t _2093;
  uint64_t _2093__PHI_TEMPORARY;
  uint32_t _2094;
  uint32_t _2094__PHI_TEMPORARY;
  uint64_t _2095;
  uint64_t _2096;
  void* _2097;
  uint8_t _2098;
  uint32_t _2099;
  uint64_t _2100;
  uint64_t _2101;
  uint32_t _2102;
  uint64_t _2103;
  uint32_t _2104;
  uint32_t _2104__PHI_TEMPORARY;
  uint64_t _2105;
  uint64_t _2106;
  uint64_t _2107;
  uint64_t _2108;
  void* _2109;
  uint64_t _2110;
  void* _2111;
  uint64_t _2112;
  void* _2113;
  uint64_t _2114;
  void* _2115;
  uint64_t _2116;
  uint64_t _2117;
  void* _2118;
  void* _2119;
  uint64_t _2120;
  void* _2121;
  uint64_t _2122;
  void* _2123;
  uint8_t _2124;
  uint8_t _2125;
  uint8_t _2126;
  uint32_t _2127;
  uint64_t _2128;
  uint64_t _2128__PHI_TEMPORARY;
  uint32_t _2129;
  uint32_t _2129__PHI_TEMPORARY;
  uint64_t _2130;
  uint64_t _2131;
  void* _2132;
  uint8_t _2133;
  uint32_t _2134;
  uint64_t _2135;
  uint64_t _2136;
  uint32_t _2137;
  uint64_t _2138;
  uint32_t _2139;
  uint32_t _2139__PHI_TEMPORARY;
  uint64_t _2140;
  uint64_t _2141;
  uint64_t _2142;
  uint64_t _2143;
  void* _2144;
  uint64_t _2145;
  void* _2146;
  uint64_t _2147;
  void* _2148;
  uint64_t _2149;
  void* _2150;
  uint64_t _2151;
  uint64_t _2152;
  uint64_t _2153;
  void* _2154;
  void* _2155;
  uint64_t _2156;
  void* _2157;
  uint64_t _2158;
  void* _2159;
  uint8_t _2160;
  uint8_t _2161;
  uint8_t _2162;
  uint32_t _2163;
  uint64_t _2164;
  uint64_t _2164__PHI_TEMPORARY;
  uint32_t _2165;
  uint32_t _2165__PHI_TEMPORARY;
  uint64_t _2166;
  uint64_t _2167;
  void* _2168;
  uint8_t _2169;
  uint32_t _2170;
  uint64_t _2171;
  uint64_t _2172;
  uint32_t _2173;
  uint64_t _2174;
  uint32_t _2175;
  uint32_t _2175__PHI_TEMPORARY;
  uint64_t _2176;
  uint64_t _2177;
  uint64_t _2178;
  uint64_t _2179;
  void* _2180;
  void* _2181;
  uint64_t _2182;
  void* _2183;
  uint64_t _2184;
  void* _2185;
  uint64_t _2186;
  void* _2187;
  uint64_t _2188;
  void* _2189;
  void* _2190;
  uint64_t _2191;
  void* _2192;
  uint64_t _2193;
  void* _2194;
  uint8_t _2195;
  uint8_t _2196;
  uint8_t _2197;
  uint32_t _2198;
  uint64_t _2199;
  uint64_t _2199__PHI_TEMPORARY;
  uint32_t _2200;
  uint32_t _2200__PHI_TEMPORARY;
  uint64_t _2201;
  uint64_t _2202;
  void* _2203;
  uint8_t _2204;
  uint32_t _2205;
  uint64_t _2206;
  uint64_t _2207;
  uint32_t _2208;
  uint64_t _2209;
  uint32_t _2210;
  uint32_t _2210__PHI_TEMPORARY;
  uint64_t _2211;
  uint64_t _2212;
  uint64_t _2213;
  uint64_t _2214;
  uint64_t _2215;
  uint64_t _2216;
  uint64_t _2217;
  void* _2218;
  uint64_t _2219;
  uint64_t _2220;
  void* _2221;
  void* _2222;
  uint64_t _2223;
  void* _2224;
  uint64_t _2225;
  void* _2226;
  uint8_t _2227;
  uint8_t _2228;
  uint8_t _2229;
  uint32_t _2230;
  uint64_t _2231;
  uint64_t _2231__PHI_TEMPORARY;
  uint32_t _2232;
  uint32_t _2232__PHI_TEMPORARY;
  uint64_t _2233;
  uint64_t _2234;
  void* _2235;
  uint8_t _2236;
  uint32_t _2237;
  uint64_t _2238;
  uint64_t _2239;
  uint32_t _2240;
  uint64_t _2241;
  uint32_t _2242;
  uint32_t _2242__PHI_TEMPORARY;
  uint64_t _2243;
  uint64_t _2244;
  uint64_t _2245;
  uint64_t _2246;
  uint64_t _2247;
  uint64_t _2248;
  uint64_t _2249;
  void* _2250;
  uint64_t _2251;
  uint64_t _2252;
  void* _2253;
  void* _2254;
  uint64_t _2255;
  void* _2256;
  uint64_t _2257;
  void* _2258;
  uint8_t _2259;
  uint8_t _2260;
  uint8_t _2261;
  uint32_t _2262;
  uint64_t _2263;
  uint64_t _2263__PHI_TEMPORARY;
  uint32_t _2264;
  uint32_t _2264__PHI_TEMPORARY;
  uint64_t _2265;
  uint64_t _2266;
  void* _2267;
  uint8_t _2268;
  uint32_t _2269;
  uint64_t _2270;
  uint64_t _2271;
  uint32_t _2272;
  uint64_t _2273;
  uint32_t _2274;
  uint32_t _2274__PHI_TEMPORARY;
  uint64_t _2275;
  uint64_t _2276;
  uint64_t _2277;
  uint64_t _2278;
  uint64_t _2279;
  uint64_t _2280;
  uint64_t _2281;
  void* _2282;
  uint64_t _2283;
  uint64_t _2284;
  void* _2285;
  void* _2286;
  uint64_t _2287;
  void* _2288;
  uint64_t _2289;
  void* _2290;
  uint8_t _2291;
  uint8_t _2292;
  uint8_t _2293;
  uint32_t _2294;
  uint64_t _2295;
  uint64_t _2295__PHI_TEMPORARY;
  uint32_t _2296;
  uint32_t _2296__PHI_TEMPORARY;
  uint64_t _2297;
  uint64_t _2298;
  void* _2299;
  uint8_t _2300;
  uint32_t _2301;
  uint64_t _2302;
  uint64_t _2303;
  uint32_t _2304;
  uint64_t _2305;
  uint32_t _2306;
  uint32_t _2306__PHI_TEMPORARY;
  uint64_t _2307;
  uint64_t _2308;
  uint64_t _2309;
  uint64_t _2310;
  uint64_t _2311;
  uint64_t _2312;
  uint64_t _2313;
  void* _2314;
  uint64_t _2315;

  _1973 = ((&((uint8_t*)_1962)[((int64_t)32)]));
  _1974 = *(uint64_t*)_1973;
  _1975 = ((&((uint8_t*)_1962)[((int64_t)40)]));
  if (((_1974 & INT64_C(-4294967296)) == UINT64_C(4323455642275676160))) {
    goto _2316;
  } else {
    goto _2317;
  }

_2316:
  _1976 = *(void**)_1962;
  _1977 = ((&((uint8_t*)_1976)[((int64_t)16)]));
  _1978 = *(uint64_t*)_1977;
  _1979 = ((&((uint8_t*)_1976)[((int64_t)8)]));
  _1980 = *(uint64_t*)_1979;
  if ((((int64_t)_1980) > ((int64_t)_1978))) {
    goto _2318;
  } else {
    _1997__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2319;
  }

_2318:
  _1981 = *(void**)_1976;
  _1982 = *(uint8_t*)(((&((uint8_t*)_1981)[((int64_t)_1978)])));
  *(uint64_t*)_1977 = (llvm_add_u64(_1978, 1));
  _1983 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_1982)), 0);
  _1984 = llvm_sub_u8(32, (llvm_shl_u8(_1983, 3)));
  _1985 = (((uint32_t)(uint8_t)_1982)) << 24;
  if ((((uint8_t)_1984) > ((uint8_t)((uint8_t)16)))) {
    _1997__PHI_TEMPORARY = _1985;   /* for PHI node */
    goto _2319;
  } else {
    _1986__PHI_TEMPORARY = 16;   /* for PHI node */
    _1987__PHI_TEMPORARY = _1985;   /* for PHI node */
    goto _2320;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2320:
  _1986 = _1986__PHI_TEMPORARY;
  _1987 = _1987__PHI_TEMPORARY;
  if (((((int64_t)_1986) < ((int64_t)UINT64_C(0))) | (((uint64_t)_1986) < ((uint64_t)(((uint64_t)(uint8_t)_1984)))))) {
    _1997__PHI_TEMPORARY = _1987;   /* for PHI node */
    goto _2319;
  } else {
    goto _2321;
  }

_2321:
  _1988 = *(uint64_t*)_1977;
  _1989 = *(uint64_t*)_1979;
  if ((((int64_t)_1989) > ((int64_t)_1988))) {
    goto _2322;
  } else {
    _1997__PHI_TEMPORARY = _1987;   /* for PHI node */
    goto _2319;
  }

_2322:
  _1990 = *(void**)_1976;
  _1991 = *(uint8_t*)(((&((uint8_t*)_1990)[((int64_t)_1988)])));
  if ((((int8_t)_1991) > ((int8_t)((uint8_t)-65)))) {
    _1997__PHI_TEMPORARY = _1987;   /* for PHI node */
    goto _2319;
  } else {
    goto _2323;
  }

_2323:
  _1992 = llvm_select_u32((((int64_t)_1988) < ((int64_t)_1989)), (((uint32_t)(uint8_t)_1991)), 0);
  _1993 = *(uint64_t*)_1977;
  *(uint64_t*)_1977 = (llvm_add_u64(_1993, 1));
  _1994 = llvm_neg_u64(_1986);
  _1995 = _1987 | (llvm_select_u32((((int64_t)_1986) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_1994) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_1992, (((uint32_t)_1994)))))), (llvm_select_u32((((uint64_t)_1986) > ((uint64_t)UINT64_C(31))), 0, (_1992 << (((uint32_t)_1986)))))));
  _1996 = llvm_add_u64(_1986, -8);
  _1986__PHI_TEMPORARY = _1996;   /* for PHI node */
  _1987__PHI_TEMPORARY = _1995;   /* for PHI node */
  goto _2320;

  } while (1); /* end of syntactic loop '' */
_2319:
  _1997 = _1997__PHI_TEMPORARY;
  _1998 = *(uint64_t*)_1973;
  _1999 = *(uint64_t*)_1975;
  _2000 = jsyn_cbe_fshl_i64(_1999, _1998, 32);
  _2001 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_1997)), _1999, 32);
  *(uint64_t*)_1973 = _2000;
  *(uint64_t*)_1975 = _2001;
  _2002 = ((&((uint8_t*)_1962)[((int64_t)56)]));
  _2003 = *(uint64_t*)_2002;
  _2004 = ((&((uint8_t*)_1962)[((int64_t)64)]));
  _2005 = *(uint64_t*)_2004;
  _2006 = ((&((uint8_t*)_1962)[((int64_t)72)]));
  _2007 = *(uint64_t*)_2006;
  _2008 = *(void**)_1962;
  _2009 = *(uint64_t*)(((&((uint8_t*)_2008)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1962)[((int64_t)48)]))) = _2003;
  *(uint64_t*)_2002 = _2005;
  *(uint64_t*)_2004 = _2007;
  *(uint64_t*)_2006 = _2009;
  _2010 = *(uint64_t*)_1973;
  if (((_2010 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2324;
  } else {
    goto _2325;
  }

_2324:
  _2011 = *(void**)_1962;
  _2012 = ((&((uint8_t*)_2011)[((int64_t)16)]));
  _2013 = *(uint64_t*)_2012;
  _2014 = ((&((uint8_t*)_2011)[((int64_t)8)]));
  _2015 = *(uint64_t*)_2014;
  if ((((int64_t)_2015) > ((int64_t)_2013))) {
    goto _2326;
  } else {
    _2032__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2327;
  }

_2326:
  _2016 = *(void**)_2011;
  _2017 = *(uint8_t*)(((&((uint8_t*)_2016)[((int64_t)_2013)])));
  *(uint64_t*)_2012 = (llvm_add_u64(_2013, 1));
  _2018 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2017)), 0);
  _2019 = llvm_sub_u8(32, (llvm_shl_u8(_2018, 3)));
  _2020 = (((uint32_t)(uint8_t)_2017)) << 24;
  if ((((uint8_t)_2019) > ((uint8_t)((uint8_t)16)))) {
    _2032__PHI_TEMPORARY = _2020;   /* for PHI node */
    goto _2327;
  } else {
    _2021__PHI_TEMPORARY = 16;   /* for PHI node */
    _2022__PHI_TEMPORARY = _2020;   /* for PHI node */
    goto _2328;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2328:
  _2021 = _2021__PHI_TEMPORARY;
  _2022 = _2022__PHI_TEMPORARY;
  if (((((int64_t)_2021) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2021) < ((uint64_t)(((uint64_t)(uint8_t)_2019)))))) {
    _2032__PHI_TEMPORARY = _2022;   /* for PHI node */
    goto _2327;
  } else {
    goto _2329;
  }

_2329:
  _2023 = *(uint64_t*)_2012;
  _2024 = *(uint64_t*)_2014;
  if ((((int64_t)_2024) > ((int64_t)_2023))) {
    goto _2330;
  } else {
    _2032__PHI_TEMPORARY = _2022;   /* for PHI node */
    goto _2327;
  }

_2330:
  _2025 = *(void**)_2011;
  _2026 = *(uint8_t*)(((&((uint8_t*)_2025)[((int64_t)_2023)])));
  if ((((int8_t)_2026) > ((int8_t)((uint8_t)-65)))) {
    _2032__PHI_TEMPORARY = _2022;   /* for PHI node */
    goto _2327;
  } else {
    goto _2331;
  }

_2331:
  _2027 = llvm_select_u32((((int64_t)_2023) < ((int64_t)_2024)), (((uint32_t)(uint8_t)_2026)), 0);
  _2028 = *(uint64_t*)_2012;
  *(uint64_t*)_2012 = (llvm_add_u64(_2028, 1));
  _2029 = llvm_neg_u64(_2021);
  _2030 = _2022 | (llvm_select_u32((((int64_t)_2021) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2029) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2027, (((uint32_t)_2029)))))), (llvm_select_u32((((uint64_t)_2021) > ((uint64_t)UINT64_C(31))), 0, (_2027 << (((uint32_t)_2021)))))));
  _2031 = llvm_add_u64(_2021, -8);
  _2021__PHI_TEMPORARY = _2031;   /* for PHI node */
  _2022__PHI_TEMPORARY = _2030;   /* for PHI node */
  goto _2328;

  } while (1); /* end of syntactic loop '' */
_2327:
  _2032 = _2032__PHI_TEMPORARY;
  _2033 = *(uint64_t*)_1973;
  _2034 = *(uint64_t*)_1975;
  _2035 = jsyn_cbe_fshl_i64(_2034, _2033, 32);
  _2036 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2032)), _2034, 32);
  *(uint64_t*)_1973 = _2035;
  *(uint64_t*)_1975 = _2036;
  _2037 = ((&((uint8_t*)_1962)[((int64_t)56)]));
  _2038 = *(uint64_t*)_2037;
  _2039 = ((&((uint8_t*)_1962)[((int64_t)64)]));
  _2040 = *(uint64_t*)_2039;
  _2041 = ((&((uint8_t*)_1962)[((int64_t)72)]));
  _2042 = *(uint64_t*)_2041;
  _2043 = *(void**)_1962;
  _2044 = *(uint64_t*)(((&((uint8_t*)_2043)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1962)[((int64_t)48)]))) = _2038;
  *(uint64_t*)_2037 = _2040;
  *(uint64_t*)_2039 = _2042;
  *(uint64_t*)_2041 = _2044;
  julia_emit_4484((&_1963), _1961, _1962, 71, 1);
  _2045__PHI_TEMPORARY = (&_1963);   /* for PHI node */
  goto _2332;

_2332:
  _2045 = _2045__PHI_TEMPORARY;
  _2046 = memcpy(_1960, _2045, 32);
  return;
_2325:
  julia_emit_4484((&_1964), _1961, _1962, 671, 1);
  _2045__PHI_TEMPORARY = (&_1964);   /* for PHI node */
  goto _2332;

_2317:
  _2047 = *(uint64_t*)_1973;
  if (((_2047 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2333;
  } else {
    goto _2334;
  }

_2333:
  _2048 = *(void**)_1962;
  _2049 = ((&((uint8_t*)_2048)[((int64_t)16)]));
  _2050 = *(uint64_t*)_2049;
  _2051 = ((&((uint8_t*)_2048)[((int64_t)8)]));
  _2052 = *(uint64_t*)_2051;
  if ((((int64_t)_2052) > ((int64_t)_2050))) {
    goto _2335;
  } else {
    _2069__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2336;
  }

_2335:
  _2053 = *(void**)_2048;
  _2054 = *(uint8_t*)(((&((uint8_t*)_2053)[((int64_t)_2050)])));
  *(uint64_t*)_2049 = (llvm_add_u64(_2050, 1));
  _2055 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2054)), 0);
  _2056 = llvm_sub_u8(32, (llvm_shl_u8(_2055, 3)));
  _2057 = (((uint32_t)(uint8_t)_2054)) << 24;
  if ((((uint8_t)_2056) > ((uint8_t)((uint8_t)16)))) {
    _2069__PHI_TEMPORARY = _2057;   /* for PHI node */
    goto _2336;
  } else {
    _2058__PHI_TEMPORARY = 16;   /* for PHI node */
    _2059__PHI_TEMPORARY = _2057;   /* for PHI node */
    goto _2337;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2337:
  _2058 = _2058__PHI_TEMPORARY;
  _2059 = _2059__PHI_TEMPORARY;
  if (((((int64_t)_2058) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2058) < ((uint64_t)(((uint64_t)(uint8_t)_2056)))))) {
    _2069__PHI_TEMPORARY = _2059;   /* for PHI node */
    goto _2336;
  } else {
    goto _2338;
  }

_2338:
  _2060 = *(uint64_t*)_2049;
  _2061 = *(uint64_t*)_2051;
  if ((((int64_t)_2061) > ((int64_t)_2060))) {
    goto _2339;
  } else {
    _2069__PHI_TEMPORARY = _2059;   /* for PHI node */
    goto _2336;
  }

_2339:
  _2062 = *(void**)_2048;
  _2063 = *(uint8_t*)(((&((uint8_t*)_2062)[((int64_t)_2060)])));
  if ((((int8_t)_2063) > ((int8_t)((uint8_t)-65)))) {
    _2069__PHI_TEMPORARY = _2059;   /* for PHI node */
    goto _2336;
  } else {
    goto _2340;
  }

_2340:
  _2064 = llvm_select_u32((((int64_t)_2060) < ((int64_t)_2061)), (((uint32_t)(uint8_t)_2063)), 0);
  _2065 = *(uint64_t*)_2049;
  *(uint64_t*)_2049 = (llvm_add_u64(_2065, 1));
  _2066 = llvm_neg_u64(_2058);
  _2067 = _2059 | (llvm_select_u32((((int64_t)_2058) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2066) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2064, (((uint32_t)_2066)))))), (llvm_select_u32((((uint64_t)_2058) > ((uint64_t)UINT64_C(31))), 0, (_2064 << (((uint32_t)_2058)))))));
  _2068 = llvm_add_u64(_2058, -8);
  _2058__PHI_TEMPORARY = _2068;   /* for PHI node */
  _2059__PHI_TEMPORARY = _2067;   /* for PHI node */
  goto _2337;

  } while (1); /* end of syntactic loop '' */
_2336:
  _2069 = _2069__PHI_TEMPORARY;
  _2070 = *(uint64_t*)_1973;
  _2071 = *(uint64_t*)_1975;
  _2072 = jsyn_cbe_fshl_i64(_2071, _2070, 32);
  _2073 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2069)), _2071, 32);
  *(uint64_t*)_1973 = _2072;
  *(uint64_t*)_1975 = _2073;
  _2074 = ((&((uint8_t*)_1962)[((int64_t)56)]));
  _2075 = *(uint64_t*)_2074;
  _2076 = ((&((uint8_t*)_1962)[((int64_t)64)]));
  _2077 = *(uint64_t*)_2076;
  _2078 = ((&((uint8_t*)_1962)[((int64_t)72)]));
  _2079 = *(uint64_t*)_2078;
  _2080 = *(void**)_1962;
  _2081 = *(uint64_t*)(((&((uint8_t*)_2080)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1962)[((int64_t)48)]))) = _2075;
  *(uint64_t*)_2074 = _2077;
  *(uint64_t*)_2076 = _2079;
  *(uint64_t*)_2078 = _2081;
  julia_emit_4484((&_1965), _1961, _1962, 242, 1);
  _2045__PHI_TEMPORARY = (&_1965);   /* for PHI node */
  goto _2332;

_2334:
  _2082 = *(uint64_t*)_1973;
  if (((_2082 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _2341;
  } else {
    goto _2342;
  }

_2341:
  _2083 = *(void**)_1962;
  _2084 = ((&((uint8_t*)_2083)[((int64_t)16)]));
  _2085 = *(uint64_t*)_2084;
  _2086 = ((&((uint8_t*)_2083)[((int64_t)8)]));
  _2087 = *(uint64_t*)_2086;
  if ((((int64_t)_2087) > ((int64_t)_2085))) {
    goto _2343;
  } else {
    _2104__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2344;
  }

_2343:
  _2088 = *(void**)_2083;
  _2089 = *(uint8_t*)(((&((uint8_t*)_2088)[((int64_t)_2085)])));
  *(uint64_t*)_2084 = (llvm_add_u64(_2085, 1));
  _2090 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2089)), 0);
  _2091 = llvm_sub_u8(32, (llvm_shl_u8(_2090, 3)));
  _2092 = (((uint32_t)(uint8_t)_2089)) << 24;
  if ((((uint8_t)_2091) > ((uint8_t)((uint8_t)16)))) {
    _2104__PHI_TEMPORARY = _2092;   /* for PHI node */
    goto _2344;
  } else {
    _2093__PHI_TEMPORARY = 16;   /* for PHI node */
    _2094__PHI_TEMPORARY = _2092;   /* for PHI node */
    goto _2345;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2345:
  _2093 = _2093__PHI_TEMPORARY;
  _2094 = _2094__PHI_TEMPORARY;
  if (((((int64_t)_2093) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2093) < ((uint64_t)(((uint64_t)(uint8_t)_2091)))))) {
    _2104__PHI_TEMPORARY = _2094;   /* for PHI node */
    goto _2344;
  } else {
    goto _2346;
  }

_2346:
  _2095 = *(uint64_t*)_2084;
  _2096 = *(uint64_t*)_2086;
  if ((((int64_t)_2096) > ((int64_t)_2095))) {
    goto _2347;
  } else {
    _2104__PHI_TEMPORARY = _2094;   /* for PHI node */
    goto _2344;
  }

_2347:
  _2097 = *(void**)_2083;
  _2098 = *(uint8_t*)(((&((uint8_t*)_2097)[((int64_t)_2095)])));
  if ((((int8_t)_2098) > ((int8_t)((uint8_t)-65)))) {
    _2104__PHI_TEMPORARY = _2094;   /* for PHI node */
    goto _2344;
  } else {
    goto _2348;
  }

_2348:
  _2099 = llvm_select_u32((((int64_t)_2095) < ((int64_t)_2096)), (((uint32_t)(uint8_t)_2098)), 0);
  _2100 = *(uint64_t*)_2084;
  *(uint64_t*)_2084 = (llvm_add_u64(_2100, 1));
  _2101 = llvm_neg_u64(_2093);
  _2102 = _2094 | (llvm_select_u32((((int64_t)_2093) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2101) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2099, (((uint32_t)_2101)))))), (llvm_select_u32((((uint64_t)_2093) > ((uint64_t)UINT64_C(31))), 0, (_2099 << (((uint32_t)_2093)))))));
  _2103 = llvm_add_u64(_2093, -8);
  _2093__PHI_TEMPORARY = _2103;   /* for PHI node */
  _2094__PHI_TEMPORARY = _2102;   /* for PHI node */
  goto _2345;

  } while (1); /* end of syntactic loop '' */
_2344:
  _2104 = _2104__PHI_TEMPORARY;
  _2105 = *(uint64_t*)_1973;
  _2106 = *(uint64_t*)_1975;
  _2107 = jsyn_cbe_fshl_i64(_2106, _2105, 32);
  _2108 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2104)), _2106, 32);
  *(uint64_t*)_1973 = _2107;
  *(uint64_t*)_1975 = _2108;
  _2109 = ((&((uint8_t*)_1962)[((int64_t)56)]));
  _2110 = *(uint64_t*)_2109;
  _2111 = ((&((uint8_t*)_1962)[((int64_t)64)]));
  _2112 = *(uint64_t*)_2111;
  _2113 = ((&((uint8_t*)_1962)[((int64_t)72)]));
  _2114 = *(uint64_t*)_2113;
  _2115 = *(void**)_1962;
  _2116 = *(uint64_t*)(((&((uint8_t*)_2115)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1962)[((int64_t)48)]))) = _2110;
  *(uint64_t*)_2109 = _2112;
  *(uint64_t*)_2111 = _2114;
  *(uint64_t*)_2113 = _2116;
  julia_emit_4484((&_1966), _1961, _1962, 236, 1);
  _2045__PHI_TEMPORARY = (&_1966);   /* for PHI node */
  goto _2332;

_2342:
  _2117 = *(uint64_t*)_1973;
  if (((_2117 & INT64_C(-4294967296)) == UINT64_C(8935141660703064064))) {
    goto _2349;
  } else {
    goto _2350;
  }

_2349:
  _2118 = *(void**)_1962;
  _2119 = ((&((uint8_t*)_2118)[((int64_t)16)]));
  _2120 = *(uint64_t*)_2119;
  _2121 = ((&((uint8_t*)_2118)[((int64_t)8)]));
  _2122 = *(uint64_t*)_2121;
  if ((((int64_t)_2122) > ((int64_t)_2120))) {
    goto _2351;
  } else {
    _2139__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2352;
  }

_2351:
  _2123 = *(void**)_2118;
  _2124 = *(uint8_t*)(((&((uint8_t*)_2123)[((int64_t)_2120)])));
  *(uint64_t*)_2119 = (llvm_add_u64(_2120, 1));
  _2125 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2124)), 0);
  _2126 = llvm_sub_u8(32, (llvm_shl_u8(_2125, 3)));
  _2127 = (((uint32_t)(uint8_t)_2124)) << 24;
  if ((((uint8_t)_2126) > ((uint8_t)((uint8_t)16)))) {
    _2139__PHI_TEMPORARY = _2127;   /* for PHI node */
    goto _2352;
  } else {
    _2128__PHI_TEMPORARY = 16;   /* for PHI node */
    _2129__PHI_TEMPORARY = _2127;   /* for PHI node */
    goto _2353;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2353:
  _2128 = _2128__PHI_TEMPORARY;
  _2129 = _2129__PHI_TEMPORARY;
  if (((((int64_t)_2128) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2128) < ((uint64_t)(((uint64_t)(uint8_t)_2126)))))) {
    _2139__PHI_TEMPORARY = _2129;   /* for PHI node */
    goto _2352;
  } else {
    goto _2354;
  }

_2354:
  _2130 = *(uint64_t*)_2119;
  _2131 = *(uint64_t*)_2121;
  if ((((int64_t)_2131) > ((int64_t)_2130))) {
    goto _2355;
  } else {
    _2139__PHI_TEMPORARY = _2129;   /* for PHI node */
    goto _2352;
  }

_2355:
  _2132 = *(void**)_2118;
  _2133 = *(uint8_t*)(((&((uint8_t*)_2132)[((int64_t)_2130)])));
  if ((((int8_t)_2133) > ((int8_t)((uint8_t)-65)))) {
    _2139__PHI_TEMPORARY = _2129;   /* for PHI node */
    goto _2352;
  } else {
    goto _2356;
  }

_2356:
  _2134 = llvm_select_u32((((int64_t)_2130) < ((int64_t)_2131)), (((uint32_t)(uint8_t)_2133)), 0);
  _2135 = *(uint64_t*)_2119;
  *(uint64_t*)_2119 = (llvm_add_u64(_2135, 1));
  _2136 = llvm_neg_u64(_2128);
  _2137 = _2129 | (llvm_select_u32((((int64_t)_2128) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2136) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2134, (((uint32_t)_2136)))))), (llvm_select_u32((((uint64_t)_2128) > ((uint64_t)UINT64_C(31))), 0, (_2134 << (((uint32_t)_2128)))))));
  _2138 = llvm_add_u64(_2128, -8);
  _2128__PHI_TEMPORARY = _2138;   /* for PHI node */
  _2129__PHI_TEMPORARY = _2137;   /* for PHI node */
  goto _2353;

  } while (1); /* end of syntactic loop '' */
_2352:
  _2139 = _2139__PHI_TEMPORARY;
  _2140 = *(uint64_t*)_1973;
  _2141 = *(uint64_t*)_1975;
  _2142 = jsyn_cbe_fshl_i64(_2141, _2140, 32);
  _2143 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2139)), _2141, 32);
  *(uint64_t*)_1973 = _2142;
  *(uint64_t*)_1975 = _2143;
  _2144 = ((&((uint8_t*)_1962)[((int64_t)56)]));
  _2145 = *(uint64_t*)_2144;
  _2146 = ((&((uint8_t*)_1962)[((int64_t)64)]));
  _2147 = *(uint64_t*)_2146;
  _2148 = ((&((uint8_t*)_1962)[((int64_t)72)]));
  _2149 = *(uint64_t*)_2148;
  _2150 = *(void**)_1962;
  _2151 = *(uint64_t*)(((&((uint8_t*)_2150)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_1962)[((int64_t)48)]))) = _2145;
  *(uint64_t*)_2144 = _2147;
  *(uint64_t*)_2146 = _2149;
  *(uint64_t*)_2148 = _2151;
  julia_emit_4484((&_1967), _1961, _1962, 524, 1);
  _2045__PHI_TEMPORARY = (&_1967);   /* for PHI node */
  goto _2332;

_2350:
  _2152 = *(uint64_t*)_1973;
  _2153 = *(uint64_t*)_1975;
  if ((llvm_select_bool(((_2152 & INT64_C(-4294967296)) != UINT64_C(3242591731706757120)), 1, ((_2153 & INT64_C(4294967295)) != UINT64_C(754974720))))) {
    goto _2357;
  } else {
    goto _2358;
  }

_2358:
  _2154 = *(void**)_1962;
  _2155 = ((&((uint8_t*)_2154)[((int64_t)16)]));
  _2156 = *(uint64_t*)_2155;
  _2157 = ((&((uint8_t*)_2154)[((int64_t)8)]));
  _2158 = *(uint64_t*)_2157;
  if ((((int64_t)_2158) > ((int64_t)_2156))) {
    goto _2359;
  } else {
    _2175__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2360;
  }

_2359:
  _2159 = *(void**)_2154;
  _2160 = *(uint8_t*)(((&((uint8_t*)_2159)[((int64_t)_2156)])));
  *(uint64_t*)_2155 = (llvm_add_u64(_2156, 1));
  _2161 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2160)), 0);
  _2162 = llvm_sub_u8(32, (llvm_shl_u8(_2161, 3)));
  _2163 = (((uint32_t)(uint8_t)_2160)) << 24;
  if ((((uint8_t)_2162) > ((uint8_t)((uint8_t)16)))) {
    _2175__PHI_TEMPORARY = _2163;   /* for PHI node */
    goto _2360;
  } else {
    _2164__PHI_TEMPORARY = 16;   /* for PHI node */
    _2165__PHI_TEMPORARY = _2163;   /* for PHI node */
    goto _2361;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2361:
  _2164 = _2164__PHI_TEMPORARY;
  _2165 = _2165__PHI_TEMPORARY;
  if (((((int64_t)_2164) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2164) < ((uint64_t)(((uint64_t)(uint8_t)_2162)))))) {
    _2175__PHI_TEMPORARY = _2165;   /* for PHI node */
    goto _2360;
  } else {
    goto _2362;
  }

_2362:
  _2166 = *(uint64_t*)_2155;
  _2167 = *(uint64_t*)_2157;
  if ((((int64_t)_2167) > ((int64_t)_2166))) {
    goto _2363;
  } else {
    _2175__PHI_TEMPORARY = _2165;   /* for PHI node */
    goto _2360;
  }

_2363:
  _2168 = *(void**)_2154;
  _2169 = *(uint8_t*)(((&((uint8_t*)_2168)[((int64_t)_2166)])));
  if ((((int8_t)_2169) > ((int8_t)((uint8_t)-65)))) {
    _2175__PHI_TEMPORARY = _2165;   /* for PHI node */
    goto _2360;
  } else {
    goto _2364;
  }

_2364:
  _2170 = llvm_select_u32((((int64_t)_2166) < ((int64_t)_2167)), (((uint32_t)(uint8_t)_2169)), 0);
  _2171 = *(uint64_t*)_2155;
  *(uint64_t*)_2155 = (llvm_add_u64(_2171, 1));
  _2172 = llvm_neg_u64(_2164);
  _2173 = _2165 | (llvm_select_u32((((int64_t)_2164) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2172) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2170, (((uint32_t)_2172)))))), (llvm_select_u32((((uint64_t)_2164) > ((uint64_t)UINT64_C(31))), 0, (_2170 << (((uint32_t)_2164)))))));
  _2174 = llvm_add_u64(_2164, -8);
  _2164__PHI_TEMPORARY = _2174;   /* for PHI node */
  _2165__PHI_TEMPORARY = _2173;   /* for PHI node */
  goto _2361;

  } while (1); /* end of syntactic loop '' */
_2360:
  _2175 = _2175__PHI_TEMPORARY;
  _2176 = *(uint64_t*)_1973;
  _2177 = *(uint64_t*)_1975;
  _2178 = jsyn_cbe_fshl_i64(_2177, _2176, 32);
  _2179 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2175)), _2177, 32);
  *(uint64_t*)_1973 = _2178;
  *(uint64_t*)_1975 = _2179;
  _2180 = ((&((uint8_t*)_1962)[((int64_t)48)]));
  _2181 = ((&((uint8_t*)_1962)[((int64_t)56)]));
  _2182 = *(uint64_t*)_2181;
  _2183 = ((&((uint8_t*)_1962)[((int64_t)64)]));
  _2184 = *(uint64_t*)_2183;
  _2185 = ((&((uint8_t*)_1962)[((int64_t)72)]));
  _2186 = *(uint64_t*)_2185;
  _2187 = *(void**)_1962;
  _2188 = *(uint64_t*)(((&((uint8_t*)_2187)[((int64_t)16)])));
  *(uint64_t*)_2180 = _2182;
  *(uint64_t*)_2181 = _2184;
  *(uint64_t*)_2183 = _2186;
  *(uint64_t*)_2185 = _2188;
  _2189 = *(void**)_1962;
  _2190 = ((&((uint8_t*)_2189)[((int64_t)16)]));
  _2191 = *(uint64_t*)_2190;
  _2192 = ((&((uint8_t*)_2189)[((int64_t)8)]));
  _2193 = *(uint64_t*)_2192;
  if ((((int64_t)_2193) > ((int64_t)_2191))) {
    goto _2365;
  } else {
    _2210__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2366;
  }

_2365:
  _2194 = *(void**)_2189;
  _2195 = *(uint8_t*)(((&((uint8_t*)_2194)[((int64_t)_2191)])));
  *(uint64_t*)_2190 = (llvm_add_u64(_2191, 1));
  _2196 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2195)), 0);
  _2197 = llvm_sub_u8(32, (llvm_shl_u8(_2196, 3)));
  _2198 = (((uint32_t)(uint8_t)_2195)) << 24;
  if ((((uint8_t)_2197) > ((uint8_t)((uint8_t)16)))) {
    _2210__PHI_TEMPORARY = _2198;   /* for PHI node */
    goto _2366;
  } else {
    _2199__PHI_TEMPORARY = 16;   /* for PHI node */
    _2200__PHI_TEMPORARY = _2198;   /* for PHI node */
    goto _2367;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2367:
  _2199 = _2199__PHI_TEMPORARY;
  _2200 = _2200__PHI_TEMPORARY;
  if (((((int64_t)_2199) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2199) < ((uint64_t)(((uint64_t)(uint8_t)_2197)))))) {
    _2210__PHI_TEMPORARY = _2200;   /* for PHI node */
    goto _2366;
  } else {
    goto _2368;
  }

_2368:
  _2201 = *(uint64_t*)_2190;
  _2202 = *(uint64_t*)_2192;
  if ((((int64_t)_2202) > ((int64_t)_2201))) {
    goto _2369;
  } else {
    _2210__PHI_TEMPORARY = _2200;   /* for PHI node */
    goto _2366;
  }

_2369:
  _2203 = *(void**)_2189;
  _2204 = *(uint8_t*)(((&((uint8_t*)_2203)[((int64_t)_2201)])));
  if ((((int8_t)_2204) > ((int8_t)((uint8_t)-65)))) {
    _2210__PHI_TEMPORARY = _2200;   /* for PHI node */
    goto _2366;
  } else {
    goto _2370;
  }

_2370:
  _2205 = llvm_select_u32((((int64_t)_2201) < ((int64_t)_2202)), (((uint32_t)(uint8_t)_2204)), 0);
  _2206 = *(uint64_t*)_2190;
  *(uint64_t*)_2190 = (llvm_add_u64(_2206, 1));
  _2207 = llvm_neg_u64(_2199);
  _2208 = _2200 | (llvm_select_u32((((int64_t)_2199) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2207) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2205, (((uint32_t)_2207)))))), (llvm_select_u32((((uint64_t)_2199) > ((uint64_t)UINT64_C(31))), 0, (_2205 << (((uint32_t)_2199)))))));
  _2209 = llvm_add_u64(_2199, -8);
  _2199__PHI_TEMPORARY = _2209;   /* for PHI node */
  _2200__PHI_TEMPORARY = _2208;   /* for PHI node */
  goto _2367;

  } while (1); /* end of syntactic loop '' */
_2366:
  _2210 = _2210__PHI_TEMPORARY;
  _2211 = *(uint64_t*)_1973;
  _2212 = *(uint64_t*)_1975;
  _2213 = jsyn_cbe_fshl_i64(_2212, _2211, 32);
  _2214 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2210)), _2212, 32);
  *(uint64_t*)_1973 = _2213;
  *(uint64_t*)_1975 = _2214;
  _2215 = *(uint64_t*)_2181;
  _2216 = *(uint64_t*)_2183;
  _2217 = *(uint64_t*)_2185;
  _2218 = *(void**)_1962;
  _2219 = *(uint64_t*)(((&((uint8_t*)_2218)[((int64_t)16)])));
  *(uint64_t*)_2180 = _2215;
  *(uint64_t*)_2181 = _2216;
  *(uint64_t*)_2183 = _2217;
  *(uint64_t*)_2185 = _2219;
  _2220 = *(uint64_t*)_1973;
  if (((_2220 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _2371;
  } else {
    goto _2372;
  }

_2371:
  _2221 = *(void**)_1962;
  _2222 = ((&((uint8_t*)_2221)[((int64_t)16)]));
  _2223 = *(uint64_t*)_2222;
  _2224 = ((&((uint8_t*)_2221)[((int64_t)8)]));
  _2225 = *(uint64_t*)_2224;
  if ((((int64_t)_2225) > ((int64_t)_2223))) {
    goto _2373;
  } else {
    _2242__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2374;
  }

_2373:
  _2226 = *(void**)_2221;
  _2227 = *(uint8_t*)(((&((uint8_t*)_2226)[((int64_t)_2223)])));
  *(uint64_t*)_2222 = (llvm_add_u64(_2223, 1));
  _2228 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2227)), 0);
  _2229 = llvm_sub_u8(32, (llvm_shl_u8(_2228, 3)));
  _2230 = (((uint32_t)(uint8_t)_2227)) << 24;
  if ((((uint8_t)_2229) > ((uint8_t)((uint8_t)16)))) {
    _2242__PHI_TEMPORARY = _2230;   /* for PHI node */
    goto _2374;
  } else {
    _2231__PHI_TEMPORARY = 16;   /* for PHI node */
    _2232__PHI_TEMPORARY = _2230;   /* for PHI node */
    goto _2375;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2375:
  _2231 = _2231__PHI_TEMPORARY;
  _2232 = _2232__PHI_TEMPORARY;
  if (((((int64_t)_2231) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2231) < ((uint64_t)(((uint64_t)(uint8_t)_2229)))))) {
    _2242__PHI_TEMPORARY = _2232;   /* for PHI node */
    goto _2374;
  } else {
    goto _2376;
  }

_2376:
  _2233 = *(uint64_t*)_2222;
  _2234 = *(uint64_t*)_2224;
  if ((((int64_t)_2234) > ((int64_t)_2233))) {
    goto _2377;
  } else {
    _2242__PHI_TEMPORARY = _2232;   /* for PHI node */
    goto _2374;
  }

_2377:
  _2235 = *(void**)_2221;
  _2236 = *(uint8_t*)(((&((uint8_t*)_2235)[((int64_t)_2233)])));
  if ((((int8_t)_2236) > ((int8_t)((uint8_t)-65)))) {
    _2242__PHI_TEMPORARY = _2232;   /* for PHI node */
    goto _2374;
  } else {
    goto _2378;
  }

_2378:
  _2237 = llvm_select_u32((((int64_t)_2233) < ((int64_t)_2234)), (((uint32_t)(uint8_t)_2236)), 0);
  _2238 = *(uint64_t*)_2222;
  *(uint64_t*)_2222 = (llvm_add_u64(_2238, 1));
  _2239 = llvm_neg_u64(_2231);
  _2240 = _2232 | (llvm_select_u32((((int64_t)_2231) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2239) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2237, (((uint32_t)_2239)))))), (llvm_select_u32((((uint64_t)_2231) > ((uint64_t)UINT64_C(31))), 0, (_2237 << (((uint32_t)_2231)))))));
  _2241 = llvm_add_u64(_2231, -8);
  _2231__PHI_TEMPORARY = _2241;   /* for PHI node */
  _2232__PHI_TEMPORARY = _2240;   /* for PHI node */
  goto _2375;

  } while (1); /* end of syntactic loop '' */
_2374:
  _2242 = _2242__PHI_TEMPORARY;
  _2243 = *(uint64_t*)_1973;
  _2244 = *(uint64_t*)_1975;
  _2245 = jsyn_cbe_fshl_i64(_2244, _2243, 32);
  _2246 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2242)), _2244, 32);
  *(uint64_t*)_1973 = _2245;
  *(uint64_t*)_1975 = _2246;
  _2247 = *(uint64_t*)_2181;
  _2248 = *(uint64_t*)_2183;
  _2249 = *(uint64_t*)_2185;
  _2250 = *(void**)_1962;
  _2251 = *(uint64_t*)(((&((uint8_t*)_2250)[((int64_t)16)])));
  *(uint64_t*)_2180 = _2247;
  *(uint64_t*)_2181 = _2248;
  *(uint64_t*)_2183 = _2249;
  *(uint64_t*)_2185 = _2251;
  julia_emit_4484((&_1968), _1961, _1962, 66, 1);
  _2045__PHI_TEMPORARY = (&_1968);   /* for PHI node */
  goto _2332;

_2372:
  _2252 = *(uint64_t*)_1973;
  if (((_2252 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _2379;
  } else {
    goto _2380;
  }

_2379:
  _2253 = *(void**)_1962;
  _2254 = ((&((uint8_t*)_2253)[((int64_t)16)]));
  _2255 = *(uint64_t*)_2254;
  _2256 = ((&((uint8_t*)_2253)[((int64_t)8)]));
  _2257 = *(uint64_t*)_2256;
  if ((((int64_t)_2257) > ((int64_t)_2255))) {
    goto _2381;
  } else {
    _2274__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2382;
  }

_2381:
  _2258 = *(void**)_2253;
  _2259 = *(uint8_t*)(((&((uint8_t*)_2258)[((int64_t)_2255)])));
  *(uint64_t*)_2254 = (llvm_add_u64(_2255, 1));
  _2260 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2259)), 0);
  _2261 = llvm_sub_u8(32, (llvm_shl_u8(_2260, 3)));
  _2262 = (((uint32_t)(uint8_t)_2259)) << 24;
  if ((((uint8_t)_2261) > ((uint8_t)((uint8_t)16)))) {
    _2274__PHI_TEMPORARY = _2262;   /* for PHI node */
    goto _2382;
  } else {
    _2263__PHI_TEMPORARY = 16;   /* for PHI node */
    _2264__PHI_TEMPORARY = _2262;   /* for PHI node */
    goto _2383;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2383:
  _2263 = _2263__PHI_TEMPORARY;
  _2264 = _2264__PHI_TEMPORARY;
  if (((((int64_t)_2263) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2263) < ((uint64_t)(((uint64_t)(uint8_t)_2261)))))) {
    _2274__PHI_TEMPORARY = _2264;   /* for PHI node */
    goto _2382;
  } else {
    goto _2384;
  }

_2384:
  _2265 = *(uint64_t*)_2254;
  _2266 = *(uint64_t*)_2256;
  if ((((int64_t)_2266) > ((int64_t)_2265))) {
    goto _2385;
  } else {
    _2274__PHI_TEMPORARY = _2264;   /* for PHI node */
    goto _2382;
  }

_2385:
  _2267 = *(void**)_2253;
  _2268 = *(uint8_t*)(((&((uint8_t*)_2267)[((int64_t)_2265)])));
  if ((((int8_t)_2268) > ((int8_t)((uint8_t)-65)))) {
    _2274__PHI_TEMPORARY = _2264;   /* for PHI node */
    goto _2382;
  } else {
    goto _2386;
  }

_2386:
  _2269 = llvm_select_u32((((int64_t)_2265) < ((int64_t)_2266)), (((uint32_t)(uint8_t)_2268)), 0);
  _2270 = *(uint64_t*)_2254;
  *(uint64_t*)_2254 = (llvm_add_u64(_2270, 1));
  _2271 = llvm_neg_u64(_2263);
  _2272 = _2264 | (llvm_select_u32((((int64_t)_2263) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2271) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2269, (((uint32_t)_2271)))))), (llvm_select_u32((((uint64_t)_2263) > ((uint64_t)UINT64_C(31))), 0, (_2269 << (((uint32_t)_2263)))))));
  _2273 = llvm_add_u64(_2263, -8);
  _2263__PHI_TEMPORARY = _2273;   /* for PHI node */
  _2264__PHI_TEMPORARY = _2272;   /* for PHI node */
  goto _2383;

  } while (1); /* end of syntactic loop '' */
_2382:
  _2274 = _2274__PHI_TEMPORARY;
  _2275 = *(uint64_t*)_1973;
  _2276 = *(uint64_t*)_1975;
  _2277 = jsyn_cbe_fshl_i64(_2276, _2275, 32);
  _2278 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2274)), _2276, 32);
  *(uint64_t*)_1973 = _2277;
  *(uint64_t*)_1975 = _2278;
  _2279 = *(uint64_t*)_2181;
  _2280 = *(uint64_t*)_2183;
  _2281 = *(uint64_t*)_2185;
  _2282 = *(void**)_1962;
  _2283 = *(uint64_t*)(((&((uint8_t*)_2282)[((int64_t)16)])));
  *(uint64_t*)_2180 = _2279;
  *(uint64_t*)_2181 = _2280;
  *(uint64_t*)_2183 = _2281;
  *(uint64_t*)_2185 = _2283;
  julia_emit_4484((&_1969), _1961, _1962, 82, 1);
  _2045__PHI_TEMPORARY = (&_1969);   /* for PHI node */
  goto _2332;

_2380:
  _2284 = *(uint64_t*)_1973;
  if (((_2284 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _2387;
  } else {
    goto _2388;
  }

_2387:
  _2285 = *(void**)_1962;
  _2286 = ((&((uint8_t*)_2285)[((int64_t)16)]));
  _2287 = *(uint64_t*)_2286;
  _2288 = ((&((uint8_t*)_2285)[((int64_t)8)]));
  _2289 = *(uint64_t*)_2288;
  if ((((int64_t)_2289) > ((int64_t)_2287))) {
    goto _2389;
  } else {
    _2306__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2390;
  }

_2389:
  _2290 = *(void**)_2285;
  _2291 = *(uint8_t*)(((&((uint8_t*)_2290)[((int64_t)_2287)])));
  *(uint64_t*)_2286 = (llvm_add_u64(_2287, 1));
  _2292 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2291)), 0);
  _2293 = llvm_sub_u8(32, (llvm_shl_u8(_2292, 3)));
  _2294 = (((uint32_t)(uint8_t)_2291)) << 24;
  if ((((uint8_t)_2293) > ((uint8_t)((uint8_t)16)))) {
    _2306__PHI_TEMPORARY = _2294;   /* for PHI node */
    goto _2390;
  } else {
    _2295__PHI_TEMPORARY = 16;   /* for PHI node */
    _2296__PHI_TEMPORARY = _2294;   /* for PHI node */
    goto _2391;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2391:
  _2295 = _2295__PHI_TEMPORARY;
  _2296 = _2296__PHI_TEMPORARY;
  if (((((int64_t)_2295) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2295) < ((uint64_t)(((uint64_t)(uint8_t)_2293)))))) {
    _2306__PHI_TEMPORARY = _2296;   /* for PHI node */
    goto _2390;
  } else {
    goto _2392;
  }

_2392:
  _2297 = *(uint64_t*)_2286;
  _2298 = *(uint64_t*)_2288;
  if ((((int64_t)_2298) > ((int64_t)_2297))) {
    goto _2393;
  } else {
    _2306__PHI_TEMPORARY = _2296;   /* for PHI node */
    goto _2390;
  }

_2393:
  _2299 = *(void**)_2285;
  _2300 = *(uint8_t*)(((&((uint8_t*)_2299)[((int64_t)_2297)])));
  if ((((int8_t)_2300) > ((int8_t)((uint8_t)-65)))) {
    _2306__PHI_TEMPORARY = _2296;   /* for PHI node */
    goto _2390;
  } else {
    goto _2394;
  }

_2394:
  _2301 = llvm_select_u32((((int64_t)_2297) < ((int64_t)_2298)), (((uint32_t)(uint8_t)_2300)), 0);
  _2302 = *(uint64_t*)_2286;
  *(uint64_t*)_2286 = (llvm_add_u64(_2302, 1));
  _2303 = llvm_neg_u64(_2295);
  _2304 = _2296 | (llvm_select_u32((((int64_t)_2295) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2303) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2301, (((uint32_t)_2303)))))), (llvm_select_u32((((uint64_t)_2295) > ((uint64_t)UINT64_C(31))), 0, (_2301 << (((uint32_t)_2295)))))));
  _2305 = llvm_add_u64(_2295, -8);
  _2295__PHI_TEMPORARY = _2305;   /* for PHI node */
  _2296__PHI_TEMPORARY = _2304;   /* for PHI node */
  goto _2391;

  } while (1); /* end of syntactic loop '' */
_2390:
  _2306 = _2306__PHI_TEMPORARY;
  _2307 = *(uint64_t*)_1973;
  _2308 = *(uint64_t*)_1975;
  _2309 = jsyn_cbe_fshl_i64(_2308, _2307, 32);
  _2310 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2306)), _2308, 32);
  *(uint64_t*)_1973 = _2309;
  *(uint64_t*)_1975 = _2310;
  _2311 = *(uint64_t*)_2181;
  _2312 = *(uint64_t*)_2183;
  _2313 = *(uint64_t*)_2185;
  _2314 = *(void**)_1962;
  _2315 = *(uint64_t*)(((&((uint8_t*)_2314)[((int64_t)16)])));
  *(uint64_t*)_2180 = _2311;
  *(uint64_t*)_2181 = _2312;
  *(uint64_t*)_2183 = _2313;
  *(uint64_t*)_2185 = _2315;
  julia_emit_4484((&_1970), _1961, _1962, 66, 1);
  _2045__PHI_TEMPORARY = (&_1970);   /* for PHI node */
  goto _2332;

_2388:
  julia_emit_4484((&_1971), _1961, _1962, 81, 1);
  _2045__PHI_TEMPORARY = (&_1971);   /* for PHI node */
  goto _2332;

_2357:
  julia_emit_4484((&_1972), _1961, _1962, 239, 1);
  _2045__PHI_TEMPORARY = (&_1972);   /* for PHI node */
  goto _2332;

}


static void julia_lex_greater_4591(void* _2395, void* _2396, void* _2397) {
  struct l_array_4_uint64_t _2398;    /* Address-exposed local */
  struct l_array_4_uint64_t _2399;    /* Address-exposed local */
  struct l_array_4_uint64_t _2400;    /* Address-exposed local */
  struct l_array_4_uint64_t _2401;    /* Address-exposed local */
  struct l_array_4_uint64_t _2402;    /* Address-exposed local */
  struct l_array_4_uint64_t _2403;    /* Address-exposed local */
  struct l_array_4_uint64_t _2404;    /* Address-exposed local */
  void* _2405;
  uint64_t _2406;
  void* _2407;
  void* _2408;
  void* _2409;
  uint64_t _2410;
  void* _2411;
  uint64_t _2412;
  void* _2413;
  uint8_t _2414;
  uint8_t _2415;
  uint8_t _2416;
  uint32_t _2417;
  uint64_t _2418;
  uint64_t _2418__PHI_TEMPORARY;
  uint32_t _2419;
  uint32_t _2419__PHI_TEMPORARY;
  uint64_t _2420;
  uint64_t _2421;
  void* _2422;
  uint8_t _2423;
  uint32_t _2424;
  uint64_t _2425;
  uint64_t _2426;
  uint32_t _2427;
  uint64_t _2428;
  uint32_t _2429;
  uint32_t _2429__PHI_TEMPORARY;
  uint64_t _2430;
  uint64_t _2431;
  uint64_t _2432;
  uint64_t _2433;
  void* _2434;
  uint64_t _2435;
  void* _2436;
  uint64_t _2437;
  void* _2438;
  uint64_t _2439;
  void* _2440;
  uint64_t _2441;
  uint64_t _2442;
  void* _2443;
  void* _2444;
  uint64_t _2445;
  void* _2446;
  uint64_t _2447;
  void* _2448;
  uint8_t _2449;
  uint8_t _2450;
  uint8_t _2451;
  uint32_t _2452;
  uint64_t _2453;
  uint64_t _2453__PHI_TEMPORARY;
  uint32_t _2454;
  uint32_t _2454__PHI_TEMPORARY;
  uint64_t _2455;
  uint64_t _2456;
  void* _2457;
  uint8_t _2458;
  uint32_t _2459;
  uint64_t _2460;
  uint64_t _2461;
  uint32_t _2462;
  uint64_t _2463;
  uint32_t _2464;
  uint32_t _2464__PHI_TEMPORARY;
  uint64_t _2465;
  uint64_t _2466;
  uint64_t _2467;
  uint64_t _2468;
  void* _2469;
  uint64_t _2470;
  void* _2471;
  uint64_t _2472;
  void* _2473;
  uint64_t _2474;
  void* _2475;
  uint64_t _2476;
  uint64_t _2477;
  void* _2478;
  void* _2479;
  uint64_t _2480;
  void* _2481;
  uint64_t _2482;
  void* _2483;
  uint8_t _2484;
  uint8_t _2485;
  uint8_t _2486;
  uint32_t _2487;
  uint64_t _2488;
  uint64_t _2488__PHI_TEMPORARY;
  uint32_t _2489;
  uint32_t _2489__PHI_TEMPORARY;
  uint64_t _2490;
  uint64_t _2491;
  void* _2492;
  uint8_t _2493;
  uint32_t _2494;
  uint64_t _2495;
  uint64_t _2496;
  uint32_t _2497;
  uint64_t _2498;
  uint32_t _2499;
  uint32_t _2499__PHI_TEMPORARY;
  uint64_t _2500;
  uint64_t _2501;
  uint64_t _2502;
  uint64_t _2503;
  void* _2504;
  uint64_t _2505;
  void* _2506;
  uint64_t _2507;
  void* _2508;
  uint64_t _2509;
  void* _2510;
  uint64_t _2511;
  void* _2512;
  void* _2512__PHI_TEMPORARY;
  void* _2513;
  uint64_t _2514;
  void* _2515;
  void* _2516;
  uint64_t _2517;
  void* _2518;
  uint64_t _2519;
  void* _2520;
  uint8_t _2521;
  uint8_t _2522;
  uint8_t _2523;
  uint32_t _2524;
  uint64_t _2525;
  uint64_t _2525__PHI_TEMPORARY;
  uint32_t _2526;
  uint32_t _2526__PHI_TEMPORARY;
  uint64_t _2527;
  uint64_t _2528;
  void* _2529;
  uint8_t _2530;
  uint32_t _2531;
  uint64_t _2532;
  uint64_t _2533;
  uint32_t _2534;
  uint64_t _2535;
  uint32_t _2536;
  uint32_t _2536__PHI_TEMPORARY;
  uint64_t _2537;
  uint64_t _2538;
  uint64_t _2539;
  uint64_t _2540;
  void* _2541;
  uint64_t _2542;
  void* _2543;
  uint64_t _2544;
  void* _2545;
  uint64_t _2546;
  void* _2547;
  uint64_t _2548;
  uint64_t _2549;
  void* _2550;
  void* _2551;
  uint64_t _2552;
  void* _2553;
  uint64_t _2554;
  void* _2555;
  uint8_t _2556;
  uint8_t _2557;
  uint8_t _2558;
  uint32_t _2559;
  uint64_t _2560;
  uint64_t _2560__PHI_TEMPORARY;
  uint32_t _2561;
  uint32_t _2561__PHI_TEMPORARY;
  uint64_t _2562;
  uint64_t _2563;
  void* _2564;
  uint8_t _2565;
  uint32_t _2566;
  uint64_t _2567;
  uint64_t _2568;
  uint32_t _2569;
  uint64_t _2570;
  uint32_t _2571;
  uint32_t _2571__PHI_TEMPORARY;
  uint64_t _2572;
  uint64_t _2573;
  uint64_t _2574;
  uint64_t _2575;
  void* _2576;
  uint64_t _2577;
  void* _2578;
  uint64_t _2579;
  void* _2580;
  uint64_t _2581;
  void* _2582;
  uint64_t _2583;
  uint64_t _2584;
  void* _2585;
  void* _2586;
  uint64_t _2587;
  void* _2588;
  uint64_t _2589;
  void* _2590;
  uint8_t _2591;
  uint8_t _2592;
  uint8_t _2593;
  uint32_t _2594;
  uint64_t _2595;
  uint64_t _2595__PHI_TEMPORARY;
  uint32_t _2596;
  uint32_t _2596__PHI_TEMPORARY;
  uint64_t _2597;
  uint64_t _2598;
  void* _2599;
  uint8_t _2600;
  uint32_t _2601;
  uint64_t _2602;
  uint64_t _2603;
  uint32_t _2604;
  uint64_t _2605;
  uint32_t _2606;
  uint32_t _2606__PHI_TEMPORARY;
  uint64_t _2607;
  uint64_t _2608;
  uint64_t _2609;
  uint64_t _2610;
  void* _2611;
  uint64_t _2612;
  void* _2613;
  uint64_t _2614;
  void* _2615;
  uint64_t _2616;
  void* _2617;
  uint64_t _2618;

  _2405 = ((&((uint8_t*)_2397)[((int64_t)32)]));
  _2406 = *(uint64_t*)_2405;
  _2407 = ((&((uint8_t*)_2397)[((int64_t)40)]));
  if (((_2406 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _2619;
  } else {
    goto _2620;
  }

_2619:
  _2408 = *(void**)_2397;
  _2409 = ((&((uint8_t*)_2408)[((int64_t)16)]));
  _2410 = *(uint64_t*)_2409;
  _2411 = ((&((uint8_t*)_2408)[((int64_t)8)]));
  _2412 = *(uint64_t*)_2411;
  if ((((int64_t)_2412) > ((int64_t)_2410))) {
    goto _2621;
  } else {
    _2429__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2622;
  }

_2621:
  _2413 = *(void**)_2408;
  _2414 = *(uint8_t*)(((&((uint8_t*)_2413)[((int64_t)_2410)])));
  *(uint64_t*)_2409 = (llvm_add_u64(_2410, 1));
  _2415 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2414)), 0);
  _2416 = llvm_sub_u8(32, (llvm_shl_u8(_2415, 3)));
  _2417 = (((uint32_t)(uint8_t)_2414)) << 24;
  if ((((uint8_t)_2416) > ((uint8_t)((uint8_t)16)))) {
    _2429__PHI_TEMPORARY = _2417;   /* for PHI node */
    goto _2622;
  } else {
    _2418__PHI_TEMPORARY = 16;   /* for PHI node */
    _2419__PHI_TEMPORARY = _2417;   /* for PHI node */
    goto _2623;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2623:
  _2418 = _2418__PHI_TEMPORARY;
  _2419 = _2419__PHI_TEMPORARY;
  if (((((int64_t)_2418) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2418) < ((uint64_t)(((uint64_t)(uint8_t)_2416)))))) {
    _2429__PHI_TEMPORARY = _2419;   /* for PHI node */
    goto _2622;
  } else {
    goto _2624;
  }

_2624:
  _2420 = *(uint64_t*)_2409;
  _2421 = *(uint64_t*)_2411;
  if ((((int64_t)_2421) > ((int64_t)_2420))) {
    goto _2625;
  } else {
    _2429__PHI_TEMPORARY = _2419;   /* for PHI node */
    goto _2622;
  }

_2625:
  _2422 = *(void**)_2408;
  _2423 = *(uint8_t*)(((&((uint8_t*)_2422)[((int64_t)_2420)])));
  if ((((int8_t)_2423) > ((int8_t)((uint8_t)-65)))) {
    _2429__PHI_TEMPORARY = _2419;   /* for PHI node */
    goto _2622;
  } else {
    goto _2626;
  }

_2626:
  _2424 = llvm_select_u32((((int64_t)_2420) < ((int64_t)_2421)), (((uint32_t)(uint8_t)_2423)), 0);
  _2425 = *(uint64_t*)_2409;
  *(uint64_t*)_2409 = (llvm_add_u64(_2425, 1));
  _2426 = llvm_neg_u64(_2418);
  _2427 = _2419 | (llvm_select_u32((((int64_t)_2418) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2426) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2424, (((uint32_t)_2426)))))), (llvm_select_u32((((uint64_t)_2418) > ((uint64_t)UINT64_C(31))), 0, (_2424 << (((uint32_t)_2418)))))));
  _2428 = llvm_add_u64(_2418, -8);
  _2418__PHI_TEMPORARY = _2428;   /* for PHI node */
  _2419__PHI_TEMPORARY = _2427;   /* for PHI node */
  goto _2623;

  } while (1); /* end of syntactic loop '' */
_2622:
  _2429 = _2429__PHI_TEMPORARY;
  _2430 = *(uint64_t*)_2405;
  _2431 = *(uint64_t*)_2407;
  _2432 = jsyn_cbe_fshl_i64(_2431, _2430, 32);
  _2433 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2429)), _2431, 32);
  *(uint64_t*)_2405 = _2432;
  *(uint64_t*)_2407 = _2433;
  _2434 = ((&((uint8_t*)_2397)[((int64_t)56)]));
  _2435 = *(uint64_t*)_2434;
  _2436 = ((&((uint8_t*)_2397)[((int64_t)64)]));
  _2437 = *(uint64_t*)_2436;
  _2438 = ((&((uint8_t*)_2397)[((int64_t)72)]));
  _2439 = *(uint64_t*)_2438;
  _2440 = *(void**)_2397;
  _2441 = *(uint64_t*)(((&((uint8_t*)_2440)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2397)[((int64_t)48)]))) = _2435;
  *(uint64_t*)_2434 = _2437;
  *(uint64_t*)_2436 = _2439;
  *(uint64_t*)_2438 = _2441;
  _2442 = *(uint64_t*)_2405;
  if (((_2442 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _2627;
  } else {
    goto _2628;
  }

_2627:
  _2443 = *(void**)_2397;
  _2444 = ((&((uint8_t*)_2443)[((int64_t)16)]));
  _2445 = *(uint64_t*)_2444;
  _2446 = ((&((uint8_t*)_2443)[((int64_t)8)]));
  _2447 = *(uint64_t*)_2446;
  if ((((int64_t)_2447) > ((int64_t)_2445))) {
    goto _2629;
  } else {
    _2464__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2630;
  }

_2629:
  _2448 = *(void**)_2443;
  _2449 = *(uint8_t*)(((&((uint8_t*)_2448)[((int64_t)_2445)])));
  *(uint64_t*)_2444 = (llvm_add_u64(_2445, 1));
  _2450 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2449)), 0);
  _2451 = llvm_sub_u8(32, (llvm_shl_u8(_2450, 3)));
  _2452 = (((uint32_t)(uint8_t)_2449)) << 24;
  if ((((uint8_t)_2451) > ((uint8_t)((uint8_t)16)))) {
    _2464__PHI_TEMPORARY = _2452;   /* for PHI node */
    goto _2630;
  } else {
    _2453__PHI_TEMPORARY = 16;   /* for PHI node */
    _2454__PHI_TEMPORARY = _2452;   /* for PHI node */
    goto _2631;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2631:
  _2453 = _2453__PHI_TEMPORARY;
  _2454 = _2454__PHI_TEMPORARY;
  if (((((int64_t)_2453) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2453) < ((uint64_t)(((uint64_t)(uint8_t)_2451)))))) {
    _2464__PHI_TEMPORARY = _2454;   /* for PHI node */
    goto _2630;
  } else {
    goto _2632;
  }

_2632:
  _2455 = *(uint64_t*)_2444;
  _2456 = *(uint64_t*)_2446;
  if ((((int64_t)_2456) > ((int64_t)_2455))) {
    goto _2633;
  } else {
    _2464__PHI_TEMPORARY = _2454;   /* for PHI node */
    goto _2630;
  }

_2633:
  _2457 = *(void**)_2443;
  _2458 = *(uint8_t*)(((&((uint8_t*)_2457)[((int64_t)_2455)])));
  if ((((int8_t)_2458) > ((int8_t)((uint8_t)-65)))) {
    _2464__PHI_TEMPORARY = _2454;   /* for PHI node */
    goto _2630;
  } else {
    goto _2634;
  }

_2634:
  _2459 = llvm_select_u32((((int64_t)_2455) < ((int64_t)_2456)), (((uint32_t)(uint8_t)_2458)), 0);
  _2460 = *(uint64_t*)_2444;
  *(uint64_t*)_2444 = (llvm_add_u64(_2460, 1));
  _2461 = llvm_neg_u64(_2453);
  _2462 = _2454 | (llvm_select_u32((((int64_t)_2453) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2461) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2459, (((uint32_t)_2461)))))), (llvm_select_u32((((uint64_t)_2453) > ((uint64_t)UINT64_C(31))), 0, (_2459 << (((uint32_t)_2453)))))));
  _2463 = llvm_add_u64(_2453, -8);
  _2453__PHI_TEMPORARY = _2463;   /* for PHI node */
  _2454__PHI_TEMPORARY = _2462;   /* for PHI node */
  goto _2631;

  } while (1); /* end of syntactic loop '' */
_2630:
  _2464 = _2464__PHI_TEMPORARY;
  _2465 = *(uint64_t*)_2405;
  _2466 = *(uint64_t*)_2407;
  _2467 = jsyn_cbe_fshl_i64(_2466, _2465, 32);
  _2468 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2464)), _2466, 32);
  *(uint64_t*)_2405 = _2467;
  *(uint64_t*)_2407 = _2468;
  _2469 = ((&((uint8_t*)_2397)[((int64_t)56)]));
  _2470 = *(uint64_t*)_2469;
  _2471 = ((&((uint8_t*)_2397)[((int64_t)64)]));
  _2472 = *(uint64_t*)_2471;
  _2473 = ((&((uint8_t*)_2397)[((int64_t)72)]));
  _2474 = *(uint64_t*)_2473;
  _2475 = *(void**)_2397;
  _2476 = *(uint64_t*)(((&((uint8_t*)_2475)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2397)[((int64_t)48)]))) = _2470;
  *(uint64_t*)_2469 = _2472;
  *(uint64_t*)_2471 = _2474;
  *(uint64_t*)_2473 = _2476;
  _2477 = *(uint64_t*)_2405;
  if (((_2477 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2635;
  } else {
    goto _2636;
  }

_2635:
  _2478 = *(void**)_2397;
  _2479 = ((&((uint8_t*)_2478)[((int64_t)16)]));
  _2480 = *(uint64_t*)_2479;
  _2481 = ((&((uint8_t*)_2478)[((int64_t)8)]));
  _2482 = *(uint64_t*)_2481;
  if ((((int64_t)_2482) > ((int64_t)_2480))) {
    goto _2637;
  } else {
    _2499__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2638;
  }

_2637:
  _2483 = *(void**)_2478;
  _2484 = *(uint8_t*)(((&((uint8_t*)_2483)[((int64_t)_2480)])));
  *(uint64_t*)_2479 = (llvm_add_u64(_2480, 1));
  _2485 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2484)), 0);
  _2486 = llvm_sub_u8(32, (llvm_shl_u8(_2485, 3)));
  _2487 = (((uint32_t)(uint8_t)_2484)) << 24;
  if ((((uint8_t)_2486) > ((uint8_t)((uint8_t)16)))) {
    _2499__PHI_TEMPORARY = _2487;   /* for PHI node */
    goto _2638;
  } else {
    _2488__PHI_TEMPORARY = 16;   /* for PHI node */
    _2489__PHI_TEMPORARY = _2487;   /* for PHI node */
    goto _2639;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2639:
  _2488 = _2488__PHI_TEMPORARY;
  _2489 = _2489__PHI_TEMPORARY;
  if (((((int64_t)_2488) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2488) < ((uint64_t)(((uint64_t)(uint8_t)_2486)))))) {
    _2499__PHI_TEMPORARY = _2489;   /* for PHI node */
    goto _2638;
  } else {
    goto _2640;
  }

_2640:
  _2490 = *(uint64_t*)_2479;
  _2491 = *(uint64_t*)_2481;
  if ((((int64_t)_2491) > ((int64_t)_2490))) {
    goto _2641;
  } else {
    _2499__PHI_TEMPORARY = _2489;   /* for PHI node */
    goto _2638;
  }

_2641:
  _2492 = *(void**)_2478;
  _2493 = *(uint8_t*)(((&((uint8_t*)_2492)[((int64_t)_2490)])));
  if ((((int8_t)_2493) > ((int8_t)((uint8_t)-65)))) {
    _2499__PHI_TEMPORARY = _2489;   /* for PHI node */
    goto _2638;
  } else {
    goto _2642;
  }

_2642:
  _2494 = llvm_select_u32((((int64_t)_2490) < ((int64_t)_2491)), (((uint32_t)(uint8_t)_2493)), 0);
  _2495 = *(uint64_t*)_2479;
  *(uint64_t*)_2479 = (llvm_add_u64(_2495, 1));
  _2496 = llvm_neg_u64(_2488);
  _2497 = _2489 | (llvm_select_u32((((int64_t)_2488) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2496) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2494, (((uint32_t)_2496)))))), (llvm_select_u32((((uint64_t)_2488) > ((uint64_t)UINT64_C(31))), 0, (_2494 << (((uint32_t)_2488)))))));
  _2498 = llvm_add_u64(_2488, -8);
  _2488__PHI_TEMPORARY = _2498;   /* for PHI node */
  _2489__PHI_TEMPORARY = _2497;   /* for PHI node */
  goto _2639;

  } while (1); /* end of syntactic loop '' */
_2638:
  _2499 = _2499__PHI_TEMPORARY;
  _2500 = *(uint64_t*)_2405;
  _2501 = *(uint64_t*)_2407;
  _2502 = jsyn_cbe_fshl_i64(_2501, _2500, 32);
  _2503 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2499)), _2501, 32);
  *(uint64_t*)_2405 = _2502;
  *(uint64_t*)_2407 = _2503;
  _2504 = ((&((uint8_t*)_2397)[((int64_t)56)]));
  _2505 = *(uint64_t*)_2504;
  _2506 = ((&((uint8_t*)_2397)[((int64_t)64)]));
  _2507 = *(uint64_t*)_2506;
  _2508 = ((&((uint8_t*)_2397)[((int64_t)72)]));
  _2509 = *(uint64_t*)_2508;
  _2510 = *(void**)_2397;
  _2511 = *(uint64_t*)(((&((uint8_t*)_2510)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2397)[((int64_t)48)]))) = _2505;
  *(uint64_t*)_2504 = _2507;
  *(uint64_t*)_2506 = _2509;
  *(uint64_t*)_2508 = _2511;
  julia_emit_4484((&_2398), _2396, _2397, 71, 1);
  _2512__PHI_TEMPORARY = (&_2398);   /* for PHI node */
  goto _2643;

_2643:
  _2512 = _2512__PHI_TEMPORARY;
  _2513 = memcpy(_2395, _2512, 32);
  return;
_2636:
  julia_emit_4484((&_2399), _2396, _2397, 673, 1);
  _2512__PHI_TEMPORARY = (&_2399);   /* for PHI node */
  goto _2643;

_2628:
  _2514 = *(uint64_t*)_2405;
  if (((_2514 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2644;
  } else {
    goto _2645;
  }

_2644:
  _2515 = *(void**)_2397;
  _2516 = ((&((uint8_t*)_2515)[((int64_t)16)]));
  _2517 = *(uint64_t*)_2516;
  _2518 = ((&((uint8_t*)_2515)[((int64_t)8)]));
  _2519 = *(uint64_t*)_2518;
  if ((((int64_t)_2519) > ((int64_t)_2517))) {
    goto _2646;
  } else {
    _2536__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2647;
  }

_2646:
  _2520 = *(void**)_2515;
  _2521 = *(uint8_t*)(((&((uint8_t*)_2520)[((int64_t)_2517)])));
  *(uint64_t*)_2516 = (llvm_add_u64(_2517, 1));
  _2522 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2521)), 0);
  _2523 = llvm_sub_u8(32, (llvm_shl_u8(_2522, 3)));
  _2524 = (((uint32_t)(uint8_t)_2521)) << 24;
  if ((((uint8_t)_2523) > ((uint8_t)((uint8_t)16)))) {
    _2536__PHI_TEMPORARY = _2524;   /* for PHI node */
    goto _2647;
  } else {
    _2525__PHI_TEMPORARY = 16;   /* for PHI node */
    _2526__PHI_TEMPORARY = _2524;   /* for PHI node */
    goto _2648;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2648:
  _2525 = _2525__PHI_TEMPORARY;
  _2526 = _2526__PHI_TEMPORARY;
  if (((((int64_t)_2525) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2525) < ((uint64_t)(((uint64_t)(uint8_t)_2523)))))) {
    _2536__PHI_TEMPORARY = _2526;   /* for PHI node */
    goto _2647;
  } else {
    goto _2649;
  }

_2649:
  _2527 = *(uint64_t*)_2516;
  _2528 = *(uint64_t*)_2518;
  if ((((int64_t)_2528) > ((int64_t)_2527))) {
    goto _2650;
  } else {
    _2536__PHI_TEMPORARY = _2526;   /* for PHI node */
    goto _2647;
  }

_2650:
  _2529 = *(void**)_2515;
  _2530 = *(uint8_t*)(((&((uint8_t*)_2529)[((int64_t)_2527)])));
  if ((((int8_t)_2530) > ((int8_t)((uint8_t)-65)))) {
    _2536__PHI_TEMPORARY = _2526;   /* for PHI node */
    goto _2647;
  } else {
    goto _2651;
  }

_2651:
  _2531 = llvm_select_u32((((int64_t)_2527) < ((int64_t)_2528)), (((uint32_t)(uint8_t)_2530)), 0);
  _2532 = *(uint64_t*)_2516;
  *(uint64_t*)_2516 = (llvm_add_u64(_2532, 1));
  _2533 = llvm_neg_u64(_2525);
  _2534 = _2526 | (llvm_select_u32((((int64_t)_2525) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2533) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2531, (((uint32_t)_2533)))))), (llvm_select_u32((((uint64_t)_2525) > ((uint64_t)UINT64_C(31))), 0, (_2531 << (((uint32_t)_2525)))))));
  _2535 = llvm_add_u64(_2525, -8);
  _2525__PHI_TEMPORARY = _2535;   /* for PHI node */
  _2526__PHI_TEMPORARY = _2534;   /* for PHI node */
  goto _2648;

  } while (1); /* end of syntactic loop '' */
_2647:
  _2536 = _2536__PHI_TEMPORARY;
  _2537 = *(uint64_t*)_2405;
  _2538 = *(uint64_t*)_2407;
  _2539 = jsyn_cbe_fshl_i64(_2538, _2537, 32);
  _2540 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2536)), _2538, 32);
  *(uint64_t*)_2405 = _2539;
  *(uint64_t*)_2407 = _2540;
  _2541 = ((&((uint8_t*)_2397)[((int64_t)56)]));
  _2542 = *(uint64_t*)_2541;
  _2543 = ((&((uint8_t*)_2397)[((int64_t)64)]));
  _2544 = *(uint64_t*)_2543;
  _2545 = ((&((uint8_t*)_2397)[((int64_t)72)]));
  _2546 = *(uint64_t*)_2545;
  _2547 = *(void**)_2397;
  _2548 = *(uint64_t*)(((&((uint8_t*)_2547)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2397)[((int64_t)48)]))) = _2542;
  *(uint64_t*)_2541 = _2544;
  *(uint64_t*)_2543 = _2546;
  *(uint64_t*)_2545 = _2548;
  julia_emit_4484((&_2400), _2396, _2397, 71, 1);
  _2512__PHI_TEMPORARY = (&_2400);   /* for PHI node */
  goto _2643;

_2645:
  julia_emit_4484((&_2401), _2396, _2397, 672, 1);
  _2512__PHI_TEMPORARY = (&_2401);   /* for PHI node */
  goto _2643;

_2620:
  _2549 = *(uint64_t*)_2405;
  if (((_2549 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2652;
  } else {
    goto _2653;
  }

_2652:
  _2550 = *(void**)_2397;
  _2551 = ((&((uint8_t*)_2550)[((int64_t)16)]));
  _2552 = *(uint64_t*)_2551;
  _2553 = ((&((uint8_t*)_2550)[((int64_t)8)]));
  _2554 = *(uint64_t*)_2553;
  if ((((int64_t)_2554) > ((int64_t)_2552))) {
    goto _2654;
  } else {
    _2571__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2655;
  }

_2654:
  _2555 = *(void**)_2550;
  _2556 = *(uint8_t*)(((&((uint8_t*)_2555)[((int64_t)_2552)])));
  *(uint64_t*)_2551 = (llvm_add_u64(_2552, 1));
  _2557 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2556)), 0);
  _2558 = llvm_sub_u8(32, (llvm_shl_u8(_2557, 3)));
  _2559 = (((uint32_t)(uint8_t)_2556)) << 24;
  if ((((uint8_t)_2558) > ((uint8_t)((uint8_t)16)))) {
    _2571__PHI_TEMPORARY = _2559;   /* for PHI node */
    goto _2655;
  } else {
    _2560__PHI_TEMPORARY = 16;   /* for PHI node */
    _2561__PHI_TEMPORARY = _2559;   /* for PHI node */
    goto _2656;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2656:
  _2560 = _2560__PHI_TEMPORARY;
  _2561 = _2561__PHI_TEMPORARY;
  if (((((int64_t)_2560) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2560) < ((uint64_t)(((uint64_t)(uint8_t)_2558)))))) {
    _2571__PHI_TEMPORARY = _2561;   /* for PHI node */
    goto _2655;
  } else {
    goto _2657;
  }

_2657:
  _2562 = *(uint64_t*)_2551;
  _2563 = *(uint64_t*)_2553;
  if ((((int64_t)_2563) > ((int64_t)_2562))) {
    goto _2658;
  } else {
    _2571__PHI_TEMPORARY = _2561;   /* for PHI node */
    goto _2655;
  }

_2658:
  _2564 = *(void**)_2550;
  _2565 = *(uint8_t*)(((&((uint8_t*)_2564)[((int64_t)_2562)])));
  if ((((int8_t)_2565) > ((int8_t)((uint8_t)-65)))) {
    _2571__PHI_TEMPORARY = _2561;   /* for PHI node */
    goto _2655;
  } else {
    goto _2659;
  }

_2659:
  _2566 = llvm_select_u32((((int64_t)_2562) < ((int64_t)_2563)), (((uint32_t)(uint8_t)_2565)), 0);
  _2567 = *(uint64_t*)_2551;
  *(uint64_t*)_2551 = (llvm_add_u64(_2567, 1));
  _2568 = llvm_neg_u64(_2560);
  _2569 = _2561 | (llvm_select_u32((((int64_t)_2560) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2568) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2566, (((uint32_t)_2568)))))), (llvm_select_u32((((uint64_t)_2560) > ((uint64_t)UINT64_C(31))), 0, (_2566 << (((uint32_t)_2560)))))));
  _2570 = llvm_add_u64(_2560, -8);
  _2560__PHI_TEMPORARY = _2570;   /* for PHI node */
  _2561__PHI_TEMPORARY = _2569;   /* for PHI node */
  goto _2656;

  } while (1); /* end of syntactic loop '' */
_2655:
  _2571 = _2571__PHI_TEMPORARY;
  _2572 = *(uint64_t*)_2405;
  _2573 = *(uint64_t*)_2407;
  _2574 = jsyn_cbe_fshl_i64(_2573, _2572, 32);
  _2575 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2571)), _2573, 32);
  *(uint64_t*)_2405 = _2574;
  *(uint64_t*)_2407 = _2575;
  _2576 = ((&((uint8_t*)_2397)[((int64_t)56)]));
  _2577 = *(uint64_t*)_2576;
  _2578 = ((&((uint8_t*)_2397)[((int64_t)64)]));
  _2579 = *(uint64_t*)_2578;
  _2580 = ((&((uint8_t*)_2397)[((int64_t)72)]));
  _2581 = *(uint64_t*)_2580;
  _2582 = *(void**)_2397;
  _2583 = *(uint64_t*)(((&((uint8_t*)_2582)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2397)[((int64_t)48)]))) = _2577;
  *(uint64_t*)_2576 = _2579;
  *(uint64_t*)_2578 = _2581;
  *(uint64_t*)_2580 = _2583;
  julia_emit_4484((&_2402), _2396, _2397, 240, 1);
  _2512__PHI_TEMPORARY = (&_2402);   /* for PHI node */
  goto _2643;

_2653:
  _2584 = *(uint64_t*)_2405;
  if (((_2584 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _2660;
  } else {
    goto _2661;
  }

_2660:
  _2585 = *(void**)_2397;
  _2586 = ((&((uint8_t*)_2585)[((int64_t)16)]));
  _2587 = *(uint64_t*)_2586;
  _2588 = ((&((uint8_t*)_2585)[((int64_t)8)]));
  _2589 = *(uint64_t*)_2588;
  if ((((int64_t)_2589) > ((int64_t)_2587))) {
    goto _2662;
  } else {
    _2606__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2663;
  }

_2662:
  _2590 = *(void**)_2585;
  _2591 = *(uint8_t*)(((&((uint8_t*)_2590)[((int64_t)_2587)])));
  *(uint64_t*)_2586 = (llvm_add_u64(_2587, 1));
  _2592 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2591)), 0);
  _2593 = llvm_sub_u8(32, (llvm_shl_u8(_2592, 3)));
  _2594 = (((uint32_t)(uint8_t)_2591)) << 24;
  if ((((uint8_t)_2593) > ((uint8_t)((uint8_t)16)))) {
    _2606__PHI_TEMPORARY = _2594;   /* for PHI node */
    goto _2663;
  } else {
    _2595__PHI_TEMPORARY = 16;   /* for PHI node */
    _2596__PHI_TEMPORARY = _2594;   /* for PHI node */
    goto _2664;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2664:
  _2595 = _2595__PHI_TEMPORARY;
  _2596 = _2596__PHI_TEMPORARY;
  if (((((int64_t)_2595) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2595) < ((uint64_t)(((uint64_t)(uint8_t)_2593)))))) {
    _2606__PHI_TEMPORARY = _2596;   /* for PHI node */
    goto _2663;
  } else {
    goto _2665;
  }

_2665:
  _2597 = *(uint64_t*)_2586;
  _2598 = *(uint64_t*)_2588;
  if ((((int64_t)_2598) > ((int64_t)_2597))) {
    goto _2666;
  } else {
    _2606__PHI_TEMPORARY = _2596;   /* for PHI node */
    goto _2663;
  }

_2666:
  _2599 = *(void**)_2585;
  _2600 = *(uint8_t*)(((&((uint8_t*)_2599)[((int64_t)_2597)])));
  if ((((int8_t)_2600) > ((int8_t)((uint8_t)-65)))) {
    _2606__PHI_TEMPORARY = _2596;   /* for PHI node */
    goto _2663;
  } else {
    goto _2667;
  }

_2667:
  _2601 = llvm_select_u32((((int64_t)_2597) < ((int64_t)_2598)), (((uint32_t)(uint8_t)_2600)), 0);
  _2602 = *(uint64_t*)_2586;
  *(uint64_t*)_2586 = (llvm_add_u64(_2602, 1));
  _2603 = llvm_neg_u64(_2595);
  _2604 = _2596 | (llvm_select_u32((((int64_t)_2595) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2603) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2601, (((uint32_t)_2603)))))), (llvm_select_u32((((uint64_t)_2595) > ((uint64_t)UINT64_C(31))), 0, (_2601 << (((uint32_t)_2595)))))));
  _2605 = llvm_add_u64(_2595, -8);
  _2595__PHI_TEMPORARY = _2605;   /* for PHI node */
  _2596__PHI_TEMPORARY = _2604;   /* for PHI node */
  goto _2664;

  } while (1); /* end of syntactic loop '' */
_2663:
  _2606 = _2606__PHI_TEMPORARY;
  _2607 = *(uint64_t*)_2405;
  _2608 = *(uint64_t*)_2407;
  _2609 = jsyn_cbe_fshl_i64(_2608, _2607, 32);
  _2610 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2606)), _2608, 32);
  *(uint64_t*)_2405 = _2609;
  *(uint64_t*)_2407 = _2610;
  _2611 = ((&((uint8_t*)_2397)[((int64_t)56)]));
  _2612 = *(uint64_t*)_2611;
  _2613 = ((&((uint8_t*)_2397)[((int64_t)64)]));
  _2614 = *(uint64_t*)_2613;
  _2615 = ((&((uint8_t*)_2397)[((int64_t)72)]));
  _2616 = *(uint64_t*)_2615;
  _2617 = *(void**)_2397;
  _2618 = *(uint64_t*)(((&((uint8_t*)_2617)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2397)[((int64_t)48)]))) = _2612;
  *(uint64_t*)_2611 = _2614;
  *(uint64_t*)_2613 = _2616;
  *(uint64_t*)_2615 = _2618;
  julia_emit_4484((&_2403), _2396, _2397, 237, 1);
  _2512__PHI_TEMPORARY = (&_2403);   /* for PHI node */
  goto _2643;

_2661:
  julia_emit_4484((&_2404), _2396, _2397, 238, 1);
  _2512__PHI_TEMPORARY = (&_2404);   /* for PHI node */
  goto _2643;

}


static void julia_lex_exclaim_4595(void* _2668, void* _2669, void* _2670) {
  struct l_array_4_uint64_t _2671;    /* Address-exposed local */
  struct l_array_4_uint64_t _2672;    /* Address-exposed local */
  struct l_array_4_uint64_t _2673;    /* Address-exposed local */
  void* _2674;
  uint64_t _2675;
  void* _2676;
  void* _2677;
  void* _2678;
  uint64_t _2679;
  void* _2680;
  uint64_t _2681;
  void* _2682;
  uint8_t _2683;
  uint8_t _2684;
  uint8_t _2685;
  uint32_t _2686;
  uint64_t _2687;
  uint64_t _2687__PHI_TEMPORARY;
  uint32_t _2688;
  uint32_t _2688__PHI_TEMPORARY;
  uint64_t _2689;
  uint64_t _2690;
  void* _2691;
  uint8_t _2692;
  uint32_t _2693;
  uint64_t _2694;
  uint64_t _2695;
  uint32_t _2696;
  uint64_t _2697;
  uint32_t _2698;
  uint32_t _2698__PHI_TEMPORARY;
  uint64_t _2699;
  uint64_t _2700;
  uint64_t _2701;
  uint64_t _2702;
  void* _2703;
  uint64_t _2704;
  void* _2705;
  uint64_t _2706;
  void* _2707;
  uint64_t _2708;
  void* _2709;
  uint64_t _2710;
  uint64_t _2711;
  void* _2712;
  void* _2713;
  uint64_t _2714;
  void* _2715;
  uint64_t _2716;
  void* _2717;
  uint8_t _2718;
  uint8_t _2719;
  uint8_t _2720;
  uint32_t _2721;
  uint64_t _2722;
  uint64_t _2722__PHI_TEMPORARY;
  uint32_t _2723;
  uint32_t _2723__PHI_TEMPORARY;
  uint64_t _2724;
  uint64_t _2725;
  void* _2726;
  uint8_t _2727;
  uint32_t _2728;
  uint64_t _2729;
  uint64_t _2730;
  uint32_t _2731;
  uint64_t _2732;
  uint32_t _2733;
  uint32_t _2733__PHI_TEMPORARY;
  uint64_t _2734;
  uint64_t _2735;
  uint64_t _2736;
  uint64_t _2737;
  void* _2738;
  uint64_t _2739;
  void* _2740;
  uint64_t _2741;
  void* _2742;
  uint64_t _2743;
  void* _2744;
  uint64_t _2745;
  void* _2746;
  void* _2746__PHI_TEMPORARY;
  void* _2747;

  _2674 = ((&((uint8_t*)_2670)[((int64_t)32)]));
  _2675 = *(uint64_t*)_2674;
  _2676 = ((&((uint8_t*)_2670)[((int64_t)40)]));
  if (((_2675 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2748;
  } else {
    goto _2749;
  }

_2748:
  _2677 = *(void**)_2670;
  _2678 = ((&((uint8_t*)_2677)[((int64_t)16)]));
  _2679 = *(uint64_t*)_2678;
  _2680 = ((&((uint8_t*)_2677)[((int64_t)8)]));
  _2681 = *(uint64_t*)_2680;
  if ((((int64_t)_2681) > ((int64_t)_2679))) {
    goto _2750;
  } else {
    _2698__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2751;
  }

_2750:
  _2682 = *(void**)_2677;
  _2683 = *(uint8_t*)(((&((uint8_t*)_2682)[((int64_t)_2679)])));
  *(uint64_t*)_2678 = (llvm_add_u64(_2679, 1));
  _2684 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2683)), 0);
  _2685 = llvm_sub_u8(32, (llvm_shl_u8(_2684, 3)));
  _2686 = (((uint32_t)(uint8_t)_2683)) << 24;
  if ((((uint8_t)_2685) > ((uint8_t)((uint8_t)16)))) {
    _2698__PHI_TEMPORARY = _2686;   /* for PHI node */
    goto _2751;
  } else {
    _2687__PHI_TEMPORARY = 16;   /* for PHI node */
    _2688__PHI_TEMPORARY = _2686;   /* for PHI node */
    goto _2752;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2752:
  _2687 = _2687__PHI_TEMPORARY;
  _2688 = _2688__PHI_TEMPORARY;
  if (((((int64_t)_2687) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2687) < ((uint64_t)(((uint64_t)(uint8_t)_2685)))))) {
    _2698__PHI_TEMPORARY = _2688;   /* for PHI node */
    goto _2751;
  } else {
    goto _2753;
  }

_2753:
  _2689 = *(uint64_t*)_2678;
  _2690 = *(uint64_t*)_2680;
  if ((((int64_t)_2690) > ((int64_t)_2689))) {
    goto _2754;
  } else {
    _2698__PHI_TEMPORARY = _2688;   /* for PHI node */
    goto _2751;
  }

_2754:
  _2691 = *(void**)_2677;
  _2692 = *(uint8_t*)(((&((uint8_t*)_2691)[((int64_t)_2689)])));
  if ((((int8_t)_2692) > ((int8_t)((uint8_t)-65)))) {
    _2698__PHI_TEMPORARY = _2688;   /* for PHI node */
    goto _2751;
  } else {
    goto _2755;
  }

_2755:
  _2693 = llvm_select_u32((((int64_t)_2689) < ((int64_t)_2690)), (((uint32_t)(uint8_t)_2692)), 0);
  _2694 = *(uint64_t*)_2678;
  *(uint64_t*)_2678 = (llvm_add_u64(_2694, 1));
  _2695 = llvm_neg_u64(_2687);
  _2696 = _2688 | (llvm_select_u32((((int64_t)_2687) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2695) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2693, (((uint32_t)_2695)))))), (llvm_select_u32((((uint64_t)_2687) > ((uint64_t)UINT64_C(31))), 0, (_2693 << (((uint32_t)_2687)))))));
  _2697 = llvm_add_u64(_2687, -8);
  _2687__PHI_TEMPORARY = _2697;   /* for PHI node */
  _2688__PHI_TEMPORARY = _2696;   /* for PHI node */
  goto _2752;

  } while (1); /* end of syntactic loop '' */
_2751:
  _2698 = _2698__PHI_TEMPORARY;
  _2699 = *(uint64_t*)_2674;
  _2700 = *(uint64_t*)_2676;
  _2701 = jsyn_cbe_fshl_i64(_2700, _2699, 32);
  _2702 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2698)), _2700, 32);
  *(uint64_t*)_2674 = _2701;
  *(uint64_t*)_2676 = _2702;
  _2703 = ((&((uint8_t*)_2670)[((int64_t)56)]));
  _2704 = *(uint64_t*)_2703;
  _2705 = ((&((uint8_t*)_2670)[((int64_t)64)]));
  _2706 = *(uint64_t*)_2705;
  _2707 = ((&((uint8_t*)_2670)[((int64_t)72)]));
  _2708 = *(uint64_t*)_2707;
  _2709 = *(void**)_2670;
  _2710 = *(uint64_t*)(((&((uint8_t*)_2709)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2670)[((int64_t)48)]))) = _2704;
  *(uint64_t*)_2703 = _2706;
  *(uint64_t*)_2705 = _2708;
  *(uint64_t*)_2707 = _2710;
  _2711 = *(uint64_t*)_2674;
  if (((_2711 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2756;
  } else {
    goto _2757;
  }

_2756:
  _2712 = *(void**)_2670;
  _2713 = ((&((uint8_t*)_2712)[((int64_t)16)]));
  _2714 = *(uint64_t*)_2713;
  _2715 = ((&((uint8_t*)_2712)[((int64_t)8)]));
  _2716 = *(uint64_t*)_2715;
  if ((((int64_t)_2716) > ((int64_t)_2714))) {
    goto _2758;
  } else {
    _2733__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2759;
  }

_2758:
  _2717 = *(void**)_2712;
  _2718 = *(uint8_t*)(((&((uint8_t*)_2717)[((int64_t)_2714)])));
  *(uint64_t*)_2713 = (llvm_add_u64(_2714, 1));
  _2719 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2718)), 0);
  _2720 = llvm_sub_u8(32, (llvm_shl_u8(_2719, 3)));
  _2721 = (((uint32_t)(uint8_t)_2718)) << 24;
  if ((((uint8_t)_2720) > ((uint8_t)((uint8_t)16)))) {
    _2733__PHI_TEMPORARY = _2721;   /* for PHI node */
    goto _2759;
  } else {
    _2722__PHI_TEMPORARY = 16;   /* for PHI node */
    _2723__PHI_TEMPORARY = _2721;   /* for PHI node */
    goto _2760;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2760:
  _2722 = _2722__PHI_TEMPORARY;
  _2723 = _2723__PHI_TEMPORARY;
  if (((((int64_t)_2722) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2722) < ((uint64_t)(((uint64_t)(uint8_t)_2720)))))) {
    _2733__PHI_TEMPORARY = _2723;   /* for PHI node */
    goto _2759;
  } else {
    goto _2761;
  }

_2761:
  _2724 = *(uint64_t*)_2713;
  _2725 = *(uint64_t*)_2715;
  if ((((int64_t)_2725) > ((int64_t)_2724))) {
    goto _2762;
  } else {
    _2733__PHI_TEMPORARY = _2723;   /* for PHI node */
    goto _2759;
  }

_2762:
  _2726 = *(void**)_2712;
  _2727 = *(uint8_t*)(((&((uint8_t*)_2726)[((int64_t)_2724)])));
  if ((((int8_t)_2727) > ((int8_t)((uint8_t)-65)))) {
    _2733__PHI_TEMPORARY = _2723;   /* for PHI node */
    goto _2759;
  } else {
    goto _2763;
  }

_2763:
  _2728 = llvm_select_u32((((int64_t)_2724) < ((int64_t)_2725)), (((uint32_t)(uint8_t)_2727)), 0);
  _2729 = *(uint64_t*)_2713;
  *(uint64_t*)_2713 = (llvm_add_u64(_2729, 1));
  _2730 = llvm_neg_u64(_2722);
  _2731 = _2723 | (llvm_select_u32((((int64_t)_2722) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2730) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2728, (((uint32_t)_2730)))))), (llvm_select_u32((((uint64_t)_2722) > ((uint64_t)UINT64_C(31))), 0, (_2728 << (((uint32_t)_2722)))))));
  _2732 = llvm_add_u64(_2722, -8);
  _2722__PHI_TEMPORARY = _2732;   /* for PHI node */
  _2723__PHI_TEMPORARY = _2731;   /* for PHI node */
  goto _2760;

  } while (1); /* end of syntactic loop '' */
_2759:
  _2733 = _2733__PHI_TEMPORARY;
  _2734 = *(uint64_t*)_2674;
  _2735 = *(uint64_t*)_2676;
  _2736 = jsyn_cbe_fshl_i64(_2735, _2734, 32);
  _2737 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2733)), _2735, 32);
  *(uint64_t*)_2674 = _2736;
  *(uint64_t*)_2676 = _2737;
  _2738 = ((&((uint8_t*)_2670)[((int64_t)56)]));
  _2739 = *(uint64_t*)_2738;
  _2740 = ((&((uint8_t*)_2670)[((int64_t)64)]));
  _2741 = *(uint64_t*)_2740;
  _2742 = ((&((uint8_t*)_2670)[((int64_t)72)]));
  _2743 = *(uint64_t*)_2742;
  _2744 = *(void**)_2670;
  _2745 = *(uint64_t*)(((&((uint8_t*)_2744)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2670)[((int64_t)48)]))) = _2739;
  *(uint64_t*)_2738 = _2741;
  *(uint64_t*)_2740 = _2743;
  *(uint64_t*)_2742 = _2745;
  julia_emit_4484((&_2671), _2669, _2670, 249, 1);
  _2746__PHI_TEMPORARY = (&_2671);   /* for PHI node */
  goto _2764;

_2764:
  _2746 = _2746__PHI_TEMPORARY;
  _2747 = memcpy(_2668, _2746, 32);
  return;
_2757:
  julia_emit_4484((&_2672), _2669, _2670, 247, 1);
  _2746__PHI_TEMPORARY = (&_2672);   /* for PHI node */
  goto _2764;

_2749:
  julia_emit_4484((&_2673), _2669, _2670, 708, 1);
  _2746__PHI_TEMPORARY = (&_2673);   /* for PHI node */
  goto _2764;

}


static void julia_lex_equal_4599(void* _2765, void* _2766, void* _2767) {
  struct l_array_4_uint64_t _2768;    /* Address-exposed local */
  struct l_array_4_uint64_t _2769;    /* Address-exposed local */
  struct l_array_4_uint64_t _2770;    /* Address-exposed local */
  struct l_array_4_uint64_t _2771;    /* Address-exposed local */
  void* _2772;
  uint64_t _2773;
  void* _2774;
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
  uint64_t _2809;
  void* _2810;
  void* _2811;
  uint64_t _2812;
  void* _2813;
  uint64_t _2814;
  void* _2815;
  uint8_t _2816;
  uint8_t _2817;
  uint8_t _2818;
  uint32_t _2819;
  uint64_t _2820;
  uint64_t _2820__PHI_TEMPORARY;
  uint32_t _2821;
  uint32_t _2821__PHI_TEMPORARY;
  uint64_t _2822;
  uint64_t _2823;
  void* _2824;
  uint8_t _2825;
  uint32_t _2826;
  uint64_t _2827;
  uint64_t _2828;
  uint32_t _2829;
  uint64_t _2830;
  uint32_t _2831;
  uint32_t _2831__PHI_TEMPORARY;
  uint64_t _2832;
  uint64_t _2833;
  uint64_t _2834;
  uint64_t _2835;
  void* _2836;
  uint64_t _2837;
  void* _2838;
  uint64_t _2839;
  void* _2840;
  uint64_t _2841;
  void* _2842;
  uint64_t _2843;
  void* _2844;
  void* _2844__PHI_TEMPORARY;
  void* _2845;
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

  _2772 = ((&((uint8_t*)_2767)[((int64_t)32)]));
  _2773 = *(uint64_t*)_2772;
  _2774 = ((&((uint8_t*)_2767)[((int64_t)40)]));
  if (((_2773 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2881;
  } else {
    goto _2882;
  }

_2881:
  _2775 = *(void**)_2767;
  _2776 = ((&((uint8_t*)_2775)[((int64_t)16)]));
  _2777 = *(uint64_t*)_2776;
  _2778 = ((&((uint8_t*)_2775)[((int64_t)8)]));
  _2779 = *(uint64_t*)_2778;
  if ((((int64_t)_2779) > ((int64_t)_2777))) {
    goto _2883;
  } else {
    _2796__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2884;
  }

_2883:
  _2780 = *(void**)_2775;
  _2781 = *(uint8_t*)(((&((uint8_t*)_2780)[((int64_t)_2777)])));
  *(uint64_t*)_2776 = (llvm_add_u64(_2777, 1));
  _2782 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2781)), 0);
  _2783 = llvm_sub_u8(32, (llvm_shl_u8(_2782, 3)));
  _2784 = (((uint32_t)(uint8_t)_2781)) << 24;
  if ((((uint8_t)_2783) > ((uint8_t)((uint8_t)16)))) {
    _2796__PHI_TEMPORARY = _2784;   /* for PHI node */
    goto _2884;
  } else {
    _2785__PHI_TEMPORARY = 16;   /* for PHI node */
    _2786__PHI_TEMPORARY = _2784;   /* for PHI node */
    goto _2885;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2885:
  _2785 = _2785__PHI_TEMPORARY;
  _2786 = _2786__PHI_TEMPORARY;
  if (((((int64_t)_2785) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2785) < ((uint64_t)(((uint64_t)(uint8_t)_2783)))))) {
    _2796__PHI_TEMPORARY = _2786;   /* for PHI node */
    goto _2884;
  } else {
    goto _2886;
  }

_2886:
  _2787 = *(uint64_t*)_2776;
  _2788 = *(uint64_t*)_2778;
  if ((((int64_t)_2788) > ((int64_t)_2787))) {
    goto _2887;
  } else {
    _2796__PHI_TEMPORARY = _2786;   /* for PHI node */
    goto _2884;
  }

_2887:
  _2789 = *(void**)_2775;
  _2790 = *(uint8_t*)(((&((uint8_t*)_2789)[((int64_t)_2787)])));
  if ((((int8_t)_2790) > ((int8_t)((uint8_t)-65)))) {
    _2796__PHI_TEMPORARY = _2786;   /* for PHI node */
    goto _2884;
  } else {
    goto _2888;
  }

_2888:
  _2791 = llvm_select_u32((((int64_t)_2787) < ((int64_t)_2788)), (((uint32_t)(uint8_t)_2790)), 0);
  _2792 = *(uint64_t*)_2776;
  *(uint64_t*)_2776 = (llvm_add_u64(_2792, 1));
  _2793 = llvm_neg_u64(_2785);
  _2794 = _2786 | (llvm_select_u32((((int64_t)_2785) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2793) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2791, (((uint32_t)_2793)))))), (llvm_select_u32((((uint64_t)_2785) > ((uint64_t)UINT64_C(31))), 0, (_2791 << (((uint32_t)_2785)))))));
  _2795 = llvm_add_u64(_2785, -8);
  _2785__PHI_TEMPORARY = _2795;   /* for PHI node */
  _2786__PHI_TEMPORARY = _2794;   /* for PHI node */
  goto _2885;

  } while (1); /* end of syntactic loop '' */
_2884:
  _2796 = _2796__PHI_TEMPORARY;
  _2797 = *(uint64_t*)_2772;
  _2798 = *(uint64_t*)_2774;
  _2799 = jsyn_cbe_fshl_i64(_2798, _2797, 32);
  _2800 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2796)), _2798, 32);
  *(uint64_t*)_2772 = _2799;
  *(uint64_t*)_2774 = _2800;
  _2801 = ((&((uint8_t*)_2767)[((int64_t)56)]));
  _2802 = *(uint64_t*)_2801;
  _2803 = ((&((uint8_t*)_2767)[((int64_t)64)]));
  _2804 = *(uint64_t*)_2803;
  _2805 = ((&((uint8_t*)_2767)[((int64_t)72)]));
  _2806 = *(uint64_t*)_2805;
  _2807 = *(void**)_2767;
  _2808 = *(uint64_t*)(((&((uint8_t*)_2807)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2767)[((int64_t)48)]))) = _2802;
  *(uint64_t*)_2801 = _2804;
  *(uint64_t*)_2803 = _2806;
  *(uint64_t*)_2805 = _2808;
  _2809 = *(uint64_t*)_2772;
  if (((_2809 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2889;
  } else {
    goto _2890;
  }

_2889:
  _2810 = *(void**)_2767;
  _2811 = ((&((uint8_t*)_2810)[((int64_t)16)]));
  _2812 = *(uint64_t*)_2811;
  _2813 = ((&((uint8_t*)_2810)[((int64_t)8)]));
  _2814 = *(uint64_t*)_2813;
  if ((((int64_t)_2814) > ((int64_t)_2812))) {
    goto _2891;
  } else {
    _2831__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2892;
  }

_2891:
  _2815 = *(void**)_2810;
  _2816 = *(uint8_t*)(((&((uint8_t*)_2815)[((int64_t)_2812)])));
  *(uint64_t*)_2811 = (llvm_add_u64(_2812, 1));
  _2817 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2816)), 0);
  _2818 = llvm_sub_u8(32, (llvm_shl_u8(_2817, 3)));
  _2819 = (((uint32_t)(uint8_t)_2816)) << 24;
  if ((((uint8_t)_2818) > ((uint8_t)((uint8_t)16)))) {
    _2831__PHI_TEMPORARY = _2819;   /* for PHI node */
    goto _2892;
  } else {
    _2820__PHI_TEMPORARY = 16;   /* for PHI node */
    _2821__PHI_TEMPORARY = _2819;   /* for PHI node */
    goto _2893;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2893:
  _2820 = _2820__PHI_TEMPORARY;
  _2821 = _2821__PHI_TEMPORARY;
  if (((((int64_t)_2820) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2820) < ((uint64_t)(((uint64_t)(uint8_t)_2818)))))) {
    _2831__PHI_TEMPORARY = _2821;   /* for PHI node */
    goto _2892;
  } else {
    goto _2894;
  }

_2894:
  _2822 = *(uint64_t*)_2811;
  _2823 = *(uint64_t*)_2813;
  if ((((int64_t)_2823) > ((int64_t)_2822))) {
    goto _2895;
  } else {
    _2831__PHI_TEMPORARY = _2821;   /* for PHI node */
    goto _2892;
  }

_2895:
  _2824 = *(void**)_2810;
  _2825 = *(uint8_t*)(((&((uint8_t*)_2824)[((int64_t)_2822)])));
  if ((((int8_t)_2825) > ((int8_t)((uint8_t)-65)))) {
    _2831__PHI_TEMPORARY = _2821;   /* for PHI node */
    goto _2892;
  } else {
    goto _2896;
  }

_2896:
  _2826 = llvm_select_u32((((int64_t)_2822) < ((int64_t)_2823)), (((uint32_t)(uint8_t)_2825)), 0);
  _2827 = *(uint64_t*)_2811;
  *(uint64_t*)_2811 = (llvm_add_u64(_2827, 1));
  _2828 = llvm_neg_u64(_2820);
  _2829 = _2821 | (llvm_select_u32((((int64_t)_2820) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2828) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2826, (((uint32_t)_2828)))))), (llvm_select_u32((((uint64_t)_2820) > ((uint64_t)UINT64_C(31))), 0, (_2826 << (((uint32_t)_2820)))))));
  _2830 = llvm_add_u64(_2820, -8);
  _2820__PHI_TEMPORARY = _2830;   /* for PHI node */
  _2821__PHI_TEMPORARY = _2829;   /* for PHI node */
  goto _2893;

  } while (1); /* end of syntactic loop '' */
_2892:
  _2831 = _2831__PHI_TEMPORARY;
  _2832 = *(uint64_t*)_2772;
  _2833 = *(uint64_t*)_2774;
  _2834 = jsyn_cbe_fshl_i64(_2833, _2832, 32);
  _2835 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2831)), _2833, 32);
  *(uint64_t*)_2772 = _2834;
  *(uint64_t*)_2774 = _2835;
  _2836 = ((&((uint8_t*)_2767)[((int64_t)56)]));
  _2837 = *(uint64_t*)_2836;
  _2838 = ((&((uint8_t*)_2767)[((int64_t)64)]));
  _2839 = *(uint64_t*)_2838;
  _2840 = ((&((uint8_t*)_2767)[((int64_t)72)]));
  _2841 = *(uint64_t*)_2840;
  _2842 = *(void**)_2767;
  _2843 = *(uint64_t*)(((&((uint8_t*)_2842)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2767)[((int64_t)48)]))) = _2837;
  *(uint64_t*)_2836 = _2839;
  *(uint64_t*)_2838 = _2841;
  *(uint64_t*)_2840 = _2843;
  julia_emit_4484((&_2768), _2766, _2767, 245, 1);
  _2844__PHI_TEMPORARY = (&_2768);   /* for PHI node */
  goto _2897;

_2897:
  _2844 = _2844__PHI_TEMPORARY;
  _2845 = memcpy(_2765, _2844, 32);
  return;
_2890:
  julia_emit_4484((&_2769), _2766, _2767, 244, 1);
  _2844__PHI_TEMPORARY = (&_2769);   /* for PHI node */
  goto _2897;

_2882:
  _2846 = *(uint64_t*)_2772;
  if (((_2846 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _2898;
  } else {
    goto _2899;
  }

_2898:
  _2847 = *(void**)_2767;
  _2848 = ((&((uint8_t*)_2847)[((int64_t)16)]));
  _2849 = *(uint64_t*)_2848;
  _2850 = ((&((uint8_t*)_2847)[((int64_t)8)]));
  _2851 = *(uint64_t*)_2850;
  if ((((int64_t)_2851) > ((int64_t)_2849))) {
    goto _2900;
  } else {
    _2868__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2901;
  }

_2900:
  _2852 = *(void**)_2847;
  _2853 = *(uint8_t*)(((&((uint8_t*)_2852)[((int64_t)_2849)])));
  *(uint64_t*)_2848 = (llvm_add_u64(_2849, 1));
  _2854 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2853)), 0);
  _2855 = llvm_sub_u8(32, (llvm_shl_u8(_2854, 3)));
  _2856 = (((uint32_t)(uint8_t)_2853)) << 24;
  if ((((uint8_t)_2855) > ((uint8_t)((uint8_t)16)))) {
    _2868__PHI_TEMPORARY = _2856;   /* for PHI node */
    goto _2901;
  } else {
    _2857__PHI_TEMPORARY = 16;   /* for PHI node */
    _2858__PHI_TEMPORARY = _2856;   /* for PHI node */
    goto _2902;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2902:
  _2857 = _2857__PHI_TEMPORARY;
  _2858 = _2858__PHI_TEMPORARY;
  if (((((int64_t)_2857) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2857) < ((uint64_t)(((uint64_t)(uint8_t)_2855)))))) {
    _2868__PHI_TEMPORARY = _2858;   /* for PHI node */
    goto _2901;
  } else {
    goto _2903;
  }

_2903:
  _2859 = *(uint64_t*)_2848;
  _2860 = *(uint64_t*)_2850;
  if ((((int64_t)_2860) > ((int64_t)_2859))) {
    goto _2904;
  } else {
    _2868__PHI_TEMPORARY = _2858;   /* for PHI node */
    goto _2901;
  }

_2904:
  _2861 = *(void**)_2847;
  _2862 = *(uint8_t*)(((&((uint8_t*)_2861)[((int64_t)_2859)])));
  if ((((int8_t)_2862) > ((int8_t)((uint8_t)-65)))) {
    _2868__PHI_TEMPORARY = _2858;   /* for PHI node */
    goto _2901;
  } else {
    goto _2905;
  }

_2905:
  _2863 = llvm_select_u32((((int64_t)_2859) < ((int64_t)_2860)), (((uint32_t)(uint8_t)_2862)), 0);
  _2864 = *(uint64_t*)_2848;
  *(uint64_t*)_2848 = (llvm_add_u64(_2864, 1));
  _2865 = llvm_neg_u64(_2857);
  _2866 = _2858 | (llvm_select_u32((((int64_t)_2857) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2865) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2863, (((uint32_t)_2865)))))), (llvm_select_u32((((uint64_t)_2857) > ((uint64_t)UINT64_C(31))), 0, (_2863 << (((uint32_t)_2857)))))));
  _2867 = llvm_add_u64(_2857, -8);
  _2857__PHI_TEMPORARY = _2867;   /* for PHI node */
  _2858__PHI_TEMPORARY = _2866;   /* for PHI node */
  goto _2902;

  } while (1); /* end of syntactic loop '' */
_2901:
  _2868 = _2868__PHI_TEMPORARY;
  _2869 = *(uint64_t*)_2772;
  _2870 = *(uint64_t*)_2774;
  _2871 = jsyn_cbe_fshl_i64(_2870, _2869, 32);
  _2872 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2868)), _2870, 32);
  *(uint64_t*)_2772 = _2871;
  *(uint64_t*)_2774 = _2872;
  _2873 = ((&((uint8_t*)_2767)[((int64_t)56)]));
  _2874 = *(uint64_t*)_2873;
  _2875 = ((&((uint8_t*)_2767)[((int64_t)64)]));
  _2876 = *(uint64_t*)_2875;
  _2877 = ((&((uint8_t*)_2767)[((int64_t)72)]));
  _2878 = *(uint64_t*)_2877;
  _2879 = *(void**)_2767;
  _2880 = *(uint64_t*)(((&((uint8_t*)_2879)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2767)[((int64_t)48)]))) = _2874;
  *(uint64_t*)_2873 = _2876;
  *(uint64_t*)_2875 = _2878;
  *(uint64_t*)_2877 = _2880;
  julia_emit_4484((&_2770), _2766, _2767, 78, 1);
  _2844__PHI_TEMPORARY = (&_2770);   /* for PHI node */
  goto _2897;

_2899:
  julia_emit_4484((&_2771), _2766, _2767, 69, 1);
  _2844__PHI_TEMPORARY = (&_2771);   /* for PHI node */
  goto _2897;

}


static void julia_lex_circumflex_4615(void* _2906, void* _2907, void* _2908) {
  struct l_array_4_uint64_t _2909;    /* Address-exposed local */
  struct l_array_4_uint64_t _2910;    /* Address-exposed local */
  void* _2911;
  uint64_t _2912;
  void* _2913;
  void* _2914;
  void* _2915;
  uint64_t _2916;
  void* _2917;
  uint64_t _2918;
  void* _2919;
  uint8_t _2920;
  uint8_t _2921;
  uint8_t _2922;
  uint32_t _2923;
  uint64_t _2924;
  uint64_t _2924__PHI_TEMPORARY;
  uint32_t _2925;
  uint32_t _2925__PHI_TEMPORARY;
  uint64_t _2926;
  uint64_t _2927;
  void* _2928;
  uint8_t _2929;
  uint32_t _2930;
  uint64_t _2931;
  uint64_t _2932;
  uint32_t _2933;
  uint64_t _2934;
  uint32_t _2935;
  uint32_t _2935__PHI_TEMPORARY;
  uint64_t _2936;
  uint64_t _2937;
  uint64_t _2938;
  uint64_t _2939;
  void* _2940;
  uint64_t _2941;
  void* _2942;
  uint64_t _2943;
  void* _2944;
  uint64_t _2945;
  void* _2946;
  uint64_t _2947;
  void* _2948;
  void* _2948__PHI_TEMPORARY;
  void* _2949;

  _2911 = ((&((uint8_t*)_2908)[((int64_t)32)]));
  _2912 = *(uint64_t*)_2911;
  _2913 = ((&((uint8_t*)_2908)[((int64_t)40)]));
  if (((_2912 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _2950;
  } else {
    goto _2951;
  }

_2950:
  _2914 = *(void**)_2908;
  _2915 = ((&((uint8_t*)_2914)[((int64_t)16)]));
  _2916 = *(uint64_t*)_2915;
  _2917 = ((&((uint8_t*)_2914)[((int64_t)8)]));
  _2918 = *(uint64_t*)_2917;
  if ((((int64_t)_2918) > ((int64_t)_2916))) {
    goto _2952;
  } else {
    _2935__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _2953;
  }

_2952:
  _2919 = *(void**)_2914;
  _2920 = *(uint8_t*)(((&((uint8_t*)_2919)[((int64_t)_2916)])));
  *(uint64_t*)_2915 = (llvm_add_u64(_2916, 1));
  _2921 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2920)), 0);
  _2922 = llvm_sub_u8(32, (llvm_shl_u8(_2921, 3)));
  _2923 = (((uint32_t)(uint8_t)_2920)) << 24;
  if ((((uint8_t)_2922) > ((uint8_t)((uint8_t)16)))) {
    _2935__PHI_TEMPORARY = _2923;   /* for PHI node */
    goto _2953;
  } else {
    _2924__PHI_TEMPORARY = 16;   /* for PHI node */
    _2925__PHI_TEMPORARY = _2923;   /* for PHI node */
    goto _2954;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_2954:
  _2924 = _2924__PHI_TEMPORARY;
  _2925 = _2925__PHI_TEMPORARY;
  if (((((int64_t)_2924) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2924) < ((uint64_t)(((uint64_t)(uint8_t)_2922)))))) {
    _2935__PHI_TEMPORARY = _2925;   /* for PHI node */
    goto _2953;
  } else {
    goto _2955;
  }

_2955:
  _2926 = *(uint64_t*)_2915;
  _2927 = *(uint64_t*)_2917;
  if ((((int64_t)_2927) > ((int64_t)_2926))) {
    goto _2956;
  } else {
    _2935__PHI_TEMPORARY = _2925;   /* for PHI node */
    goto _2953;
  }

_2956:
  _2928 = *(void**)_2914;
  _2929 = *(uint8_t*)(((&((uint8_t*)_2928)[((int64_t)_2926)])));
  if ((((int8_t)_2929) > ((int8_t)((uint8_t)-65)))) {
    _2935__PHI_TEMPORARY = _2925;   /* for PHI node */
    goto _2953;
  } else {
    goto _2957;
  }

_2957:
  _2930 = llvm_select_u32((((int64_t)_2926) < ((int64_t)_2927)), (((uint32_t)(uint8_t)_2929)), 0);
  _2931 = *(uint64_t*)_2915;
  *(uint64_t*)_2915 = (llvm_add_u64(_2931, 1));
  _2932 = llvm_neg_u64(_2924);
  _2933 = _2925 | (llvm_select_u32((((int64_t)_2924) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_2932) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_2930, (((uint32_t)_2932)))))), (llvm_select_u32((((uint64_t)_2924) > ((uint64_t)UINT64_C(31))), 0, (_2930 << (((uint32_t)_2924)))))));
  _2934 = llvm_add_u64(_2924, -8);
  _2924__PHI_TEMPORARY = _2934;   /* for PHI node */
  _2925__PHI_TEMPORARY = _2933;   /* for PHI node */
  goto _2954;

  } while (1); /* end of syntactic loop '' */
_2953:
  _2935 = _2935__PHI_TEMPORARY;
  _2936 = *(uint64_t*)_2911;
  _2937 = *(uint64_t*)_2913;
  _2938 = jsyn_cbe_fshl_i64(_2937, _2936, 32);
  _2939 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_2935)), _2937, 32);
  *(uint64_t*)_2911 = _2938;
  *(uint64_t*)_2913 = _2939;
  _2940 = ((&((uint8_t*)_2908)[((int64_t)56)]));
  _2941 = *(uint64_t*)_2940;
  _2942 = ((&((uint8_t*)_2908)[((int64_t)64)]));
  _2943 = *(uint64_t*)_2942;
  _2944 = ((&((uint8_t*)_2908)[((int64_t)72)]));
  _2945 = *(uint64_t*)_2944;
  _2946 = *(void**)_2908;
  _2947 = *(uint64_t*)(((&((uint8_t*)_2946)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2908)[((int64_t)48)]))) = _2941;
  *(uint64_t*)_2940 = _2943;
  *(uint64_t*)_2942 = _2945;
  *(uint64_t*)_2944 = _2947;
  julia_emit_4484((&_2909), _2907, _2908, 71, 1);
  _2948__PHI_TEMPORARY = (&_2909);   /* for PHI node */
  goto _2958;

_2958:
  _2948 = _2948__PHI_TEMPORARY;
  _2949 = memcpy(_2906, _2948, 32);
  return;
_2951:
  julia_emit_4484((&_2910), _2907, _2908, 674, 1);
  _2948__PHI_TEMPORARY = (&_2910);   /* for PHI node */
  goto _2958;

}


static void julia_lex_whitespace_4623(void* _2959, void* _2960, void* _2961, uint32_t _2962) {
  struct l_array_4_uint64_t _2963;    /* Address-exposed local */
  uint16_t _2964;
  uint16_t _2964__PHI_TEMPORARY;
  uint32_t _2965;
  uint32_t _2965__PHI_TEMPORARY;
  uint16_t _2966;
  void* _2967;
  uint64_t _2968;
  uint64_t _2969;
  void* _2970;
  uint64_t _2971;
  uint32_t _2972;
  uint64_t _2973;
  uint32_t _2974;
  uint64_t _2975;
  uint32_t _2976;
  uint32_t _2977;
  uint64_t _2978;
  bool _2979;
  bool _2980;
  uint32_t _2981;
  uint32_t _2982;
  uint32_t _2983;
  bool _2984;
  bool _2984__PHI_TEMPORARY;
  void* _2985;
  void* _2986;
  uint64_t _2987;
  void* _2988;
  uint64_t _2989;
  void* _2990;
  uint8_t _2991;
  uint8_t _2992;
  uint8_t _2993;
  uint32_t _2994;
  uint64_t _2995;
  uint64_t _2995__PHI_TEMPORARY;
  uint32_t _2996;
  uint32_t _2996__PHI_TEMPORARY;
  uint64_t _2997;
  uint64_t _2998;
  void* _2999;
  uint8_t _3000;
  uint32_t _3001;
  uint64_t _3002;
  uint64_t _3003;
  uint32_t _3004;
  uint64_t _3005;
  uint32_t _3006;
  uint32_t _3006__PHI_TEMPORARY;
  uint64_t _3007;
  uint64_t _3008;
  uint64_t _3009;
  uint64_t _3010;
  void* _3011;
  uint64_t _3012;
  void* _3013;
  uint64_t _3014;
  void* _3015;
  uint64_t _3016;
  void* _3017;
  uint64_t _3018;
  uint64_t _3019;
  uint32_t _3020;
  void* _3021;

  _2964__PHI_TEMPORARY = 1;   /* for PHI node */
  _2965__PHI_TEMPORARY = _2962;   /* for PHI node */
  goto _3022;

  do {     /* Syntactic loop '' to make GCC happy */
_3022:
  _2964 = _2964__PHI_TEMPORARY;
  _2965 = _2965__PHI_TEMPORARY;
  _2966 = llvm_select_u16((_2965 == 167772160u), 2, _2964);
  _2967 = ((&((uint8_t*)_2961)[((int64_t)32)]));
  _2968 = *(uint64_t*)_2967;
  _2969 = ((uint64_t)_2968);
  _2970 = ((&((uint8_t*)_2961)[((int64_t)40)]));
  _2971 = llvm_lshr_u64(_2969, 32);
  _2972 = ((uint32_t)_2971);
  _2973 = *(uint64_t*)_2970;
  _2974 = llvm_OC_ctlz_OC_i32((_2972 ^ -1), 0);
  _2975 = ((uint64_t)(uint32_t)_2974);
  _2976 = llvm_OC_cttz_OC_i32(_2972, 0);
  _2977 = _2976 & 56;
  _2978 = ((uint64_t)(uint32_t)_2977);
  _2979 = ((_2974 == 1u) | (((uint64_t)(llvm_add_u64((_2975 << 3), _2978))) > ((uint64_t)UINT64_C(32)))) | (llvm_select_bool((((uint32_t)_2976) < ((uint32_t)32u)), ((llvm_lshr_u32(((_2972 & 12632256) ^ 8421504), _2977)) != 0u), 0));
  _2980 = (((_2972 & -33554432) == 3221225472u) | ((_2972 & -2097152) == 3766484992u)) | ((_2972 & -1048576) == 4034920448u);
  if (((_2980 | (((((uint64_t)_2969) > ((uint64_t)UINT64_C(17122614315006820351))) & (_2971 != UINT64_C(3986669312))) & (((((uint64_t)_2969) < ((uint64_t)UINT64_C(17185876919829135360))) & (_2971 != UINT64_C(4001398784))) | ((((uint64_t)_2969) > ((uint64_t)UINT64_C(17622514693983698943))) & (_2971 != UINT64_C(4103061439)))))) | _2979)) {
    _2984__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3023;
  } else {
    goto _3024;
  }

_3024:
  if ((_2971 == UINT64_C(536870912))) {
    _2984__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3023;
  } else {
    goto _3025;
  }

_3025:
  if (((((uint64_t)_2969) < ((uint64_t)UINT64_C(648518350636318720))) & (_2971 != UINT64_C(150994944)))) {
    goto _3026;
  } else {
    goto _3027;
  }

_3027:
  if ((((uint64_t)_2969) < ((uint64_t)UINT64_C(936748722493063168)))) {
    _2984__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3023;
  } else {
    goto _3028;
  }

_3028:
  switch ((((uint32_t)_2971))) {
  default:
    goto _3029;
  case 3263496192u:
    _2984__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3023;
  case 218103808u:
    _2984__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3023;
  }

_3026:
  if ((_2971 == UINT64_C(3263496192))) {
    _2984__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3023;
  } else {
    goto _3029;
  }

_3029:
  if ((((((uint64_t)_2969) < ((uint64_t)UINT64_C(14024209243926691840))) & (_2971 != UINT64_C(3265265664))) | _2979)) {
    _2984__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3023;
  } else {
    goto _3030;
  }

_3030:
  if (((((uint64_t)(llvm_add_u64((_2975 << 3), _2978))) > ((uint64_t)UINT64_C(32))) | _2980)) {
    goto _3031;
  } else {
    goto _3032;
  }

_3032:
  _2981 = llvm_select_u32((((uint32_t)_2976) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_2971 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _2974)))) & _2972), _2977)), 0);
  _2982 = (((_2981 & 127) | ((llvm_lshr_u32(_2981, 2)) & 8128)) | ((llvm_lshr_u32(_2981, 4)) & 520192)) | ((llvm_lshr_u32(_2981, 6)) & 33292288);
  if ((((uint32_t)_2982) > ((uint32_t)1114111u))) {
    _2984__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3023;
  } else {
    goto _3033;
  }

_3033:
  _2983 = jsk_utf8proc_category(_2982);
  _2984__PHI_TEMPORARY = (_2983 == 23u);   /* for PHI node */
  goto _3023;

_3023:
  _2984 = _2984__PHI_TEMPORARY;
  if ((_2984 | (_2971 == UINT64_C(4022058752)))) {
    goto _3034;
  } else {
    goto _3035;
  }

_3034:
  if ((_2966 == ((uint16_t)2))) {
    goto _3036;
  } else {
    goto _3037;
  }

_3036:
  if ((_2971 == UINT64_C(167772160))) {
    goto _3035;
  } else {
    goto _3038;
  }

_3038:
  if ((llvm_select_bool((_2971 != UINT64_C(218103808)), 1, ((_2973 & INT64_C(4294967295)) != UINT64_C(167772160))))) {
    goto _3037;
  } else {
    goto _3035;
  }

_3037:
  _2985 = *(void**)_2961;
  _2986 = ((&((uint8_t*)_2985)[((int64_t)16)]));
  _2987 = *(uint64_t*)_2986;
  _2988 = ((&((uint8_t*)_2985)[((int64_t)8)]));
  _2989 = *(uint64_t*)_2988;
  if ((((int64_t)_2989) > ((int64_t)_2987))) {
    goto _3039;
  } else {
    _3006__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3040;
  }

_3039:
  _2990 = *(void**)_2985;
  _2991 = *(uint8_t*)(((&((uint8_t*)_2990)[((int64_t)_2987)])));
  *(uint64_t*)_2986 = (llvm_add_u64(_2987, 1));
  _2992 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_2991)), 0);
  _2993 = llvm_sub_u8(32, (llvm_shl_u8(_2992, 3)));
  _2994 = (((uint32_t)(uint8_t)_2991)) << 24;
  if ((((uint8_t)_2993) > ((uint8_t)((uint8_t)16)))) {
    _3006__PHI_TEMPORARY = _2994;   /* for PHI node */
    goto _3040;
  } else {
    _2995__PHI_TEMPORARY = 16;   /* for PHI node */
    _2996__PHI_TEMPORARY = _2994;   /* for PHI node */
    goto _3041;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3041:
  _2995 = _2995__PHI_TEMPORARY;
  _2996 = _2996__PHI_TEMPORARY;
  if (((((int64_t)_2995) < ((int64_t)UINT64_C(0))) | (((uint64_t)_2995) < ((uint64_t)(((uint64_t)(uint8_t)_2993)))))) {
    _3006__PHI_TEMPORARY = _2996;   /* for PHI node */
    goto _3040;
  } else {
    goto _3042;
  }

_3042:
  _2997 = *(uint64_t*)_2986;
  _2998 = *(uint64_t*)_2988;
  if ((((int64_t)_2998) > ((int64_t)_2997))) {
    goto _3043;
  } else {
    _3006__PHI_TEMPORARY = _2996;   /* for PHI node */
    goto _3040;
  }

_3043:
  _2999 = *(void**)_2985;
  _3000 = *(uint8_t*)(((&((uint8_t*)_2999)[((int64_t)_2997)])));
  if ((((int8_t)_3000) > ((int8_t)((uint8_t)-65)))) {
    _3006__PHI_TEMPORARY = _2996;   /* for PHI node */
    goto _3040;
  } else {
    goto _3044;
  }

_3044:
  _3001 = llvm_select_u32((((int64_t)_2997) < ((int64_t)_2998)), (((uint32_t)(uint8_t)_3000)), 0);
  _3002 = *(uint64_t*)_2986;
  *(uint64_t*)_2986 = (llvm_add_u64(_3002, 1));
  _3003 = llvm_neg_u64(_2995);
  _3004 = _2996 | (llvm_select_u32((((int64_t)_2995) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3003) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3001, (((uint32_t)_3003)))))), (llvm_select_u32((((uint64_t)_2995) > ((uint64_t)UINT64_C(31))), 0, (_3001 << (((uint32_t)_2995)))))));
  _3005 = llvm_add_u64(_2995, -8);
  _2995__PHI_TEMPORARY = _3005;   /* for PHI node */
  _2996__PHI_TEMPORARY = _3004;   /* for PHI node */
  goto _3041;

  } while (1); /* end of syntactic loop '' */
_3040:
  _3006 = _3006__PHI_TEMPORARY;
  _3007 = *(uint64_t*)_2967;
  _3008 = *(uint64_t*)_2970;
  _3009 = jsyn_cbe_fshl_i64(_3008, _3007, 32);
  _3010 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3006)), _3008, 32);
  *(uint64_t*)_2967 = _3009;
  *(uint64_t*)_2970 = _3010;
  _3011 = ((&((uint8_t*)_2961)[((int64_t)56)]));
  _3012 = *(uint64_t*)_3011;
  _3013 = ((&((uint8_t*)_2961)[((int64_t)64)]));
  _3014 = *(uint64_t*)_3013;
  _3015 = ((&((uint8_t*)_2961)[((int64_t)72)]));
  _3016 = *(uint64_t*)_3015;
  _3017 = *(void**)_2961;
  _3018 = *(uint64_t*)(((&((uint8_t*)_3017)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_2961)[((int64_t)48)]))) = _3012;
  *(uint64_t*)_3011 = _3014;
  *(uint64_t*)_3013 = _3016;
  *(uint64_t*)_3015 = _3018;
  _3019 = *(uint64_t*)_2967;
  _3020 = ((uint32_t)_3019);
  _2964__PHI_TEMPORARY = _2966;   /* for PHI node */
  _2965__PHI_TEMPORARY = _3020;   /* for PHI node */
  goto _3022;

  } while (1); /* end of syntactic loop '' */
_3031:
  julia_throw_invalid_char_2796(_2960, _2972);
  __builtin_unreachable();

_3035:
  julia_emit_4484((&_2963), _2960, _2961, _2966, 1);
  _3021 = memcpy(_2959, (&_2963), 32);
}


static __noreturn void julia_throw_inexacterror_2498(void* _3045, void* _3046, void* _3047, int64_t _3048) {
  jsk_throw();
  __builtin_unreachable();

}


static __noreturn void julia_throw_invalid_char_2796(void* _3049, uint32_t _3050) {
  jsk_throw();
  __builtin_unreachable();

}


static struct l_array_1_void_KC_ julia_AssertionError_2940(void* _3051, void* _3052) {
  struct l_array_1_void_KC_ _3053;

  _3053 = llvm_ctor_ptra1(((void*)/*NULL*/0));
  _3053.array[0] = _3052;
  return _3053;
}


static void julia__next_token_4450(void* _3054, void* _3055, void* _3056, uint32_t _3057) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _3058 __POSTFIXALIGN__(16);    /* Address-exposed local */
  uint32_t _3059;
  void* _3060;
  void* _3061;
  struct l_array_4_uint64_t _3062;    /* Address-exposed local */
  struct l_array_4_uint64_t _3063;    /* Address-exposed local */
  struct l_array_4_uint64_t _3064;    /* Address-exposed local */
  struct l_array_4_uint64_t _3065;    /* Address-exposed local */
  struct l_array_4_uint64_t _3066;    /* Address-exposed local */
  struct l_array_4_uint64_t _3067;    /* Address-exposed local */
  struct l_array_4_uint64_t _3068;    /* Address-exposed local */
  struct l_array_4_uint64_t _3069;    /* Address-exposed local */
  struct l_array_4_uint64_t _3070;    /* Address-exposed local */
  struct l_array_4_uint64_t _3071;    /* Address-exposed local */
  struct l_array_4_uint64_t _3072;    /* Address-exposed local */
  struct l_array_4_uint64_t _3073;    /* Address-exposed local */
  struct l_array_4_uint64_t _3074;    /* Address-exposed local */
  struct l_array_4_uint64_t _3075;    /* Address-exposed local */
  struct l_array_4_uint64_t _3076;    /* Address-exposed local */
  struct l_array_4_uint64_t _3077;    /* Address-exposed local */
  struct l_array_4_uint64_t _3078;    /* Address-exposed local */
  struct l_array_4_uint64_t _3079;    /* Address-exposed local */
  struct l_array_4_uint64_t _3080;    /* Address-exposed local */
  struct l_array_4_uint64_t _3081;    /* Address-exposed local */
  struct l_array_4_uint64_t _3082;    /* Address-exposed local */
  struct l_array_4_uint64_t _3083;    /* Address-exposed local */
  struct l_array_4_uint64_t _3084;    /* Address-exposed local */
  struct l_array_4_uint64_t _3085;    /* Address-exposed local */
  struct l_array_4_uint64_t _3086;    /* Address-exposed local */
  struct l_array_4_uint64_t _3087;    /* Address-exposed local */
  struct l_array_4_uint64_t _3088;    /* Address-exposed local */
  struct l_array_4_uint64_t _3089;    /* Address-exposed local */
  struct l_array_4_uint64_t _3090;    /* Address-exposed local */
  struct l_array_4_uint64_t _3091;    /* Address-exposed local */
  struct l_array_4_uint64_t _3092;    /* Address-exposed local */
  struct l_array_4_uint64_t _3093;    /* Address-exposed local */
  struct l_array_4_uint64_t _3094;    /* Address-exposed local */
  struct l_array_4_uint64_t _3095;    /* Address-exposed local */
  struct l_array_4_uint64_t _3096;    /* Address-exposed local */
  struct l_array_4_uint64_t _3097;    /* Address-exposed local */
  struct l_array_4_uint64_t _3098;    /* Address-exposed local */
  struct l_array_4_uint64_t _3099;    /* Address-exposed local */
  struct l_array_4_uint64_t _3100;    /* Address-exposed local */
  struct l_array_4_uint64_t _3101;    /* Address-exposed local */
  void* _3102;
  void* _3102__PHI_TEMPORARY;
  void* _3103;
  void* _3104;
  uint32_t _3105;
  uint64_t _3106;
  uint32_t _3107;
  uint32_t _3108;
  uint64_t _3109;
  bool _3110;
  bool _3111;
  uint32_t _3112;
  bool _3113;
  bool _3114;
  uint32_t _3115;
  uint32_t _3116;
  uint32_t _3117;
  bool _3118;
  bool _3118__PHI_TEMPORARY;
  void* _3119;
  uint16_t _3120;
  uint16_t _3121;
  void* _3122;
  void* _3123;
  void* _3124;
  void* _3125;
  uint64_t _3126;
  uint64_t _3127;
  void* _3128;
  uint64_t _3129;
  void* _3130;
  void* _3131;
  uint8_t _3132;
  uint8_t _3132__PHI_TEMPORARY;
  void* _3133;
  uint64_t _3134;
  void* _3135;
  void* _3136;
  void* _3137;
  uint64_t _3138;
  void* _3139;
  uint64_t _3140;
  void* _3141;
  uint8_t _3142;
  uint8_t _3143;
  uint8_t _3144;
  uint32_t _3145;
  uint64_t _3146;
  uint64_t _3146__PHI_TEMPORARY;
  uint32_t _3147;
  uint32_t _3147__PHI_TEMPORARY;
  uint64_t _3148;
  uint64_t _3149;
  void* _3150;
  uint8_t _3151;
  uint32_t _3152;
  uint64_t _3153;
  uint64_t _3154;
  uint32_t _3155;
  uint64_t _3156;
  uint32_t _3157;
  uint32_t _3157__PHI_TEMPORARY;
  uint64_t _3158;
  uint64_t _3159;
  uint64_t _3160;
  uint64_t _3161;
  void* _3162;
  uint64_t _3163;
  void* _3164;
  uint64_t _3165;
  void* _3166;
  uint64_t _3167;
  void* _3168;
  uint64_t _3169;
  uint16_t _3170;
  uint16_t _3170__PHI_TEMPORARY;
  uint32_t _3171;
  uint32_t _3172;
  uint32_t _3173;
  uint32_t _3173__PHI_TEMPORARY;
  uint32_t _3174;
  uint64_t _3175;
  uint64_t _3175__PHI_TEMPORARY;
  uint64_t _3176;
  uint64_t _3176__PHI_TEMPORARY;
  uint64_t _3177;
  uint64_t _3178;
  uint32_t _3179;
  uint64_t _3180;
  uint64_t _3181;
  uint16_t _3182;
  uint16_t _3182__PHI_TEMPORARY;
  uint32_t _3183;
  uint32_t _3184;
  uint32_t _3185;
  uint32_t _3185__PHI_TEMPORARY;
  uint32_t _3186;
  uint16_t _3187;
  uint16_t _3188;
  uint16_t _3188__PHI_TEMPORARY;
  uint16_t _3189;

  _3059 = ((uint32_t)_3057);
  _3060 = memset((&_3058), 0, 24);
  *((uint64_t*)&_3058) = 4;
  _3061 = *(void**)_3055;
  *(void**)(((&((uint8_t*)(&_3058))[((int64_t)8)]))) = _3061;
  *(void**)_3055 = (&_3058);
  if ((_3059 == 4294967295u)) {
    goto _3190;
  } else {
    goto _3191;
  }

_3192:
  _3102 = _3102__PHI_TEMPORARY;
  _3103 = memcpy(_3054, _3102, 32);
  _3104 = *(void**)(((&((uint8_t*)(&_3058))[((int64_t)8)])));
  *(void**)_3055 = _3104;
  return;
_3190:
  julia_emit_4484((&_3062), _3055, _3056, 752, 1);
  _3102__PHI_TEMPORARY = (&_3062);   /* for PHI node */
  goto _3192;

_3191:
  _3105 = llvm_OC_ctlz_OC_i32((_3059 ^ -1), 0);
  _3106 = ((uint64_t)(uint32_t)_3105);
  _3107 = llvm_OC_cttz_OC_i32(_3059, 0);
  _3108 = _3107 & 56;
  _3109 = ((uint64_t)(uint32_t)_3108);
  _3110 = llvm_select_bool((((uint32_t)_3107) < ((uint32_t)32u)), ((llvm_lshr_u32(((_3059 & 12632256) ^ 8421504), _3108)) != 0u), 0);
  _3111 = ((_3105 == 1u) | (((uint64_t)(llvm_add_u64((_3106 << 3), _3109))) > ((uint64_t)UINT64_C(32)))) | _3110;
  _3112 = llvm_lshr_u32(_3059, 24);
  _3113 = (((_3059 & -33554432) == 3221225472u) | ((_3059 & -2097152) == 3766484992u)) | ((_3059 & -1048576) == 4034920448u);
  _3114 = ((((uint32_t)_3059) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_3059, 293568512))) < ((uint32_t)101662656u))) & ((_3111 | _3113) ^ 1);
  if (_3114) {
    goto _3193;
  } else {
    _3118__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3194;
  }

_3193:
  if ((((uint32_t)(llvm_add_u32(_3059, -150994944))) < ((uint32_t)67108865u))) {
    _3118__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3194;
  } else {
    goto _3195;
  }

_3195:
  switch (_3059) {
  default:
    goto _3196;
  case 3263496192u:
    _3118__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3194;
  case 536870912u:
    _3118__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3194;
  }

_3196:
  if (((((uint32_t)_3059) < ((uint32_t)3265265664u)) | _3111)) {
    _3118__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3194;
  } else {
    goto _3197;
  }

_3197:
  if (((((uint64_t)(llvm_add_u64((_3106 << 3), _3109))) > ((uint64_t)UINT64_C(32))) | _3113)) {
    goto _3198;
  } else {
    goto _3199;
  }

_3198:
  julia_throw_invalid_char_2796(_3055, _3059);
  __builtin_unreachable();

_3199:
  _3115 = llvm_select_u32((((uint32_t)_3107) < ((uint32_t)32u)), (llvm_lshr_u32((_3059 & (llvm_lshr_u32(-1, _3105))), _3108)), 0);
  _3116 = (((_3115 & 127) | ((llvm_lshr_u32(_3115, 2)) & 8128)) | ((llvm_lshr_u32(_3115, 4)) & 520192)) | ((llvm_lshr_u32(_3115, 6)) & 33292288);
  if ((((uint32_t)_3116) > ((uint32_t)1114111u))) {
    _3118__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3194;
  } else {
    goto _3200;
  }

_3200:
  _3117 = jsk_utf8proc_category(_3116);
  _3118__PHI_TEMPORARY = (_3117 == 23u);   /* for PHI node */
  goto _3194;

_3194:
  _3118 = _3118__PHI_TEMPORARY;
  if ((_3118 | (_3059 == 4022058752u))) {
    goto _3201;
  } else {
    goto _3202;
  }

_3201:
  julia_lex_whitespace_4623((&_3063), _3055, _3056, _3059);
  _3102__PHI_TEMPORARY = (&_3063);   /* for PHI node */
  goto _3192;

_3202:
  switch (_3059) {
  default:
    goto _3203;
  case 1526726656u:
    goto _3204;
  case 1560281088u:
    goto _3205;
  case 2063597568u:
    goto _3206;
  case 989855744u:
    goto _3207;
  case 2097152000u:
    goto _3208;
  case 671088640u:
    goto _3209;
  case 687865856u:
    goto _3210;
  case 738197504u:
    goto _3211;
  case 704643072u:
    goto _3212;
  case 1577058304u:
    goto _3213;
  case 1073741824u:
    goto _3214;
  case 1056964608u:
    goto _3215;
  case 603979776u:
    goto _3216;
  case 3800742656u:
    goto _3217;
  case 2113929216u:
    goto _3218;
  case 587202560u:
    goto _3219;
  case 1023410176u:
    goto _3220;
  case 553648128u:
    goto _3221;
  case 1040187392u:
    goto _3222;
  case 1006632960u:
    goto _3223;
  case 973078528u:
    goto _3224;
  case 2080374784u:
    goto _3225;
  case 637534208u:
    goto _3226;
  case 654311424u:
    goto _3227;
  case 3283550208u:
    goto _3228;
  case 570425344u:
    goto _3229;
  case 620756992u:
    goto _3230;
  case 788529152u:
    goto _3231;
  case 1543503872u:
    goto _3232;
  case 771751936u:
    goto _3233;
  case 721420288u:
    goto _3234;
  case 754974720u:
    goto _3235;
  case 3800601088u:
    goto _3236;
  case 1610612736u:
    goto _3237;
  }

_3204:
  julia_emit_4484((&_3064), _3055, _3056, 56, 1);
  _3102__PHI_TEMPORARY = (&_3064);   /* for PHI node */
  goto _3192;

_3205:
  julia_emit_4484((&_3065), _3055, _3056, 57, 1);
  _3102__PHI_TEMPORARY = (&_3065);   /* for PHI node */
  goto _3192;

_3206:
  julia_emit_4484((&_3066), _3055, _3056, 58, 1);
  _3102__PHI_TEMPORARY = (&_3066);   /* for PHI node */
  goto _3192;

_3207:
  julia_emit_4484((&_3067), _3055, _3056, 55, 1);
  _3102__PHI_TEMPORARY = (&_3067);   /* for PHI node */
  goto _3192;

_3208:
  julia_emit_4484((&_3068), _3055, _3056, 59, 1);
  _3102__PHI_TEMPORARY = (&_3068);   /* for PHI node */
  goto _3192;

_3209:
  julia_emit_4484((&_3069), _3055, _3056, 60, 1);
  _3102__PHI_TEMPORARY = (&_3069);   /* for PHI node */
  goto _3192;

_3210:
  julia_emit_4484((&_3070), _3055, _3056, 61, 1);
  _3102__PHI_TEMPORARY = (&_3070);   /* for PHI node */
  goto _3192;

_3211:
  julia_emit_4484((&_3071), _3055, _3056, 54, 1);
  _3102__PHI_TEMPORARY = (&_3071);   /* for PHI node */
  goto _3192;

_3212:
  julia_lex_star_4619((&_3072), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3072);   /* for PHI node */
  goto _3192;

_3213:
  julia_lex_circumflex_4615((&_3073), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3073);   /* for PHI node */
  goto _3192;

_3214:
  julia_emit_4484((&_3074), _3055, _3056, 53, 1);
  _3102__PHI_TEMPORARY = (&_3074);   /* for PHI node */
  goto _3192;

_3215:
  julia_emit_4484((&_3075), _3055, _3056, 79, 1);
  _3102__PHI_TEMPORARY = (&_3075);   /* for PHI node */
  goto _3192;

_3216:
  julia_lex_dollar_4611((&_3076), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3076);   /* for PHI node */
  goto _3192;

_3217:
  julia_lex_xor_4607((&_3077), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3077);   /* for PHI node */
  goto _3192;

_3218:
  julia_emit_4484((&_3078), _3055, _3056, 74, 1);
  _3102__PHI_TEMPORARY = (&_3078);   /* for PHI node */
  goto _3192;

_3219:
  julia_lex_comment_4603((&_3079), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3079);   /* for PHI node */
  goto _3192;

_3220:
  julia_lex_equal_4599((&_3080), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3080);   /* for PHI node */
  goto _3192;

_3221:
  julia_lex_exclaim_4595((&_3081), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3081);   /* for PHI node */
  goto _3192;

_3222:
  julia_lex_greater_4591((&_3082), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3082);   /* for PHI node */
  goto _3192;

_3223:
  julia_lex_less_4587((&_3083), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3083);   /* for PHI node */
  goto _3192;

_3224:
  julia_lex_colon_4583((&_3084), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3084);   /* for PHI node */
  goto _3192;

_3225:
  julia_lex_bar_4579((&_3085), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3085);   /* for PHI node */
  goto _3192;

_3226:
  julia_lex_amper_4575((&_3086), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3086);   /* for PHI node */
  goto _3192;

_3227:
  _3119 = ((&((uint8_t*)_3056)[((int64_t)16)]));
  _3120 = *(uint16_t*)_3119;
  if (((_3120 != ((uint16_t)3)) & (((uint16_t)(llvm_add_u16(_3120, -43))) < ((uint16_t)((uint16_t)-9))))) {
    goto _3238;
  } else {
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  }

_3238:
  switch (_3120) {
  default:
    goto _3240;
  case ((uint16_t)252):
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  case ((uint16_t)253):
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  case ((uint16_t)706):
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  }

_3240:
  _3121 = *(uint16_t*)_3119;
  switch (_3121) {
  default:
    goto _3241;
  case ((uint16_t)707):
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  case ((uint16_t)61):
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  case ((uint16_t)57):
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  case ((uint16_t)59):
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  case ((uint16_t)709):
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  case ((uint16_t)33):
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  }

_3241:
  if ((((uint16_t)(llvm_add_u16(_3121, -53))) < ((uint16_t)((uint16_t)-10)))) {
    goto _3242;
  } else {
    _3132__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3239;
  }

_3242:
  _3122 = *(void**)(((&((uint8_t*)_3056)[((int64_t)24)])));
  _3123 = *(void**)_3122;
  _3124 = *(void**)(((&((uint8_t*)_3122)[((int64_t)8)])));
  _3125 = ((&((uint8_t*)_3122)[((int64_t)16)]));
  _3126 = *(uint64_t*)_3125;
  _3127 = llvm_add_u64(_3126, 1);
  _3128 = *(void**)(((&((uint8_t*)_3124)[((int64_t)8)])));
  _3129 = *(uint64_t*)_3124;
  if ((((int64_t)_3129) < ((int64_t)(llvm_add_u64((llvm_add_u64((llvm_lshr_u64((llvm_sub_u64((((uint64_t)(uintptr_t)_3123)), (((uint64_t)(uintptr_t)_3128)))), 4)), 1)), _3126))))) {
    goto _3243;
  } else {
    goto _3244;
  }

_3243:
  *(void**)(((&((uint8_t*)(&_3058))[((int64_t)16)]))) = _3122;
  julia__growend_internalNOT_OC__4533(_3055, _3122, 1, _3126);
  goto _3244;

_3244:
  *(uint64_t*)_3125 = _3127;
  _3130 = *(void**)_3122;
  _3131 = memcpy((((&((uint8_t*)_3130)[((int64_t)(_3126 << 4))]))), (&_j_constYY_OC_134), 16);
  _3132__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _3239;

_3239:
  _3132 = _3132__PHI_TEMPORARY;
  julia_emit_4484((&_3087), _3055, _3056, 709, _3132);
  _3102__PHI_TEMPORARY = (&_3087);   /* for PHI node */
  goto _3192;

_3228:
  julia_lex_division_4571((&_3088), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3088);   /* for PHI node */
  goto _3192;

_3229:
  julia_lex_quote_4566((&_3089), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3089);   /* for PHI node */
  goto _3192;

_3230:
  julia_lex_percent_4562((&_3090), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3090);   /* for PHI node */
  goto _3192;

_3231:
  julia_lex_forwardslash_4558((&_3091), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3091);   /* for PHI node */
  goto _3192;

_3232:
  julia_lex_backslash_4554((&_3092), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3092);   /* for PHI node */
  goto _3192;

_3233:
  julia_lex_dot_4548((&_3093), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3093);   /* for PHI node */
  goto _3192;

_3234:
  julia_lex_plus_4544((&_3094), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3094);   /* for PHI node */
  goto _3192;

_3235:
  julia_lex_minus_4540((&_3095), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3095);   /* for PHI node */
  goto _3192;

_3236:
  _3133 = ((&((uint8_t*)_3056)[((int64_t)32)]));
  _3134 = *(uint64_t*)_3133;
  _3135 = ((&((uint8_t*)_3056)[((int64_t)40)]));
  if (((_3134 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _3245;
  } else {
    _3170__PHI_TEMPORARY = 536;   /* for PHI node */
    goto _3246;
  }

_3245:
  _3136 = *(void**)_3056;
  _3137 = ((&((uint8_t*)_3136)[((int64_t)16)]));
  _3138 = *(uint64_t*)_3137;
  _3139 = ((&((uint8_t*)_3136)[((int64_t)8)]));
  _3140 = *(uint64_t*)_3139;
  if ((((int64_t)_3140) > ((int64_t)_3138))) {
    goto _3247;
  } else {
    _3157__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3248;
  }

_3247:
  _3141 = *(void**)_3136;
  _3142 = *(uint8_t*)(((&((uint8_t*)_3141)[((int64_t)_3138)])));
  *(uint64_t*)_3137 = (llvm_add_u64(_3138, 1));
  _3143 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3142)), 0);
  _3144 = llvm_sub_u8(32, (llvm_shl_u8(_3143, 3)));
  _3145 = (((uint32_t)(uint8_t)_3142)) << 24;
  if ((((uint8_t)_3144) > ((uint8_t)((uint8_t)16)))) {
    _3157__PHI_TEMPORARY = _3145;   /* for PHI node */
    goto _3248;
  } else {
    _3146__PHI_TEMPORARY = 16;   /* for PHI node */
    _3147__PHI_TEMPORARY = _3145;   /* for PHI node */
    goto _3249;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3249:
  _3146 = _3146__PHI_TEMPORARY;
  _3147 = _3147__PHI_TEMPORARY;
  if (((((int64_t)_3146) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3146) < ((uint64_t)(((uint64_t)(uint8_t)_3144)))))) {
    _3157__PHI_TEMPORARY = _3147;   /* for PHI node */
    goto _3248;
  } else {
    goto _3250;
  }

_3250:
  _3148 = *(uint64_t*)_3137;
  _3149 = *(uint64_t*)_3139;
  if ((((int64_t)_3149) > ((int64_t)_3148))) {
    goto _3251;
  } else {
    _3157__PHI_TEMPORARY = _3147;   /* for PHI node */
    goto _3248;
  }

_3251:
  _3150 = *(void**)_3136;
  _3151 = *(uint8_t*)(((&((uint8_t*)_3150)[((int64_t)_3148)])));
  if ((((int8_t)_3151) > ((int8_t)((uint8_t)-65)))) {
    _3157__PHI_TEMPORARY = _3147;   /* for PHI node */
    goto _3248;
  } else {
    goto _3252;
  }

_3252:
  _3152 = llvm_select_u32((((int64_t)_3148) < ((int64_t)_3149)), (((uint32_t)(uint8_t)_3151)), 0);
  _3153 = *(uint64_t*)_3137;
  *(uint64_t*)_3137 = (llvm_add_u64(_3153, 1));
  _3154 = llvm_neg_u64(_3146);
  _3155 = _3147 | (llvm_select_u32((((int64_t)_3146) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3154) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3152, (((uint32_t)_3154)))))), (llvm_select_u32((((uint64_t)_3146) > ((uint64_t)UINT64_C(31))), 0, (_3152 << (((uint32_t)_3146)))))));
  _3156 = llvm_add_u64(_3146, -8);
  _3146__PHI_TEMPORARY = _3156;   /* for PHI node */
  _3147__PHI_TEMPORARY = _3155;   /* for PHI node */
  goto _3249;

  } while (1); /* end of syntactic loop '' */
_3248:
  _3157 = _3157__PHI_TEMPORARY;
  _3158 = *(uint64_t*)_3133;
  _3159 = *(uint64_t*)_3135;
  _3160 = jsyn_cbe_fshl_i64(_3159, _3158, 32);
  _3161 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3157)), _3159, 32);
  *(uint64_t*)_3133 = _3160;
  *(uint64_t*)_3135 = _3161;
  _3162 = ((&((uint8_t*)_3056)[((int64_t)56)]));
  _3163 = *(uint64_t*)_3162;
  _3164 = ((&((uint8_t*)_3056)[((int64_t)64)]));
  _3165 = *(uint64_t*)_3164;
  _3166 = ((&((uint8_t*)_3056)[((int64_t)72)]));
  _3167 = *(uint64_t*)_3166;
  _3168 = *(void**)_3056;
  _3169 = *(uint64_t*)(((&((uint8_t*)_3168)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3056)[((int64_t)48)]))) = _3163;
  *(uint64_t*)_3162 = _3165;
  *(uint64_t*)_3164 = _3167;
  *(uint64_t*)_3166 = _3169;
  _3170__PHI_TEMPORARY = 71;   /* for PHI node */
  goto _3246;

_3246:
  _3170 = _3170__PHI_TEMPORARY;
  julia_emit_4484((&_3096), _3055, _3056, _3170, 1);
  _3102__PHI_TEMPORARY = (&_3096);   /* for PHI node */
  goto _3192;

_3237:
  julia_lex_backtick_4528((&_3097), _3055, _3056);
  _3102__PHI_TEMPORARY = (&_3097);   /* for PHI node */
  goto _3192;

_3203:
  if ((_3114 & (_3059 != 4036993714u))) {
    goto _3253;
  } else {
    goto _3254;
  }

_3253:
  if ((((int32_t)_3059) < ((int32_t)0u))) {
    goto _3255;
  } else {
    _3173__PHI_TEMPORARY = _3112;   /* for PHI node */
    goto _3256;
  }

_3255:
  if ((((_3105 == 1u) | (((uint64_t)(llvm_add_u64((_3106 << 3), _3109))) > ((uint64_t)UINT64_C(32)))) | (_3110 | _3113))) {
    goto _3257;
  } else {
    goto _3258;
  }

_3257:
  julia_throw_invalid_char_2796(_3055, _3059);
  __builtin_unreachable();

_3258:
  _3171 = llvm_select_u32((((uint32_t)_3107) < ((uint32_t)32u)), (llvm_lshr_u32((_3059 & (llvm_lshr_u32(-1, _3105))), _3108)), 0);
  _3172 = (((_3171 & 127) | ((llvm_lshr_u32(_3171, 2)) & 8128)) | ((llvm_lshr_u32(_3171, 4)) & 520192)) | ((llvm_lshr_u32(_3171, 6)) & 33292288);
  _3173__PHI_TEMPORARY = _3172;   /* for PHI node */
  goto _3256;

_3256:
  _3173 = _3173__PHI_TEMPORARY;
  _3174 = jsk_jl_id_start_char(_3173);
  if ((_3174 == 0u)) {
    goto _3254;
  } else {
    goto _3259;
  }

_3259:
  julia_lex_identifier_4521((&_3098), _3055, _3056, _3059);
  _3102__PHI_TEMPORARY = (&_3098);   /* for PHI node */
  goto _3192;

_3254:
  if ((((uint32_t)(llvm_add_u32(_3059, -956301313))) < ((uint32_t)4143972351u))) {
    _3175__PHI_TEMPORARY = 597;   /* for PHI node */
    _3176__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3260;
  } else {
    goto _3261;
  }

_3261:
  julia_lex_digit_4491((&_3099), _3055, _3056, 44);
  _3102__PHI_TEMPORARY = (&_3099);   /* for PHI node */
  goto _3192;

  do {     /* Syntactic loop '' to make GCC happy */
_3260:
  _3175 = _3175__PHI_TEMPORARY;
  _3176 = _3176__PHI_TEMPORARY;
  if ((((int64_t)_3176) > ((int64_t)_3175))) {
    _3182__PHI_TEMPORARY = 751;   /* for PHI node */
    goto _3262;
  } else {
    goto _3263;
  }

_3263:
  _3177 = llvm_lshr_u64((llvm_add_u64(_3176, _3175)), 1);
  _3178 = llvm_add_u64(_3177, -1);
  _3179 = *(uint32_t*)(((&((uint32_t*)(&_j_constYY_OC_135))[((int64_t)_3178)])));
  if ((_3179 == _3059)) {
    goto _3264;
  } else {
    goto _3265;
  }

_3265:
  _3180 = llvm_select_u64((((uint32_t)_3179) < ((uint32_t)_3059)), _3175, _3178);
  _3181 = llvm_select_u64((((uint32_t)_3179) < ((uint32_t)_3059)), (llvm_add_u64(_3177, 1)), _3176);
  _3175__PHI_TEMPORARY = _3180;   /* for PHI node */
  _3176__PHI_TEMPORARY = _3181;   /* for PHI node */
  goto _3260;

  } while (1); /* end of syntactic loop '' */
_3262:
  _3182 = _3182__PHI_TEMPORARY;
  if ((_3182 == ((uint16_t)751))) {
    goto _3266;
  } else {
    goto _3267;
  }

_3267:
  julia_emit_4484((&_3100), _3055, _3056, _3182, 1);
  _3102__PHI_TEMPORARY = (&_3100);   /* for PHI node */
  goto _3192;

_3266:
  if (_3114) {
    goto _3268;
  } else {
    _3188__PHI_TEMPORARY = 762;   /* for PHI node */
    goto _3269;
  }

_3268:
  switch (_3059) {
  default:
    goto _3270;
  case 3266117632u:
    _3188__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _3269;
  case 3800075008u:
    _3188__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _3269;
  case 3800075264u:
    _3188__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _3269;
  case 3800075520u:
    _3188__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _3269;
  case 3800075776u:
    _3188__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _3269;
  case 3800076032u:
    _3188__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _3269;
  case 3800145920u:
    _3188__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _3269;
  case 3800146176u:
    _3188__PHI_TEMPORARY = 763;   /* for PHI node */
    goto _3269;
  }

_3270:
  if ((((int32_t)_3059) < ((int32_t)0u))) {
    goto _3271;
  } else {
    _3185__PHI_TEMPORARY = _3112;   /* for PHI node */
    goto _3272;
  }

_3271:
  if ((((_3105 == 1u) | (((uint64_t)(llvm_add_u64((_3106 << 3), _3109))) > ((uint64_t)UINT64_C(32)))) | (_3110 | _3113))) {
    goto _3273;
  } else {
    goto _3274;
  }

_3273:
  julia_throw_invalid_char_2796(_3055, _3059);
  __builtin_unreachable();

_3274:
  _3183 = llvm_select_u32((((uint32_t)_3107) < ((uint32_t)32u)), (llvm_lshr_u32((_3059 & (llvm_lshr_u32(-1, _3105))), _3108)), 0);
  _3184 = (((_3183 & 127) | ((llvm_lshr_u32(_3183, 2)) & 8128)) | ((llvm_lshr_u32(_3183, 4)) & 520192)) | ((llvm_lshr_u32(_3183, 6)) & 33292288);
  _3185__PHI_TEMPORARY = _3184;   /* for PHI node */
  goto _3272;

_3272:
  _3185 = _3185__PHI_TEMPORARY;
  _3186 = jsk_jl_id_char(_3185);
  _3187 = llvm_select_u16((_3186 == 0u), 765, 764);
  _3188__PHI_TEMPORARY = _3187;   /* for PHI node */
  goto _3269;

_3269:
  _3188 = _3188__PHI_TEMPORARY;
  julia_emit_4484((&_3101), _3055, _3056, _3188, 1);
  _3102__PHI_TEMPORARY = (&_3101);   /* for PHI node */
  goto _3192;

_3264:
  _3189 = *(uint16_t*)(((&((uint16_t*)(((&((uint8_t*)(&_j_constYY_OC_135))[((int64_t)2388)]))))[((int64_t)_3178)])));
  _3182__PHI_TEMPORARY = _3189;   /* for PHI node */
  goto _3262;

}


static void julia_emit_4484(void* _3275, void* _3276, void* _3277, uint16_t _3278, uint8_t _3279) {
  bool _3280;
  bool _3280__PHI_TEMPORARY;
  uint8_t _3281;
  uint8_t _3281__PHI_TEMPORARY;
  void* _3282;
  uint64_t _3283;
  void* _3284;
  uint8_t _3285;
  void* _3286;
  void* _3287;
  uint64_t _3288;
  void* _3289;
  uint64_t _3290;
  void* _3291;
  uint8_t _3292;
  uint8_t _3293;
  uint8_t _3294;
  uint32_t _3295;
  uint64_t _3296;
  uint64_t _3296__PHI_TEMPORARY;
  uint32_t _3297;
  uint32_t _3297__PHI_TEMPORARY;
  uint64_t _3298;
  uint64_t _3299;
  void* _3300;
  uint8_t _3301;
  uint32_t _3302;
  uint64_t _3303;
  uint64_t _3304;
  uint32_t _3305;
  uint64_t _3306;
  uint32_t _3307;
  uint32_t _3307__PHI_TEMPORARY;
  uint64_t _3308;
  uint64_t _3309;
  uint64_t _3310;
  uint64_t _3311;
  void* _3312;
  uint64_t _3313;
  void* _3314;
  uint64_t _3315;
  void* _3316;
  uint64_t _3317;
  void* _3318;
  uint64_t _3319;
  uint8_t _3320;
  uint8_t _3320__PHI_TEMPORARY;
  uint64_t _3321;
  uint64_t _3322;

  if ((llvm_select_bool(((((uint16_t)(llvm_add_u16(_3278, -716))) < ((uint16_t)((uint16_t)-650))) | (_3278 == ((uint16_t)68))), 1, (((uint16_t)(llvm_add_u16(_3278, -69))) < ((uint16_t)((uint16_t)9)))))) {
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  } else {
    goto _3324;
  }

_3324:
  switch (_3278) {
  default:
    goto _3325;
  case ((uint16_t)79):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)236):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)237):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)234):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)232):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)252):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)253):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)75):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)76):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)526):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)527):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)534):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)705):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)706):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)707):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)708):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)710):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  case ((uint16_t)711):
    _3280__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3323;
  }

_3325:
  _3280__PHI_TEMPORARY = ((llvm_and_u16(_3278, 1020)) == ((uint16_t)712));   /* for PHI node */
  goto _3323;

_3323:
  _3280 = _3280__PHI_TEMPORARY;
  if ((llvm_select_bool(_3280, 1, ((((bool)_3279&1u)) ^ 1)))) {
    _3320__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3326;
  } else {
    _3281__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3327;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3327:
  _3281 = _3281__PHI_TEMPORARY;
  _3282 = ((&((uint8_t*)_3277)[((int64_t)32)]));
  _3283 = *(uint64_t*)_3282;
  _3284 = ((&((uint8_t*)_3277)[((int64_t)40)]));
  _3285 = julia_isopsuffix_4488(_3276, (((uint32_t)(llvm_lshr_u64(_3283, 32)))));
  if ((((bool)_3285&1u))) {
    goto _3328;
  } else {
    _3320__PHI_TEMPORARY = _3281;   /* for PHI node */
    goto _3326;
  }

_3328:
  _3286 = *(void**)_3277;
  _3287 = ((&((uint8_t*)_3286)[((int64_t)16)]));
  _3288 = *(uint64_t*)_3287;
  _3289 = ((&((uint8_t*)_3286)[((int64_t)8)]));
  _3290 = *(uint64_t*)_3289;
  if ((((int64_t)_3290) > ((int64_t)_3288))) {
    goto _3329;
  } else {
    _3307__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _3330;
  }

_3329:
  _3291 = *(void**)_3286;
  _3292 = *(uint8_t*)(((&((uint8_t*)_3291)[((int64_t)_3288)])));
  *(uint64_t*)_3287 = (llvm_add_u64(_3288, 1));
  _3293 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3292)), 0);
  _3294 = llvm_sub_u8(32, (llvm_shl_u8(_3293, 3)));
  _3295 = (((uint32_t)(uint8_t)_3292)) << 24;
  if ((((uint8_t)_3294) > ((uint8_t)((uint8_t)16)))) {
    _3307__PHI_TEMPORARY = _3295;   /* for PHI node */
    goto _3330;
  } else {
    _3296__PHI_TEMPORARY = 16;   /* for PHI node */
    _3297__PHI_TEMPORARY = _3295;   /* for PHI node */
    goto _3331;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_3331:
  _3296 = _3296__PHI_TEMPORARY;
  _3297 = _3297__PHI_TEMPORARY;
  if (((((int64_t)_3296) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3296) < ((uint64_t)(((uint64_t)(uint8_t)_3294)))))) {
    _3307__PHI_TEMPORARY = _3297;   /* for PHI node */
    goto _3330;
  } else {
    goto _3332;
  }

_3332:
  _3298 = *(uint64_t*)_3287;
  _3299 = *(uint64_t*)_3289;
  if ((((int64_t)_3299) > ((int64_t)_3298))) {
    goto _3333;
  } else {
    _3307__PHI_TEMPORARY = _3297;   /* for PHI node */
    goto _3330;
  }

_3333:
  _3300 = *(void**)_3286;
  _3301 = *(uint8_t*)(((&((uint8_t*)_3300)[((int64_t)_3298)])));
  if ((((int8_t)_3301) > ((int8_t)((uint8_t)-65)))) {
    _3307__PHI_TEMPORARY = _3297;   /* for PHI node */
    goto _3330;
  } else {
    goto _3334;
  }

_3334:
  _3302 = llvm_select_u32((((int64_t)_3298) < ((int64_t)_3299)), (((uint32_t)(uint8_t)_3301)), 0);
  _3303 = *(uint64_t*)_3287;
  *(uint64_t*)_3287 = (llvm_add_u64(_3303, 1));
  _3304 = llvm_neg_u64(_3296);
  _3305 = _3297 | (llvm_select_u32((((int64_t)_3296) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3304) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3302, (((uint32_t)_3304)))))), (llvm_select_u32((((uint64_t)_3296) > ((uint64_t)UINT64_C(31))), 0, (_3302 << (((uint32_t)_3296)))))));
  _3306 = llvm_add_u64(_3296, -8);
  _3296__PHI_TEMPORARY = _3306;   /* for PHI node */
  _3297__PHI_TEMPORARY = _3305;   /* for PHI node */
  goto _3331;

  } while (1); /* end of syntactic loop '' */
_3330:
  _3307 = _3307__PHI_TEMPORARY;
  _3308 = *(uint64_t*)_3282;
  _3309 = *(uint64_t*)_3284;
  _3310 = jsyn_cbe_fshl_i64(_3309, _3308, 32);
  _3311 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3307)), _3309, 32);
  *(uint64_t*)_3282 = _3310;
  *(uint64_t*)_3284 = _3311;
  _3312 = ((&((uint8_t*)_3277)[((int64_t)56)]));
  _3313 = *(uint64_t*)_3312;
  _3314 = ((&((uint8_t*)_3277)[((int64_t)64)]));
  _3315 = *(uint64_t*)_3314;
  _3316 = ((&((uint8_t*)_3277)[((int64_t)72)]));
  _3317 = *(uint64_t*)_3316;
  _3318 = *(void**)_3277;
  _3319 = *(uint64_t*)(((&((uint8_t*)_3318)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3277)[((int64_t)48)]))) = _3313;
  *(uint64_t*)_3312 = _3315;
  *(uint64_t*)_3314 = _3317;
  *(uint64_t*)_3316 = _3319;
  _3281__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _3327;

  } while (1); /* end of syntactic loop '' */
_3326:
  _3320 = _3320__PHI_TEMPORARY;
  _3321 = *(uint64_t*)(((&((uint8_t*)_3277)[((int64_t)8)])));
  _3322 = *(uint64_t*)(((&((uint8_t*)_3277)[((int64_t)48)])));
  *(uint16_t*)(((&((uint8_t*)_3277)[((int64_t)16)]))) = _3278;
  *(uint16_t*)_3275 = _3278;
  *(uint64_t*)(((&((uint8_t*)_3275)[((int64_t)8)]))) = _3321;
  *(uint64_t*)(((&((uint8_t*)_3275)[((int64_t)16)]))) = (llvm_add_u64(_3322, -1));
  *(uint8_t*)(((&((uint8_t*)_3275)[((int64_t)24)]))) = _3320;
}


static uint8_t julia_isopsuffix_4488(void* _3335, uint32_t _3336) {
  bool _3337;
  bool _3337__PHI_TEMPORARY;
  uint32_t _3338;
  uint64_t _3339;
  uint32_t _3340;
  uint32_t _3341;
  uint64_t _3342;
  bool _3343;
  bool _3344;
  uint32_t _3345;
  uint32_t _3346;
  uint32_t _3347;
  uint32_t _3348;
  uint32_t _3348__PHI_TEMPORARY;
  uint32_t _3349;
  uint32_t _3350;
  uint32_t _3351;

  if ((_3336 == 4294967295u)) {
    _3337__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3352;
  } else {
    goto _3353;
  }

_3354:
  if ((((bool)(((uint32_t)(llvm_lshr_u32(1122337, _3350))))&1u))) {
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  } else {
    goto _3355;
  }

_3356:
  if ((((bool)(llvm_lshr_u64(INT64_C(137438953535), (((uint64_t)(uint32_t)_3351))))&1u))) {
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  } else {
    goto _3355;
  }

_3352:
  _3337 = _3337__PHI_TEMPORARY;
  return (((uint8_t)(bool)_3337));
_3353:
  _3338 = llvm_OC_ctlz_OC_i32((_3336 ^ -1), 0);
  _3339 = ((uint64_t)(uint32_t)_3338);
  _3340 = llvm_OC_cttz_OC_i32(_3336, 0);
  _3341 = _3340 & 56;
  _3342 = ((uint64_t)(uint32_t)_3341);
  _3343 = llvm_select_bool((((uint32_t)_3340) < ((uint32_t)32u)), ((llvm_lshr_u32(((_3336 & 12632256) ^ 8421504), _3341)) != 0u), 0);
  _3344 = (((_3336 & -33554432) == 3221225472u) | ((_3336 & -2097152) == 3766484992u)) | ((_3336 & -1048576) == 4034920448u);
  if ((((((_3338 == 1u) | (((uint64_t)(llvm_add_u64((_3339 << 3), _3342))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_3336) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_3336, 191905856))) < ((uint32_t)4193304640u)))) | _3343) | _3344)) {
    _3337__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3352;
  } else {
    goto _3357;
  }

_3357:
  _3345 = llvm_lshr_u32(_3336, 24);
  if ((((int32_t)_3336) < ((int32_t)0u))) {
    goto _3358;
  } else {
    _3348__PHI_TEMPORARY = _3345;   /* for PHI node */
    goto _3359;
  }

_3358:
  if ((((_3338 == 1u) | (((uint64_t)(llvm_add_u64((_3339 << 3), _3342))) > ((uint64_t)UINT64_C(32)))) | (_3343 | _3344))) {
    goto _3360;
  } else {
    goto _3361;
  }

_3360:
  julia_throw_invalid_char_2796(_3335, _3336);
  __builtin_unreachable();

_3361:
  _3346 = llvm_select_u32((((uint32_t)_3340) < ((uint32_t)32u)), (llvm_lshr_u32((_3336 & (llvm_lshr_u32(-1, _3338))), _3341)), 0);
  _3347 = (((_3346 & 127) | ((llvm_lshr_u32(_3346, 2)) & 8128)) | ((llvm_lshr_u32(_3346, 4)) & 520192)) | ((llvm_lshr_u32(_3346, 6)) & 33292288);
  _3348__PHI_TEMPORARY = _3347;   /* for PHI node */
  goto _3359;

_3359:
  _3348 = _3348__PHI_TEMPORARY;
  if ((((uint32_t)(llvm_add_u32(_3348, -161))) < ((uint32_t)1113951u))) {
    goto _3362;
  } else {
    _3337__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _3352;
  }

_3362:
  _3349 = jsk_utf8proc_category(_3348);
  if (((((uint32_t)(llvm_add_u32(_3349, -6))) < ((uint32_t)3u)) | ((_3348 & 2097150) == 178u))) {
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  } else {
    goto _3363;
  }

_3363:
  switch (_3348) {
  default:
    goto _3364;
  case 185u:
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  case 688u:
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  }

_3364:
  if ((llvm_select_bool((llvm_select_bool(((_3348 & 2097150) == 690u), 1, (((uint32_t)(llvm_add_u32(_3348, -695))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_3348, -737))) < ((uint32_t)3u))))) {
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  } else {
    goto _3365;
  }

_3365:
  switch (_3348) {
  default:
    goto _3366;
  case 7468u:
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  case 7470u:
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  }

_3366:
  if ((llvm_select_bool(((llvm_select_bool(((llvm_select_bool(((llvm_select_bool((llvm_select_bool(((llvm_select_bool(((_3348 & 2097150) == 7472u), 1, (((uint32_t)(llvm_add_u32(_3348, -7475))) < ((uint32_t)8u)))) | (_3348 == 7484u)), 1, (((uint32_t)(llvm_add_u32(_3348, -7486))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_3348, -7495))) < ((uint32_t)3u)))) | (_3348 == 7501u)), 1, (((uint32_t)(llvm_add_u32(_3348, -7503))) < ((uint32_t)2u)))) | (_3348 == 7506u)), 1, (((uint32_t)(llvm_add_u32(_3348, -7510))) < ((uint32_t)3u)))) | (_3348 == 7515u)), 1, (((uint32_t)(llvm_add_u32(_3348, -7517))) < ((uint32_t)14u))))) {
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  } else {
    goto _3367;
  }

_3367:
  switch (_3348) {
  default:
    goto _3368;
  case 7580u:
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  case 7584u:
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  }

_3368:
  if ((((uint32_t)(llvm_add_u32(_3348, -7589))) < ((uint32_t)2u))) {
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  } else {
    goto _3369;
  }

_3369:
  _3350 = llvm_add_u32(_3348, -7595);
  if ((((uint32_t)_3350) < ((uint32_t)21u))) {
    goto _3354;
  } else {
    goto _3370;
  }

_3370:
  _3351 = llvm_add_u32(_3348, -8242);
  if ((((uint32_t)_3351) < ((uint32_t)38u))) {
    goto _3356;
  } else {
    goto _3355;
  }

_3355:
  if (((llvm_select_bool(((llvm_select_bool(((_3348 & 2097150) == 8304u), 1, (((uint32_t)(llvm_add_u32(_3348, -8308))) < ((uint32_t)27u)))) | ((_3348 & 2097148) == 8336u)), 1, (((uint32_t)(llvm_add_u32(_3348, -8341))) < ((uint32_t)8u)))) | ((_3348 & 2097150) == 11388u))) {
    _3337__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _3352;
  } else {
    goto _3371;
  }

_3371:
  _3337__PHI_TEMPORARY = (((uint32_t)(llvm_add_u32(_3348, -42779))) < ((uint32_t)3u));   /* for PHI node */
  goto _3352;

}


static void julia_lex_digit_4491(void* _3372, void* _3373, void* _3374, uint16_t _3375) {
  struct l_array_4_uint64_t _3376;    /* Address-exposed local */
  struct l_array_4_uint64_t _3377;    /* Address-exposed local */
  struct l_array_4_uint64_t _3378;    /* Address-exposed local */
  struct l_array_4_uint64_t _3379;    /* Address-exposed local */
  struct l_array_4_uint64_t _3380;    /* Address-exposed local */
  struct l_array_4_uint64_t _3381;    /* Address-exposed local */
  struct l_array_4_uint64_t _3382;    /* Address-exposed local */
  struct l_array_4_uint64_t _3383;    /* Address-exposed local */
  struct l_array_4_uint64_t _3384;    /* Address-exposed local */
  struct l_array_4_uint64_t _3385;    /* Address-exposed local */
  struct l_array_4_uint64_t _3386;    /* Address-exposed local */
  struct l_array_4_uint64_t _3387;    /* Address-exposed local */
  struct l_array_4_uint64_t _3388;    /* Address-exposed local */
  struct l_array_4_uint64_t _3389;    /* Address-exposed local */
  uint8_t _3390;
  void* _3391;
  uint64_t _3392;
  void* _3393;
  uint64_t _3394;
  uint64_t _3395;
  uint32_t _3396;
  void* _3397;
  void* _3397__PHI_TEMPORARY;
  void* _3398;
  void* _3399;
  void* _3400;
  uint64_t _3401;
  void* _3402;
  uint64_t _3403;
  void* _3404;
  uint8_t _3405;
  uint8_t _3406;
  uint8_t _3407;
  uint32_t _3408;
  uint64_t _3409;
  uint64_t _3409__PHI_TEMPORARY;
  uint32_t _3410;
  uint32_t _3410__PHI_TEMPORARY;
  uint64_t _3411;
  uint64_t _3412;
  void* _3413;
  uint8_t _3414;
  uint32_t _3415;
  uint64_t _3416;
  uint64_t _3417;
  uint32_t _3418;
  uint64_t _3419;
  uint32_t _3420;
  uint32_t _3420__PHI_TEMPORARY;
  uint64_t _3421;
  uint64_t _3422;
  uint64_t _3423;
  uint64_t _3424;
  void* _3425;
  uint64_t _3426;
  void* _3427;
  uint64_t _3428;
  void* _3429;
  uint64_t _3430;
  void* _3431;
  uint64_t _3432;
  uint8_t _3433;
  void* _3434;
  void* _3435;
  uint64_t _3436;
  void* _3437;
  uint64_t _3438;
  void* _3439;
  uint8_t _3440;
  uint8_t _3441;
  uint8_t _3442;
  uint32_t _3443;
  uint64_t _3444;
  uint64_t _3444__PHI_TEMPORARY;
  uint32_t _3445;
  uint32_t _3445__PHI_TEMPORARY;
  uint64_t _3446;
  uint64_t _3447;
  void* _3448;
  uint8_t _3449;
  uint32_t _3450;
  uint64_t _3451;
  uint64_t _3452;
  uint32_t _3453;
  uint64_t _3454;
  uint32_t _3455;
  uint32_t _3455__PHI_TEMPORARY;
  uint64_t _3456;
  uint64_t _3457;
  uint64_t _3458;
  uint64_t _3459;
  void* _3460;
  uint64_t _3461;
  void* _3462;
  uint64_t _3463;
  void* _3464;
  uint64_t _3465;
  void* _3466;
  uint64_t _3467;
  void* _3468;
  void* _3469;
  uint64_t _3470;
  void* _3471;
  uint64_t _3472;
  void* _3473;
  uint8_t _3474;
  uint8_t _3475;
  uint8_t _3476;
  uint32_t _3477;
  uint64_t _3478;
  uint64_t _3478__PHI_TEMPORARY;
  uint32_t _3479;
  uint32_t _3479__PHI_TEMPORARY;
  uint64_t _3480;
  uint64_t _3481;
  void* _3482;
  uint8_t _3483;
  uint32_t _3484;
  uint64_t _3485;
  uint64_t _3486;
  uint32_t _3487;
  uint64_t _3488;
  uint32_t _3489;
  uint32_t _3489__PHI_TEMPORARY;
  uint64_t _3490;
  uint64_t _3491;
  uint64_t _3492;
  uint64_t _3493;
  void* _3494;
  void* _3495;
  uint64_t _3496;
  void* _3497;
  uint64_t _3498;
  void* _3499;
  uint64_t _3500;
  void* _3501;
  uint64_t _3502;
  uint64_t _3503;
  void* _3504;
  void* _3505;
  uint64_t _3506;
  void* _3507;
  uint64_t _3508;
  void* _3509;
  uint8_t _3510;
  uint8_t _3511;
  uint8_t _3512;
  uint32_t _3513;
  uint64_t _3514;
  uint64_t _3514__PHI_TEMPORARY;
  uint32_t _3515;
  uint32_t _3515__PHI_TEMPORARY;
  uint64_t _3516;
  uint64_t _3517;
  void* _3518;
  uint8_t _3519;
  uint32_t _3520;
  uint64_t _3521;
  uint64_t _3522;
  uint32_t _3523;
  uint64_t _3524;
  uint32_t _3525;
  uint32_t _3525__PHI_TEMPORARY;
  uint64_t _3526;
  uint64_t _3527;
  uint64_t _3528;
  uint64_t _3529;
  uint64_t _3530;
  uint64_t _3531;
  uint64_t _3532;
  void* _3533;
  uint64_t _3534;
  uint8_t _3535;
  uint64_t _3536;
  uint64_t _3537;
  uint32_t _3538;
  uint64_t _3539;
  uint32_t _3540;
  uint16_t _3541;
  void* _3542;
  void* _3543;
  uint64_t _3544;
  void* _3545;
  uint64_t _3546;
  void* _3547;
  uint8_t _3548;
  uint8_t _3549;
  uint8_t _3550;
  uint32_t _3551;
  uint64_t _3552;
  uint64_t _3552__PHI_TEMPORARY;
  uint32_t _3553;
  uint32_t _3553__PHI_TEMPORARY;
  uint64_t _3554;
  uint64_t _3555;
  void* _3556;
  uint8_t _3557;
  uint32_t _3558;
  uint64_t _3559;
  uint64_t _3560;
  uint32_t _3561;
  uint64_t _3562;
  uint32_t _3563;
  uint32_t _3563__PHI_TEMPORARY;
  uint64_t _3564;
  uint64_t _3565;
  uint64_t _3566;
  uint64_t _3567;
  uint64_t _3568;
  uint64_t _3569;
  uint64_t _3570;
  void* _3571;
  uint64_t _3572;
  uint64_t _3573;
  void* _3574;
  void* _3575;
  uint64_t _3576;
  void* _3577;
  uint64_t _3578;
  void* _3579;
  uint8_t _3580;
  uint8_t _3581;
  uint8_t _3582;
  uint32_t _3583;
  uint64_t _3584;
  uint64_t _3584__PHI_TEMPORARY;
  uint32_t _3585;
  uint32_t _3585__PHI_TEMPORARY;
  uint64_t _3586;
  uint64_t _3587;
  void* _3588;
  uint8_t _3589;
  uint32_t _3590;
  uint64_t _3591;
  uint64_t _3592;
  uint32_t _3593;
  uint64_t _3594;
  uint32_t _3595;
  uint32_t _3595__PHI_TEMPORARY;
  bool _3596;
  bool _3596__PHI_TEMPORARY;
  uint64_t _3597;
  uint64_t _3598;
  uint64_t _3599;
  uint64_t _3600;
  uint64_t _3601;
  uint64_t _3602;
  uint64_t _3603;
  void* _3604;
  uint64_t _3605;
  bool _3606;
  bool _3606__PHI_TEMPORARY;
  uint64_t _3607;
  uint64_t _3608;
  void* _3609;
  void* _3610;
  uint64_t _3611;
  void* _3612;
  uint64_t _3613;
  void* _3614;
  uint8_t _3615;
  uint8_t _3616;
  uint8_t _3617;
  uint32_t _3618;
  uint64_t _3619;
  uint64_t _3619__PHI_TEMPORARY;
  uint32_t _3620;
  uint32_t _3620__PHI_TEMPORARY;
  uint64_t _3621;
  uint64_t _3622;
  void* _3623;
  uint8_t _3624;
  uint32_t _3625;
  uint64_t _3626;
  uint64_t _3627;
  uint32_t _3628;
  uint64_t _3629;
  uint64_t _3630;
  uint64_t _3631;
  uint32_t _3632;
  uint8_t _3633;
  void* _3634;
  void* _3635;
  uint64_t _3636;
  void* _3637;
  uint64_t _3638;
  void* _3639;
  uint8_t _3640;
  uint8_t _3641;
  uint8_t _3642;
  uint32_t _3643;
  uint64_t _3644;
  uint64_t _3644__PHI_TEMPORARY;
  uint32_t _3645;
  uint32_t _3645__PHI_TEMPORARY;
  uint64_t _3646;
  uint64_t _3647;
  void* _3648;
  uint8_t _3649;
  uint32_t _3650;
  uint64_t _3651;
  uint64_t _3652;
  uint32_t _3653;
  uint64_t _3654;
  uint32_t _3655;
  uint32_t _3655__PHI_TEMPORARY;
  uint64_t _3656;
  uint64_t _3657;
  uint64_t _3658;
  uint64_t _3659;
  uint64_t _3660;
  uint64_t _3661;
  uint64_t _3662;
  void* _3663;
  uint64_t _3664;
  uint8_t _3665;
  void* _3666;
  void* _3667;
  uint64_t _3668;
  void* _3669;
  uint64_t _3670;
  void* _3671;
  uint8_t _3672;
  uint8_t _3673;
  uint8_t _3674;
  uint32_t _3675;
  uint64_t _3676;
  uint64_t _3676__PHI_TEMPORARY;
  uint32_t _3677;
  uint32_t _3677__PHI_TEMPORARY;
  uint64_t _3678;
  uint64_t _3679;
  void* _3680;
  uint8_t _3681;
  uint32_t _3682;
  uint64_t _3683;
  uint64_t _3684;
  uint32_t _3685;
  uint64_t _3686;
  uint32_t _3687;
  uint32_t _3687__PHI_TEMPORARY;
  uint64_t _3688;
  uint64_t _3689;
  uint64_t _3690;
  uint64_t _3691;
  uint64_t _3692;
  uint64_t _3693;
  uint64_t _3694;
  void* _3695;
  uint64_t _3696;
  uint32_t _3697;
  uint64_t _3698;
  uint32_t _3699;
  uint32_t _3700;
  uint64_t _3701;
  bool _3702;
  bool _3703;
  uint32_t _3704;
  uint32_t _3705;
  uint32_t _3706;
  uint32_t _3707;
  uint32_t _3707__PHI_TEMPORARY;
  uint32_t _3708;
  uint16_t _3709;
  void* _3710;
  void* _3711;
  uint64_t _3712;
  void* _3713;
  uint64_t _3714;
  void* _3715;
  uint8_t _3716;
  uint8_t _3717;
  uint8_t _3718;
  uint32_t _3719;
  uint64_t _3720;
  uint64_t _3720__PHI_TEMPORARY;
  uint32_t _3721;
  uint32_t _3721__PHI_TEMPORARY;
  uint64_t _3722;
  uint64_t _3723;
  void* _3724;
  uint8_t _3725;
  uint32_t _3726;
  uint64_t _3727;
  uint64_t _3728;
  uint32_t _3729;
  uint64_t _3730;
  uint32_t _3731;
  uint32_t _3731__PHI_TEMPORARY;
  uint64_t _3732;
  uint64_t _3733;
  uint64_t _3734;
  uint64_t _3735;
  void* _3736;
  void* _3737;
  uint64_t _3738;
  void* _3739;
  uint64_t _3740;
  void* _3741;
  uint64_t _3742;
  void* _3743;
  uint64_t _3744;
  uint64_t _3745;
  void* _3746;
  void* _3747;
  uint64_t _3748;
  void* _3749;
  uint64_t _3750;
  void* _3751;
  uint8_t _3752;
  uint8_t _3753;
  uint8_t _3754;
  uint32_t _3755;
  uint64_t _3756;
  uint64_t _3756__PHI_TEMPORARY;
  uint32_t _3757;
  uint32_t _3757__PHI_TEMPORARY;
  uint64_t _3758;
  uint64_t _3759;
  void* _3760;
  uint8_t _3761;
  uint32_t _3762;
  uint64_t _3763;
  uint64_t _3764;
  uint32_t _3765;
  uint64_t _3766;
  uint32_t _3767;
  uint32_t _3767__PHI_TEMPORARY;
  bool _3768;
  bool _3768__PHI_TEMPORARY;
  uint64_t _3769;
  uint64_t _3770;
  uint64_t _3771;
  uint64_t _3772;
  uint64_t _3773;
  uint64_t _3774;
  uint64_t _3775;
  void* _3776;
  uint64_t _3777;
  bool _3778;
  bool _3778__PHI_TEMPORARY;
  uint64_t _3779;
  uint64_t _3780;
  void* _3781;
  void* _3782;
  uint64_t _3783;
  void* _3784;
  uint64_t _3785;
  void* _3786;
  uint8_t _3787;
  uint8_t _3788;
  uint8_t _3789;
  uint32_t _3790;
  uint64_t _3791;
  uint64_t _3791__PHI_TEMPORARY;
  uint32_t _3792;
  uint32_t _3792__PHI_TEMPORARY;
  uint64_t _3793;
  uint64_t _3794;
  void* _3795;
  uint8_t _3796;
  uint32_t _3797;
  uint64_t _3798;
  uint64_t _3799;
  uint32_t _3800;
  uint64_t _3801;
  uint64_t _3802;
  uint64_t _3803;
  uint32_t _3804;
  uint8_t _3805;
  uint64_t _3806;
  void* _3807;
  void* _3808;
  uint64_t _3809;
  void* _3810;
  uint64_t _3811;
  void* _3812;
  uint8_t _3813;
  uint8_t _3814;
  uint8_t _3815;
  uint32_t _3816;
  uint64_t _3817;
  uint64_t _3817__PHI_TEMPORARY;
  uint32_t _3818;
  uint32_t _3818__PHI_TEMPORARY;
  uint64_t _3819;
  uint64_t _3820;
  void* _3821;
  uint8_t _3822;
  uint32_t _3823;
  uint64_t _3824;
  uint64_t _3825;
  uint32_t _3826;
  uint64_t _3827;
  uint32_t _3828;
  uint32_t _3828__PHI_TEMPORARY;
  uint64_t _3829;
  uint64_t _3830;
  uint64_t _3831;
  uint64_t _3832;
  uint64_t _3833;
  uint64_t _3834;
  uint64_t _3835;
  void* _3836;
  uint64_t _3837;
  void* _3838;
  uint64_t _3839;
  void* _3840;
  uint64_t _3841;
  uint64_t _3842;
  void* _3843;
  void* _3844;
  uint64_t _3845;
  void* _3846;
  uint64_t _3847;
  void* _3848;
  uint8_t _3849;
  uint8_t _3850;
  uint8_t _3851;
  uint32_t _3852;
  uint64_t _3853;
  uint64_t _3853__PHI_TEMPORARY;
  uint32_t _3854;
  uint32_t _3854__PHI_TEMPORARY;
  uint64_t _3855;
  uint64_t _3856;
  void* _3857;
  uint8_t _3858;
  uint32_t _3859;
  uint64_t _3860;
  uint64_t _3861;
  uint32_t _3862;
  uint64_t _3863;
  uint32_t _3864;
  uint32_t _3864__PHI_TEMPORARY;
  uint64_t _3865;
  uint64_t _3866;
  uint64_t _3867;
  uint64_t _3868;
  uint64_t _3869;
  void* _3870;
  uint64_t _3871;
  void* _3872;
  uint64_t _3873;
  void* _3874;
  uint64_t _3875;
  uint8_t _3876;
  uint64_t _3877;
  bool _3878;
  uint64_t _3879;
  bool _3880;
  void* _3881;
  void* _3882;
  uint64_t _3883;
  void* _3884;
  uint64_t _3885;
  void* _3886;
  uint8_t _3887;
  uint8_t _3888;
  uint8_t _3889;
  uint32_t _3890;
  uint64_t _3891;
  uint64_t _3891__PHI_TEMPORARY;
  uint32_t _3892;
  uint32_t _3892__PHI_TEMPORARY;
  uint64_t _3893;
  uint64_t _3894;
  void* _3895;
  uint8_t _3896;
  uint32_t _3897;
  uint64_t _3898;
  uint64_t _3899;
  uint32_t _3900;
  uint64_t _3901;
  uint32_t _3902;
  uint32_t _3902__PHI_TEMPORARY;
  uint64_t _3903;
  uint64_t _3904;
  uint64_t _3905;
  uint64_t _3906;
  uint64_t _3907;
  uint64_t _3908;
  uint64_t _3909;
  void* _3910;
  uint64_t _3911;
  uint8_t _3912;
  bool _3913;
  bool _3914;
  bool _3914__PHI_TEMPORARY;
  bool _3915;
  bool _3915__PHI_TEMPORARY;
  uint64_t _3916;
  void* _3917;
  void* _3918;
  uint64_t _3919;
  void* _3920;
  uint64_t _3921;
  void* _3922;
  uint8_t _3923;
  uint8_t _3924;
  uint8_t _3925;
  uint32_t _3926;
  uint64_t _3927;
  uint64_t _3927__PHI_TEMPORARY;
  uint32_t _3928;
  uint32_t _3928__PHI_TEMPORARY;
  uint64_t _3929;
  uint64_t _3930;
  void* _3931;
  uint8_t _3932;
  uint32_t _3933;
  uint64_t _3934;
  uint64_t _3935;
  uint32_t _3936;
  uint64_t _3937;
  uint32_t _3938;
  uint32_t _3938__PHI_TEMPORARY;
  uint64_t _3939;
  uint64_t _3940;
  uint64_t _3941;
  uint64_t _3942;
  uint64_t _3943;
  uint64_t _3944;
  uint64_t _3945;
  void* _3946;
  uint64_t _3947;
  uint64_t _3948;
  void* _3949;
  void* _3950;
  uint64_t _3951;
  void* _3952;
  uint64_t _3953;
  void* _3954;
  uint8_t _3955;
  uint8_t _3956;
  uint8_t _3957;
  uint32_t _3958;
  uint64_t _3959;
  uint64_t _3959__PHI_TEMPORARY;
  uint32_t _3960;
  uint32_t _3960__PHI_TEMPORARY;
  uint64_t _3961;
  uint64_t _3962;
  void* _3963;
  uint8_t _3964;
  uint32_t _3965;
  uint64_t _3966;
  uint64_t _3967;
  uint32_t _3968;
  uint64_t _3969;
  uint32_t _3970;
  uint32_t _3970__PHI_TEMPORARY;
  uint64_t _3971;
  uint64_t _3972;
  uint64_t _3973;
  uint64_t _3974;
  uint64_t _3975;
  uint64_t _3976;
  uint64_t _3977;
  void* _3978;
  uint64_t _3979;
  uint8_t _3980;
  uint16_t _3981;
  uint16_t _3981__PHI_TEMPORARY;
  bool _3982;
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
  uint64_t _4009;
  void* _4010;
  uint64_t _4011;
  void* _4012;
  uint64_t _4013;
  void* _4014;
  uint64_t _4015;
  uint8_t _4016;
  bool _4017;
  void* _4018;
  void* _4019;
  uint64_t _4020;
  void* _4021;
  uint64_t _4022;
  void* _4023;
  uint8_t _4024;
  uint8_t _4025;
  uint8_t _4026;
  uint32_t _4027;
  uint64_t _4028;
  uint64_t _4028__PHI_TEMPORARY;
  uint32_t _4029;
  uint32_t _4029__PHI_TEMPORARY;
  uint64_t _4030;
  uint64_t _4031;
  void* _4032;
  uint8_t _4033;
  uint32_t _4034;
  uint64_t _4035;
  uint64_t _4036;
  uint32_t _4037;
  uint64_t _4038;
  uint32_t _4039;
  uint32_t _4039__PHI_TEMPORARY;
  uint64_t _4040;
  uint64_t _4041;
  uint64_t _4042;
  uint64_t _4043;
  uint64_t _4044;
  void* _4045;
  uint64_t _4046;
  void* _4047;
  uint64_t _4048;
  void* _4049;
  uint64_t _4050;
  uint8_t _4051;
  bool _4052;
  bool _4053;
  bool _4053__PHI_TEMPORARY;
  bool _4054;
  bool _4054__PHI_TEMPORARY;
  bool _4055;
  bool _4055__PHI_TEMPORARY;
  uint16_t _4056;
  uint16_t _4056__PHI_TEMPORARY;
  uint64_t _4057;
  uint64_t _4058;
  uint32_t _4059;
  uint32_t _4060;
  uint64_t _4061;
  uint32_t _4062;
  uint32_t _4063;
  uint64_t _4064;
  bool _4065;
  bool _4066;
  uint32_t _4067;
  uint32_t _4068;
  uint32_t _4069;
  uint32_t _4070;
  uint32_t _4070__PHI_TEMPORARY;
  uint32_t _4071;
  uint64_t _4072;
  uint8_t _4073;
  void* _4074;
  void* _4075;
  uint64_t _4076;
  void* _4077;
  uint64_t _4078;
  void* _4079;
  uint8_t _4080;
  uint8_t _4081;
  uint8_t _4082;
  uint32_t _4083;
  uint64_t _4084;
  uint64_t _4084__PHI_TEMPORARY;
  uint32_t _4085;
  uint32_t _4085__PHI_TEMPORARY;
  uint64_t _4086;
  uint64_t _4087;
  void* _4088;
  uint8_t _4089;
  uint32_t _4090;
  uint64_t _4091;
  uint64_t _4092;
  uint32_t _4093;
  uint64_t _4094;
  uint32_t _4095;
  uint32_t _4095__PHI_TEMPORARY;
  uint64_t _4096;
  uint64_t _4097;
  uint64_t _4098;
  uint64_t _4099;
  uint64_t _4100;
  void* _4101;
  uint64_t _4102;
  void* _4103;
  uint64_t _4104;
  void* _4105;
  uint64_t _4106;
  uint16_t _4107;
  uint16_t _4107__PHI_TEMPORARY;

  _3390 = julia_accept_number_4512(_3373, _3374);
  _3391 = ((&((uint8_t*)_3374)[((int64_t)32)]));
  _3392 = *(uint64_t*)_3391;
  _3393 = ((&((uint8_t*)_3374)[((int64_t)40)]));
  _3394 = llvm_lshr_u64(_3392, 32);
  _3395 = *(uint64_t*)_3393;
  _3396 = ((uint32_t)_3395);
  switch ((((uint32_t)_3394))) {
  default:
    goto _4108;
  case 771751936u:
    goto _4109;
  case 1694498816u:
    goto _4110;
  case 1711276032u:
    goto _4110;
  case 1157627904u:
    goto _4110;
  }

_4109:
  if ((_3396 == 771751936u)) {
    goto _4111;
  } else {
    goto _4112;
  }

_4113:
  _3397 = _3397__PHI_TEMPORARY;
  _3398 = memcpy(_3372, _3397, 32);
  return;
_4111:
  julia_emit_4484((&_3376), _3373, _3374, _3375, 1);
  _3397__PHI_TEMPORARY = (&_3376);   /* for PHI node */
  goto _4113;

_4112:
  if ((_3375 == ((uint16_t)48))) {
    goto _4114;
  } else {
    goto _4115;
  }

_4114:
  _3399 = *(void**)_3374;
  _3400 = ((&((uint8_t*)_3399)[((int64_t)16)]));
  _3401 = *(uint64_t*)_3400;
  _3402 = ((&((uint8_t*)_3399)[((int64_t)8)]));
  _3403 = *(uint64_t*)_3402;
  if ((((int64_t)_3403) > ((int64_t)_3401))) {
    goto _4116;
  } else {
    _3420__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4117;
  }

_4116:
  _3404 = *(void**)_3399;
  _3405 = *(uint8_t*)(((&((uint8_t*)_3404)[((int64_t)_3401)])));
  *(uint64_t*)_3400 = (llvm_add_u64(_3401, 1));
  _3406 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3405)), 0);
  _3407 = llvm_sub_u8(32, (llvm_shl_u8(_3406, 3)));
  _3408 = (((uint32_t)(uint8_t)_3405)) << 24;
  if ((((uint8_t)_3407) > ((uint8_t)((uint8_t)16)))) {
    _3420__PHI_TEMPORARY = _3408;   /* for PHI node */
    goto _4117;
  } else {
    _3409__PHI_TEMPORARY = 16;   /* for PHI node */
    _3410__PHI_TEMPORARY = _3408;   /* for PHI node */
    goto _4118;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4118:
  _3409 = _3409__PHI_TEMPORARY;
  _3410 = _3410__PHI_TEMPORARY;
  if (((((int64_t)_3409) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3409) < ((uint64_t)(((uint64_t)(uint8_t)_3407)))))) {
    _3420__PHI_TEMPORARY = _3410;   /* for PHI node */
    goto _4117;
  } else {
    goto _4119;
  }

_4119:
  _3411 = *(uint64_t*)_3400;
  _3412 = *(uint64_t*)_3402;
  if ((((int64_t)_3412) > ((int64_t)_3411))) {
    goto _4120;
  } else {
    _3420__PHI_TEMPORARY = _3410;   /* for PHI node */
    goto _4117;
  }

_4120:
  _3413 = *(void**)_3399;
  _3414 = *(uint8_t*)(((&((uint8_t*)_3413)[((int64_t)_3411)])));
  if ((((int8_t)_3414) > ((int8_t)((uint8_t)-65)))) {
    _3420__PHI_TEMPORARY = _3410;   /* for PHI node */
    goto _4117;
  } else {
    goto _4121;
  }

_4121:
  _3415 = llvm_select_u32((((int64_t)_3411) < ((int64_t)_3412)), (((uint32_t)(uint8_t)_3414)), 0);
  _3416 = *(uint64_t*)_3400;
  *(uint64_t*)_3400 = (llvm_add_u64(_3416, 1));
  _3417 = llvm_neg_u64(_3409);
  _3418 = _3410 | (llvm_select_u32((((int64_t)_3409) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3417) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3415, (((uint32_t)_3417)))))), (llvm_select_u32((((uint64_t)_3409) > ((uint64_t)UINT64_C(31))), 0, (_3415 << (((uint32_t)_3409)))))));
  _3419 = llvm_add_u64(_3409, -8);
  _3409__PHI_TEMPORARY = _3419;   /* for PHI node */
  _3410__PHI_TEMPORARY = _3418;   /* for PHI node */
  goto _4118;

  } while (1); /* end of syntactic loop '' */
_4117:
  _3420 = _3420__PHI_TEMPORARY;
  _3421 = *(uint64_t*)_3391;
  _3422 = *(uint64_t*)_3393;
  _3423 = jsyn_cbe_fshl_i64(_3422, _3421, 32);
  _3424 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3420)), _3422, 32);
  *(uint64_t*)_3391 = _3423;
  *(uint64_t*)_3393 = _3424;
  _3425 = ((&((uint8_t*)_3374)[((int64_t)56)]));
  _3426 = *(uint64_t*)_3425;
  _3427 = ((&((uint8_t*)_3374)[((int64_t)64)]));
  _3428 = *(uint64_t*)_3427;
  _3429 = ((&((uint8_t*)_3374)[((int64_t)72)]));
  _3430 = *(uint64_t*)_3429;
  _3431 = *(void**)_3374;
  _3432 = *(uint64_t*)(((&((uint8_t*)_3431)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3374)[((int64_t)48)]))) = _3426;
  *(uint64_t*)_3425 = _3428;
  *(uint64_t*)_3427 = _3430;
  *(uint64_t*)_3429 = _3432;
  julia_emit_4484((&_3377), _3373, _3374, 754, 1);
  _3397__PHI_TEMPORARY = (&_3377);   /* for PHI node */
  goto _4113;

_4115:
  switch (_3396) {
  default:
    goto _4122;
  case 1056964608u:
    goto _4123;
  case 603979776u:
    goto _4123;
  case 973078528u:
    goto _4123;
  case 654311424u:
    goto _4123;
  }

_4122:
  _3433 = julia_is_operator_start_char_4518(_3373, _3396);
  if ((((bool)_3433&1u))) {
    goto _4124;
  } else {
    goto _4123;
  }

_4124:
  _3434 = *(void**)_3374;
  _3435 = ((&((uint8_t*)_3434)[((int64_t)16)]));
  _3436 = *(uint64_t*)_3435;
  _3437 = ((&((uint8_t*)_3434)[((int64_t)8)]));
  _3438 = *(uint64_t*)_3437;
  if ((((int64_t)_3438) > ((int64_t)_3436))) {
    goto _4125;
  } else {
    _3455__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4126;
  }

_4125:
  _3439 = *(void**)_3434;
  _3440 = *(uint8_t*)(((&((uint8_t*)_3439)[((int64_t)_3436)])));
  *(uint64_t*)_3435 = (llvm_add_u64(_3436, 1));
  _3441 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3440)), 0);
  _3442 = llvm_sub_u8(32, (llvm_shl_u8(_3441, 3)));
  _3443 = (((uint32_t)(uint8_t)_3440)) << 24;
  if ((((uint8_t)_3442) > ((uint8_t)((uint8_t)16)))) {
    _3455__PHI_TEMPORARY = _3443;   /* for PHI node */
    goto _4126;
  } else {
    _3444__PHI_TEMPORARY = 16;   /* for PHI node */
    _3445__PHI_TEMPORARY = _3443;   /* for PHI node */
    goto _4127;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4127:
  _3444 = _3444__PHI_TEMPORARY;
  _3445 = _3445__PHI_TEMPORARY;
  if (((((int64_t)_3444) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3444) < ((uint64_t)(((uint64_t)(uint8_t)_3442)))))) {
    _3455__PHI_TEMPORARY = _3445;   /* for PHI node */
    goto _4126;
  } else {
    goto _4128;
  }

_4128:
  _3446 = *(uint64_t*)_3435;
  _3447 = *(uint64_t*)_3437;
  if ((((int64_t)_3447) > ((int64_t)_3446))) {
    goto _4129;
  } else {
    _3455__PHI_TEMPORARY = _3445;   /* for PHI node */
    goto _4126;
  }

_4129:
  _3448 = *(void**)_3434;
  _3449 = *(uint8_t*)(((&((uint8_t*)_3448)[((int64_t)_3446)])));
  if ((((int8_t)_3449) > ((int8_t)((uint8_t)-65)))) {
    _3455__PHI_TEMPORARY = _3445;   /* for PHI node */
    goto _4126;
  } else {
    goto _4130;
  }

_4130:
  _3450 = llvm_select_u32((((int64_t)_3446) < ((int64_t)_3447)), (((uint32_t)(uint8_t)_3449)), 0);
  _3451 = *(uint64_t*)_3435;
  *(uint64_t*)_3435 = (llvm_add_u64(_3451, 1));
  _3452 = llvm_neg_u64(_3444);
  _3453 = _3445 | (llvm_select_u32((((int64_t)_3444) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3452) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3450, (((uint32_t)_3452)))))), (llvm_select_u32((((uint64_t)_3444) > ((uint64_t)UINT64_C(31))), 0, (_3450 << (((uint32_t)_3444)))))));
  _3454 = llvm_add_u64(_3444, -8);
  _3444__PHI_TEMPORARY = _3454;   /* for PHI node */
  _3445__PHI_TEMPORARY = _3453;   /* for PHI node */
  goto _4127;

  } while (1); /* end of syntactic loop '' */
_4126:
  _3455 = _3455__PHI_TEMPORARY;
  _3456 = *(uint64_t*)_3391;
  _3457 = *(uint64_t*)_3393;
  _3458 = jsyn_cbe_fshl_i64(_3457, _3456, 32);
  _3459 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3455)), _3457, 32);
  *(uint64_t*)_3391 = _3458;
  *(uint64_t*)_3393 = _3459;
  _3460 = ((&((uint8_t*)_3374)[((int64_t)56)]));
  _3461 = *(uint64_t*)_3460;
  _3462 = ((&((uint8_t*)_3374)[((int64_t)64)]));
  _3463 = *(uint64_t*)_3462;
  _3464 = ((&((uint8_t*)_3374)[((int64_t)72)]));
  _3465 = *(uint64_t*)_3464;
  _3466 = *(void**)_3374;
  _3467 = *(uint64_t*)(((&((uint8_t*)_3466)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_3374)[((int64_t)48)]))) = _3461;
  *(uint64_t*)_3460 = _3463;
  *(uint64_t*)_3462 = _3465;
  *(uint64_t*)_3464 = _3467;
  julia_emit_4484((&_3378), _3373, _3374, 756, 1);
  _3397__PHI_TEMPORARY = (&_3378);   /* for PHI node */
  goto _4113;

_4123:
  _3468 = *(void**)_3374;
  _3469 = ((&((uint8_t*)_3468)[((int64_t)16)]));
  _3470 = *(uint64_t*)_3469;
  _3471 = ((&((uint8_t*)_3468)[((int64_t)8)]));
  _3472 = *(uint64_t*)_3471;
  if ((((int64_t)_3472) > ((int64_t)_3470))) {
    goto _4131;
  } else {
    _3489__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4132;
  }

_4131:
  _3473 = *(void**)_3468;
  _3474 = *(uint8_t*)(((&((uint8_t*)_3473)[((int64_t)_3470)])));
  *(uint64_t*)_3469 = (llvm_add_u64(_3470, 1));
  _3475 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3474)), 0);
  _3476 = llvm_sub_u8(32, (llvm_shl_u8(_3475, 3)));
  _3477 = (((uint32_t)(uint8_t)_3474)) << 24;
  if ((((uint8_t)_3476) > ((uint8_t)((uint8_t)16)))) {
    _3489__PHI_TEMPORARY = _3477;   /* for PHI node */
    goto _4132;
  } else {
    _3478__PHI_TEMPORARY = 16;   /* for PHI node */
    _3479__PHI_TEMPORARY = _3477;   /* for PHI node */
    goto _4133;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4133:
  _3478 = _3478__PHI_TEMPORARY;
  _3479 = _3479__PHI_TEMPORARY;
  if (((((int64_t)_3478) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3478) < ((uint64_t)(((uint64_t)(uint8_t)_3476)))))) {
    _3489__PHI_TEMPORARY = _3479;   /* for PHI node */
    goto _4132;
  } else {
    goto _4134;
  }

_4134:
  _3480 = *(uint64_t*)_3469;
  _3481 = *(uint64_t*)_3471;
  if ((((int64_t)_3481) > ((int64_t)_3480))) {
    goto _4135;
  } else {
    _3489__PHI_TEMPORARY = _3479;   /* for PHI node */
    goto _4132;
  }

_4135:
  _3482 = *(void**)_3468;
  _3483 = *(uint8_t*)(((&((uint8_t*)_3482)[((int64_t)_3480)])));
  if ((((int8_t)_3483) > ((int8_t)((uint8_t)-65)))) {
    _3489__PHI_TEMPORARY = _3479;   /* for PHI node */
    goto _4132;
  } else {
    goto _4136;
  }

_4136:
  _3484 = llvm_select_u32((((int64_t)_3480) < ((int64_t)_3481)), (((uint32_t)(uint8_t)_3483)), 0);
  _3485 = *(uint64_t*)_3469;
  *(uint64_t*)_3469 = (llvm_add_u64(_3485, 1));
  _3486 = llvm_neg_u64(_3478);
  _3487 = _3479 | (llvm_select_u32((((int64_t)_3478) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3486) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3484, (((uint32_t)_3486)))))), (llvm_select_u32((((uint64_t)_3478) > ((uint64_t)UINT64_C(31))), 0, (_3484 << (((uint32_t)_3478)))))));
  _3488 = llvm_add_u64(_3478, -8);
  _3478__PHI_TEMPORARY = _3488;   /* for PHI node */
  _3479__PHI_TEMPORARY = _3487;   /* for PHI node */
  goto _4133;

  } while (1); /* end of syntactic loop '' */
_4132:
  _3489 = _3489__PHI_TEMPORARY;
  _3490 = *(uint64_t*)_3391;
  _3491 = *(uint64_t*)_3393;
  _3492 = jsyn_cbe_fshl_i64(_3491, _3490, 32);
  _3493 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3489)), _3491, 32);
  *(uint64_t*)_3391 = _3492;
  *(uint64_t*)_3393 = _3493;
  _3494 = ((&((uint8_t*)_3374)[((int64_t)48)]));
  _3495 = ((&((uint8_t*)_3374)[((int64_t)56)]));
  _3496 = *(uint64_t*)_3495;
  _3497 = ((&((uint8_t*)_3374)[((int64_t)64)]));
  _3498 = *(uint64_t*)_3497;
  _3499 = ((&((uint8_t*)_3374)[((int64_t)72)]));
  _3500 = *(uint64_t*)_3499;
  _3501 = *(void**)_3374;
  _3502 = *(uint64_t*)(((&((uint8_t*)_3501)[((int64_t)16)])));
  *(uint64_t*)_3494 = _3496;
  *(uint64_t*)_3495 = _3498;
  *(uint64_t*)_3497 = _3500;
  *(uint64_t*)_3499 = _3502;
  _3503 = *(uint64_t*)_3391;
  if (((_3503 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920))) {
    goto _4137;
  } else {
    goto _4138;
  }

_4137:
  _3504 = *(void**)_3374;
  _3505 = ((&((uint8_t*)_3504)[((int64_t)16)]));
  _3506 = *(uint64_t*)_3505;
  _3507 = ((&((uint8_t*)_3504)[((int64_t)8)]));
  _3508 = *(uint64_t*)_3507;
  if ((((int64_t)_3508) > ((int64_t)_3506))) {
    goto _4139;
  } else {
    _3525__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4140;
  }

_4139:
  _3509 = *(void**)_3504;
  _3510 = *(uint8_t*)(((&((uint8_t*)_3509)[((int64_t)_3506)])));
  *(uint64_t*)_3505 = (llvm_add_u64(_3506, 1));
  _3511 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3510)), 0);
  _3512 = llvm_sub_u8(32, (llvm_shl_u8(_3511, 3)));
  _3513 = (((uint32_t)(uint8_t)_3510)) << 24;
  if ((((uint8_t)_3512) > ((uint8_t)((uint8_t)16)))) {
    _3525__PHI_TEMPORARY = _3513;   /* for PHI node */
    goto _4140;
  } else {
    _3514__PHI_TEMPORARY = 16;   /* for PHI node */
    _3515__PHI_TEMPORARY = _3513;   /* for PHI node */
    goto _4141;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4141:
  _3514 = _3514__PHI_TEMPORARY;
  _3515 = _3515__PHI_TEMPORARY;
  if (((((int64_t)_3514) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3514) < ((uint64_t)(((uint64_t)(uint8_t)_3512)))))) {
    _3525__PHI_TEMPORARY = _3515;   /* for PHI node */
    goto _4140;
  } else {
    goto _4142;
  }

_4142:
  _3516 = *(uint64_t*)_3505;
  _3517 = *(uint64_t*)_3507;
  if ((((int64_t)_3517) > ((int64_t)_3516))) {
    goto _4143;
  } else {
    _3525__PHI_TEMPORARY = _3515;   /* for PHI node */
    goto _4140;
  }

_4143:
  _3518 = *(void**)_3504;
  _3519 = *(uint8_t*)(((&((uint8_t*)_3518)[((int64_t)_3516)])));
  if ((((int8_t)_3519) > ((int8_t)((uint8_t)-65)))) {
    _3525__PHI_TEMPORARY = _3515;   /* for PHI node */
    goto _4140;
  } else {
    goto _4144;
  }

_4144:
  _3520 = llvm_select_u32((((int64_t)_3516) < ((int64_t)_3517)), (((uint32_t)(uint8_t)_3519)), 0);
  _3521 = *(uint64_t*)_3505;
  *(uint64_t*)_3505 = (llvm_add_u64(_3521, 1));
  _3522 = llvm_neg_u64(_3514);
  _3523 = _3515 | (llvm_select_u32((((int64_t)_3514) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3522) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3520, (((uint32_t)_3522)))))), (llvm_select_u32((((uint64_t)_3514) > ((uint64_t)UINT64_C(31))), 0, (_3520 << (((uint32_t)_3514)))))));
  _3524 = llvm_add_u64(_3514, -8);
  _3514__PHI_TEMPORARY = _3524;   /* for PHI node */
  _3515__PHI_TEMPORARY = _3523;   /* for PHI node */
  goto _4141;

  } while (1); /* end of syntactic loop '' */
_4140:
  _3525 = _3525__PHI_TEMPORARY;
  _3526 = *(uint64_t*)_3391;
  _3527 = *(uint64_t*)_3393;
  _3528 = jsyn_cbe_fshl_i64(_3527, _3526, 32);
  _3529 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3525)), _3527, 32);
  *(uint64_t*)_3391 = _3528;
  *(uint64_t*)_3393 = _3529;
  _3530 = *(uint64_t*)_3495;
  _3531 = *(uint64_t*)_3497;
  _3532 = *(uint64_t*)_3499;
  _3533 = *(void**)_3374;
  _3534 = *(uint64_t*)(((&((uint8_t*)_3533)[((int64_t)16)])));
  *(uint64_t*)_3494 = _3530;
  *(uint64_t*)_3495 = _3531;
  *(uint64_t*)_3497 = _3532;
  *(uint64_t*)_3499 = _3534;
  julia_emit_4484((&_3379), _3373, _3374, 754, 1);
  _3397__PHI_TEMPORARY = (&_3379);   /* for PHI node */
  goto _4113;

_4138:
  _3535 = julia_accept_number_4512(_3373, _3374);
  _3536 = *(uint64_t*)_3391;
  _3537 = llvm_lshr_u64(_3536, 32);
  _3538 = ((uint32_t)_3537);
  _3539 = *(uint64_t*)_3393;
  _3540 = ((uint32_t)_3539);
  switch ((((uint32_t)_3537))) {
  default:
    goto _4145;
  case 1694498816u:
    goto _4146;
  case 1711276032u:
    goto _4146;
  case 1157627904u:
    goto _4146;
  }

_4146:
  if (((((uint32_t)(llvm_add_u32(_3540, -805306368))) < ((uint32_t)150994945u)) | (_3540 == 721420288u))) {
    goto _4147;
  } else {
    goto _4148;
  }

_4148:
  switch (_3540) {
  default:
    goto _4145;
  case 3800601088u:
    goto _4147;
  case 754974720u:
    goto _4147;
  }

_4147:
  _3541 = llvm_select_u16((_3537 == UINT64_C(1711276032)), 49, 48);
  _3542 = *(void**)_3374;
  _3543 = ((&((uint8_t*)_3542)[((int64_t)16)]));
  _3544 = *(uint64_t*)_3543;
  _3545 = ((&((uint8_t*)_3542)[((int64_t)8)]));
  _3546 = *(uint64_t*)_3545;
  if ((((int64_t)_3546) > ((int64_t)_3544))) {
    goto _4149;
  } else {
    _3563__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4150;
  }

_4149:
  _3547 = *(void**)_3542;
  _3548 = *(uint8_t*)(((&((uint8_t*)_3547)[((int64_t)_3544)])));
  *(uint64_t*)_3543 = (llvm_add_u64(_3544, 1));
  _3549 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3548)), 0);
  _3550 = llvm_sub_u8(32, (llvm_shl_u8(_3549, 3)));
  _3551 = (((uint32_t)(uint8_t)_3548)) << 24;
  if ((((uint8_t)_3550) > ((uint8_t)((uint8_t)16)))) {
    _3563__PHI_TEMPORARY = _3551;   /* for PHI node */
    goto _4150;
  } else {
    _3552__PHI_TEMPORARY = 16;   /* for PHI node */
    _3553__PHI_TEMPORARY = _3551;   /* for PHI node */
    goto _4151;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4151:
  _3552 = _3552__PHI_TEMPORARY;
  _3553 = _3553__PHI_TEMPORARY;
  if (((((int64_t)_3552) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3552) < ((uint64_t)(((uint64_t)(uint8_t)_3550)))))) {
    _3563__PHI_TEMPORARY = _3553;   /* for PHI node */
    goto _4150;
  } else {
    goto _4152;
  }

_4152:
  _3554 = *(uint64_t*)_3543;
  _3555 = *(uint64_t*)_3545;
  if ((((int64_t)_3555) > ((int64_t)_3554))) {
    goto _4153;
  } else {
    _3563__PHI_TEMPORARY = _3553;   /* for PHI node */
    goto _4150;
  }

_4153:
  _3556 = *(void**)_3542;
  _3557 = *(uint8_t*)(((&((uint8_t*)_3556)[((int64_t)_3554)])));
  if ((((int8_t)_3557) > ((int8_t)((uint8_t)-65)))) {
    _3563__PHI_TEMPORARY = _3553;   /* for PHI node */
    goto _4150;
  } else {
    goto _4154;
  }

_4154:
  _3558 = llvm_select_u32((((int64_t)_3554) < ((int64_t)_3555)), (((uint32_t)(uint8_t)_3557)), 0);
  _3559 = *(uint64_t*)_3543;
  *(uint64_t*)_3543 = (llvm_add_u64(_3559, 1));
  _3560 = llvm_neg_u64(_3552);
  _3561 = _3553 | (llvm_select_u32((((int64_t)_3552) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3560) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3558, (((uint32_t)_3560)))))), (llvm_select_u32((((uint64_t)_3552) > ((uint64_t)UINT64_C(31))), 0, (_3558 << (((uint32_t)_3552)))))));
  _3562 = llvm_add_u64(_3552, -8);
  _3552__PHI_TEMPORARY = _3562;   /* for PHI node */
  _3553__PHI_TEMPORARY = _3561;   /* for PHI node */
  goto _4151;

  } while (1); /* end of syntactic loop '' */
_4150:
  _3563 = _3563__PHI_TEMPORARY;
  _3564 = *(uint64_t*)_3391;
  _3565 = *(uint64_t*)_3393;
  _3566 = jsyn_cbe_fshl_i64(_3565, _3564, 32);
  _3567 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3563)), _3565, 32);
  *(uint64_t*)_3391 = _3566;
  *(uint64_t*)_3393 = _3567;
  _3568 = *(uint64_t*)_3495;
  _3569 = *(uint64_t*)_3497;
  _3570 = *(uint64_t*)_3499;
  _3571 = *(void**)_3374;
  _3572 = *(uint64_t*)(((&((uint8_t*)_3571)[((int64_t)16)])));
  *(uint64_t*)_3494 = _3568;
  *(uint64_t*)_3495 = _3569;
  *(uint64_t*)_3497 = _3570;
  *(uint64_t*)_3499 = _3572;
  _3573 = *(uint64_t*)_3391;
  switch ((((uint32_t)(llvm_lshr_u64(_3573, 32))))) {
  default:
    _3606__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4155;
  case 721420288u:
    goto _4156;
  case 3800601088u:
    goto _4156;
  case 754974720u:
    goto _4156;
  }

_4156:
  _3574 = *(void**)_3374;
  _3575 = ((&((uint8_t*)_3574)[((int64_t)16)]));
  _3576 = *(uint64_t*)_3575;
  _3577 = ((&((uint8_t*)_3574)[((int64_t)8)]));
  _3578 = *(uint64_t*)_3577;
  if ((((int64_t)_3578) > ((int64_t)_3576))) {
    goto _4157;
  } else {
    _3595__PHI_TEMPORARY = -1;   /* for PHI node */
    _3596__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4158;
  }

_4157:
  _3579 = *(void**)_3574;
  _3580 = *(uint8_t*)(((&((uint8_t*)_3579)[((int64_t)_3576)])));
  *(uint64_t*)_3575 = (llvm_add_u64(_3576, 1));
  _3581 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3580)), 0);
  _3582 = llvm_sub_u8(32, (llvm_shl_u8(_3581, 3)));
  _3583 = (((uint32_t)(uint8_t)_3580)) << 24;
  if ((((uint8_t)_3582) > ((uint8_t)((uint8_t)16)))) {
    _3595__PHI_TEMPORARY = _3583;   /* for PHI node */
    _3596__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4158;
  } else {
    _3584__PHI_TEMPORARY = 16;   /* for PHI node */
    _3585__PHI_TEMPORARY = _3583;   /* for PHI node */
    goto _4159;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4159:
  _3584 = _3584__PHI_TEMPORARY;
  _3585 = _3585__PHI_TEMPORARY;
  if (((((int64_t)_3584) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3584) < ((uint64_t)(((uint64_t)(uint8_t)_3582)))))) {
    _3595__PHI_TEMPORARY = _3585;   /* for PHI node */
    _3596__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4158;
  } else {
    goto _4160;
  }

_4160:
  _3586 = *(uint64_t*)_3575;
  _3587 = *(uint64_t*)_3577;
  if ((((int64_t)_3587) > ((int64_t)_3586))) {
    goto _4161;
  } else {
    _3595__PHI_TEMPORARY = _3585;   /* for PHI node */
    _3596__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4158;
  }

_4161:
  _3588 = *(void**)_3574;
  _3589 = *(uint8_t*)(((&((uint8_t*)_3588)[((int64_t)_3586)])));
  if ((((int8_t)_3589) > ((int8_t)((uint8_t)-65)))) {
    _3595__PHI_TEMPORARY = _3585;   /* for PHI node */
    _3596__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4158;
  } else {
    goto _4162;
  }

_4162:
  _3590 = llvm_select_u32((((int64_t)_3586) < ((int64_t)_3587)), (((uint32_t)(uint8_t)_3589)), 0);
  _3591 = *(uint64_t*)_3575;
  *(uint64_t*)_3575 = (llvm_add_u64(_3591, 1));
  _3592 = llvm_neg_u64(_3584);
  _3593 = _3585 | (llvm_select_u32((((int64_t)_3584) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3592) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3590, (((uint32_t)_3592)))))), (llvm_select_u32((((uint64_t)_3584) > ((uint64_t)UINT64_C(31))), 0, (_3590 << (((uint32_t)_3584)))))));
  _3594 = llvm_add_u64(_3584, -8);
  _3584__PHI_TEMPORARY = _3594;   /* for PHI node */
  _3585__PHI_TEMPORARY = _3593;   /* for PHI node */
  goto _4159;

  } while (1); /* end of syntactic loop '' */
_4158:
  _3595 = _3595__PHI_TEMPORARY;
  _3596 = _3596__PHI_TEMPORARY;
  _3597 = *(uint64_t*)_3391;
  _3598 = *(uint64_t*)_3393;
  _3599 = jsyn_cbe_fshl_i64(_3598, _3597, 32);
  _3600 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3595)), _3598, 32);
  *(uint64_t*)_3391 = _3599;
  *(uint64_t*)_3393 = _3600;
  _3601 = *(uint64_t*)_3495;
  _3602 = *(uint64_t*)_3497;
  _3603 = *(uint64_t*)_3499;
  _3604 = *(void**)_3374;
  _3605 = *(uint64_t*)(((&((uint8_t*)_3604)[((int64_t)16)])));
  *(uint64_t*)_3494 = _3601;
  *(uint64_t*)_3495 = _3602;
  *(uint64_t*)_3497 = _3603;
  *(uint64_t*)_3499 = _3605;
  _3606__PHI_TEMPORARY = _3596;   /* for PHI node */
  goto _4155;

_4155:
  _3606 = _3606__PHI_TEMPORARY;
  _3607 = *(uint64_t*)_3391;
  _3608 = llvm_lshr_u64(_3607, 32);
  if ((((((uint64_t)_3607) < ((uint64_t)UINT64_C(3458764518115508224))) & (_3608 != UINT64_C(805306368))) | ((((uint64_t)_3607) > ((uint64_t)UINT64_C(4107282860161892351))) & (_3608 != UINT64_C(956301312))))) {
    goto _4163;
  } else {
    goto _4164;
  }

_4164:
  _3609 = *(void**)_3374;
  _3610 = ((&((uint8_t*)_3609)[((int64_t)16)]));
  _3611 = *(uint64_t*)_3610;
  _3612 = ((&((uint8_t*)_3609)[((int64_t)8)]));
  _3613 = *(uint64_t*)_3612;
  if ((((int64_t)_3613) > ((int64_t)_3611))) {
    goto _4165;
  } else {
    _3595__PHI_TEMPORARY = -1;   /* for PHI node */
    _3596__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4158;
  }

_4165:
  _3614 = *(void**)_3609;
  _3615 = *(uint8_t*)(((&((uint8_t*)_3614)[((int64_t)_3611)])));
  *(uint64_t*)_3610 = (llvm_add_u64(_3611, 1));
  _3616 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3615)), 0);
  _3617 = llvm_sub_u8(32, (llvm_shl_u8(_3616, 3)));
  _3618 = (((uint32_t)(uint8_t)_3615)) << 24;
  if ((((uint8_t)_3617) > ((uint8_t)((uint8_t)16)))) {
    _3595__PHI_TEMPORARY = _3618;   /* for PHI node */
    _3596__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4158;
  } else {
    _3619__PHI_TEMPORARY = 16;   /* for PHI node */
    _3620__PHI_TEMPORARY = _3618;   /* for PHI node */
    goto _4166;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4166:
  _3619 = _3619__PHI_TEMPORARY;
  _3620 = _3620__PHI_TEMPORARY;
  if (((((int64_t)_3619) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3619) < ((uint64_t)(((uint64_t)(uint8_t)_3617)))))) {
    _3595__PHI_TEMPORARY = _3620;   /* for PHI node */
    _3596__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4158;
  } else {
    goto _4167;
  }

_4167:
  _3621 = *(uint64_t*)_3610;
  _3622 = *(uint64_t*)_3612;
  if ((((int64_t)_3622) > ((int64_t)_3621))) {
    goto _4168;
  } else {
    _3595__PHI_TEMPORARY = _3620;   /* for PHI node */
    _3596__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4158;
  }

_4168:
  _3623 = *(void**)_3609;
  _3624 = *(uint8_t*)(((&((uint8_t*)_3623)[((int64_t)_3621)])));
  if ((((int8_t)_3624) > ((int8_t)((uint8_t)-65)))) {
    _3595__PHI_TEMPORARY = _3620;   /* for PHI node */
    _3596__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4158;
  } else {
    goto _4169;
  }

_4169:
  _3625 = llvm_select_u32((((int64_t)_3621) < ((int64_t)_3622)), (((uint32_t)(uint8_t)_3624)), 0);
  _3626 = *(uint64_t*)_3610;
  *(uint64_t*)_3610 = (llvm_add_u64(_3626, 1));
  _3627 = llvm_neg_u64(_3619);
  _3628 = _3620 | (llvm_select_u32((((int64_t)_3619) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3627) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3625, (((uint32_t)_3627)))))), (llvm_select_u32((((uint64_t)_3619) > ((uint64_t)UINT64_C(31))), 0, (_3625 << (((uint32_t)_3619)))))));
  _3629 = llvm_add_u64(_3619, -8);
  _3619__PHI_TEMPORARY = _3629;   /* for PHI node */
  _3620__PHI_TEMPORARY = _3628;   /* for PHI node */
  goto _4166;

  } while (1); /* end of syntactic loop '' */
_4163:
  if (_3606) {
    goto _4170;
  } else {
    goto _4171;
  }

_4171:
  _3630 = *(uint64_t*)_3391;
  _3631 = *(uint64_t*)_3393;
  _3632 = ((uint32_t)_3631);
  if (((_3630 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _4172;
  } else {
    _4107__PHI_TEMPORARY = _3541;   /* for PHI node */
    goto _4173;
  }

_4172:
  switch (_3632) {
  default:
    goto _4174;
  case 1056964608u:
    goto _4175;
  case 603979776u:
    goto _4175;
  case 973078528u:
    goto _4175;
  case 654311424u:
    goto _4175;
  }

_4174:
  _3633 = julia_is_operator_start_char_4518(_3373, _3632);
  if ((((bool)_3633&1u))) {
    _4107__PHI_TEMPORARY = _3541;   /* for PHI node */
    goto _4173;
  } else {
    goto _4175;
  }

_4175:
  _3634 = *(void**)_3374;
  _3635 = ((&((uint8_t*)_3634)[((int64_t)16)]));
  _3636 = *(uint64_t*)_3635;
  _3637 = ((&((uint8_t*)_3634)[((int64_t)8)]));
  _3638 = *(uint64_t*)_3637;
  if ((((int64_t)_3638) > ((int64_t)_3636))) {
    goto _4176;
  } else {
    _3655__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4177;
  }

_4176:
  _3639 = *(void**)_3634;
  _3640 = *(uint8_t*)(((&((uint8_t*)_3639)[((int64_t)_3636)])));
  *(uint64_t*)_3635 = (llvm_add_u64(_3636, 1));
  _3641 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3640)), 0);
  _3642 = llvm_sub_u8(32, (llvm_shl_u8(_3641, 3)));
  _3643 = (((uint32_t)(uint8_t)_3640)) << 24;
  if ((((uint8_t)_3642) > ((uint8_t)((uint8_t)16)))) {
    _3655__PHI_TEMPORARY = _3643;   /* for PHI node */
    goto _4177;
  } else {
    _3644__PHI_TEMPORARY = 16;   /* for PHI node */
    _3645__PHI_TEMPORARY = _3643;   /* for PHI node */
    goto _4178;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4178:
  _3644 = _3644__PHI_TEMPORARY;
  _3645 = _3645__PHI_TEMPORARY;
  if (((((int64_t)_3644) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3644) < ((uint64_t)(((uint64_t)(uint8_t)_3642)))))) {
    _3655__PHI_TEMPORARY = _3645;   /* for PHI node */
    goto _4177;
  } else {
    goto _4179;
  }

_4179:
  _3646 = *(uint64_t*)_3635;
  _3647 = *(uint64_t*)_3637;
  if ((((int64_t)_3647) > ((int64_t)_3646))) {
    goto _4180;
  } else {
    _3655__PHI_TEMPORARY = _3645;   /* for PHI node */
    goto _4177;
  }

_4180:
  _3648 = *(void**)_3634;
  _3649 = *(uint8_t*)(((&((uint8_t*)_3648)[((int64_t)_3646)])));
  if ((((int8_t)_3649) > ((int8_t)((uint8_t)-65)))) {
    _3655__PHI_TEMPORARY = _3645;   /* for PHI node */
    goto _4177;
  } else {
    goto _4181;
  }

_4181:
  _3650 = llvm_select_u32((((int64_t)_3646) < ((int64_t)_3647)), (((uint32_t)(uint8_t)_3649)), 0);
  _3651 = *(uint64_t*)_3635;
  *(uint64_t*)_3635 = (llvm_add_u64(_3651, 1));
  _3652 = llvm_neg_u64(_3644);
  _3653 = _3645 | (llvm_select_u32((((int64_t)_3644) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3652) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3650, (((uint32_t)_3652)))))), (llvm_select_u32((((uint64_t)_3644) > ((uint64_t)UINT64_C(31))), 0, (_3650 << (((uint32_t)_3644)))))));
  _3654 = llvm_add_u64(_3644, -8);
  _3644__PHI_TEMPORARY = _3654;   /* for PHI node */
  _3645__PHI_TEMPORARY = _3653;   /* for PHI node */
  goto _4178;

  } while (1); /* end of syntactic loop '' */
_4177:
  _3655 = _3655__PHI_TEMPORARY;
  _3656 = *(uint64_t*)_3391;
  _3657 = *(uint64_t*)_3393;
  _3658 = jsyn_cbe_fshl_i64(_3657, _3656, 32);
  _3659 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3655)), _3657, 32);
  *(uint64_t*)_3391 = _3658;
  *(uint64_t*)_3393 = _3659;
  _3660 = *(uint64_t*)_3495;
  _3661 = *(uint64_t*)_3497;
  _3662 = *(uint64_t*)_3499;
  _3663 = *(void**)_3374;
  _3664 = *(uint64_t*)(((&((uint8_t*)_3663)[((int64_t)16)])));
  *(uint64_t*)_3494 = _3660;
  *(uint64_t*)_3495 = _3661;
  *(uint64_t*)_3497 = _3662;
  *(uint64_t*)_3499 = _3664;
  julia_emit_4484((&_3380), _3373, _3374, 754, 1);
  _3397__PHI_TEMPORARY = (&_3380);   /* for PHI node */
  goto _4113;

_4170:
  julia_emit_4484((&_3382), _3373, _3374, 754, 1);
  _3397__PHI_TEMPORARY = (&_3382);   /* for PHI node */
  goto _4113;

_4145:
  if ((llvm_select_bool((_3537 != UINT64_C(771751936)), 1, (_3540 == 771751936u)))) {
    goto _4182;
  } else {
    goto _4183;
  }

_4183:
  switch (_3540) {
  default:
    goto _4184;
  case 1056964608u:
    goto _4185;
  case 603979776u:
    goto _4185;
  case 973078528u:
    goto _4185;
  case 654311424u:
    goto _4185;
  }

_4184:
  _3665 = julia_is_operator_start_char_4518(_3373, _3540);
  if ((((bool)_3665&1u))) {
    goto _4182;
  } else {
    goto _4185;
  }

_4185:
  _3666 = *(void**)_3374;
  _3667 = ((&((uint8_t*)_3666)[((int64_t)16)]));
  _3668 = *(uint64_t*)_3667;
  _3669 = ((&((uint8_t*)_3666)[((int64_t)8)]));
  _3670 = *(uint64_t*)_3669;
  if ((((int64_t)_3670) > ((int64_t)_3668))) {
    goto _4186;
  } else {
    _3687__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4187;
  }

_4186:
  _3671 = *(void**)_3666;
  _3672 = *(uint8_t*)(((&((uint8_t*)_3671)[((int64_t)_3668)])));
  *(uint64_t*)_3667 = (llvm_add_u64(_3668, 1));
  _3673 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3672)), 0);
  _3674 = llvm_sub_u8(32, (llvm_shl_u8(_3673, 3)));
  _3675 = (((uint32_t)(uint8_t)_3672)) << 24;
  if ((((uint8_t)_3674) > ((uint8_t)((uint8_t)16)))) {
    _3687__PHI_TEMPORARY = _3675;   /* for PHI node */
    goto _4187;
  } else {
    _3676__PHI_TEMPORARY = 16;   /* for PHI node */
    _3677__PHI_TEMPORARY = _3675;   /* for PHI node */
    goto _4188;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4188:
  _3676 = _3676__PHI_TEMPORARY;
  _3677 = _3677__PHI_TEMPORARY;
  if (((((int64_t)_3676) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3676) < ((uint64_t)(((uint64_t)(uint8_t)_3674)))))) {
    _3687__PHI_TEMPORARY = _3677;   /* for PHI node */
    goto _4187;
  } else {
    goto _4189;
  }

_4189:
  _3678 = *(uint64_t*)_3667;
  _3679 = *(uint64_t*)_3669;
  if ((((int64_t)_3679) > ((int64_t)_3678))) {
    goto _4190;
  } else {
    _3687__PHI_TEMPORARY = _3677;   /* for PHI node */
    goto _4187;
  }

_4190:
  _3680 = *(void**)_3666;
  _3681 = *(uint8_t*)(((&((uint8_t*)_3680)[((int64_t)_3678)])));
  if ((((int8_t)_3681) > ((int8_t)((uint8_t)-65)))) {
    _3687__PHI_TEMPORARY = _3677;   /* for PHI node */
    goto _4187;
  } else {
    goto _4191;
  }

_4191:
  _3682 = llvm_select_u32((((int64_t)_3678) < ((int64_t)_3679)), (((uint32_t)(uint8_t)_3681)), 0);
  _3683 = *(uint64_t*)_3667;
  *(uint64_t*)_3667 = (llvm_add_u64(_3683, 1));
  _3684 = llvm_neg_u64(_3676);
  _3685 = _3677 | (llvm_select_u32((((int64_t)_3676) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3684) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3682, (((uint32_t)_3684)))))), (llvm_select_u32((((uint64_t)_3676) > ((uint64_t)UINT64_C(31))), 0, (_3682 << (((uint32_t)_3676)))))));
  _3686 = llvm_add_u64(_3676, -8);
  _3676__PHI_TEMPORARY = _3686;   /* for PHI node */
  _3677__PHI_TEMPORARY = _3685;   /* for PHI node */
  goto _4188;

  } while (1); /* end of syntactic loop '' */
_4187:
  _3687 = _3687__PHI_TEMPORARY;
  _3688 = *(uint64_t*)_3391;
  _3689 = *(uint64_t*)_3393;
  _3690 = jsyn_cbe_fshl_i64(_3689, _3688, 32);
  _3691 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3687)), _3689, 32);
  *(uint64_t*)_3391 = _3690;
  *(uint64_t*)_3393 = _3691;
  _3692 = *(uint64_t*)_3495;
  _3693 = *(uint64_t*)_3497;
  _3694 = *(uint64_t*)_3499;
  _3695 = *(void**)_3374;
  _3696 = *(uint64_t*)(((&((uint8_t*)_3695)[((int64_t)16)])));
  *(uint64_t*)_3494 = _3692;
  *(uint64_t*)_3495 = _3693;
  *(uint64_t*)_3497 = _3694;
  *(uint64_t*)_3499 = _3696;
  julia_emit_4484((&_3383), _3373, _3374, 754, 1);
  _3397__PHI_TEMPORARY = (&_3383);   /* for PHI node */
  goto _4113;

_4182:
  if (((_3537 == UINT64_C(4294967295)) | (((bool)_3535&1u)))) {
    _4107__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _4173;
  } else {
    goto _4192;
  }

_4192:
  _3697 = llvm_OC_ctlz_OC_i32((_3538 ^ -1), 0);
  _3698 = ((uint64_t)(uint32_t)_3697);
  _3699 = llvm_OC_cttz_OC_i32(_3538, 0);
  _3700 = _3699 & 56;
  _3701 = ((uint64_t)(uint32_t)_3700);
  _3702 = llvm_select_bool((((uint32_t)_3699) < ((uint32_t)32u)), ((llvm_lshr_u32(((_3538 & 12632256) ^ 8421504), _3700)) != 0u), 0);
  _3703 = (((_3538 & -33554432) == 3221225472u) | ((_3538 & -2097152) == 3766484992u)) | ((_3538 & -1048576) == 4034920448u);
  if (((((((_3697 == 1u) | (((uint64_t)(llvm_add_u64((_3698 << 3), _3701))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_3536) > ((uint64_t)UINT64_C(17122614315006820351))) & (_3537 != UINT64_C(3986669312))) & (((((uint64_t)_3536) < ((uint64_t)UINT64_C(17185876919829135360))) & (_3537 != UINT64_C(4001398784))) | ((((uint64_t)_3536) > ((uint64_t)UINT64_C(17622514693983698943))) & (_3537 != UINT64_C(4103061439)))))) | (_3537 == UINT64_C(4036993714))) | _3702) | _3703)) {
    goto _4193;
  } else {
    goto _4194;
  }

_4194:
  _3704 = llvm_lshr_u32(_3538, 24);
  if ((((int64_t)_3536) < ((int64_t)UINT64_C(0)))) {
    goto _4195;
  } else {
    _3707__PHI_TEMPORARY = _3704;   /* for PHI node */
    goto _4196;
  }

_4195:
  if ((((_3697 == 1u) | (((uint64_t)(llvm_add_u64((_3698 << 3), _3701))) > ((uint64_t)UINT64_C(32)))) | (_3702 | _3703))) {
    goto _4197;
  } else {
    goto _4198;
  }

_4197:
  julia_throw_invalid_char_2796(_3373, _3538);
  __builtin_unreachable();

_4198:
  _3705 = llvm_select_u32((((uint32_t)_3699) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _3697)) & _3538), _3700)), 0);
  _3706 = (((_3705 & 127) | ((llvm_lshr_u32(_3705, 2)) & 8128)) | ((llvm_lshr_u32(_3705, 4)) & 520192)) | ((llvm_lshr_u32(_3705, 6)) & 33292288);
  _3707__PHI_TEMPORARY = _3706;   /* for PHI node */
  goto _4196;

_4196:
  _3707 = _3707__PHI_TEMPORARY;
  _3708 = jsk_jl_id_start_char(_3707);
  if ((_3708 == 0u)) {
    goto _4193;
  } else {
    goto _4199;
  }

_4193:
  switch ((((uint32_t)_3537))) {
  default:
    _4107__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _4173;
  case 671088640u:
    goto _4199;
  case 1526726656u:
    goto _4199;
  case 2063597568u:
    goto _4199;
  case 1073741824u:
    goto _4199;
  case 1610612736u:
    goto _4199;
  case 570425344u:
    goto _4199;
  }

_4199:
  julia_emit_4484((&_3384), _3373, _3374, 757, 1);
  _3397__PHI_TEMPORARY = (&_3384);   /* for PHI node */
  goto _4113;

_4110:
  if (((((uint32_t)(llvm_add_u32(_3396, -805306368))) < ((uint32_t)150994945u)) | (_3396 == 721420288u))) {
    goto _4200;
  } else {
    goto _4201;
  }

_4201:
  switch (_3396) {
  default:
    goto _4108;
  case 3800601088u:
    goto _4200;
  case 754974720u:
    goto _4200;
  }

_4200:
  _3709 = llvm_select_u16((_3394 == UINT64_C(1711276032)), 49, 48);
  _3710 = *(void**)_3374;
  _3711 = ((&((uint8_t*)_3710)[((int64_t)16)]));
  _3712 = *(uint64_t*)_3711;
  _3713 = ((&((uint8_t*)_3710)[((int64_t)8)]));
  _3714 = *(uint64_t*)_3713;
  if ((((int64_t)_3714) > ((int64_t)_3712))) {
    goto _4202;
  } else {
    _3731__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4203;
  }

_4202:
  _3715 = *(void**)_3710;
  _3716 = *(uint8_t*)(((&((uint8_t*)_3715)[((int64_t)_3712)])));
  *(uint64_t*)_3711 = (llvm_add_u64(_3712, 1));
  _3717 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3716)), 0);
  _3718 = llvm_sub_u8(32, (llvm_shl_u8(_3717, 3)));
  _3719 = (((uint32_t)(uint8_t)_3716)) << 24;
  if ((((uint8_t)_3718) > ((uint8_t)((uint8_t)16)))) {
    _3731__PHI_TEMPORARY = _3719;   /* for PHI node */
    goto _4203;
  } else {
    _3720__PHI_TEMPORARY = 16;   /* for PHI node */
    _3721__PHI_TEMPORARY = _3719;   /* for PHI node */
    goto _4204;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4204:
  _3720 = _3720__PHI_TEMPORARY;
  _3721 = _3721__PHI_TEMPORARY;
  if (((((int64_t)_3720) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3720) < ((uint64_t)(((uint64_t)(uint8_t)_3718)))))) {
    _3731__PHI_TEMPORARY = _3721;   /* for PHI node */
    goto _4203;
  } else {
    goto _4205;
  }

_4205:
  _3722 = *(uint64_t*)_3711;
  _3723 = *(uint64_t*)_3713;
  if ((((int64_t)_3723) > ((int64_t)_3722))) {
    goto _4206;
  } else {
    _3731__PHI_TEMPORARY = _3721;   /* for PHI node */
    goto _4203;
  }

_4206:
  _3724 = *(void**)_3710;
  _3725 = *(uint8_t*)(((&((uint8_t*)_3724)[((int64_t)_3722)])));
  if ((((int8_t)_3725) > ((int8_t)((uint8_t)-65)))) {
    _3731__PHI_TEMPORARY = _3721;   /* for PHI node */
    goto _4203;
  } else {
    goto _4207;
  }

_4207:
  _3726 = llvm_select_u32((((int64_t)_3722) < ((int64_t)_3723)), (((uint32_t)(uint8_t)_3725)), 0);
  _3727 = *(uint64_t*)_3711;
  *(uint64_t*)_3711 = (llvm_add_u64(_3727, 1));
  _3728 = llvm_neg_u64(_3720);
  _3729 = _3721 | (llvm_select_u32((((int64_t)_3720) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3728) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3726, (((uint32_t)_3728)))))), (llvm_select_u32((((uint64_t)_3720) > ((uint64_t)UINT64_C(31))), 0, (_3726 << (((uint32_t)_3720)))))));
  _3730 = llvm_add_u64(_3720, -8);
  _3720__PHI_TEMPORARY = _3730;   /* for PHI node */
  _3721__PHI_TEMPORARY = _3729;   /* for PHI node */
  goto _4204;

  } while (1); /* end of syntactic loop '' */
_4203:
  _3731 = _3731__PHI_TEMPORARY;
  _3732 = *(uint64_t*)_3391;
  _3733 = *(uint64_t*)_3393;
  _3734 = jsyn_cbe_fshl_i64(_3733, _3732, 32);
  _3735 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3731)), _3733, 32);
  *(uint64_t*)_3391 = _3734;
  *(uint64_t*)_3393 = _3735;
  _3736 = ((&((uint8_t*)_3374)[((int64_t)48)]));
  _3737 = ((&((uint8_t*)_3374)[((int64_t)56)]));
  _3738 = *(uint64_t*)_3737;
  _3739 = ((&((uint8_t*)_3374)[((int64_t)64)]));
  _3740 = *(uint64_t*)_3739;
  _3741 = ((&((uint8_t*)_3374)[((int64_t)72)]));
  _3742 = *(uint64_t*)_3741;
  _3743 = *(void**)_3374;
  _3744 = *(uint64_t*)(((&((uint8_t*)_3743)[((int64_t)16)])));
  *(uint64_t*)_3736 = _3738;
  *(uint64_t*)_3737 = _3740;
  *(uint64_t*)_3739 = _3742;
  *(uint64_t*)_3741 = _3744;
  _3745 = *(uint64_t*)_3391;
  switch ((((uint32_t)(llvm_lshr_u64(_3745, 32))))) {
  default:
    _3778__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4208;
  case 721420288u:
    goto _4209;
  case 3800601088u:
    goto _4209;
  case 754974720u:
    goto _4209;
  }

_4209:
  _3746 = *(void**)_3374;
  _3747 = ((&((uint8_t*)_3746)[((int64_t)16)]));
  _3748 = *(uint64_t*)_3747;
  _3749 = ((&((uint8_t*)_3746)[((int64_t)8)]));
  _3750 = *(uint64_t*)_3749;
  if ((((int64_t)_3750) > ((int64_t)_3748))) {
    goto _4210;
  } else {
    _3767__PHI_TEMPORARY = -1;   /* for PHI node */
    _3768__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4211;
  }

_4210:
  _3751 = *(void**)_3746;
  _3752 = *(uint8_t*)(((&((uint8_t*)_3751)[((int64_t)_3748)])));
  *(uint64_t*)_3747 = (llvm_add_u64(_3748, 1));
  _3753 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3752)), 0);
  _3754 = llvm_sub_u8(32, (llvm_shl_u8(_3753, 3)));
  _3755 = (((uint32_t)(uint8_t)_3752)) << 24;
  if ((((uint8_t)_3754) > ((uint8_t)((uint8_t)16)))) {
    _3767__PHI_TEMPORARY = _3755;   /* for PHI node */
    _3768__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4211;
  } else {
    _3756__PHI_TEMPORARY = 16;   /* for PHI node */
    _3757__PHI_TEMPORARY = _3755;   /* for PHI node */
    goto _4212;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4212:
  _3756 = _3756__PHI_TEMPORARY;
  _3757 = _3757__PHI_TEMPORARY;
  if (((((int64_t)_3756) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3756) < ((uint64_t)(((uint64_t)(uint8_t)_3754)))))) {
    _3767__PHI_TEMPORARY = _3757;   /* for PHI node */
    _3768__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4211;
  } else {
    goto _4213;
  }

_4213:
  _3758 = *(uint64_t*)_3747;
  _3759 = *(uint64_t*)_3749;
  if ((((int64_t)_3759) > ((int64_t)_3758))) {
    goto _4214;
  } else {
    _3767__PHI_TEMPORARY = _3757;   /* for PHI node */
    _3768__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4211;
  }

_4214:
  _3760 = *(void**)_3746;
  _3761 = *(uint8_t*)(((&((uint8_t*)_3760)[((int64_t)_3758)])));
  if ((((int8_t)_3761) > ((int8_t)((uint8_t)-65)))) {
    _3767__PHI_TEMPORARY = _3757;   /* for PHI node */
    _3768__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4211;
  } else {
    goto _4215;
  }

_4215:
  _3762 = llvm_select_u32((((int64_t)_3758) < ((int64_t)_3759)), (((uint32_t)(uint8_t)_3761)), 0);
  _3763 = *(uint64_t*)_3747;
  *(uint64_t*)_3747 = (llvm_add_u64(_3763, 1));
  _3764 = llvm_neg_u64(_3756);
  _3765 = _3757 | (llvm_select_u32((((int64_t)_3756) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3764) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3762, (((uint32_t)_3764)))))), (llvm_select_u32((((uint64_t)_3756) > ((uint64_t)UINT64_C(31))), 0, (_3762 << (((uint32_t)_3756)))))));
  _3766 = llvm_add_u64(_3756, -8);
  _3756__PHI_TEMPORARY = _3766;   /* for PHI node */
  _3757__PHI_TEMPORARY = _3765;   /* for PHI node */
  goto _4212;

  } while (1); /* end of syntactic loop '' */
_4211:
  _3767 = _3767__PHI_TEMPORARY;
  _3768 = _3768__PHI_TEMPORARY;
  _3769 = *(uint64_t*)_3391;
  _3770 = *(uint64_t*)_3393;
  _3771 = jsyn_cbe_fshl_i64(_3770, _3769, 32);
  _3772 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3767)), _3770, 32);
  *(uint64_t*)_3391 = _3771;
  *(uint64_t*)_3393 = _3772;
  _3773 = *(uint64_t*)_3737;
  _3774 = *(uint64_t*)_3739;
  _3775 = *(uint64_t*)_3741;
  _3776 = *(void**)_3374;
  _3777 = *(uint64_t*)(((&((uint8_t*)_3776)[((int64_t)16)])));
  *(uint64_t*)_3736 = _3773;
  *(uint64_t*)_3737 = _3774;
  *(uint64_t*)_3739 = _3775;
  *(uint64_t*)_3741 = _3777;
  _3778__PHI_TEMPORARY = _3768;   /* for PHI node */
  goto _4208;

_4208:
  _3778 = _3778__PHI_TEMPORARY;
  _3779 = *(uint64_t*)_3391;
  _3780 = llvm_lshr_u64(_3779, 32);
  if ((((((uint64_t)_3779) < ((uint64_t)UINT64_C(3458764518115508224))) & (_3780 != UINT64_C(805306368))) | ((((uint64_t)_3779) > ((uint64_t)UINT64_C(4107282860161892351))) & (_3780 != UINT64_C(956301312))))) {
    goto _4216;
  } else {
    goto _4217;
  }

_4217:
  _3781 = *(void**)_3374;
  _3782 = ((&((uint8_t*)_3781)[((int64_t)16)]));
  _3783 = *(uint64_t*)_3782;
  _3784 = ((&((uint8_t*)_3781)[((int64_t)8)]));
  _3785 = *(uint64_t*)_3784;
  if ((((int64_t)_3785) > ((int64_t)_3783))) {
    goto _4218;
  } else {
    _3767__PHI_TEMPORARY = -1;   /* for PHI node */
    _3768__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4211;
  }

_4218:
  _3786 = *(void**)_3781;
  _3787 = *(uint8_t*)(((&((uint8_t*)_3786)[((int64_t)_3783)])));
  *(uint64_t*)_3782 = (llvm_add_u64(_3783, 1));
  _3788 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3787)), 0);
  _3789 = llvm_sub_u8(32, (llvm_shl_u8(_3788, 3)));
  _3790 = (((uint32_t)(uint8_t)_3787)) << 24;
  if ((((uint8_t)_3789) > ((uint8_t)((uint8_t)16)))) {
    _3767__PHI_TEMPORARY = _3790;   /* for PHI node */
    _3768__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4211;
  } else {
    _3791__PHI_TEMPORARY = 16;   /* for PHI node */
    _3792__PHI_TEMPORARY = _3790;   /* for PHI node */
    goto _4219;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4219:
  _3791 = _3791__PHI_TEMPORARY;
  _3792 = _3792__PHI_TEMPORARY;
  if (((((int64_t)_3791) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3791) < ((uint64_t)(((uint64_t)(uint8_t)_3789)))))) {
    _3767__PHI_TEMPORARY = _3792;   /* for PHI node */
    _3768__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4211;
  } else {
    goto _4220;
  }

_4220:
  _3793 = *(uint64_t*)_3782;
  _3794 = *(uint64_t*)_3784;
  if ((((int64_t)_3794) > ((int64_t)_3793))) {
    goto _4221;
  } else {
    _3767__PHI_TEMPORARY = _3792;   /* for PHI node */
    _3768__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4211;
  }

_4221:
  _3795 = *(void**)_3781;
  _3796 = *(uint8_t*)(((&((uint8_t*)_3795)[((int64_t)_3793)])));
  if ((((int8_t)_3796) > ((int8_t)((uint8_t)-65)))) {
    _3767__PHI_TEMPORARY = _3792;   /* for PHI node */
    _3768__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4211;
  } else {
    goto _4222;
  }

_4222:
  _3797 = llvm_select_u32((((int64_t)_3793) < ((int64_t)_3794)), (((uint32_t)(uint8_t)_3796)), 0);
  _3798 = *(uint64_t*)_3782;
  *(uint64_t*)_3782 = (llvm_add_u64(_3798, 1));
  _3799 = llvm_neg_u64(_3791);
  _3800 = _3792 | (llvm_select_u32((((int64_t)_3791) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3799) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3797, (((uint32_t)_3799)))))), (llvm_select_u32((((uint64_t)_3791) > ((uint64_t)UINT64_C(31))), 0, (_3797 << (((uint32_t)_3791)))))));
  _3801 = llvm_add_u64(_3791, -8);
  _3791__PHI_TEMPORARY = _3801;   /* for PHI node */
  _3792__PHI_TEMPORARY = _3800;   /* for PHI node */
  goto _4219;

  } while (1); /* end of syntactic loop '' */
_4216:
  if (_3778) {
    goto _4223;
  } else {
    goto _4224;
  }

_4224:
  _3802 = *(uint64_t*)_3391;
  _3803 = *(uint64_t*)_3393;
  _3804 = ((uint32_t)_3803);
  if (((_3802 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _4225;
  } else {
    _4107__PHI_TEMPORARY = _3709;   /* for PHI node */
    goto _4173;
  }

_4225:
  switch (_3804) {
  default:
    goto _4226;
  case 1056964608u:
    goto _4227;
  case 603979776u:
    goto _4227;
  case 973078528u:
    goto _4227;
  case 654311424u:
    goto _4227;
  }

_4226:
  _3805 = julia_is_operator_start_char_4518(_3373, _3804);
  if ((((bool)_3805&1u))) {
    _4107__PHI_TEMPORARY = _3709;   /* for PHI node */
    goto _4173;
  } else {
    goto _4227;
  }

_4227:
  _3806 = *(uint64_t*)_3391;
  if (((_3806 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _4228;
  } else {
    goto _4229;
  }

_4228:
  _3807 = *(void**)_3374;
  _3808 = ((&((uint8_t*)_3807)[((int64_t)16)]));
  _3809 = *(uint64_t*)_3808;
  _3810 = ((&((uint8_t*)_3807)[((int64_t)8)]));
  _3811 = *(uint64_t*)_3810;
  if ((((int64_t)_3811) > ((int64_t)_3809))) {
    goto _4230;
  } else {
    _3828__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4231;
  }

_4230:
  _3812 = *(void**)_3807;
  _3813 = *(uint8_t*)(((&((uint8_t*)_3812)[((int64_t)_3809)])));
  *(uint64_t*)_3808 = (llvm_add_u64(_3809, 1));
  _3814 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3813)), 0);
  _3815 = llvm_sub_u8(32, (llvm_shl_u8(_3814, 3)));
  _3816 = (((uint32_t)(uint8_t)_3813)) << 24;
  if ((((uint8_t)_3815) > ((uint8_t)((uint8_t)16)))) {
    _3828__PHI_TEMPORARY = _3816;   /* for PHI node */
    goto _4231;
  } else {
    _3817__PHI_TEMPORARY = 16;   /* for PHI node */
    _3818__PHI_TEMPORARY = _3816;   /* for PHI node */
    goto _4232;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4232:
  _3817 = _3817__PHI_TEMPORARY;
  _3818 = _3818__PHI_TEMPORARY;
  if (((((int64_t)_3817) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3817) < ((uint64_t)(((uint64_t)(uint8_t)_3815)))))) {
    _3828__PHI_TEMPORARY = _3818;   /* for PHI node */
    goto _4231;
  } else {
    goto _4233;
  }

_4233:
  _3819 = *(uint64_t*)_3808;
  _3820 = *(uint64_t*)_3810;
  if ((((int64_t)_3820) > ((int64_t)_3819))) {
    goto _4234;
  } else {
    _3828__PHI_TEMPORARY = _3818;   /* for PHI node */
    goto _4231;
  }

_4234:
  _3821 = *(void**)_3807;
  _3822 = *(uint8_t*)(((&((uint8_t*)_3821)[((int64_t)_3819)])));
  if ((((int8_t)_3822) > ((int8_t)((uint8_t)-65)))) {
    _3828__PHI_TEMPORARY = _3818;   /* for PHI node */
    goto _4231;
  } else {
    goto _4235;
  }

_4235:
  _3823 = llvm_select_u32((((int64_t)_3819) < ((int64_t)_3820)), (((uint32_t)(uint8_t)_3822)), 0);
  _3824 = *(uint64_t*)_3808;
  *(uint64_t*)_3808 = (llvm_add_u64(_3824, 1));
  _3825 = llvm_neg_u64(_3817);
  _3826 = _3818 | (llvm_select_u32((((int64_t)_3817) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3825) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3823, (((uint32_t)_3825)))))), (llvm_select_u32((((uint64_t)_3817) > ((uint64_t)UINT64_C(31))), 0, (_3823 << (((uint32_t)_3817)))))));
  _3827 = llvm_add_u64(_3817, -8);
  _3817__PHI_TEMPORARY = _3827;   /* for PHI node */
  _3818__PHI_TEMPORARY = _3826;   /* for PHI node */
  goto _4232;

  } while (1); /* end of syntactic loop '' */
_4231:
  _3828 = _3828__PHI_TEMPORARY;
  _3829 = *(uint64_t*)_3391;
  _3830 = *(uint64_t*)_3393;
  _3831 = jsyn_cbe_fshl_i64(_3830, _3829, 32);
  _3832 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3828)), _3830, 32);
  *(uint64_t*)_3391 = _3831;
  *(uint64_t*)_3393 = _3832;
  _3833 = *(uint64_t*)_3737;
  _3834 = *(uint64_t*)_3739;
  _3835 = *(uint64_t*)_3741;
  _3836 = *(void**)_3374;
  _3837 = *(uint64_t*)(((&((uint8_t*)_3836)[((int64_t)16)])));
  *(uint64_t*)_3736 = _3833;
  *(uint64_t*)_3737 = _3834;
  *(uint64_t*)_3739 = _3835;
  *(uint64_t*)_3741 = _3837;
  goto _4229;

_4229:
  julia_emit_4484((&_3385), _3373, _3374, 754, 1);
  _3397__PHI_TEMPORARY = (&_3385);   /* for PHI node */
  goto _4113;

_4223:
  julia_emit_4484((&_3386), _3373, _3374, 754, 1);
  _3397__PHI_TEMPORARY = (&_3386);   /* for PHI node */
  goto _4113;

_4108:
  _3838 = ((&((uint8_t*)_3374)[((int64_t)48)]));
  _3839 = *(uint64_t*)_3838;
  _3840 = ((&((uint8_t*)_3374)[((int64_t)56)]));
  _3841 = *(uint64_t*)(((&((uint8_t*)_3374)[((int64_t)8)])));
  if (((llvm_sub_u64(_3839, _3841)) == UINT64_C(1))) {
    goto _4236;
  } else {
    _4107__PHI_TEMPORARY = _3375;   /* for PHI node */
    goto _4173;
  }

_4236:
  _3842 = *(uint64_t*)_3391;
  if (((_3842 & INT64_C(4294967295)) == UINT64_C(805306368))) {
    goto _4237;
  } else {
    _4107__PHI_TEMPORARY = _3375;   /* for PHI node */
    goto _4173;
  }

_4237:
  switch ((((uint32_t)_3394))) {
  default:
    _4053__PHI_TEMPORARY = 1;   /* for PHI node */
    _4055__PHI_TEMPORARY = 0;   /* for PHI node */
    _4056__PHI_TEMPORARY = _3375;   /* for PHI node */
    goto _4238;
  case 2013265920u:
    goto _4239;
  case 1644167168u:
    goto _4240;
  case 1862270976u:
    goto _4241;
  }

_4239:
  _3843 = *(void**)_3374;
  _3844 = ((&((uint8_t*)_3843)[((int64_t)16)]));
  _3845 = *(uint64_t*)_3844;
  _3846 = ((&((uint8_t*)_3843)[((int64_t)8)]));
  _3847 = *(uint64_t*)_3846;
  if ((((int64_t)_3847) > ((int64_t)_3845))) {
    goto _4242;
  } else {
    _3864__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4243;
  }

_4242:
  _3848 = *(void**)_3843;
  _3849 = *(uint8_t*)(((&((uint8_t*)_3848)[((int64_t)_3845)])));
  *(uint64_t*)_3844 = (llvm_add_u64(_3845, 1));
  _3850 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3849)), 0);
  _3851 = llvm_sub_u8(32, (llvm_shl_u8(_3850, 3)));
  _3852 = (((uint32_t)(uint8_t)_3849)) << 24;
  if ((((uint8_t)_3851) > ((uint8_t)((uint8_t)16)))) {
    _3864__PHI_TEMPORARY = _3852;   /* for PHI node */
    goto _4243;
  } else {
    _3853__PHI_TEMPORARY = 16;   /* for PHI node */
    _3854__PHI_TEMPORARY = _3852;   /* for PHI node */
    goto _4244;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4244:
  _3853 = _3853__PHI_TEMPORARY;
  _3854 = _3854__PHI_TEMPORARY;
  if (((((int64_t)_3853) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3853) < ((uint64_t)(((uint64_t)(uint8_t)_3851)))))) {
    _3864__PHI_TEMPORARY = _3854;   /* for PHI node */
    goto _4243;
  } else {
    goto _4245;
  }

_4245:
  _3855 = *(uint64_t*)_3844;
  _3856 = *(uint64_t*)_3846;
  if ((((int64_t)_3856) > ((int64_t)_3855))) {
    goto _4246;
  } else {
    _3864__PHI_TEMPORARY = _3854;   /* for PHI node */
    goto _4243;
  }

_4246:
  _3857 = *(void**)_3843;
  _3858 = *(uint8_t*)(((&((uint8_t*)_3857)[((int64_t)_3855)])));
  if ((((int8_t)_3858) > ((int8_t)((uint8_t)-65)))) {
    _3864__PHI_TEMPORARY = _3854;   /* for PHI node */
    goto _4243;
  } else {
    goto _4247;
  }

_4247:
  _3859 = llvm_select_u32((((int64_t)_3855) < ((int64_t)_3856)), (((uint32_t)(uint8_t)_3858)), 0);
  _3860 = *(uint64_t*)_3844;
  *(uint64_t*)_3844 = (llvm_add_u64(_3860, 1));
  _3861 = llvm_neg_u64(_3853);
  _3862 = _3854 | (llvm_select_u32((((int64_t)_3853) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3861) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3859, (((uint32_t)_3861)))))), (llvm_select_u32((((uint64_t)_3853) > ((uint64_t)UINT64_C(31))), 0, (_3859 << (((uint32_t)_3853)))))));
  _3863 = llvm_add_u64(_3853, -8);
  _3853__PHI_TEMPORARY = _3863;   /* for PHI node */
  _3854__PHI_TEMPORARY = _3862;   /* for PHI node */
  goto _4244;

  } while (1); /* end of syntactic loop '' */
_4243:
  _3864 = _3864__PHI_TEMPORARY;
  _3865 = *(uint64_t*)_3391;
  _3866 = *(uint64_t*)_3393;
  _3867 = jsyn_cbe_fshl_i64(_3866, _3865, 32);
  _3868 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3864)), _3866, 32);
  *(uint64_t*)_3391 = _3867;
  *(uint64_t*)_3393 = _3868;
  _3869 = *(uint64_t*)_3840;
  _3870 = ((&((uint8_t*)_3374)[((int64_t)64)]));
  _3871 = *(uint64_t*)_3870;
  _3872 = ((&((uint8_t*)_3374)[((int64_t)72)]));
  _3873 = *(uint64_t*)_3872;
  _3874 = *(void**)_3374;
  _3875 = *(uint64_t*)(((&((uint8_t*)_3874)[((int64_t)16)])));
  *(uint64_t*)_3838 = _3869;
  *(uint64_t*)_3840 = _3871;
  *(uint64_t*)_3870 = _3873;
  *(uint64_t*)_3872 = _3875;
  _3876 = julia_accept_number_4515(_3373, _3374);
  _3877 = *(uint64_t*)_3391;
  _3878 = ((bool)_3876&1u);
  if (((_3877 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _4248;
  } else {
    _3914__PHI_TEMPORARY = _3878;   /* for PHI node */
    _3915__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4249;
  }

_4248:
  _3879 = *(uint64_t*)_3393;
  _3880 = ((bool)_3876&1u);
  if (((_3879 & INT64_C(4294967295)) == UINT64_C(771751936))) {
    _3914__PHI_TEMPORARY = _3880;   /* for PHI node */
    _3915__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4249;
  } else {
    goto _4250;
  }

_4250:
  _3881 = *(void**)_3374;
  _3882 = ((&((uint8_t*)_3881)[((int64_t)16)]));
  _3883 = *(uint64_t*)_3882;
  _3884 = ((&((uint8_t*)_3881)[((int64_t)8)]));
  _3885 = *(uint64_t*)_3884;
  if ((((int64_t)_3885) > ((int64_t)_3883))) {
    goto _4251;
  } else {
    _3902__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4252;
  }

_4251:
  _3886 = *(void**)_3881;
  _3887 = *(uint8_t*)(((&((uint8_t*)_3886)[((int64_t)_3883)])));
  *(uint64_t*)_3882 = (llvm_add_u64(_3883, 1));
  _3888 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3887)), 0);
  _3889 = llvm_sub_u8(32, (llvm_shl_u8(_3888, 3)));
  _3890 = (((uint32_t)(uint8_t)_3887)) << 24;
  if ((((uint8_t)_3889) > ((uint8_t)((uint8_t)16)))) {
    _3902__PHI_TEMPORARY = _3890;   /* for PHI node */
    goto _4252;
  } else {
    _3891__PHI_TEMPORARY = 16;   /* for PHI node */
    _3892__PHI_TEMPORARY = _3890;   /* for PHI node */
    goto _4253;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4253:
  _3891 = _3891__PHI_TEMPORARY;
  _3892 = _3892__PHI_TEMPORARY;
  if (((((int64_t)_3891) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3891) < ((uint64_t)(((uint64_t)(uint8_t)_3889)))))) {
    _3902__PHI_TEMPORARY = _3892;   /* for PHI node */
    goto _4252;
  } else {
    goto _4254;
  }

_4254:
  _3893 = *(uint64_t*)_3882;
  _3894 = *(uint64_t*)_3884;
  if ((((int64_t)_3894) > ((int64_t)_3893))) {
    goto _4255;
  } else {
    _3902__PHI_TEMPORARY = _3892;   /* for PHI node */
    goto _4252;
  }

_4255:
  _3895 = *(void**)_3881;
  _3896 = *(uint8_t*)(((&((uint8_t*)_3895)[((int64_t)_3893)])));
  if ((((int8_t)_3896) > ((int8_t)((uint8_t)-65)))) {
    _3902__PHI_TEMPORARY = _3892;   /* for PHI node */
    goto _4252;
  } else {
    goto _4256;
  }

_4256:
  _3897 = llvm_select_u32((((int64_t)_3893) < ((int64_t)_3894)), (((uint32_t)(uint8_t)_3896)), 0);
  _3898 = *(uint64_t*)_3882;
  *(uint64_t*)_3882 = (llvm_add_u64(_3898, 1));
  _3899 = llvm_neg_u64(_3891);
  _3900 = _3892 | (llvm_select_u32((((int64_t)_3891) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3899) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3897, (((uint32_t)_3899)))))), (llvm_select_u32((((uint64_t)_3891) > ((uint64_t)UINT64_C(31))), 0, (_3897 << (((uint32_t)_3891)))))));
  _3901 = llvm_add_u64(_3891, -8);
  _3891__PHI_TEMPORARY = _3901;   /* for PHI node */
  _3892__PHI_TEMPORARY = _3900;   /* for PHI node */
  goto _4253;

  } while (1); /* end of syntactic loop '' */
_4252:
  _3902 = _3902__PHI_TEMPORARY;
  _3903 = *(uint64_t*)_3391;
  _3904 = *(uint64_t*)_3393;
  _3905 = jsyn_cbe_fshl_i64(_3904, _3903, 32);
  _3906 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3902)), _3904, 32);
  *(uint64_t*)_3391 = _3905;
  *(uint64_t*)_3393 = _3906;
  _3907 = *(uint64_t*)_3840;
  _3908 = *(uint64_t*)_3870;
  _3909 = *(uint64_t*)_3872;
  _3910 = *(void**)_3374;
  _3911 = *(uint64_t*)(((&((uint8_t*)_3910)[((int64_t)16)])));
  *(uint64_t*)_3838 = _3907;
  *(uint64_t*)_3840 = _3908;
  *(uint64_t*)_3870 = _3909;
  *(uint64_t*)_3872 = _3911;
  _3912 = julia_accept_number_4515(_3373, _3374);
  _3913 = ((bool)(llvm_or_u8(_3876, _3912))&1u);
  _3914__PHI_TEMPORARY = _3913;   /* for PHI node */
  _3915__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _4249;

_4249:
  _3914 = _3914__PHI_TEMPORARY;
  _3915 = _3915__PHI_TEMPORARY;
  _3916 = *(uint64_t*)_3391;
  if (((_3916 & INT64_C(-2305843013508661248)) == UINT64_C(5764607523034234880))) {
    goto _4257;
  } else {
    goto _4258;
  }

_4257:
  _3917 = *(void**)_3374;
  _3918 = ((&((uint8_t*)_3917)[((int64_t)16)]));
  _3919 = *(uint64_t*)_3918;
  _3920 = ((&((uint8_t*)_3917)[((int64_t)8)]));
  _3921 = *(uint64_t*)_3920;
  if ((((int64_t)_3921) > ((int64_t)_3919))) {
    goto _4259;
  } else {
    _3938__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4260;
  }

_4259:
  _3922 = *(void**)_3917;
  _3923 = *(uint8_t*)(((&((uint8_t*)_3922)[((int64_t)_3919)])));
  *(uint64_t*)_3918 = (llvm_add_u64(_3919, 1));
  _3924 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3923)), 0);
  _3925 = llvm_sub_u8(32, (llvm_shl_u8(_3924, 3)));
  _3926 = (((uint32_t)(uint8_t)_3923)) << 24;
  if ((((uint8_t)_3925) > ((uint8_t)((uint8_t)16)))) {
    _3938__PHI_TEMPORARY = _3926;   /* for PHI node */
    goto _4260;
  } else {
    _3927__PHI_TEMPORARY = 16;   /* for PHI node */
    _3928__PHI_TEMPORARY = _3926;   /* for PHI node */
    goto _4261;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4261:
  _3927 = _3927__PHI_TEMPORARY;
  _3928 = _3928__PHI_TEMPORARY;
  if (((((int64_t)_3927) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3927) < ((uint64_t)(((uint64_t)(uint8_t)_3925)))))) {
    _3938__PHI_TEMPORARY = _3928;   /* for PHI node */
    goto _4260;
  } else {
    goto _4262;
  }

_4262:
  _3929 = *(uint64_t*)_3918;
  _3930 = *(uint64_t*)_3920;
  if ((((int64_t)_3930) > ((int64_t)_3929))) {
    goto _4263;
  } else {
    _3938__PHI_TEMPORARY = _3928;   /* for PHI node */
    goto _4260;
  }

_4263:
  _3931 = *(void**)_3917;
  _3932 = *(uint8_t*)(((&((uint8_t*)_3931)[((int64_t)_3929)])));
  if ((((int8_t)_3932) > ((int8_t)((uint8_t)-65)))) {
    _3938__PHI_TEMPORARY = _3928;   /* for PHI node */
    goto _4260;
  } else {
    goto _4264;
  }

_4264:
  _3933 = llvm_select_u32((((int64_t)_3929) < ((int64_t)_3930)), (((uint32_t)(uint8_t)_3932)), 0);
  _3934 = *(uint64_t*)_3918;
  *(uint64_t*)_3918 = (llvm_add_u64(_3934, 1));
  _3935 = llvm_neg_u64(_3927);
  _3936 = _3928 | (llvm_select_u32((((int64_t)_3927) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3935) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3933, (((uint32_t)_3935)))))), (llvm_select_u32((((uint64_t)_3927) > ((uint64_t)UINT64_C(31))), 0, (_3933 << (((uint32_t)_3927)))))));
  _3937 = llvm_add_u64(_3927, -8);
  _3927__PHI_TEMPORARY = _3937;   /* for PHI node */
  _3928__PHI_TEMPORARY = _3936;   /* for PHI node */
  goto _4261;

  } while (1); /* end of syntactic loop '' */
_4260:
  _3938 = _3938__PHI_TEMPORARY;
  _3939 = *(uint64_t*)_3391;
  _3940 = *(uint64_t*)_3393;
  _3941 = jsyn_cbe_fshl_i64(_3940, _3939, 32);
  _3942 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3938)), _3940, 32);
  *(uint64_t*)_3391 = _3941;
  *(uint64_t*)_3393 = _3942;
  _3943 = *(uint64_t*)_3840;
  _3944 = *(uint64_t*)_3870;
  _3945 = *(uint64_t*)_3872;
  _3946 = *(void**)_3374;
  _3947 = *(uint64_t*)(((&((uint8_t*)_3946)[((int64_t)16)])));
  *(uint64_t*)_3838 = _3943;
  *(uint64_t*)_3840 = _3944;
  *(uint64_t*)_3870 = _3945;
  *(uint64_t*)_3872 = _3947;
  _3948 = *(uint64_t*)_3391;
  switch ((((uint32_t)(llvm_lshr_u64(_3948, 32))))) {
  default:
    goto _4265;
  case 721420288u:
    goto _4266;
  case 3800601088u:
    goto _4266;
  case 754974720u:
    goto _4266;
  }

_4266:
  _3949 = *(void**)_3374;
  _3950 = ((&((uint8_t*)_3949)[((int64_t)16)]));
  _3951 = *(uint64_t*)_3950;
  _3952 = ((&((uint8_t*)_3949)[((int64_t)8)]));
  _3953 = *(uint64_t*)_3952;
  if ((((int64_t)_3953) > ((int64_t)_3951))) {
    goto _4267;
  } else {
    _3970__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4268;
  }

_4267:
  _3954 = *(void**)_3949;
  _3955 = *(uint8_t*)(((&((uint8_t*)_3954)[((int64_t)_3951)])));
  *(uint64_t*)_3950 = (llvm_add_u64(_3951, 1));
  _3956 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3955)), 0);
  _3957 = llvm_sub_u8(32, (llvm_shl_u8(_3956, 3)));
  _3958 = (((uint32_t)(uint8_t)_3955)) << 24;
  if ((((uint8_t)_3957) > ((uint8_t)((uint8_t)16)))) {
    _3970__PHI_TEMPORARY = _3958;   /* for PHI node */
    goto _4268;
  } else {
    _3959__PHI_TEMPORARY = 16;   /* for PHI node */
    _3960__PHI_TEMPORARY = _3958;   /* for PHI node */
    goto _4269;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4269:
  _3959 = _3959__PHI_TEMPORARY;
  _3960 = _3960__PHI_TEMPORARY;
  if (((((int64_t)_3959) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3959) < ((uint64_t)(((uint64_t)(uint8_t)_3957)))))) {
    _3970__PHI_TEMPORARY = _3960;   /* for PHI node */
    goto _4268;
  } else {
    goto _4270;
  }

_4270:
  _3961 = *(uint64_t*)_3950;
  _3962 = *(uint64_t*)_3952;
  if ((((int64_t)_3962) > ((int64_t)_3961))) {
    goto _4271;
  } else {
    _3970__PHI_TEMPORARY = _3960;   /* for PHI node */
    goto _4268;
  }

_4271:
  _3963 = *(void**)_3949;
  _3964 = *(uint8_t*)(((&((uint8_t*)_3963)[((int64_t)_3961)])));
  if ((((int8_t)_3964) > ((int8_t)((uint8_t)-65)))) {
    _3970__PHI_TEMPORARY = _3960;   /* for PHI node */
    goto _4268;
  } else {
    goto _4272;
  }

_4272:
  _3965 = llvm_select_u32((((int64_t)_3961) < ((int64_t)_3962)), (((uint32_t)(uint8_t)_3964)), 0);
  _3966 = *(uint64_t*)_3950;
  *(uint64_t*)_3950 = (llvm_add_u64(_3966, 1));
  _3967 = llvm_neg_u64(_3959);
  _3968 = _3960 | (llvm_select_u32((((int64_t)_3959) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_3967) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3965, (((uint32_t)_3967)))))), (llvm_select_u32((((uint64_t)_3959) > ((uint64_t)UINT64_C(31))), 0, (_3965 << (((uint32_t)_3959)))))));
  _3969 = llvm_add_u64(_3959, -8);
  _3959__PHI_TEMPORARY = _3969;   /* for PHI node */
  _3960__PHI_TEMPORARY = _3968;   /* for PHI node */
  goto _4269;

  } while (1); /* end of syntactic loop '' */
_4268:
  _3970 = _3970__PHI_TEMPORARY;
  _3971 = *(uint64_t*)_3391;
  _3972 = *(uint64_t*)_3393;
  _3973 = jsyn_cbe_fshl_i64(_3972, _3971, 32);
  _3974 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_3970)), _3972, 32);
  *(uint64_t*)_3391 = _3973;
  *(uint64_t*)_3393 = _3974;
  _3975 = *(uint64_t*)_3840;
  _3976 = *(uint64_t*)_3870;
  _3977 = *(uint64_t*)_3872;
  _3978 = *(void**)_3374;
  _3979 = *(uint64_t*)(((&((uint8_t*)_3978)[((int64_t)16)])));
  *(uint64_t*)_3838 = _3975;
  *(uint64_t*)_3840 = _3976;
  *(uint64_t*)_3870 = _3977;
  *(uint64_t*)_3872 = _3979;
  goto _4265;

_4265:
  _3980 = julia_accept_number_4512(_3373, _3374);
  if ((llvm_select_bool((((bool)_3980&1u)), _3914, 0))) {
    _3981__PHI_TEMPORARY = 48;   /* for PHI node */
    goto _4273;
  } else {
    goto _4274;
  }

_4274:
  julia_emit_4484((&_3387), _3373, _3374, 754, 1);
  _3397__PHI_TEMPORARY = (&_3387);   /* for PHI node */
  goto _4113;

_4258:
  if (_3915) {
    _3981__PHI_TEMPORARY = 46;   /* for PHI node */
    goto _4273;
  } else {
    goto _4275;
  }

_4275:
  julia_emit_4484((&_3389), _3373, _3374, 755, 1);
  _3397__PHI_TEMPORARY = (&_3389);   /* for PHI node */
  goto _4113;

_4273:
  _3981 = _3981__PHI_TEMPORARY;
  _3982 = _3915 ^ 1;
  _4053__PHI_TEMPORARY = _3982;   /* for PHI node */
  _4054__PHI_TEMPORARY = _3914;   /* for PHI node */
  _4055__PHI_TEMPORARY = 1;   /* for PHI node */
  _4056__PHI_TEMPORARY = _3981;   /* for PHI node */
  goto _4238;

_4240:
  _3983 = *(void**)_3374;
  _3984 = ((&((uint8_t*)_3983)[((int64_t)16)]));
  _3985 = *(uint64_t*)_3984;
  _3986 = ((&((uint8_t*)_3983)[((int64_t)8)]));
  _3987 = *(uint64_t*)_3986;
  if ((((int64_t)_3987) > ((int64_t)_3985))) {
    goto _4276;
  } else {
    _4004__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4277;
  }

_4276:
  _3988 = *(void**)_3983;
  _3989 = *(uint8_t*)(((&((uint8_t*)_3988)[((int64_t)_3985)])));
  *(uint64_t*)_3984 = (llvm_add_u64(_3985, 1));
  _3990 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_3989)), 0);
  _3991 = llvm_sub_u8(32, (llvm_shl_u8(_3990, 3)));
  _3992 = (((uint32_t)(uint8_t)_3989)) << 24;
  if ((((uint8_t)_3991) > ((uint8_t)((uint8_t)16)))) {
    _4004__PHI_TEMPORARY = _3992;   /* for PHI node */
    goto _4277;
  } else {
    _3993__PHI_TEMPORARY = 16;   /* for PHI node */
    _3994__PHI_TEMPORARY = _3992;   /* for PHI node */
    goto _4278;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4278:
  _3993 = _3993__PHI_TEMPORARY;
  _3994 = _3994__PHI_TEMPORARY;
  if (((((int64_t)_3993) < ((int64_t)UINT64_C(0))) | (((uint64_t)_3993) < ((uint64_t)(((uint64_t)(uint8_t)_3991)))))) {
    _4004__PHI_TEMPORARY = _3994;   /* for PHI node */
    goto _4277;
  } else {
    goto _4279;
  }

_4279:
  _3995 = *(uint64_t*)_3984;
  _3996 = *(uint64_t*)_3986;
  if ((((int64_t)_3996) > ((int64_t)_3995))) {
    goto _4280;
  } else {
    _4004__PHI_TEMPORARY = _3994;   /* for PHI node */
    goto _4277;
  }

_4280:
  _3997 = *(void**)_3983;
  _3998 = *(uint8_t*)(((&((uint8_t*)_3997)[((int64_t)_3995)])));
  if ((((int8_t)_3998) > ((int8_t)((uint8_t)-65)))) {
    _4004__PHI_TEMPORARY = _3994;   /* for PHI node */
    goto _4277;
  } else {
    goto _4281;
  }

_4281:
  _3999 = llvm_select_u32((((int64_t)_3995) < ((int64_t)_3996)), (((uint32_t)(uint8_t)_3998)), 0);
  _4000 = *(uint64_t*)_3984;
  *(uint64_t*)_3984 = (llvm_add_u64(_4000, 1));
  _4001 = llvm_neg_u64(_3993);
  _4002 = _3994 | (llvm_select_u32((((int64_t)_3993) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4001) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_3999, (((uint32_t)_4001)))))), (llvm_select_u32((((uint64_t)_3993) > ((uint64_t)UINT64_C(31))), 0, (_3999 << (((uint32_t)_3993)))))));
  _4003 = llvm_add_u64(_3993, -8);
  _3993__PHI_TEMPORARY = _4003;   /* for PHI node */
  _3994__PHI_TEMPORARY = _4002;   /* for PHI node */
  goto _4278;

  } while (1); /* end of syntactic loop '' */
_4277:
  _4004 = _4004__PHI_TEMPORARY;
  _4005 = *(uint64_t*)_3391;
  _4006 = *(uint64_t*)_3393;
  _4007 = jsyn_cbe_fshl_i64(_4006, _4005, 32);
  _4008 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4004)), _4006, 32);
  *(uint64_t*)_3391 = _4007;
  *(uint64_t*)_3393 = _4008;
  _4009 = *(uint64_t*)_3840;
  _4010 = ((&((uint8_t*)_3374)[((int64_t)64)]));
  _4011 = *(uint64_t*)_4010;
  _4012 = ((&((uint8_t*)_3374)[((int64_t)72)]));
  _4013 = *(uint64_t*)_4012;
  _4014 = *(void**)_3374;
  _4015 = *(uint64_t*)(((&((uint8_t*)_4014)[((int64_t)16)])));
  *(uint64_t*)_3838 = _4009;
  *(uint64_t*)_3840 = _4011;
  *(uint64_t*)_4010 = _4013;
  *(uint64_t*)_4012 = _4015;
  _4016 = julia_accept_number_4509(_3373, _3374);
  _4017 = ((bool)_4016&1u);
  _4053__PHI_TEMPORARY = 0;   /* for PHI node */
  _4054__PHI_TEMPORARY = _4017;   /* for PHI node */
  _4055__PHI_TEMPORARY = 1;   /* for PHI node */
  _4056__PHI_TEMPORARY = 45;   /* for PHI node */
  goto _4238;

_4241:
  _4018 = *(void**)_3374;
  _4019 = ((&((uint8_t*)_4018)[((int64_t)16)]));
  _4020 = *(uint64_t*)_4019;
  _4021 = ((&((uint8_t*)_4018)[((int64_t)8)]));
  _4022 = *(uint64_t*)_4021;
  if ((((int64_t)_4022) > ((int64_t)_4020))) {
    goto _4282;
  } else {
    _4039__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4283;
  }

_4282:
  _4023 = *(void**)_4018;
  _4024 = *(uint8_t*)(((&((uint8_t*)_4023)[((int64_t)_4020)])));
  *(uint64_t*)_4019 = (llvm_add_u64(_4020, 1));
  _4025 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4024)), 0);
  _4026 = llvm_sub_u8(32, (llvm_shl_u8(_4025, 3)));
  _4027 = (((uint32_t)(uint8_t)_4024)) << 24;
  if ((((uint8_t)_4026) > ((uint8_t)((uint8_t)16)))) {
    _4039__PHI_TEMPORARY = _4027;   /* for PHI node */
    goto _4283;
  } else {
    _4028__PHI_TEMPORARY = 16;   /* for PHI node */
    _4029__PHI_TEMPORARY = _4027;   /* for PHI node */
    goto _4284;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4284:
  _4028 = _4028__PHI_TEMPORARY;
  _4029 = _4029__PHI_TEMPORARY;
  if (((((int64_t)_4028) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4028) < ((uint64_t)(((uint64_t)(uint8_t)_4026)))))) {
    _4039__PHI_TEMPORARY = _4029;   /* for PHI node */
    goto _4283;
  } else {
    goto _4285;
  }

_4285:
  _4030 = *(uint64_t*)_4019;
  _4031 = *(uint64_t*)_4021;
  if ((((int64_t)_4031) > ((int64_t)_4030))) {
    goto _4286;
  } else {
    _4039__PHI_TEMPORARY = _4029;   /* for PHI node */
    goto _4283;
  }

_4286:
  _4032 = *(void**)_4018;
  _4033 = *(uint8_t*)(((&((uint8_t*)_4032)[((int64_t)_4030)])));
  if ((((int8_t)_4033) > ((int8_t)((uint8_t)-65)))) {
    _4039__PHI_TEMPORARY = _4029;   /* for PHI node */
    goto _4283;
  } else {
    goto _4287;
  }

_4287:
  _4034 = llvm_select_u32((((int64_t)_4030) < ((int64_t)_4031)), (((uint32_t)(uint8_t)_4033)), 0);
  _4035 = *(uint64_t*)_4019;
  *(uint64_t*)_4019 = (llvm_add_u64(_4035, 1));
  _4036 = llvm_neg_u64(_4028);
  _4037 = _4029 | (llvm_select_u32((((int64_t)_4028) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4036) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4034, (((uint32_t)_4036)))))), (llvm_select_u32((((uint64_t)_4028) > ((uint64_t)UINT64_C(31))), 0, (_4034 << (((uint32_t)_4028)))))));
  _4038 = llvm_add_u64(_4028, -8);
  _4028__PHI_TEMPORARY = _4038;   /* for PHI node */
  _4029__PHI_TEMPORARY = _4037;   /* for PHI node */
  goto _4284;

  } while (1); /* end of syntactic loop '' */
_4283:
  _4039 = _4039__PHI_TEMPORARY;
  _4040 = *(uint64_t*)_3391;
  _4041 = *(uint64_t*)_3393;
  _4042 = jsyn_cbe_fshl_i64(_4041, _4040, 32);
  _4043 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4039)), _4041, 32);
  *(uint64_t*)_3391 = _4042;
  *(uint64_t*)_3393 = _4043;
  _4044 = *(uint64_t*)_3840;
  _4045 = ((&((uint8_t*)_3374)[((int64_t)64)]));
  _4046 = *(uint64_t*)_4045;
  _4047 = ((&((uint8_t*)_3374)[((int64_t)72)]));
  _4048 = *(uint64_t*)_4047;
  _4049 = *(void**)_3374;
  _4050 = *(uint64_t*)(((&((uint8_t*)_4049)[((int64_t)16)])));
  *(uint64_t*)_3838 = _4044;
  *(uint64_t*)_3840 = _4046;
  *(uint64_t*)_4045 = _4048;
  *(uint64_t*)_4047 = _4050;
  _4051 = julia_accept_number_4506(_3373, _3374);
  _4052 = ((bool)_4051&1u);
  _4053__PHI_TEMPORARY = 0;   /* for PHI node */
  _4054__PHI_TEMPORARY = _4052;   /* for PHI node */
  _4055__PHI_TEMPORARY = 1;   /* for PHI node */
  _4056__PHI_TEMPORARY = 47;   /* for PHI node */
  goto _4238;

_4238:
  _4053 = _4053__PHI_TEMPORARY;
  _4054 = _4054__PHI_TEMPORARY;
  _4055 = _4055__PHI_TEMPORARY;
  _4056 = _4056__PHI_TEMPORARY;
  if (_4053) {
    _4107__PHI_TEMPORARY = _4056;   /* for PHI node */
    goto _4173;
  } else {
    goto _4288;
  }

_4288:
  _4057 = *(uint64_t*)_3391;
  _4058 = llvm_lshr_u64(_4057, 32);
  _4059 = ((uint32_t)_4058);
  if (_4055) {
    goto _4289;
  } else {
    goto _4290;
  }

_4291:
  if ((((((uint64_t)_4057) < ((uint64_t)UINT64_C(3458764518115508224))) & (_4058 != UINT64_C(805306368))) | ((((uint64_t)_4057) > ((uint64_t)UINT64_C(4107282860161892351))) & (_4058 != UINT64_C(956301312))))) {
    goto _4292;
  } else {
    goto _4293;
  }

_4292:
  if ((_4058 == UINT64_C(4294967295))) {
    _4107__PHI_TEMPORARY = _4056;   /* for PHI node */
    goto _4173;
  } else {
    goto _4294;
  }

_4294:
  _4060 = llvm_OC_ctlz_OC_i32((_4059 ^ -1), 0);
  _4061 = ((uint64_t)(uint32_t)_4060);
  _4062 = llvm_OC_cttz_OC_i32(_4059, 0);
  _4063 = _4062 & 56;
  _4064 = ((uint64_t)(uint32_t)_4063);
  _4065 = llvm_select_bool((((uint32_t)_4062) < ((uint32_t)32u)), ((llvm_lshr_u32(((_4059 & 12632256) ^ 8421504), _4063)) != 0u), 0);
  _4066 = (((_4059 & -33554432) == 3221225472u) | ((_4059 & -2097152) == 3766484992u)) | ((_4059 & -1048576) == 4034920448u);
  if ((llvm_select_bool((((((_4060 == 1u) | (((uint64_t)(llvm_add_u64((_4061 << 3), _4064))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_4057) > ((uint64_t)UINT64_C(17122614315006820351))) & (_4058 != UINT64_C(3986669312))) & (((((uint64_t)_4057) < ((uint64_t)UINT64_C(17185876919829135360))) & (_4058 != UINT64_C(4001398784))) | ((((uint64_t)_4057) > ((uint64_t)UINT64_C(17622514693983698943))) & (_4058 != UINT64_C(4103061439)))))) | _4065) | _4066), 1, (_4058 == UINT64_C(4036993714))))) {
    _4107__PHI_TEMPORARY = _4056;   /* for PHI node */
    goto _4173;
  } else {
    goto _4295;
  }

_4295:
  _4067 = llvm_lshr_u32(_4059, 24);
  if ((((int64_t)_4057) < ((int64_t)UINT64_C(0)))) {
    goto _4296;
  } else {
    _4070__PHI_TEMPORARY = _4067;   /* for PHI node */
    goto _4297;
  }

_4296:
  if ((((_4060 == 1u) | (((uint64_t)(llvm_add_u64((_4061 << 3), _4064))) > ((uint64_t)UINT64_C(32)))) | (_4065 | _4066))) {
    goto _4298;
  } else {
    goto _4299;
  }

_4298:
  julia_throw_invalid_char_2796(_3373, _4059);
  __builtin_unreachable();

_4299:
  _4068 = llvm_select_u32((((uint32_t)_4062) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _4060)) & _4059), _4063)), 0);
  _4069 = (((_4068 & 127) | ((llvm_lshr_u32(_4068, 2)) & 8128)) | ((llvm_lshr_u32(_4068, 4)) & 520192)) | ((llvm_lshr_u32(_4068, 6)) & 33292288);
  _4070__PHI_TEMPORARY = _4069;   /* for PHI node */
  goto _4297;

_4297:
  _4070 = _4070__PHI_TEMPORARY;
  _4071 = jsk_jl_id_start_char(_4070);
  if ((_4071 == 0u)) {
    _4107__PHI_TEMPORARY = _4056;   /* for PHI node */
    goto _4173;
  } else {
    goto _4293;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4293:
  _4072 = *(uint64_t*)_3391;
  _4073 = julia_YY_OC_lex_digitYY_OC_YY_OC_0_4503(_3373, (((uint32_t)(llvm_lshr_u64(_4072, 32)))));
  if ((((bool)_4073&1u))) {
    goto _4300;
  } else {
    goto _4301;
  }

_4300:
  _4074 = *(void**)_3374;
  _4075 = ((&((uint8_t*)_4074)[((int64_t)16)]));
  _4076 = *(uint64_t*)_4075;
  _4077 = ((&((uint8_t*)_4074)[((int64_t)8)]));
  _4078 = *(uint64_t*)_4077;
  if ((((int64_t)_4078) > ((int64_t)_4076))) {
    goto _4302;
  } else {
    _4095__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4303;
  }

_4302:
  _4079 = *(void**)_4074;
  _4080 = *(uint8_t*)(((&((uint8_t*)_4079)[((int64_t)_4076)])));
  *(uint64_t*)_4075 = (llvm_add_u64(_4076, 1));
  _4081 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4080)), 0);
  _4082 = llvm_sub_u8(32, (llvm_shl_u8(_4081, 3)));
  _4083 = (((uint32_t)(uint8_t)_4080)) << 24;
  if ((((uint8_t)_4082) > ((uint8_t)((uint8_t)16)))) {
    _4095__PHI_TEMPORARY = _4083;   /* for PHI node */
    goto _4303;
  } else {
    _4084__PHI_TEMPORARY = 16;   /* for PHI node */
    _4085__PHI_TEMPORARY = _4083;   /* for PHI node */
    goto _4304;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4304:
  _4084 = _4084__PHI_TEMPORARY;
  _4085 = _4085__PHI_TEMPORARY;
  if (((((int64_t)_4084) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4084) < ((uint64_t)(((uint64_t)(uint8_t)_4082)))))) {
    _4095__PHI_TEMPORARY = _4085;   /* for PHI node */
    goto _4303;
  } else {
    goto _4305;
  }

_4305:
  _4086 = *(uint64_t*)_4075;
  _4087 = *(uint64_t*)_4077;
  if ((((int64_t)_4087) > ((int64_t)_4086))) {
    goto _4306;
  } else {
    _4095__PHI_TEMPORARY = _4085;   /* for PHI node */
    goto _4303;
  }

_4306:
  _4088 = *(void**)_4074;
  _4089 = *(uint8_t*)(((&((uint8_t*)_4088)[((int64_t)_4086)])));
  if ((((int8_t)_4089) > ((int8_t)((uint8_t)-65)))) {
    _4095__PHI_TEMPORARY = _4085;   /* for PHI node */
    goto _4303;
  } else {
    goto _4307;
  }

_4307:
  _4090 = llvm_select_u32((((int64_t)_4086) < ((int64_t)_4087)), (((uint32_t)(uint8_t)_4089)), 0);
  _4091 = *(uint64_t*)_4075;
  *(uint64_t*)_4075 = (llvm_add_u64(_4091, 1));
  _4092 = llvm_neg_u64(_4084);
  _4093 = _4085 | (llvm_select_u32((((int64_t)_4084) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4092) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4090, (((uint32_t)_4092)))))), (llvm_select_u32((((uint64_t)_4084) > ((uint64_t)UINT64_C(31))), 0, (_4090 << (((uint32_t)_4084)))))));
  _4094 = llvm_add_u64(_4084, -8);
  _4084__PHI_TEMPORARY = _4094;   /* for PHI node */
  _4085__PHI_TEMPORARY = _4093;   /* for PHI node */
  goto _4304;

  } while (1); /* end of syntactic loop '' */
_4303:
  _4095 = _4095__PHI_TEMPORARY;
  _4096 = *(uint64_t*)_3391;
  _4097 = *(uint64_t*)_3393;
  _4098 = jsyn_cbe_fshl_i64(_4097, _4096, 32);
  _4099 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4095)), _4097, 32);
  *(uint64_t*)_3391 = _4098;
  *(uint64_t*)_3393 = _4099;
  _4100 = *(uint64_t*)_3840;
  _4101 = ((&((uint8_t*)_3374)[((int64_t)64)]));
  _4102 = *(uint64_t*)_4101;
  _4103 = ((&((uint8_t*)_3374)[((int64_t)72)]));
  _4104 = *(uint64_t*)_4103;
  _4105 = *(void**)_3374;
  _4106 = *(uint64_t*)(((&((uint8_t*)_4105)[((int64_t)16)])));
  *(uint64_t*)_3838 = _4100;
  *(uint64_t*)_3840 = _4102;
  *(uint64_t*)_4101 = _4104;
  *(uint64_t*)_4103 = _4106;
  goto _4293;

  } while (1); /* end of syntactic loop '' */
_4301:
  julia_emit_4484((&_3388), _3373, _3374, 754, 1);
  _3397__PHI_TEMPORARY = (&_3388);   /* for PHI node */
  goto _4113;

_4173:
  _4107 = _4107__PHI_TEMPORARY;
  julia_emit_4484((&_3381), _3373, _3374, _4107, 1);
  _3397__PHI_TEMPORARY = (&_3381);   /* for PHI node */
  goto _4113;

_4290:
  jsk_ijl_undefined_var_error((((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)232)]))), (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)264)]))));
  __builtin_unreachable();

_4289:
  if (_4054) {
    goto _4291;
  } else {
    goto _4293;
  }

}


static uint8_t julia_accept_number_4506(void* _4308, void* _4309) {
  uint8_t _4310;
  uint8_t _4310__PHI_TEMPORARY;
  void* _4311;
  uint64_t _4312;
  uint64_t _4313;
  void* _4314;
  uint64_t _4315;
  uint64_t _4316;
  void* _4317;
  void* _4318;
  uint64_t _4319;
  void* _4320;
  uint64_t _4321;
  void* _4322;
  uint8_t _4323;
  uint8_t _4324;
  uint8_t _4325;
  uint32_t _4326;
  uint64_t _4327;
  uint64_t _4327__PHI_TEMPORARY;
  uint32_t _4328;
  uint32_t _4328__PHI_TEMPORARY;
  uint64_t _4329;
  uint64_t _4330;
  void* _4331;
  uint8_t _4332;
  uint32_t _4333;
  uint64_t _4334;
  uint64_t _4335;
  uint32_t _4336;
  uint64_t _4337;
  uint32_t _4338;
  uint32_t _4338__PHI_TEMPORARY;
  uint64_t _4339;
  uint64_t _4340;
  uint64_t _4341;
  uint64_t _4342;
  void* _4343;
  uint64_t _4344;
  void* _4345;
  uint64_t _4346;
  void* _4347;
  uint64_t _4348;
  void* _4349;
  uint64_t _4350;

  _4310__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _4351;

  do {     /* Syntactic loop '' to make GCC happy */
_4351:
  _4310 = _4310__PHI_TEMPORARY;
  _4311 = ((&((uint8_t*)_4309)[((int64_t)32)]));
  _4312 = *(uint64_t*)_4311;
  _4313 = ((uint64_t)_4312);
  _4314 = ((&((uint8_t*)_4309)[((int64_t)40)]));
  _4315 = llvm_lshr_u64(_4313, 32);
  if ((_4315 == UINT64_C(1593835520))) {
    goto _4352;
  } else {
    goto _4353;
  }

_4352:
  _4316 = *(uint64_t*)_4314;
  if ((((uint32_t)(llvm_add_u32((((uint32_t)_4316)), -805306368))) < ((uint32_t)117440513u))) {
    goto _4353;
  } else {
    goto _4354;
  }

_4353:
  if (((((uint64_t)_4313) < ((uint64_t)UINT64_C(3458764518115508224))) & (_4315 != UINT64_C(805306368)))) {
    goto _4355;
  } else {
    goto _4356;
  }

_4356:
  if ((((uint64_t)_4313) < ((uint64_t)UINT64_C(3963167672086036480)))) {
    goto _4357;
  } else {
    goto _4358;
  }

_4358:
  switch ((((uint32_t)_4315))) {
  default:
    goto _4354;
  case 1593835520u:
    goto _4357;
  case 922746880u:
    goto _4357;
  }

_4355:
  if ((_4315 == UINT64_C(1593835520))) {
    goto _4357;
  } else {
    goto _4354;
  }

_4357:
  _4317 = *(void**)_4309;
  _4318 = ((&((uint8_t*)_4317)[((int64_t)16)]));
  _4319 = *(uint64_t*)_4318;
  _4320 = ((&((uint8_t*)_4317)[((int64_t)8)]));
  _4321 = *(uint64_t*)_4320;
  if ((((int64_t)_4321) > ((int64_t)_4319))) {
    goto _4359;
  } else {
    _4338__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4360;
  }

_4359:
  _4322 = *(void**)_4317;
  _4323 = *(uint8_t*)(((&((uint8_t*)_4322)[((int64_t)_4319)])));
  *(uint64_t*)_4318 = (llvm_add_u64(_4319, 1));
  _4324 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4323)), 0);
  _4325 = llvm_sub_u8(32, (llvm_shl_u8(_4324, 3)));
  _4326 = (((uint32_t)(uint8_t)_4323)) << 24;
  if ((((uint8_t)_4325) > ((uint8_t)((uint8_t)16)))) {
    _4338__PHI_TEMPORARY = _4326;   /* for PHI node */
    goto _4360;
  } else {
    _4327__PHI_TEMPORARY = 16;   /* for PHI node */
    _4328__PHI_TEMPORARY = _4326;   /* for PHI node */
    goto _4361;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4361:
  _4327 = _4327__PHI_TEMPORARY;
  _4328 = _4328__PHI_TEMPORARY;
  if (((((int64_t)_4327) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4327) < ((uint64_t)(((uint64_t)(uint8_t)_4325)))))) {
    _4338__PHI_TEMPORARY = _4328;   /* for PHI node */
    goto _4360;
  } else {
    goto _4362;
  }

_4362:
  _4329 = *(uint64_t*)_4318;
  _4330 = *(uint64_t*)_4320;
  if ((((int64_t)_4330) > ((int64_t)_4329))) {
    goto _4363;
  } else {
    _4338__PHI_TEMPORARY = _4328;   /* for PHI node */
    goto _4360;
  }

_4363:
  _4331 = *(void**)_4317;
  _4332 = *(uint8_t*)(((&((uint8_t*)_4331)[((int64_t)_4329)])));
  if ((((int8_t)_4332) > ((int8_t)((uint8_t)-65)))) {
    _4338__PHI_TEMPORARY = _4328;   /* for PHI node */
    goto _4360;
  } else {
    goto _4364;
  }

_4364:
  _4333 = llvm_select_u32((((int64_t)_4329) < ((int64_t)_4330)), (((uint32_t)(uint8_t)_4332)), 0);
  _4334 = *(uint64_t*)_4318;
  *(uint64_t*)_4318 = (llvm_add_u64(_4334, 1));
  _4335 = llvm_neg_u64(_4327);
  _4336 = _4328 | (llvm_select_u32((((int64_t)_4327) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4335) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4333, (((uint32_t)_4335)))))), (llvm_select_u32((((uint64_t)_4327) > ((uint64_t)UINT64_C(31))), 0, (_4333 << (((uint32_t)_4327)))))));
  _4337 = llvm_add_u64(_4327, -8);
  _4327__PHI_TEMPORARY = _4337;   /* for PHI node */
  _4328__PHI_TEMPORARY = _4336;   /* for PHI node */
  goto _4361;

  } while (1); /* end of syntactic loop '' */
_4360:
  _4338 = _4338__PHI_TEMPORARY;
  _4339 = *(uint64_t*)_4311;
  _4340 = *(uint64_t*)_4314;
  _4341 = jsyn_cbe_fshl_i64(_4340, _4339, 32);
  _4342 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4338)), _4340, 32);
  *(uint64_t*)_4311 = _4341;
  *(uint64_t*)_4314 = _4342;
  _4343 = ((&((uint8_t*)_4309)[((int64_t)56)]));
  _4344 = *(uint64_t*)_4343;
  _4345 = ((&((uint8_t*)_4309)[((int64_t)64)]));
  _4346 = *(uint64_t*)_4345;
  _4347 = ((&((uint8_t*)_4309)[((int64_t)72)]));
  _4348 = *(uint64_t*)_4347;
  _4349 = *(void**)_4309;
  _4350 = *(uint64_t*)(((&((uint8_t*)_4349)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4309)[((int64_t)48)]))) = _4344;
  *(uint64_t*)_4343 = _4346;
  *(uint64_t*)_4345 = _4348;
  *(uint64_t*)_4347 = _4350;
  _4310__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _4351;

  } while (1); /* end of syntactic loop '' */
_4354:
  return _4310;
}


static uint8_t julia_accept_number_4509(void* _4365, void* _4366) {
  uint8_t _4367;
  uint8_t _4367__PHI_TEMPORARY;
  void* _4368;
  uint64_t _4369;
  void* _4370;
  uint64_t _4371;
  void* _4372;
  void* _4373;
  uint64_t _4374;
  void* _4375;
  uint64_t _4376;
  void* _4377;
  uint8_t _4378;
  uint8_t _4379;
  uint8_t _4380;
  uint32_t _4381;
  uint64_t _4382;
  uint64_t _4382__PHI_TEMPORARY;
  uint32_t _4383;
  uint32_t _4383__PHI_TEMPORARY;
  uint64_t _4384;
  uint64_t _4385;
  void* _4386;
  uint8_t _4387;
  uint32_t _4388;
  uint64_t _4389;
  uint64_t _4390;
  uint32_t _4391;
  uint64_t _4392;
  uint32_t _4393;
  uint32_t _4393__PHI_TEMPORARY;
  uint64_t _4394;
  uint64_t _4395;
  uint64_t _4396;
  uint64_t _4397;
  void* _4398;
  uint64_t _4399;
  void* _4400;
  uint64_t _4401;
  void* _4402;
  uint64_t _4403;
  void* _4404;
  uint64_t _4405;

  _4367__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _4406;

  do {     /* Syntactic loop '' to make GCC happy */
_4406:
  _4367 = _4367__PHI_TEMPORARY;
  _4368 = ((&((uint8_t*)_4366)[((int64_t)32)]));
  _4369 = *(uint64_t*)_4368;
  _4370 = ((&((uint8_t*)_4366)[((int64_t)40)]));
  if (((_4369 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920))) {
    goto _4407;
  } else {
    goto _4408;
  }

_4407:
  _4371 = *(uint64_t*)_4370;
  if (((_4371 & INT64_C(4278190079)) == UINT64_C(805306368))) {
    goto _4408;
  } else {
    goto _4409;
  }

_4408:
  if ((((_4369 & INT64_C(-72057598332895232)) == UINT64_C(3458764513820540928)) | ((_4369 & INT64_C(-4294967296)) == UINT64_C(6845471433603153920)))) {
    goto _4410;
  } else {
    goto _4409;
  }

_4410:
  _4372 = *(void**)_4366;
  _4373 = ((&((uint8_t*)_4372)[((int64_t)16)]));
  _4374 = *(uint64_t*)_4373;
  _4375 = ((&((uint8_t*)_4372)[((int64_t)8)]));
  _4376 = *(uint64_t*)_4375;
  if ((((int64_t)_4376) > ((int64_t)_4374))) {
    goto _4411;
  } else {
    _4393__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4412;
  }

_4411:
  _4377 = *(void**)_4372;
  _4378 = *(uint8_t*)(((&((uint8_t*)_4377)[((int64_t)_4374)])));
  *(uint64_t*)_4373 = (llvm_add_u64(_4374, 1));
  _4379 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4378)), 0);
  _4380 = llvm_sub_u8(32, (llvm_shl_u8(_4379, 3)));
  _4381 = (((uint32_t)(uint8_t)_4378)) << 24;
  if ((((uint8_t)_4380) > ((uint8_t)((uint8_t)16)))) {
    _4393__PHI_TEMPORARY = _4381;   /* for PHI node */
    goto _4412;
  } else {
    _4382__PHI_TEMPORARY = 16;   /* for PHI node */
    _4383__PHI_TEMPORARY = _4381;   /* for PHI node */
    goto _4413;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4413:
  _4382 = _4382__PHI_TEMPORARY;
  _4383 = _4383__PHI_TEMPORARY;
  if (((((int64_t)_4382) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4382) < ((uint64_t)(((uint64_t)(uint8_t)_4380)))))) {
    _4393__PHI_TEMPORARY = _4383;   /* for PHI node */
    goto _4412;
  } else {
    goto _4414;
  }

_4414:
  _4384 = *(uint64_t*)_4373;
  _4385 = *(uint64_t*)_4375;
  if ((((int64_t)_4385) > ((int64_t)_4384))) {
    goto _4415;
  } else {
    _4393__PHI_TEMPORARY = _4383;   /* for PHI node */
    goto _4412;
  }

_4415:
  _4386 = *(void**)_4372;
  _4387 = *(uint8_t*)(((&((uint8_t*)_4386)[((int64_t)_4384)])));
  if ((((int8_t)_4387) > ((int8_t)((uint8_t)-65)))) {
    _4393__PHI_TEMPORARY = _4383;   /* for PHI node */
    goto _4412;
  } else {
    goto _4416;
  }

_4416:
  _4388 = llvm_select_u32((((int64_t)_4384) < ((int64_t)_4385)), (((uint32_t)(uint8_t)_4387)), 0);
  _4389 = *(uint64_t*)_4373;
  *(uint64_t*)_4373 = (llvm_add_u64(_4389, 1));
  _4390 = llvm_neg_u64(_4382);
  _4391 = _4383 | (llvm_select_u32((((int64_t)_4382) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4390) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4388, (((uint32_t)_4390)))))), (llvm_select_u32((((uint64_t)_4382) > ((uint64_t)UINT64_C(31))), 0, (_4388 << (((uint32_t)_4382)))))));
  _4392 = llvm_add_u64(_4382, -8);
  _4382__PHI_TEMPORARY = _4392;   /* for PHI node */
  _4383__PHI_TEMPORARY = _4391;   /* for PHI node */
  goto _4413;

  } while (1); /* end of syntactic loop '' */
_4412:
  _4393 = _4393__PHI_TEMPORARY;
  _4394 = *(uint64_t*)_4368;
  _4395 = *(uint64_t*)_4370;
  _4396 = jsyn_cbe_fshl_i64(_4395, _4394, 32);
  _4397 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4393)), _4395, 32);
  *(uint64_t*)_4368 = _4396;
  *(uint64_t*)_4370 = _4397;
  _4398 = ((&((uint8_t*)_4366)[((int64_t)56)]));
  _4399 = *(uint64_t*)_4398;
  _4400 = ((&((uint8_t*)_4366)[((int64_t)64)]));
  _4401 = *(uint64_t*)_4400;
  _4402 = ((&((uint8_t*)_4366)[((int64_t)72)]));
  _4403 = *(uint64_t*)_4402;
  _4404 = *(void**)_4366;
  _4405 = *(uint64_t*)(((&((uint8_t*)_4404)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4366)[((int64_t)48)]))) = _4399;
  *(uint64_t*)_4398 = _4401;
  *(uint64_t*)_4400 = _4403;
  *(uint64_t*)_4402 = _4405;
  _4367__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _4406;

  } while (1); /* end of syntactic loop '' */
_4409:
  return _4367;
}


static uint8_t julia_accept_number_4512(void* _4417, void* _4418) {
  uint8_t _4419;
  uint8_t _4419__PHI_TEMPORARY;
  void* _4420;
  uint64_t _4421;
  void* _4422;
  uint64_t _4423;
  uint64_t _4424;
  void* _4425;
  void* _4426;
  uint64_t _4427;
  void* _4428;
  uint64_t _4429;
  void* _4430;
  uint8_t _4431;
  uint8_t _4432;
  uint8_t _4433;
  uint32_t _4434;
  uint64_t _4435;
  uint64_t _4435__PHI_TEMPORARY;
  uint32_t _4436;
  uint32_t _4436__PHI_TEMPORARY;
  uint64_t _4437;
  uint64_t _4438;
  void* _4439;
  uint8_t _4440;
  uint32_t _4441;
  uint64_t _4442;
  uint64_t _4443;
  uint32_t _4444;
  uint64_t _4445;
  uint32_t _4446;
  uint32_t _4446__PHI_TEMPORARY;
  uint64_t _4447;
  uint64_t _4448;
  uint64_t _4449;
  uint64_t _4450;
  void* _4451;
  uint64_t _4452;
  void* _4453;
  uint64_t _4454;
  void* _4455;
  uint64_t _4456;
  void* _4457;
  uint64_t _4458;

  _4419__PHI_TEMPORARY = 0;   /* for PHI node */
  goto _4459;

  do {     /* Syntactic loop '' to make GCC happy */
_4459:
  _4419 = _4419__PHI_TEMPORARY;
  _4420 = ((&((uint8_t*)_4418)[((int64_t)32)]));
  _4421 = *(uint64_t*)_4420;
  _4422 = ((&((uint8_t*)_4418)[((int64_t)40)]));
  _4423 = llvm_lshr_u64(_4421, 32);
  if ((_4423 == UINT64_C(1593835520))) {
    goto _4460;
  } else {
    goto _4461;
  }

_4460:
  _4424 = *(uint64_t*)_4422;
  if ((((uint32_t)(llvm_add_u32((((uint32_t)_4424)), -805306368))) < ((uint32_t)150994945u))) {
    goto _4461;
  } else {
    goto _4462;
  }

_4461:
  if (((((((uint64_t)_4421) > ((uint64_t)UINT64_C(3458764518115508223))) | (_4423 == UINT64_C(805306368))) & ((((uint64_t)_4421) < ((uint64_t)UINT64_C(4107282860161892352))) | (_4423 == UINT64_C(956301312)))) | (_4423 == UINT64_C(1593835520)))) {
    goto _4463;
  } else {
    goto _4462;
  }

_4463:
  _4425 = *(void**)_4418;
  _4426 = ((&((uint8_t*)_4425)[((int64_t)16)]));
  _4427 = *(uint64_t*)_4426;
  _4428 = ((&((uint8_t*)_4425)[((int64_t)8)]));
  _4429 = *(uint64_t*)_4428;
  if ((((int64_t)_4429) > ((int64_t)_4427))) {
    goto _4464;
  } else {
    _4446__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4465;
  }

_4464:
  _4430 = *(void**)_4425;
  _4431 = *(uint8_t*)(((&((uint8_t*)_4430)[((int64_t)_4427)])));
  *(uint64_t*)_4426 = (llvm_add_u64(_4427, 1));
  _4432 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4431)), 0);
  _4433 = llvm_sub_u8(32, (llvm_shl_u8(_4432, 3)));
  _4434 = (((uint32_t)(uint8_t)_4431)) << 24;
  if ((((uint8_t)_4433) > ((uint8_t)((uint8_t)16)))) {
    _4446__PHI_TEMPORARY = _4434;   /* for PHI node */
    goto _4465;
  } else {
    _4435__PHI_TEMPORARY = 16;   /* for PHI node */
    _4436__PHI_TEMPORARY = _4434;   /* for PHI node */
    goto _4466;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4466:
  _4435 = _4435__PHI_TEMPORARY;
  _4436 = _4436__PHI_TEMPORARY;
  if (((((int64_t)_4435) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4435) < ((uint64_t)(((uint64_t)(uint8_t)_4433)))))) {
    _4446__PHI_TEMPORARY = _4436;   /* for PHI node */
    goto _4465;
  } else {
    goto _4467;
  }

_4467:
  _4437 = *(uint64_t*)_4426;
  _4438 = *(uint64_t*)_4428;
  if ((((int64_t)_4438) > ((int64_t)_4437))) {
    goto _4468;
  } else {
    _4446__PHI_TEMPORARY = _4436;   /* for PHI node */
    goto _4465;
  }

_4468:
  _4439 = *(void**)_4425;
  _4440 = *(uint8_t*)(((&((uint8_t*)_4439)[((int64_t)_4437)])));
  if ((((int8_t)_4440) > ((int8_t)((uint8_t)-65)))) {
    _4446__PHI_TEMPORARY = _4436;   /* for PHI node */
    goto _4465;
  } else {
    goto _4469;
  }

_4469:
  _4441 = llvm_select_u32((((int64_t)_4437) < ((int64_t)_4438)), (((uint32_t)(uint8_t)_4440)), 0);
  _4442 = *(uint64_t*)_4426;
  *(uint64_t*)_4426 = (llvm_add_u64(_4442, 1));
  _4443 = llvm_neg_u64(_4435);
  _4444 = _4436 | (llvm_select_u32((((int64_t)_4435) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4443) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4441, (((uint32_t)_4443)))))), (llvm_select_u32((((uint64_t)_4435) > ((uint64_t)UINT64_C(31))), 0, (_4441 << (((uint32_t)_4435)))))));
  _4445 = llvm_add_u64(_4435, -8);
  _4435__PHI_TEMPORARY = _4445;   /* for PHI node */
  _4436__PHI_TEMPORARY = _4444;   /* for PHI node */
  goto _4466;

  } while (1); /* end of syntactic loop '' */
_4465:
  _4446 = _4446__PHI_TEMPORARY;
  _4447 = *(uint64_t*)_4420;
  _4448 = *(uint64_t*)_4422;
  _4449 = jsyn_cbe_fshl_i64(_4448, _4447, 32);
  _4450 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4446)), _4448, 32);
  *(uint64_t*)_4420 = _4449;
  *(uint64_t*)_4422 = _4450;
  _4451 = ((&((uint8_t*)_4418)[((int64_t)56)]));
  _4452 = *(uint64_t*)_4451;
  _4453 = ((&((uint8_t*)_4418)[((int64_t)64)]));
  _4454 = *(uint64_t*)_4453;
  _4455 = ((&((uint8_t*)_4418)[((int64_t)72)]));
  _4456 = *(uint64_t*)_4455;
  _4457 = *(void**)_4418;
  _4458 = *(uint64_t*)(((&((uint8_t*)_4457)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4418)[((int64_t)48)]))) = _4452;
  *(uint64_t*)_4451 = _4454;
  *(uint64_t*)_4453 = _4456;
  *(uint64_t*)_4455 = _4458;
  _4419__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _4459;

  } while (1); /* end of syntactic loop '' */
_4462:
  return _4419;
}


static uint8_t julia_is_operator_start_char_4518(void* _4470, uint32_t _4471) {
  uint32_t _4472;
  uint64_t _4473;
  uint32_t _4474;
  uint32_t _4475;
  uint64_t _4476;
  bool _4477;
  bool _4478;
  uint32_t _4479;
  uint32_t _4480;
  uint32_t _4481;
  uint32_t _4482;
  uint32_t _4482__PHI_TEMPORARY;
  bool _4483;
  bool _4483__PHI_TEMPORARY;
  bool _4484;

  if ((_4471 == 4294967295u)) {
    _4483__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4485;
  } else {
    goto _4486;
  }

_4486:
  _4472 = llvm_OC_ctlz_OC_i32((_4471 ^ -1), 0);
  _4473 = ((uint64_t)(uint32_t)_4472);
  _4474 = llvm_OC_cttz_OC_i32(_4471, 0);
  _4475 = _4474 & 56;
  _4476 = ((uint64_t)(uint32_t)_4475);
  _4477 = llvm_select_bool((((uint32_t)_4474) < ((uint32_t)32u)), ((llvm_lshr_u32(((_4471 & 12632256) ^ 8421504), _4475)) != 0u), 0);
  _4478 = (((_4471 & -33554432) == 3221225472u) | ((_4471 & -2097152) == 3766484992u)) | ((_4471 & -1048576) == 4034920448u);
  if ((((((_4472 == 1u) | (((uint64_t)(llvm_add_u64((_4473 << 3), _4476))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_4471) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_4471, 191905856))) < ((uint32_t)4193304640u)))) | _4477) | _4478)) {
    _4483__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _4485;
  } else {
    goto _4487;
  }

_4487:
  _4479 = llvm_lshr_u32(_4471, 24);
  if ((((int32_t)_4471) < ((int32_t)0u))) {
    goto _4488;
  } else {
    _4482__PHI_TEMPORARY = _4479;   /* for PHI node */
    goto _4489;
  }

_4488:
  if ((((_4472 == 1u) | (((uint64_t)(llvm_add_u64((_4473 << 3), _4476))) > ((uint64_t)UINT64_C(32)))) | (_4477 | _4478))) {
    goto _4490;
  } else {
    goto _4491;
  }

_4490:
  julia_throw_invalid_char_2796(_4470, _4471);
  __builtin_unreachable();

_4491:
  _4480 = llvm_select_u32((((uint32_t)_4474) < ((uint32_t)32u)), (llvm_lshr_u32((_4471 & (llvm_lshr_u32(-1, _4472))), _4475)), 0);
  _4481 = (((_4480 & 127) | ((llvm_lshr_u32(_4480, 2)) & 8128)) | ((llvm_lshr_u32(_4480, 4)) & 520192)) | ((llvm_lshr_u32(_4480, 6)) & 33292288);
  _4482__PHI_TEMPORARY = _4481;   /* for PHI node */
  goto _4489;

_4489:
  _4482 = _4482__PHI_TEMPORARY;
  if ((((llvm_select_bool((((_4482 == 33u) | ((_4482 & -4) == 36u)) | ((_4482 & -2) == 42u)), 1, (((uint32_t)(llvm_add_u32(_4482, -45))) < ((uint32_t)3u)))) | (_4482 == 58u)) | ((_4482 & -4) == 60u))) {
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  } else {
    goto _4492;
  }

_4485:
  _4483 = _4483__PHI_TEMPORARY;
  return (((uint8_t)(bool)_4483));
_4492:
  switch (_4482) {
  default:
    goto _4493;
  case 92u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 94u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 124u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 126u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 166u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 172u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 177u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 183u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 215u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 247u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 903u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8230u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8285u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8523u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8656u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8655u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8654u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8653u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8652u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8651u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8649u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8647u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8646u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8644u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8641u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8640u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8637u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8636u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8635u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8634u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8631u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8630u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8622u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8620u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8619u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8618u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8617u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8614u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8612u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8611u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8610u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8608u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8606u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8605u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8604u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8603u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8602u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8596u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8595u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8594u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8593u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8592u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8658u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8660u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  }

_4493:
  if ((((uint32_t)(llvm_add_u32(_4482, -8666))) < ((uint32_t)4u))) {
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  } else {
    goto _4494;
  }

_4494:
  switch (_4482) {
  default:
    goto _4495;
  case 8672u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8674u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  }

_4495:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_4482, -8692))) < ((uint32_t)12u)), 1, (((uint32_t)(llvm_add_u32(_4482, -8712))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -8722))) < ((uint32_t)3u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -8727))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -8740))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -8759))) < ((uint32_t)2u)))) | ((_4482 & -2) == 8762u)), 1, (((uint32_t)(llvm_add_u32(_4482, -8765))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -8768))) < ((uint32_t)76u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -8845))) < ((uint32_t)16u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -8862))) < ((uint32_t)6u))))) {
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  } else {
    goto _4496;
  }

_4496:
  switch (_4482) {
  default:
    goto _4497;
  case 8873u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8876u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 8878u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  }

_4497:
  if ((llvm_select_bool((llvm_select_bool(((llvm_select_bool(((_4482 & -8) == 8880u), 1, (((uint32_t)(llvm_add_u32(_4482, -8891))) < ((uint32_t)3u)))) | ((_4482 & -4) == 8900u)), 1, (((uint32_t)(llvm_add_u32(_4482, -8905))) < ((uint32_t)11u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -8917))) < ((uint32_t)43u))))) {
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  } else {
    goto _4498;
  }

_4498:
  switch (_4482) {
  default:
    goto _4499;
  case 9023u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 9655u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10178u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  }

_4499:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_4482, -10183))) < ((uint32_t)3u)), 1, (((uint32_t)(llvm_add_u32(_4482, -10193))) < ((uint32_t)2u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -10197))) < ((uint32_t)3u)))) | ((_4482 & -2) == 10224u)), 1, (((uint32_t)(llvm_add_u32(_4482, -10229))) < ((uint32_t)3u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -10233))) < ((uint32_t)7u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -10496))) < ((uint32_t)25u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -10525))) < ((uint32_t)4u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -10564))) < ((uint32_t)45u))))) {
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  } else {
    goto _4500;
  }

_4500:
  switch (_4482) {
  default:
    goto _4501;
  case 10615u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10618u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10760u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10759u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10747u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10746u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10743u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10742u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10740u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10725u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10724u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10723u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10721u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10689u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10688u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10687u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10686u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10684u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10680u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10679u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10781u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  case 10783u:
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  }

_4501:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool((((llvm_select_bool(((llvm_select_bool((llvm_select_bool((llvm_select_bool((llvm_select_bool((((uint32_t)(llvm_add_u32(_4482, -10786))) < ((uint32_t)13u)), 1, (((uint32_t)(llvm_add_u32(_4482, -10800))) < ((uint32_t)14u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -10816))) < ((uint32_t)6u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -10826))) < ((uint32_t)15u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -10842))) < ((uint32_t)10u)))) | ((_4482 & -2) == 10854u)), 1, (((uint32_t)(llvm_add_u32(_4482, -10858))) < ((uint32_t)112u)))) | (_4482 == 10971u)) | ((_4482 & -2) == 10986u)), 1, (((uint32_t)(llvm_add_u32(_4482, -10999))) < ((uint32_t)4u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -11056))) < ((uint32_t)21u)))), 1, (((uint32_t)(llvm_add_u32(_4482, -11079))) < ((uint32_t)6u))))) {
    _4483__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4485;
  } else {
    goto _4502;
  }

_4502:
  _4484 = (((uint32_t)(llvm_add_u32(_4482, -65513))) < ((uint32_t)4u)) | (_4482 == 129202u);
  _4483__PHI_TEMPORARY = _4484;   /* for PHI node */
  goto _4485;

}


static void julia_lex_identifier_4521(void* _4503, void* _4504, void* _4505, uint32_t _4506) {
  __PREFIXALIGN__(16) uint64_t _4507 __POSTFIXALIGN__(16);    /* Address-exposed local */
  __PREFIXALIGN__(16) uint64_t _4508 __POSTFIXALIGN__(16);    /* Address-exposed local */
  struct l_array_4_uint64_t _4509;    /* Address-exposed local */
  struct l_array_4_uint64_t _4510;    /* Address-exposed local */
  struct l_array_4_uint64_t _4511;    /* Address-exposed local */
  uint32_t _4512;
  uint32_t _4513;
  uint32_t _4514;
  uint32_t _4515;
  uint32_t _4516;
  uint32_t _4517;
  uint32_t _4518;
  uint32_t _4518__PHI_TEMPORARY;
  uint32_t _4519;
  uint64_t _4520;
  uint32_t _4521;
  bool _4522;
  bool _4522__PHI_TEMPORARY;
  uint64_t _4523;
  uint64_t _4523__PHI_TEMPORARY;
  uint64_t _4524;
  uint64_t _4524__PHI_TEMPORARY;
  uint32_t _4525;
  uint32_t _4525__PHI_TEMPORARY;
  void* _4526;
  uint64_t _4527;
  void* _4528;
  uint64_t _4529;
  uint32_t _4530;
  uint64_t _4531;
  uint32_t _4532;
  uint32_t _4533;
  bool _4534;
  uint32_t _4535;
  uint32_t _4536;
  uint32_t _4537;
  uint32_t _4538;
  uint32_t _4539;
  uint32_t _4540;
  uint32_t _4541;
  uint32_t _4541__PHI_TEMPORARY;
  uint8_t _4542;
  uint32_t _4543;
  uint64_t _4544;
  uint32_t _4545;
  uint32_t _4546;
  uint64_t _4547;
  bool _4548;
  uint32_t _4549;
  uint64_t _4550;
  uint32_t _4551;
  uint32_t _4552;
  uint64_t _4553;
  bool _4554;
  uint32_t _4555;
  uint32_t _4556;
  uint32_t _4557;
  uint32_t _4558;
  uint32_t _4558__PHI_TEMPORARY;
  uint32_t _4559;
  uint32_t _4560;
  uint32_t _4561;
  uint32_t _4562;
  uint32_t _4562__PHI_TEMPORARY;
  uint8_t _4563;
  uint32_t _4564;
  uint64_t _4565;
  uint32_t _4566;
  uint32_t _4567;
  uint64_t _4568;
  bool _4569;
  bool _4570;
  uint32_t _4571;
  uint32_t _4572;
  uint32_t _4573;
  uint32_t _4574;
  uint32_t _4574__PHI_TEMPORARY;
  uint32_t _4575;
  uint32_t _4576;
  uint32_t _4577;
  uint64_t _4578;
  uint32_t _4579;
  uint32_t _4580;
  uint64_t _4581;
  bool _4582;
  uint32_t _4583;
  uint32_t _4584;
  uint32_t _4585;
  uint32_t _4586;
  uint32_t _4587;
  uint32_t _4587__PHI_TEMPORARY;
  uint8_t _4588;
  void* _4589;
  void* _4590;
  uint64_t _4591;
  void* _4592;
  uint64_t _4593;
  void* _4594;
  uint8_t _4595;
  uint8_t _4596;
  uint8_t _4597;
  uint32_t _4598;
  uint64_t _4599;
  uint64_t _4599__PHI_TEMPORARY;
  uint32_t _4600;
  uint32_t _4600__PHI_TEMPORARY;
  uint64_t _4601;
  uint64_t _4602;
  void* _4603;
  uint8_t _4604;
  uint32_t _4605;
  uint64_t _4606;
  uint64_t _4607;
  uint32_t _4608;
  uint64_t _4609;
  uint32_t _4610;
  uint32_t _4610__PHI_TEMPORARY;
  uint64_t _4611;
  uint64_t _4612;
  uint64_t _4613;
  uint64_t _4614;
  void* _4615;
  uint64_t _4616;
  void* _4617;
  uint64_t _4618;
  void* _4619;
  uint64_t _4620;
  void* _4621;
  uint64_t _4622;
  uint64_t _4623;
  uint32_t _4624;
  uint32_t _4625;
  uint32_t _4626;
  uint32_t _4627;
  uint32_t _4628;
  uint32_t _4629;
  uint32_t _4630;
  uint32_t _4631;
  uint32_t _4631__PHI_TEMPORARY;
  uint32_t _4632;
  uint64_t _4633;
  uint64_t _4634;
  void* _4635;
  void* _4635__PHI_TEMPORARY;
  void* _4636;
  uint64_t _4637;
  uint64_t _4637__PHI_TEMPORARY;
  uint64_t _4638;
  uint64_t _4638__PHI_TEMPORARY;
  uint64_t _4639;
  uint64_t _4640;
  uint64_t _4641;
  uint64_t _4642;
  uint64_t _4643;
  uint16_t _4644;
  uint16_t _4644__PHI_TEMPORARY;
  uint16_t _4645;

  if ((((int32_t)_4506) < ((int32_t)0u))) {
    goto _4646;
  } else {
    goto _4647;
  }

_4647:
  _4512 = llvm_lshr_u32(_4506, 24);
  _4518__PHI_TEMPORARY = _4512;   /* for PHI node */
  goto _4648;

_4646:
  _4513 = llvm_OC_ctlz_OC_i32((_4506 ^ -1), 0);
  _4514 = llvm_OC_cttz_OC_i32(_4506, 1);
  _4515 = _4514 & 24;
  if ((((_4513 != 1u) & (((uint32_t)(llvm_add_u32((_4513 << 3), _4515))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_4506 & 12632256) ^ 8421504), _4515)) == 0u) & ((((_4506 & -33554432) != 3221225472u) & ((_4506 & -2097152) != 3766484992u)) & ((_4506 & -1048576) != 4034920448u))))) {
    goto _4649;
  } else {
    goto _4650;
  }

_4650:
  julia_throw_invalid_char_2796(_4504, _4506);
  __builtin_unreachable();

_4649:
  _4516 = llvm_lshr_u32((_4506 & (llvm_select_u32((_4506 == 4294967295u), 0, (llvm_lshr_u32(-1, _4513))))), _4515);
  _4517 = (((_4516 & 127) | ((llvm_lshr_u32(_4516, 2)) & 8128)) | ((llvm_lshr_u32(_4516, 4)) & 520192)) | ((llvm_lshr_u32(_4516, 6)) & 33292288);
  _4518__PHI_TEMPORARY = _4517;   /* for PHI node */
  goto _4648;

_4648:
  _4518 = _4518__PHI_TEMPORARY;
  _4519 = llvm_OC_umax_OC_i32(_4518, 95);
  _4520 = ((uint64_t)(uint32_t)(llvm_select_u32((((uint32_t)_4518) < ((uint32_t)127u)), (_4519 & 31), 30)));
  _4521 = llvm_OC_bswap_OC_i32(_4506);
  *((uint32_t*)&_4507) = (((uint32_t)(bool)(((uint32_t)_4521) < ((uint32_t)128u))));
  *((uint32_t*)&_4508) = 0;
  _4522__PHI_TEMPORARY = (((uint32_t)_4521) < ((uint32_t)128u));   /* for PHI node */
  _4523__PHI_TEMPORARY = 1;   /* for PHI node */
  _4524__PHI_TEMPORARY = _4520;   /* for PHI node */
  _4525__PHI_TEMPORARY = _4506;   /* for PHI node */
  goto _4651;

  do {     /* Syntactic loop '' to make GCC happy */
_4651:
  _4522 = _4522__PHI_TEMPORARY;
  _4523 = _4523__PHI_TEMPORARY;
  _4524 = _4524__PHI_TEMPORARY;
  _4525 = _4525__PHI_TEMPORARY;
  _4526 = ((&((uint8_t*)_4505)[((int64_t)32)]));
  _4527 = *(uint64_t*)_4526;
  _4528 = ((&((uint8_t*)_4505)[((int64_t)40)]));
  _4529 = llvm_lshr_u64(_4527, 32);
  _4530 = ((uint32_t)_4529);
  _4531 = *(uint64_t*)_4528;
  _4532 = ((uint32_t)_4531);
  _4533 = llvm_OC_bswap_OC_i32(_4530);
  _4534 = llvm_select_bool(_4522, (((uint32_t)_4533) < ((uint32_t)128u)), 0);
  if (_4534) {
    goto _4652;
  } else {
    goto _4653;
  }

_4653:
  _4543 = llvm_OC_ctlz_OC_i32((_4525 ^ -1), 0);
  _4544 = ((uint64_t)(uint32_t)_4543);
  _4545 = llvm_OC_cttz_OC_i32(_4525, 0);
  _4546 = _4545 & 56;
  _4547 = ((uint64_t)(uint32_t)_4546);
  _4548 = llvm_select_bool((((uint32_t)_4545) < ((uint32_t)32u)), ((llvm_lshr_u32(((_4525 & 12632256) ^ 8421504), _4546)) != 0u), 0);
  if ((((_4543 == 1u) | (((uint64_t)(llvm_add_u64((_4544 << 3), _4547))) > ((uint64_t)UINT64_C(32)))) | _4548)) {
    goto _4654;
  } else {
    goto _4655;
  }

_4655:
  _4549 = llvm_OC_ctlz_OC_i32((_4530 ^ -1), 0);
  _4550 = ((uint64_t)(uint32_t)_4549);
  _4551 = llvm_OC_cttz_OC_i32(_4530, 0);
  _4552 = _4551 & 56;
  _4553 = ((uint64_t)(uint32_t)_4552);
  _4554 = llvm_select_bool((((uint32_t)_4551) < ((uint32_t)32u)), ((llvm_lshr_u32(((_4530 & 12632256) ^ 8421504), _4552)) != 0u), 0);
  if ((((_4549 == 1u) | (((uint64_t)(llvm_add_u64((_4550 << 3), _4553))) > ((uint64_t)UINT64_C(32)))) | _4554)) {
    goto _4654;
  } else {
    goto _4656;
  }

_4656:
  if ((((int32_t)_4525) < ((int32_t)0u))) {
    goto _4657;
  } else {
    goto _4658;
  }

_4658:
  _4555 = llvm_lshr_u32(_4525, 24);
  _4558__PHI_TEMPORARY = _4555;   /* for PHI node */
  goto _4659;

_4657:
  if ((((_4543 == 1u) | (((uint64_t)(llvm_add_u64((_4544 << 3), _4547))) > ((uint64_t)UINT64_C(32)))) | (_4548 | ((((_4525 & -33554432) == 3221225472u) | ((_4525 & -2097152) == 3766484992u)) | ((_4525 & -1048576) == 4034920448u))))) {
    goto _4660;
  } else {
    goto _4661;
  }

_4661:
  _4556 = llvm_select_u32((((uint32_t)_4545) < ((uint32_t)32u)), (llvm_lshr_u32((_4525 & (llvm_select_u32((_4525 == 4294967295u), 0, (llvm_lshr_u32(-1, _4543))))), _4546)), 0);
  _4557 = (((_4556 & 127) | ((llvm_lshr_u32(_4556, 2)) & 8128)) | ((llvm_lshr_u32(_4556, 4)) & 520192)) | ((llvm_lshr_u32(_4556, 6)) & 33292288);
  _4558__PHI_TEMPORARY = _4557;   /* for PHI node */
  goto _4659;

_4659:
  _4558 = _4558__PHI_TEMPORARY;
  if ((((int64_t)_4527) < ((int64_t)UINT64_C(0)))) {
    goto _4662;
  } else {
    goto _4663;
  }

_4663:
  _4559 = llvm_lshr_u32(_4530, 24);
  _4562__PHI_TEMPORARY = _4559;   /* for PHI node */
  goto _4664;

_4662:
  if ((((_4549 == 1u) | (((uint64_t)(llvm_add_u64((_4550 << 3), _4553))) > ((uint64_t)UINT64_C(32)))) | (_4554 | ((((_4530 & -33554432) == 3221225472u) | ((_4530 & -2097152) == 3766484992u)) | ((_4530 & -1048576) == 4034920448u))))) {
    goto _4665;
  } else {
    goto _4666;
  }

_4666:
  _4560 = llvm_select_u32((((uint32_t)_4551) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_4529 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _4549)))) & _4530), _4552)), 0);
  _4561 = (((_4560 & 127) | ((llvm_lshr_u32(_4560, 2)) & 8128)) | ((llvm_lshr_u32(_4560, 4)) & 520192)) | ((llvm_lshr_u32(_4560, 6)) & 33292288);
  _4562__PHI_TEMPORARY = _4561;   /* for PHI node */
  goto _4664;

_4664:
  _4562 = _4562__PHI_TEMPORARY;
  _4563 = jsk_utf8proc_grapheme_break_stateful(_4558, _4562, (&_4507));
  if ((((bool)_4563&1u))) {
    goto _4667;
  } else {
    goto _4668;
  }

_4668:
  if (((_4527 & INT64_C(-1103806595072)) == UINT64_C(16321198981218566144))) {
    goto _4669;
  } else {
    goto _4670;
  }

_4669:
  _4576 = *((uint32_t*)&_4507);
  *((uint32_t*)&_4508) = _4576;
  _4577 = llvm_OC_ctlz_OC_i32((_4532 ^ -1), 0);
  _4578 = ((uint64_t)(uint32_t)_4577);
  _4579 = llvm_OC_cttz_OC_i32(_4532, 0);
  _4580 = _4579 & 56;
  _4581 = ((uint64_t)(uint32_t)_4580);
  _4582 = llvm_select_bool((((uint32_t)_4579) < ((uint32_t)32u)), ((llvm_lshr_u32(((_4532 & 12632256) ^ 8421504), _4580)) != 0u), 0);
  if ((((_4577 == 1u) | (((uint64_t)(llvm_add_u64((_4578 << 3), _4581))) > ((uint64_t)UINT64_C(32)))) | _4582)) {
    goto _4671;
  } else {
    goto _4672;
  }

_4672:
  _4583 = ((llvm_lshr_u32(_4530, 8)) & 13) | 8192;
  if ((((int32_t)_4532) < ((int32_t)0u))) {
    goto _4673;
  } else {
    goto _4674;
  }

_4674:
  _4584 = llvm_lshr_u32(_4532, 24);
  _4587__PHI_TEMPORARY = _4584;   /* for PHI node */
  goto _4675;

_4673:
  if ((((_4577 == 1u) | (((uint64_t)(llvm_add_u64((_4578 << 3), _4581))) > ((uint64_t)UINT64_C(32)))) | (_4582 | ((((_4532 & -33554432) == 3221225472u) | ((_4532 & -2097152) == 3766484992u)) | ((_4532 & -1048576) == 4034920448u))))) {
    goto _4676;
  } else {
    goto _4677;
  }

_4677:
  _4585 = llvm_select_u32((((uint32_t)_4579) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_select_u32((_4532 == 4294967295u), 0, (llvm_lshr_u32(-1, _4577)))) & _4532), _4580)), 0);
  _4586 = (((_4585 & 127) | ((llvm_lshr_u32(_4585, 2)) & 8128)) | ((llvm_lshr_u32(_4585, 4)) & 520192)) | ((llvm_lshr_u32(_4585, 6)) & 33292288);
  _4587__PHI_TEMPORARY = _4586;   /* for PHI node */
  goto _4675;

_4675:
  _4587 = _4587__PHI_TEMPORARY;
  _4588 = jsk_utf8proc_grapheme_break_stateful(_4583, _4587, (&_4508));
  if ((((bool)_4588&1u))) {
    goto _4678;
  } else {
    goto _4670;
  }

_4654:
  *((uint32_t*)&_4507) = 0;
  goto _4667;

_4667:
  if (((llvm_select_bool((_4529 == UINT64_C(553648128)), (_4532 == 1023410176u), 0)) | (_4529 == UINT64_C(4294967295)))) {
    goto _4678;
  } else {
    goto _4679;
  }

_4679:
  _4564 = llvm_OC_ctlz_OC_i32((_4530 ^ -1), 0);
  _4565 = ((uint64_t)(uint32_t)_4564);
  _4566 = llvm_OC_cttz_OC_i32(_4530, 0);
  _4567 = _4566 & 56;
  _4568 = ((uint64_t)(uint32_t)_4567);
  _4569 = llvm_select_bool((((uint32_t)_4566) < ((uint32_t)32u)), ((llvm_lshr_u32(((_4530 & 12632256) ^ 8421504), _4567)) != 0u), 0);
  _4570 = (((_4530 & -33554432) == 3221225472u) | ((_4530 & -2097152) == 3766484992u)) | ((_4530 & -1048576) == 4034920448u);
  if ((((((_4564 == 1u) | (((uint64_t)(llvm_add_u64((_4565 << 3), _4568))) > ((uint64_t)UINT64_C(32)))) | (((((uint64_t)_4527) > ((uint64_t)UINT64_C(17122614315006820351))) & (_4529 != UINT64_C(3986669312))) & (((((uint64_t)_4527) < ((uint64_t)UINT64_C(17185876919829135360))) & (_4529 != UINT64_C(4001398784))) | ((((uint64_t)_4527) > ((uint64_t)UINT64_C(17622514693983698943))) & (_4529 != UINT64_C(4103061439)))))) | _4569) | _4570)) {
    goto _4678;
  } else {
    goto _4680;
  }

_4680:
  _4571 = llvm_lshr_u32(_4530, 24);
  if ((((int64_t)_4527) < ((int64_t)UINT64_C(0)))) {
    goto _4681;
  } else {
    _4574__PHI_TEMPORARY = _4571;   /* for PHI node */
    goto _4682;
  }

_4681:
  if ((((_4564 == 1u) | (((uint64_t)(llvm_add_u64((_4565 << 3), _4568))) > ((uint64_t)UINT64_C(32)))) | (_4569 | _4570))) {
    goto _4683;
  } else {
    goto _4684;
  }

_4684:
  _4572 = llvm_select_u32((((uint32_t)_4566) < ((uint32_t)32u)), (llvm_lshr_u32(((llvm_lshr_u32(-1, _4564)) & _4530), _4567)), 0);
  _4573 = (((_4572 & 127) | ((llvm_lshr_u32(_4572, 2)) & 8128)) | ((llvm_lshr_u32(_4572, 4)) & 520192)) | ((llvm_lshr_u32(_4572, 6)) & 33292288);
  _4574__PHI_TEMPORARY = _4573;   /* for PHI node */
  goto _4682;

_4682:
  _4574 = _4574__PHI_TEMPORARY;
  _4575 = jsk_jl_id_char(_4574);
  if ((_4575 == 0u)) {
    goto _4678;
  } else {
    goto _4670;
  }

_4652:
  if ((((int64_t)_4527) < ((int64_t)UINT64_C(0)))) {
    goto _4685;
  } else {
    goto _4686;
  }

_4686:
  _4535 = llvm_lshr_u32(_4530, 24);
  _4541__PHI_TEMPORARY = _4535;   /* for PHI node */
  goto _4687;

_4685:
  _4536 = llvm_OC_ctlz_OC_i32((_4530 ^ -1), 0);
  _4537 = llvm_OC_cttz_OC_i32(_4530, 1);
  _4538 = _4537 & 24;
  if ((((_4536 != 1u) & (((uint32_t)(llvm_add_u32((_4536 << 3), _4538))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_4530 & 12632256) ^ 8421504), _4538)) == 0u) & ((((_4530 & -33554432) != 3221225472u) & ((_4530 & -2097152) != 3766484992u)) & ((_4530 & -1048576) != 4034920448u))))) {
    goto _4688;
  } else {
    goto _4689;
  }

_4688:
  _4539 = llvm_lshr_u32(((llvm_select_u32((_4529 == UINT64_C(4294967295)), 0, (llvm_lshr_u32(-1, _4536)))) & _4530), _4538);
  _4540 = (_4539 & 127) | ((llvm_lshr_u32(_4539, 2)) & 192);
  _4541__PHI_TEMPORARY = _4540;   /* for PHI node */
  goto _4687;

_4687:
  _4541 = _4541__PHI_TEMPORARY;
  if ((llvm_select_bool((_4541 != 33u), 1, (_4532 != 1023410176u)))) {
    goto _4690;
  } else {
    goto _4678;
  }

_4690:
  _4542 = *(uint8_t*)(((&((uint8_t*)(&_j_constYY_OC_140))[((int64_t)(((uint64_t)(uint32_t)_4541)))])));
  if ((((bool)_4542&1u))) {
    goto _4670;
  } else {
    goto _4678;
  }

_4670:
  _4589 = *(void**)_4505;
  _4590 = ((&((uint8_t*)_4589)[((int64_t)16)]));
  _4591 = *(uint64_t*)_4590;
  _4592 = ((&((uint8_t*)_4589)[((int64_t)8)]));
  _4593 = *(uint64_t*)_4592;
  if ((((int64_t)_4593) > ((int64_t)_4591))) {
    goto _4691;
  } else {
    _4610__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4692;
  }

_4691:
  _4594 = *(void**)_4589;
  _4595 = *(uint8_t*)(((&((uint8_t*)_4594)[((int64_t)_4591)])));
  *(uint64_t*)_4590 = (llvm_add_u64(_4591, 1));
  _4596 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4595)), 0);
  _4597 = llvm_sub_u8(32, (llvm_shl_u8(_4596, 3)));
  _4598 = (((uint32_t)(uint8_t)_4595)) << 24;
  if ((((uint8_t)_4597) > ((uint8_t)((uint8_t)16)))) {
    _4610__PHI_TEMPORARY = _4598;   /* for PHI node */
    goto _4692;
  } else {
    _4599__PHI_TEMPORARY = 16;   /* for PHI node */
    _4600__PHI_TEMPORARY = _4598;   /* for PHI node */
    goto _4693;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4693:
  _4599 = _4599__PHI_TEMPORARY;
  _4600 = _4600__PHI_TEMPORARY;
  if (((((int64_t)_4599) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4599) < ((uint64_t)(((uint64_t)(uint8_t)_4597)))))) {
    _4610__PHI_TEMPORARY = _4600;   /* for PHI node */
    goto _4692;
  } else {
    goto _4694;
  }

_4694:
  _4601 = *(uint64_t*)_4590;
  _4602 = *(uint64_t*)_4592;
  if ((((int64_t)_4602) > ((int64_t)_4601))) {
    goto _4695;
  } else {
    _4610__PHI_TEMPORARY = _4600;   /* for PHI node */
    goto _4692;
  }

_4695:
  _4603 = *(void**)_4589;
  _4604 = *(uint8_t*)(((&((uint8_t*)_4603)[((int64_t)_4601)])));
  if ((((int8_t)_4604) > ((int8_t)((uint8_t)-65)))) {
    _4610__PHI_TEMPORARY = _4600;   /* for PHI node */
    goto _4692;
  } else {
    goto _4696;
  }

_4696:
  _4605 = llvm_select_u32((((int64_t)_4601) < ((int64_t)_4602)), (((uint32_t)(uint8_t)_4604)), 0);
  _4606 = *(uint64_t*)_4590;
  *(uint64_t*)_4590 = (llvm_add_u64(_4606, 1));
  _4607 = llvm_neg_u64(_4599);
  _4608 = _4600 | (llvm_select_u32((((int64_t)_4599) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4607) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4605, (((uint32_t)_4607)))))), (llvm_select_u32((((uint64_t)_4599) > ((uint64_t)UINT64_C(31))), 0, (_4605 << (((uint32_t)_4599)))))));
  _4609 = llvm_add_u64(_4599, -8);
  _4599__PHI_TEMPORARY = _4609;   /* for PHI node */
  _4600__PHI_TEMPORARY = _4608;   /* for PHI node */
  goto _4693;

  } while (1); /* end of syntactic loop '' */
_4692:
  _4610 = _4610__PHI_TEMPORARY;
  _4611 = *(uint64_t*)_4526;
  _4612 = *(uint64_t*)_4528;
  _4613 = jsyn_cbe_fshl_i64(_4612, _4611, 32);
  _4614 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4610)), _4612, 32);
  *(uint64_t*)_4526 = _4613;
  *(uint64_t*)_4528 = _4614;
  _4615 = ((&((uint8_t*)_4505)[((int64_t)56)]));
  _4616 = *(uint64_t*)_4615;
  _4617 = ((&((uint8_t*)_4505)[((int64_t)64)]));
  _4618 = *(uint64_t*)_4617;
  _4619 = ((&((uint8_t*)_4505)[((int64_t)72)]));
  _4620 = *(uint64_t*)_4619;
  _4621 = *(void**)_4505;
  _4622 = *(uint64_t*)(((&((uint8_t*)_4621)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4505)[((int64_t)48)]))) = _4616;
  *(uint64_t*)_4615 = _4618;
  *(uint64_t*)_4617 = _4620;
  *(uint64_t*)_4619 = _4622;
  _4623 = *(uint64_t*)_4526;
  _4624 = ((uint32_t)_4623);
  if ((((int32_t)_4624) < ((int32_t)0u))) {
    goto _4697;
  } else {
    goto _4698;
  }

_4698:
  _4625 = llvm_lshr_u32(_4624, 24);
  _4631__PHI_TEMPORARY = _4625;   /* for PHI node */
  goto _4699;

_4697:
  _4626 = llvm_OC_ctlz_OC_i32((_4624 ^ -1), 0);
  _4627 = llvm_OC_cttz_OC_i32(_4624, 1);
  _4628 = _4627 & 24;
  if ((((_4626 != 1u) & (((uint32_t)(llvm_add_u32((_4626 << 3), _4628))) < ((uint32_t)33u))) & (((llvm_lshr_u32(((_4624 & 12632256) ^ 8421504), _4628)) == 0u) & ((((_4624 & -33554432) != 3221225472u) & ((_4624 & -2097152) != 3766484992u)) & ((_4624 & -1048576) != 4034920448u))))) {
    goto _4700;
  } else {
    goto _4701;
  }

_4700:
  _4629 = llvm_lshr_u32(((llvm_select_u32((_4624 == 4294967295u), 0, (llvm_lshr_u32(-1, _4626)))) & _4624), _4628);
  _4630 = (((_4629 & 127) | ((llvm_lshr_u32(_4629, 2)) & 8128)) | ((llvm_lshr_u32(_4629, 4)) & 520192)) | ((llvm_lshr_u32(_4629, 6)) & 33292288);
  _4631__PHI_TEMPORARY = _4630;   /* for PHI node */
  goto _4699;

_4699:
  _4631 = _4631__PHI_TEMPORARY;
  _4632 = llvm_OC_umax_OC_i32(_4631, 95);
  _4633 = (_4524 << 5) | (((uint64_t)(uint32_t)(llvm_select_u32((((uint32_t)_4631) < ((uint32_t)127u)), (_4632 & 31), 30))));
  _4634 = llvm_add_u64(_4523, 1);
  _4522__PHI_TEMPORARY = _4534;   /* for PHI node */
  _4523__PHI_TEMPORARY = _4634;   /* for PHI node */
  _4524__PHI_TEMPORARY = _4633;   /* for PHI node */
  _4525__PHI_TEMPORARY = _4624;   /* for PHI node */
  goto _4651;

  } while (1); /* end of syntactic loop '' */
_4689:
  julia_throw_invalid_char_2796(_4504, _4530);
  __builtin_unreachable();

_4660:
  julia_throw_invalid_char_2796(_4504, _4525);
  __builtin_unreachable();

_4665:
  julia_throw_invalid_char_2796(_4504, _4530);
  __builtin_unreachable();

_4683:
  julia_throw_invalid_char_2796(_4504, _4530);
  __builtin_unreachable();

_4676:
  julia_throw_invalid_char_2796(_4504, _4532);
  __builtin_unreachable();

_4671:
  *((uint32_t*)&_4508) = 0;
  goto _4678;

_4701:
  julia_throw_invalid_char_2796(_4504, _4624);
  __builtin_unreachable();

_4678:
  if ((((int64_t)_4523) < ((int64_t)UINT64_C(11)))) {
    goto _4702;
  } else {
    goto _4703;
  }

_4704:
  _4635 = _4635__PHI_TEMPORARY;
  _4636 = memcpy(_4503, _4635, 32);
  return;
_4703:
  julia_emit_4484((&_4509), _4504, _4505, 3, 1);
  _4635__PHI_TEMPORARY = (&_4509);   /* for PHI node */
  goto _4704;

_4702:
  switch (_4524) {
  default:
    _4637__PHI_TEMPORARY = 39;   /* for PHI node */
    _4638__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _4705;
  case UINT64_C(6337125):
    goto _4706;
  case UINT64_C(674469):
    goto _4706;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4705:
  _4637 = _4637__PHI_TEMPORARY;
  _4638 = _4638__PHI_TEMPORARY;
  if ((((int64_t)_4638) > ((int64_t)_4637))) {
    _4644__PHI_TEMPORARY = 3;   /* for PHI node */
    goto _4707;
  } else {
    goto _4708;
  }

_4708:
  _4639 = llvm_lshr_u64((llvm_add_u64(_4638, _4637)), 1);
  _4640 = llvm_add_u64(_4639, -1);
  _4641 = *(uint64_t*)(((&((uint64_t*)(&_j_constYY_OC_138))[((int64_t)_4640)])));
  if ((_4641 == _4524)) {
    goto _4709;
  } else {
    goto _4710;
  }

_4710:
  _4642 = llvm_select_u64((((uint64_t)_4641) < ((uint64_t)_4524)), _4637, _4640);
  _4643 = llvm_select_u64((((uint64_t)_4641) < ((uint64_t)_4524)), (llvm_add_u64(_4639, 1)), _4638);
  _4637__PHI_TEMPORARY = _4642;   /* for PHI node */
  _4638__PHI_TEMPORARY = _4643;   /* for PHI node */
  goto _4705;

  } while (1); /* end of syntactic loop '' */
_4707:
  _4644 = _4644__PHI_TEMPORARY;
  julia_emit_4484((&_4511), _4504, _4505, _4644, 1);
  _4635__PHI_TEMPORARY = (&_4511);   /* for PHI node */
  goto _4704;

_4706:
  julia_emit_4484((&_4510), _4504, _4505, 43, 1);
  _4635__PHI_TEMPORARY = (&_4510);   /* for PHI node */
  goto _4704;

_4709:
  _4645 = *(uint16_t*)(((&((uint16_t*)(&_j_constYY_OC_139))[((int64_t)_4640)])));
  _4644__PHI_TEMPORARY = _4645;   /* for PHI node */
  goto _4707;

}


static void julia__growend_internalNOT_OC__4533(void* _4711, void* _4712, int64_t _4713, int64_t _4714) {
  __PREFIXALIGN__(16) struct l_array_4_uint64_t _4715 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _4716;
  void* _4717;
  void* _4718;
  void* _4719;
  void* _4720;
  void* _4721;
  uint64_t _4722;
  void* _4723;
  void* _4724;
  uint64_t _4725;
  uint64_t _4726;
  uint64_t _4727;
  uint64_t _4728;
  uint64_t _4729;
  uint64_t _4729__PHI_TEMPORARY;
  void* _4730;
  void* _4730__PHI_TEMPORARY;
  void* _4731;
  void* _4732;
  uint64_t _4733;
  uint64_t _4734;
  uint64_t _4735;
  void* _4736;
  void* _4737;
  void* _4738;
  void* _4739;
  struct l_array_1_void_KC_ _4740;
  void* _4741;
  void* _4742;
  uint64_t _4743;
  uint64_t _4744;
  void* _4745;
  struct l_array_1_void_KC_ _4746;
  void* _4747;
  void* _4748;
  uint64_t _4749;
  void* _4750;
  void* _4751;
  uint64_t _4752;
  void* _4753;
  void* _4754;
  void* _4755;
  uint64_t _4756;
  uint64_t _4757;
  uint64_t _4758;
  void* _4759;
  void* _4760;

  _4716 = memset((&_4715), 0, 32);
  *((uint64_t*)&_4715) = 8;
  _4717 = *(void**)_4711;
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)8)]))) = _4717;
  *(void**)_4711 = (&_4715);
  _4718 = ((&((uint8_t*)_4711)[((int64_t)16)]));
  _4719 = *(void**)_4712;
  _4720 = ((&((uint8_t*)_4712)[((int64_t)8)]));
  _4721 = *(void**)_4720;
  _4722 = llvm_add_u64(_4714, _4713);
  _4723 = ((&((uint8_t*)_4721)[((int64_t)8)]));
  _4724 = *(void**)_4723;
  _4725 = llvm_sub_u64((((uint64_t)(uintptr_t)_4719)), (((uint64_t)(uintptr_t)_4724)));
  _4726 = llvm_lshr_u64(_4725, 4);
  _4727 = llvm_add_u64(_4726, _4722);
  _4728 = *(uint64_t*)_4721;
  if ((((int64_t)_4728) < ((int64_t)(llvm_add_u64(_4726, _4714))))) {
    goto _4761;
  } else {
    goto _4762;
  }

_4763:
  _4729 = _4729__PHI_TEMPORARY;
  _4730 = _4730__PHI_TEMPORARY;
  _4731 = *(void**)(((&((uint8_t*)_4730)[((int64_t)8)])));
  _4732 = ((&((uint8_t*)_4731)[((int64_t)_4729)]));
  if ((_4714 == UINT64_C(0))) {
    goto _4764;
  } else {
    goto _4765;
  }

_4765:
  _4733 = llvm_add_u64(_4714, -1);
  _4734 = *(uint64_t*)_4730;
  _4735 = _4733 << 4;
  if ((llvm_select_bool((((uint64_t)(llvm_add_u64(_4733, _4734))) < ((uint64_t)(_4734 << 1))), (((uint64_t)(llvm_sub_u64((((uint64_t)(uintptr_t)(((&((uint8_t*)_4732)[((int64_t)_4735)]))))), (((uint64_t)(uintptr_t)_4731))))) < ((uint64_t)(_4734 << 4))), 0))) {
    goto _4766;
  } else {
    goto _4767;
  }

_4768:
  _4736 = *(void**)(((&((uint8_t*)(&jl_small_typeof))[((int64_t)336)])));
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)24)]))) = _4721;
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)16)]))) = _4730;
  julia_throw_inexacterror_2498(_4711, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)424)]))), _4736, _4756);
  __builtin_unreachable();

_4769:
  _4737 = memmove(_4732, _4719, _4756);
  goto _4764;

_4764:
  _4738 = *(void**)_4712;
  _4739 = *(void**)_4720;
  if (((_4719 == _4738) & (_4721 == _4739))) {
    goto _4770;
  } else {
    goto _4771;
  }

_4771:
  _4740 = julia_ConcurrencyViolationError_2826(_4711, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)360)]))));
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)16)]))) = ((_4740.array[0]));
  _4741 = *(void**)(((&((uint8_t*)_4711)[((int64_t)16)])));
  _4742 = jsk_ijl_gc_small_alloc(_4741, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])))));
  *(void**)(((&((uint8_t*)_4742)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])));
  *(void**)_4742 = ((_4740.array[0]));
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_4742);
  __builtin_unreachable();

_4770:
  *(void**)_4712 = _4732;
  *(void**)(((&((uint8_t*)_4712)[((int64_t)8)]))) = _4730;
  _4743 = *(volatile uint64_t*)(((&((uint8_t*)_4712)[((int64_t)-8)])));
  if (((_4743 & 3) == UINT64_C(3))) {
    goto _4772;
  } else {
    goto _4773;
  }

_4772:
  _4744 = *(volatile uint64_t*)(((&((uint8_t*)_4730)[((int64_t)-8)])));
  if ((((_4743 & 12) == UINT64_C(4)) | ((_4744 & 1) == UINT64_C(0)))) {
    goto _4774;
  } else {
    goto _4773;
  }

_4774:
  jsk_ijl_gc_queue_root(_4712);
  goto _4773;

_4773:
  _4745 = *(void**)(((&((uint8_t*)(&_4715))[((int64_t)8)])));
  *(void**)_4711 = _4745;
  return;
_4761:
  _4746 = julia_ConcurrencyViolationError_2826(_4711, (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)296)]))));
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)16)]))) = ((_4746.array[0]));
  _4747 = *(void**)(((&((uint8_t*)_4711)[((int64_t)16)])));
  _4748 = jsk_ijl_gc_small_alloc(_4747, 360, 16, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])))));
  *(void**)(((&((uint8_t*)_4748)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)328)])));
  *(void**)_4748 = ((_4746.array[0]));
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_throw(_4748);
  __builtin_unreachable();

_4762:
  if ((((int64_t)(llvm_sdiv_u64((llvm_mul_u64(_4722, 5)), 4))) < ((int64_t)_4726))) {
    goto _4775;
  } else {
    goto _4776;
  }

_4775:
  _4749 = (llvm_sdiv_u64(_4722, 8)) << 4;
  _4729__PHI_TEMPORARY = _4749;   /* for PHI node */
  _4730__PHI_TEMPORARY = _4721;   /* for PHI node */
  goto _4763;

_4767:
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)16)]))) = _4730;
  _4750 = *(void**)(((&((uint8_t*)_4711)[((int64_t)16)])));
  _4751 = jsk_ijl_gc_small_alloc(_4750, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])))));
  *(void**)(((&((uint8_t*)_4751)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])));
  *(void**)_4751 = _4732;
  *(void**)(((&((uint8_t*)_4751)[((int64_t)8)]))) = _4730;
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)16)]))) = ((void*)/*NULL*/0);
  jsk_ijl_bounds_error_int(_4751, _4714);
  __builtin_unreachable();

_4766:
  _4752 = *(uint64_t*)_4721;
  _4753 = *(void**)_4723;
  if ((llvm_select_bool((((uint64_t)(llvm_add_u64(_4733, _4752))) < ((uint64_t)(_4752 << 1))), (((uint64_t)(llvm_sub_u64((((uint64_t)(uintptr_t)(((&((uint8_t*)_4719)[((int64_t)_4735)]))))), (((uint64_t)(uintptr_t)_4753))))) < ((uint64_t)(_4752 << 4))), 0))) {
    goto _4777;
  } else {
    goto _4778;
  }

_4778:
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)24)]))) = _4721;
  _4754 = *(void**)(((&((uint8_t*)_4711)[((int64_t)16)])));
  _4755 = jsk_ijl_gc_small_alloc(_4754, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])))));
  *(void**)(((&((uint8_t*)_4755)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)392)])));
  *(void**)_4755 = _4719;
  *(void**)(((&((uint8_t*)_4755)[((int64_t)8)]))) = _4721;
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)24)]))) = ((void*)/*NULL*/0);
  jsk_ijl_bounds_error_int(_4755, _4714);
  __builtin_unreachable();

_4777:
  _4756 = _4714 << 4;
  if ((((int64_t)_4756) > ((int64_t)UINT64_C(18446744073709551615)))) {
    goto _4769;
  } else {
    goto _4768;
  }

_4776:
  _4757 = llvm_OC_ctlz_OC_i64(_4728, 0);
  _4758 = llvm_OC_smax_OC_i64(_4727, (llvm_add_u64(_4728, (llvm_add_u64((3 << (llvm_lshr_u64((llvm_mul_u64((llvm_sub_u64(64, _4757)), 7)), 3))), (llvm_sdiv_u64(_4728, 8)))))));
  if ((_4758 == UINT64_C(0))) {
    _4729__PHI_TEMPORARY = _4725;   /* for PHI node */
    _4730__PHI_TEMPORARY = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)584)])));   /* for PHI node */
    goto _4763;
  } else {
    goto _4779;
  }

_4779:
  if ((((uint64_t)_4758) < ((uint64_t)UINT64_C(576460752303423488)))) {
    goto _4780;
  } else {
    goto _4781;
  }

_4781:
  jsk_jl_argument_error((&_j_str_invalidSP_OC_GenericMemorySP_OC_sizDOT_OC_DOT_OC_DOT_OC_YY_OC_29DOT_OC_790));
  __builtin_unreachable();

_4780:
  _4759 = *(void**)_4718;
  *(void**)(((&((uint8_t*)(&_4715))[((int64_t)24)]))) = _4721;
  _4760 = jsk_jl_alloc_genericmemory_unchecked(_4759, (_4758 << 4), (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)456)]))));
  *(uint64_t*)_4760 = _4758;
  _4729__PHI_TEMPORARY = _4725;   /* for PHI node */
  _4730__PHI_TEMPORARY = _4760;   /* for PHI node */
  goto _4763;

}


static void julia_lex_minus_4540(void* _4782, void* _4783, void* _4784) {
  struct l_array_4_uint64_t _4785;    /* Address-exposed local */
  struct l_array_4_uint64_t _4786;    /* Address-exposed local */
  struct l_array_4_uint64_t _4787;    /* Address-exposed local */
  struct l_array_4_uint64_t _4788;    /* Address-exposed local */
  struct l_array_4_uint64_t _4789;    /* Address-exposed local */
  void* _4790;
  uint64_t _4791;
  void* _4792;
  void* _4793;
  void* _4794;
  uint64_t _4795;
  void* _4796;
  uint64_t _4797;
  void* _4798;
  uint8_t _4799;
  uint8_t _4800;
  uint8_t _4801;
  uint32_t _4802;
  uint64_t _4803;
  uint64_t _4803__PHI_TEMPORARY;
  uint32_t _4804;
  uint32_t _4804__PHI_TEMPORARY;
  uint64_t _4805;
  uint64_t _4806;
  void* _4807;
  uint8_t _4808;
  uint32_t _4809;
  uint64_t _4810;
  uint64_t _4811;
  uint32_t _4812;
  uint64_t _4813;
  uint32_t _4814;
  uint32_t _4814__PHI_TEMPORARY;
  uint64_t _4815;
  uint64_t _4816;
  uint64_t _4817;
  uint64_t _4818;
  void* _4819;
  uint64_t _4820;
  void* _4821;
  uint64_t _4822;
  void* _4823;
  uint64_t _4824;
  void* _4825;
  uint64_t _4826;
  uint64_t _4827;
  void* _4828;
  void* _4829;
  uint64_t _4830;
  void* _4831;
  uint64_t _4832;
  void* _4833;
  uint8_t _4834;
  uint8_t _4835;
  uint8_t _4836;
  uint32_t _4837;
  uint64_t _4838;
  uint64_t _4838__PHI_TEMPORARY;
  uint32_t _4839;
  uint32_t _4839__PHI_TEMPORARY;
  uint64_t _4840;
  uint64_t _4841;
  void* _4842;
  uint8_t _4843;
  uint32_t _4844;
  uint64_t _4845;
  uint64_t _4846;
  uint32_t _4847;
  uint64_t _4848;
  uint32_t _4849;
  uint32_t _4849__PHI_TEMPORARY;
  uint64_t _4850;
  uint64_t _4851;
  uint64_t _4852;
  uint64_t _4853;
  void* _4854;
  uint64_t _4855;
  void* _4856;
  uint64_t _4857;
  void* _4858;
  uint64_t _4859;
  void* _4860;
  uint64_t _4861;
  void* _4862;
  void* _4862__PHI_TEMPORARY;
  void* _4863;
  uint16_t _4864;
  uint64_t _4865;
  void* _4866;
  void* _4867;
  uint64_t _4868;
  void* _4869;
  uint64_t _4870;
  void* _4871;
  uint8_t _4872;
  uint8_t _4873;
  uint8_t _4874;
  uint32_t _4875;
  uint64_t _4876;
  uint64_t _4876__PHI_TEMPORARY;
  uint32_t _4877;
  uint32_t _4877__PHI_TEMPORARY;
  uint64_t _4878;
  uint64_t _4879;
  void* _4880;
  uint8_t _4881;
  uint32_t _4882;
  uint64_t _4883;
  uint64_t _4884;
  uint32_t _4885;
  uint64_t _4886;
  uint32_t _4887;
  uint32_t _4887__PHI_TEMPORARY;
  uint64_t _4888;
  uint64_t _4889;
  uint64_t _4890;
  uint64_t _4891;
  void* _4892;
  uint64_t _4893;
  void* _4894;
  uint64_t _4895;
  void* _4896;
  uint64_t _4897;
  void* _4898;
  uint64_t _4899;
  uint64_t _4900;
  void* _4901;
  void* _4902;
  uint64_t _4903;
  void* _4904;
  uint64_t _4905;
  void* _4906;
  uint8_t _4907;
  uint8_t _4908;
  uint8_t _4909;
  uint32_t _4910;
  uint64_t _4911;
  uint64_t _4911__PHI_TEMPORARY;
  uint32_t _4912;
  uint32_t _4912__PHI_TEMPORARY;
  uint64_t _4913;
  uint64_t _4914;
  void* _4915;
  uint8_t _4916;
  uint32_t _4917;
  uint64_t _4918;
  uint64_t _4919;
  uint32_t _4920;
  uint64_t _4921;
  uint32_t _4922;
  uint32_t _4922__PHI_TEMPORARY;
  uint64_t _4923;
  uint64_t _4924;
  uint64_t _4925;
  uint64_t _4926;
  void* _4927;
  uint64_t _4928;
  void* _4929;
  uint64_t _4930;
  void* _4931;
  uint64_t _4932;
  void* _4933;
  uint64_t _4934;

  _4790 = ((&((uint8_t*)_4784)[((int64_t)32)]));
  _4791 = *(uint64_t*)_4790;
  _4792 = ((&((uint8_t*)_4784)[((int64_t)40)]));
  if (((_4791 & INT64_C(-4294967296)) == UINT64_C(3242591731706757120))) {
    goto _4935;
  } else {
    goto _4936;
  }

_4935:
  _4793 = *(void**)_4784;
  _4794 = ((&((uint8_t*)_4793)[((int64_t)16)]));
  _4795 = *(uint64_t*)_4794;
  _4796 = ((&((uint8_t*)_4793)[((int64_t)8)]));
  _4797 = *(uint64_t*)_4796;
  if ((((int64_t)_4797) > ((int64_t)_4795))) {
    goto _4937;
  } else {
    _4814__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4938;
  }

_4937:
  _4798 = *(void**)_4793;
  _4799 = *(uint8_t*)(((&((uint8_t*)_4798)[((int64_t)_4795)])));
  *(uint64_t*)_4794 = (llvm_add_u64(_4795, 1));
  _4800 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4799)), 0);
  _4801 = llvm_sub_u8(32, (llvm_shl_u8(_4800, 3)));
  _4802 = (((uint32_t)(uint8_t)_4799)) << 24;
  if ((((uint8_t)_4801) > ((uint8_t)((uint8_t)16)))) {
    _4814__PHI_TEMPORARY = _4802;   /* for PHI node */
    goto _4938;
  } else {
    _4803__PHI_TEMPORARY = 16;   /* for PHI node */
    _4804__PHI_TEMPORARY = _4802;   /* for PHI node */
    goto _4939;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4939:
  _4803 = _4803__PHI_TEMPORARY;
  _4804 = _4804__PHI_TEMPORARY;
  if (((((int64_t)_4803) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4803) < ((uint64_t)(((uint64_t)(uint8_t)_4801)))))) {
    _4814__PHI_TEMPORARY = _4804;   /* for PHI node */
    goto _4938;
  } else {
    goto _4940;
  }

_4940:
  _4805 = *(uint64_t*)_4794;
  _4806 = *(uint64_t*)_4796;
  if ((((int64_t)_4806) > ((int64_t)_4805))) {
    goto _4941;
  } else {
    _4814__PHI_TEMPORARY = _4804;   /* for PHI node */
    goto _4938;
  }

_4941:
  _4807 = *(void**)_4793;
  _4808 = *(uint8_t*)(((&((uint8_t*)_4807)[((int64_t)_4805)])));
  if ((((int8_t)_4808) > ((int8_t)((uint8_t)-65)))) {
    _4814__PHI_TEMPORARY = _4804;   /* for PHI node */
    goto _4938;
  } else {
    goto _4942;
  }

_4942:
  _4809 = llvm_select_u32((((int64_t)_4805) < ((int64_t)_4806)), (((uint32_t)(uint8_t)_4808)), 0);
  _4810 = *(uint64_t*)_4794;
  *(uint64_t*)_4794 = (llvm_add_u64(_4810, 1));
  _4811 = llvm_neg_u64(_4803);
  _4812 = _4804 | (llvm_select_u32((((int64_t)_4803) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4811) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4809, (((uint32_t)_4811)))))), (llvm_select_u32((((uint64_t)_4803) > ((uint64_t)UINT64_C(31))), 0, (_4809 << (((uint32_t)_4803)))))));
  _4813 = llvm_add_u64(_4803, -8);
  _4803__PHI_TEMPORARY = _4813;   /* for PHI node */
  _4804__PHI_TEMPORARY = _4812;   /* for PHI node */
  goto _4939;

  } while (1); /* end of syntactic loop '' */
_4938:
  _4814 = _4814__PHI_TEMPORARY;
  _4815 = *(uint64_t*)_4790;
  _4816 = *(uint64_t*)_4792;
  _4817 = jsyn_cbe_fshl_i64(_4816, _4815, 32);
  _4818 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4814)), _4816, 32);
  *(uint64_t*)_4790 = _4817;
  *(uint64_t*)_4792 = _4818;
  _4819 = ((&((uint8_t*)_4784)[((int64_t)56)]));
  _4820 = *(uint64_t*)_4819;
  _4821 = ((&((uint8_t*)_4784)[((int64_t)64)]));
  _4822 = *(uint64_t*)_4821;
  _4823 = ((&((uint8_t*)_4784)[((int64_t)72)]));
  _4824 = *(uint64_t*)_4823;
  _4825 = *(void**)_4784;
  _4826 = *(uint64_t*)(((&((uint8_t*)_4825)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4784)[((int64_t)48)]))) = _4820;
  *(uint64_t*)_4819 = _4822;
  *(uint64_t*)_4821 = _4824;
  *(uint64_t*)_4823 = _4826;
  _4827 = *(uint64_t*)_4790;
  if (((_4827 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _4943;
  } else {
    goto _4944;
  }

_4943:
  _4828 = *(void**)_4784;
  _4829 = ((&((uint8_t*)_4828)[((int64_t)16)]));
  _4830 = *(uint64_t*)_4829;
  _4831 = ((&((uint8_t*)_4828)[((int64_t)8)]));
  _4832 = *(uint64_t*)_4831;
  if ((((int64_t)_4832) > ((int64_t)_4830))) {
    goto _4945;
  } else {
    _4849__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4946;
  }

_4945:
  _4833 = *(void**)_4828;
  _4834 = *(uint8_t*)(((&((uint8_t*)_4833)[((int64_t)_4830)])));
  *(uint64_t*)_4829 = (llvm_add_u64(_4830, 1));
  _4835 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4834)), 0);
  _4836 = llvm_sub_u8(32, (llvm_shl_u8(_4835, 3)));
  _4837 = (((uint32_t)(uint8_t)_4834)) << 24;
  if ((((uint8_t)_4836) > ((uint8_t)((uint8_t)16)))) {
    _4849__PHI_TEMPORARY = _4837;   /* for PHI node */
    goto _4946;
  } else {
    _4838__PHI_TEMPORARY = 16;   /* for PHI node */
    _4839__PHI_TEMPORARY = _4837;   /* for PHI node */
    goto _4947;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4947:
  _4838 = _4838__PHI_TEMPORARY;
  _4839 = _4839__PHI_TEMPORARY;
  if (((((int64_t)_4838) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4838) < ((uint64_t)(((uint64_t)(uint8_t)_4836)))))) {
    _4849__PHI_TEMPORARY = _4839;   /* for PHI node */
    goto _4946;
  } else {
    goto _4948;
  }

_4948:
  _4840 = *(uint64_t*)_4829;
  _4841 = *(uint64_t*)_4831;
  if ((((int64_t)_4841) > ((int64_t)_4840))) {
    goto _4949;
  } else {
    _4849__PHI_TEMPORARY = _4839;   /* for PHI node */
    goto _4946;
  }

_4949:
  _4842 = *(void**)_4828;
  _4843 = *(uint8_t*)(((&((uint8_t*)_4842)[((int64_t)_4840)])));
  if ((((int8_t)_4843) > ((int8_t)((uint8_t)-65)))) {
    _4849__PHI_TEMPORARY = _4839;   /* for PHI node */
    goto _4946;
  } else {
    goto _4950;
  }

_4950:
  _4844 = llvm_select_u32((((int64_t)_4840) < ((int64_t)_4841)), (((uint32_t)(uint8_t)_4843)), 0);
  _4845 = *(uint64_t*)_4829;
  *(uint64_t*)_4829 = (llvm_add_u64(_4845, 1));
  _4846 = llvm_neg_u64(_4838);
  _4847 = _4839 | (llvm_select_u32((((int64_t)_4838) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4846) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4844, (((uint32_t)_4846)))))), (llvm_select_u32((((uint64_t)_4838) > ((uint64_t)UINT64_C(31))), 0, (_4844 << (((uint32_t)_4838)))))));
  _4848 = llvm_add_u64(_4838, -8);
  _4838__PHI_TEMPORARY = _4848;   /* for PHI node */
  _4839__PHI_TEMPORARY = _4847;   /* for PHI node */
  goto _4947;

  } while (1); /* end of syntactic loop '' */
_4946:
  _4849 = _4849__PHI_TEMPORARY;
  _4850 = *(uint64_t*)_4790;
  _4851 = *(uint64_t*)_4792;
  _4852 = jsyn_cbe_fshl_i64(_4851, _4850, 32);
  _4853 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4849)), _4851, 32);
  *(uint64_t*)_4790 = _4852;
  *(uint64_t*)_4792 = _4853;
  _4854 = ((&((uint8_t*)_4784)[((int64_t)56)]));
  _4855 = *(uint64_t*)_4854;
  _4856 = ((&((uint8_t*)_4784)[((int64_t)64)]));
  _4857 = *(uint64_t*)_4856;
  _4858 = ((&((uint8_t*)_4784)[((int64_t)72)]));
  _4859 = *(uint64_t*)_4858;
  _4860 = *(void**)_4784;
  _4861 = *(uint64_t*)(((&((uint8_t*)_4860)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4784)[((int64_t)48)]))) = _4855;
  *(uint64_t*)_4854 = _4857;
  *(uint64_t*)_4856 = _4859;
  *(uint64_t*)_4858 = _4861;
  julia_emit_4484((&_4785), _4783, _4784, 80, 1);
  _4862__PHI_TEMPORARY = (&_4785);   /* for PHI node */
  goto _4951;

_4951:
  _4862 = _4862__PHI_TEMPORARY;
  _4863 = memcpy(_4782, _4862, 32);
  return;
_4944:
  julia_emit_4484((&_4786), _4783, _4784, 66, 1);
  _4862__PHI_TEMPORARY = (&_4786);   /* for PHI node */
  goto _4951;

_4936:
  _4864 = *(uint16_t*)(((&((uint8_t*)_4784)[((int64_t)16)])));
  if ((_4864 == ((uint16_t)707))) {
    goto _4952;
  } else {
    goto _4953;
  }

_4953:
  _4865 = *(uint64_t*)_4790;
  if (((_4865 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _4954;
  } else {
    goto _4952;
  }

_4954:
  _4866 = *(void**)_4784;
  _4867 = ((&((uint8_t*)_4866)[((int64_t)16)]));
  _4868 = *(uint64_t*)_4867;
  _4869 = ((&((uint8_t*)_4866)[((int64_t)8)]));
  _4870 = *(uint64_t*)_4869;
  if ((((int64_t)_4870) > ((int64_t)_4868))) {
    goto _4955;
  } else {
    _4887__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4956;
  }

_4955:
  _4871 = *(void**)_4866;
  _4872 = *(uint8_t*)(((&((uint8_t*)_4871)[((int64_t)_4868)])));
  *(uint64_t*)_4867 = (llvm_add_u64(_4868, 1));
  _4873 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4872)), 0);
  _4874 = llvm_sub_u8(32, (llvm_shl_u8(_4873, 3)));
  _4875 = (((uint32_t)(uint8_t)_4872)) << 24;
  if ((((uint8_t)_4874) > ((uint8_t)((uint8_t)16)))) {
    _4887__PHI_TEMPORARY = _4875;   /* for PHI node */
    goto _4956;
  } else {
    _4876__PHI_TEMPORARY = 16;   /* for PHI node */
    _4877__PHI_TEMPORARY = _4875;   /* for PHI node */
    goto _4957;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4957:
  _4876 = _4876__PHI_TEMPORARY;
  _4877 = _4877__PHI_TEMPORARY;
  if (((((int64_t)_4876) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4876) < ((uint64_t)(((uint64_t)(uint8_t)_4874)))))) {
    _4887__PHI_TEMPORARY = _4877;   /* for PHI node */
    goto _4956;
  } else {
    goto _4958;
  }

_4958:
  _4878 = *(uint64_t*)_4867;
  _4879 = *(uint64_t*)_4869;
  if ((((int64_t)_4879) > ((int64_t)_4878))) {
    goto _4959;
  } else {
    _4887__PHI_TEMPORARY = _4877;   /* for PHI node */
    goto _4956;
  }

_4959:
  _4880 = *(void**)_4866;
  _4881 = *(uint8_t*)(((&((uint8_t*)_4880)[((int64_t)_4878)])));
  if ((((int8_t)_4881) > ((int8_t)((uint8_t)-65)))) {
    _4887__PHI_TEMPORARY = _4877;   /* for PHI node */
    goto _4956;
  } else {
    goto _4960;
  }

_4960:
  _4882 = llvm_select_u32((((int64_t)_4878) < ((int64_t)_4879)), (((uint32_t)(uint8_t)_4881)), 0);
  _4883 = *(uint64_t*)_4867;
  *(uint64_t*)_4867 = (llvm_add_u64(_4883, 1));
  _4884 = llvm_neg_u64(_4876);
  _4885 = _4877 | (llvm_select_u32((((int64_t)_4876) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4884) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4882, (((uint32_t)_4884)))))), (llvm_select_u32((((uint64_t)_4876) > ((uint64_t)UINT64_C(31))), 0, (_4882 << (((uint32_t)_4876)))))));
  _4886 = llvm_add_u64(_4876, -8);
  _4876__PHI_TEMPORARY = _4886;   /* for PHI node */
  _4877__PHI_TEMPORARY = _4885;   /* for PHI node */
  goto _4957;

  } while (1); /* end of syntactic loop '' */
_4956:
  _4887 = _4887__PHI_TEMPORARY;
  _4888 = *(uint64_t*)_4790;
  _4889 = *(uint64_t*)_4792;
  _4890 = jsyn_cbe_fshl_i64(_4889, _4888, 32);
  _4891 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4887)), _4889, 32);
  *(uint64_t*)_4790 = _4890;
  *(uint64_t*)_4792 = _4891;
  _4892 = ((&((uint8_t*)_4784)[((int64_t)56)]));
  _4893 = *(uint64_t*)_4892;
  _4894 = ((&((uint8_t*)_4784)[((int64_t)64)]));
  _4895 = *(uint64_t*)_4894;
  _4896 = ((&((uint8_t*)_4784)[((int64_t)72)]));
  _4897 = *(uint64_t*)_4896;
  _4898 = *(void**)_4784;
  _4899 = *(uint64_t*)(((&((uint8_t*)_4898)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4784)[((int64_t)48)]))) = _4893;
  *(uint64_t*)_4892 = _4895;
  *(uint64_t*)_4894 = _4897;
  *(uint64_t*)_4896 = _4899;
  julia_emit_4484((&_4787), _4783, _4784, 711, 1);
  _4862__PHI_TEMPORARY = (&_4787);   /* for PHI node */
  goto _4951;

_4952:
  _4900 = *(uint64_t*)_4790;
  if (((_4900 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _4961;
  } else {
    goto _4962;
  }

_4961:
  _4901 = *(void**)_4784;
  _4902 = ((&((uint8_t*)_4901)[((int64_t)16)]));
  _4903 = *(uint64_t*)_4902;
  _4904 = ((&((uint8_t*)_4901)[((int64_t)8)]));
  _4905 = *(uint64_t*)_4904;
  if ((((int64_t)_4905) > ((int64_t)_4903))) {
    goto _4963;
  } else {
    _4922__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _4964;
  }

_4963:
  _4906 = *(void**)_4901;
  _4907 = *(uint8_t*)(((&((uint8_t*)_4906)[((int64_t)_4903)])));
  *(uint64_t*)_4902 = (llvm_add_u64(_4903, 1));
  _4908 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4907)), 0);
  _4909 = llvm_sub_u8(32, (llvm_shl_u8(_4908, 3)));
  _4910 = (((uint32_t)(uint8_t)_4907)) << 24;
  if ((((uint8_t)_4909) > ((uint8_t)((uint8_t)16)))) {
    _4922__PHI_TEMPORARY = _4910;   /* for PHI node */
    goto _4964;
  } else {
    _4911__PHI_TEMPORARY = 16;   /* for PHI node */
    _4912__PHI_TEMPORARY = _4910;   /* for PHI node */
    goto _4965;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_4965:
  _4911 = _4911__PHI_TEMPORARY;
  _4912 = _4912__PHI_TEMPORARY;
  if (((((int64_t)_4911) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4911) < ((uint64_t)(((uint64_t)(uint8_t)_4909)))))) {
    _4922__PHI_TEMPORARY = _4912;   /* for PHI node */
    goto _4964;
  } else {
    goto _4966;
  }

_4966:
  _4913 = *(uint64_t*)_4902;
  _4914 = *(uint64_t*)_4904;
  if ((((int64_t)_4914) > ((int64_t)_4913))) {
    goto _4967;
  } else {
    _4922__PHI_TEMPORARY = _4912;   /* for PHI node */
    goto _4964;
  }

_4967:
  _4915 = *(void**)_4901;
  _4916 = *(uint8_t*)(((&((uint8_t*)_4915)[((int64_t)_4913)])));
  if ((((int8_t)_4916) > ((int8_t)((uint8_t)-65)))) {
    _4922__PHI_TEMPORARY = _4912;   /* for PHI node */
    goto _4964;
  } else {
    goto _4968;
  }

_4968:
  _4917 = llvm_select_u32((((int64_t)_4913) < ((int64_t)_4914)), (((uint32_t)(uint8_t)_4916)), 0);
  _4918 = *(uint64_t*)_4902;
  *(uint64_t*)_4902 = (llvm_add_u64(_4918, 1));
  _4919 = llvm_neg_u64(_4911);
  _4920 = _4912 | (llvm_select_u32((((int64_t)_4911) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_4919) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4917, (((uint32_t)_4919)))))), (llvm_select_u32((((uint64_t)_4911) > ((uint64_t)UINT64_C(31))), 0, (_4917 << (((uint32_t)_4911)))))));
  _4921 = llvm_add_u64(_4911, -8);
  _4911__PHI_TEMPORARY = _4921;   /* for PHI node */
  _4912__PHI_TEMPORARY = _4920;   /* for PHI node */
  goto _4965;

  } while (1); /* end of syntactic loop '' */
_4964:
  _4922 = _4922__PHI_TEMPORARY;
  _4923 = *(uint64_t*)_4790;
  _4924 = *(uint64_t*)_4792;
  _4925 = jsyn_cbe_fshl_i64(_4924, _4923, 32);
  _4926 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_4922)), _4924, 32);
  *(uint64_t*)_4790 = _4925;
  *(uint64_t*)_4792 = _4926;
  _4927 = ((&((uint8_t*)_4784)[((int64_t)56)]));
  _4928 = *(uint64_t*)_4927;
  _4929 = ((&((uint8_t*)_4784)[((int64_t)64)]));
  _4930 = *(uint64_t*)_4929;
  _4931 = ((&((uint8_t*)_4784)[((int64_t)72)]));
  _4932 = *(uint64_t*)_4931;
  _4933 = *(void**)_4784;
  _4934 = *(uint64_t*)(((&((uint8_t*)_4933)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4784)[((int64_t)48)]))) = _4928;
  *(uint64_t*)_4927 = _4930;
  *(uint64_t*)_4929 = _4932;
  *(uint64_t*)_4931 = _4934;
  julia_emit_4484((&_4788), _4783, _4784, 71, 1);
  _4862__PHI_TEMPORARY = (&_4788);   /* for PHI node */
  goto _4951;

_4962:
  julia_emit_4484((&_4789), _4783, _4784, 536, 1);
  _4862__PHI_TEMPORARY = (&_4789);   /* for PHI node */
  goto _4951;

}


static void julia_lex_dot_4548(void* _4969, void* _4970, void* _4971) {
  struct l_array_4_uint64_t _4972;    /* Address-exposed local */
  struct l_array_4_uint64_t _4973;    /* Address-exposed local */
  struct l_array_4_uint64_t _4974;    /* Address-exposed local */
  struct l_array_4_uint64_t _4975;    /* Address-exposed local */
  struct l_array_4_uint64_t _4976;    /* Address-exposed local */
  struct l_array_4_uint64_t _4977;    /* Address-exposed local */
  struct l_array_4_uint64_t _4978;    /* Address-exposed local */
  struct l_array_4_uint64_t _4979;    /* Address-exposed local */
  void* _4980;
  uint64_t _4981;
  void* _4982;
  void* _4983;
  void* _4984;
  uint64_t _4985;
  void* _4986;
  uint64_t _4987;
  void* _4988;
  uint8_t _4989;
  uint8_t _4990;
  uint8_t _4991;
  uint32_t _4992;
  uint64_t _4993;
  uint64_t _4993__PHI_TEMPORARY;
  uint32_t _4994;
  uint32_t _4994__PHI_TEMPORARY;
  uint64_t _4995;
  uint64_t _4996;
  void* _4997;
  uint8_t _4998;
  uint32_t _4999;
  uint64_t _5000;
  uint64_t _5001;
  uint32_t _5002;
  uint64_t _5003;
  uint32_t _5004;
  uint32_t _5004__PHI_TEMPORARY;
  uint64_t _5005;
  uint64_t _5006;
  uint64_t _5007;
  uint64_t _5008;
  void* _5009;
  uint64_t _5010;
  void* _5011;
  uint64_t _5012;
  void* _5013;
  uint64_t _5014;
  void* _5015;
  uint64_t _5016;
  uint64_t _5017;
  void* _5018;
  void* _5019;
  uint64_t _5020;
  void* _5021;
  uint64_t _5022;
  void* _5023;
  uint8_t _5024;
  uint8_t _5025;
  uint8_t _5026;
  uint32_t _5027;
  uint64_t _5028;
  uint64_t _5028__PHI_TEMPORARY;
  uint32_t _5029;
  uint32_t _5029__PHI_TEMPORARY;
  uint64_t _5030;
  uint64_t _5031;
  void* _5032;
  uint8_t _5033;
  uint32_t _5034;
  uint64_t _5035;
  uint64_t _5036;
  uint32_t _5037;
  uint64_t _5038;
  uint32_t _5039;
  uint32_t _5039__PHI_TEMPORARY;
  uint64_t _5040;
  uint64_t _5041;
  uint64_t _5042;
  uint64_t _5043;
  void* _5044;
  uint64_t _5045;
  void* _5046;
  uint64_t _5047;
  void* _5048;
  uint64_t _5049;
  void* _5050;
  uint64_t _5051;
  uint16_t _5052;
  void* _5053;
  void* _5053__PHI_TEMPORARY;
  void* _5054;
  uint64_t _5055;
  uint64_t _5056;
  uint8_t _5057;
  void* _5058;
  void* _5059;
  uint64_t _5060;
  void* _5061;
  uint64_t _5062;
  void* _5063;
  uint8_t _5064;
  uint8_t _5065;
  uint8_t _5066;
  uint32_t _5067;
  uint64_t _5068;
  uint64_t _5068__PHI_TEMPORARY;
  uint32_t _5069;
  uint32_t _5069__PHI_TEMPORARY;
  uint64_t _5070;
  uint64_t _5071;
  void* _5072;
  uint8_t _5073;
  uint32_t _5074;
  uint64_t _5075;
  uint64_t _5076;
  uint32_t _5077;
  uint64_t _5078;
  uint32_t _5079;
  uint32_t _5079__PHI_TEMPORARY;
  uint64_t _5080;
  uint64_t _5081;
  uint64_t _5082;
  uint64_t _5083;
  void* _5084;
  uint64_t _5085;
  void* _5086;
  uint64_t _5087;
  void* _5088;
  uint64_t _5089;
  void* _5090;
  uint64_t _5091;
  uint16_t _5092;
  uint64_t _5093;
  uint64_t _5094;
  uint16_t _5095;

  _4980 = ((&((uint8_t*)_4971)[((int64_t)32)]));
  _4981 = *(uint64_t*)_4980;
  _4982 = ((&((uint8_t*)_4971)[((int64_t)40)]));
  if (((_4981 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5096;
  } else {
    goto _5097;
  }

_5096:
  _4983 = *(void**)_4971;
  _4984 = ((&((uint8_t*)_4983)[((int64_t)16)]));
  _4985 = *(uint64_t*)_4984;
  _4986 = ((&((uint8_t*)_4983)[((int64_t)8)]));
  _4987 = *(uint64_t*)_4986;
  if ((((int64_t)_4987) > ((int64_t)_4985))) {
    goto _5098;
  } else {
    _5004__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5099;
  }

_5098:
  _4988 = *(void**)_4983;
  _4989 = *(uint8_t*)(((&((uint8_t*)_4988)[((int64_t)_4985)])));
  *(uint64_t*)_4984 = (llvm_add_u64(_4985, 1));
  _4990 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_4989)), 0);
  _4991 = llvm_sub_u8(32, (llvm_shl_u8(_4990, 3)));
  _4992 = (((uint32_t)(uint8_t)_4989)) << 24;
  if ((((uint8_t)_4991) > ((uint8_t)((uint8_t)16)))) {
    _5004__PHI_TEMPORARY = _4992;   /* for PHI node */
    goto _5099;
  } else {
    _4993__PHI_TEMPORARY = 16;   /* for PHI node */
    _4994__PHI_TEMPORARY = _4992;   /* for PHI node */
    goto _5100;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5100:
  _4993 = _4993__PHI_TEMPORARY;
  _4994 = _4994__PHI_TEMPORARY;
  if (((((int64_t)_4993) < ((int64_t)UINT64_C(0))) | (((uint64_t)_4993) < ((uint64_t)(((uint64_t)(uint8_t)_4991)))))) {
    _5004__PHI_TEMPORARY = _4994;   /* for PHI node */
    goto _5099;
  } else {
    goto _5101;
  }

_5101:
  _4995 = *(uint64_t*)_4984;
  _4996 = *(uint64_t*)_4986;
  if ((((int64_t)_4996) > ((int64_t)_4995))) {
    goto _5102;
  } else {
    _5004__PHI_TEMPORARY = _4994;   /* for PHI node */
    goto _5099;
  }

_5102:
  _4997 = *(void**)_4983;
  _4998 = *(uint8_t*)(((&((uint8_t*)_4997)[((int64_t)_4995)])));
  if ((((int8_t)_4998) > ((int8_t)((uint8_t)-65)))) {
    _5004__PHI_TEMPORARY = _4994;   /* for PHI node */
    goto _5099;
  } else {
    goto _5103;
  }

_5103:
  _4999 = llvm_select_u32((((int64_t)_4995) < ((int64_t)_4996)), (((uint32_t)(uint8_t)_4998)), 0);
  _5000 = *(uint64_t*)_4984;
  *(uint64_t*)_4984 = (llvm_add_u64(_5000, 1));
  _5001 = llvm_neg_u64(_4993);
  _5002 = _4994 | (llvm_select_u32((((int64_t)_4993) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5001) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_4999, (((uint32_t)_5001)))))), (llvm_select_u32((((uint64_t)_4993) > ((uint64_t)UINT64_C(31))), 0, (_4999 << (((uint32_t)_4993)))))));
  _5003 = llvm_add_u64(_4993, -8);
  _4993__PHI_TEMPORARY = _5003;   /* for PHI node */
  _4994__PHI_TEMPORARY = _5002;   /* for PHI node */
  goto _5100;

  } while (1); /* end of syntactic loop '' */
_5099:
  _5004 = _5004__PHI_TEMPORARY;
  _5005 = *(uint64_t*)_4980;
  _5006 = *(uint64_t*)_4982;
  _5007 = jsyn_cbe_fshl_i64(_5006, _5005, 32);
  _5008 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5004)), _5006, 32);
  *(uint64_t*)_4980 = _5007;
  *(uint64_t*)_4982 = _5008;
  _5009 = ((&((uint8_t*)_4971)[((int64_t)56)]));
  _5010 = *(uint64_t*)_5009;
  _5011 = ((&((uint8_t*)_4971)[((int64_t)64)]));
  _5012 = *(uint64_t*)_5011;
  _5013 = ((&((uint8_t*)_4971)[((int64_t)72)]));
  _5014 = *(uint64_t*)_5013;
  _5015 = *(void**)_4971;
  _5016 = *(uint64_t*)(((&((uint8_t*)_5015)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4971)[((int64_t)48)]))) = _5010;
  *(uint64_t*)_5009 = _5012;
  *(uint64_t*)_5011 = _5014;
  *(uint64_t*)_5013 = _5016;
  _5017 = *(uint64_t*)_4980;
  if (((_5017 & INT64_C(-4294967296)) == UINT64_C(3314649325744685056))) {
    goto _5104;
  } else {
    goto _5105;
  }

_5104:
  _5018 = *(void**)_4971;
  _5019 = ((&((uint8_t*)_5018)[((int64_t)16)]));
  _5020 = *(uint64_t*)_5019;
  _5021 = ((&((uint8_t*)_5018)[((int64_t)8)]));
  _5022 = *(uint64_t*)_5021;
  if ((((int64_t)_5022) > ((int64_t)_5020))) {
    goto _5106;
  } else {
    _5039__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5107;
  }

_5106:
  _5023 = *(void**)_5018;
  _5024 = *(uint8_t*)(((&((uint8_t*)_5023)[((int64_t)_5020)])));
  *(uint64_t*)_5019 = (llvm_add_u64(_5020, 1));
  _5025 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5024)), 0);
  _5026 = llvm_sub_u8(32, (llvm_shl_u8(_5025, 3)));
  _5027 = (((uint32_t)(uint8_t)_5024)) << 24;
  if ((((uint8_t)_5026) > ((uint8_t)((uint8_t)16)))) {
    _5039__PHI_TEMPORARY = _5027;   /* for PHI node */
    goto _5107;
  } else {
    _5028__PHI_TEMPORARY = 16;   /* for PHI node */
    _5029__PHI_TEMPORARY = _5027;   /* for PHI node */
    goto _5108;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5108:
  _5028 = _5028__PHI_TEMPORARY;
  _5029 = _5029__PHI_TEMPORARY;
  if (((((int64_t)_5028) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5028) < ((uint64_t)(((uint64_t)(uint8_t)_5026)))))) {
    _5039__PHI_TEMPORARY = _5029;   /* for PHI node */
    goto _5107;
  } else {
    goto _5109;
  }

_5109:
  _5030 = *(uint64_t*)_5019;
  _5031 = *(uint64_t*)_5021;
  if ((((int64_t)_5031) > ((int64_t)_5030))) {
    goto _5110;
  } else {
    _5039__PHI_TEMPORARY = _5029;   /* for PHI node */
    goto _5107;
  }

_5110:
  _5032 = *(void**)_5018;
  _5033 = *(uint8_t*)(((&((uint8_t*)_5032)[((int64_t)_5030)])));
  if ((((int8_t)_5033) > ((int8_t)((uint8_t)-65)))) {
    _5039__PHI_TEMPORARY = _5029;   /* for PHI node */
    goto _5107;
  } else {
    goto _5111;
  }

_5111:
  _5034 = llvm_select_u32((((int64_t)_5030) < ((int64_t)_5031)), (((uint32_t)(uint8_t)_5033)), 0);
  _5035 = *(uint64_t*)_5019;
  *(uint64_t*)_5019 = (llvm_add_u64(_5035, 1));
  _5036 = llvm_neg_u64(_5028);
  _5037 = _5029 | (llvm_select_u32((((int64_t)_5028) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5036) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5034, (((uint32_t)_5036)))))), (llvm_select_u32((((uint64_t)_5028) > ((uint64_t)UINT64_C(31))), 0, (_5034 << (((uint32_t)_5028)))))));
  _5038 = llvm_add_u64(_5028, -8);
  _5028__PHI_TEMPORARY = _5038;   /* for PHI node */
  _5029__PHI_TEMPORARY = _5037;   /* for PHI node */
  goto _5108;

  } while (1); /* end of syntactic loop '' */
_5107:
  _5039 = _5039__PHI_TEMPORARY;
  _5040 = *(uint64_t*)_4980;
  _5041 = *(uint64_t*)_4982;
  _5042 = jsyn_cbe_fshl_i64(_5041, _5040, 32);
  _5043 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5039)), _5041, 32);
  *(uint64_t*)_4980 = _5042;
  *(uint64_t*)_4982 = _5043;
  _5044 = ((&((uint8_t*)_4971)[((int64_t)56)]));
  _5045 = *(uint64_t*)_5044;
  _5046 = ((&((uint8_t*)_4971)[((int64_t)64)]));
  _5047 = *(uint64_t*)_5046;
  _5048 = ((&((uint8_t*)_4971)[((int64_t)72)]));
  _5049 = *(uint64_t*)_5048;
  _5050 = *(void**)_4971;
  _5051 = *(uint64_t*)(((&((uint8_t*)_5050)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4971)[((int64_t)48)]))) = _5045;
  *(uint64_t*)_5044 = _5047;
  *(uint64_t*)_5046 = _5049;
  *(uint64_t*)_5048 = _5051;
  _5052 = *(uint16_t*)(((&((uint8_t*)_4971)[((int64_t)16)])));
  if ((_5052 == ((uint16_t)53))) {
    goto _5112;
  } else {
    goto _5113;
  }

_5114:
  _5053 = _5053__PHI_TEMPORARY;
  _5054 = memcpy(_4969, _5053, 32);
  return;
_5112:
  julia_emit_4484((&_4972), _4970, _4971, 3, 1);
  _5053__PHI_TEMPORARY = (&_4972);   /* for PHI node */
  goto _5114;

_5113:
  julia_emit_4484((&_4973), _4970, _4971, 68, 1);
  _5053__PHI_TEMPORARY = (&_4973);   /* for PHI node */
  goto _5114;

_5105:
  _5055 = *(uint64_t*)_4980;
  _5056 = llvm_lshr_u64(_5055, 32);
  switch ((((uint32_t)_5056))) {
  default:
    goto _5115;
  case 1056964608u:
    goto _5116;
  case 603979776u:
    goto _5116;
  case 973078528u:
    goto _5116;
  case 654311424u:
    goto _5116;
  }

_5115:
  _5057 = julia_is_operator_start_char_4518(_4970, (((uint32_t)_5056)));
  if ((((bool)_5057&1u))) {
    goto _5117;
  } else {
    goto _5116;
  }

_5117:
  _5058 = *(void**)_4971;
  _5059 = ((&((uint8_t*)_5058)[((int64_t)16)]));
  _5060 = *(uint64_t*)_5059;
  _5061 = ((&((uint8_t*)_5058)[((int64_t)8)]));
  _5062 = *(uint64_t*)_5061;
  if ((((int64_t)_5062) > ((int64_t)_5060))) {
    goto _5118;
  } else {
    _5079__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5119;
  }

_5118:
  _5063 = *(void**)_5058;
  _5064 = *(uint8_t*)(((&((uint8_t*)_5063)[((int64_t)_5060)])));
  *(uint64_t*)_5059 = (llvm_add_u64(_5060, 1));
  _5065 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5064)), 0);
  _5066 = llvm_sub_u8(32, (llvm_shl_u8(_5065, 3)));
  _5067 = (((uint32_t)(uint8_t)_5064)) << 24;
  if ((((uint8_t)_5066) > ((uint8_t)((uint8_t)16)))) {
    _5079__PHI_TEMPORARY = _5067;   /* for PHI node */
    goto _5119;
  } else {
    _5068__PHI_TEMPORARY = 16;   /* for PHI node */
    _5069__PHI_TEMPORARY = _5067;   /* for PHI node */
    goto _5120;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5120:
  _5068 = _5068__PHI_TEMPORARY;
  _5069 = _5069__PHI_TEMPORARY;
  if (((((int64_t)_5068) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5068) < ((uint64_t)(((uint64_t)(uint8_t)_5066)))))) {
    _5079__PHI_TEMPORARY = _5069;   /* for PHI node */
    goto _5119;
  } else {
    goto _5121;
  }

_5121:
  _5070 = *(uint64_t*)_5059;
  _5071 = *(uint64_t*)_5061;
  if ((((int64_t)_5071) > ((int64_t)_5070))) {
    goto _5122;
  } else {
    _5079__PHI_TEMPORARY = _5069;   /* for PHI node */
    goto _5119;
  }

_5122:
  _5072 = *(void**)_5058;
  _5073 = *(uint8_t*)(((&((uint8_t*)_5072)[((int64_t)_5070)])));
  if ((((int8_t)_5073) > ((int8_t)((uint8_t)-65)))) {
    _5079__PHI_TEMPORARY = _5069;   /* for PHI node */
    goto _5119;
  } else {
    goto _5123;
  }

_5123:
  _5074 = llvm_select_u32((((int64_t)_5070) < ((int64_t)_5071)), (((uint32_t)(uint8_t)_5073)), 0);
  _5075 = *(uint64_t*)_5059;
  *(uint64_t*)_5059 = (llvm_add_u64(_5075, 1));
  _5076 = llvm_neg_u64(_5068);
  _5077 = _5069 | (llvm_select_u32((((int64_t)_5068) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5076) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5074, (((uint32_t)_5076)))))), (llvm_select_u32((((uint64_t)_5068) > ((uint64_t)UINT64_C(31))), 0, (_5074 << (((uint32_t)_5068)))))));
  _5078 = llvm_add_u64(_5068, -8);
  _5068__PHI_TEMPORARY = _5078;   /* for PHI node */
  _5069__PHI_TEMPORARY = _5077;   /* for PHI node */
  goto _5120;

  } while (1); /* end of syntactic loop '' */
_5119:
  _5079 = _5079__PHI_TEMPORARY;
  _5080 = *(uint64_t*)_4980;
  _5081 = *(uint64_t*)_4982;
  _5082 = jsyn_cbe_fshl_i64(_5081, _5080, 32);
  _5083 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5079)), _5081, 32);
  *(uint64_t*)_4980 = _5082;
  *(uint64_t*)_4982 = _5083;
  _5084 = ((&((uint8_t*)_4971)[((int64_t)56)]));
  _5085 = *(uint64_t*)_5084;
  _5086 = ((&((uint8_t*)_4971)[((int64_t)64)]));
  _5087 = *(uint64_t*)_5086;
  _5088 = ((&((uint8_t*)_4971)[((int64_t)72)]));
  _5089 = *(uint64_t*)_5088;
  _5090 = *(void**)_4971;
  _5091 = *(uint64_t*)(((&((uint8_t*)_5090)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_4971)[((int64_t)48)]))) = _5085;
  *(uint64_t*)_5084 = _5087;
  *(uint64_t*)_5086 = _5089;
  *(uint64_t*)_5088 = _5091;
  julia_emit_4484((&_4974), _4970, _4971, 66, 1);
  _5053__PHI_TEMPORARY = (&_4974);   /* for PHI node */
  goto _5114;

_5116:
  _5092 = *(uint16_t*)(((&((uint8_t*)_4971)[((int64_t)16)])));
  if ((_5092 == ((uint16_t)53))) {
    goto _5124;
  } else {
    goto _5125;
  }

_5124:
  julia_emit_4484((&_4975), _4970, _4971, 3, 1);
  _5053__PHI_TEMPORARY = (&_4975);   /* for PHI node */
  goto _5114;

_5125:
  julia_emit_4484((&_4976), _4970, _4971, 527, 1);
  _5053__PHI_TEMPORARY = (&_4976);   /* for PHI node */
  goto _5114;

_5097:
  _5093 = *(uint64_t*)_4980;
  _5094 = llvm_lshr_u64(_5093, 32);
  if ((((((uint64_t)_5093) < ((uint64_t)UINT64_C(3458764518115508224))) & (_5094 != UINT64_C(805306368))) | ((((uint64_t)_5093) > ((uint64_t)UINT64_C(4107282860161892351))) & (_5094 != UINT64_C(956301312))))) {
    goto _5126;
  } else {
    goto _5127;
  }

_5127:
  julia_lex_digit_4491((&_4977), _4970, _4971, 48);
  _5053__PHI_TEMPORARY = (&_4977);   /* for PHI node */
  goto _5114;

_5126:
  _5095 = *(uint16_t*)(((&((uint8_t*)_4971)[((int64_t)16)])));
  if ((_5095 == ((uint16_t)53))) {
    goto _5128;
  } else {
    goto _5129;
  }

_5128:
  julia_emit_4484((&_4978), _4970, _4971, 3, 1);
  _5053__PHI_TEMPORARY = (&_4978);   /* for PHI node */
  goto _5114;

_5129:
  julia_emit_4484((&_4979), _4970, _4971, 707, 1);
  _5053__PHI_TEMPORARY = (&_4979);   /* for PHI node */
  goto _5114;

}


static void julia_lex_percent_4562(void* _5130, void* _5131, void* _5132) {
  struct l_array_4_uint64_t _5133;    /* Address-exposed local */
  struct l_array_4_uint64_t _5134;    /* Address-exposed local */
  void* _5135;
  uint64_t _5136;
  void* _5137;
  void* _5138;
  void* _5139;
  uint64_t _5140;
  void* _5141;
  uint64_t _5142;
  void* _5143;
  uint8_t _5144;
  uint8_t _5145;
  uint8_t _5146;
  uint32_t _5147;
  uint64_t _5148;
  uint64_t _5148__PHI_TEMPORARY;
  uint32_t _5149;
  uint32_t _5149__PHI_TEMPORARY;
  uint64_t _5150;
  uint64_t _5151;
  void* _5152;
  uint8_t _5153;
  uint32_t _5154;
  uint64_t _5155;
  uint64_t _5156;
  uint32_t _5157;
  uint64_t _5158;
  uint32_t _5159;
  uint32_t _5159__PHI_TEMPORARY;
  uint64_t _5160;
  uint64_t _5161;
  uint64_t _5162;
  uint64_t _5163;
  void* _5164;
  uint64_t _5165;
  void* _5166;
  uint64_t _5167;
  void* _5168;
  uint64_t _5169;
  void* _5170;
  uint64_t _5171;
  void* _5172;
  void* _5172__PHI_TEMPORARY;
  void* _5173;

  _5135 = ((&((uint8_t*)_5132)[((int64_t)32)]));
  _5136 = *(uint64_t*)_5135;
  _5137 = ((&((uint8_t*)_5132)[((int64_t)40)]));
  if (((_5136 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _5174;
  } else {
    goto _5175;
  }

_5174:
  _5138 = *(void**)_5132;
  _5139 = ((&((uint8_t*)_5138)[((int64_t)16)]));
  _5140 = *(uint64_t*)_5139;
  _5141 = ((&((uint8_t*)_5138)[((int64_t)8)]));
  _5142 = *(uint64_t*)_5141;
  if ((((int64_t)_5142) > ((int64_t)_5140))) {
    goto _5176;
  } else {
    _5159__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5177;
  }

_5176:
  _5143 = *(void**)_5138;
  _5144 = *(uint8_t*)(((&((uint8_t*)_5143)[((int64_t)_5140)])));
  *(uint64_t*)_5139 = (llvm_add_u64(_5140, 1));
  _5145 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5144)), 0);
  _5146 = llvm_sub_u8(32, (llvm_shl_u8(_5145, 3)));
  _5147 = (((uint32_t)(uint8_t)_5144)) << 24;
  if ((((uint8_t)_5146) > ((uint8_t)((uint8_t)16)))) {
    _5159__PHI_TEMPORARY = _5147;   /* for PHI node */
    goto _5177;
  } else {
    _5148__PHI_TEMPORARY = 16;   /* for PHI node */
    _5149__PHI_TEMPORARY = _5147;   /* for PHI node */
    goto _5178;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5178:
  _5148 = _5148__PHI_TEMPORARY;
  _5149 = _5149__PHI_TEMPORARY;
  if (((((int64_t)_5148) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5148) < ((uint64_t)(((uint64_t)(uint8_t)_5146)))))) {
    _5159__PHI_TEMPORARY = _5149;   /* for PHI node */
    goto _5177;
  } else {
    goto _5179;
  }

_5179:
  _5150 = *(uint64_t*)_5139;
  _5151 = *(uint64_t*)_5141;
  if ((((int64_t)_5151) > ((int64_t)_5150))) {
    goto _5180;
  } else {
    _5159__PHI_TEMPORARY = _5149;   /* for PHI node */
    goto _5177;
  }

_5180:
  _5152 = *(void**)_5138;
  _5153 = *(uint8_t*)(((&((uint8_t*)_5152)[((int64_t)_5150)])));
  if ((((int8_t)_5153) > ((int8_t)((uint8_t)-65)))) {
    _5159__PHI_TEMPORARY = _5149;   /* for PHI node */
    goto _5177;
  } else {
    goto _5181;
  }

_5181:
  _5154 = llvm_select_u32((((int64_t)_5150) < ((int64_t)_5151)), (((uint32_t)(uint8_t)_5153)), 0);
  _5155 = *(uint64_t*)_5139;
  *(uint64_t*)_5139 = (llvm_add_u64(_5155, 1));
  _5156 = llvm_neg_u64(_5148);
  _5157 = _5149 | (llvm_select_u32((((int64_t)_5148) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5156) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5154, (((uint32_t)_5156)))))), (llvm_select_u32((((uint64_t)_5148) > ((uint64_t)UINT64_C(31))), 0, (_5154 << (((uint32_t)_5148)))))));
  _5158 = llvm_add_u64(_5148, -8);
  _5148__PHI_TEMPORARY = _5158;   /* for PHI node */
  _5149__PHI_TEMPORARY = _5157;   /* for PHI node */
  goto _5178;

  } while (1); /* end of syntactic loop '' */
_5177:
  _5159 = _5159__PHI_TEMPORARY;
  _5160 = *(uint64_t*)_5135;
  _5161 = *(uint64_t*)_5137;
  _5162 = jsyn_cbe_fshl_i64(_5161, _5160, 32);
  _5163 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5159)), _5161, 32);
  *(uint64_t*)_5135 = _5162;
  *(uint64_t*)_5137 = _5163;
  _5164 = ((&((uint8_t*)_5132)[((int64_t)56)]));
  _5165 = *(uint64_t*)_5164;
  _5166 = ((&((uint8_t*)_5132)[((int64_t)64)]));
  _5167 = *(uint64_t*)_5166;
  _5168 = ((&((uint8_t*)_5132)[((int64_t)72)]));
  _5169 = *(uint64_t*)_5168;
  _5170 = *(void**)_5132;
  _5171 = *(uint64_t*)(((&((uint8_t*)_5170)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5132)[((int64_t)48)]))) = _5165;
  *(uint64_t*)_5164 = _5167;
  *(uint64_t*)_5166 = _5169;
  *(uint64_t*)_5168 = _5171;
  julia_emit_4484((&_5133), _5131, _5132, 71, 1);
  _5172__PHI_TEMPORARY = (&_5133);   /* for PHI node */
  goto _5182;

_5182:
  _5172 = _5172__PHI_TEMPORARY;
  _5173 = memcpy(_5130, _5172, 32);
  return;
_5175:
  julia_emit_4484((&_5134), _5131, _5132, 595, 1);
  _5172__PHI_TEMPORARY = (&_5134);   /* for PHI node */
  goto _5182;

}


static void julia_lex_bar_4579(void* _5183, void* _5184, void* _5185) {
  struct l_array_4_uint64_t _5186;    /* Address-exposed local */
  struct l_array_4_uint64_t _5187;    /* Address-exposed local */
  struct l_array_4_uint64_t _5188;    /* Address-exposed local */
  struct l_array_4_uint64_t _5189;    /* Address-exposed local */
  void* _5190;
  uint64_t _5191;
  void* _5192;
  void* _5193;
  void* _5194;
  uint64_t _5195;
  void* _5196;
  uint64_t _5197;
  void* _5198;
  uint8_t _5199;
  uint8_t _5200;
  uint8_t _5201;
  uint32_t _5202;
  uint64_t _5203;
  uint64_t _5203__PHI_TEMPORARY;
  uint32_t _5204;
  uint32_t _5204__PHI_TEMPORARY;
  uint64_t _5205;
  uint64_t _5206;
  void* _5207;
  uint8_t _5208;
  uint32_t _5209;
  uint64_t _5210;
  uint64_t _5211;
  uint32_t _5212;
  uint64_t _5213;
  uint32_t _5214;
  uint32_t _5214__PHI_TEMPORARY;
  uint64_t _5215;
  uint64_t _5216;
  uint64_t _5217;
  uint64_t _5218;
  void* _5219;
  uint64_t _5220;
  void* _5221;
  uint64_t _5222;
  void* _5223;
  uint64_t _5224;
  void* _5225;
  uint64_t _5226;
  void* _5227;
  void* _5227__PHI_TEMPORARY;
  void* _5228;
  uint64_t _5229;
  void* _5230;
  void* _5231;
  uint64_t _5232;
  void* _5233;
  uint64_t _5234;
  void* _5235;
  uint8_t _5236;
  uint8_t _5237;
  uint8_t _5238;
  uint32_t _5239;
  uint64_t _5240;
  uint64_t _5240__PHI_TEMPORARY;
  uint32_t _5241;
  uint32_t _5241__PHI_TEMPORARY;
  uint64_t _5242;
  uint64_t _5243;
  void* _5244;
  uint8_t _5245;
  uint32_t _5246;
  uint64_t _5247;
  uint64_t _5248;
  uint32_t _5249;
  uint64_t _5250;
  uint32_t _5251;
  uint32_t _5251__PHI_TEMPORARY;
  uint64_t _5252;
  uint64_t _5253;
  uint64_t _5254;
  uint64_t _5255;
  void* _5256;
  uint64_t _5257;
  void* _5258;
  uint64_t _5259;
  void* _5260;
  uint64_t _5261;
  void* _5262;
  uint64_t _5263;
  uint64_t _5264;
  void* _5265;
  void* _5266;
  uint64_t _5267;
  void* _5268;
  uint64_t _5269;
  void* _5270;
  uint8_t _5271;
  uint8_t _5272;
  uint8_t _5273;
  uint32_t _5274;
  uint64_t _5275;
  uint64_t _5275__PHI_TEMPORARY;
  uint32_t _5276;
  uint32_t _5276__PHI_TEMPORARY;
  uint64_t _5277;
  uint64_t _5278;
  void* _5279;
  uint8_t _5280;
  uint32_t _5281;
  uint64_t _5282;
  uint64_t _5283;
  uint32_t _5284;
  uint64_t _5285;
  uint32_t _5286;
  uint32_t _5286__PHI_TEMPORARY;
  uint64_t _5287;
  uint64_t _5288;
  uint64_t _5289;
  uint64_t _5290;
  void* _5291;
  uint64_t _5292;
  void* _5293;
  uint64_t _5294;
  void* _5295;
  uint64_t _5296;
  void* _5297;
  uint64_t _5298;

  _5190 = ((&((uint8_t*)_5185)[((int64_t)32)]));
  _5191 = *(uint64_t*)_5190;
  _5192 = ((&((uint8_t*)_5185)[((int64_t)40)]));
  if (((_5191 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _5299;
  } else {
    goto _5300;
  }

_5299:
  _5193 = *(void**)_5185;
  _5194 = ((&((uint8_t*)_5193)[((int64_t)16)]));
  _5195 = *(uint64_t*)_5194;
  _5196 = ((&((uint8_t*)_5193)[((int64_t)8)]));
  _5197 = *(uint64_t*)_5196;
  if ((((int64_t)_5197) > ((int64_t)_5195))) {
    goto _5301;
  } else {
    _5214__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5302;
  }

_5301:
  _5198 = *(void**)_5193;
  _5199 = *(uint8_t*)(((&((uint8_t*)_5198)[((int64_t)_5195)])));
  *(uint64_t*)_5194 = (llvm_add_u64(_5195, 1));
  _5200 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5199)), 0);
  _5201 = llvm_sub_u8(32, (llvm_shl_u8(_5200, 3)));
  _5202 = (((uint32_t)(uint8_t)_5199)) << 24;
  if ((((uint8_t)_5201) > ((uint8_t)((uint8_t)16)))) {
    _5214__PHI_TEMPORARY = _5202;   /* for PHI node */
    goto _5302;
  } else {
    _5203__PHI_TEMPORARY = 16;   /* for PHI node */
    _5204__PHI_TEMPORARY = _5202;   /* for PHI node */
    goto _5303;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5303:
  _5203 = _5203__PHI_TEMPORARY;
  _5204 = _5204__PHI_TEMPORARY;
  if (((((int64_t)_5203) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5203) < ((uint64_t)(((uint64_t)(uint8_t)_5201)))))) {
    _5214__PHI_TEMPORARY = _5204;   /* for PHI node */
    goto _5302;
  } else {
    goto _5304;
  }

_5304:
  _5205 = *(uint64_t*)_5194;
  _5206 = *(uint64_t*)_5196;
  if ((((int64_t)_5206) > ((int64_t)_5205))) {
    goto _5305;
  } else {
    _5214__PHI_TEMPORARY = _5204;   /* for PHI node */
    goto _5302;
  }

_5305:
  _5207 = *(void**)_5193;
  _5208 = *(uint8_t*)(((&((uint8_t*)_5207)[((int64_t)_5205)])));
  if ((((int8_t)_5208) > ((int8_t)((uint8_t)-65)))) {
    _5214__PHI_TEMPORARY = _5204;   /* for PHI node */
    goto _5302;
  } else {
    goto _5306;
  }

_5306:
  _5209 = llvm_select_u32((((int64_t)_5205) < ((int64_t)_5206)), (((uint32_t)(uint8_t)_5208)), 0);
  _5210 = *(uint64_t*)_5194;
  *(uint64_t*)_5194 = (llvm_add_u64(_5210, 1));
  _5211 = llvm_neg_u64(_5203);
  _5212 = _5204 | (llvm_select_u32((((int64_t)_5203) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5211) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5209, (((uint32_t)_5211)))))), (llvm_select_u32((((uint64_t)_5203) > ((uint64_t)UINT64_C(31))), 0, (_5209 << (((uint32_t)_5203)))))));
  _5213 = llvm_add_u64(_5203, -8);
  _5203__PHI_TEMPORARY = _5213;   /* for PHI node */
  _5204__PHI_TEMPORARY = _5212;   /* for PHI node */
  goto _5303;

  } while (1); /* end of syntactic loop '' */
_5302:
  _5214 = _5214__PHI_TEMPORARY;
  _5215 = *(uint64_t*)_5190;
  _5216 = *(uint64_t*)_5192;
  _5217 = jsyn_cbe_fshl_i64(_5216, _5215, 32);
  _5218 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5214)), _5216, 32);
  *(uint64_t*)_5190 = _5217;
  *(uint64_t*)_5192 = _5218;
  _5219 = ((&((uint8_t*)_5185)[((int64_t)56)]));
  _5220 = *(uint64_t*)_5219;
  _5221 = ((&((uint8_t*)_5185)[((int64_t)64)]));
  _5222 = *(uint64_t*)_5221;
  _5223 = ((&((uint8_t*)_5185)[((int64_t)72)]));
  _5224 = *(uint64_t*)_5223;
  _5225 = *(void**)_5185;
  _5226 = *(uint64_t*)(((&((uint8_t*)_5225)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5185)[((int64_t)48)]))) = _5220;
  *(uint64_t*)_5219 = _5222;
  *(uint64_t*)_5221 = _5224;
  *(uint64_t*)_5223 = _5226;
  julia_emit_4484((&_5186), _5184, _5185, 71, 1);
  _5227__PHI_TEMPORARY = (&_5186);   /* for PHI node */
  goto _5307;

_5307:
  _5227 = _5227__PHI_TEMPORARY;
  _5228 = memcpy(_5183, _5227, 32);
  return;
_5300:
  _5229 = *(uint64_t*)_5190;
  if (((_5229 & INT64_C(-4294967296)) == UINT64_C(4467570830351532032))) {
    goto _5308;
  } else {
    goto _5309;
  }

_5308:
  _5230 = *(void**)_5185;
  _5231 = ((&((uint8_t*)_5230)[((int64_t)16)]));
  _5232 = *(uint64_t*)_5231;
  _5233 = ((&((uint8_t*)_5230)[((int64_t)8)]));
  _5234 = *(uint64_t*)_5233;
  if ((((int64_t)_5234) > ((int64_t)_5232))) {
    goto _5310;
  } else {
    _5251__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5311;
  }

_5310:
  _5235 = *(void**)_5230;
  _5236 = *(uint8_t*)(((&((uint8_t*)_5235)[((int64_t)_5232)])));
  *(uint64_t*)_5231 = (llvm_add_u64(_5232, 1));
  _5237 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5236)), 0);
  _5238 = llvm_sub_u8(32, (llvm_shl_u8(_5237, 3)));
  _5239 = (((uint32_t)(uint8_t)_5236)) << 24;
  if ((((uint8_t)_5238) > ((uint8_t)((uint8_t)16)))) {
    _5251__PHI_TEMPORARY = _5239;   /* for PHI node */
    goto _5311;
  } else {
    _5240__PHI_TEMPORARY = 16;   /* for PHI node */
    _5241__PHI_TEMPORARY = _5239;   /* for PHI node */
    goto _5312;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5312:
  _5240 = _5240__PHI_TEMPORARY;
  _5241 = _5241__PHI_TEMPORARY;
  if (((((int64_t)_5240) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5240) < ((uint64_t)(((uint64_t)(uint8_t)_5238)))))) {
    _5251__PHI_TEMPORARY = _5241;   /* for PHI node */
    goto _5311;
  } else {
    goto _5313;
  }

_5313:
  _5242 = *(uint64_t*)_5231;
  _5243 = *(uint64_t*)_5233;
  if ((((int64_t)_5243) > ((int64_t)_5242))) {
    goto _5314;
  } else {
    _5251__PHI_TEMPORARY = _5241;   /* for PHI node */
    goto _5311;
  }

_5314:
  _5244 = *(void**)_5230;
  _5245 = *(uint8_t*)(((&((uint8_t*)_5244)[((int64_t)_5242)])));
  if ((((int8_t)_5245) > ((int8_t)((uint8_t)-65)))) {
    _5251__PHI_TEMPORARY = _5241;   /* for PHI node */
    goto _5311;
  } else {
    goto _5315;
  }

_5315:
  _5246 = llvm_select_u32((((int64_t)_5242) < ((int64_t)_5243)), (((uint32_t)(uint8_t)_5245)), 0);
  _5247 = *(uint64_t*)_5231;
  *(uint64_t*)_5231 = (llvm_add_u64(_5247, 1));
  _5248 = llvm_neg_u64(_5240);
  _5249 = _5241 | (llvm_select_u32((((int64_t)_5240) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5248) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5246, (((uint32_t)_5248)))))), (llvm_select_u32((((uint64_t)_5240) > ((uint64_t)UINT64_C(31))), 0, (_5246 << (((uint32_t)_5240)))))));
  _5250 = llvm_add_u64(_5240, -8);
  _5240__PHI_TEMPORARY = _5250;   /* for PHI node */
  _5241__PHI_TEMPORARY = _5249;   /* for PHI node */
  goto _5312;

  } while (1); /* end of syntactic loop '' */
_5311:
  _5251 = _5251__PHI_TEMPORARY;
  _5252 = *(uint64_t*)_5190;
  _5253 = *(uint64_t*)_5192;
  _5254 = jsyn_cbe_fshl_i64(_5253, _5252, 32);
  _5255 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5251)), _5253, 32);
  *(uint64_t*)_5190 = _5254;
  *(uint64_t*)_5192 = _5255;
  _5256 = ((&((uint8_t*)_5185)[((int64_t)56)]));
  _5257 = *(uint64_t*)_5256;
  _5258 = ((&((uint8_t*)_5185)[((int64_t)64)]));
  _5259 = *(uint64_t*)_5258;
  _5260 = ((&((uint8_t*)_5185)[((int64_t)72)]));
  _5261 = *(uint64_t*)_5260;
  _5262 = *(void**)_5185;
  _5263 = *(uint64_t*)(((&((uint8_t*)_5262)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5185)[((int64_t)48)]))) = _5257;
  *(uint64_t*)_5256 = _5259;
  *(uint64_t*)_5258 = _5261;
  *(uint64_t*)_5260 = _5263;
  julia_emit_4484((&_5187), _5184, _5185, 525, 1);
  _5227__PHI_TEMPORARY = (&_5187);   /* for PHI node */
  goto _5307;

_5309:
  _5264 = *(uint64_t*)_5190;
  if (((_5264 & INT64_C(-4294967296)) == UINT64_C(8935141660703064064))) {
    goto _5316;
  } else {
    goto _5317;
  }

_5316:
  _5265 = *(void**)_5185;
  _5266 = ((&((uint8_t*)_5265)[((int64_t)16)]));
  _5267 = *(uint64_t*)_5266;
  _5268 = ((&((uint8_t*)_5265)[((int64_t)8)]));
  _5269 = *(uint64_t*)_5268;
  if ((((int64_t)_5269) > ((int64_t)_5267))) {
    goto _5318;
  } else {
    _5286__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5319;
  }

_5318:
  _5270 = *(void**)_5265;
  _5271 = *(uint8_t*)(((&((uint8_t*)_5270)[((int64_t)_5267)])));
  *(uint64_t*)_5266 = (llvm_add_u64(_5267, 1));
  _5272 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5271)), 0);
  _5273 = llvm_sub_u8(32, (llvm_shl_u8(_5272, 3)));
  _5274 = (((uint32_t)(uint8_t)_5271)) << 24;
  if ((((uint8_t)_5273) > ((uint8_t)((uint8_t)16)))) {
    _5286__PHI_TEMPORARY = _5274;   /* for PHI node */
    goto _5319;
  } else {
    _5275__PHI_TEMPORARY = 16;   /* for PHI node */
    _5276__PHI_TEMPORARY = _5274;   /* for PHI node */
    goto _5320;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5320:
  _5275 = _5275__PHI_TEMPORARY;
  _5276 = _5276__PHI_TEMPORARY;
  if (((((int64_t)_5275) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5275) < ((uint64_t)(((uint64_t)(uint8_t)_5273)))))) {
    _5286__PHI_TEMPORARY = _5276;   /* for PHI node */
    goto _5319;
  } else {
    goto _5321;
  }

_5321:
  _5277 = *(uint64_t*)_5266;
  _5278 = *(uint64_t*)_5268;
  if ((((int64_t)_5278) > ((int64_t)_5277))) {
    goto _5322;
  } else {
    _5286__PHI_TEMPORARY = _5276;   /* for PHI node */
    goto _5319;
  }

_5322:
  _5279 = *(void**)_5265;
  _5280 = *(uint8_t*)(((&((uint8_t*)_5279)[((int64_t)_5277)])));
  if ((((int8_t)_5280) > ((int8_t)((uint8_t)-65)))) {
    _5286__PHI_TEMPORARY = _5276;   /* for PHI node */
    goto _5319;
  } else {
    goto _5323;
  }

_5323:
  _5281 = llvm_select_u32((((int64_t)_5277) < ((int64_t)_5278)), (((uint32_t)(uint8_t)_5280)), 0);
  _5282 = *(uint64_t*)_5266;
  *(uint64_t*)_5266 = (llvm_add_u64(_5282, 1));
  _5283 = llvm_neg_u64(_5275);
  _5284 = _5276 | (llvm_select_u32((((int64_t)_5275) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5283) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5281, (((uint32_t)_5283)))))), (llvm_select_u32((((uint64_t)_5275) > ((uint64_t)UINT64_C(31))), 0, (_5281 << (((uint32_t)_5275)))))));
  _5285 = llvm_add_u64(_5275, -8);
  _5275__PHI_TEMPORARY = _5285;   /* for PHI node */
  _5276__PHI_TEMPORARY = _5284;   /* for PHI node */
  goto _5320;

  } while (1); /* end of syntactic loop '' */
_5319:
  _5286 = _5286__PHI_TEMPORARY;
  _5287 = *(uint64_t*)_5190;
  _5288 = *(uint64_t*)_5192;
  _5289 = jsyn_cbe_fshl_i64(_5288, _5287, 32);
  _5290 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5286)), _5288, 32);
  *(uint64_t*)_5190 = _5289;
  *(uint64_t*)_5192 = _5290;
  _5291 = ((&((uint8_t*)_5185)[((int64_t)56)]));
  _5292 = *(uint64_t*)_5291;
  _5293 = ((&((uint8_t*)_5185)[((int64_t)64)]));
  _5294 = *(uint64_t*)_5293;
  _5295 = ((&((uint8_t*)_5185)[((int64_t)72)]));
  _5296 = *(uint64_t*)_5295;
  _5297 = *(void**)_5185;
  _5298 = *(uint64_t*)(((&((uint8_t*)_5297)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5185)[((int64_t)48)]))) = _5292;
  *(uint64_t*)_5291 = _5294;
  *(uint64_t*)_5293 = _5296;
  *(uint64_t*)_5295 = _5298;
  julia_emit_4484((&_5188), _5184, _5185, 232, 1);
  _5227__PHI_TEMPORARY = (&_5188);   /* for PHI node */
  goto _5307;

_5317:
  julia_emit_4484((&_5189), _5184, _5185, 542, 1);
  _5227__PHI_TEMPORARY = (&_5189);   /* for PHI node */
  goto _5307;

}


static void julia_lex_colon_4583(void* _5324, void* _5325, void* _5326) {
  struct l_array_4_uint64_t _5327;    /* Address-exposed local */
  struct l_array_4_uint64_t _5328;    /* Address-exposed local */
  struct l_array_4_uint64_t _5329;    /* Address-exposed local */
  void* _5330;
  uint64_t _5331;
  void* _5332;
  void* _5333;
  void* _5334;
  uint64_t _5335;
  void* _5336;
  uint64_t _5337;
  void* _5338;
  uint8_t _5339;
  uint8_t _5340;
  uint8_t _5341;
  uint32_t _5342;
  uint64_t _5343;
  uint64_t _5343__PHI_TEMPORARY;
  uint32_t _5344;
  uint32_t _5344__PHI_TEMPORARY;
  uint64_t _5345;
  uint64_t _5346;
  void* _5347;
  uint8_t _5348;
  uint32_t _5349;
  uint64_t _5350;
  uint64_t _5351;
  uint32_t _5352;
  uint64_t _5353;
  uint32_t _5354;
  uint32_t _5354__PHI_TEMPORARY;
  uint64_t _5355;
  uint64_t _5356;
  uint64_t _5357;
  uint64_t _5358;
  void* _5359;
  uint64_t _5360;
  void* _5361;
  uint64_t _5362;
  void* _5363;
  uint64_t _5364;
  void* _5365;
  uint64_t _5366;
  void* _5367;
  void* _5367__PHI_TEMPORARY;
  void* _5368;
  uint64_t _5369;
  void* _5370;
  void* _5371;
  uint64_t _5372;
  void* _5373;
  uint64_t _5374;
  void* _5375;
  uint8_t _5376;
  uint8_t _5377;
  uint8_t _5378;
  uint32_t _5379;
  uint64_t _5380;
  uint64_t _5380__PHI_TEMPORARY;
  uint32_t _5381;
  uint32_t _5381__PHI_TEMPORARY;
  uint64_t _5382;
  uint64_t _5383;
  void* _5384;
  uint8_t _5385;
  uint32_t _5386;
  uint64_t _5387;
  uint64_t _5388;
  uint32_t _5389;
  uint64_t _5390;
  uint32_t _5391;
  uint32_t _5391__PHI_TEMPORARY;
  uint64_t _5392;
  uint64_t _5393;
  uint64_t _5394;
  uint64_t _5395;
  void* _5396;
  uint64_t _5397;
  void* _5398;
  uint64_t _5399;
  void* _5400;
  uint64_t _5401;
  void* _5402;
  uint64_t _5403;

  _5330 = ((&((uint8_t*)_5326)[((int64_t)32)]));
  _5331 = *(uint64_t*)_5330;
  _5332 = ((&((uint8_t*)_5326)[((int64_t)40)]));
  if (((_5331 & INT64_C(-4294967296)) == UINT64_C(4179340454199820288))) {
    goto _5404;
  } else {
    goto _5405;
  }

_5404:
  _5333 = *(void**)_5326;
  _5334 = ((&((uint8_t*)_5333)[((int64_t)16)]));
  _5335 = *(uint64_t*)_5334;
  _5336 = ((&((uint8_t*)_5333)[((int64_t)8)]));
  _5337 = *(uint64_t*)_5336;
  if ((((int64_t)_5337) > ((int64_t)_5335))) {
    goto _5406;
  } else {
    _5354__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5407;
  }

_5406:
  _5338 = *(void**)_5333;
  _5339 = *(uint8_t*)(((&((uint8_t*)_5338)[((int64_t)_5335)])));
  *(uint64_t*)_5334 = (llvm_add_u64(_5335, 1));
  _5340 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5339)), 0);
  _5341 = llvm_sub_u8(32, (llvm_shl_u8(_5340, 3)));
  _5342 = (((uint32_t)(uint8_t)_5339)) << 24;
  if ((((uint8_t)_5341) > ((uint8_t)((uint8_t)16)))) {
    _5354__PHI_TEMPORARY = _5342;   /* for PHI node */
    goto _5407;
  } else {
    _5343__PHI_TEMPORARY = 16;   /* for PHI node */
    _5344__PHI_TEMPORARY = _5342;   /* for PHI node */
    goto _5408;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5408:
  _5343 = _5343__PHI_TEMPORARY;
  _5344 = _5344__PHI_TEMPORARY;
  if (((((int64_t)_5343) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5343) < ((uint64_t)(((uint64_t)(uint8_t)_5341)))))) {
    _5354__PHI_TEMPORARY = _5344;   /* for PHI node */
    goto _5407;
  } else {
    goto _5409;
  }

_5409:
  _5345 = *(uint64_t*)_5334;
  _5346 = *(uint64_t*)_5336;
  if ((((int64_t)_5346) > ((int64_t)_5345))) {
    goto _5410;
  } else {
    _5354__PHI_TEMPORARY = _5344;   /* for PHI node */
    goto _5407;
  }

_5410:
  _5347 = *(void**)_5333;
  _5348 = *(uint8_t*)(((&((uint8_t*)_5347)[((int64_t)_5345)])));
  if ((((int8_t)_5348) > ((int8_t)((uint8_t)-65)))) {
    _5354__PHI_TEMPORARY = _5344;   /* for PHI node */
    goto _5407;
  } else {
    goto _5411;
  }

_5411:
  _5349 = llvm_select_u32((((int64_t)_5345) < ((int64_t)_5346)), (((uint32_t)(uint8_t)_5348)), 0);
  _5350 = *(uint64_t*)_5334;
  *(uint64_t*)_5334 = (llvm_add_u64(_5350, 1));
  _5351 = llvm_neg_u64(_5343);
  _5352 = _5344 | (llvm_select_u32((((int64_t)_5343) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5351) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5349, (((uint32_t)_5351)))))), (llvm_select_u32((((uint64_t)_5343) > ((uint64_t)UINT64_C(31))), 0, (_5349 << (((uint32_t)_5343)))))));
  _5353 = llvm_add_u64(_5343, -8);
  _5343__PHI_TEMPORARY = _5353;   /* for PHI node */
  _5344__PHI_TEMPORARY = _5352;   /* for PHI node */
  goto _5408;

  } while (1); /* end of syntactic loop '' */
_5407:
  _5354 = _5354__PHI_TEMPORARY;
  _5355 = *(uint64_t*)_5330;
  _5356 = *(uint64_t*)_5332;
  _5357 = jsyn_cbe_fshl_i64(_5356, _5355, 32);
  _5358 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5354)), _5356, 32);
  *(uint64_t*)_5330 = _5357;
  *(uint64_t*)_5332 = _5358;
  _5359 = ((&((uint8_t*)_5326)[((int64_t)56)]));
  _5360 = *(uint64_t*)_5359;
  _5361 = ((&((uint8_t*)_5326)[((int64_t)64)]));
  _5362 = *(uint64_t*)_5361;
  _5363 = ((&((uint8_t*)_5326)[((int64_t)72)]));
  _5364 = *(uint64_t*)_5363;
  _5365 = *(void**)_5326;
  _5366 = *(uint64_t*)(((&((uint8_t*)_5365)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5326)[((int64_t)48)]))) = _5360;
  *(uint64_t*)_5359 = _5362;
  *(uint64_t*)_5361 = _5364;
  *(uint64_t*)_5363 = _5366;
  julia_emit_4484((&_5327), _5325, _5326, 705, 1);
  _5367__PHI_TEMPORARY = (&_5327);   /* for PHI node */
  goto _5412;

_5412:
  _5367 = _5367__PHI_TEMPORARY;
  _5368 = memcpy(_5324, _5367, 32);
  return;
_5405:
  _5369 = *(uint64_t*)_5330;
  if (((_5369 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _5413;
  } else {
    goto _5414;
  }

_5413:
  _5370 = *(void**)_5326;
  _5371 = ((&((uint8_t*)_5370)[((int64_t)16)]));
  _5372 = *(uint64_t*)_5371;
  _5373 = ((&((uint8_t*)_5370)[((int64_t)8)]));
  _5374 = *(uint64_t*)_5373;
  if ((((int64_t)_5374) > ((int64_t)_5372))) {
    goto _5415;
  } else {
    _5391__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5416;
  }

_5415:
  _5375 = *(void**)_5370;
  _5376 = *(uint8_t*)(((&((uint8_t*)_5375)[((int64_t)_5372)])));
  *(uint64_t*)_5371 = (llvm_add_u64(_5372, 1));
  _5377 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5376)), 0);
  _5378 = llvm_sub_u8(32, (llvm_shl_u8(_5377, 3)));
  _5379 = (((uint32_t)(uint8_t)_5376)) << 24;
  if ((((uint8_t)_5378) > ((uint8_t)((uint8_t)16)))) {
    _5391__PHI_TEMPORARY = _5379;   /* for PHI node */
    goto _5416;
  } else {
    _5380__PHI_TEMPORARY = 16;   /* for PHI node */
    _5381__PHI_TEMPORARY = _5379;   /* for PHI node */
    goto _5417;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5417:
  _5380 = _5380__PHI_TEMPORARY;
  _5381 = _5381__PHI_TEMPORARY;
  if (((((int64_t)_5380) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5380) < ((uint64_t)(((uint64_t)(uint8_t)_5378)))))) {
    _5391__PHI_TEMPORARY = _5381;   /* for PHI node */
    goto _5416;
  } else {
    goto _5418;
  }

_5418:
  _5382 = *(uint64_t*)_5371;
  _5383 = *(uint64_t*)_5373;
  if ((((int64_t)_5383) > ((int64_t)_5382))) {
    goto _5419;
  } else {
    _5391__PHI_TEMPORARY = _5381;   /* for PHI node */
    goto _5416;
  }

_5419:
  _5384 = *(void**)_5370;
  _5385 = *(uint8_t*)(((&((uint8_t*)_5384)[((int64_t)_5382)])));
  if ((((int8_t)_5385) > ((int8_t)((uint8_t)-65)))) {
    _5391__PHI_TEMPORARY = _5381;   /* for PHI node */
    goto _5416;
  } else {
    goto _5420;
  }

_5420:
  _5386 = llvm_select_u32((((int64_t)_5382) < ((int64_t)_5383)), (((uint32_t)(uint8_t)_5385)), 0);
  _5387 = *(uint64_t*)_5371;
  *(uint64_t*)_5371 = (llvm_add_u64(_5387, 1));
  _5388 = llvm_neg_u64(_5380);
  _5389 = _5381 | (llvm_select_u32((((int64_t)_5380) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5388) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5386, (((uint32_t)_5388)))))), (llvm_select_u32((((uint64_t)_5380) > ((uint64_t)UINT64_C(31))), 0, (_5386 << (((uint32_t)_5380)))))));
  _5390 = llvm_add_u64(_5380, -8);
  _5380__PHI_TEMPORARY = _5390;   /* for PHI node */
  _5381__PHI_TEMPORARY = _5389;   /* for PHI node */
  goto _5417;

  } while (1); /* end of syntactic loop '' */
_5416:
  _5391 = _5391__PHI_TEMPORARY;
  _5392 = *(uint64_t*)_5330;
  _5393 = *(uint64_t*)_5332;
  _5394 = jsyn_cbe_fshl_i64(_5393, _5392, 32);
  _5395 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5391)), _5393, 32);
  *(uint64_t*)_5330 = _5394;
  *(uint64_t*)_5332 = _5395;
  _5396 = ((&((uint8_t*)_5326)[((int64_t)56)]));
  _5397 = *(uint64_t*)_5396;
  _5398 = ((&((uint8_t*)_5326)[((int64_t)64)]));
  _5399 = *(uint64_t*)_5398;
  _5400 = ((&((uint8_t*)_5326)[((int64_t)72)]));
  _5401 = *(uint64_t*)_5400;
  _5402 = *(void**)_5326;
  _5403 = *(uint64_t*)(((&((uint8_t*)_5402)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5326)[((int64_t)48)]))) = _5397;
  *(uint64_t*)_5396 = _5399;
  *(uint64_t*)_5398 = _5401;
  *(uint64_t*)_5400 = _5403;
  julia_emit_4484((&_5328), _5325, _5326, 73, 1);
  _5367__PHI_TEMPORARY = (&_5328);   /* for PHI node */
  goto _5412;

_5414:
  julia_emit_4484((&_5329), _5325, _5326, 526, 1);
  _5367__PHI_TEMPORARY = (&_5329);   /* for PHI node */
  goto _5412;

}


static void julia_lex_comment_4603(void* _5421, void* _5422, void* _5423) {
  struct l_array_4_uint64_t _5424;    /* Address-exposed local */
  struct l_array_4_uint64_t _5425;    /* Address-exposed local */
  struct l_array_4_uint64_t _5426;    /* Address-exposed local */
  void* _5427;
  uint64_t _5428;
  void* _5429;
  bool _5430;
  bool _5430__PHI_TEMPORARY;
  uint64_t _5431;
  uint64_t _5432;
  uint32_t _5433;
  uint64_t _5434;
  uint32_t _5435;
  uint32_t _5436;
  uint32_t _5437;
  bool _5438;
  void* _5439;
  void* _5440;
  uint64_t _5441;
  void* _5442;
  uint64_t _5443;
  void* _5444;
  uint8_t _5445;
  uint8_t _5446;
  uint8_t _5447;
  uint32_t _5448;
  uint64_t _5449;
  uint64_t _5449__PHI_TEMPORARY;
  uint32_t _5450;
  uint32_t _5450__PHI_TEMPORARY;
  uint64_t _5451;
  uint64_t _5452;
  void* _5453;
  uint8_t _5454;
  uint32_t _5455;
  uint64_t _5456;
  uint64_t _5457;
  uint32_t _5458;
  uint64_t _5459;
  uint32_t _5460;
  uint32_t _5460__PHI_TEMPORARY;
  uint64_t _5461;
  uint64_t _5462;
  uint64_t _5463;
  uint64_t _5464;
  void* _5465;
  uint64_t _5466;
  void* _5467;
  uint64_t _5468;
  void* _5469;
  uint64_t _5470;
  void* _5471;
  uint64_t _5472;
  void* _5473;
  void* _5473__PHI_TEMPORARY;
  void* _5474;
  void* _5475;
  void* _5476;
  uint64_t _5477;
  void* _5478;
  uint64_t _5479;
  void* _5480;
  uint8_t _5481;
  uint8_t _5482;
  uint8_t _5483;
  uint32_t _5484;
  uint64_t _5485;
  uint64_t _5485__PHI_TEMPORARY;
  uint32_t _5486;
  uint32_t _5486__PHI_TEMPORARY;
  uint64_t _5487;
  uint64_t _5488;
  void* _5489;
  uint8_t _5490;
  uint32_t _5491;
  uint64_t _5492;
  uint64_t _5493;
  uint32_t _5494;
  uint64_t _5495;
  uint32_t _5496;
  uint32_t _5496__PHI_TEMPORARY;
  uint64_t _5497;
  uint64_t _5498;
  uint64_t _5499;
  uint64_t _5500;
  void* _5501;
  void* _5502;
  uint64_t _5503;
  void* _5504;
  uint64_t _5505;
  void* _5506;
  uint64_t _5507;
  void* _5508;
  uint64_t _5509;
  uint64_t _5510;
  uint32_t _5511;
  uint64_t _5512;
  uint64_t _5512__PHI_TEMPORARY;
  bool _5513;
  bool _5513__PHI_TEMPORARY;
  uint64_t _5514;
  uint64_t _5514__PHI_TEMPORARY;
  uint64_t _5515;
  uint64_t _5515__PHI_TEMPORARY;
  uint32_t _5516;
  uint32_t _5516__PHI_TEMPORARY;
  bool _5517;
  bool _5517__PHI_TEMPORARY;
  void* _5518;
  void* _5519;
  uint64_t _5520;
  void* _5521;
  uint64_t _5522;
  void* _5523;
  uint8_t _5524;
  uint8_t _5525;
  uint8_t _5526;
  uint32_t _5527;
  uint64_t _5528;
  uint64_t _5528__PHI_TEMPORARY;
  uint32_t _5529;
  uint32_t _5529__PHI_TEMPORARY;
  uint64_t _5530;
  uint64_t _5531;
  void* _5532;
  uint8_t _5533;
  uint32_t _5534;
  uint64_t _5535;
  uint64_t _5536;
  uint32_t _5537;
  uint64_t _5538;
  uint32_t _5539;
  uint32_t _5539__PHI_TEMPORARY;
  uint64_t _5540;
  uint64_t _5541;
  uint64_t _5542;
  uint64_t _5543;
  uint64_t _5544;
  uint64_t _5545;
  uint64_t _5546;
  void* _5547;
  uint64_t _5548;
  uint32_t _5549;
  uint64_t _5550;
  uint64_t _5551;
  uint64_t _5552;
  uint64_t _5553;
  uint64_t _5554;
  uint64_t _5554__PHI_TEMPORARY;
  uint64_t _5555;
  uint64_t _5555__PHI_TEMPORARY;
  uint32_t _5556;
  uint32_t _5557;
  uint32_t _5558;
  bool _5559;
  uint64_t _5560;
  uint64_t _5561;

  _5427 = ((&((uint8_t*)_5423)[((int64_t)32)]));
  _5428 = *(uint64_t*)_5427;
  _5429 = ((&((uint8_t*)_5423)[((int64_t)40)]));
  if (((_5428 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _5562;
  } else {
    _5430__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5563;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5563:
  _5430 = _5430__PHI_TEMPORARY;
  _5431 = *(uint64_t*)_5427;
  _5432 = llvm_lshr_u64(_5431, 32);
  _5433 = ((uint32_t)_5432);
  if ((_5432 == UINT64_C(167772160))) {
    goto _5564;
  } else {
    goto _5565;
  }

_5565:
  _5434 = *(uint64_t*)_5429;
  if (((llvm_select_bool((_5432 == UINT64_C(218103808)), ((_5434 & INT64_C(4294967295)) == UINT64_C(167772160)), 0)) | (_5432 == UINT64_C(4294967295)))) {
    goto _5564;
  } else {
    goto _5566;
  }

_5566:
  _5435 = llvm_OC_ctlz_OC_i32((_5433 ^ -1), 0);
  _5436 = llvm_OC_cttz_OC_i32(_5433, 0);
  _5437 = _5436 & 56;
  _5438 = _5430 & (((((_5435 != 1u) & (((uint32_t)(llvm_add_u32((_5435 << 3), _5437))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_5436) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_5433 & 12632256) ^ 8421504), _5437)) == 0u)))) & ((((_5433 & -33554432) != 3221225472u) & ((_5433 & -2097152) != 3766484992u)) & ((_5433 & -1048576) != 4034920448u))) & (((((uint64_t)_5431) < ((uint64_t)UINT64_C(17122614315006820352))) | (_5432 == UINT64_C(3986669312))) | (((((uint64_t)_5431) > ((uint64_t)UINT64_C(17185876919829135359))) | (_5432 == UINT64_C(4001398784))) & ((((uint64_t)_5431) < ((uint64_t)UINT64_C(17622514693983698944))) | (_5432 == UINT64_C(4103061439))))));
  _5439 = *(void**)_5423;
  _5440 = ((&((uint8_t*)_5439)[((int64_t)16)]));
  _5441 = *(uint64_t*)_5440;
  _5442 = ((&((uint8_t*)_5439)[((int64_t)8)]));
  _5443 = *(uint64_t*)_5442;
  if ((((int64_t)_5443) > ((int64_t)_5441))) {
    goto _5567;
  } else {
    _5460__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5568;
  }

_5567:
  _5444 = *(void**)_5439;
  _5445 = *(uint8_t*)(((&((uint8_t*)_5444)[((int64_t)_5441)])));
  *(uint64_t*)_5440 = (llvm_add_u64(_5441, 1));
  _5446 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5445)), 0);
  _5447 = llvm_sub_u8(32, (llvm_shl_u8(_5446, 3)));
  _5448 = (((uint32_t)(uint8_t)_5445)) << 24;
  if ((((uint8_t)_5447) > ((uint8_t)((uint8_t)16)))) {
    _5460__PHI_TEMPORARY = _5448;   /* for PHI node */
    goto _5568;
  } else {
    _5449__PHI_TEMPORARY = 16;   /* for PHI node */
    _5450__PHI_TEMPORARY = _5448;   /* for PHI node */
    goto _5569;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5569:
  _5449 = _5449__PHI_TEMPORARY;
  _5450 = _5450__PHI_TEMPORARY;
  if (((((int64_t)_5449) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5449) < ((uint64_t)(((uint64_t)(uint8_t)_5447)))))) {
    _5460__PHI_TEMPORARY = _5450;   /* for PHI node */
    goto _5568;
  } else {
    goto _5570;
  }

_5570:
  _5451 = *(uint64_t*)_5440;
  _5452 = *(uint64_t*)_5442;
  if ((((int64_t)_5452) > ((int64_t)_5451))) {
    goto _5571;
  } else {
    _5460__PHI_TEMPORARY = _5450;   /* for PHI node */
    goto _5568;
  }

_5571:
  _5453 = *(void**)_5439;
  _5454 = *(uint8_t*)(((&((uint8_t*)_5453)[((int64_t)_5451)])));
  if ((((int8_t)_5454) > ((int8_t)((uint8_t)-65)))) {
    _5460__PHI_TEMPORARY = _5450;   /* for PHI node */
    goto _5568;
  } else {
    goto _5572;
  }

_5572:
  _5455 = llvm_select_u32((((int64_t)_5451) < ((int64_t)_5452)), (((uint32_t)(uint8_t)_5454)), 0);
  _5456 = *(uint64_t*)_5440;
  *(uint64_t*)_5440 = (llvm_add_u64(_5456, 1));
  _5457 = llvm_neg_u64(_5449);
  _5458 = _5450 | (llvm_select_u32((((int64_t)_5449) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5457) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5455, (((uint32_t)_5457)))))), (llvm_select_u32((((uint64_t)_5449) > ((uint64_t)UINT64_C(31))), 0, (_5455 << (((uint32_t)_5449)))))));
  _5459 = llvm_add_u64(_5449, -8);
  _5449__PHI_TEMPORARY = _5459;   /* for PHI node */
  _5450__PHI_TEMPORARY = _5458;   /* for PHI node */
  goto _5569;

  } while (1); /* end of syntactic loop '' */
_5568:
  _5460 = _5460__PHI_TEMPORARY;
  _5461 = *(uint64_t*)_5427;
  _5462 = *(uint64_t*)_5429;
  _5463 = jsyn_cbe_fshl_i64(_5462, _5461, 32);
  _5464 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5460)), _5462, 32);
  *(uint64_t*)_5427 = _5463;
  *(uint64_t*)_5429 = _5464;
  _5465 = ((&((uint8_t*)_5423)[((int64_t)56)]));
  _5466 = *(uint64_t*)_5465;
  _5467 = ((&((uint8_t*)_5423)[((int64_t)64)]));
  _5468 = *(uint64_t*)_5467;
  _5469 = ((&((uint8_t*)_5423)[((int64_t)72)]));
  _5470 = *(uint64_t*)_5469;
  _5471 = *(void**)_5423;
  _5472 = *(uint64_t*)(((&((uint8_t*)_5471)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5423)[((int64_t)48)]))) = _5466;
  *(uint64_t*)_5465 = _5468;
  *(uint64_t*)_5467 = _5470;
  *(uint64_t*)_5469 = _5472;
  _5430__PHI_TEMPORARY = _5438;   /* for PHI node */
  goto _5563;

  } while (1); /* end of syntactic loop '' */
_5564:
  julia_emit_4484((&_5424), _5422, _5423, (llvm_select_u16(_5430, 0, 762)), 1);
  _5473__PHI_TEMPORARY = (&_5424);   /* for PHI node */
  goto _5573;

_5573:
  _5473 = _5473__PHI_TEMPORARY;
  _5474 = memcpy(_5421, _5473, 32);
  return;
_5562:
  _5475 = *(void**)_5423;
  _5476 = ((&((uint8_t*)_5475)[((int64_t)16)]));
  _5477 = *(uint64_t*)_5476;
  _5478 = ((&((uint8_t*)_5475)[((int64_t)8)]));
  _5479 = *(uint64_t*)_5478;
  if ((((int64_t)_5479) > ((int64_t)_5477))) {
    goto _5574;
  } else {
    _5496__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5575;
  }

_5574:
  _5480 = *(void**)_5475;
  _5481 = *(uint8_t*)(((&((uint8_t*)_5480)[((int64_t)_5477)])));
  *(uint64_t*)_5476 = (llvm_add_u64(_5477, 1));
  _5482 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5481)), 0);
  _5483 = llvm_sub_u8(32, (llvm_shl_u8(_5482, 3)));
  _5484 = (((uint32_t)(uint8_t)_5481)) << 24;
  if ((((uint8_t)_5483) > ((uint8_t)((uint8_t)16)))) {
    _5496__PHI_TEMPORARY = _5484;   /* for PHI node */
    goto _5575;
  } else {
    _5485__PHI_TEMPORARY = 16;   /* for PHI node */
    _5486__PHI_TEMPORARY = _5484;   /* for PHI node */
    goto _5576;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5576:
  _5485 = _5485__PHI_TEMPORARY;
  _5486 = _5486__PHI_TEMPORARY;
  if (((((int64_t)_5485) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5485) < ((uint64_t)(((uint64_t)(uint8_t)_5483)))))) {
    _5496__PHI_TEMPORARY = _5486;   /* for PHI node */
    goto _5575;
  } else {
    goto _5577;
  }

_5577:
  _5487 = *(uint64_t*)_5476;
  _5488 = *(uint64_t*)_5478;
  if ((((int64_t)_5488) > ((int64_t)_5487))) {
    goto _5578;
  } else {
    _5496__PHI_TEMPORARY = _5486;   /* for PHI node */
    goto _5575;
  }

_5578:
  _5489 = *(void**)_5475;
  _5490 = *(uint8_t*)(((&((uint8_t*)_5489)[((int64_t)_5487)])));
  if ((((int8_t)_5490) > ((int8_t)((uint8_t)-65)))) {
    _5496__PHI_TEMPORARY = _5486;   /* for PHI node */
    goto _5575;
  } else {
    goto _5579;
  }

_5579:
  _5491 = llvm_select_u32((((int64_t)_5487) < ((int64_t)_5488)), (((uint32_t)(uint8_t)_5490)), 0);
  _5492 = *(uint64_t*)_5476;
  *(uint64_t*)_5476 = (llvm_add_u64(_5492, 1));
  _5493 = llvm_neg_u64(_5485);
  _5494 = _5486 | (llvm_select_u32((((int64_t)_5485) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5493) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5491, (((uint32_t)_5493)))))), (llvm_select_u32((((uint64_t)_5485) > ((uint64_t)UINT64_C(31))), 0, (_5491 << (((uint32_t)_5485)))))));
  _5495 = llvm_add_u64(_5485, -8);
  _5485__PHI_TEMPORARY = _5495;   /* for PHI node */
  _5486__PHI_TEMPORARY = _5494;   /* for PHI node */
  goto _5576;

  } while (1); /* end of syntactic loop '' */
_5575:
  _5496 = _5496__PHI_TEMPORARY;
  _5497 = *(uint64_t*)_5427;
  _5498 = *(uint64_t*)_5429;
  _5499 = jsyn_cbe_fshl_i64(_5498, _5497, 32);
  _5500 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5496)), _5498, 32);
  *(uint64_t*)_5427 = _5499;
  *(uint64_t*)_5429 = _5500;
  _5501 = ((&((uint8_t*)_5423)[((int64_t)48)]));
  _5502 = ((&((uint8_t*)_5423)[((int64_t)56)]));
  _5503 = *(uint64_t*)_5502;
  _5504 = ((&((uint8_t*)_5423)[((int64_t)64)]));
  _5505 = *(uint64_t*)_5504;
  _5506 = ((&((uint8_t*)_5423)[((int64_t)72)]));
  _5507 = *(uint64_t*)_5506;
  _5508 = *(void**)_5423;
  _5509 = *(uint64_t*)(((&((uint8_t*)_5508)[((int64_t)16)])));
  *(uint64_t*)_5501 = _5503;
  *(uint64_t*)_5502 = _5505;
  *(uint64_t*)_5504 = _5507;
  *(uint64_t*)_5506 = _5509;
  _5510 = *(uint64_t*)_5427;
  _5511 = ((uint32_t)_5510);
  _5512__PHI_TEMPORARY = 1;   /* for PHI node */
  _5513__PHI_TEMPORARY = 1;   /* for PHI node */
  _5514__PHI_TEMPORARY = 0;   /* for PHI node */
  _5515__PHI_TEMPORARY = 0;   /* for PHI node */
  _5516__PHI_TEMPORARY = _5511;   /* for PHI node */
  _5517__PHI_TEMPORARY = 1;   /* for PHI node */
  goto _5580;

  do {     /* Syntactic loop '' to make GCC happy */
_5580:
  _5512 = _5512__PHI_TEMPORARY;
  _5513 = _5513__PHI_TEMPORARY;
  _5514 = _5514__PHI_TEMPORARY;
  _5515 = _5515__PHI_TEMPORARY;
  _5516 = _5516__PHI_TEMPORARY;
  _5517 = _5517__PHI_TEMPORARY;
  if ((_5516 == 4294967295u)) {
    goto _5581;
  } else {
    goto _5582;
  }

_5582:
  _5518 = *(void**)_5423;
  _5519 = ((&((uint8_t*)_5518)[((int64_t)16)]));
  _5520 = *(uint64_t*)_5519;
  _5521 = ((&((uint8_t*)_5518)[((int64_t)8)]));
  _5522 = *(uint64_t*)_5521;
  if ((((int64_t)_5522) > ((int64_t)_5520))) {
    goto _5583;
  } else {
    _5539__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5584;
  }

_5583:
  _5523 = *(void**)_5518;
  _5524 = *(uint8_t*)(((&((uint8_t*)_5523)[((int64_t)_5520)])));
  *(uint64_t*)_5519 = (llvm_add_u64(_5520, 1));
  _5525 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5524)), 0);
  _5526 = llvm_sub_u8(32, (llvm_shl_u8(_5525, 3)));
  _5527 = (((uint32_t)(uint8_t)_5524)) << 24;
  if ((((uint8_t)_5526) > ((uint8_t)((uint8_t)16)))) {
    _5539__PHI_TEMPORARY = _5527;   /* for PHI node */
    goto _5584;
  } else {
    _5528__PHI_TEMPORARY = 16;   /* for PHI node */
    _5529__PHI_TEMPORARY = _5527;   /* for PHI node */
    goto _5585;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5585:
  _5528 = _5528__PHI_TEMPORARY;
  _5529 = _5529__PHI_TEMPORARY;
  if (((((int64_t)_5528) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5528) < ((uint64_t)(((uint64_t)(uint8_t)_5526)))))) {
    _5539__PHI_TEMPORARY = _5529;   /* for PHI node */
    goto _5584;
  } else {
    goto _5586;
  }

_5586:
  _5530 = *(uint64_t*)_5519;
  _5531 = *(uint64_t*)_5521;
  if ((((int64_t)_5531) > ((int64_t)_5530))) {
    goto _5587;
  } else {
    _5539__PHI_TEMPORARY = _5529;   /* for PHI node */
    goto _5584;
  }

_5587:
  _5532 = *(void**)_5518;
  _5533 = *(uint8_t*)(((&((uint8_t*)_5532)[((int64_t)_5530)])));
  if ((((int8_t)_5533) > ((int8_t)((uint8_t)-65)))) {
    _5539__PHI_TEMPORARY = _5529;   /* for PHI node */
    goto _5584;
  } else {
    goto _5588;
  }

_5588:
  _5534 = llvm_select_u32((((int64_t)_5530) < ((int64_t)_5531)), (((uint32_t)(uint8_t)_5533)), 0);
  _5535 = *(uint64_t*)_5519;
  *(uint64_t*)_5519 = (llvm_add_u64(_5535, 1));
  _5536 = llvm_neg_u64(_5528);
  _5537 = _5529 | (llvm_select_u32((((int64_t)_5528) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5536) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5534, (((uint32_t)_5536)))))), (llvm_select_u32((((uint64_t)_5528) > ((uint64_t)UINT64_C(31))), 0, (_5534 << (((uint32_t)_5528)))))));
  _5538 = llvm_add_u64(_5528, -8);
  _5528__PHI_TEMPORARY = _5538;   /* for PHI node */
  _5529__PHI_TEMPORARY = _5537;   /* for PHI node */
  goto _5585;

  } while (1); /* end of syntactic loop '' */
_5584:
  _5539 = _5539__PHI_TEMPORARY;
  _5540 = *(uint64_t*)_5427;
  _5541 = *(uint64_t*)_5429;
  _5542 = jsyn_cbe_fshl_i64(_5541, _5540, 32);
  _5543 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5539)), _5541, 32);
  *(uint64_t*)_5427 = _5542;
  *(uint64_t*)_5429 = _5543;
  _5544 = *(uint64_t*)_5502;
  _5545 = *(uint64_t*)_5504;
  _5546 = *(uint64_t*)_5506;
  _5547 = *(void**)_5423;
  _5548 = *(uint64_t*)(((&((uint8_t*)_5547)[((int64_t)16)])));
  *(uint64_t*)_5501 = _5544;
  *(uint64_t*)_5502 = _5545;
  *(uint64_t*)_5504 = _5546;
  *(uint64_t*)_5506 = _5548;
  _5549 = *(uint32_t*)_5427;
  switch (_5549) {
  default:
    goto _5589;
  case 167772160u:
    _5554__PHI_TEMPORARY = 0;   /* for PHI node */
    _5555__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5590;
  case 3800082944u:
    goto _5591;
  case 3800083200u:
    goto _5591;
  case 3800083712u:
    goto _5591;
  case 3800083968u:
    goto _5591;
  case 3800083456u:
    goto _5592;
  case 3800147456u:
    goto _5593;
  case 3800147712u:
    goto _5593;
  case 3800147968u:
    goto _5593;
  }

_5593:
  _5552 = llvm_add_u64(_5515, 1);
  _5554__PHI_TEMPORARY = _5514;   /* for PHI node */
  _5555__PHI_TEMPORARY = _5552;   /* for PHI node */
  goto _5590;

_5592:
  _5550 = llvm_add_u64(_5514, -1);
  _5554__PHI_TEMPORARY = _5550;   /* for PHI node */
  _5555__PHI_TEMPORARY = _5515;   /* for PHI node */
  goto _5590;

_5591:
  _5553 = llvm_add_u64(_5514, 1);
  _5554__PHI_TEMPORARY = _5553;   /* for PHI node */
  _5555__PHI_TEMPORARY = _5515;   /* for PHI node */
  goto _5590;

_5589:
  _5551 = llvm_add_u64(_5515, (((int64_t)(bool)0-(_5549 == 3800148224u))));
  _5554__PHI_TEMPORARY = _5514;   /* for PHI node */
  _5555__PHI_TEMPORARY = _5551;   /* for PHI node */
  goto _5590;

_5590:
  _5554 = _5554__PHI_TEMPORARY;
  _5555 = _5555__PHI_TEMPORARY;
  _5556 = llvm_OC_ctlz_OC_i32((_5549 ^ -1), 0);
  _5557 = llvm_OC_cttz_OC_i32(_5549, 0);
  _5558 = _5557 & 56;
  _5559 = _5517 & (((((_5556 != 1u) & (((uint32_t)(llvm_add_u32((_5556 << 3), _5558))) < ((uint32_t)33u))) & (llvm_select_bool((((uint32_t)_5557) > ((uint32_t)31u)), 1, ((llvm_lshr_u32(((_5549 & 12632256) ^ 8421504), _5558)) == 0u)))) & ((((_5549 & -33554432) != 3221225472u) & ((_5549 & -2097152) != 3766484992u)) & ((_5549 & -1048576) != 4034920448u))) & ((((uint32_t)_5549) < ((uint32_t)3986669313u)) | (((uint32_t)(llvm_add_u32(_5549, 293568512))) < ((uint32_t)101662656u))));
  if (_5513) {
    _5512__PHI_TEMPORARY = _5512;   /* for PHI node */
    _5513__PHI_TEMPORARY = 0;   /* for PHI node */
    _5514__PHI_TEMPORARY = _5554;   /* for PHI node */
    _5515__PHI_TEMPORARY = _5555;   /* for PHI node */
    _5516__PHI_TEMPORARY = _5549;   /* for PHI node */
    _5517__PHI_TEMPORARY = _5559;   /* for PHI node */
    goto _5580;
  } else {
    goto _5594;
  }

_5594:
  if (((_5516 == 587202560u) & (_5549 == 1023410176u))) {
    goto _5595;
  } else {
    goto _5596;
  }

_5596:
  if (((_5516 == 1023410176u) & (_5549 == 587202560u))) {
    goto _5597;
  } else {
    _5512__PHI_TEMPORARY = _5512;   /* for PHI node */
    _5513__PHI_TEMPORARY = 0;   /* for PHI node */
    _5514__PHI_TEMPORARY = _5554;   /* for PHI node */
    _5515__PHI_TEMPORARY = _5555;   /* for PHI node */
    _5516__PHI_TEMPORARY = _5549;   /* for PHI node */
    _5517__PHI_TEMPORARY = _5559;   /* for PHI node */
    goto _5580;
  }

_5597:
  _5561 = llvm_add_u64(_5512, -1);
  if ((_5561 == UINT64_C(0))) {
    goto _5598;
  } else {
    _5512__PHI_TEMPORARY = _5561;   /* for PHI node */
    _5513__PHI_TEMPORARY = 1;   /* for PHI node */
    _5514__PHI_TEMPORARY = _5554;   /* for PHI node */
    _5515__PHI_TEMPORARY = _5555;   /* for PHI node */
    _5516__PHI_TEMPORARY = _5549;   /* for PHI node */
    _5517__PHI_TEMPORARY = _5559;   /* for PHI node */
    goto _5580;
  }

_5595:
  _5560 = llvm_add_u64(_5512, 1);
  _5512__PHI_TEMPORARY = _5560;   /* for PHI node */
  _5513__PHI_TEMPORARY = 1;   /* for PHI node */
  _5514__PHI_TEMPORARY = _5554;   /* for PHI node */
  _5515__PHI_TEMPORARY = _5555;   /* for PHI node */
  _5516__PHI_TEMPORARY = _5549;   /* for PHI node */
  _5517__PHI_TEMPORARY = _5559;   /* for PHI node */
  goto _5580;

  } while (1); /* end of syntactic loop '' */
_5581:
  julia_emit_4484((&_5425), _5422, _5423, 753, 1);
  _5473__PHI_TEMPORARY = (&_5425);   /* for PHI node */
  goto _5573;

_5598:
  julia_emit_4484((&_5426), _5422, _5423, (llvm_select_u16(_5559, (llvm_select_u16((llvm_select_bool((_5554 == UINT64_C(0)), (_5555 == UINT64_C(0)), 0)), 0, 766)), 762)), 1);
  _5473__PHI_TEMPORARY = (&_5426);   /* for PHI node */
  goto _5573;

}


static void julia_lex_xor_4607(void* _5599, void* _5600, void* _5601) {
  struct l_array_4_uint64_t _5602;    /* Address-exposed local */
  struct l_array_4_uint64_t _5603;    /* Address-exposed local */
  void* _5604;
  uint64_t _5605;
  void* _5606;
  void* _5607;
  void* _5608;
  uint64_t _5609;
  void* _5610;
  uint64_t _5611;
  void* _5612;
  uint8_t _5613;
  uint8_t _5614;
  uint8_t _5615;
  uint32_t _5616;
  uint64_t _5617;
  uint64_t _5617__PHI_TEMPORARY;
  uint32_t _5618;
  uint32_t _5618__PHI_TEMPORARY;
  uint64_t _5619;
  uint64_t _5620;
  void* _5621;
  uint8_t _5622;
  uint32_t _5623;
  uint64_t _5624;
  uint64_t _5625;
  uint32_t _5626;
  uint64_t _5627;
  uint32_t _5628;
  uint32_t _5628__PHI_TEMPORARY;
  uint64_t _5629;
  uint64_t _5630;
  uint64_t _5631;
  uint64_t _5632;
  void* _5633;
  uint64_t _5634;
  void* _5635;
  uint64_t _5636;
  void* _5637;
  uint64_t _5638;
  void* _5639;
  uint64_t _5640;
  void* _5641;
  void* _5641__PHI_TEMPORARY;
  void* _5642;

  _5604 = ((&((uint8_t*)_5601)[((int64_t)32)]));
  _5605 = *(uint64_t*)_5604;
  _5606 = ((&((uint8_t*)_5601)[((int64_t)40)]));
  if (((_5605 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _5643;
  } else {
    goto _5644;
  }

_5643:
  _5607 = *(void**)_5601;
  _5608 = ((&((uint8_t*)_5607)[((int64_t)16)]));
  _5609 = *(uint64_t*)_5608;
  _5610 = ((&((uint8_t*)_5607)[((int64_t)8)]));
  _5611 = *(uint64_t*)_5610;
  if ((((int64_t)_5611) > ((int64_t)_5609))) {
    goto _5645;
  } else {
    _5628__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5646;
  }

_5645:
  _5612 = *(void**)_5607;
  _5613 = *(uint8_t*)(((&((uint8_t*)_5612)[((int64_t)_5609)])));
  *(uint64_t*)_5608 = (llvm_add_u64(_5609, 1));
  _5614 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5613)), 0);
  _5615 = llvm_sub_u8(32, (llvm_shl_u8(_5614, 3)));
  _5616 = (((uint32_t)(uint8_t)_5613)) << 24;
  if ((((uint8_t)_5615) > ((uint8_t)((uint8_t)16)))) {
    _5628__PHI_TEMPORARY = _5616;   /* for PHI node */
    goto _5646;
  } else {
    _5617__PHI_TEMPORARY = 16;   /* for PHI node */
    _5618__PHI_TEMPORARY = _5616;   /* for PHI node */
    goto _5647;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5647:
  _5617 = _5617__PHI_TEMPORARY;
  _5618 = _5618__PHI_TEMPORARY;
  if (((((int64_t)_5617) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5617) < ((uint64_t)(((uint64_t)(uint8_t)_5615)))))) {
    _5628__PHI_TEMPORARY = _5618;   /* for PHI node */
    goto _5646;
  } else {
    goto _5648;
  }

_5648:
  _5619 = *(uint64_t*)_5608;
  _5620 = *(uint64_t*)_5610;
  if ((((int64_t)_5620) > ((int64_t)_5619))) {
    goto _5649;
  } else {
    _5628__PHI_TEMPORARY = _5618;   /* for PHI node */
    goto _5646;
  }

_5649:
  _5621 = *(void**)_5607;
  _5622 = *(uint8_t*)(((&((uint8_t*)_5621)[((int64_t)_5619)])));
  if ((((int8_t)_5622) > ((int8_t)((uint8_t)-65)))) {
    _5628__PHI_TEMPORARY = _5618;   /* for PHI node */
    goto _5646;
  } else {
    goto _5650;
  }

_5650:
  _5623 = llvm_select_u32((((int64_t)_5619) < ((int64_t)_5620)), (((uint32_t)(uint8_t)_5622)), 0);
  _5624 = *(uint64_t*)_5608;
  *(uint64_t*)_5608 = (llvm_add_u64(_5624, 1));
  _5625 = llvm_neg_u64(_5617);
  _5626 = _5618 | (llvm_select_u32((((int64_t)_5617) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5625) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5623, (((uint32_t)_5625)))))), (llvm_select_u32((((uint64_t)_5617) > ((uint64_t)UINT64_C(31))), 0, (_5623 << (((uint32_t)_5617)))))));
  _5627 = llvm_add_u64(_5617, -8);
  _5617__PHI_TEMPORARY = _5627;   /* for PHI node */
  _5618__PHI_TEMPORARY = _5626;   /* for PHI node */
  goto _5647;

  } while (1); /* end of syntactic loop '' */
_5646:
  _5628 = _5628__PHI_TEMPORARY;
  _5629 = *(uint64_t*)_5604;
  _5630 = *(uint64_t*)_5606;
  _5631 = jsyn_cbe_fshl_i64(_5630, _5629, 32);
  _5632 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5628)), _5630, 32);
  *(uint64_t*)_5604 = _5631;
  *(uint64_t*)_5606 = _5632;
  _5633 = ((&((uint8_t*)_5601)[((int64_t)56)]));
  _5634 = *(uint64_t*)_5633;
  _5635 = ((&((uint8_t*)_5601)[((int64_t)64)]));
  _5636 = *(uint64_t*)_5635;
  _5637 = ((&((uint8_t*)_5601)[((int64_t)72)]));
  _5638 = *(uint64_t*)_5637;
  _5639 = *(void**)_5601;
  _5640 = *(uint64_t*)(((&((uint8_t*)_5639)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5601)[((int64_t)48)]))) = _5634;
  *(uint64_t*)_5633 = _5636;
  *(uint64_t*)_5635 = _5638;
  *(uint64_t*)_5637 = _5640;
  julia_emit_4484((&_5602), _5600, _5601, 71, 1);
  _5641__PHI_TEMPORARY = (&_5602);   /* for PHI node */
  goto _5651;

_5651:
  _5641 = _5641__PHI_TEMPORARY;
  _5642 = memcpy(_5599, _5641, 32);
  return;
_5644:
  julia_emit_4484((&_5603), _5600, _5601, 552, 1);
  _5641__PHI_TEMPORARY = (&_5603);   /* for PHI node */
  goto _5651;

}


static void julia_lex_dollar_4611(void* _5652, void* _5653, void* _5654) {
  struct l_array_4_uint64_t _5655;    /* Address-exposed local */
  struct l_array_4_uint64_t _5656;    /* Address-exposed local */
  void* _5657;
  uint64_t _5658;
  void* _5659;
  void* _5660;
  void* _5661;
  uint64_t _5662;
  void* _5663;
  uint64_t _5664;
  void* _5665;
  uint8_t _5666;
  uint8_t _5667;
  uint8_t _5668;
  uint32_t _5669;
  uint64_t _5670;
  uint64_t _5670__PHI_TEMPORARY;
  uint32_t _5671;
  uint32_t _5671__PHI_TEMPORARY;
  uint64_t _5672;
  uint64_t _5673;
  void* _5674;
  uint8_t _5675;
  uint32_t _5676;
  uint64_t _5677;
  uint64_t _5678;
  uint32_t _5679;
  uint64_t _5680;
  uint32_t _5681;
  uint32_t _5681__PHI_TEMPORARY;
  uint64_t _5682;
  uint64_t _5683;
  uint64_t _5684;
  uint64_t _5685;
  void* _5686;
  uint64_t _5687;
  void* _5688;
  uint64_t _5689;
  void* _5690;
  uint64_t _5691;
  void* _5692;
  uint64_t _5693;
  void* _5694;
  void* _5694__PHI_TEMPORARY;
  void* _5695;

  _5657 = ((&((uint8_t*)_5654)[((int64_t)32)]));
  _5658 = *(uint64_t*)_5657;
  _5659 = ((&((uint8_t*)_5654)[((int64_t)40)]));
  if (((_5658 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _5696;
  } else {
    goto _5697;
  }

_5696:
  _5660 = *(void**)_5654;
  _5661 = ((&((uint8_t*)_5660)[((int64_t)16)]));
  _5662 = *(uint64_t*)_5661;
  _5663 = ((&((uint8_t*)_5660)[((int64_t)8)]));
  _5664 = *(uint64_t*)_5663;
  if ((((int64_t)_5664) > ((int64_t)_5662))) {
    goto _5698;
  } else {
    _5681__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5699;
  }

_5698:
  _5665 = *(void**)_5660;
  _5666 = *(uint8_t*)(((&((uint8_t*)_5665)[((int64_t)_5662)])));
  *(uint64_t*)_5661 = (llvm_add_u64(_5662, 1));
  _5667 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5666)), 0);
  _5668 = llvm_sub_u8(32, (llvm_shl_u8(_5667, 3)));
  _5669 = (((uint32_t)(uint8_t)_5666)) << 24;
  if ((((uint8_t)_5668) > ((uint8_t)((uint8_t)16)))) {
    _5681__PHI_TEMPORARY = _5669;   /* for PHI node */
    goto _5699;
  } else {
    _5670__PHI_TEMPORARY = 16;   /* for PHI node */
    _5671__PHI_TEMPORARY = _5669;   /* for PHI node */
    goto _5700;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5700:
  _5670 = _5670__PHI_TEMPORARY;
  _5671 = _5671__PHI_TEMPORARY;
  if (((((int64_t)_5670) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5670) < ((uint64_t)(((uint64_t)(uint8_t)_5668)))))) {
    _5681__PHI_TEMPORARY = _5671;   /* for PHI node */
    goto _5699;
  } else {
    goto _5701;
  }

_5701:
  _5672 = *(uint64_t*)_5661;
  _5673 = *(uint64_t*)_5663;
  if ((((int64_t)_5673) > ((int64_t)_5672))) {
    goto _5702;
  } else {
    _5681__PHI_TEMPORARY = _5671;   /* for PHI node */
    goto _5699;
  }

_5702:
  _5674 = *(void**)_5660;
  _5675 = *(uint8_t*)(((&((uint8_t*)_5674)[((int64_t)_5672)])));
  if ((((int8_t)_5675) > ((int8_t)((uint8_t)-65)))) {
    _5681__PHI_TEMPORARY = _5671;   /* for PHI node */
    goto _5699;
  } else {
    goto _5703;
  }

_5703:
  _5676 = llvm_select_u32((((int64_t)_5672) < ((int64_t)_5673)), (((uint32_t)(uint8_t)_5675)), 0);
  _5677 = *(uint64_t*)_5661;
  *(uint64_t*)_5661 = (llvm_add_u64(_5677, 1));
  _5678 = llvm_neg_u64(_5670);
  _5679 = _5671 | (llvm_select_u32((((int64_t)_5670) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5678) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5676, (((uint32_t)_5678)))))), (llvm_select_u32((((uint64_t)_5670) > ((uint64_t)UINT64_C(31))), 0, (_5676 << (((uint32_t)_5670)))))));
  _5680 = llvm_add_u64(_5670, -8);
  _5670__PHI_TEMPORARY = _5680;   /* for PHI node */
  _5671__PHI_TEMPORARY = _5679;   /* for PHI node */
  goto _5700;

  } while (1); /* end of syntactic loop '' */
_5699:
  _5681 = _5681__PHI_TEMPORARY;
  _5682 = *(uint64_t*)_5657;
  _5683 = *(uint64_t*)_5659;
  _5684 = jsyn_cbe_fshl_i64(_5683, _5682, 32);
  _5685 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5681)), _5683, 32);
  *(uint64_t*)_5657 = _5684;
  *(uint64_t*)_5659 = _5685;
  _5686 = ((&((uint8_t*)_5654)[((int64_t)56)]));
  _5687 = *(uint64_t*)_5686;
  _5688 = ((&((uint8_t*)_5654)[((int64_t)64)]));
  _5689 = *(uint64_t*)_5688;
  _5690 = ((&((uint8_t*)_5654)[((int64_t)72)]));
  _5691 = *(uint64_t*)_5690;
  _5692 = *(void**)_5654;
  _5693 = *(uint64_t*)(((&((uint8_t*)_5692)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5654)[((int64_t)48)]))) = _5687;
  *(uint64_t*)_5686 = _5689;
  *(uint64_t*)_5688 = _5691;
  *(uint64_t*)_5690 = _5693;
  julia_emit_4484((&_5655), _5653, _5654, 71, 1);
  _5694__PHI_TEMPORARY = (&_5655);   /* for PHI node */
  goto _5704;

_5704:
  _5694 = _5694__PHI_TEMPORARY;
  _5695 = memcpy(_5652, _5694, 32);
  return;
_5697:
  julia_emit_4484((&_5656), _5653, _5654, 534, 1);
  _5694__PHI_TEMPORARY = (&_5656);   /* for PHI node */
  goto _5704;

}


static void julia_lex_star_4619(void* _5705, void* _5706, void* _5707) {
  struct l_array_4_uint64_t _5708;    /* Address-exposed local */
  struct l_array_4_uint64_t _5709;    /* Address-exposed local */
  struct l_array_4_uint64_t _5710;    /* Address-exposed local */
  void* _5711;
  uint64_t _5712;
  void* _5713;
  void* _5714;
  void* _5715;
  uint64_t _5716;
  void* _5717;
  uint64_t _5718;
  void* _5719;
  uint8_t _5720;
  uint8_t _5721;
  uint8_t _5722;
  uint32_t _5723;
  uint64_t _5724;
  uint64_t _5724__PHI_TEMPORARY;
  uint32_t _5725;
  uint32_t _5725__PHI_TEMPORARY;
  uint64_t _5726;
  uint64_t _5727;
  void* _5728;
  uint8_t _5729;
  uint32_t _5730;
  uint64_t _5731;
  uint64_t _5732;
  uint32_t _5733;
  uint64_t _5734;
  uint32_t _5735;
  uint32_t _5735__PHI_TEMPORARY;
  uint64_t _5736;
  uint64_t _5737;
  uint64_t _5738;
  uint64_t _5739;
  void* _5740;
  uint64_t _5741;
  void* _5742;
  uint64_t _5743;
  void* _5744;
  uint64_t _5745;
  void* _5746;
  uint64_t _5747;
  void* _5748;
  void* _5748__PHI_TEMPORARY;
  void* _5749;
  uint64_t _5750;
  void* _5751;
  void* _5752;
  uint64_t _5753;
  void* _5754;
  uint64_t _5755;
  void* _5756;
  uint8_t _5757;
  uint8_t _5758;
  uint8_t _5759;
  uint32_t _5760;
  uint64_t _5761;
  uint64_t _5761__PHI_TEMPORARY;
  uint32_t _5762;
  uint32_t _5762__PHI_TEMPORARY;
  uint64_t _5763;
  uint64_t _5764;
  void* _5765;
  uint8_t _5766;
  uint32_t _5767;
  uint64_t _5768;
  uint64_t _5769;
  uint32_t _5770;
  uint64_t _5771;
  uint32_t _5772;
  uint32_t _5772__PHI_TEMPORARY;
  uint64_t _5773;
  uint64_t _5774;
  uint64_t _5775;
  uint64_t _5776;
  void* _5777;
  uint64_t _5778;
  void* _5779;
  uint64_t _5780;
  void* _5781;
  uint64_t _5782;
  void* _5783;
  uint64_t _5784;

  _5711 = ((&((uint8_t*)_5707)[((int64_t)32)]));
  _5712 = *(uint64_t*)_5711;
  _5713 = ((&((uint8_t*)_5707)[((int64_t)40)]));
  if (((_5712 & INT64_C(-4294967296)) == UINT64_C(3026418949592973312))) {
    goto _5785;
  } else {
    goto _5786;
  }

_5785:
  _5714 = *(void**)_5707;
  _5715 = ((&((uint8_t*)_5714)[((int64_t)16)]));
  _5716 = *(uint64_t*)_5715;
  _5717 = ((&((uint8_t*)_5714)[((int64_t)8)]));
  _5718 = *(uint64_t*)_5717;
  if ((((int64_t)_5718) > ((int64_t)_5716))) {
    goto _5787;
  } else {
    _5735__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5788;
  }

_5787:
  _5719 = *(void**)_5714;
  _5720 = *(uint8_t*)(((&((uint8_t*)_5719)[((int64_t)_5716)])));
  *(uint64_t*)_5715 = (llvm_add_u64(_5716, 1));
  _5721 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5720)), 0);
  _5722 = llvm_sub_u8(32, (llvm_shl_u8(_5721, 3)));
  _5723 = (((uint32_t)(uint8_t)_5720)) << 24;
  if ((((uint8_t)_5722) > ((uint8_t)((uint8_t)16)))) {
    _5735__PHI_TEMPORARY = _5723;   /* for PHI node */
    goto _5788;
  } else {
    _5724__PHI_TEMPORARY = 16;   /* for PHI node */
    _5725__PHI_TEMPORARY = _5723;   /* for PHI node */
    goto _5789;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5789:
  _5724 = _5724__PHI_TEMPORARY;
  _5725 = _5725__PHI_TEMPORARY;
  if (((((int64_t)_5724) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5724) < ((uint64_t)(((uint64_t)(uint8_t)_5722)))))) {
    _5735__PHI_TEMPORARY = _5725;   /* for PHI node */
    goto _5788;
  } else {
    goto _5790;
  }

_5790:
  _5726 = *(uint64_t*)_5715;
  _5727 = *(uint64_t*)_5717;
  if ((((int64_t)_5727) > ((int64_t)_5726))) {
    goto _5791;
  } else {
    _5735__PHI_TEMPORARY = _5725;   /* for PHI node */
    goto _5788;
  }

_5791:
  _5728 = *(void**)_5714;
  _5729 = *(uint8_t*)(((&((uint8_t*)_5728)[((int64_t)_5726)])));
  if ((((int8_t)_5729) > ((int8_t)((uint8_t)-65)))) {
    _5735__PHI_TEMPORARY = _5725;   /* for PHI node */
    goto _5788;
  } else {
    goto _5792;
  }

_5792:
  _5730 = llvm_select_u32((((int64_t)_5726) < ((int64_t)_5727)), (((uint32_t)(uint8_t)_5729)), 0);
  _5731 = *(uint64_t*)_5715;
  *(uint64_t*)_5715 = (llvm_add_u64(_5731, 1));
  _5732 = llvm_neg_u64(_5724);
  _5733 = _5725 | (llvm_select_u32((((int64_t)_5724) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5732) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5730, (((uint32_t)_5732)))))), (llvm_select_u32((((uint64_t)_5724) > ((uint64_t)UINT64_C(31))), 0, (_5730 << (((uint32_t)_5724)))))));
  _5734 = llvm_add_u64(_5724, -8);
  _5724__PHI_TEMPORARY = _5734;   /* for PHI node */
  _5725__PHI_TEMPORARY = _5733;   /* for PHI node */
  goto _5789;

  } while (1); /* end of syntactic loop '' */
_5788:
  _5735 = _5735__PHI_TEMPORARY;
  _5736 = *(uint64_t*)_5711;
  _5737 = *(uint64_t*)_5713;
  _5738 = jsyn_cbe_fshl_i64(_5737, _5736, 32);
  _5739 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5735)), _5737, 32);
  *(uint64_t*)_5711 = _5738;
  *(uint64_t*)_5713 = _5739;
  _5740 = ((&((uint8_t*)_5707)[((int64_t)56)]));
  _5741 = *(uint64_t*)_5740;
  _5742 = ((&((uint8_t*)_5707)[((int64_t)64)]));
  _5743 = *(uint64_t*)_5742;
  _5744 = ((&((uint8_t*)_5707)[((int64_t)72)]));
  _5745 = *(uint64_t*)_5744;
  _5746 = *(void**)_5707;
  _5747 = *(uint64_t*)(((&((uint8_t*)_5746)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5707)[((int64_t)48)]))) = _5741;
  *(uint64_t*)_5740 = _5743;
  *(uint64_t*)_5742 = _5745;
  *(uint64_t*)_5744 = _5747;
  julia_emit_4484((&_5708), _5706, _5707, 67, 1);
  _5748__PHI_TEMPORARY = (&_5708);   /* for PHI node */
  goto _5793;

_5793:
  _5748 = _5748__PHI_TEMPORARY;
  _5749 = memcpy(_5705, _5748, 32);
  return;
_5786:
  _5750 = *(uint64_t*)_5711;
  if (((_5750 & INT64_C(-4294967296)) == UINT64_C(4395513236313604096))) {
    goto _5794;
  } else {
    goto _5795;
  }

_5794:
  _5751 = *(void**)_5707;
  _5752 = ((&((uint8_t*)_5751)[((int64_t)16)]));
  _5753 = *(uint64_t*)_5752;
  _5754 = ((&((uint8_t*)_5751)[((int64_t)8)]));
  _5755 = *(uint64_t*)_5754;
  if ((((int64_t)_5755) > ((int64_t)_5753))) {
    goto _5796;
  } else {
    _5772__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5797;
  }

_5796:
  _5756 = *(void**)_5751;
  _5757 = *(uint8_t*)(((&((uint8_t*)_5756)[((int64_t)_5753)])));
  *(uint64_t*)_5752 = (llvm_add_u64(_5753, 1));
  _5758 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5757)), 0);
  _5759 = llvm_sub_u8(32, (llvm_shl_u8(_5758, 3)));
  _5760 = (((uint32_t)(uint8_t)_5757)) << 24;
  if ((((uint8_t)_5759) > ((uint8_t)((uint8_t)16)))) {
    _5772__PHI_TEMPORARY = _5760;   /* for PHI node */
    goto _5797;
  } else {
    _5761__PHI_TEMPORARY = 16;   /* for PHI node */
    _5762__PHI_TEMPORARY = _5760;   /* for PHI node */
    goto _5798;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5798:
  _5761 = _5761__PHI_TEMPORARY;
  _5762 = _5762__PHI_TEMPORARY;
  if (((((int64_t)_5761) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5761) < ((uint64_t)(((uint64_t)(uint8_t)_5759)))))) {
    _5772__PHI_TEMPORARY = _5762;   /* for PHI node */
    goto _5797;
  } else {
    goto _5799;
  }

_5799:
  _5763 = *(uint64_t*)_5752;
  _5764 = *(uint64_t*)_5754;
  if ((((int64_t)_5764) > ((int64_t)_5763))) {
    goto _5800;
  } else {
    _5772__PHI_TEMPORARY = _5762;   /* for PHI node */
    goto _5797;
  }

_5800:
  _5765 = *(void**)_5751;
  _5766 = *(uint8_t*)(((&((uint8_t*)_5765)[((int64_t)_5763)])));
  if ((((int8_t)_5766) > ((int8_t)((uint8_t)-65)))) {
    _5772__PHI_TEMPORARY = _5762;   /* for PHI node */
    goto _5797;
  } else {
    goto _5801;
  }

_5801:
  _5767 = llvm_select_u32((((int64_t)_5763) < ((int64_t)_5764)), (((uint32_t)(uint8_t)_5766)), 0);
  _5768 = *(uint64_t*)_5752;
  *(uint64_t*)_5752 = (llvm_add_u64(_5768, 1));
  _5769 = llvm_neg_u64(_5761);
  _5770 = _5762 | (llvm_select_u32((((int64_t)_5761) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5769) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5767, (((uint32_t)_5769)))))), (llvm_select_u32((((uint64_t)_5761) > ((uint64_t)UINT64_C(31))), 0, (_5767 << (((uint32_t)_5761)))))));
  _5771 = llvm_add_u64(_5761, -8);
  _5761__PHI_TEMPORARY = _5771;   /* for PHI node */
  _5762__PHI_TEMPORARY = _5770;   /* for PHI node */
  goto _5798;

  } while (1); /* end of syntactic loop '' */
_5797:
  _5772 = _5772__PHI_TEMPORARY;
  _5773 = *(uint64_t*)_5711;
  _5774 = *(uint64_t*)_5713;
  _5775 = jsyn_cbe_fshl_i64(_5774, _5773, 32);
  _5776 = jsyn_cbe_fshl_i64((((uint64_t)(uint32_t)_5772)), _5774, 32);
  *(uint64_t*)_5711 = _5775;
  *(uint64_t*)_5713 = _5776;
  _5777 = ((&((uint8_t*)_5707)[((int64_t)56)]));
  _5778 = *(uint64_t*)_5777;
  _5779 = ((&((uint8_t*)_5707)[((int64_t)64)]));
  _5780 = *(uint64_t*)_5779;
  _5781 = ((&((uint8_t*)_5707)[((int64_t)72)]));
  _5782 = *(uint64_t*)_5781;
  _5783 = *(void**)_5707;
  _5784 = *(uint64_t*)(((&((uint8_t*)_5783)[((int64_t)16)])));
  *(uint64_t*)(((&((uint8_t*)_5707)[((int64_t)48)]))) = _5778;
  *(uint64_t*)_5777 = _5780;
  *(uint64_t*)_5779 = _5782;
  *(uint64_t*)_5781 = _5784;
  julia_emit_4484((&_5709), _5706, _5707, 71, 1);
  _5748__PHI_TEMPORARY = (&_5709);   /* for PHI node */
  goto _5793;

_5795:
  julia_emit_4484((&_5710), _5706, _5707, 592, 1);
  _5748__PHI_TEMPORARY = (&_5710);   /* for PHI node */
  goto _5793;

}


static uint8_t julia_is_never_id_char_4645(void* _5802, uint32_t _5803) {
  uint32_t _5804;
  uint64_t _5805;
  uint32_t _5806;
  uint32_t _5807;
  uint64_t _5808;
  bool _5809;
  uint32_t _5810;
  bool _5811;
  uint32_t _5812;
  uint32_t _5813;
  uint32_t _5814;
  uint32_t _5814__PHI_TEMPORARY;
  uint32_t _5815;
  uint64_t _5816;
  uint64_t _5817;
  uint64_t _5817__PHI_TEMPORARY;
  uint32_t _5818;
  uint32_t _5819;
  uint32_t _5820;
  uint32_t _5820__PHI_TEMPORARY;
  bool _5821;
  bool _5822;
  bool _5822__PHI_TEMPORARY;
  uint32_t _5823;

  _5804 = llvm_OC_ctlz_OC_i32((_5803 ^ -1), 0);
  _5805 = ((uint64_t)(uint32_t)_5804);
  _5806 = llvm_OC_cttz_OC_i32(_5803, 0);
  _5807 = _5806 & 56;
  _5808 = ((uint64_t)(uint32_t)_5807);
  _5809 = llvm_select_bool((((uint32_t)_5806) < ((uint32_t)32u)), ((llvm_lshr_u32(((_5803 & 12632256) ^ 8421504), _5807)) != 0u), 0);
  _5810 = llvm_lshr_u32(_5803, 24);
  _5811 = (((_5803 & -33554432) == 3221225472u) | ((_5803 & -2097152) == 3766484992u)) | ((_5803 & -1048576) == 4034920448u);
  if ((((((_5804 == 1u) | (((uint64_t)(llvm_add_u64((_5805 << 3), _5808))) > ((uint64_t)UINT64_C(32)))) | ((((uint32_t)_5803) > ((uint32_t)3986669312u)) & (((uint32_t)(llvm_add_u32(_5803, 191905856))) < ((uint32_t)4193304640u)))) | _5809) | _5811)) {
    _5822__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5824;
  } else {
    goto _5825;
  }

_5825:
  if ((((int32_t)_5803) < ((int32_t)0u))) {
    goto _5826;
  } else {
    _5814__PHI_TEMPORARY = _5810;   /* for PHI node */
    goto _5827;
  }

_5826:
  if ((((_5804 == 1u) | (((uint64_t)(llvm_add_u64((_5805 << 3), _5808))) > ((uint64_t)UINT64_C(32)))) | (_5809 | _5811))) {
    goto _5828;
  } else {
    goto _5829;
  }

_5828:
  julia_throw_invalid_char_2796(_5802, _5803);
  __builtin_unreachable();

_5829:
  _5812 = llvm_select_u32((((uint32_t)_5806) < ((uint32_t)32u)), (llvm_lshr_u32((_5803 & (llvm_select_u32((_5803 == 4294967295u), 0, (llvm_lshr_u32(-1, _5804))))), _5807)), 0);
  _5813 = (((_5812 & 127) | ((llvm_lshr_u32(_5812, 2)) & 8128)) | ((llvm_lshr_u32(_5812, 4)) & 520192)) | ((llvm_lshr_u32(_5812, 6)) & 33292288);
  _5814__PHI_TEMPORARY = _5813;   /* for PHI node */
  goto _5827;

_5827:
  _5814 = _5814__PHI_TEMPORARY;
  if ((((uint32_t)_5814) > ((uint32_t)1114111u))) {
    _5817__PHI_TEMPORARY = 30;   /* for PHI node */
    goto _5830;
  } else {
    goto _5831;
  }

_5831:
  _5815 = jsk_utf8proc_category(_5814);
  _5816 = ((int64_t)(int32_t)_5815);
  _5817__PHI_TEMPORARY = _5816;   /* for PHI node */
  goto _5830;

_5830:
  _5817 = _5817__PHI_TEMPORARY;
  if ((((int32_t)_5803) < ((int32_t)0u))) {
    goto _5832;
  } else {
    _5820__PHI_TEMPORARY = _5810;   /* for PHI node */
    goto _5833;
  }

_5832:
  if ((((_5804 == 1u) | (((uint64_t)(llvm_add_u64((_5805 << 3), _5808))) > ((uint64_t)UINT64_C(32)))) | (_5809 | _5811))) {
    goto _5834;
  } else {
    goto _5835;
  }

_5834:
  julia_throw_invalid_char_2796(_5802, _5803);
  __builtin_unreachable();

_5835:
  _5818 = llvm_select_u32((((uint32_t)_5806) < ((uint32_t)32u)), (llvm_lshr_u32((_5803 & (llvm_select_u32((_5803 == 4294967295u), 0, (llvm_lshr_u32(-1, _5804))))), _5807)), 0);
  _5819 = (((_5818 & 127) | ((llvm_lshr_u32(_5818, 2)) & 8128)) | ((llvm_lshr_u32(_5818, 4)) & 520192)) | ((llvm_lshr_u32(_5818, 6)) & 33292288);
  _5820__PHI_TEMPORARY = _5819;   /* for PHI node */
  goto _5833;

_5833:
  _5820 = _5820__PHI_TEMPORARY;
  if ((((uint64_t)(llvm_add_u64(_5817, -23))) < ((uint64_t)UINT64_C(6)))) {
    _5822__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5824;
  } else {
    goto _5836;
  }

_5837:
  _5821 = ((bool)(((llvm_lshr_u54(UINT64_C(11258999068426243), (((((uint64_t)(uint32_t)_5823))&4294967295))))&4294967295))&1u);
  _5822__PHI_TEMPORARY = _5821;   /* for PHI node */
  goto _5824;

_5824:
  _5822 = _5822__PHI_TEMPORARY;
  return (((uint8_t)(bool)_5822));
_5836:
  if ((llvm_select_bool((llvm_select_bool((llvm_select_bool(((llvm_select_bool((((uint32_t)_5820) < ((uint32_t)255u)), (((uint64_t)(llvm_add_u64(_5817, -13))) < ((uint64_t)UINT64_C(6))), 0)) | (_5820 == 96u)), 1, (((uint32_t)(llvm_add_u32(_5820, -10214))) < ((uint32_t)10u)))), 1, (((uint32_t)(llvm_add_u32(_5820, -12296))) < ((uint32_t)10u)))), 1, (((uint32_t)(llvm_add_u32(_5820, -12308))) < ((uint32_t)8u))))) {
    _5822__PHI_TEMPORARY = 1;   /* for PHI node */
    goto _5824;
  } else {
    goto _5838;
  }

_5838:
  _5823 = llvm_add_u32(_5820, -65288);
  if ((((uint32_t)_5823) < ((uint32_t)54u))) {
    goto _5837;
  } else {
    _5822__PHI_TEMPORARY = 0;   /* for PHI node */
    goto _5824;
  }

}


static void* julia_Lexer_4648(void* _5839, void* _5840, void* _5841) {
  __PREFIXALIGN__(16) struct l_array_3_uint64_t _5842 __POSTFIXALIGN__(16);    /* Address-exposed local */
  void* _5843;
  void* _5844;
  void* _5845;
  uint64_t _5846;
  void* _5847;
  uint64_t _5848;
  void* _5849;
  uint8_t _5850;
  uint8_t _5851;
  uint8_t _5852;
  uint32_t _5853;
  uint64_t _5854;
  uint64_t _5854__PHI_TEMPORARY;
  uint32_t _5855;
  uint32_t _5855__PHI_TEMPORARY;
  uint64_t _5856;
  uint64_t _5857;
  void* _5858;
  uint8_t _5859;
  uint32_t _5860;
  uint64_t _5861;
  uint64_t _5862;
  uint32_t _5863;
  uint64_t _5864;
  uint32_t _5865;
  uint32_t _5865__PHI_TEMPORARY;
  uint64_t _5866;
  uint64_t _5867;
  void* _5868;
  uint8_t _5869;
  uint8_t _5870;
  uint8_t _5871;
  uint32_t _5872;
  uint64_t _5873;
  uint64_t _5873__PHI_TEMPORARY;
  uint32_t _5874;
  uint32_t _5874__PHI_TEMPORARY;
  uint64_t _5875;
  uint64_t _5876;
  void* _5877;
  uint8_t _5878;
  uint32_t _5879;
  uint64_t _5880;
  uint64_t _5881;
  uint32_t _5882;
  uint64_t _5883;
  uint32_t _5884;
  uint32_t _5884__PHI_TEMPORARY;
  uint64_t _5885;
  uint64_t _5886;
  void* _5887;
  uint8_t _5888;
  uint8_t _5889;
  uint8_t _5890;
  uint32_t _5891;
  uint64_t _5892;
  uint64_t _5892__PHI_TEMPORARY;
  uint32_t _5893;
  uint32_t _5893__PHI_TEMPORARY;
  uint64_t _5894;
  uint64_t _5895;
  void* _5896;
  uint8_t _5897;
  uint32_t _5898;
  uint64_t _5899;
  uint64_t _5900;
  uint32_t _5901;
  uint64_t _5902;
  uint32_t _5903;
  uint32_t _5903__PHI_TEMPORARY;
  uint64_t _5904;
  uint64_t _5905;
  uint64_t _5906;
  uint64_t _5906__PHI_TEMPORARY;
  uint64_t _5907;
  uint64_t _5907__PHI_TEMPORARY;
  uint64_t _5908;
  uint64_t _5908__PHI_TEMPORARY;
  uint32_t _5909;
  uint32_t _5909__PHI_TEMPORARY;
  uint64_t _5910;
  uint64_t _5910__PHI_TEMPORARY;
  uint32_t _5911;
  uint32_t _5911__PHI_TEMPORARY;
  uint64_t _5912;
  void* _5913;
  void* _5914;
  void* _5915;
  void* _5916;
  void* _5917;
  void* _5918;
  void* _5919;

  _5843 = memset((&_5842), 0, 24);
  *((uint64_t*)&_5842) = 4;
  _5844 = *(void**)_5839;
  *(void**)(((&((uint8_t*)(&_5842))[((int64_t)8)]))) = _5844;
  *(void**)_5839 = (&_5842);
  _5845 = ((&((uint8_t*)_5841)[((int64_t)16)]));
  _5846 = *(uint64_t*)_5845;
  _5847 = ((&((uint8_t*)_5841)[((int64_t)8)]));
  _5848 = *(uint64_t*)_5847;
  if ((((int64_t)_5848) > ((int64_t)_5846))) {
    goto _5920;
  } else {
    _5906__PHI_TEMPORARY = _5846;   /* for PHI node */
    _5907__PHI_TEMPORARY = INT64_C(-4294967296);   /* for PHI node */
    _5908__PHI_TEMPORARY = _5846;   /* for PHI node */
    _5909__PHI_TEMPORARY = -1;   /* for PHI node */
    _5910__PHI_TEMPORARY = _5846;   /* for PHI node */
    _5911__PHI_TEMPORARY = -1;   /* for PHI node */
    goto _5921;
  }

_5920:
  _5849 = *(void**)_5841;
  _5850 = *(uint8_t*)(((&((uint8_t*)_5849)[((int64_t)_5846)])));
  *(uint64_t*)_5845 = (llvm_add_u64(_5846, 1));
  _5851 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5850)), 0);
  _5852 = llvm_sub_u8(32, (llvm_shl_u8(_5851, 3)));
  _5853 = (((uint32_t)(uint8_t)_5850)) << 24;
  if ((((uint8_t)_5852) > ((uint8_t)((uint8_t)16)))) {
    _5865__PHI_TEMPORARY = _5853;   /* for PHI node */
    goto _5922;
  } else {
    _5854__PHI_TEMPORARY = 16;   /* for PHI node */
    _5855__PHI_TEMPORARY = _5853;   /* for PHI node */
    goto _5923;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5923:
  _5854 = _5854__PHI_TEMPORARY;
  _5855 = _5855__PHI_TEMPORARY;
  if (((((int64_t)_5854) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5854) < ((uint64_t)(((uint64_t)(uint8_t)_5852)))))) {
    _5865__PHI_TEMPORARY = _5855;   /* for PHI node */
    goto _5922;
  } else {
    goto _5924;
  }

_5924:
  _5856 = *(uint64_t*)_5845;
  _5857 = *(uint64_t*)_5847;
  if ((((int64_t)_5857) > ((int64_t)_5856))) {
    goto _5925;
  } else {
    _5865__PHI_TEMPORARY = _5855;   /* for PHI node */
    goto _5922;
  }

_5925:
  _5858 = *(void**)_5841;
  _5859 = *(uint8_t*)(((&((uint8_t*)_5858)[((int64_t)_5856)])));
  if ((((int8_t)_5859) > ((int8_t)((uint8_t)-65)))) {
    _5865__PHI_TEMPORARY = _5855;   /* for PHI node */
    goto _5922;
  } else {
    goto _5926;
  }

_5926:
  _5860 = llvm_select_u32((((int64_t)_5856) < ((int64_t)_5857)), (((uint32_t)(uint8_t)_5859)), 0);
  _5861 = *(uint64_t*)_5845;
  *(uint64_t*)_5845 = (llvm_add_u64(_5861, 1));
  _5862 = llvm_neg_u64(_5854);
  _5863 = _5855 | (llvm_select_u32((((int64_t)_5854) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5862) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5860, (((uint32_t)_5862)))))), (llvm_select_u32((((uint64_t)_5854) > ((uint64_t)UINT64_C(31))), 0, (_5860 << (((uint32_t)_5854)))))));
  _5864 = llvm_add_u64(_5854, -8);
  _5854__PHI_TEMPORARY = _5864;   /* for PHI node */
  _5855__PHI_TEMPORARY = _5863;   /* for PHI node */
  goto _5923;

  } while (1); /* end of syntactic loop '' */
_5922:
  _5865 = _5865__PHI_TEMPORARY;
  _5866 = *(uint64_t*)_5845;
  _5867 = *(uint64_t*)_5847;
  if ((((int64_t)_5867) > ((int64_t)_5866))) {
    goto _5927;
  } else {
    _5906__PHI_TEMPORARY = _5866;   /* for PHI node */
    _5907__PHI_TEMPORARY = INT64_C(-4294967296);   /* for PHI node */
    _5908__PHI_TEMPORARY = _5866;   /* for PHI node */
    _5909__PHI_TEMPORARY = -1;   /* for PHI node */
    _5910__PHI_TEMPORARY = _5866;   /* for PHI node */
    _5911__PHI_TEMPORARY = _5865;   /* for PHI node */
    goto _5921;
  }

_5927:
  _5868 = *(void**)_5841;
  _5869 = *(uint8_t*)(((&((uint8_t*)_5868)[((int64_t)_5866)])));
  *(uint64_t*)_5845 = (llvm_add_u64(_5866, 1));
  _5870 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5869)), 0);
  _5871 = llvm_sub_u8(32, (llvm_shl_u8(_5870, 3)));
  _5872 = (((uint32_t)(uint8_t)_5869)) << 24;
  if ((((uint8_t)_5871) > ((uint8_t)((uint8_t)16)))) {
    _5884__PHI_TEMPORARY = _5872;   /* for PHI node */
    goto _5928;
  } else {
    _5873__PHI_TEMPORARY = 16;   /* for PHI node */
    _5874__PHI_TEMPORARY = _5872;   /* for PHI node */
    goto _5929;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5929:
  _5873 = _5873__PHI_TEMPORARY;
  _5874 = _5874__PHI_TEMPORARY;
  if (((((int64_t)_5873) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5873) < ((uint64_t)(((uint64_t)(uint8_t)_5871)))))) {
    _5884__PHI_TEMPORARY = _5874;   /* for PHI node */
    goto _5928;
  } else {
    goto _5930;
  }

_5930:
  _5875 = *(uint64_t*)_5845;
  _5876 = *(uint64_t*)_5847;
  if ((((int64_t)_5876) > ((int64_t)_5875))) {
    goto _5931;
  } else {
    _5884__PHI_TEMPORARY = _5874;   /* for PHI node */
    goto _5928;
  }

_5931:
  _5877 = *(void**)_5841;
  _5878 = *(uint8_t*)(((&((uint8_t*)_5877)[((int64_t)_5875)])));
  if ((((int8_t)_5878) > ((int8_t)((uint8_t)-65)))) {
    _5884__PHI_TEMPORARY = _5874;   /* for PHI node */
    goto _5928;
  } else {
    goto _5932;
  }

_5932:
  _5879 = llvm_select_u32((((int64_t)_5875) < ((int64_t)_5876)), (((uint32_t)(uint8_t)_5878)), 0);
  _5880 = *(uint64_t*)_5845;
  *(uint64_t*)_5845 = (llvm_add_u64(_5880, 1));
  _5881 = llvm_neg_u64(_5873);
  _5882 = _5874 | (llvm_select_u32((((int64_t)_5873) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5881) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5879, (((uint32_t)_5881)))))), (llvm_select_u32((((uint64_t)_5873) > ((uint64_t)UINT64_C(31))), 0, (_5879 << (((uint32_t)_5873)))))));
  _5883 = llvm_add_u64(_5873, -8);
  _5873__PHI_TEMPORARY = _5883;   /* for PHI node */
  _5874__PHI_TEMPORARY = _5882;   /* for PHI node */
  goto _5929;

  } while (1); /* end of syntactic loop '' */
_5928:
  _5884 = _5884__PHI_TEMPORARY;
  _5885 = *(uint64_t*)_5845;
  _5886 = *(uint64_t*)_5847;
  if ((((int64_t)_5886) > ((int64_t)_5885))) {
    goto _5933;
  } else {
    _5906__PHI_TEMPORARY = _5885;   /* for PHI node */
    _5907__PHI_TEMPORARY = INT64_C(-4294967296);   /* for PHI node */
    _5908__PHI_TEMPORARY = _5885;   /* for PHI node */
    _5909__PHI_TEMPORARY = _5884;   /* for PHI node */
    _5910__PHI_TEMPORARY = _5866;   /* for PHI node */
    _5911__PHI_TEMPORARY = _5865;   /* for PHI node */
    goto _5921;
  }

_5933:
  _5887 = *(void**)_5841;
  _5888 = *(uint8_t*)(((&((uint8_t*)_5887)[((int64_t)_5885)])));
  *(uint64_t*)_5845 = (llvm_add_u64(_5885, 1));
  _5889 = llvm_OC_ctlz_OC_i8((llvm_not_u8(_5888)), 0);
  _5890 = llvm_sub_u8(32, (llvm_shl_u8(_5889, 3)));
  _5891 = (((uint32_t)(uint8_t)_5888)) << 24;
  if ((((uint8_t)_5890) > ((uint8_t)((uint8_t)16)))) {
    _5903__PHI_TEMPORARY = _5891;   /* for PHI node */
    goto _5934;
  } else {
    _5892__PHI_TEMPORARY = 16;   /* for PHI node */
    _5893__PHI_TEMPORARY = _5891;   /* for PHI node */
    goto _5935;
  }

  do {     /* Syntactic loop '' to make GCC happy */
_5935:
  _5892 = _5892__PHI_TEMPORARY;
  _5893 = _5893__PHI_TEMPORARY;
  if (((((int64_t)_5892) < ((int64_t)UINT64_C(0))) | (((uint64_t)_5892) < ((uint64_t)(((uint64_t)(uint8_t)_5890)))))) {
    _5903__PHI_TEMPORARY = _5893;   /* for PHI node */
    goto _5934;
  } else {
    goto _5936;
  }

_5936:
  _5894 = *(uint64_t*)_5845;
  _5895 = *(uint64_t*)_5847;
  if ((((int64_t)_5895) > ((int64_t)_5894))) {
    goto _5937;
  } else {
    _5903__PHI_TEMPORARY = _5893;   /* for PHI node */
    goto _5934;
  }

_5937:
  _5896 = *(void**)_5841;
  _5897 = *(uint8_t*)(((&((uint8_t*)_5896)[((int64_t)_5894)])));
  if ((((int8_t)_5897) > ((int8_t)((uint8_t)-65)))) {
    _5903__PHI_TEMPORARY = _5893;   /* for PHI node */
    goto _5934;
  } else {
    goto _5938;
  }

_5938:
  _5898 = llvm_select_u32((((int64_t)_5894) < ((int64_t)_5895)), (((uint32_t)(uint8_t)_5897)), 0);
  _5899 = *(uint64_t*)_5845;
  *(uint64_t*)_5845 = (llvm_add_u64(_5899, 1));
  _5900 = llvm_neg_u64(_5892);
  _5901 = _5893 | (llvm_select_u32((((int64_t)_5892) < ((int64_t)UINT64_C(0))), (llvm_select_u32((((uint64_t)_5900) > ((uint64_t)UINT64_C(31))), 0, (llvm_lshr_u32(_5898, (((uint32_t)_5900)))))), (llvm_select_u32((((uint64_t)_5892) > ((uint64_t)UINT64_C(31))), 0, (_5898 << (((uint32_t)_5892)))))));
  _5902 = llvm_add_u64(_5892, -8);
  _5892__PHI_TEMPORARY = _5902;   /* for PHI node */
  _5893__PHI_TEMPORARY = _5901;   /* for PHI node */
  goto _5935;

  } while (1); /* end of syntactic loop '' */
_5934:
  _5903 = _5903__PHI_TEMPORARY;
  _5904 = *(uint64_t*)_5845;
  _5905 = (((uint64_t)(uint32_t)_5903)) << 32;
  _5906__PHI_TEMPORARY = _5904;   /* for PHI node */
  _5907__PHI_TEMPORARY = _5905;   /* for PHI node */
  _5908__PHI_TEMPORARY = _5885;   /* for PHI node */
  _5909__PHI_TEMPORARY = _5884;   /* for PHI node */
  _5910__PHI_TEMPORARY = _5866;   /* for PHI node */
  _5911__PHI_TEMPORARY = _5865;   /* for PHI node */
  goto _5921;

_5921:
  _5906 = _5906__PHI_TEMPORARY;
  _5907 = _5907__PHI_TEMPORARY;
  _5908 = _5908__PHI_TEMPORARY;
  _5909 = _5909__PHI_TEMPORARY;
  _5910 = _5910__PHI_TEMPORARY;
  _5911 = _5911__PHI_TEMPORARY;
  _5912 = *(uint64_t*)_5845;
  _5913 = *(void**)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)592)])));
  _5914 = *(void**)(((&((uint8_t*)_5839)[((int64_t)16)])));
  _5915 = jsk_ijl_gc_small_alloc(_5914, 408, 32, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)616)])))));
  *(void**)(((&((uint8_t*)_5915)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)616)])));
  *(void**)(((&((uint8_t*)_5915)[((int64_t)8)]))) = ((void*)/*NULL*/0);
  *(void**)_5915 = _5913;
  *(void**)(((&((uint8_t*)_5915)[((int64_t)8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)584)])));
  *(uint64_t*)(((&((uint8_t*)_5915)[((int64_t)16)]))) = 0;
  *(void**)(((&((uint8_t*)(&_5842))[((int64_t)16)]))) = _5915;
  _5916 = *(void**)(((&((uint8_t*)_5839)[((int64_t)16)])));
  _5917 = jsk_ijl_gc_small_alloc(_5916, 600, 96, ((uint64_t)(uintptr_t)(((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)648)])))));
  *(void**)(((&((uint8_t*)_5917)[((int64_t)-8)]))) = (((&((uint8_t*)(&jsk_dummy_objs))[((int64_t)648)])));
  *(void**)_5917 = ((void*)/*NULL*/0);
  _5918 = ((&((uint8_t*)_5917)[((int64_t)24)]));
  *(void**)_5918 = ((void*)/*NULL*/0);
  *(void**)_5917 = _5841;
  *(uint64_t*)(((&((uint8_t*)_5917)[((int64_t)8)]))) = _5912;
  *(uint16_t*)(((&((uint8_t*)_5917)[((int64_t)16)]))) = 767;
  *(void**)_5918 = _5915;
  *(uint64_t*)(((&((uint8_t*)_5917)[((int64_t)32)]))) = (((((uint64_t)(uint32_t)_5911)) << 32) | 536870912);
  *(uint64_t*)(((&((uint8_t*)_5917)[((int64_t)40)]))) = (_5907 | (((uint64_t)(uint32_t)_5909)));
  *(uint64_t*)(((&((uint8_t*)_5917)[((int64_t)48)]))) = _5846;
  *(uint64_t*)(((&((uint8_t*)_5917)[((int64_t)56)]))) = _5910;
  *(uint64_t*)(((&((uint8_t*)_5917)[((int64_t)64)]))) = _5908;
  *(uint64_t*)(((&((uint8_t*)_5917)[((int64_t)72)]))) = _5906;
  _5919 = *(void**)(((&((uint8_t*)(&_5842))[((int64_t)8)])));
  *(void**)_5839 = _5919;
  return _5917;
}

#undef bool
#undef __noreturn
#undef __forceinline
#undef __ATTRIBUTELIST__
#undef __PREFIXALIGN__
#undef __POSTFIXALIGN__
#undef __HIDDEN__
