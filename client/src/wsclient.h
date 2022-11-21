#include "../depend/easywsclient/easywsclient.hpp"
//#include "../depend/easywsclient/easywsclient.cpp" // <-- include only if you don't want compile separately

// #ifdef _WIN32
// #pragma comment( lib, "ws2_32" )
// #include <Winsock2.h>
// #endif

#include <assert.h>
#include <stdio.h>
#include <string>

using std::string;
using easywsclient::WebSocket;

class wsClient {
  public:

    // constructor
    void init() = delete;
    void init(int portNumber);

    // functions
    void send(const string& data);
    void receive();

    //readyStateValues getCurrState() const { assert(ws); return ws->getReadyState(); }

    int getPort() const { return portNum; }
    void setPort(int p);

    void clean();

  private:
    WebSocket::pointer ws = nullptr;
    int portNum = 0;
    string url;

    //void handle_message(const string& msg);

};
