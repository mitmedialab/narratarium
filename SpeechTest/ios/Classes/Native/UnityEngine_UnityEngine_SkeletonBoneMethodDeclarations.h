#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t272;
struct SkeletonBone_t272_marshaled;

void SkeletonBone_t272_marshal(const SkeletonBone_t272& unmarshaled, SkeletonBone_t272_marshaled& marshaled);
void SkeletonBone_t272_marshal_back(const SkeletonBone_t272_marshaled& marshaled, SkeletonBone_t272& unmarshaled);
void SkeletonBone_t272_marshal_cleanup(SkeletonBone_t272_marshaled& marshaled);
