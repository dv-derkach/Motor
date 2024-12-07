get_filename_component(TARGET_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)

file(GLOB_RECURSE TARGET_SOURCES CONFIGURE_DEPENDS "*.cpp" "*.h")

add_library(${TARGET_NAME} ${TARGET_SOURCES})

target_include_directories(${TARGET_NAME} PUBLIC "${CMAKE_SOURCE_DIR}/Code/${TARGET_GROUP}")

set_target_properties(${TARGET_NAME} PROPERTIES FOLDER ${TARGET_GROUP})

target_precompile_headers(${TARGET_NAME} PRIVATE "${TARGET_NAME}PCH.h")
