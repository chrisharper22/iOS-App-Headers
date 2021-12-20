//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGAccountLocationTransparencyViewControllerDelegate-Protocol.h"
#import "IGFriendStatusReceivedListener-Protocol.h"
#import "IGTranslationNetworkDataSourceDelegate-Protocol.h"
#import "IGUserUpdatedListener-Protocol.h"

@class IGBloksAsyncActionHandler, IGProfileBioLinkNavigationHandler, IGTranslationNetworkDataSource, IGUser, IGUserSession, NSString, UIViewController;
@protocol IGProfileHeaderBioControllerTranslationDelegate;

@interface IGProfileHeaderBioController : NSObject <IGTranslationNetworkDataSourceDelegate, IGUserUpdatedListener, IGFriendStatusReceivedListener, IGAccountLocationTransparencyViewControllerDelegate>
{
    IGUser *_user;
    NSString *_analyticsModule;
    IGUserSession *_userSession;
    NSString *_mediaAttribution;
    NSString *_trackingToken;
    IGProfileBioLinkNavigationHandler *_linkNavigationHandler;
    UIViewController *_viewController;
    Class _contactActionHandlerClass;
    IGTranslationNetworkDataSource *_networkSource;
    IGBloksAsyncActionHandler *_asyncActionHandler;
    id <IGProfileHeaderBioControllerTranslationDelegate> _translationDelegate;
    long long _translationState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long translationState; // @synthesize translationState=_translationState;
@property(nonatomic) __weak id <IGProfileHeaderBioControllerTranslationDelegate> translationDelegate; // @synthesize translationDelegate=_translationDelegate;
- (void)accountLocationTransparencyViewControllerDidTapMoreATA:(id)arg1;
- (void)accountLocationTransparencyViewControllerDidTapHeader:(id)arg1;
- (void)bulkFriendStatusesReceivedForUsers:(id)arg1;
- (void)friendStatusReceiverForUser:(id)arg1;
- (void)userWasUpdated:(id)arg1;
- (void)_showDiversityInfoBloksAction;
- (void)_showTransparencyBottomSheetForProduct:(unsigned long long)arg1;
- (void)_resetTranslationStateIfNecessary;
- (void)translationNetworkDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)translationNetworkDataSource:(id)arg1 didLoadTranslations:(id)arg2;
- (void)toggleTranslationState;
- (void)handleTapForString:(id)arg1 URL:(id)arg2;
- (void)updateWithUser:(id)arg1 analyticsModule:(id)arg2 networker:(id)arg3 viewController:(id)arg4;
- (id)initWithUserSession:(id)arg1 contactActionHandler:(Class)arg2 mediaAttribution:(id)arg3 trackingToken:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
