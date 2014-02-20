#ifndef octomap_TYPES_HPP
#define octomap_TYPES_HPP

/* If you need to define types specific to your oroGen components, define them
 * here. Required headers must be included explicitly
 *
 * However, it is common that you will only import types from your library, in
 * which case you do not need this file
 */


namespace octomap {
    
    
    struct OcTreeNode
    {
	std::vector<OcTreeNode> children;
	
	double value;
    };
    
        struct Octomap
    
    {
	OcTreeNode ocTreeNode;
	Eigen::Vector3d root;
    };
}

#endif

