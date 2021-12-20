//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGCoWatchPhotoItem-Protocol.h>
#import <FBSharedFramework/IGCoWatchableMedia-Protocol.h>

@class IGCoWatchAudioAttribution, IGCoWatchSizedUrl, IGMedia, IGPostItem, IGUser, NSArray, NSNumber, NSString;

@interface IGCoWatchFeedPostItem : NSObject <IGCoWatchableMedia, IGCoWatchPhotoItem>
{
    IGPostItem *_post;
    IGMedia *_media;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly) NSNumber *carouselItemIndex;
@property(readonly, nonatomic) IGCoWatchAudioAttribution *audioAttribution;
@property(readonly, nonatomic) IGCoWatchSizedUrl *photoURL;
@property(readonly, nonatomic) NSArray *captionLocales;
@property(readonly, nonatomic) unsigned long long mediaProductType;
@property(readonly, nonatomic) _Bool isLiveStreaming;
@property(readonly, nonatomic) _Bool supportsVideoDurationControls;
@property(readonly, nonatomic) long long contentSource;
@property(readonly, nonatomic) _Bool hasAudio;
@property(readonly, nonatomic) IGUser *owner;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithMedia:(id)arg1 postItemPK:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

