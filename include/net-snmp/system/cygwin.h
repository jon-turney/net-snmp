// We can't include winsock.h on Cygwin, because it clashes with socket.h
// so define here the Win32 API types required by iphlpapi.h
typedef struct in6_addr IN6_ADDR;
