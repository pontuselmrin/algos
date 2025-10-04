# Parent project does not export its library target, so this CML implicitly
# depends on being added from it, i.e. the testing is done only from the build
# tree and is not feasible from an install location

project(algosTests LANGUAGES C)

# ---- Tests ----

add_executable(algos_test source/algos_test.c)
target_link_libraries(algos_test PRIVATE algos_lib)
target_compile_features(algos_test PRIVATE c_std_17)

add_test(NAME algos_test COMMAND algos_test)

# ---- End-of-file commands ----

add_folders(Test)
