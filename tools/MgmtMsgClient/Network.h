/** 
 * @file Network.h
 * @author Tomasz Kleinschmidt
 *
 * @brief Network class definition.
 */

#ifndef NETWORK_H
#define	NETWORK_H

#include <netdb.h>
#include "datatypes_dep.h"

int initNetwork(char* port, char* hostName, struct addrinfo** addrInfo);
void disableNetwork(int sockFd, struct addrinfo** addrInfo);

void sendMessage(int sockFd, Octet* buf, UInteger16 length, struct addrinfo* addrInfo);
void receiveMessage(int sockFd, Octet* buf, UInteger16 length, struct sockaddr_storage* addr, socklen_t* len);

#endif	/* NETWORK_H */

