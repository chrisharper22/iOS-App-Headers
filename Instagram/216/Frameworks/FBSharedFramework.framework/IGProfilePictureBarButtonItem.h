//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class IGBouncyButton, IGProfileImage, IGProfilePictureImageView;

@interface IGProfilePictureBarButtonItem : UIBarButtonItem
{
    IGBouncyButton *_button;
    IGProfilePictureImageView *_imageView;
    CDUnknownBlockType _tapHandler;
}

- (void).cxx_destruct;
- (void)_didTapButton:(id)arg1;
- (id)_initWithProfileImage:(id)arg1;
@property(copy, nonatomic) IGProfileImage *profileImage;
- (id)initWithProfileImage:(id)arg1 tapHandler:(CDUnknownBlockType)arg2;
- (id)initWithProfileImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end

