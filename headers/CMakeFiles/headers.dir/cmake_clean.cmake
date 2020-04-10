file(REMOVE_RECURSE
  "libheaders.a"
  "libheaders.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/headers.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
