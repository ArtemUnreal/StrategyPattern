#pragma once

#include "../delivery.hpp"

class DeliveryOnBike : public Delivery 
{
public:
    int calculateCost(int distance) const override;
    int calculateTime(int distance) const override;
    void deliverOrder() const override;

private:
    const int m_kmPerHours = 15;
    const int m_costPerKilometers = 100; // 100 roubles
};