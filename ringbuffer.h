#ifndef _ringbuffer_h
#define _ringbuffer_h

//#include <stdint.h>

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef struct 
{
	uint8_t *buffer;
	uint16_t length;
	uint16_t start;
	uint16_t end;
} RingBuffer_t;

uint16_t ringbuffer_create(RingBuffer_t* to_init, uint16_t length);

void ringbuffer_destroy(RingBuffer_t* to_destroy);

uint16_t ringbuffer_read(RingBuffer_t *readfrom, uint8_t *readto, uint16_t amount);

uint16_t ringbuffer_write(RingBuffer_t *write_to, uint8_t *write_from, uint16_t amount);

uint16_t ringbuffer_empty(RingBuffer_t *to_check);

uint16_t ringbuffer_full(RingBuffer_t *to_check);

uint16_t ringbuffer_available_data(RingBuffer_t *to_check);

uint16_t ringbuffer_available_space(RingBuffer_t *to_check);

#endif