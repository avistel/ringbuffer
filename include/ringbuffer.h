#ifndef _ringbuffer_h
#define _ringbuffer_h

#include <stdint.h>
#include "rberrno.h"

#define RINGBUFFER_MAX_LEN (256)
#define RINGBUFFER_MASK    (RINGBUFFER_MAX_LEN - 1)

typedef struct 
{
	uint8_t      buffer[RINGBUFFER_MAX_LEN];
    uint16_t     len;
	uint16_t     head;
	uint16_t     tail;
} rb_t;

extern rberror_t rb_open(rb_t* to_init);

extern rberror_t rb_read(rb_t *readfrom, void *readto, uint16_t amount);

extern rberror_t rb_write(rb_t *write_to, void *write_from, uint16_t amount);

extern rberror_t rb_empty(rb_t *to_check);

extern rberror_t rb_isfull(rb_t *to_check);


#endif