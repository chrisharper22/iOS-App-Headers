//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGVideoPlayerPreviewOverlayDisplayCondition : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    double _displayAfterDuration_previewDuration;
    double _displayAfterLoopCount_previewLoopCount;
}

+ (id)displayAfterLoopCountWithPreviewLoopCount:(double)arg1;
+ (id)displayAfterDurationWithPreviewDuration:(double)arg1;
- (void)matchDisplayAfterDuration:(CDUnknownBlockType)arg1 displayAfterLoopCount:(CDUnknownBlockType)arg2;
- (_Bool)matchBooleanDisplayAfterDuration:(CDUnknownBlockType)arg1 displayAfterLoopCount:(CDUnknownBlockType)arg2;

@end

