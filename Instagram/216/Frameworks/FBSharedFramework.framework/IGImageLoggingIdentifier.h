//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSString;

@interface IGImageLoggingIdentifier : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    NSString *_media_mediaID;
    NSString *_product_productID;
    NSString *_content_contentID;
}

+ (id)productWithProductID:(id)arg1;
+ (id)mediaWithMediaID:(id)arg1;
+ (id)contentWithContentID:(id)arg1;
- (void).cxx_destruct;
- (void)matchMedia:(CDUnknownBlockType)arg1 product:(CDUnknownBlockType)arg2 content:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mediaID;
- (id)value;

@end

