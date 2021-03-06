//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGDirectAvatarView, IGMedia, NSString, UIImageView, UILabel, UIView;

@interface IGChainingContainerElongatedRecipientSendButton : UIControl
{
    UIView *_backgroundView;
    IGDirectAvatarView *_recipientAvatarView;
    UILabel *_recipientLabel;
    UIImageView *_sentView;
    IGMedia *_media;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (id)media;
- (void)_configureWithRecipient:(id)arg1 hasAlreadyBeenSent:(_Bool)arg2;
- (void)configureWithMedia:(id)arg1 recipient:(id)arg2 hasAlreadyBeenSent:(_Bool)arg3 analyticsModule:(id)arg4 superviewLayoutAnimations:(CDUnknownBlockType)arg5;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

