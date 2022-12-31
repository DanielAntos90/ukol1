//
// Created by Daniel Antoš
//

#ifndef IP_ADRESSS
#define IP_ADRESSS

#include "adress.h"
#include <iostream>

namespace Networking {

    /**
     * @brief Class representing IP Address.
     *
     * IP Adress is represented by 4 numbers from range 0-255.
     */
    class IPAddress : public Address {

    public:
        /**
         * @brief The IP address constructor
         * This constructor is calling the based constructor for setting the address type (constructor delegation).
         *
         * @param adr1 First adress from range 0-255
         * @param adr2 Second adress from range 0-255
         * @param adr3 Third adress from range 0-255
         * @param adr4 Fourth adress from range 0-255
         */
        IPAddress(int adr1,int adr2,int adr3,int adr4) : Address(Types::IP) {
            setAddress(0, adr1);
            setAddress(1, adr2);
            setAddress(2, adr3);
            setAddress(3, adr4);
        }

        /**
         * @brief Function for address printing information.
         */
        void printAddress() const override;

        /**
         * @brief Function that return adress value at specified address position.
         * @param position Position of IP adress from range 0-3
         *
         * @return value at specified position
         */
        int getAddress (int position) const;

        int address_array[4]; /**< @brief Collector for IP address values */

    private:
        /**
         * @brief Function that will set adress value at specified address position.
         * @param position Position of IP adress from range 0-3
         * @param value IP Address value from range 0-255
         */
        void setAddress(int position, int value);
    };

    std::ostream &operator<<(std::ostream& stream, const IPAddress &ipadress);
} // Networking

#endif //IP_ADRESSS
