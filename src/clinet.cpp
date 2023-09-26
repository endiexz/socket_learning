#include "clinet.h"
#include <sys/socket.h>
#include <netinet/in.h>
int clinet_init(char *ip, int port){
    int s = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in clinet_addr;
    clinet_addr.sin_family = AF_INET;
    clinet_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    clinet_addr.sin_port= htons(port);
    
}