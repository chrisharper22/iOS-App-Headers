//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface IGVideoCallMiniViewerOverlayView : UIView
{
    UILabel *_messageOverlayLabel;
    long long _messageType;
}

- (void).cxx_destruct;
- (void)configureWithMessageType:(long long)arg1;
- (long long)messageType;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 messageType:(long long)arg2;

@end

