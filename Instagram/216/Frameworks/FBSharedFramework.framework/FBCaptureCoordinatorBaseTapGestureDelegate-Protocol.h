//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBCaptureCoordinatorBaseGestureDelegate-Protocol.h>

@class FBCaptureCoordinatorBase, FBMPTapGestureData, UITapGestureRecognizer, UIView;

@protocol FBCaptureCoordinatorBaseTapGestureDelegate <FBCaptureCoordinatorBaseGestureDelegate>
- (void)captureCoordinator:(FBCaptureCoordinatorBase *)arg1 didProduceTapGestureData:(FBMPTapGestureData *)arg2 fromCaptureView:(UIView *)arg3;
- (_Bool)captureCoordinator:(FBCaptureCoordinatorBase *)arg1 shouldProduceTapGestureDataFromTapGestureRecognizer:(UITapGestureRecognizer *)arg2;
@end
