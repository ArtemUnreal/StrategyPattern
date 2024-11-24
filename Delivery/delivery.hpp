#pragma once

class Delivery
{
public:
    virtual int calculateCost(int distance) const = 0;
    virtual int calculateTime(int distance) const = 0;
    virtual void deliverOrder() const = 0;
    virtual ~Delivery() = default;
};