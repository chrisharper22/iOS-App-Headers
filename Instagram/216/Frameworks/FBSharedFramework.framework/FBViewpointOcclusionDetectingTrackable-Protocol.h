//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBViewpointTrackable-Protocol.h>

@class NSArray;
@protocol FBViewpointTrackable;

@protocol FBViewpointOcclusionDetectingTrackable <FBViewpointTrackable>
- (NSArray *)vp_occlusiondetection_children;
- (id <FBViewpointTrackable>)vp_occlusiondetection_parent;
- (_Bool)vp_occlusiondetection_isOpaque;
@end

