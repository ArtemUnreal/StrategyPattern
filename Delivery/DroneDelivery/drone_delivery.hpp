#pragma once

#include "../delivery.hpp"

class DeliveryOnDrone : public Delivery 
{
public:
    int calculateCost(int distance) const override;
    int calculateTime(int distance) const override;
    void deliverOrder() const override;

private:
    const int m_kmPerHours = 100;
    const int m_costPerKilometers = 700; // 700 roubles
};