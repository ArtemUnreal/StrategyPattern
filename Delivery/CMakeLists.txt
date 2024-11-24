add_library(Delivery STATIC)

add_subdirectory(AutoDelivery)
add_subdirectory(DroneDelivery)
add_subdirectory(BikeDelivery)

target_include_directories(Delivery PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_sources(Delivery
    PRIVATE
    delivery.hpp 
)

target_sources(Delivery
    PRIVATE
    AutoDelivery/auto_delivery.cpp    
    DroneDelivery/drone_delivery.cpp
    BikeDelivery/bike_delivery.cpp
)
