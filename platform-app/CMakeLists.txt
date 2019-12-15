ADD_DEFINITIONS( ${RCF_DEFINES} )

INCLUDE_DIRECTORIES( 
    ${CMAKE_SOURCE_DIR}/include
    ${RCF_INCLUDES} 
)

ADD_EXECUTABLE(
    Platform
    Platform.cpp
    PlatformService.cpp
    Measurement.cpp
    )

TARGET_LINK_LIBRARIES( Platform RcfLib ${RCF_LIBS} )