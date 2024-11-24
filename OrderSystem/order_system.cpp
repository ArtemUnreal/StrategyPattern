#include <iostream>

#include "order_system.hpp"

void OrderSystem::processOrder()
{
    std::cout << "Order accepted" << std::endl;

    if (m_deliveryMethod.get() == nullptr)
    {
        std::cout << "No object" << std::endl;
        return;
    }

    int cost = calculateOrderCost(m_distance);

    if (isEnoughMoney(cost))
    {   
        std::cout << "Deliver order" << std::endl;
        m_deliveryMethod->deliverOrder();
    }

    if (m_money < 100)
    {
        std::cout << "Not enough money" << std::endl;
        return;
    }
}

bool OrderSystem::isEnoughMoney(int money)
{
    return m_money >= money;
}

int OrderSystem::calculateOrderCost(int distance)
{
    return m_deliveryMethod->calculateCost(distance);
}
