#ifndef CGAL_DEMO_MESH_3_CONFIG_H
#define CGAL_DEMO_MESH_3_CONFIG_H

// #define CGAL_POLYHEDRON_DEMO_NO_NEF
// #define CGAL_POLYHEDRON_DEMO_NO_SURFACE_MESHER
// #define CGAL_POLYHEDRON_DEMO_NO_PARAMETRIZATION

#define CGAL_MESH_3_VERBOSE
#define CGAL_MESH_3_IO_VERBOSE

#ifndef CGAL_POLYHEDRON_DEMO_NO_PARAMETRIZATION
#  define CGAL_POLYHEDRON_DEMO_USE_PARAMETRIZATION
#endif

#ifndef CGAL_POLYHEDRON_DEMO_NO_NEF
#  define CGAL_POLYHEDRON_DEMO_USE_NEF
#endif

#ifndef CGAL_POLYHEDRON_DEMO_NO_SURFACE_MESHER
#  define CGAL_POLYHEDRON_DEMO_USE_SURFACE_MESHER
#endif

#ifdef CONCURRENT_MESH_3
  #include <tbb/tbbmalloc_proxy.h>
#endif

#endif // CGAL_DEMO_MESH_3_CONFIG_H
