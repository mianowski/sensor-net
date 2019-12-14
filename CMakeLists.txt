
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT(SensorNet)
SET(RCF_ROOT                    ${CMAKE_SOURCE_DIR}/vendor/RCF-3.1.328)
SET(BIN_PATH                    ${CMAKE_SOURCE_DIR}/cmake/bin)
SET(EXECUTABLE_OUTPUT_PATH      ${BIN_PATH} )
SET(LIBRARY_OUTPUT_PATH         ${BIN_PATH})
LINK_DIRECTORIES(               ${BIN_PATH} )

SET(
    RCF_INCLUDES 
    ${RCF_ROOT}/include)
    
IF(MSVC)
    ADD_DEFINITIONS( -D_WIN32_WINNT=0x601 -DWIN32_LEAN_AND_MEAN )
    SET(RCF_LIBS ws2_32)
    IF(CMAKE_CL_64)
        SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /bigobj")
    ENDIF()
ELSE()
    SET(RCF_LIBS pthread dl stdc++fs uuid)    
ENDIF()

ADD_SUBDIRECTORY(RcfLib)
ADD_SUBDIRECTORY(RcfDll)
ADD_SUBDIRECTORY(client-app)
ADD_SUBDIRECTORY(platform-app)
ADD_SUBDIRECTORY(sensor-app)

add_subdirectory(vendor/googletest/googletest)