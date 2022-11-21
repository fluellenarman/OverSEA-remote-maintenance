#include "../depend/easywsclient/easywsclient.hpp"
// //#include "easywsclient.cpp" // <-- include only if you don't want compile separately
#ifdef _WIN32
#pragma comment( lib, "ws2_32" )
#include <WinSock2.h>
#endif
#include <assert.h>
#include <stdio.h>
#include <string>
#include "../src/wsclient.h"
using std::string;

//using easywsclient::WebSocket;
 wsClient client;
int main()
{
#ifdef _WIN32
    INT rc;
    WSADATA wsaData;

    rc = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (rc) {
        printf("WSAStartup Failed.\n");
        return 1;
    }
#endif

    client.init();

    client.setPort(8126);
    client.send("goodbye");
    client.send("hello");

    client.receive();

    client.clean();

#ifdef _WIN32
    WSACleanup();
#endif
    return 0;
}
