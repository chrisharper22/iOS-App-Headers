//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class NSURL, UIImage;

@interface IGExternalImageResolvingResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    UIImage *_image;
    NSURL *_imageURL;
}

+ (id)imageURL:(id)arg1;
+ (id)image:(id)arg1;
- (void).cxx_destruct;
- (void)matchImage:(CDUnknownBlockType)arg1 imageURL:(CDUnknownBlockType)arg2;

@end

