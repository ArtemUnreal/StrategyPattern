#include <iostream>

#include "drone_delivery.hpp"

int DeliveryOnDrone::calculateCost(int distance) const
{
    std::cout << "Calculate " << distance * m_costPerKilometers << std::endl;
    return distance * m_costPerKilometers;
}

int DeliveryOnDrone::calculateTime(int distance) const
{
    return distance / m_kmPerHours;
}

void DeliveryOnDrone::deliverOrder() const
{
    std::cout << "Your order is delivered quickly" << std::endl;
}