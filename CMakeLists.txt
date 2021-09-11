cmake_minimum_required(VERSION 3.20)
project(grupa_1_7)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(grupa_1_7
        basket.cpp
        basket.h
        book.cpp
        book.h
        books_col.h
        bookstore.cpp
        bookstore.h
        box.cpp
        box.h
        customer.cpp
        customer.h
        main.cpp
        ordered_books.cpp
        ordered_books.h
        person.h
        person_col.h
        salesman.cpp
        salesman.h
        section.cpp
        section.h
        section_col.cpp
        section_col.h
        simulation.cpp
        simulation.h
        utils.cpp
        utils.h)
