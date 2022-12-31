//
// Created by Daniel Antoš
//

#ifndef MAC_ADRESSS
#define MAC_ADRESSS

#include "adress.h"
#include <iostream>
#include <cstdio>

namespace Networking {

    /**
     * @brief Class representing MAC Address.
     *
     * MAC Adress is represented by 12 characters group into 6 groups by 2 chars.
     */
    class MACAddress : public Address {

    public:
        /**
         * @brief The MAC address constructor
         * This constructor is calling the based constructor for setting the address type (constructor delegation).
         *
         * @param adr1 First adress
         * @param adr2 Second adress
         * @param adr3 Third adress
         * @param adr4 Fourth adress
         * @param adr5 Fourth adress
         * @param adr6 Fourth adress
         */
        MACAddress(char const adr1[2],char const adr2[2],char const adr3[2],char const adr4[2],char const adr5[2],char const adr6[2]) : Address(Types::MAC) {
          setAddress(0, adr1);
          setAddress(1, adr2);
          setAddress(2, adr3);
          setAddress(3, adr4);
          setAddress(4, adr5);
          setAddress(5, adr6);
        }

        /**
         * @brief Function for address printing information.
         */
        void printAddress() const override;

        /**
         * @brief Function that return adress value at specified address position.
         * @param position Position of MAC adress from range 0-5
         *
         * @return string representation of address at specified position
         */
        std::string getAddress(int position) const;

        char address_array[6][2]; /**< @brief Collector for MAC address values */

    private:
        /**
         * @brief Function that will set adress value at specified address position.
         * @param position Position of MAC adress from range 0-6
         * @param value Address value
         */
        void setAddress(int position, char const value[2]);
    };

    std::ostream &operator<<(std::ostream& stream, const MACAddress &ipadress);
} // Networking

#endif //MAC_ADRESSS
