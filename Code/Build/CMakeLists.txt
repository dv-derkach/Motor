get_filename_component(TARGET_GROUP ${CMAKE_CURRENT_SOURCE_DIR} NAME_WE)

set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "${TARGET_GROUP}/CMakePredefinedTargets")

add_subdirectory(CMake)