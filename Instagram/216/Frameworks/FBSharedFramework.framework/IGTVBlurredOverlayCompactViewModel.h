//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGGating, IGImageSpecifier;

@interface IGTVBlurredOverlayCompactViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGGating *_gated_gating;
    IGImageSpecifier *_gated_background;
}

+ (id)none;
+ (id)hidden;
+ (id)gatedWithGating:(id)arg1 background:(id)arg2;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 hidden:(CDUnknownBlockType)arg2 gated:(CDUnknownBlockType)arg3;

@end

