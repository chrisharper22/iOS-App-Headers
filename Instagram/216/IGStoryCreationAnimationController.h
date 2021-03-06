//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGStoryCreationAnimationType-Protocol.h"

@class NSString;
@protocol IGStoryCreationAnimationCameraPresentableType;

@interface IGStoryCreationAnimationController : NSObject <IGStoryCreationAnimationType>
{
    _Bool _presenting;
    id <IGStoryCreationAnimationCameraPresentableType> _cameraViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) id <IGStoryCreationAnimationCameraPresentableType> cameraViewController; // @synthesize cameraViewController=_cameraViewController;
- (void)_adjustButton:(id)arg1 transform:(struct CGAffineTransform)arg2 alpha:(double)arg3;
- (void)_showPreviewHeaderView:(id)arg1 footerView:(id)arg2 show:(_Bool)arg3;
- (void)_showCameraFooterView:(id)arg1 headerView:(id)arg2 show:(_Bool)arg3;
- (void)_dismissTransition:(id)arg1;
- (void)_presentationTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

