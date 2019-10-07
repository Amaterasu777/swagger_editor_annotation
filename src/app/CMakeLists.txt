#
#   Основное приложение
#

cmake_minimum_required(VERSION 3.10)
project(client)

set(
        APP_SRC_DIR
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

set(
        APP_SRC

        ${APP_SRC_DIR}/main.cpp
        ${APP_SRC_DIR}/application/application.cpp
        ${APP_SRC_DIR}/windows/main_window/main_window.cpp
)

set(
        APP_H

        ${APP_SRC_DIR}/application/application.h
        ${APP_SRC_DIR}/windows/main_window/main_window.h
)

include_directories(
        ${APP_SRC_DIR}
)

add_executable(application WIN32 ${APP_SRC} ${APP_H})
target_link_libraries(application ${QT_LIBS})