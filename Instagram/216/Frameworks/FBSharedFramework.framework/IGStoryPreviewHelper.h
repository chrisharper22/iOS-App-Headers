//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGStoryPreviewHelper : NSObject
{
}

+ (void)applyLocationInfo:(struct IGOverlayViewLocationInfo)arg1 onView:(id)arg2;
+ (struct IGOverlayViewTapInfo)_tapInfoForView:(id)arg1 withVisibleRect:(struct CGRect)arg2 relativeToView:(id)arg3;
+ (struct IGOverlayViewTapInfo)tapInfoForViewUsingOutlinePath:(id)arg1 relativeToView:(id)arg2;
+ (struct IGOverlayViewTapInfo)tapInfoForViewUsingBounds:(id)arg1 relativeToView:(id)arg2;
+ (id)transformTargetForView:(id)arg1;
+ (id)legibleSecondaryColorGivenPrimaryColor:(id)arg1;
+ (id)legibleForegroundColorBackgroundColor:(id)arg1;
+ (id)legibleForegroundColorBackgroundColor:(id)arg1 defaultColor:(id)arg2;
+ (double)scaleToFitSize:(struct CGSize)arg1 boundingSize:(struct CGSize)arg2;
+ (double)maxHeightForViews:(id)arg1;

@end

