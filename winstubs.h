#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
#include <fcntl.h>
#include <io.h>
#include <direct.h>
#include <stdint.h>
#include <pthread.h>

#define usleep(x) Sleep(x/1000)
#define sleep(x) Sleep(x)
