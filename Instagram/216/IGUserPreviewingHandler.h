//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectShareSheetControllerDelegate-Protocol.h"
#import "IGPreviewPresentationDelegate-Protocol.h"
#import "IGPreviewingDelegate-Protocol.h"
#import "IGUserPreviewControllerDelegate-Protocol.h"

@class IGSponsoredSupportConfiguration, IGUserPreviewInfo, IGUserSession, IGViewController, NSString;
@protocol IGAnalyticsModule, IGDirectShareSheetControlling, IGUserPreviewingControllerHandling;

@interface IGUserPreviewingHandler : NSObject <IGDirectShareSheetControllerDelegate, IGPreviewPresentationDelegate, IGUserPreviewControllerDelegate, IGPreviewingDelegate>
{
    IGUserPreviewInfo *_userPreviewInfo;
    IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
    IGUserSession *_userSession;
    IGViewController<IGAnalyticsModule> *_controller;
    id <IGUserPreviewingControllerHandling> _handler;
    id <IGDirectShareSheetControlling> _reshareController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGDirectShareSheetControlling> reshareController; // @synthesize reshareController=_reshareController;
@property(readonly, nonatomic) id <IGUserPreviewingControllerHandling> handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) __weak IGViewController<IGAnalyticsModule> *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)directShareSheetControllerWillPresentConfirmationToast:(id)arg1;
- (void)directShareSheetController:(id)arg1 didTapRecipient:(id)arg2 selected:(_Bool)arg3;
- (void)directShareSheetControllerDidSelect:(id)arg1 sender:(id)arg2 directRecipients:(id)arg3 externalServices:(id)arg4 text:(id)arg5 selectedPostPk:(id)arg6;
- (void)directShareSheetControllerDidDismissConfirmationToast:(id)arg1;
- (void)directShareSheetControllerDidDismissReshareSheet:(id)arg1 willPresentConfirmationToast:(_Bool)arg2 hasShared:(_Bool)arg3;
- (void)userPreviewControllerDidTapViewProfile:(id)arg1 analyticsModule:(id)arg2;
- (void)previewControllerWillPresentDirectShareSheetController:(id)arg1;
- (void)_presentUserProfileViewControllerWithAnimation:(_Bool)arg1 analyticsModule:(id)arg2;
- (id)_contextMenuConfigurationForPreviewUser:(id)arg1;
- (id)_previewViewControllerForPreviewUser:(id)arg1 previewingContext:(id)arg2;
- (id)_previewUserForLocation:(struct CGPoint)arg1 inSourceView:(id)arg2 sourceRect:(struct CGRect *)arg3;
- (void)performViewControllerCommitForPreviewedItem;
- (id)contextMenuConfigurationForCollectionViewCell:(id)arg1 collectionView:(id)arg2 viewController:(id)arg3 location:(struct CGPoint)arg4;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)initWithUserSession:(id)arg1 controller:(id)arg2 handler:(id)arg3 sponsoredSupportConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

