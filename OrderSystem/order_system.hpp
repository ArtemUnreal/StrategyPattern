#pragma once

#include <memory>

#include "../Delivery/delivery.hpp"

class OrderSystem
{
public:
    OrderSystem(std::unique_ptr<Delivery> delivery, int money, int distance)
        : m_deliveryMethod(std::move(delivery)),
          m_money(money),
          m_distance(distance) 
    {
    }

    void processOrder();
    int calculateOrderCost(int distance);
    bool isEnoughMoney(int money);

private:
    std::unique_ptr<Delivery> m_deliveryMethod;
    int m_money;
    int m_distance;
};