//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface IGStoryCaptureAnimationController : NSObject
{
    NSArray *_animatableDestinationViews;
    UIView *_snapshotView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) NSArray *animatableDestinationViews; // @synthesize animatableDestinationViews=_animatableDestinationViews;
- (_Bool)beginAnimationIfPossibleWithStyle:(long long)arg1;
- (_Bool)beginAnimationIfPossibleWithRingSpec:(id)arg1;
- (_Bool)_beginAnimationIfPossibleWithRingSpec:(id)arg1 style:(long long)arg2;
- (_Bool)_canPerformTransition;
- (void)dealloc;
- (id)initWithSnapshotView:(id)arg1 hostingView:(id)arg2;

@end

