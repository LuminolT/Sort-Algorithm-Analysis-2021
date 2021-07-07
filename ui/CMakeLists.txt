include_directories(${PROJECT_SOURCE_DIR}/ui)
aux_source_directory(. LIB_SRCS)
add_library (QtUi ${LIB_SRCS})