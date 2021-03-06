//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFriendStatusChangedListener-Protocol.h>
#import <FBSharedFramework/IGUserBlockingActionListener-Protocol.h>
#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGARDeliveryFacade, IGAREffectDownloader, IGAREffectRemoveController, IGAREffectSaveController, IGAREffectSavingDownloadListener, IGAssetModelStorage, IGCameraLogger, IGEffectMetadataCache, IGGraphQLService, NSString;
@protocol IGAPIClient, IGARFilterDownloaderProviding, IGGraphQLCache, IGUserLauncherSet;

@interface IGAREffectDownloaderManager : NSObject <IGFriendStatusChangedListener, IGUserBlockingActionListener, IGUserSessionEndingObject>
{
    id <IGUserLauncherSet> _launcherSet;
    id <IGAPIClient> _networker;
    IGGraphQLService *_graphQLService;
    id <IGGraphQLCache> _graphQLDiskCache;
    IGAssetModelStorage *_assetModelStorage;
    IGARDeliveryFacade *_arDeliveryFacade;
    id <IGARFilterDownloaderProviding> _filterDownloaderProvider;
    IGAREffectDownloader *_shoppingDownloader;
    IGAREffectDownloader *_selfieStickerDownloader;
    IGAREffectDownloader *_avatarDownloader;
    IGAREffectSaveController *_saveController;
    IGAREffectRemoveController *_removeController;
    IGAREffectDownloader *_precaptureDownloader;
    IGAREffectDownloader *_postcaptureDownloader;
    IGAREffectSavingDownloadListener *_precaptureSaveListener;
    IGEffectMetadataCache *_effectMetadataCache;
    IGCameraLogger *_cameraLogger;
    NSString *_userPK;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGARDeliveryFacade *arDeliveryFacade; // @synthesize arDeliveryFacade=_arDeliveryFacade;
- (void)user:(id)arg1 blocked:(_Bool)arg2 messagingOnlyBlocked:(_Bool)arg3;
- (void)friendStatusChangedForUser:(id)arg1 withUserAction:(long long)arg2;
- (void)userSessionWillEnd;
- (void)clearUserScopedMetadataCache;
- (id)downloaderForChainingContext:(id)arg1;
- (id)_downloaderForPostcapture;
- (id)_downloaderForPrecapture;
- (id)downloaderForApplicatorSurface:(unsigned long long)arg1;
- (id)initWithUserPK:(id)arg1 launcherSet:(id)arg2 networker:(id)arg3 authHeaderManager:(id)arg4 arDeliveryFacade:(id)arg5 filterDownloaderProvider:(id)arg6 assetModelStorage:(id)arg7 saveController:(id)arg8 graphQLService:(id)arg9 graphQLDiskCache:(id)arg10 removeController:(id)arg11 friendStatusChangedAnnouncer:(id)arg12 userBlockingActionAnnouncer:(id)arg13 effectMetadataCache:(id)arg14 cameraLogger:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

