//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class IGPillNotificationViewConfig, UIImageView, UILabel, UIView;

@interface IGPillNotificationView : IGBouncyButton
{
    IGPillNotificationViewConfig *_config;
    UIView *_containerView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_accessoryTextLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithConfig:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

