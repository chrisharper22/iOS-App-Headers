//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGVideoTimelineThumbnailProvider-Protocol.h>

@class AVAsset, AVAssetImageGenerator, NSCache, NSString;
@protocol IGVideoTimelineThumbnailProviderDelegate;

@interface IGAVAssetThumbnailProvider : NSObject <IGVideoTimelineThumbnailProvider>
{
    AVAssetImageGenerator *_imageGenerator;
    AVAsset *_asset;
    NSCache *_thumbnailsCache;
    _Bool _cacheEnabled;
    id <IGVideoTimelineThumbnailProviderDelegate> _delegate;
    long long _thumbnailCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool cacheEnabled; // @synthesize cacheEnabled=_cacheEnabled;
@property(readonly, nonatomic) long long thumbnailCount; // @synthesize thumbnailCount=_thumbnailCount;
@property(nonatomic) __weak id <IGVideoTimelineThumbnailProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancel;
- (void)_generateThumbnailsWithCount:(long long)arg1 displaySize:(struct CGSize)arg2;
- (void)generateThumbnailsWithCount:(long long)arg1 displaySize:(struct CGSize)arg2 launcherSetProvider:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
