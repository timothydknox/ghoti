cmake_minimum_required (VERSION 3.23)
project ("ghoti")
set (srcs main.cpp ghoti.cpp primitivewords.cpp)
add_executable (ghoti ${srcs})
target_compile_features(ghoti PUBLIC cxx_std_20)
add_compile_options(-Wall -Wextra -pedantic -Werror)

