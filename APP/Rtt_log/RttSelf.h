#ifndef _RTTSELF_
#define _RTTSELF_

#define DEBUG_SELF 1  

#if DEBUG_SELF 
    #define Debug_Log_Self(fmt, ...) print_log(__FILE__, __LINE__, __func__, fmt, ##__VA_ARGS__)
#else 
    #define Debug_Log_Self(fmt, ...)  // ?????,????
#endif

void print_log(const char *file, int line, const char *func, const char *sFormat, ...);


#endif
