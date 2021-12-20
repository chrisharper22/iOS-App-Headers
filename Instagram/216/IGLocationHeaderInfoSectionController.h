//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import "IGARLocationEffectCollectionDownloaderDelegate-Protocol.h"
#import "IGInteractiveDismissTransitionControllerDelegate-Protocol.h"
#import "IGStoryCreationViewControllerNavigationDelegate-Protocol.h"
#import "IGTransitionZoomFromCapable-Protocol.h"

@class IGARLocationEffectCollectionDownloader, IGARLocationEffectPreviewGQLDataProvider, IGDiscoveryMapLoggingContext, IGUserSession, NSNumber, NSString;

@interface IGLocationHeaderInfoSectionController : IGListGenericSectionController <IGARLocationEffectCollectionDownloaderDelegate, IGTransitionZoomFromCapable, IGInteractiveDismissTransitionControllerDelegate, IGStoryCreationViewControllerNavigationDelegate>
{
    IGUserSession *_userSession;
    NSString *_analyticsModule;
    IGARLocationEffectCollectionDownloader *_effectCollectionDownloader;
    IGARLocationEffectPreviewGQLDataProvider *_previewDataProvider;
    IGDiscoveryMapLoggingContext *_loggingContext;
    _Bool _isStickerPin;
    _Bool _hasLoggedLocationButtonView;
    NSNumber *_effectsCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasLoggedLocationButtonView; // @synthesize hasLoggedLocationButtonView=_hasLoggedLocationButtonView;
@property(nonatomic) _Bool isStickerPin; // @synthesize isStickerPin=_isStickerPin;
@property(retain, nonatomic) NSNumber *effectsCount; // @synthesize effectsCount=_effectsCount;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
@property(readonly, nonatomic) IGARLocationEffectPreviewGQLDataProvider *previewDataProvider;
- (void)creationViewController:(id)arg1 didSharePostToStory:(long long)arg2 didSharePostToDirect:(_Bool)arg3;
- (void)creationViewController:(id)arg1 willShareToDirectRecipients:(id)arg2;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (_Bool)creationViewControllerIsDeallocatedAfterSending:(id)arg1;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 image:(id)arg6 storyModelArray:(id)arg7 metadataArray:(id)arg8;
- (void)cameraTransitionController:(id)arg1 didDragToDismissViewController:(id)arg2;
- (void)downloader:(id)arg1 didFailToDownloadPlaceID:(id)arg2;
- (void)downloader:(id)arg1 didFinishDownloadingPlaceID:(id)arg2 placeLocationContent:(id)arg3;
- (void)_didTapSeePlaceEffectsButton;
- (void)_numGuidesTapped;
- (void)_didTapMoreInformationButton;
- (void)_didTapExploreNearbyButton;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 mapSessionID:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

