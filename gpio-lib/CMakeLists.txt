include_directories(include)

#Can manually add the sources if needed:
#set(SOURCES src/file1.c)

#The file(GLOB ) can use wildcards:
file(GLOB SOURCES "src/*.c")

add_library(gpio-lib SHARED ${SOURCES})

#Adding a dependency on the wiringPi library
#The lib and header are assumed to already be installed in search paths on the machine
#Otherwise we would need to update link_directories and include_directories
target_link_libraries(gpio-lib wiringPi)

install(TARGETS gpio-lib DESTINATION lib)
