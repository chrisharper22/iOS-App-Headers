//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/KFComponent.h>

@class NSMutableOrderedSet, NSNumber;

@interface KFLayerComponent : KFComponent
{
    struct KFValue<std::vector<KFPathCommand>> path;
    struct KFValue<double> opacity;
    struct CGSize size;
    long long vectorCompositeOrder;
    double progressOffset;
    double cumulativeProgressOffset;
    double fromProgress;
    double toProgress;
    struct KFValue<CGPoint> anchorPoint;
    struct KFValue<std::vector<KFPathCommand>> position;
    struct KFValue<double> xPosition;
    struct KFValue<double> yPosition;
    struct KFValue<double> rotation;
    struct KFValue<CGPoint> scale;
    long long zIndex;
    _Bool inShapeGroup;
    unsigned short sceneEntityID;
    NSMutableOrderedSet *childLayerEntityIDs;
    NSMutableOrderedSet *childSceneInstanceEntityIDs;
    _Bool excludeFromHierarchy;
    NSNumber *parentLayerEntityID;
}

+ (unsigned short)componentClassIdentifier;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearChildSceneInstanceEntityIDs;
- (void)addChildSceneInstanceEntityID:(id)arg1;
- (void)addChildLayerEntityID:(id)arg1;
- (id)init;

@end

