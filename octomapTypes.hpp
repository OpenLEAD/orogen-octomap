#ifndef octomap_TYPES_HPP
#define octomap_TYPES_HPP

/* If you need to define types specific to your oroGen components, define them
 * here. Required headers must be included explicitly
 *
 * However, it is common that you will only import types from your library, in
 * which case you do not need this file
 */
#include <vector>
#include <string>
namespace octomap {

    struct Octomap{
    //Flag to denote a binary (only free/occupied) or full occupancy octree (.bt/.ot file)
    bool binary;

    //Class id of the contained octree
    //std::string id;

   // Resolution (in m) of the smallest octree nodes
   double resolution;

   //binary serialization of octree, use conversions.h to read and write octrees
   //std::vector<int> data;
    };

/*    struct OctomapWithPose
    {
	// The pose of the octree with respect to the header frame
    	geometry_msgs/Pose origin

	// The actual octree msg
    	Octomap octomap;
    };*/


}

#endif

