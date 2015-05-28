#ifndef _ringbuffer_h
#define _ringbuffer_h

#include <stdint.h>

#define RINGBUFFER_MAX_LEN (256)
#define RINGBUFFER_MASK    (RINGBUFFER_MAX_LEN - 1)

#if (RINGBUFFER_MAX_LEN > 256)
#define RB_INDEX_TYPE uint16_t
#else
#define RB_INDEX_TYPE uint8_t
#endif

typedef RB_INDEX_TYPE rb_index_t;
typedef struct 
{
	uint8_t        buffer[RINGBUFFER_MAX_LEN];
    rb_index_t     len;
	rb_index_t     pop_index;
	rb_index_t     push_index;
} RingBuffer_t;

extern uint8_t ringbuffer_reset(RingBuffer_t* to_init);

extern uint16_t ringbuffer_read(RingBuffer_t *readfrom, uint8_t *readto, rb_index_t amount);

extern uint16_t ringbuffer_write(RingBuffer_t *write_to, uint8_t *write_from, rb_index_t amount);

extern uint16_t ringbuffer_empty(RingBuffer_t *to_check);

extern uint16_t ringbuffer_getlen(RingBuffer_t *to_check);


#endif