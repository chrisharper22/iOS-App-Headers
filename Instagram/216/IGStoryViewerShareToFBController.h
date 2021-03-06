//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGShareListManagerDelegate-Protocol.h"
#import "IGXPostingToFbUpsellDelegate-Protocol.h"

@class IGFacebookXPostingWaterfallLoggingManager, IGShareListManager, IGUserSession, IGXPostingToFbUpsellManager, NSString;
@protocol IGStoryItemType, IGStoryViewerShareToFBControllerDelegate;

@interface IGStoryViewerShareToFBController : NSObject <IGShareListManagerDelegate, IGXPostingToFbUpsellDelegate>
{
    id <IGStoryItemType> _currentStoryItem;
    IGShareListManager *_shareListManager;
    IGUserSession *_userSession;
    long long _surface;
    IGFacebookXPostingWaterfallLoggingManager *_fbXPostingWaterfallLoggingManager;
    IGXPostingToFbUpsellManager *_xPostingUpsellManager;
    id <IGStoryViewerShareToFBControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryViewerShareToFBControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)xPostingUpsellManagerDidFailShareToFacebookWithStoryItem:(id)arg1;
- (void)xPostingUpsellManagerDidShareToFacebookWithStoryItem:(id)arg1;
- (void)shareServiceConfigureManager:(id)arg1 didFailLoginForService:(long long)arg2;
- (void)shareServiceConfigureManager:(id)arg1 didFinishLoginForService:(long long)arg2;
- (id)viewControllerForShareConfiguration;
- (void)shareListNeedsReloadForServiceAtIndex:(long long)arg1 userInteraction:(_Bool)arg2;
- (void)shareListNeedsFullReload;
- (void)_setUpShareListWithStoryItem:(id)arg1;
- (void)_showShareToFacebookWithAutoSharingOptionAlert;
- (void)_showShareToFacebookDefaultAlert;
- (void)_showShareToFacebookAlert;
- (_Bool)_isUserTappingShareToFacebookFirstTime;
- (id)_buildXPostingLoggerForStoryItem:(id)arg1;
- (void)_requestToChangeCrossShareToFacebookState;
- (void)logFBXpostingPrimaryClickEvent;
- (void)logFacebookButtonViewEventWithEventName:(id)arg1 accountType:(long long)arg2 numOfViews:(unsigned long long)arg3 storyMediaId:(id)arg4 isFbc:(_Bool)arg5;
- (void)shareToFacebookStoryWithStoryItem:(id)arg1;
- (void)removeFromFacebookWithStoryItem:(id)arg1;
- (void)changeCrossShareStateWithStoryItem:(id)arg1;
- (id)initWithSession:(id)arg1 surface:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

