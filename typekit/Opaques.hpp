/* Generated from orogen/lib/orogen/templates/typekit/Opaques.hpp */

#ifndef __OROGEN_GENERATED_octomap_USER_MARSHALLING_HH
#define __OROGEN_GENERATED_octomap_USER_MARSHALLING_HH

#include <octomap/Types.hpp>
#include <octomap/octomap.h>

namespace orogen_typekits
{
    
    /** Converts \c real_type into \c intermediate */
    void toIntermediate(::octomap::Octomap& intermediate, ::octomap::OcTree const& real_type);
    /** Converts \c intermediate into \c real_type */
    void fromIntermediate(::octomap::OcTree& real_type, ::octomap::Octomap const& intermediate);
        
    
}

#endif

