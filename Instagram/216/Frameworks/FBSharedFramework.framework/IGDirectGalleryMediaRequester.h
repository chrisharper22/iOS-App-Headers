//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGDirectGalleryMediaRequesting-Protocol.h>

@class IGVideoConfiguration, NSString, PHImageRequestOptions, PHVideoRequestOptions;
@protocol IGUserLauncherSet;

@interface IGDirectGalleryMediaRequester : NSObject <IGDirectGalleryMediaRequesting>
{
    struct CGSize _imageRequestTargetSize;
    PHImageRequestOptions *_imageRequestOptions;
    PHVideoRequestOptions *_videoRequestOptions;
    id <IGUserLauncherSet> _launcherSet;
    IGVideoConfiguration *_videoConfiguration;
}

- (void).cxx_destruct;
- (void)requestVideoWithAVAsset:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)requestVideoWithAsset:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)requestPhotoWithAsset:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithLauncherSet:(id)arg1 user:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
