//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class IGImageView, NSString, NSURL, UILabel;

@interface IGQuestionStickerResponseSendMessageButton : IGBouncyButton
{
    IGImageView *_profilePictureImageView;
    UILabel *_userNameLabel;
    NSString *_userName;
    NSURL *_profilePictureURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

