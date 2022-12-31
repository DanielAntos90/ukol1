//
// Created by Daniel Antoš
//

#ifndef NETWORKING_ADRESSS
#define NETWORKING_ADRESSS
#include <iostream>

namespace Networking {

    /**
     * @brief Abstract class representing common features for Address.
     *
     * Address can have types IP or MAC.
     */
    class Address {

    public:
        /**
         * @brief Types of address
         */
        enum Types {
            IP,
            MAC
        };

        /**
         * @brief The adress constructor
         *
         * @param type Type of the adress -> IP or MAC from Types enum
         */
        explicit Address(Types type) : Type(type)  {}

        /**
         * @brief Getter for the address type
         * @return AdressType enum
         */
        const Types &getAddressType() const {
            return Type;
        }

        /**
         * @brief Virtual function for address printing information.
         */
        virtual void printAddress() const = 0;

        /**
         * @brief Function for obtaining the adress type in string format
         * @return String representation of adress type
         */
        std::string const getAdressTypeString() const {
            switch(Type)
            {
                case IP:  return "IP: ";   break;
                case MAC: return "MAC: "; break;
            }
            return "Adress type is not defined";
        }
        /**
         * @brief Static function which converts adress type to string
         * @return String representation of adress type
         */
        static std::string getAddressType(Types type) {
            switch(type)
            {
                case IP:  return "IP: ";   break;
                case MAC: return "MAC: "; break;
            }
            return "Adress type is not defined";
        }

    protected:
        enum Types Type; /**< @brief Type of address */

    };
} // Networking

#endif //NETWORKING_ADRESS
