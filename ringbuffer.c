#include "ringbuffer.h"

uint16_t ringbuffer_init(RingBuffer_t* to_init, uint16_t length)
{
    uint8_t i;
    if(to_init)
    {    
        if(length < RINGBUFFER_MAX_LEN)
        {
            for(i = 0; i < length; i++)
            {
                to_init->buffer[i] = 0;        
            }
            to_init->length = length;
            to_init->pop_index = 0;
            to_init->push_index = 0;
            to_init->new_bytes = 0;
        }
        else
        {
            // desired length is above absolute limit!
            return -1;
        }

    }
    else
    {
        // ringbuffer to_init does not exist!
        return -1;
    }

	return 0;
}

uint8_t ringbuffer_destroy(RingBuffer_t* to_destroy)
{
    if(to_destroy)
    {
        to_destroy->buffer = NULL;
        to_destroy->length = 0;
        to_destroy->new_bytes = 0;
        to_destroy->pop_index = 0;
        to_destroy->push_index = 0;
    }
    else
    {
        return -1;
    }

    return 0;
}

uint16_t ringbuffer_read(RingBuffer_t *readfrom, uint8_t *readto, uint8_t amount)
{
    uint8_t i;
    uint8_t limit;
    if(readto)
    {
        if(readfrom && readfrom->buffer)
        {
            if(amount <= readfrom->new_bytes)
            {
                limit = amount;
            }
            else
            {
                limit = readfrom->new_bytes;
            }

            for(i = 0; i < limit; i++)
            {
                readto[i] = readfrom->buffer[(readfrom->pop_index)++];
            }
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