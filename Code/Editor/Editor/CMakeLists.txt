get_filename_component(TARGET_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)

file(GLOB_RECURSE TARGET_SOURCES CONFIGURE_DEPENDS "*.cpp" "*.h")

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${TARGET_SOURCES})

add_executable(${TARGET_NAME} ${TARGET_SOURCES})

target_include_directories(${TARGET_NAME} PUBLIC "${CMAKE_SOURCE_DIR}/Code/${TARGET_GROUP}")

set_target_properties(${TARGET_NAME} PROPERTIES FOLDER ${TARGET_GROUP})

target_link_libraries(${TARGET_NAME} PRIVATE Core)

add_dependencies(${TARGET_NAME} Core)
