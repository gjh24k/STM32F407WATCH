#include "RttSelf.h"
#include "SEGGER_RTT.h"



void print_log(const char *file, int line, const char *func, const char *sFormat, ...)
{
    va_list ParamList;
    va_start(ParamList, sFormat);

    SEGGER_RTT_printf(0, "[%s:%d - %s] ", file, line, func);
    SEGGER_RTT_vprintf(0, sFormat, &ParamList);
    
    va_end(ParamList);
}
