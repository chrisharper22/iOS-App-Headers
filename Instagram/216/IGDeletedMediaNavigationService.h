//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedNetworkSourceDelegate-Protocol.h"
#import "IGMediaHardDeletedListener-Protocol.h"
#import "IGMediaRestoredListener-Protocol.h"

@class IGActionableConfirmationToastController, IGFeedNetworkSource, IGSingleFeedConfiguration, IGUserSession, NSString, UINavigationController;

@interface IGDeletedMediaNavigationService : NSObject <IGFeedNetworkSourceDelegate, IGMediaHardDeletedListener, IGMediaRestoredListener>
{
    IGUserSession *_userSession;
    IGSingleFeedConfiguration *_singleFeedConfiguration;
    UINavigationController *_navigationController;
    IGFeedNetworkSource *_networkSource;
    IGActionableConfirmationToastController *_toastController;
    CDUnknownBlockType _onMediaRestoredOrHardDeleted;
}

- (void).cxx_destruct;
- (void)_navigateToDeletedIGTVWithMedia:(id)arg1;
- (void)_navigateToDeletedStoryWithMedia:(id)arg1;
- (void)mediaWasRestored:(id)arg1;
- (void)mediaWasHardDeleted:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)navigateToDeletedMediaReel:(id)arg1 withNavController:(id)arg2;
- (void)navigateToDeletedMediaIGTV:(id)arg1 withNavController:(id)arg2;
- (void)navigateToDeletedMediaStory:(id)arg1 withNavController:(id)arg2;
- (void)navigateToDeletedMediaFeed:(id)arg1 withNavController:(id)arg2;
- (id)initWithUserSession:(id)arg1 onMediaRestoredOrHardDeleted:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
