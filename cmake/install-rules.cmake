install(
    TARGETS algos_exe
    RUNTIME COMPONENT algos_Runtime
)

if(PROJECT_IS_TOP_LEVEL)
  include(CPack)
endif()
