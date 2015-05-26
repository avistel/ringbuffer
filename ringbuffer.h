#ifndef _ringbuffer_h
#define _ringbuffer_h

#include <stdint.h>

#define RINGBUFFER_MAX_LEN 256

typedef struct 
{
	uint8_t*   buffer;
    uint8_t    length;
    uint8_t    new_bytes;
	uint8_t    pop_index;
	uint8_t    push_index;
} RingBuffer_t;

uint8_t ringbuffer_init(RingBuffer_t* to_init, uint8_t length);

void ringbuffer_destroy(RingBuffer_t* to_destroy);

uint16_t ringbuffer_read(RingBuffer_t *readfrom, uint8_t *readto, uint8_t amount);

uint16_t ringbuffer_write(RingBuffer_t *write_to, uint8_t *write_from, uint8_t amount);

uint16_t ringbuffer_empty(RingBuffer_t *to_check);

uint16_t ringbuffer_full(RingBuffer_t *to_check);

uint16_t ringbuffer_available_data(RingBuffer_t *to_check);

uint16_t ringbuffer_available_space(RingBuffer_t *to_check);

#endif