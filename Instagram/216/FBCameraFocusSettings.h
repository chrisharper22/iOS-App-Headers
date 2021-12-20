//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class FBCameraFocusPointOfInterest, FBCameraFocusRangeRestriction, FBCameraFocusSmoothAutoFocusOption;

@interface FBCameraFocusSettings : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    float _lockedCustom_lensPosition;
    FBCameraFocusPointOfInterest *_autoFocus_pointOfInterest;
    FBCameraFocusRangeRestriction *_autoFocus_autoFocusRangeRestriction;
    FBCameraFocusSmoothAutoFocusOption *_autoFocus_smoothAutoFocusOption;
    FBCameraFocusPointOfInterest *_continuousAutoFocus_pointOfInterest;
    FBCameraFocusRangeRestriction *_continuousAutoFocus_autoFocusRangeRestriction;
    FBCameraFocusSmoothAutoFocusOption *_continuousAutoFocus_smoothAutoFocusOption;
}

+ (id)lockedCustomWithLensPosition:(float)arg1;
+ (id)locked;
+ (id)continuousAutoFocusWithPointOfInterest:(id)arg1 autoFocusRangeRestriction:(id)arg2 smoothAutoFocusOption:(id)arg3;
+ (id)autoFocusWithPointOfInterest:(id)arg1 autoFocusRangeRestriction:(id)arg2 smoothAutoFocusOption:(id)arg3;
- (void).cxx_destruct;
- (void)matchLocked:(CDUnknownBlockType)arg1 lockedCustom:(CDUnknownBlockType)arg2 autoFocus:(CDUnknownBlockType)arg3 continuousAutoFocus:(CDUnknownBlockType)arg4;

@end

