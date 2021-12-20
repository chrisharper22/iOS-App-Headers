//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectMessageDjangoSendServicePermanentMediaUploadPreparer, IGDirectMutationMediaUploadObserver, IGPostCreationManager, NSArray, NSString;
@protocol FBCancelable, IGAPIClient, IGAnalyticsEventLoggingProtocol, IGDirectSaveSelfieStickerServiceAnnouncer, IGUserLauncherSet;

@interface IGDirectSaveSelfieStickerService : NSObject
{
    IGDirectMessageDjangoSendServicePermanentMediaUploadPreparer *_mediaUploadPreparer;
    id <IGUserLauncherSet> _launcherSet;
    IGPostCreationManager *_postCreationManager;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    id <IGAPIClient> _networker;
    IGDirectMutationMediaUploadObserver *_observer;
    id <IGDirectSaveSelfieStickerServiceAnnouncer> _announcer;
    id <FBCancelable> _requestToken;
    NSString *_userPk;
    NSArray *_optimisticSavedSelfieStickers;
    NSArray *_serverSavedSelfieStickers;
    NSArray *_savedSelfieStickers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *savedSelfieStickers; // @synthesize savedSelfieStickers=_savedSelfieStickers;
- (void)_handleFailure;
- (void)_handleSuccessWithResponse:(id)arg1;
- (void)_selfieStickerDidFailToUnsave;
- (void)_selfieStickerDidFailToSave;
- (void)_selfieStickerDidSave;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_sendSaveSelfieStickerRequestWithUploadId:(id)arg1 effectId:(id)arg2;
- (void)unsaveSelfieStickerWithMediaId:(id)arg1;
- (void)saveSelfieStickerWithMediaId:(id)arg1;
- (void)saveSelfieStickerWithVideoComposition:(id)arg1 effectId:(id)arg2;
- (void)stop;
- (void)start;
- (id)initWithMediaUploadPreparer:(id)arg1 launcherSet:(id)arg2 postCreationManager:(id)arg3 analyticsLogger:(id)arg4 networker:(id)arg5 userPk:(id)arg6;

@end

