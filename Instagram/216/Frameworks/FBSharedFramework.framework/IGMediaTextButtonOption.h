//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGProfileImage, NSString, UIImage;

@interface IGMediaTextButtonOption : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    NSString *_title;
    unsigned long long _leftIcon_iconAsset;
    NSString *_leftIcon_title;
    NSString *_leftProfilePhoto_title;
    IGProfileImage *_leftProfilePhoto_image;
    NSString *_leftImage_title;
    UIImage *_leftImage_image;
    NSString *_chevronRight_title;
}

+ (id)title:(id)arg1;
+ (id)leftProfilePhotoWithTitle:(id)arg1 image:(id)arg2;
+ (id)leftImageWithTitle:(id)arg1 image:(id)arg2;
+ (id)leftIconWithIconAsset:(unsigned long long)arg1 title:(id)arg2;
+ (id)chevronRightWithTitle:(id)arg1;
- (void).cxx_destruct;
- (void)matchTitle:(CDUnknownBlockType)arg1 leftIcon:(CDUnknownBlockType)arg2 leftProfilePhoto:(CDUnknownBlockType)arg3 leftImage:(CDUnknownBlockType)arg4 chevronRight:(CDUnknownBlockType)arg5;

@end

