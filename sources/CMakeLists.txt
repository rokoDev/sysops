target_sources(sysops
  PRIVATE
    include/sysops/nix/memory/ops.h
    include/sysops/win/memory/ops.h
    include/sysops/nix/errors/ops.h
    include/sysops/win/errors/ops.h
    include/sysops/memory_ops.h
    include/sysops/errors_ops.h
    include/sysops/ops.h
  )

if(WIN32)
  # Don't need to compile this files for Windows platforms
  set_source_files_properties(
    ${MAIN_INCLUDE_DIR}/sysops/nix/memory/ops.h
    ${MAIN_INCLUDE_DIR}/sysops/nix/errors/ops.h
   PROPERTIES
      HEADER_FILE_ONLY YES
  )
else()
  # Don't need to compile this file for non-Windows platforms
  set_source_files_properties(
    ${MAIN_INCLUDE_DIR}/sysops/win/memory/ops.h
    ${MAIN_INCLUDE_DIR}/sysops/win/errors/ops.h
    PROPERTIES
      HEADER_FILE_ONLY YES
  )
endif()

set_property(TARGET sysops APPEND PROPERTY SRC_DIRS "${CMAKE_CURRENT_LIST_DIR}/include")
target_include_directories(sysops INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
