//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBMPGestureInput.h>

@class FBMPRawTouchGestureRecognizer;

@interface FBMPRawTouchGestureInput : FBMPGestureInput
{
}

@property(readonly, nonatomic) FBMPRawTouchGestureRecognizer *rawTouchGestureRecognizer;
- (id)_gestureDataWithUUID:(id)arg1;
- (void)_handleGesture:(id)arg1;
- (id)initWithRawTouchGestureRecognizer:(id)arg1 screenScale:(double)arg2;

@end
