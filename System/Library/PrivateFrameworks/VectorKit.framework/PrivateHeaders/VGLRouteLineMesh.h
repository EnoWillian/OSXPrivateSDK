//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLMesh.h>

@class VGLCenterLineMeshVendor, VGLRouteLineArrowMesh, VGLTexture;

__attribute__((visibility("hidden")))
@interface VGLRouteLineMesh : VGLMesh
{
    int _z;
    VGLTexture *_texture;
    float _splitLocation;
    struct vector<VGLArrowMeshInfo, vk_allocator<VGLArrowMeshInfo>> _arrowInfos;
    VGLCenterLineMeshVendor *_slowTrafficMeshVendor;
    VGLCenterLineMeshVendor *_mediumTrafficMeshVendor;
    VGLRouteLineArrowMesh *_arrowMesh;
    struct vector<routelineTrafficSegment, vk_allocator<routelineTrafficSegment>> _trafficSegments;
}

+ (double)arrowTailSizeForRouteLineWidth:(double)arg1;
+ (double)arrowHeadSizeForRouteLineWidth:(double)arg1;
@property(readonly, nonatomic) VGLCenterLineMeshVendor *mediumTrafficMeshVendor; // @synthesize mediumTrafficMeshVendor=_mediumTrafficMeshVendor;
@property(readonly, nonatomic) VGLCenterLineMeshVendor *slowTrafficMeshVendor; // @synthesize slowTrafficMeshVendor=_slowTrafficMeshVendor;
@property(nonatomic) float splitLocation; // @synthesize splitLocation=_splitLocation;
@property(retain, nonatomic) VGLTexture *texture; // @synthesize texture=_texture;
@property(nonatomic) int z; // @synthesize z=_z;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)pushArrowRangeStart:(int)arg1 startOffset:(float)arg2 end:(int)arg3 endOffset:(float)arg4 maneuverIndex:(int)arg5;
- (void)pushDebugArrowRangeStart:(int)arg1 startOffset:(float)arg2 end:(int)arg3 endOffset:(float)arg4 maneuverIndex:(int)arg5;
- (void)buildArrowWithArrowInfo:(const CDStruct_8471daaf *)arg1;
- (BOOL)hasArrowMesh;
- (void)buildArrowMeshWithCurrentManeuver:(int)arg1;
- (void)addArrowMeshInfo:(CDStruct_8471daaf)arg1;
- (void)freeze;
- (void)pushTrafficSpeed:(BOOL)arg1;
- (void)drawArrows:(id)arg1;
- (void)drawTrianglesWithContext:(id)arg1 offset:(int)arg2 count:(int)arg3;
- (void)drawTrianglesWithContext:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithVertexCapacity:(int)arg1 indexCapacity:(int)arg2;

@end

