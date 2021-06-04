

ADD_LIBRARY (student STATIC student.cpp)

ADD_EXECUTABLE (Demo demo.cpp)
TARGET_LINK_LIBRARIES(Demo student)

ADD_EXECUTABLE(test1 test1.cpp)
TARGET_LINK_LIBRARIES(test1 student)
ADD_EXECUTABLE(test2 test2.cpp)
TARGET_LINK_LIBRARIES(test2 student)

ENABLE_TESTING() 

ADD_TEST(Test1 test1)
ADD_TEST(Test2 test2)
