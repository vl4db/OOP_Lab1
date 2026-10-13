
#include "header1.h"


#if USE_HEADER1
float f(int direction, float temperature)
{
    if (direction)
        return 5.0f / 9.0f * (temperature - 32.0f);
    else 
        return temperature * 9.0f / 5.0f + 32.0f;

}
#endif