add_library(BikeDelivery STATIC bike_delivery.cpp)

target_include_directories(BikeDelivery PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})