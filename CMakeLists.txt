

ADD_LIBRARY (student STATIC student.cpp)

ADD_EXECUTABLE (Demo demo.cpp)
TARGET_LINK_LIBRARIES(Demo student)
