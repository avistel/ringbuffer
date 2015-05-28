#include "ringbuffer.h"

/* Private function prototypes*/

uint8_t rb_pop(RingBuffer_t* to_pop);
uint8_t rb_push(RingBuffer_t* to_push, uint8_t value);

/* Public function definitions */
uint16_t ringbuffer_reset(RingBuffer_t* to_init)
{
    uint8_t i;
    if(to_init)
    {    
            for(i = 0; i < RINGBUFFER_MAX_LEN ; i++)
            {
                to_init->buffer[i] = 0;        
            }
            to_init->len = 0;
            to_init->pop_index = 0;
            to_init->push_index = 0;
    }
    else
    {
        // ringbuffer to_init does not exist!
        return -1;
    }

	return 0;
}

uint16_t ringbuffer_read(RingBuffer_t *readfrom, uint8_t *readto, buffer_size_t amount)
{
    uint8_t i;
    uint8_t limit;
    // check if the destination buffer exists
    if(readto)
    {
        // check if the source buffer
        if(readfrom)
        {

        }
    }
    else
    {
        return -1;
    }
	return 0;
}

uint16_t ringbuffer_write(RingBuffer_t *write_to, uint8_t *write_from, uint16_t amount)
{
	return 0;
}

uint16_t ringbuffer_empty(RingBuffer_t *to_check)
{
	return 0;
}

uint16_t ringbuffer_full(RingBuffer_t *to_check)
{	
	return 0;
}

uint16_t ringbuffer_available_data(RingBuffer_t *to_check)
{
	return 0;
}

uint16_t ringbuffer_available_space(RingBuffer_t *to_check)
{
	return 0;
}