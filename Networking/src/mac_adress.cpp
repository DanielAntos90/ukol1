//
// Created by Peter Janků on 10.10.2022.
//

#include <cmath>
#include <iostream>
#include "mac_adress.h"


namespace Networking {

    /**
     * @brief Functin that printout the MAC address
     */
    void MACAddress::printAddress() const {
        std::cout << MACAddress::getAdressTypeString();
        std::cout << MACAddress::getAddress(0) << ":";
        std::cout << MACAddress::getAddress(1) << ":";
        std::cout << MACAddress::getAddress(2) << ":";
        std::cout << MACAddress::getAddress(3) << ":";
        std::cout << MACAddress::getAddress(4) << ":";
        std::cout << MACAddress::getAddress(5) << std::endl;
    }

    /**
     * @brief Setter for MAC Address.
     * @param position Position of MAC adress from range 0-6
     * @param value Address value
     */
    void MACAddress::setAddress(int position, char const value[2]) {
        sprintf(address_array[position], value);
    }

    /**
     * @brief Getter for MAC address.
     * @param position Position of MAC address from range 0-5
     *
     * @return string representation of address at specified position
     */
    std::string MACAddress::getAddress(int position) const {
        if(position<0 || position>5) {
            return "  ";
        }

        std::string s{address_array[position][0],address_array[position][1]};

        return s;
    }

    /**
     * @brief Stream operator for the MAC Address class
     * @param stream output stream
     * @param macadress the MACAddress object to be printed out
     * @return the original stream
     */
    std::ostream &operator<<(std::ostream &stream, const MACAddress &macadress) {
        stream << "MAC: " << macadress.getAddress(0);
        stream << ":" << macadress.getAddress(1);
        stream << ":" << macadress.getAddress(2);
        stream << ":" << macadress.getAddress(3);
        stream << ":" << macadress.getAddress(4);
        stream << ":" << macadress.getAddress(5) << std::endl;
        return stream;
    }

}
