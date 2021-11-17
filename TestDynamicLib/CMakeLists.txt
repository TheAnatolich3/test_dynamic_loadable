# CMakeList.txt: проект CMake для TestDynamicLib; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (TestDynamicLib "TestDynamicLib.cpp" "TestDynamicLib.h")


# Dynamic library
#target_include_directories(TestDynamicLib PRIVATE ${CMAKE_SOURCE_DIR}\\..\\ReleaseVersion\\DynamicLib\\include\\)
#target_link_directories(TestDynamicLib PRIVATE ${CMAKE_SOURCE_DIR}\\..\\ReleaseVersion\\DynamicLib\\lib\\)


#target_link_libraries(TestDynamicLib DynamicLib.dll)



#set_property(TARGET DynamicLib PROPERTY IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}\\..\\ReleaseVersion\\DynamicLib\\lib\\)



# TODO: Добавьте тесты и целевые объекты, если это необходимо.
