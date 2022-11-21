#include "wsclient.h"
#ifdef _WIN32
#pragma comment( lib, "ws2_32" )
#include <Winsock2.h>
#endif

#include "../depend/logq/src/log.h"

void handle_message(const std::string & message)
{
    printf(">>> %s\n HANDLE MSG:", message.c_str());
    //if (message == "world") { ws->close(); }
}

// constructors
void wsClient::init() {
    // #ifdef _WIN32
    //     INT rc;
    //     WSADATA wsaData;

    //     rc = WSAStartup(MAKEWORD(2, 2), &wsaData);
    //     if (rc) {
    //         printf("WSAStartup Failed.\n");
    //         assert(rc);
    //     }
    // #endif
    ws = NULL;
}

void wsClient::init(int portNumber) {
    // #ifdef _WIN32
    //     INT rc;
    //     WSADATA wsaData;

    //     rc = WSAStartup(MAKEWORD(2, 2), &wsaData);
    //     if (rc) {
    //         printf("WSAStartup Failed.\n");
    //         assert(rc);
    //     }
    // #endif

    portNum = portNumber;

    string url1 = "ws://localhost:";
    string url2 = std::to_string(portNum);
    string url3 = "/foo";
    url = url1 + url2 + url3;

    // establish connection with url
    ws = WebSocket::from_url(url);
}

void wsClient::setPort(int p) { 
    portNum = p; 

    string url1 = "ws://localhost:";
    string url2 = std::to_string(portNum);
    string url3 = "/foo";
    url = url1 + url2 + url3;
    
    // reestablish connection w/ new port num
    ws = WebSocket::from_url(url);
}

void wsClient::send(const string& data) {
    //printf("BEFORE ASSERT");
    //assert(ws);
    if (ws != NULL) {
        printf("SEND SUCCESSFUL");
        ws->send(data);
    }
}

void wsClient::receive() {
    //assert(ws);
    if (ws != NULL && ws->getReadyState() != WebSocket::CLOSED) {
        printf("RECEIVE SUCCESSFUL");
        ws->poll();
        ws->dispatch(handle_message);
    }
}

void wsClient::clean() {
    if(ws == NULL){
        return;
    }

    if( ws->getReadyState() != WebSocket::CLOSED){
        ws->close();
    }

    delete ws;

    // #ifdef _WIN32
    //     WSACleanup();
    // #endif
}

// void wsClient::handle_message(const std::string & message)
// {
//     printf(">>> %s\n", message.c_str());
//     if (message == "world") { ws->close(); }
// }