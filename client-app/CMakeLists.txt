
ADD_DEFINITIONS( ${RCF_DEFINES} )

INCLUDE_DIRECTORIES(
    ${RCF_INCLUDES} 
    ${CMAKE_SOURCE_DIR}/include
)

ADD_EXECUTABLE(
    Client
    Client.cpp
    ClientService.cpp)

TARGET_LINK_LIBRARIES( Client RcfLib ${RCF_LIBS} )
