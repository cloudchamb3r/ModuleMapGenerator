

# Add source to this project's executable.
add_executable (ModuleMapGenerator "src/main.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ModuleMapGenerator PROPERTY CXX_STANDARD 20)
  set_property(TARGET ModuleMapGenerator PROPERTY CXX_STANDARD 20)
set_property(TARGET ModuleMapGenerator PROPERTY CXX_STANDARD_REQUIRED ON)
endif()

# TODO: Add tests and install targets if needed.
