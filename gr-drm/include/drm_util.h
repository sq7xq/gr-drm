#ifndef _DRM_UTIL_H
#define _DRM_UTIL_H

#include <cstring>
#include <cmath>
#include <vector>
#include "drm_transm_params.h"

// enqueue bit array arr of lenght len at address ptr
void enqueue_bits(unsigned char* &ptr, unsigned int len, unsigned char arr[]);

// enqueue bit array of length len with decimal representation val (max->unsigned int) at address ptr
void enqueue_bits_dec(unsigned char* &ptr, unsigned int len, unsigned int val);

// enqueue crc word of order ord after bit sequence of length len at address ptr
void enqueue_crc(unsigned char* ptr, transm_params* tp, unsigned short ord);

// enqueue array arr of lenght len to vector vec
void enqueue_array_to_vector(std::vector< unsigned char >* vec, const unsigned char* arr, int len);

#endif
