add_library(DroneDelivery STATIC drone_delivery.cpp)

target_include_directories(DroneDelivery PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})