add_library(OrderSystem STATIC order_system.cpp)

target_include_directories(OrderSystem PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})