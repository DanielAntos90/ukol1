//
// Created by Peter Janků on 10.10.2022.
//

#include <cmath>
#include <iostream>
#include "ip_adress.h"

namespace Networking {

    /**
     * @brief Functin that printout the IP address
     */
    void IPAddress::printAddress() const {
        std::cout << IPAddress::getAdressTypeString();
        std::cout << IPAddress::getAddress(0) << ".";
        std::cout << IPAddress::getAddress(1) << ".";
        std::cout << IPAddress::getAddress(2) << ".";
        std::cout << IPAddress::getAddress(3) << std::endl;
    }
    /**
     * @brief Setter for IP address
     * @param position Position of IP adress from range 0-3
     * @param value IP Address value from range 0-255
     */
    void IPAddress::setAddress(int position, int value) {
        if(value<0) {
            value = 0;
        } else if(value>255) {
            value = 255;
        }

        address_array[position] = value;
    }
    /**
     * @brief Getter for IP address.
     * @param position Position of IP adress from range 0-3
     *
     * @return value at specified position
     */
    int IPAddress::getAddress(int position) const {
        if(position<0 || position>3) {
            return -1;
        }
        return  address_array[position];
    }

    /**
     * @brief Stream operator for the IP Adress class
     * @param stream output stream
     * @param ipadress the IPAddress object to be printed out
     * @return the original stream
     */
    std::ostream &operator<<(std::ostream &stream, const IPAddress &ipadress) {
        stream << ipadress.getAddressType(ipadress.getAddressType()) << ipadress.getAddress(0);
        stream << "." << ipadress.getAddress(1);
        stream << "." << ipadress.getAddress(2);
        stream << "." << ipadress.getAddress(3) << std::endl;
        return stream;
    }

}
