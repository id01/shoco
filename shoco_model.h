#ifndef _SHOCO_INTERNAL
#error This header file is only to be included by 'shoco.c'.
#endif
#pragma once
/*
This file was generated by 'generate_compressor_model.py'
so don't edit this by hand. Also, do not include this file
anywhere. It is internal to 'shoco.c'. Include 'shoco.h'
if you want to use shoco in your project.
*/

#define MIN_CHR 32
#define MAX_CHR 122

static const char chrs_by_chr_id[32] = {
  ' ', 'e', 't', 'n', 'o', 'a', 's', 'i', 'r', 'l', '"', 'y', 'f', ':', 'h', 'd', 'm', 'c', 'p', '-', 'g', 'u', '=', 'x', 'b', 'w', '<', '_', '.', ',', '/', '0'
};

static const int8_t chr_ids_by_chr[256] = {
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, 29, 19, 28, 30, 31, -1, -1, -1, -1, -1, -1, -1, -1, -1, 13, -1, 26, 22, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 27, -1, 5, 24, 17, 15, 1, 12, 20, 14, 7, -1, -1, 9, 16, 3, 4, 18, -1, 8, 6, 2, 21, -1, 25, 23, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
};

static const int8_t successor_ids_by_chr_id_and_chr_id[32][32] = {
  {-1, 14, 0, -1, 11, 2, 1, 9, 15, -1, -1, -1, 3, -1, 8, 12, 10, 5, 13, -1, -1, -1, -1, -1, 7, 4, -1, -1, -1, -1, -1, -1},
  {1, -1, 11, 4, -1, 8, 7, -1, 2, 12, 13, 15, -1, 3, -1, 10, 9, 14, -1, 6, -1, -1, 5, 0, -1, -1, -1, -1, -1, -1, -1, -1},
  {2, 0, 14, -1, 6, 9, 15, 7, 8, -1, 13, 1, -1, 4, 3, -1, -1, -1, -1, 5, -1, 12, 10, -1, -1, -1, -1, 11, -1, -1, -1, -1},
  {4, 5, 0, 15, 7, 3, 8, 13, -1, -1, 9, -1, 6, -1, -1, 1, -1, 12, -1, 11, 2, -1, 10, -1, -1, -1, -1, -1, -1, 14, -1, -1},
  {4, 14, 9, 0, 8, -1, 13, -1, 1, 11, -1, -1, 7, 3, -1, 6, 5, 15, 12, -1, -1, 2, -1, -1, -1, 10, -1, -1, -1, -1, -1, -1},
  {11, -1, 5, 0, -1, -1, 2, 12, 3, 4, -1, 13, -1, -1, -1, 9, 1, 6, 8, -1, 7, 14, -1, -1, 10, -1, -1, -1, -1, -1, -1, -1},
  {1, 2, 0, -1, 6, 10, 4, 3, -1, -1, 15, -1, -1, 14, 5, -1, -1, -1, 8, -1, -1, 7, -1, -1, -1, 11, -1, -1, 9, 12, -1, -1},
  {-1, 10, 2, 0, 3, 4, 5, -1, 15, 6, -1, -1, 11, -1, -1, 9, 8, 7, 13, -1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {2, 0, 6, 9, 3, 4, 12, 1, 15, 14, -1, 5, -1, -1, -1, 7, 8, -1, -1, 11, 10, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {8, 0, 9, 15, 5, 3, 7, 1, -1, 2, 10, 4, 14, -1, -1, 6, -1, -1, -1, 12, -1, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {0, -1, -1, 2, -1, -1, 8, -1, -1, 15, -1, -1, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 10, -1, -1, 12, -1, -1, 4, 5},
  {1, 11, 7, -1, 8, -1, 5, 14, -1, 0, 3, -1, -1, -1, -1, -1, -1, 12, 2, 4, -1, -1, 6, -1, 13, -1, -1, -1, 9, 10, -1, -1},
  {3, 6, 7, -1, 0, 2, -1, 1, 5, 9, 14, 10, 4, -1, -1, -1, -1, -1, -1, -1, -1, 12, -1, -1, -1, -1, -1, -1, 11, 13, -1, -1},
  {-1, -1, 3, 5, 11, 13, 1, -1, -1, 6, -1, -1, 2, 8, 9, 10, 7, 4, 0, -1, -1, -1, -1, -1, 12, 14, -1, -1, -1, -1, -1, -1},
  {3, 0, 5, -1, 4, 1, -1, 2, 8, -1, 13, 7, -1, -1, -1, -1, 12, -1, -1, 6, -1, 10, 11, -1, -1, -1, -1, -1, 15, 9, -1, -1},
  {0, 1, -1, 15, 4, 6, 8, 2, 7, -1, 11, 3, -1, 13, -1, 10, -1, 12, -1, 14, -1, -1, -1, -1, -1, -1, -1, -1, 5, 9, -1, -1},
  {3, 0, -1, -1, 5, 1, -1, 2, -1, 9, 6, 4, -1, -1, -1, -1, 12, -1, 7, 15, -1, 13, 10, -1, 11, -1, -1, -1, 14, -1, -1, -1},
  {14, 1, 8, -1, 0, 6, -1, 9, 3, 7, -1, -1, -1, 10, 2, -1, -1, 4, 13, 15, -1, 11, 12, -1, -1, -1, -1, -1, -1, -1, -1, -1},
  {1, 2, 3, -1, 7, 0, 12, 10, 6, 8, -1, -1, -1, -1, 5, -1, -1, -1, 11, 15, -1, 9, 14, -1, -1, -1, -1, -1, 13, -1, -1, -1},
  {-1, 15, 7, 0, -1, 2, 1, 3, 12, 4, -1, -1, 8, -1, -1, -1, 13, 6, 5, -1, 10, 14, -1, -1, 11, 9, -1, -1, -1, -1, -1, -1},
  {2, 1, -1, 8, 6, 12, -1, 5, 7, 14, 10, -1, -1, 0, 3, -1, -1, -1, -1, 4, -1, 9, 15, -1, -1, -1, -1, 11, 13, -1, -1, -1},
  {11, 5, 1, 0, -1, 9, 3, 15, 4, 2, -1, -1, 12, -1, -1, 10, 6, 13, 8, -1, 7, -1, -1, -1, 14, -1, -1, -1, -1, -1, -1, -1},
  {1, 11, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 14, 2, -1, 4, -1, -1, -1, -1, -1, -1, 6},
  {14, 10, 0, -1, -1, 12, -1, 3, -1, -1, 9, 7, 15, -1, -1, 6, 1, 2, 4, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, 11, -1, -1},
  {14, 1, -1, -1, 0, 3, 11, 8, 6, 2, 7, 4, -1, -1, -1, -1, -1, -1, -1, 15, -1, 5, -1, -1, -1, -1, -1, -1, 9, -1, -1, -1},
  {3, 4, -1, 8, 0, 2, 7, 1, 6, 12, -1, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 11, -1, -1, 9, 10, -1, -1},
  {5, -1, 1, -1, 4, 15, 2, 12, -1, -1, -1, -1, -1, -1, -1, 7, 8, 3, 13, -1, -1, -1, 14, -1, -1, -1, 6, -1, -1, -1, 0, -1},
  {-1, -1, 4, -1, -1, -1, -1, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, -1, 15, -1, -1, -1, -1, -1, 2, -1, 12, 0, -1, -1, -1, -1},
  {0, -1, -1, -1, 13, 12, 3, -1, 10, -1, 15, -1, 5, -1, 2, 9, -1, 6, 7, -1, -1, 14, -1, -1, -1, -1, 1, 11, -1, -1, -1, 4},
  {0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, -1, -1, -1, 5},
  {4, -1, 0, -1, 6, -1, 5, -1, -1, -1, 12, -1, 10, -1, 14, 7, -1, 2, 11, -1, -1, -1, -1, 15, -1, 8, -1, -1, -1, -1, 3, -1},
  {-1, -1, -1, -1, -1, -1, -1, 2, -1, -1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 6, 0, 5, -1, -1, 1}
};

static const int8_t chrs_by_chr_and_successor_id[MAX_CHR - MIN_CHR][16] = {
  {'t', 's', 'a', 'f', 'w', 'c', 'I', 'b', 'h', 'i', 'm', 'o', 'd', 'p', 'e', 'r'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {' ', '>', 'n', 'T', '/', '0', 'P', '2', 's', '1', 'b', 'f', '_', 'v', 'A', 'l'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {' ', '<', '~', '\xe2', ')', '0', '3', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'n', 's', 'a', 'i', 'l', 'p', 'c', 't', 'f', 'w', 'g', 'b', 'r', 'm', 'u', 'e'},
  {' ', '<', 'h', 's', '0', 'f', 'c', 'p', '~', 'd', 'r', '_', 'a', 'o', 'u', '"'},
  {'t', '>', 'c', '/', ' ', 's', 'o', 'd', 'w', '2', 'f', 'p', '"', '1', 'h', 'x'},
  {'_', '0', 'i', '"', '1', '.', '<', '3', '5', '6', ';', '%', '2', '9', '8', '4'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'p', 's', 'f', 't', 'c', 'n', 'l', 'm', ':', 'h', 'd', 'o', 'b', 'a', 'w', 'j'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'/', 't', 's', 'c', 'o', ' ', '<', 'd', 'm', '6', 'C', '3', 'i', 'p', '=', 'a'},
  {'"', ' ', '=', '\'', 'b', 'T', '0', '[', '1', 'F', '3', 'e', 'P', 'S', 'u', '8'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'_', '2', 'b', 'l', 't', 'T', 'R', '4', '1', 'H', '3', 'A', '<', 'E', 'I', 'p'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'n', 'm', 's', 'r', 'l', 't', 'c', 'g', 'p', 'd', 'b', ' ', 'i', 'y', 'u', 'k'},
  {'o', 'e', 'l', 'a', 'y', 'u', 'r', '"', 'i', '.', 'j', 's', '6', '8', ' ', '-'},
  {'o', 'e', 'h', 'r', 'c', 'k', 'a', 'l', 't', 'i', ':', 'u', '=', 'p', ' ', '-'},
  {' ', 'e', 'i', 'y', 'o', '.', 'a', 'r', 's', ',', 'd', '"', 'c', ':', '-', 'n'},
  {'x', ' ', 'r', ':', 'n', '=', '-', 's', 'a', 'm', 'd', 't', 'l', '"', 'c', 'y'},
  {'o', 'i', 'a', ' ', 'f', 'r', 'e', 't', 'H', 'l', 'y', '.', 'u', ',', '"', '1'},
  {':', 'e', ' ', 'h', '-', 'i', 'o', 'r', 'n', 'u', '"', '_', 'a', '.', 'l', '='},
  {'e', 'a', 'i', ' ', 'o', 't', '-', 'y', 'r', ',', 'u', '=', 'm', '"', '>', '.'},
  {'n', 'g', 't', 'o', 'a', 's', 'l', 'c', 'm', 'd', 'e', 'f', 'z', 'p', 'v', 'r'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'e', 'i', 'l', 'a', 'y', 'o', 'd', 's', ' ', 't', '"', 'u', '-', 'k', 'f', 'n'},
  {'e', 'a', 'i', ' ', 'y', 'o', '"', 'p', '>', 'l', '=', 'b', 'm', 'u', '.', '-'},
  {'t', 'd', 'g', 'a', ' ', 'e', 'f', 'o', 's', '"', '=', '-', 'c', 'i', ',', 'n'},
  {'n', 'r', 'u', ':', ' ', 'm', 'd', 'f', 'o', 't', 'w', 'l', 'p', 's', 'e', 'c'},
  {'a', ' ', 'e', 't', '>', 'h', 'r', 'o', 'l', 'u', 'i', 'p', 's', '.', '=', '-'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'e', 'i', ' ', 'o', 'a', 'y', 't', 'd', 'm', 'n', 'g', '-', 's', 'u', 'l', 'r'},
  {'t', ' ', 'e', 'i', 's', 'h', 'o', 'u', 'p', '.', 'a', 'w', ',', ';', ':', '"'},
  {'e', 'y', ' ', 'h', ':', '-', 'o', 'i', 'r', 'a', '=', '_', 'u', '"', 't', 's'},
  {'n', 't', 'l', 's', 'r', 'e', 'm', 'g', 'p', 'a', 'd', ' ', 'f', 'c', 'b', 'i'},
  {'\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00', '\x00'},
  {'o', 'i', 'a', ' ', 'e', 'h', 'r', 's', 'n', '.', ',', 'w', 'l', '(', '3', 'P'},
  {'t', 'm', 'c', 'i', 'p', '=', 'd', 'y', '(', '"', 'e', ',', 'a', '1', ' ', 'f'},
  {'l', ' ', 'p', '"', '-', 's', '=', 't', 'o', '.', ',', 'e', 'c', 'b', 'i', '['}
};

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4324)    // structure was padded due to __declspec(align())
#endif

typedef struct Pack {
  const uint32_t word;
  const unsigned int bytes_packed;
  const unsigned int bytes_unpacked;
  const unsigned int offsets[8];
  const int16_t _ALIGNED masks[8];
  const char header_mask;
  const char header;
} Pack;

#ifdef _MSC_VER
#pragma warning(pop)
#endif

#define PACK_COUNT 3
#define MAX_SUCCESSOR_N 7

static const Pack packs[PACK_COUNT] = {
  { 0x80000000, 1, 2, { 26, 24, 24, 24, 24, 24, 24, 24 }, { 15, 3, 0, 0, 0, 0, 0, 0 }, 0xc0, 0x80 },
  { 0xc0000000, 2, 4, { 25, 22, 19, 16, 16, 16, 16, 16 }, { 15, 7, 7, 7, 0, 0, 0, 0 }, 0xe0, 0xc0 },
  { 0xe0000000, 4, 8, { 23, 19, 15, 11, 8, 5, 2, 0 }, { 31, 15, 15, 15, 7, 7, 7, 3 }, 0xf0, 0xe0 }
};
