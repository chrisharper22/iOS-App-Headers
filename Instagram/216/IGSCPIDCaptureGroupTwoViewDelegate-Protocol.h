//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSCPIDCaptureFlowPhotoPickerView, IGSCPIDCaptureGroupTwoView, NSURL, UIImage;

@protocol IGSCPIDCaptureGroupTwoViewDelegate <NSObject>
- (void)SCPIDCaptureGroupTwoView:(IGSCPIDCaptureGroupTwoView *)arg1 didTapNextButtonWithPhotoID:(UIImage *)arg2 anyID:(UIImage *)arg3;
- (void)SCPIDCaptureGroupTwoView:(IGSCPIDCaptureGroupTwoView *)arg1 didTapChoosePhotoWithPhotoPickerView:(IGSCPIDCaptureFlowPhotoPickerView *)arg2;
- (void)SCPIDCaptureGroupTwoView:(IGSCPIDCaptureGroupTwoView *)arg1 didTapLearnMoreLinkWithUrl:(NSURL *)arg2;
@end
