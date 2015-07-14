include_directories(../gpio-lib/include)

#Can manually add the sources if needed:
#set(SOURCES src/app.c)

#The file(GLOB ) can use wildcards:
file(GLOB SOURCES "src/*.c")

add_executable(gpio-app ${SOURCES})

target_link_libraries(gpio-app gpio-lib)

install(TARGETS gpio-app DESTINATION bin)

