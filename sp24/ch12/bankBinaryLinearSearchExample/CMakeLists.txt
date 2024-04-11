cmake_minimum_required(VERSION 3.26)
project(bankAccount)

set(CMAKE_CXX_STANDARD 17)

add_executable(bankAccount main.cpp
        date.cpp
        date.h
        bankAccount.cpp
        bankAccount.h
        accountTransaction.cpp
        accountTransaction.h
        bank.cpp
        bank.h)
