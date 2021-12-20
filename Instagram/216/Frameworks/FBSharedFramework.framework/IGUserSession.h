//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGUserScopedObjects.h>

#import <FBSharedFramework/IGSessionEnding-Protocol.h>
#import <FBSharedFramework/IGUserLauncherSetProviding-Protocol.h>
#import <FBSharedFramework/IGUserSessionEndingObject-Protocol.h>

@class IGScopedObjectMap, NSString;

@interface IGUserSession : IGUserScopedObjects <IGUserLauncherSetProviding, IGSessionEnding, IGUserSessionEndingObject>
{
    IGScopedObjectMap *_objectMap;
    double _invalidateTime;
    unsigned long long _creationReason;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long creationReason; // @synthesize creationReason=_creationReason;
- (id)UNSAFE_IGUserSessionProvider_ONLY_userSession;
- (void)userSessionWillEnd;
- (void)configureWithEndBlocker:(id)arg1;
- (id)valueWithInitializer:(CDUnknownFunctionPointerType)arg1;
- (id)releasableValueWithInitializer:(CDUnknownFunctionPointerType)arg1;
- (id)_valueWithOptions:(unsigned long long)arg1 initializer:(CDUnknownFunctionPointerType)arg2;
- (id)initWithUser:(id)arg1 creationReason:(unsigned long long)arg2 sessionUserDefaults:(id)arg3 authHeaderManager:(id)arg4 deviceSession:(id)arg5;
- (id)storyCreationManager;
- (id)directMessageSendService;
- (id)directOutgoingUpdateSender;
- (id)storyAutosaveDraftStore;
- (id)storyDraftStore;
- (id)soundboardEffectsBrowserCatalog;
- (void)prefetchMusicBrowserSoundboardEffectsCatalog;
- (id)musicBrowserCatalogForProductName:(id)arg1;
- (void)prefetchMusicBrowserCatalogForProductName:(id)arg1;
- (id)postCreationCompletionHandler;
- (id)videoPlayerManager;
- (id)videoFrameLoggingBufferService;
- (id)visualMessageTranscodedVideoURLCache;
- (id)serviceManager;
- (id)tooltipNuxManager;
- (id)storyCameraFormatModelProvider;
- (id)audioTranscriptionAPITaskQueue;
- (id)fanClubDataSource;
- (id)legacyDiskPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

