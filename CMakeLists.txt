cmake_minimum_required(VERSION 3.10)

if(MSVC)
    # 源文件和执行程序均使用UTF-8编码
    add_compile_options("$<$<C_COMPILER_ID:MSVC>:/source-charset:utf-8>")
    add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/source-charset:utf-8>")
    add_compile_options("$<$<C_COMPILER_ID:MSVC>:/execution-charset:utf-8>")
    add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/execution-charset:utf-8>")
endif()

# 项目名称和版本
project(ShapeFactoryExample VERSION 1.0)

# 设置C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 针对Visual Studio的特定配置
if(MSVC)
    # 启用多处理器编译加速VS构建
    add_compile_options(/MP)
    
    # 设置VS的警告级别
    add_compile_options(/W4)
endif()

# 收集所有源文件
set(SOURCES
    main.cpp
    Shape.cpp
    Circle.cpp
    Rectangle.cpp
    ShapeFactory.cpp
)

# 添加可执行文件
add_executable(shape_factory ${SOURCES})

# 非MSVC编译器的警告设置
if(NOT MSVC)
    target_compile_options(shape_factory PRIVATE -Wall -Wextra)
endif()
    