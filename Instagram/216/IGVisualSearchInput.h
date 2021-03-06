//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import "NSCoding-Protocol.h"

@class IGMedia, IGPostItem, NSString;

@interface IGVisualSearchInput : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGMedia *_post_media;
    IGPostItem *_post_selectedPostItem;
    NSString *_post_shoppingSessionId;
    NSString *_imageBase64String_imageBase64String;
    long long _imageBase64String_viewMode;
    NSString *_imageBase64String_shoppingSessionId;
    NSString *_imageBase64String_searchSessionId;
}

+ (id)postWithMedia:(id)arg1 selectedPostItem:(id)arg2 shoppingSessionId:(id)arg3;
+ (id)imageBase64StringWithImageBase64String:(id)arg1 viewMode:(long long)arg2 shoppingSessionId:(id)arg3 searchSessionId:(id)arg4;
- (void).cxx_destruct;
- (void)matchPost:(CDUnknownBlockType)arg1 imageBase64String:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

