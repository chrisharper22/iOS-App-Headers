//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGStorySharePostListener-Protocol.h"

@class IGShoppingAutoHighlightNetworker, IGUserSession, NSMutableArray, NSMutableSet, NSString;

@interface IGShoppingAutoHighlightStoryUploadManager : NSObject <IGStorySharePostListener>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGShoppingAutoHighlightNetworker *_networker;
    NSMutableArray *_uploadedMediaWithAutoHighlightOff;
    NSMutableSet *_storyUploadIdsToBeAddedToHighlight;
}

- (void).cxx_destruct;
- (void)storyItemPosted:(id)arg1 videoFileURL:(id)arg2 shareTypeInt:(long long)arg3 mediaData:(id)arg4 postShareId:(id)arg5 reelOwner:(id)arg6;
- (void)_addToShopHighlightWithPostedMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchShopHighlightReelWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)_handleAutoHighlightUpdateSuccessWithShopHighlight:(id)arg1 uploadedMedia:(id)arg2;
- (void)turnAutoHighlightOnFromQPAndCreateShopHighlightWithLastPostedMedia;
- (void)startListeningToStorySharedPostNotificationWithUploadIds:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
