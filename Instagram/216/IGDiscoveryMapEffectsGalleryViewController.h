//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGARLocationEffectsFeedViewControllerDelegate-Protocol.h"
#import "IGAnalyticsModule-Protocol.h"
#import "IGDiscoveryMapPartialModalSheetContentProvider-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGInteractiveDismissTransitionControllerDelegate-Protocol.h"
#import "IGStoryCreationViewControllerNavigationDelegate-Protocol.h"

@class IGARLocationEffect, IGARLocationEffectsFeedViewController, IGDiscoveryMapLoggingContext, IGDiscoveryMapNavigationBar, IGUserSession, NSArray, NSMutableArray, NSString;
@protocol IGDiscoveryMapEffectsGalleryViewControllerDelegate;

@interface IGDiscoveryMapEffectsGalleryViewController : IGViewController <IGARLocationEffectsFeedViewControllerDelegate, IGInteractiveDismissTransitionControllerDelegate, IGStoryCreationViewControllerNavigationDelegate, IGAnalyticsModule, IGGestureHandler, IGDiscoveryMapPartialModalSheetContentProvider>
{
    IGARLocationEffectsFeedViewController *_feedViewController;
    IGDiscoveryMapNavigationBar *_navigationBar;
    NSString *_analyticsModule;
    IGDiscoveryMapLoggingContext *_loggingContext;
    IGUserSession *_userSession;
    IGARLocationEffect *_sticker;
    NSMutableArray *_effectIDsArray;
    NSArray *_stickers;
    id <IGDiscoveryMapEffectsGalleryViewControllerDelegate> _delegate;
    NSArray *_effectIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *effectIDs; // @synthesize effectIDs=_effectIDs;
@property(nonatomic) __weak id <IGDiscoveryMapEffectsGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)creationViewController:(id)arg1 didSharePostToStory:(long long)arg2 didSharePostToDirect:(_Bool)arg3;
- (void)creationViewController:(id)arg1 willShareToDirectRecipients:(id)arg2;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (_Bool)creationViewControllerIsDeallocatedAfterSending:(id)arg1;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 image:(id)arg6 storyModelArray:(id)arg7 metadataArray:(id)arg8;
- (void)cameraEffectFeedViewControllerWillBeginScrolling;
- (_Bool)cameraEffectFeedViewControllerShouldPresentCamera:(id)arg1;
- (void)cameraEffectFeedViewControllerDidTapTryIt:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (void)cameraEffectFeedViewControllerDidLoadData:(id)arg1;
- (void)cameraEffectFeedViewController:(id)arg1 didSelectTopic:(id)arg2;
- (void)cameraEffectFeedViewController:(id)arg1 didSelectSticker:(id)arg2 atSectionIndex:(long long)arg3;
- (void)cameraEffectFeedViewController:(id)arg1 didSelectPreview:(id)arg2 atSectionIndex:(long long)arg3;
- (void)cameraEffectFeedViewController:(id)arg1 didSelectCreator:(id)arg2 atSectionIndex:(long long)arg3;
- (void)cameraTransitionController:(id)arg1 didDragToDismissViewController:(id)arg2;
- (double)heightForPartialModalSheet;
- (id)contentScrollView;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)_didTapDismissButton:(id)arg1;
@property(readonly, nonatomic) IGDiscoveryMapNavigationBar *navigationBar;
- (void)viewDidLoad;
- (id)initWithEffectIDs:(id)arg1 stickers:(id)arg2 analyticsModule:(id)arg3 loggingContext:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

