//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGMedia, IGPhoto;

@interface IGShoppingProductTileCoverMedia : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGPhoto *_productImage;
    IGMedia *_media;
}

+ (id)productImage:(id)arg1;
+ (id)media:(id)arg1;
- (void).cxx_destruct;
- (void)matchProductImage:(CDUnknownBlockType)arg1 media:(CDUnknownBlockType)arg2;
- (id)video;
- (id)media;
- (id)photo;

@end

