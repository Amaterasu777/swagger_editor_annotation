#
#   Основной модуль приложения
#

cmake_minimum_required(VERSION 3.10)
project(SwaggerEditor)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)

set(
        QT_LIBS

        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
)

set(
        GLOBAL_SRC_DIR

        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

#   Исполняемые файлы
add_subdirectory(src/app)