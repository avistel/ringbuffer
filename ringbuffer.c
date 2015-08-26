#include "ringbuffer.h"
#include "rberrno.h"
/* Private function prototypes*/

uint8_t rb_pop(rb_t* to_pop);
uint8_t rb_push(rb_t* to_push, uint8_t value);

/* Public function definitions */
rberror_t rb_open(rb_t* to_init)
{
    uint8_t i;
    if(to_init)
    {    
            for(i = 0; i < RINGBUFFER_MAX_LEN ; i++)
            {
                to_init->buffer[i] = 0;        
            }
            to_init->len = 0;
            to_init->head = 0;
            to_init->tail = 0;
    }
    else
    {
        // ringbuffer to_init does not exist!
        return -1;
    }

	return 0;
}

rberror_t rb_read(rb_t *from, void *to, uint16_t amount)
{

	return 0;
}

rberror_t rb_write(rb_t *to, void *from, uint16_t amount)
{
	return 0;
}

rberror_t rb_ioctl(rb_t *desc, uint32_t optname, uint32_t* optval)
{
    rberror_t result = RBERR_ERROR;
    if(!desc)
    {
    
    }
    
    

    return 0;
}
rberror_t rb_isempty(rb_t *to_check)
{
	return 0;
}

rberror_t rb_isfull(rb_t *to_check)
{	
	return 0;
}

rberror_t rb_available_data(rb_t *to_check)
{
	return 0;
}

rberror_t rb_available_space(rb_t *to_check)
{
	return 0;
}