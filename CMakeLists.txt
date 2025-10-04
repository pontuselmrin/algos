cmake_minimum_required(VERSION 3.21)

include(cmake/prelude.cmake)

project(
    algos
    VERSION 0.1.0
    DESCRIPTION "A project for C implementations of common algorithms"
    HOMEPAGE_URL "https://example.com/"
    LANGUAGES C
)

include(cmake/variables.cmake)

# ---- Declare library ----

add_library(
    algos_lib OBJECT
    source/lib.c
)

target_include_directories(
    algos_lib ${warning_guard}
    PUBLIC
    "\$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/source>"
)

target_compile_features(algos_lib PUBLIC c_std_17)

# ---- Declare executable ----

add_executable(algos_exe source/main.c)
add_executable(algos::exe ALIAS algos_exe)

set_property(TARGET algos_exe PROPERTY OUTPUT_NAME algos)

target_compile_features(algos_exe PRIVATE c_std_17)

target_link_libraries(algos_exe PRIVATE algos_lib)

# ---- Install rules ----

if(NOT CMAKE_SKIP_INSTALL_RULES)
  include(cmake/install-rules.cmake)
endif()

# ---- Developer mode ----

if(NOT algos_DEVELOPER_MODE)
  return()
elseif(NOT PROJECT_IS_TOP_LEVEL)
  message(
      AUTHOR_WARNING
      "Developer mode is intended for developers of algos"
  )
endif()

include(cmake/dev-mode.cmake)
