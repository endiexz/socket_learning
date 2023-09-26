# socket
## listen
```int listen(int sockfd, int backlog)```
this function is nomally called after both the socket and bind functions and must be called before calling accept function.

Specfied 5 as the backlog rally allows up to 8 queued entries on this system commonly.

don't specify a backlog of 0, if you don't want any clinet connect to your socket.

I don't know what's the mean of it return value ,so ignore it.

## accept
```int accept(int sockfd, struct sockaddr* cliaddr, socklen_t* addrlen)```

the cliaddr and addrlen arguments are used to retuen the protocol address of the connected peer process.if accept succeccful, the return value its return value is a brand-new