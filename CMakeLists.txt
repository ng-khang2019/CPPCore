cmake_minimum_required(VERSION 4.1)
project(CPPCore)

set(CMAKE_CXX_STANDARD 20)

#add_executable(HelloWorld VariablesAndDataTypes/HelloWorld.cpp)
#add_executable(HelloWorld VariablesAndDataTypes/VariablesDeclaration.cpp)
#add_executable(HelloWorld VariablesAndDataTypes/Operator.cpp)
#add_executable(HelloWorld ConditionalStatements/IfElse.cpp)
#add_executable(HelloWorld ConditionalStatements/Switch.cpp)
#add_executable(HelloWorld ConditionalStatements/WhileDoWhile.cpp)
#add_executable(HelloWorld ConditionalStatements/ForStatement.cpp)

foreach(file ${SOURCE_FILES})
    get_filename_component(exe_name ${file} NAME_WE)
    add_executable(${exe_name} ${file})
    message(STATUS "File added: ${exe_name}")
endforeach()

