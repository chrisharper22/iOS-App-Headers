//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFilterControlView;

@protocol IGFilterControlViewDelegate <NSObject>
- (void)filterControlView:(IGFilterControlView *)arg1 didChangetintIntensity:(double)arg2 tintType:(unsigned long long)arg3;
- (void)filterControlView:(IGFilterControlView *)arg1 didChangeTintColor:(unsigned long long)arg2 withTintType:(unsigned long long)arg3;
- (void)filterControlViewNeedUpdateValue;
- (void)filterControlViewDidTapRotate:(IGFilterControlView *)arg1;
- (void)filterControlView:(IGFilterControlView *)arg1 didChangeValue:(double)arg2;
- (void)filterControlViewDidEndDragging:(IGFilterControlView *)arg1;
- (void)filterControlViewDidStartDragging:(IGFilterControlView *)arg1;
- (void)filterControlViewDidPressCancel:(IGFilterControlView *)arg1;
- (void)filterControlViewDidPressDone:(IGFilterControlView *)arg1;
@end

