#pragma once

#include "../delivery.hpp"

class DeliveryOnAuto : public Delivery 
{
public:
    int calculateCost(int distance) const override;
    int calculateTime(int distance) const override;
    void deliverOrder() const override;

private:
    const int m_kmPerHours = 60;
    const int m_costPerKilometers = 300; // 300 roubles
};