/* Generated from orogen/lib/orogen/templates/typekit/Opaques.hpp */

#ifndef __OROGEN_GENERATED_octomap_USER_MARSHALLING_HH
#define __OROGEN_GENERATED_octomap_USER_MARSHALLING_HH

#include <octomap/Types.hpp>

namespace orogen_typekits
{
    
    /** Converts \c real_type into \c intermediate */
    void toIntermediate(::orogenoctomap::Octomap& intermediate, ::octomap::OcTree const& real_type);
    /** Converts \c intermediate into \c real_type */
    void fromIntermediate(::octomap::OcTree& real_type, ::orogenoctomap::Octomap const& intermediate);
        
    
}

#endif

