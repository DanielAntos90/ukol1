#include <iostream>
#include <list>

#include "adress.h"
#include "ip_adress.h"
#include "mac_adress.h"


int main() {
    //std::list<Networking::Adress> l;

    Networking::IPAddress ip(300,168,0,1);
    std::cout << ip;
    ip.printAddress();

    Networking::MACAddress mac("00","1B","44","11","3A","B7");
    std::cout << mac;
    mac.printAddress();

    //l.push_front(ip);
    //l.push_back(mac);


    return 0;
}
