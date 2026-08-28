cmake_minimum_required(VERSION 3.16)
project(MarketDuo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

# 注意：本文件只由 ④号位 维护。
# ①号位 每新增一个 models/*.cpp 文件，③号位 每新增一个 ui/*.cpp 文件，
# 都要告诉 ④号位，由 ④号位 把文件加到下面这行。
qt_add_executable(MarketDuo
    main.cpp
)

target_link_libraries(MarketDuo PRIVATE Qt6::Widgets)
