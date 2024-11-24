#include <iostream>

#include "bike_delivery.hpp"

 int DeliveryOnBike::calculateCost(int distance) const
 {
    return distance * m_costPerKilometers;
 }

 int DeliveryOnBike::calculateTime(int distance) const
 {
    return distance / m_kmPerHours;
 }

 void DeliveryOnBike::deliverOrder() const
 {
    std::cout << "Yours order is delivered in an enriomentally friendly way" << std::endl;
 }