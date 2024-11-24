#include <iostream>
#include <memory>

#include "OrderSystem/order_system.hpp"
#include "Delivery/BikeDelivery/bike_delivery.hpp"
#include "Delivery/AutoDelivery/auto_delivery.hpp"
#include "Delivery/DroneDelivery/drone_delivery.hpp"

int main()
{
    int money = 100000;
    int distance = 20;

    std::unique_ptr<Delivery> deliveryMethod = std::make_unique<DeliveryOnDrone>();

    OrderSystem order(std::move(deliveryMethod), money, distance);
    order.processOrder();

    return 0;
}