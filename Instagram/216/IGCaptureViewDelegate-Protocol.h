//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGCaptureView;

@protocol IGCaptureViewDelegate <NSObject>
- (void)captureViewDidRequestPermissions:(IGCaptureView *)arg1;
- (void)captureView:(IGCaptureView *)arg1 didChangeToCameraMode:(long long)arg2;
@end

