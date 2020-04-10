file(REMOVE_RECURSE
  "libreader-solver-headers.a"
  "libreader-solver-headers.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/reader-solver-headers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
