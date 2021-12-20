//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGImageViewPlaceholderProviding-Protocol.h>

@class IGProfileImage, NSString, UIImage;

@interface IGProfilePictureImageViewPlaceholderProvider : NSObject <IGImageViewPlaceholderProviding>
{
    UIImage *_fallbackPlaceholderImage;
    _Bool _preferHDProfilePicture;
    IGProfileImage *_image;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool preferHDProfilePicture; // @synthesize preferHDProfilePicture=_preferHDProfilePicture;
@property(retain, nonatomic) IGProfileImage *image; // @synthesize image=_image;
- (void)placeholderImageForViewSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hideProgressiveScansIfPlaceholderShown;
- (id)initWithFallbackPlaceholderImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
