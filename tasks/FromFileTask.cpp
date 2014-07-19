/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "FromFileTask.hpp"
#include <octomap/OcTree.h>
#include <octomap_wrapper/Conversion.hpp>

using namespace octomap;

FromFileTask::FromFileTask(std::string const& name)
    : FromFileTaskBase(name)
{
}

FromFileTask::FromFileTask(std::string const& name, RTT::ExecutionEngine* engine)
    : FromFileTaskBase(name, engine)
{
}

FromFileTask::~FromFileTask()
{
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See FromFileTask.hpp for more detailed
// documentation about them.

bool FromFileTask::configureHook()
{
    if (! FromFileTaskBase::configureHook())
        return false;

    octomap::OcTree tree(_path);
    octomap_wrapper::binaryMapToMsg<octomap::OcTree>(tree, wrapper);
    return true;
}
bool FromFileTask::startHook()
{
    if (! FromFileTaskBase::startHook())
        return false;
    return true;
}
void FromFileTask::updateHook()
{
    _octomap.write(wrapper);
    FromFileTaskBase::updateHook();
}
void FromFileTask::errorHook()
{
    FromFileTaskBase::errorHook();
}
void FromFileTask::stopHook()
{
    FromFileTaskBase::stopHook();
}
void FromFileTask::cleanupHook()
{
    FromFileTaskBase::cleanupHook();
}
