//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCPIDCaptureCase, SCPIDCaptureConfirmationPresenter, SCPIDCaptureStage;

@protocol SCPIDCaptureConfirmationPresenterDelegate <NSObject>
- (void)idCaptureConfirmationPresenter:(SCPIDCaptureConfirmationPresenter *)arg1 didConfirmCapturedDataArray:(NSArray *)arg2 atCaptureStage:(SCPIDCaptureStage *)arg3;
- (void)idCaptureConfirmationPresenter:(SCPIDCaptureConfirmationPresenter *)arg1 didOpenCaptureCase:(SCPIDCaptureCase *)arg2;
@end

