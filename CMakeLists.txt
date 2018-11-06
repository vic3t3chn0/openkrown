# Typically you don't care so much for a third party library's tests to be
# run from your own project's code.
cmake_minimum_required(VERSION 3.12)
set(JSON_BuildTests OFF CACHE INTERNAL "")

# Don't use include(nlohmann_json/CMakeLists.txt) since that carries with it
# inintended consequences that will break the build.  It's generally
# discouraged (although not necessarily well documented as such) to use
# include(...) for pulling in other CMake projects anyways.
add_subdirectory(nlohmann_json)
add_library(foo ...)
target_link_libraries(foo PRIVATE nlohmann_json::nlohmann_json)