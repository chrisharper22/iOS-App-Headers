//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class IGMedia, IGPhoto, IGShoppingLiveBroadcastDataModel, IGShowreelNativeInfo, NSArray;

@interface IGShoppingProductCollectionTileCoverMedia : FBIvarBasedEqualityObject <NSCoding>
{
    unsigned long long _subtype;
    IGPhoto *_image;
    IGShowreelNativeInfo *_showreelNativeInfo;
    IGMedia *_media;
    NSArray *_mediaSlideshow;
    IGShoppingLiveBroadcastDataModel *_broadcastWrapper;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
+ (id)showreelNativeInfo:(id)arg1;
+ (id)mediaSlideshow:(id)arg1;
+ (id)media:(id)arg1;
+ (id)image:(id)arg1;
+ (id)broadcastWrapper:(id)arg1;
- (void).cxx_destruct;
- (long long)matchIntegerImage:(CDUnknownBlockType)arg1 showreelNativeInfo:(CDUnknownBlockType)arg2 media:(CDUnknownBlockType)arg3 mediaSlideshow:(CDUnknownBlockType)arg4 broadcastWrapper:(CDUnknownBlockType)arg5;
- (void)matchImage:(CDUnknownBlockType)arg1 showreelNativeInfo:(CDUnknownBlockType)arg2 media:(CDUnknownBlockType)arg3 mediaSlideshow:(CDUnknownBlockType)arg4 broadcastWrapper:(CDUnknownBlockType)arg5;
- (double)matchDoubleImage:(CDUnknownBlockType)arg1 showreelNativeInfo:(CDUnknownBlockType)arg2 media:(CDUnknownBlockType)arg3 mediaSlideshow:(CDUnknownBlockType)arg4 broadcastWrapper:(CDUnknownBlockType)arg5;
- (_Bool)matchBooleanImage:(CDUnknownBlockType)arg1 showreelNativeInfo:(CDUnknownBlockType)arg2 media:(CDUnknownBlockType)arg3 mediaSlideshow:(CDUnknownBlockType)arg4 broadcastWrapper:(CDUnknownBlockType)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)broadcastWrapper;
- (id)toastViewThumbnail;
- (id)mediaSlideshow;
- (id)video;
- (id)media;
- (id)photo;
- (long long)mediaType;
- (id)previewMedia;
- (id)contentId;

@end

