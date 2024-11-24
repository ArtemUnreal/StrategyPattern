#include <iostream>

#include "auto_delivery.hpp"

int DeliveryOnAuto::calculateCost(int distance) const
{
    return distance * m_costPerKilometers;
}

int DeliveryOnAuto::calculateTime(int distance) const
{
    return distance / m_kmPerHours;
}

void DeliveryOnAuto::deliverOrder() const
{
    std::cout << "Yourd order is delivered by auto" << std::endl;
}