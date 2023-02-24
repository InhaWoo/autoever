#include <sys/socket.h>

/// SERVER SOCKET ///
// 1. Make Socket
int socket(int domain, int type, int protocol);
// 2. Bind IP and PORT
int bind(int sockfd, struct sockaddr* myaddr, socklen_t addrlen);
// 3. Change to Request Acceptable State
int listen(int sockfd, int backlog);
// 4. Accept Request
int accept(int sockfd, struct sockaddr* addr, socklen_t* addrlen);

/// CLIENT SOCKET ///
